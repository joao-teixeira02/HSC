// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================
// AXILiteS
// 0x000 : reserved
// 0x004 : reserved
// 0x008 : reserved
// 0x00c : reserved
// 0x010 : Data signal of frames_V
//         bit 31~0 - frames_V[31:0] (Read)
// 0x014 : Control signal of frames_V
//         bit 0  - frames_V_ap_vld (Read/COR)
//         others - reserved
// 0x018 : Data signal of rows_V
//         bit 31~0 - rows_V[31:0] (Read)
// 0x01c : Control signal of rows_V
//         bit 0  - rows_V_ap_vld (Read/COR)
//         others - reserved
// 0x020 : Data signal of pixels_V
//         bit 31~0 - pixels_V[31:0] (Read)
// 0x024 : Control signal of pixels_V
//         bit 0  - pixels_V_ap_vld (Read/COR)
//         others - reserved
// 0x028 : Data signal of sum_before_V
//         bit 31~0 - sum_before_V[31:0] (Read)
// 0x02c : Control signal of sum_before_V
//         bit 0  - sum_before_V_ap_vld (Read/COR)
//         others - reserved
// 0x030 : Data signal of sum_after_V
//         bit 31~0 - sum_after_V[31:0] (Read)
// 0x034 : Control signal of sum_after_V
//         bit 0  - sum_after_V_ap_vld (Read/COR)
//         others - reserved
// 0x038 : Data signal of values_V
//         bit 31~0 - values_V[31:0] (Read)
// 0x03c : Control signal of values_V
//         bit 0  - values_V_ap_vld (Read/COR)
//         others - reserved
// 0x040 : Data signal of read_done_V
//         bit 0  - read_done_V[0] (Read)
//         others - reserved
// 0x044 : Control signal of read_done_V
//         bit 0  - read_done_V_ap_vld (Read/COR)
//         others - reserved
// 0x048 : Data signal of write_ready_V
//         bit 0  - write_ready_V[0] (Read/Write)
//         others - reserved
// 0x04c : reserved
// 0x050 ~
// 0x05f : Memory 'shared_memory_0_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_0_V[n]
// 0x060 ~
// 0x06f : Memory 'shared_memory_1_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_1_V[n]
// 0x070 ~
// 0x07f : Memory 'shared_memory_2_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_2_V[n]
// 0x080 ~
// 0x08f : Memory 'shared_memory_3_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_3_V[n]
// 0x090 ~
// 0x09f : Memory 'shared_memory_4_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_4_V[n]
// 0x0a0 ~
// 0x0af : Memory 'shared_memory_5_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_5_V[n]
// 0x0b0 ~
// 0x0bf : Memory 'shared_memory_6_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_6_V[n]
// 0x0c0 ~
// 0x0cf : Memory 'shared_memory_7_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_7_V[n]
// 0x0d0 ~
// 0x0df : Memory 'shared_memory_8_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_8_V[n]
// 0x0e0 ~
// 0x0ef : Memory 'shared_memory_9_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_9_V[n]
// 0x0f0 ~
// 0x0ff : Memory 'shared_memory_10_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_10_V[n]
// 0x100 ~
// 0x10f : Memory 'shared_memory_11_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_11_V[n]
// 0x110 ~
// 0x11f : Memory 'shared_memory_12_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_12_V[n]
// 0x120 ~
// 0x12f : Memory 'shared_memory_13_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_13_V[n]
// 0x130 ~
// 0x13f : Memory 'shared_memory_14_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_14_V[n]
// 0x140 ~
// 0x14f : Memory 'shared_memory_15_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_15_V[n]
// 0x150 ~
// 0x15f : Memory 'shared_memory_16_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_16_V[n]
// 0x160 ~
// 0x16f : Memory 'shared_memory_17_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_17_V[n]
// 0x170 ~
// 0x17f : Memory 'shared_memory_18_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_18_V[n]
// 0x180 ~
// 0x18f : Memory 'shared_memory_19_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_19_V[n]
// 0x190 ~
// 0x19f : Memory 'shared_memory_20_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_20_V[n]
// 0x1a0 ~
// 0x1af : Memory 'shared_memory_21_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_21_V[n]
// 0x1b0 ~
// 0x1bf : Memory 'shared_memory_22_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_22_V[n]
// 0x1c0 ~
// 0x1cf : Memory 'shared_memory_23_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_23_V[n]
// 0x1d0 ~
// 0x1df : Memory 'shared_memory_24_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_24_V[n]
// 0x1e0 ~
// 0x1ef : Memory 'shared_memory_25_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_25_V[n]
// 0x1f0 ~
// 0x1ff : Memory 'shared_memory_26_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_26_V[n]
// 0x200 ~
// 0x20f : Memory 'shared_memory_27_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_27_V[n]
// 0x210 ~
// 0x21f : Memory 'shared_memory_28_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_28_V[n]
// 0x220 ~
// 0x22f : Memory 'shared_memory_29_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_29_V[n]
// 0x230 ~
// 0x23f : Memory 'shared_memory_30_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_30_V[n]
// 0x240 ~
// 0x24f : Memory 'shared_memory_31_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_31_V[n]
// 0x250 ~
// 0x25f : Memory 'shared_memory_32_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_32_V[n]
// 0x260 ~
// 0x26f : Memory 'shared_memory_33_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_33_V[n]
// 0x270 ~
// 0x27f : Memory 'shared_memory_34_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_34_V[n]
// 0x280 ~
// 0x28f : Memory 'shared_memory_35_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_35_V[n]
// 0x290 ~
// 0x29f : Memory 'shared_memory_36_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_36_V[n]
// 0x2a0 ~
// 0x2af : Memory 'shared_memory_37_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_37_V[n]
// 0x2b0 ~
// 0x2bf : Memory 'shared_memory_38_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_38_V[n]
// 0x2c0 ~
// 0x2cf : Memory 'shared_memory_39_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_39_V[n]
// 0x2d0 ~
// 0x2df : Memory 'shared_memory_40_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_40_V[n]
// 0x2e0 ~
// 0x2ef : Memory 'shared_memory_41_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_41_V[n]
// 0x2f0 ~
// 0x2ff : Memory 'shared_memory_42_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_42_V[n]
// 0x300 ~
// 0x30f : Memory 'shared_memory_43_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_43_V[n]
// 0x310 ~
// 0x31f : Memory 'shared_memory_44_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_44_V[n]
// 0x320 ~
// 0x32f : Memory 'shared_memory_45_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_45_V[n]
// 0x330 ~
// 0x33f : Memory 'shared_memory_46_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_46_V[n]
// 0x340 ~
// 0x34f : Memory 'shared_memory_47_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_47_V[n]
// 0x350 ~
// 0x35f : Memory 'shared_memory_48_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_48_V[n]
// 0x360 ~
// 0x36f : Memory 'shared_memory_49_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_49_V[n]
// 0x370 ~
// 0x37f : Memory 'shared_memory_50_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_50_V[n]
// 0x380 ~
// 0x38f : Memory 'shared_memory_51_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_51_V[n]
// 0x390 ~
// 0x39f : Memory 'shared_memory_52_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_52_V[n]
// 0x3a0 ~
// 0x3af : Memory 'shared_memory_53_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_53_V[n]
// 0x3b0 ~
// 0x3bf : Memory 'shared_memory_54_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_54_V[n]
// 0x3c0 ~
// 0x3cf : Memory 'shared_memory_55_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_55_V[n]
// 0x3d0 ~
// 0x3df : Memory 'shared_memory_56_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_56_V[n]
// 0x3e0 ~
// 0x3ef : Memory 'shared_memory_57_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_57_V[n]
// 0x3f0 ~
// 0x3ff : Memory 'shared_memory_58_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_58_V[n]
// 0x400 ~
// 0x40f : Memory 'shared_memory_59_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_59_V[n]
// 0x410 ~
// 0x41f : Memory 'shared_memory_60_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_60_V[n]
// 0x420 ~
// 0x42f : Memory 'shared_memory_61_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_61_V[n]
// 0x430 ~
// 0x43f : Memory 'shared_memory_62_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_62_V[n]
// 0x440 ~
// 0x44f : Memory 'shared_memory_63_V' (4 * 32b)
//         Word n : bit [31:0] - shared_memory_63_V[n]
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XPIXEL_PROC_AXILITES_ADDR_FRAMES_V_DATA           0x010
#define XPIXEL_PROC_AXILITES_BITS_FRAMES_V_DATA           32
#define XPIXEL_PROC_AXILITES_ADDR_FRAMES_V_CTRL           0x014
#define XPIXEL_PROC_AXILITES_ADDR_ROWS_V_DATA             0x018
#define XPIXEL_PROC_AXILITES_BITS_ROWS_V_DATA             32
#define XPIXEL_PROC_AXILITES_ADDR_ROWS_V_CTRL             0x01c
#define XPIXEL_PROC_AXILITES_ADDR_PIXELS_V_DATA           0x020
#define XPIXEL_PROC_AXILITES_BITS_PIXELS_V_DATA           32
#define XPIXEL_PROC_AXILITES_ADDR_PIXELS_V_CTRL           0x024
#define XPIXEL_PROC_AXILITES_ADDR_SUM_BEFORE_V_DATA       0x028
#define XPIXEL_PROC_AXILITES_BITS_SUM_BEFORE_V_DATA       32
#define XPIXEL_PROC_AXILITES_ADDR_SUM_BEFORE_V_CTRL       0x02c
#define XPIXEL_PROC_AXILITES_ADDR_SUM_AFTER_V_DATA        0x030
#define XPIXEL_PROC_AXILITES_BITS_SUM_AFTER_V_DATA        32
#define XPIXEL_PROC_AXILITES_ADDR_SUM_AFTER_V_CTRL        0x034
#define XPIXEL_PROC_AXILITES_ADDR_VALUES_V_DATA           0x038
#define XPIXEL_PROC_AXILITES_BITS_VALUES_V_DATA           32
#define XPIXEL_PROC_AXILITES_ADDR_VALUES_V_CTRL           0x03c
#define XPIXEL_PROC_AXILITES_ADDR_READ_DONE_V_DATA        0x040
#define XPIXEL_PROC_AXILITES_BITS_READ_DONE_V_DATA        1
#define XPIXEL_PROC_AXILITES_ADDR_READ_DONE_V_CTRL        0x044
#define XPIXEL_PROC_AXILITES_ADDR_WRITE_READY_V_DATA      0x048
#define XPIXEL_PROC_AXILITES_BITS_WRITE_READY_V_DATA      1
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_BASE  0x050
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_0_V_HIGH  0x05f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_0_V      32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_0_V      4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_BASE  0x060
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_1_V_HIGH  0x06f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_1_V      32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_1_V      4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_BASE  0x070
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_2_V_HIGH  0x07f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_2_V      32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_2_V      4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_BASE  0x080
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_3_V_HIGH  0x08f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_3_V      32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_3_V      4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_BASE  0x090
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_4_V_HIGH  0x09f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_4_V      32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_4_V      4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_BASE  0x0a0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_5_V_HIGH  0x0af
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_5_V      32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_5_V      4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_BASE  0x0b0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_6_V_HIGH  0x0bf
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_6_V      32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_6_V      4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_BASE  0x0c0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_7_V_HIGH  0x0cf
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_7_V      32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_7_V      4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_BASE  0x0d0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_8_V_HIGH  0x0df
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_8_V      32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_8_V      4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_BASE  0x0e0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_9_V_HIGH  0x0ef
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_9_V      32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_9_V      4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_BASE 0x0f0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_10_V_HIGH 0x0ff
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_10_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_10_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_BASE 0x100
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_11_V_HIGH 0x10f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_11_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_11_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_BASE 0x110
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_12_V_HIGH 0x11f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_12_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_12_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_BASE 0x120
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_13_V_HIGH 0x12f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_13_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_13_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_BASE 0x130
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_14_V_HIGH 0x13f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_14_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_14_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_BASE 0x140
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_15_V_HIGH 0x14f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_15_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_15_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_BASE 0x150
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_16_V_HIGH 0x15f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_16_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_16_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_BASE 0x160
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_17_V_HIGH 0x16f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_17_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_17_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_BASE 0x170
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_18_V_HIGH 0x17f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_18_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_18_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_BASE 0x180
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_19_V_HIGH 0x18f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_19_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_19_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_BASE 0x190
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_20_V_HIGH 0x19f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_20_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_20_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_BASE 0x1a0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_21_V_HIGH 0x1af
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_21_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_21_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_BASE 0x1b0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_22_V_HIGH 0x1bf
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_22_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_22_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_BASE 0x1c0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_23_V_HIGH 0x1cf
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_23_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_23_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_BASE 0x1d0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_24_V_HIGH 0x1df
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_24_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_24_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_BASE 0x1e0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_25_V_HIGH 0x1ef
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_25_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_25_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_BASE 0x1f0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_26_V_HIGH 0x1ff
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_26_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_26_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_BASE 0x200
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_27_V_HIGH 0x20f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_27_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_27_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_BASE 0x210
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_28_V_HIGH 0x21f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_28_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_28_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_BASE 0x220
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_29_V_HIGH 0x22f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_29_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_29_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_BASE 0x230
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_30_V_HIGH 0x23f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_30_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_30_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_BASE 0x240
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_31_V_HIGH 0x24f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_31_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_31_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_BASE 0x250
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_32_V_HIGH 0x25f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_32_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_32_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_BASE 0x260
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_33_V_HIGH 0x26f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_33_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_33_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_BASE 0x270
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_34_V_HIGH 0x27f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_34_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_34_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_BASE 0x280
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_35_V_HIGH 0x28f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_35_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_35_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_BASE 0x290
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_36_V_HIGH 0x29f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_36_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_36_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_BASE 0x2a0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_37_V_HIGH 0x2af
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_37_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_37_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_BASE 0x2b0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_38_V_HIGH 0x2bf
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_38_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_38_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_BASE 0x2c0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_39_V_HIGH 0x2cf
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_39_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_39_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_BASE 0x2d0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_40_V_HIGH 0x2df
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_40_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_40_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_BASE 0x2e0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_41_V_HIGH 0x2ef
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_41_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_41_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_BASE 0x2f0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_42_V_HIGH 0x2ff
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_42_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_42_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_BASE 0x300
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_43_V_HIGH 0x30f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_43_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_43_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_BASE 0x310
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_44_V_HIGH 0x31f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_44_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_44_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_BASE 0x320
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_45_V_HIGH 0x32f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_45_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_45_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_BASE 0x330
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_46_V_HIGH 0x33f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_46_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_46_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_BASE 0x340
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_47_V_HIGH 0x34f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_47_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_47_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_BASE 0x350
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_48_V_HIGH 0x35f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_48_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_48_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_BASE 0x360
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_49_V_HIGH 0x36f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_49_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_49_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_BASE 0x370
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_50_V_HIGH 0x37f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_50_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_50_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_BASE 0x380
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_51_V_HIGH 0x38f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_51_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_51_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_BASE 0x390
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_52_V_HIGH 0x39f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_52_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_52_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_BASE 0x3a0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_53_V_HIGH 0x3af
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_53_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_53_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_BASE 0x3b0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_54_V_HIGH 0x3bf
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_54_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_54_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_BASE 0x3c0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_55_V_HIGH 0x3cf
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_55_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_55_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_BASE 0x3d0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_56_V_HIGH 0x3df
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_56_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_56_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_BASE 0x3e0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_57_V_HIGH 0x3ef
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_57_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_57_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_BASE 0x3f0
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_58_V_HIGH 0x3ff
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_58_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_58_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_BASE 0x400
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_59_V_HIGH 0x40f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_59_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_59_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_BASE 0x410
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_60_V_HIGH 0x41f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_60_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_60_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_BASE 0x420
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_61_V_HIGH 0x42f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_61_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_61_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_BASE 0x430
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_62_V_HIGH 0x43f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_62_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_62_V     4
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_BASE 0x440
#define XPIXEL_PROC_AXILITES_ADDR_SHARED_MEMORY_63_V_HIGH 0x44f
#define XPIXEL_PROC_AXILITES_WIDTH_SHARED_MEMORY_63_V     32
#define XPIXEL_PROC_AXILITES_DEPTH_SHARED_MEMORY_63_V     4

