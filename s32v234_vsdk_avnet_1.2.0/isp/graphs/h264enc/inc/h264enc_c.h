#pragma once
#include "seq_graph.h"
#include "seq_graph_meta.h"

/*****************************************************************************
* consts
*****************************************************************************/

enum {
  FDMA_IX_RGB888,
  FDMA_IX_END
};

/*****************************************************************************
* exported variables
*****************************************************************************/

extern SEQ_Head_Ptr_t   gpGraph[];
extern GraphMetadata_t  gGraphMetadata;

extern SEQ_Buf_t	ChGain_Exposure_Buffer_0;
extern SEQ_Buf_t	Debayer_G_Buffer_0;
extern SEQ_Buf_t	Debayer_G_Buffer_1;
extern SEQ_Buf_t	Debayer_BR_Buffer_2;
extern SEQ_Buf_t	Debayer_BR_Buffer_1;
extern SEQ_Buf_t	Debayer_BR_Buffer_0;
extern SEQ_Buf_t	RGB_2_YUV_Buffer_0;
extern SEQ_Buf_t	RGB_2_YUV_Buffer_1;
extern SEQ_Buf_t	RGB_2_YUV_Buffer_2;
extern SEQ_Buf_t	CAM0_Buffer_0;
extern SEQ_Buf_t	H264_Encoder_Buffer_0;
extern SEQ_Buf_t	U_DownScale2_Buffer_0;
extern SEQ_Buf_t	V_DownScale2_Buffer_0;
extern SEQ_Buf_t	rgb888_planar2interleaved_Buffer_0;
extern SEQ_Buf_t	FastDMA_Buffer_0;
