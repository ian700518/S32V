/*****************************************************************************
* 
* NXP Confidential Proprietary
*
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

/*!*********************************************************************************
*  \file 
*  \brief ACF Process Descriptor 
***********************************************************************************/
#ifndef MERGECHANNEL2CHAPUPROCESSDESC_HPP
#define MERGECHANNEL2CHAPUPROCESSDESC_HPP

#include <acf_process_desc_apu.hpp>
#include "merge_channel_2ch_graph.hpp"

class merge_channel_2ch_apu_process_desc : public ACF_Process_Desc_APU
{
public:
   void Create()
   {
      Initialize(mGraph, "MERGE_CHANNEL_2CH");
   }
   
   merge_channel_2ch_graph mGraph;
};

#endif /* MERGECHANNEL2CHAPUPROCESSDESC_HPP */
