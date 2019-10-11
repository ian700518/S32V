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
#ifndef APUGAUSS5X5PROCESS_H
#define APUGAUSS5X5PROCESS_H

#include "common_base_process_init.h"
#include "apu_gauss_5x5_graph_names.h"

#ifdef APEX2_EMULATE
#include "apu_gauss_5x5_apu_process_desc.hpp"
REGISTER_PROCESS_TYPE(GAUSS_5x5_PI, apu_gauss_5x5_apu_process_desc)
#else
#include <umat.hpp>

#include str_header(GAUSS_5x5_PI,hpp)
#endif

class CGauss_5x5_Proc : public CBase_ProcInit<GAUSS_5x5_PI> {
private:
public:	// Input params
	
	vsdk::UMat lInput;

	/*Output data is generated by this process*/
	vsdk::UMat lOutput;
	

public:
	CGauss_5x5_Proc(int apex_id = APEX_APEX0)
	: CBase_ProcInit<GAUSS_5x5_PI>(apex_id)
	{		
	}

	CGauss_5x5_Proc(vsdk::UMat input, int apex_id = APEX_APEX0)
		: CBase_ProcInit<GAUSS_5x5_PI>(apex_id)
	{
		InitData(input);
		Connect();
	}


		
	virtual ~CGauss_5x5_Proc();

	int InitData(vsdk::UMat input);

	int Connect();
	
};


#endif /* APUGAUSS5X5PROCESS_H */