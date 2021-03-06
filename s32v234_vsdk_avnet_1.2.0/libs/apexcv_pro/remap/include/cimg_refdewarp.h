/*****************************************************************************
* 
* NXP Confidential Proprietary
*
* Copyright (c) 2014-2016 Freescale Semiconductor
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

#ifndef CIMGREFDEWARP_H
#define CIMGREFDEWARP_H

#include "icp_data.h"
#include "apexcv_pro_remap.h"

int simulateGrayDewarp( 
                uint8_t* dst,
                uint8_t* src,
                const uint32_t* offset,
                const uint8_t* delta,
                apexcv::INTER_TYPE mapMode,
                int inputStride, int inputHeight,
                int outputWidth, int outputHeight,
                int outputStride,
                int sliceHeight
);

int simulateRGBDewarp( 
                uint8_t* dst,
                uint8_t* src,
                const uint32_t* offset,
                const uint8_t* delta,
                apexcv::INTER_TYPE mapMode,
                int inputStride, int inputHeight,
                int outputWidth, int outputHeight,
                int outputStride,
                int sliceHeight
);

#endif /* CIMGREFDEWARP_H */

