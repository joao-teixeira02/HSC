// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xpixel_proc.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XPixel_proc_CfgInitialize(XPixel_proc *InstancePtr, XPixel_proc_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

u32 XPixel_proc_Get_frames_V(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_FRAMES_V_DATA);
    return Data;
}

u32 XPixel_proc_Get_frames_V_vld(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_FRAMES_V_CTRL);
    return Data & 0x1;
}

u32 XPixel_proc_Get_rows_V(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_ROWS_V_DATA);
    return Data;
}

u32 XPixel_proc_Get_rows_V_vld(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_ROWS_V_CTRL);
    return Data & 0x1;
}

u32 XPixel_proc_Get_pixels_V(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_PIXELS_V_DATA);
    return Data;
}

u32 XPixel_proc_Get_pixels_V_vld(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_PIXELS_V_CTRL);
    return Data & 0x1;
}

u32 XPixel_proc_Get_sum_before_V(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_SUM_BEFORE_V_DATA);
    return Data;
}

u32 XPixel_proc_Get_sum_before_V_vld(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_SUM_BEFORE_V_CTRL);
    return Data & 0x1;
}

u32 XPixel_proc_Get_sum_after_V(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_SUM_AFTER_V_DATA);
    return Data;
}

u32 XPixel_proc_Get_sum_after_V_vld(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_SUM_AFTER_V_CTRL);
    return Data & 0x1;
}

u32 XPixel_proc_Get_values_V(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_VALUES_V_DATA);
    return Data;
}

u32 XPixel_proc_Get_values_V_vld(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_VALUES_V_CTRL);
    return Data & 0x1;
}

u32 XPixel_proc_Get_read_done_V(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_READ_DONE_V_DATA);
    return Data;
}

u32 XPixel_proc_Get_read_done_V_vld(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_READ_DONE_V_CTRL);
    return Data & 0x1;
}

void XPixel_proc_Set_write_ready_V(XPixel_proc *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XPixel_proc_WriteReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_WRITE_READY_V_DATA, Data);
}

u32 XPixel_proc_Get_write_ready_V(XPixel_proc *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XPixel_proc_ReadReg(InstancePtr->Axilites_BaseAddress, XPIXEL_PROC_AXILITES_ADDR_WRITE_READY_V_DATA);
    return Data;
}

u32 XPixel_proc_Get_shared_memory_0_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_0_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_0_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_0_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_0_V;
}

u32 XPixel_proc_Get_shared_memory_0_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_0_V;
}

u32 XPixel_proc_Write_shared_memory_0_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_0_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_0_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_0_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_1_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_1_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_1_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_1_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_1_V;
}

u32 XPixel_proc_Get_shared_memory_1_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_1_V;
}

u32 XPixel_proc_Write_shared_memory_1_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_1_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_1_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_1_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_2_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_2_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_2_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_2_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_2_V;
}

u32 XPixel_proc_Get_shared_memory_2_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_2_V;
}

u32 XPixel_proc_Write_shared_memory_2_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_2_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_2_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_2_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_3_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_3_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_3_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_3_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_3_V;
}

u32 XPixel_proc_Get_shared_memory_3_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_3_V;
}

u32 XPixel_proc_Write_shared_memory_3_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_3_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_3_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_3_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_4_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_4_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_4_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_4_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_4_V;
}

u32 XPixel_proc_Get_shared_memory_4_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_4_V;
}

u32 XPixel_proc_Write_shared_memory_4_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_4_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_4_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_4_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_5_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_5_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_5_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_5_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_5_V;
}

u32 XPixel_proc_Get_shared_memory_5_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_5_V;
}

u32 XPixel_proc_Write_shared_memory_5_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_5_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_5_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_5_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_6_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_6_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_6_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_6_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_6_V;
}

u32 XPixel_proc_Get_shared_memory_6_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_6_V;
}

u32 XPixel_proc_Write_shared_memory_6_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_6_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_6_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_6_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_7_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_7_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_7_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_7_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_7_V;
}

u32 XPixel_proc_Get_shared_memory_7_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_7_V;
}

u32 XPixel_proc_Write_shared_memory_7_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_7_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_7_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_7_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_8_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_8_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_8_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_8_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_8_V;
}

u32 XPixel_proc_Get_shared_memory_8_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_8_V;
}

u32 XPixel_proc_Write_shared_memory_8_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_8_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_8_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_8_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_9_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_9_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_9_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_9_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_9_V;
}

