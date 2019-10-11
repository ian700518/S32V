/*****************************************************************************
* 
* NXP Confidential Proprietary
*
* Copyright (c) 2015-2016 Freescale Semiconductor
* Copyright 2017 NXP 
* All Rights Reserved
*
******************************************************************************
*
* THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
* IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
* INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
* HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
* STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
* IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
* THE POSSIBILITY OF SUCH DAMAGE.
*
****************************************************************************/

#ifndef GDCFEATURETRACKINGDISPLAYTASK_HPP
#define GDCFEATURETRACKINGDISPLAYTASK_HPP

#include "gdc_ft_messages.hpp"
#include "gdc_ft_types.hpp"
#include "global_errors.h"
#include <stdint.h>



//**************************************************************************/
// Literals & definitions

struct GdcFt_ProfilingData
{
   uint32_t                 mSceneCounter;
   uint64_t                 mTicks[gcApexCvEndTick];     // even number Entry, odd number Return
};

//**************************************************************************/
// Class declaration.

/*
 *  \brief GdcFt Task
 *
 */
class GdcFt_DisplayTask : public GdcFt_Task
{
public:
   GdcFt_DisplayTask();
   virtual ~GdcFt_DisplayTask();

   LIB_RESULT Configure(const int32_t cReceiveMessageQueueId,
                        const int32_t cSceneTaskMessageQueueId);

private:
   int32_t mReceiveMessageQueueId;
   int32_t mSceneTaskMessageQueueId;
   bool    mIsTaskClosing;
   bool    mIsConfigured;

   int32_t mDisplayWidthInPixels;
   int32_t mDisplayHeightInPixels;
   int32_t mDisplayBitsPerPixel;

   bool    mWeRotateDisplay;

   GdcFt_Display mDisplay;

   /**********************************************************************************
    *  for application profiling
    */
   bool       mEnableProfile;
   uint32_t   mSamplingDuration;
   uint32_t   mStartingFrame;
   char       mOutputFilename[gcFileNameSize+1];
   char       mOutputfileFormat[4];
   vsdk::UMat mOutputDataUMat;
   vsdk::Mat  mOutputDataMat;

public:
   /*!*********************************************************************************
    *  @brief Method called in the context of the spawned task, contains initialization code.
    */
   LIB_RESULT TaskOpen();

   /*!*********************************************************************************
    *  @brief Method called in the context of the spawned task, contains the main body.
    */
   LIB_RESULT TaskService();

   /*!*********************************************************************************
    *  @brief Method called in the context of the spawned task, contains the deinitialization code.
    */
   LIB_RESULT TaskClose();

private:
   LIB_RESULT DumpProfilingInBuffer(uint8_t* profilingOutputBuffer, GdcFt_CompositionData& rData);
   LIB_RESULT DumpProfilingInFile(char* profilingoutputFilename, uint8_t* profilingData);
   LIB_RESULT HandleCompositionData(GdcFt_CompositionData& rData);
   LIB_RESULT HandleDetectorData(GdcFt_DetectorData& rData);
   LIB_RESULT HandlePyramidData(GdcFt_PyramidData& rData);

private:
   GdcFt_DisplayTask( const GdcFt_DisplayTask& );            // Do not implement
   GdcFt_DisplayTask& operator=( const GdcFt_DisplayTask& ); // Do not implement
};

#endif /* GDCFEATURETRACKINGDISPLAYTASK_HPP */

