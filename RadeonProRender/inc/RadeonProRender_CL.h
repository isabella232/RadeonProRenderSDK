/*****************************************************************************\
*
*  Module Name    RadeonProRender_CL.h
*  Project        AMD Radeon ProRender OpenCL Interop API
*
*  Description    Radeon ProRender OpenCL Interop header
*
*  Copyright 2011 - 2020 Advanced Micro Devices, Inc.
*
*  All rights reserved.  This notice is intended as a precaution against
*  inadvertent publication and does not imply publication or any waiver
*  of confidentiality.  The year included in the foregoing notice is the
*  year of creation of the work.
*
\*****************************************************************************/
#ifndef __RADEONPRORENDER_CL_H
#define __RADEONPRORENDER_CL_H

#define RPR_API_ENTRY

#ifdef __cplusplus
extern "C" {
#endif


#include "RadeonProRender.h"

/* rpr_context_properties  */
#define RPR_CL_CONTEXT 0x3001 
#define RPR_CL_DEVICE 0x3002 
#define RPR_CL_COMMAND_QUEUE 0x3003 

/* rpr_framebuffer_properties */
#define RPR_CL_MEM_OBJECT 0x4001 

typedef void * rpr_cl_context;
typedef void * rpr_cl_device;
typedef void * rpr_cl_command_queue;
typedef void * rpr_cl_mem;
#ifdef __cplusplus
}
#endif

#endif  /*__RADEONPRORENDER_CL_H  */