u32 XPixel_proc_Get_shared_memory_9_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_9_V;
}

u32 XPixel_proc_Write_shared_memory_9_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_9_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_9_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_9_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_10_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_10_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_10_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_10_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_10_V;
}

u32 XPixel_proc_Get_shared_memory_10_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_10_V;
}

u32 XPixel_proc_Write_shared_memory_10_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_10_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_10_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_10_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_11_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_11_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_11_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_11_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_11_V;
}

u32 XPixel_proc_Get_shared_memory_11_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_11_V;
}

u32 XPixel_proc_Write_shared_memory_11_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_11_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_11_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_11_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_12_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_12_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_12_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_12_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_12_V;
}

u32 XPixel_proc_Get_shared_memory_12_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_12_V;
}

u32 XPixel_proc_Write_shared_memory_12_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_12_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_12_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_12_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_13_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_13_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_13_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_13_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_13_V;
}

u32 XPixel_proc_Get_shared_memory_13_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_13_V;
}

u32 XPixel_proc_Write_shared_memory_13_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_13_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_13_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_13_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_14_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_14_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_14_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_14_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_14_V;
}

u32 XPixel_proc_Get_shared_memory_14_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_14_V;
}

u32 XPixel_proc_Write_shared_memory_14_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_14_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_14_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_14_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_15_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_15_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_15_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_15_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_15_V;
}

u32 XPixel_proc_Get_shared_memory_15_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_15_V;
}

u32 XPixel_proc_Write_shared_memory_15_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_15_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_15_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_15_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_16_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_16_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_16_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_16_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_16_V;
}

u32 XPixel_proc_Get_shared_memory_16_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_16_V;
}

u32 XPixel_proc_Write_shared_memory_16_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_16_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_16_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_16_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_17_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_17_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_17_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_17_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_17_V;
}

u32 XPixel_proc_Get_shared_memory_17_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_17_V;
}

u32 XPixel_proc_Write_shared_memory_17_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_17_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_17_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_17_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_18_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_18_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_18_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_18_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_18_V;
}

u32 XPixel_proc_Get_shared_memory_18_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_18_V;
}

u32 XPixel_proc_Write_shared_memory_18_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_18_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_18_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_18_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_19_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_19_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_19_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_19_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_19_V;
}

u32 XPixel_proc_Get_shared_memory_19_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_19_V;
}

u32 XPixel_proc_Write_shared_memory_19_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_19_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_19_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_19_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_20_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_20_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_20_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_20_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_20_V;
}

u32 XPixel_proc_Get_shared_memory_20_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_20_V;
}

u32 XPixel_proc_Write_shared_memory_20_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_20_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_20_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_20_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_21_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_21_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_21_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_21_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_21_V;
}

u32 XPixel_proc_Get_shared_memory_21_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_21_V;
}

u32 XPixel_proc_Write_shared_memory_21_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_21_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_21_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_21_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_22_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_22_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_22_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_22_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_22_V;
}

u32 XPixel_proc_Get_shared_memory_22_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_22_V;
}

u32 XPixel_proc_Write_shared_memory_22_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_22_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_22_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_22_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_23_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_23_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_23_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_23_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_23_V;
}

u32 XPixel_proc_Get_shared_memory_23_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_23_V;
}

u32 XPixel_proc_Write_shared_memory_23_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_23_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_23_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_23_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_24_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_24_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_24_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_24_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_24_V;
}

u32 XPixel_proc_Get_shared_memory_24_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_24_V;
}

u32 XPixel_proc_Write_shared_memory_24_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_24_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_24_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_24_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_25_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_25_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_25_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_25_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_25_V;
}

u32 XPixel_proc_Get_shared_memory_25_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_25_V;
}

u32 XPixel_proc_Write_shared_memory_25_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_25_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_25_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_25_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_26_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_26_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_26_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_26_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_26_V;
}

u32 XPixel_proc_Get_shared_memory_26_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_26_V;
}

u32 XPixel_proc_Write_shared_memory_26_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_26_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_26_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_26_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_27_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_27_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_27_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_27_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_27_V;
}

u32 XPixel_proc_Get_shared_memory_27_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_27_V;
}

u32 XPixel_proc_Write_shared_memory_27_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_27_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_27_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_27_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_28_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_28_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_28_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_28_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_28_V;
}

