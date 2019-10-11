/*****************************************************************************
*
* Freescale Confidential Proprietary
*
* Copyright (c) 2015 Freescale Semiconductor;
* All Rights Reserved
*
*****************************************************************************
*
* THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESSED OR
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL FREESCALE OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
****************************************************************************/

/***************************************************************************/
/* Include files. */
#include "gdc_pd_configuration.hpp"
#include "gdc_pd_messages.hpp"
#include "gdc_pd_task_aggcf_approx_scale.hpp"
#include "iniparser.h"
#include "GDC_OAL_Semaphore.hpp"
#include "communications.hpp"
#include "global_errors.h"
#include <stdlib.h>
#include <stdint.h>
#include <new>
//#include <apexcv_aggcf_test.h>
//#define DUMP_PROFILING_TO_FILE
#define AGGCF_APPR_PROFILING "aggcf_appr_profiling.csv"
//#define DUMP_IMAGES

/***************************************************************************/
/* Local Literals & definitions */

/***************************************************************************/
/***************************************************************************/
GdcPd_AggcfApproxScaleTask::GdcPd_AggcfApproxScaleTask()
    : mReceiveMessageQueueId(0), mDetectorTaskMessageQueueId(0),
      //mSceneSize,
      mWeUseApexAggcf(true), mIsTaskClosing(false), mIsConfigured(false)
//mpAcf_detector
{
}

/***************************************************************************/
/***************************************************************************/
GdcPd_AggcfApproxScaleTask::~GdcPd_AggcfApproxScaleTask()
{
}

/***************************************************************************/
/***************************************************************************/
LIB_RESULT GdcPd_AggcfApproxScaleTask::Configure(const int32_t         cReceiveMessageQueueId,
                                                 const int32_t         cDetectorTaskMessageQueueId,
                                                 const GdcPd_FrameSize cpcScene)
{
  LIB_RESULT libResult = LIB_FAILURE;

  if(mIsConfigured == false)
  {
    mReceiveMessageQueueId      = cReceiveMessageQueueId;
    mDetectorTaskMessageQueueId = cDetectorTaskMessageQueueId;
    mSceneSize.mHeight          = cpcScene.mHeight;
    mSceneSize.mWidth           = cpcScene.mWidth;
    mSceneSize.mSpan            = cpcScene.mSpan;

    mIsConfigured = true;
    libResult     = LIB_SUCCESS;
  }

  return libResult;
}

/***************************************************************************/
/***************************************************************************/
LIB_RESULT GdcPd_AggcfApproxScaleTask::TaskOpen()
{
  GDC_TRACE;

  LIB_RESULT libResult = LIB_SUCCESS;

  if(mIsConfigured == true)
  {
    /****************************************************************************
        * initialize detector done in featureTask
        ****************************************************************************/
    const uint32_t cFileNameSize            = 256;
    char           cFileName[cFileNameSize] = {0};

    strncpy(cFileName, gcDataPath, gcFileNameSize);

    dictionary* pDictionary = 0;
    pDictionary             = iniparser_load(gcIniFileName);

    if(pDictionary != 0)
    {
      strncat(cFileName, iniparser_getstring_const(pDictionary, "DATA:Filename", gcFilenametraining),
              gcFileNameSize); // Bad should reduce by amount of char in gcDataPath

      iniparser_freedict(pDictionary);
      pDictionary = 0;
    }
    else
    {
      strncat(cFileName, gcFilenametraining,
              gcFileNameSize); // Bad should reduce by amount of char in gcDataPath
    }

    mAcf_detector.InitDetectorModel(cFileName);
    if(mAcf_detector.IsDetectorModelFailToLoaded() == true)
    {
      libResult = 1;
      printf("%s::could not load detector model %s\n", __FILE__, cFileName);
    }

    mAcf_detector.CalcScaleParameters(mSceneSize.mWidth, mSceneSize.mHeight);
  }

  return libResult;
}

