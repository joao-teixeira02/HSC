// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================

`timescale 1 ns / 1 ps

module pixel_proc_add_161ns_161ns_161_2_1_AddSubnS_0(clk, reset, ce, a, b, s);

// ---- input/output ports list here ----
input   clk;
input   reset;
input   ce;
input  [161 - 1 : 0] a;
input  [161 - 1 : 0] b;
output [161 - 1 : 0] s;

// wire for the primary inputs
wire [161 - 1 : 0] ain_s0 = a;
wire [161 - 1 : 0] bin_s0 = b;

// This AddSub module have totally 2 stages. For each stage the adder's width are:
// 80 81

// Stage 1 logic
wire [80 - 1 : 0]    fas_s1;
wire                 facout_s1;
reg  [81 - 1 : 0]    ain_s1;
reg  [81 - 1 : 0]    bin_s1;
reg  [80 - 1 : 0]    sum_s1;
reg                  carry_s1;
pixel_proc_add_161ns_161ns_161_2_1_AddSubnS_0_comb_adder #(
    .N    ( 80 )
) u1 (
    .a    ( ain_s0[80 - 1 : 0] ),
    .b    ( bin_s0[80 - 1 : 0] ),
    .cin  ( 1'b0 ),
    .s    ( fas_s1 ),
    .cout ( facout_s1 )
);

always @ (posedge clk) begin
    if (ce) begin
        sum_s1   <= fas_s1;
        carry_s1 <= facout_s1;
    end
end

always @ (posedge clk) begin
    if (ce) begin
        ain_s1 <= ain_s0[161 - 1 : 80];
    end
end

always @ (posedge clk) begin
    if (ce) begin
        bin_s1 <= bin_s0[161 - 1 : 80];
    end
end

// Stage 2 logic
wire [81 - 1 : 0]    fas_s2;
wire                 facout_s2;
pixel_proc_add_161ns_161ns_161_2_1_AddSubnS_0_comb_adder #(
    .N    ( 81 )
) u2 (
    .a    ( ain_s1[81 - 1 : 0] ),
    .b    ( bin_s1[81 - 1 : 0] ),
    .cin  ( carry_s1 ),
    .s    ( fas_s2 ),
    .cout ( facout_s2 )
);

assign s = {fas_s2, sum_s1};

endmodule

// small adder
module pixel_proc_add_161ns_161ns_161_2_1_AddSubnS_0_comb_adder 
#(parameter
    N = 32
)(
    input  [N-1 : 0]  a,
    input  [N-1 : 0]  b,
    input  wire           cin,
    output [N-1 : 0]  s,
    output wire           cout
);
assign {cout, s} = a + b + cin;

endmodule

`timescale 1 ns / 1 ps
module pixel_proc_add_161ns_161ns_161_2_1(
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



pixel_proc_add_161ns_161ns_161_2_1_AddSubnS_0 pixel_proc_add_161ns_161ns_161_2_1_AddSubnS_0_U(
    .clk( clk ),
    .reset( reset ),
    .ce( ce ),
    .a( din0 ),
    .b( din1 ),
    .s( dout ));

endmodule