u32 XPixel_proc_Get_shared_memory_28_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_28_V;
}

u32 XPixel_proc_Write_shared_memory_28_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_28_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_28_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_28_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_29_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_29_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_29_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_29_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_29_V;
}

u32 XPixel_proc_Get_shared_memory_29_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_29_V;
}

u32 XPixel_proc_Write_shared_memory_29_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_29_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_29_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_29_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_30_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_30_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_30_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_30_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_30_V;
}

u32 XPixel_proc_Get_shared_memory_30_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_30_V;
}

u32 XPixel_proc_Write_shared_memory_30_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_30_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_30_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_30_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_31_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_31_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_31_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_31_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_31_V;
}

u32 XPixel_proc_Get_shared_memory_31_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_31_V;
}

u32 XPixel_proc_Write_shared_memory_31_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_31_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_31_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_31_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_32_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_32_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_32_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_32_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_32_V;
}

u32 XPixel_proc_Get_shared_memory_32_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_32_V;
}

u32 XPixel_proc_Write_shared_memory_32_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_32_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_32_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_32_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_33_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_33_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_33_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_33_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_33_V;
}

u32 XPixel_proc_Get_shared_memory_33_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_33_V;
}

u32 XPixel_proc_Write_shared_memory_33_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_33_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_33_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_33_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_34_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_34_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_34_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_34_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_34_V;
}

u32 XPixel_proc_Get_shared_memory_34_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_34_V;
}

u32 XPixel_proc_Write_shared_memory_34_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_34_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_34_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_34_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_35_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_35_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_35_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_35_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_35_V;
}

u32 XPixel_proc_Get_shared_memory_35_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_35_V;
}

u32 XPixel_proc_Write_shared_memory_35_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_35_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_35_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_35_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_36_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_36_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_36_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_36_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_36_V;
}

u32 XPixel_proc_Get_shared_memory_36_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_36_V;
}

u32 XPixel_proc_Write_shared_memory_36_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_36_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_36_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_36_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_37_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_37_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_37_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_37_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_37_V;
}

u32 XPixel_proc_Get_shared_memory_37_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_37_V;
}

u32 XPixel_proc_Write_shared_memory_37_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_37_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_37_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_37_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_38_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_38_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_38_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_38_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_38_V;
}

u32 XPixel_proc_Get_shared_memory_38_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_38_V;
}

u32 XPixel_proc_Write_shared_memory_38_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_38_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_38_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_38_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_39_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_39_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_39_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_39_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_39_V;
}

u32 XPixel_proc_Get_shared_memory_39_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_39_V;
}

u32 XPixel_proc_Write_shared_memory_39_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_39_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_39_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_39_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_40_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_40_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_40_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_40_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_40_V;
}

u32 XPixel_proc_Get_shared_memory_40_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_40_V;
}

u32 XPixel_proc_Write_shared_memory_40_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_40_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_40_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_40_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_41_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_41_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_41_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_41_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_41_V;
}

u32 XPixel_proc_Get_shared_memory_41_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_41_V;
}

u32 XPixel_proc_Write_shared_memory_41_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_41_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_41_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_41_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_42_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_42_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_42_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_42_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_42_V;
}

u32 XPixel_proc_Get_shared_memory_42_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_42_V;
}

u32 XPixel_proc_Write_shared_memory_42_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_42_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_42_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_42_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_43_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_43_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_43_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_43_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_43_V;
}

u32 XPixel_proc_Get_shared_memory_43_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_43_V;
}

u32 XPixel_proc_Write_shared_memory_43_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_43_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_43_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_43_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_44_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_44_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_44_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_44_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_44_V;
}

u32 XPixel_proc_Get_shared_memory_44_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_44_V;
}

u32 XPixel_proc_Write_shared_memory_44_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_44_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_44_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_44_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_45_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_45_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_45_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_45_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_45_V;
}

u32 XPixel_proc_Get_shared_memory_45_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_45_V;
}

u32 XPixel_proc_Write_shared_memory_45_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_45_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_45_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_45_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_46_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_46_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_46_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_46_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_46_V;
}

u32 XPixel_proc_Get_shared_memory_46_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_46_V;
}

u32 XPixel_proc_Write_shared_memory_46_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_46_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_46_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_46_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_47_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_47_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_47_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_47_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_47_V;
}

u32 XPixel_proc_Get_shared_memory_47_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_47_V;
}

