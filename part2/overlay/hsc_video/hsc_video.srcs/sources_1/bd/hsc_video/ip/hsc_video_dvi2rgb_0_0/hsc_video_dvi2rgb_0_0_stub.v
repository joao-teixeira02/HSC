// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.1 (win64) Build 2902540 Wed May 27 19:54:49 MDT 2020
// Date        : Sun Dec 29 01:00:44 2024
// Host        : DESKTOP-J0J932B running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               c:/Users/PC/HSC/part2/overlay/hsc_video/hsc_video.srcs/sources_1/bd/hsc_video/ip/hsc_video_dvi2rgb_0_0/hsc_video_dvi2rgb_0_0_stub.v
// Design      : hsc_video_dvi2rgb_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "dvi2rgb,Vivado 2020.1" *)
module hsc_video_dvi2rgb_0_0(TMDS_Clk_p, TMDS_Clk_n, TMDS_Data_p, 
  TMDS_Data_n, RefClk, aRst_n, vid_pData, vid_pVDE, vid_pHSync, vid_pVSync, PixelClk, 
  aPixelClkLckd, DDC_SDA_I, DDC_SDA_O, DDC_SDA_T, DDC_SCL_I, DDC_SCL_O, DDC_SCL_T, pRst_n)
/* synthesis syn_black_box black_box_pad_pin="TMDS_Clk_p,TMDS_Clk_n,TMDS_Data_p[2:0],TMDS_Data_n[2:0],RefClk,aRst_n,vid_pData[23:0],vid_pVDE,vid_pHSync,vid_pVSync,PixelClk,aPixelClkLckd,DDC_SDA_I,DDC_SDA_O,DDC_SDA_T,DDC_SCL_I,DDC_SCL_O,DDC_SCL_T,pRst_n" */;
  input TMDS_Clk_p;
  input TMDS_Clk_n;
  input [2:0]TMDS_Data_p;
  input [2:0]TMDS_Data_n;
  input RefClk;
  input aRst_n;
  output [23:0]vid_pData;
  output vid_pVDE;
  output vid_pHSync;
  output vid_pVSync;
  output PixelClk;
  output aPixelClkLckd;
  input DDC_SDA_I;
  output DDC_SDA_O;
  output DDC_SDA_T;
  input DDC_SCL_I;
  output DDC_SCL_O;
  output DDC_SCL_T;
  input pRst_n;
endmodule