/***************************************************************************/
/***************************************************************************/
LIB_RESULT GdcPd_AggcfApproxScaleTask::TaskService()
{
  GDC_TRACE;

  LIB_RESULT libResult = LIB_FAILURE;

  MessageBase* pMessage           = 0;
  int32_t      messageSizeInBytes = 0;

  while(mIsTaskClosing == false)
  {
    // This task uses a message handler pattern and will only run
    // if a message is sent to its queue.
    // It spends the rest of its time suspended on the message queue semaphore.

    libResult = MsgMgr_MessageReceive(mReceiveMessageQueueId, pMessage, messageSizeInBytes,
                                      0xFFFFFFFF); // 0xFFFFFFFF wait forever
    if(libResult == LIB_SUCCESS && pMessage != 0)
    {
      switch(pMessage->mMessageId)
      {
        case MESSAGE_ID_GDC_PD_LUV_DATA:
        {
          GdcPd_LuvData* pData = (GdcPd_LuvData*)pMessage;

          libResult = GdcPd_AggcfApproxScaleTask::HandleLuvData(*pData);
          SHOW_ERROR(libResult == LIB_SUCCESS);
          GDC_TRACE;

          mIsTaskClosing = !(libResult == LIB_SUCCESS);

          pData->~GdcPd_LuvData();
          break;
        }
        case MESSAGE_ID_GDC_PD_EXIT_REQUEST:
        {
          libResult = MsgMgr_MessageQueueSetFlowControl(mReceiveMessageQueueId,
                                                        /*cIsSendingAllowed*/ false,
                                                        /*cIsReceivingAllowed*/ true);
          SHOW_ERROR(libResult == LIB_SUCCESS);

          libResult = GdcPd_Helper::SendRequest(MESSAGE_ID_GDC_PD_EXIT_REQUEST, mReceiveMessageQueueId,
                                                mDetectorTaskMessageQueueId, pMessage->mPriority);
          SHOW_ERROR(libResult == LIB_SUCCESS || libResult == LIB_SENDING_NOT_ALLOWED);
          mIsTaskClosing = true;

          break;
        }
        case MESSAGE_ID_GDC_PD_RESET_REQUEST:
        {
          libResult = GdcPd_Helper::SendRequest(MESSAGE_ID_GDC_PD_RESET_REQUEST, mReceiveMessageQueueId,
                                                mDetectorTaskMessageQueueId);
          SHOW_ERROR(libResult == LIB_SUCCESS);
          break;
        }
        default:
        {
          SHOW_ERROR(false); // This should NEVER happen!
          break;
        }
      }
      free(pMessage);
      pMessage = 0;
    }

    if(gcIsRunningWithThreads == false)
    {
      break;
    }
  }

  if(libResult == LIB_SUCCESS && mIsTaskClosing == true)
  {
    libResult = LIB_APP_IS_CLOSING;
  }

  return libResult;
}

/***************************************************************************/
/***************************************************************************/
LIB_RESULT GdcPd_AggcfApproxScaleTask::TaskClose()
{
  GDC_TRACE;
  LIB_RESULT libResult = LIB_FAILURE;

  //
  // Free resources owned by the task
  //

  //
  // Free messages still in the tasks queue
  //
  MessageBase* pMessage           = 0;
  int32_t      messageSizeInBytes = 0;

  while(1)
  {
    libResult = MsgMgr_MessageReceive(mReceiveMessageQueueId, pMessage, messageSizeInBytes, 0);

    if(libResult == LIB_SUCCESS && pMessage != 0)
    {
      switch(pMessage->mMessageId)
      {
        case MESSAGE_ID_GDC_PD_LUV_DATA:
        {
          GdcPd_LuvData* pData = (GdcPd_LuvData*)pMessage;

          //               libResult = GdcPd_Helper::FreeImageReply(pReply); SHOW_ERROR(libResult == LIB_SUCCESS);

          pData->~GdcPd_LuvData();
          break;
        }
        case MESSAGE_ID_GDC_PD_EXIT_REQUEST:
        {
          GdcPd_ExitRequest* pRequest = (GdcPd_ExitRequest*)pMessage;

          // Nothing to free

          pRequest->~GdcPd_ExitRequest();
          break;
        }
        default:
        {
          SHOW_ERROR(false); // This should NEVER happen!
          break;
        }
      }
      free(pMessage);
      pMessage = 0;
    }
    else
    {
      break;
    }
  }

  GDC_TRACE;

  return libResult;
}

/***************************************************************************/
/***************************************************************************/
LIB_RESULT GdcPd_AggcfApproxScaleTask::HandleLuvData(GdcPd_LuvData& rData)
{
  LIB_RESULT libResult = LIB_FAILURE;

  AcfProfilingInfo acfProfilingInfo_per[gcNumberOfRealScales];
  memset((char*)acfProfilingInfo_per, 0x0, sizeof(AcfProfilingInfo) * gcNumberOfRealScales);
  // mSceneSize.mWidth should be 640
  // mSceneSize.mHeight should be 480

  if(rData.mSceneRgb24_umat.empty() == false)
  {
    rData.mTicks[gcApexCvNthOctaveTick] = FSL_Ticks();

    /****************************************************************************
      * extract channel feature
      ****************************************************************************/

    //calculate 2nd octave
    mAcf_detector.CalcChannelsOctave(rData.mSceneLuv_umat, rData.mpOutput_Py_umat, gcRealScaleIndex[1],
                                     gcApexCvApproxScaleApexId);
    //calculate 3rd octave
    mAcf_detector.CalcChannelsOctave(rData.mSceneLuv_umat, rData.mpOutput_Py_umat, gcRealScaleIndex[2],
                                     gcApexCvApproxScaleApexId);

    rData.mTicks[gcApexCvNthOctaveTick + 1] = FSL_Ticks();

    /****************************************************************************
      * Just send the data to detector
      ****************************************************************************/
    libResult = GdcPd_Helper::SendFeatureData(
        mDetectorTaskMessageQueueId, rData.mSceneRgb24_umat,
        rData.mSceneRgb24_umat.getMat(vsdk::ACCESS_READ | OAL_USAGE_CACHED).data, // Debug only
        rData.mSceneCounter, rData.mpOutput_Py_umat, rData.mTicks, acfProfilingInfo_per);
  }
  return libResult;
}