u32 XPixel_proc_Write_shared_memory_47_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_47_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_47_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_47_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_48_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_48_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_48_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_48_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_48_V;
}

u32 XPixel_proc_Get_shared_memory_48_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_48_V;
}

u32 XPixel_proc_Write_shared_memory_48_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_48_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_48_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_48_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_49_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_49_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_49_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_49_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_49_V;
}

u32 XPixel_proc_Get_shared_memory_49_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_49_V;
}

u32 XPixel_proc_Write_shared_memory_49_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_49_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_49_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_49_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_50_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_50_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_50_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_50_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_50_V;
}

u32 XPixel_proc_Get_shared_memory_50_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_50_V;
}

u32 XPixel_proc_Write_shared_memory_50_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_50_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_50_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_50_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_51_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_51_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_51_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_51_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_51_V;
}

u32 XPixel_proc_Get_shared_memory_51_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_51_V;
}

u32 XPixel_proc_Write_shared_memory_51_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_51_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_51_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_51_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_52_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_52_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_52_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_52_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_52_V;
}

u32 XPixel_proc_Get_shared_memory_52_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_52_V;
}

u32 XPixel_proc_Write_shared_memory_52_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_52_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_52_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_52_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_53_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_53_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_53_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_53_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_53_V;
}

u32 XPixel_proc_Get_shared_memory_53_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_53_V;
}

u32 XPixel_proc_Write_shared_memory_53_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_53_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_53_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_53_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_54_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_54_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_54_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_54_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_54_V;
}

u32 XPixel_proc_Get_shared_memory_54_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_54_V;
}

u32 XPixel_proc_Write_shared_memory_54_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_54_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_54_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_54_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_55_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_55_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_55_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_55_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_55_V;
}

u32 XPixel_proc_Get_shared_memory_55_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_55_V;
}

u32 XPixel_proc_Write_shared_memory_55_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_55_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_55_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_55_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_56_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_56_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_56_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_56_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_56_V;
}

u32 XPixel_proc_Get_shared_memory_56_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_56_V;
}

u32 XPixel_proc_Write_shared_memory_56_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_56_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_56_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_56_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_57_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_57_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_57_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_57_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_57_V;
}

u32 XPixel_proc_Get_shared_memory_57_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_57_V;
}

u32 XPixel_proc_Write_shared_memory_57_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_57_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_57_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_57_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_58_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_58_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_58_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_58_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_58_V;
}

u32 XPixel_proc_Get_shared_memory_58_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_58_V;
}

u32 XPixel_proc_Write_shared_memory_58_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_58_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_58_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_58_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_59_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_59_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_59_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_59_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_59_V;
}

u32 XPixel_proc_Get_shared_memory_59_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_59_V;
}

u32 XPixel_proc_Write_shared_memory_59_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_59_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_59_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_59_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_60_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_60_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_60_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_60_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_60_V;
}

u32 XPixel_proc_Get_shared_memory_60_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_60_V;
}

u32 XPixel_proc_Write_shared_memory_60_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_60_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_60_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_60_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_61_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_61_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_61_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_61_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_61_V;
}

u32 XPixel_proc_Get_shared_memory_61_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_61_V;
}

u32 XPixel_proc_Write_shared_memory_61_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_61_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_61_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_61_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_62_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_62_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_62_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_62_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_62_V;
}

u32 XPixel_proc_Get_shared_memory_62_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_62_V;
}

u32 XPixel_proc_Write_shared_memory_62_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_62_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_62_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_62_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_BASE + offset + i);
    }
    return length;
}

u32 XPixel_proc_Get_shared_memory_63_V_BaseAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_BASE);
}

u32 XPixel_proc_Get_shared_memory_63_V_HighAddress(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_HIGH);
}

u32 XPixel_proc_Get_shared_memory_63_V_TotalBytes(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_BASE + 1);
}

u32 XPixel_proc_Get_shared_memory_63_V_BitWidth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_63_V;
}

u32 XPixel_proc_Get_shared_memory_63_V_Depth(XPixel_proc *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_63_V;
}

u32 XPixel_proc_Write_shared_memory_63_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_63_V_Words(XPixel_proc *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_BASE + (offset + i)*4);
    }
    return length;
}

u32 XPixel_proc_Write_shared_memory_63_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XPixel_proc_Read_shared_memory_63_V_Bytes(XPixel_proc *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_HIGH - XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_BASE + offset + i);
    }
    return length;
}

