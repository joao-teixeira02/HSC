// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1 ns / 1 ps

module pixel_proc_mul_66ns_96s_161_6_1_MulnS_6(clk, ce, a, b, p);
input clk;
input ce;
input[66 - 1 : 0] a; 
input[96 - 1 : 0] b; 
output[161 - 1 : 0] p;

reg [66 - 1 : 0] a_reg0;
reg signed [96 - 1 : 0] b_reg0;
wire signed [161 - 1 : 0] tmp_product;
reg signed [161 - 1 : 0] buff0;
reg signed [161 - 1 : 0] buff1;
reg signed [161 - 1 : 0] buff2;
reg signed [161 - 1 : 0] buff3;

assign p = buff3;
assign tmp_product = $signed({1'b0, a_reg0}) * b_reg0;
always @ (posedge clk) begin
    if (ce) begin
        a_reg0 <= a;
        b_reg0 <= b;
        buff0 <= tmp_product;
        buff1 <= buff0;
        buff2 <= buff1;
        buff3 <= buff2;
    end
end
endmodule
`timescale 1 ns / 1 ps
module pixel_proc_mul_66ns_96s_161_6_1(
    clk,
    reset,
    ce,
    din0,
    din1,
    dout);

parameter ID = 32'd1;
parameter NUM_STAGE = 32'd1;
parameter din0_WIDTH = 32'd1;
parameter din1_WIDTH = 32'd1;
parameter dout_WIDTH = 32'd1;
input clk;
input reset;
input ce;
input[din0_WIDTH - 1:0] din0;
input[din1_WIDTH - 1:0] din1;
output[dout_WIDTH - 1:0] dout;



pixel_proc_mul_66ns_96s_161_6_1_MulnS_6 pixel_proc_mul_66ns_96s_161_6_1_MulnS_6_U(
    .clk( clk ),
    .ce( ce ),
    .a( din0 ),
    .b( din1 ),
    .p( dout ));

endmodule

