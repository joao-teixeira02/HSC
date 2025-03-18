// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XPIXEL_PROC_H
#define XPIXEL_PROC_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xpixel_proc_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XPixel_proc_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XPixel_proc;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XPixel_proc_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XPixel_proc_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XPixel_proc_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XPixel_proc_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XPixel_proc_Initialize(XPixel_proc *InstancePtr, u16 DeviceId);
XPixel_proc_Config* XPixel_proc_LookupConfig(u16 DeviceId);
int XPixel_proc_CfgInitialize(XPixel_proc *InstancePtr, XPixel_proc_Config *ConfigPtr);
#else
int XPixel_proc_Initialize(XPixel_proc *InstancePtr, const char* InstanceName);
int XPixel_proc_Release(XPixel_proc *InstancePtr);
#endif


u32 XPixel_proc_Get_frames_V(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_frames_V_vld(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_rows_V(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_rows_V_vld(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_pixels_V(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_pixels_V_vld(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_sum_before_V(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_sum_before_V_vld(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_sum_after_V(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_sum_after_V_vld(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_values_V(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_values_V_vld(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_read_done_V(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_read_done_V_vld(XPixel_proc *InstancePtr);
void XPixel_proc_Set_write_ready_V(XPixel_proc *InstancePtr, u32 Data);
u32 XPixel_proc_Get_write_ready_V(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_0_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_0_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_0_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_0_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_0_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_0_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_0_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_0_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_0_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_1_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_1_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_1_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_1_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_1_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_1_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_1_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_1_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_1_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_2_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_2_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_2_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_2_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_2_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_2_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_2_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_2_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_2_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_3_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_3_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_3_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_3_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_3_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_3_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_3_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_3_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_3_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_4_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_4_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_4_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_4_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_4_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_4_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_4_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_4_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_4_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_5_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_5_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_5_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_5_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_5_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_5_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_5_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_5_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_5_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_6_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_6_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_6_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_6_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_6_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_6_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_6_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_6_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_6_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_7_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_7_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_7_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_7_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_7_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_7_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_7_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_7_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_7_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_8_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_8_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_8_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_8_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_8_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_8_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_8_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_8_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_8_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_9_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_9_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_9_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_9_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_9_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_9_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_9_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_9_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_9_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_10_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_10_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_10_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_10_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_10_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_10_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_10_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_10_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_10_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_11_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_11_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_11_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_11_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_11_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_11_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_11_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_11_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_11_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_12_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_12_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_12_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_12_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_12_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_12_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_12_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_12_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_12_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_13_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_13_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_13_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_13_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_13_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_13_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_13_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_13_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_13_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_14_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_14_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_14_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_14_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_14_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_14_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_14_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_14_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_14_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_15_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_15_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_15_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_15_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_15_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_15_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_15_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_15_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_15_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_16_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_16_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_16_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_16_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_16_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_16_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_16_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_16_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_16_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_17_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_17_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_17_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_17_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_17_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_17_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_17_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_17_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_17_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_18_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_18_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_18_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_18_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_18_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_18_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_18_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_18_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_18_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_19_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_19_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_19_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_19_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_19_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_19_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_19_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_19_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_19_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_20_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_20_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_20_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_20_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_20_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_20_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_20_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_20_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_20_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_21_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_21_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_21_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_21_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_21_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_21_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_21_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_21_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_21_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_22_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_22_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_22_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_22_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_22_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_22_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_22_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_22_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_22_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_23_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_23_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_23_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_23_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_23_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_23_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_23_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_23_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_23_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_24_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_24_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_24_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_24_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_24_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_24_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_24_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_24_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_24_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_25_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_25_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_25_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_25_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_25_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_25_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_25_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_25_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_25_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_26_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_26_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_26_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_26_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_26_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_26_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_26_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_26_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_26_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_27_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_27_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_27_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_27_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_27_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_27_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_27_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_27_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_27_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_28_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_28_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_28_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_28_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_28_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_28_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_28_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_28_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_28_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_29_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_29_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_29_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_29_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_29_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_29_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_29_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_29_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_29_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_30_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_30_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_30_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_30_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_30_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_30_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_30_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_30_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_30_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_31_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_31_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_31_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_31_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_31_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_31_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_31_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_31_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_31_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_32_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_32_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_32_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_32_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_32_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_32_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_32_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_32_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_32_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_33_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_33_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_33_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_33_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_33_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_33_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_33_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_33_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_33_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_34_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_34_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_34_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_34_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_34_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_34_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_34_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_34_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_34_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_35_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_35_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_35_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_35_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_35_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_35_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_35_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_35_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_35_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_36_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_36_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_36_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_36_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_36_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_36_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_36_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_36_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_36_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_37_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_37_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_37_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_37_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_37_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_37_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_37_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_37_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_37_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_38_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_38_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_38_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_38_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_38_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_38_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_38_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_38_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_38_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_39_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_39_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_39_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_39_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_39_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_39_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_39_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_39_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_39_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_40_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_40_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_40_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_40_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_40_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_40_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_40_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_40_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_40_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_41_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_41_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_41_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_41_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_41_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_41_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_41_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_41_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_41_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_42_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_42_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_42_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_42_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_42_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_42_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_42_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_42_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_42_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_43_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_43_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_43_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_43_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_43_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_43_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_43_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_43_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_43_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_44_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_44_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_44_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_44_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_44_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_44_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_44_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_44_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_44_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_45_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_45_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_45_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_45_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_45_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_45_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_45_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_45_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_45_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_46_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_46_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_46_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_46_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_46_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_46_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_46_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_46_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_46_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_47_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_47_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_47_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_47_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_47_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_47_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_47_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_47_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_47_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_48_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_48_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_48_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_48_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_48_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_48_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_48_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_48_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_48_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_49_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_49_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_49_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_49_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_49_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_49_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_49_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_49_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_49_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_50_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_50_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_50_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_50_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_50_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_50_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_50_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_50_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_50_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_51_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_51_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_51_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_51_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_51_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_51_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_51_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_51_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_51_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_52_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_52_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_52_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_52_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_52_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_52_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_52_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_52_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_52_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_53_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_53_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_53_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_53_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_53_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_53_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_53_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_53_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_53_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_54_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_54_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_54_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_54_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_54_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_54_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_54_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_54_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_54_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_55_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_55_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_55_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_55_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_55_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_55_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_55_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_55_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_55_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_56_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_56_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_56_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_56_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_56_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_56_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_56_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_56_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_56_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_57_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_57_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_57_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_57_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_57_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_57_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_57_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_57_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_57_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_58_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_58_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_58_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_58_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_58_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_58_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_58_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_58_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_58_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_59_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_59_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_59_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_59_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_59_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_59_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_59_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_59_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_59_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_60_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_60_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_60_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_60_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_60_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_60_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_60_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_60_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_60_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_61_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_61_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_61_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_61_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_61_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_61_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_61_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_61_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_61_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_62_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_62_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_62_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_62_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_62_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_62_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_62_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_62_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_62_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Get_shared_memory_63_V_BaseAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_63_V_HighAddress(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_63_V_TotalBytes(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_63_V_BitWidth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Get_shared_memory_63_V_Depth(XPixel_proc *InstancePtr);
u32 XPixel_proc_Write_shared_memory_63_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Read_shared_memory_63_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length);
u32 XPixel_proc_Write_shared_memory_63_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);
u32 XPixel_proc_Read_shared_memory_63_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length);

#ifdef __cplusplus
}
#endif

#endif
