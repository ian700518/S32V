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

/*!*********************************************************************************
 * *  @file fire7_e1e3s1_graph.hpp
 * *  @brief Graph for FIRE7_E1E3S1 
 * ***********************************************************************************/
#ifndef FIRE7E1E3S1GRAPH_HPP
#define FIRE7E1E3S1GRAPH_HPP

#include <acf_graph.hpp>
#include "neural_network_acf.h"

class fire7_e1e3s1_graph : public ACF_Graph
{
public:
   fire7_e1e3s1_graph() : ACF_Graph()
   {
      GET_KERNEL_HANDLE(&_kernel_info_apu_fire7_e1e3s1_forward, "apu_fire7_e1e3s1_forward");
   }

   void Create()
   {
      /* set identifier for graph */
      SetIdentifier("fire7_e1e3s1_graph");

      /* add kernels */
      AddKernel("FIRE7_E1E3S1", "apu_fire7_e1e3s1_forward");

      /* add graph port */
      AddInputPort("FIRE7_E1E3S1_INPUT_IMAGE");
      AddInputPort("FIRE7_E1E3S1_INPUT_WEIGHT");
      AddInputPort("FIRE7_E1E3S1_INPUT_PARAMS");
      AddOutputPort("FIRE7_E1E3S1_OUTPUT_S1");

      /* specify connection */
      Connect(GraphPort("FIRE7_E1E3S1_INPUT_IMAGE"),   KernelPort("FIRE7_E1E3S1", "INPUT_IMAGE"));
      Connect(GraphPort("FIRE7_E1E3S1_INPUT_WEIGHT"),  KernelPort("FIRE7_E1E3S1", "INPUT_WEIGHT"));
      Connect(GraphPort("FIRE7_E1E3S1_INPUT_PARAMS"),  KernelPort("FIRE7_E1E3S1", "INPUT_PARAMS"));

      Connect(KernelPort("FIRE7_E1E3S1", "OUTPUT_S1"), GraphPort("FIRE7_E1E3S1_OUTPUT_S1"));
   }
};

#endif /* FIRE7E1E3S1GRAPH_HPP */

