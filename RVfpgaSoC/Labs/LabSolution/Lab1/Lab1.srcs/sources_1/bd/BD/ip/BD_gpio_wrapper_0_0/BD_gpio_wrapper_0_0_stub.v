// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
// Date        : Mon May 31 23:38:35 2021
// Host        : LenovoHamza running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               e:/RvfpgaSoC/Labs/LabSolution/Lab1/Lab1.srcs/sources_1/bd/BD/ip/BD_gpio_wrapper_0_0/BD_gpio_wrapper_0_0_stub.v
// Design      : BD_gpio_wrapper_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "gpio_wrapper,Vivado 2019.2" *)
module BD_gpio_wrapper_0_0(wb_clk_i, wb_rst_i, wb_cyc_i, wb_adr_i, wb_dat_i, 
  wb_sel_i, wb_we_i, wb_stb_i, wb_dat_o, wb_ack_o, wb_err_o, wb_inta_o, outp_0, outp_1, outp_2, outp_3, 
  outp_4, outp_5, outp_6, outp_7, outp_8, outp_9, outp_10, outp_11, outp_12, outp_13, outp_14, outp_15, 
  outp_16, outp_17, outp_18, outp_19, outp_20, outp_21, outp_22, outp_23, outp_24, outp_25, outp_26, 
  outp_27, outp_28, outp_29, outp_30, outp_31, inp_0, inp_1, inp_2, inp_3, inp_4, inp_5, inp_6, inp_7, inp_8, 
  inp_9, inp_10, inp_11, inp_12, inp_13, inp_14, inp_15, inp_16, inp_17, inp_18, inp_19, inp_20, inp_21, 
  inp_22, inp_23, inp_24, inp_25, inp_26, inp_27, inp_28, inp_29, inp_30, inp_31, oe_0, oe_1, oe_2, oe_3, oe_4, 
  oe_5, oe_6, oe_7, oe_8, oe_9, oe_10, oe_11, oe_12, oe_13, oe_14, oe_15, oe_16, oe_17, oe_18, oe_19, oe_20, oe_21, 
  oe_22, oe_23, oe_24, oe_25, oe_26, oe_27, oe_28, oe_29, oe_30, oe_31)
/* synthesis syn_black_box black_box_pad_pin="wb_clk_i,wb_rst_i,wb_cyc_i,wb_adr_i[7:0],wb_dat_i[31:0],wb_sel_i[3:0],wb_we_i,wb_stb_i,wb_dat_o[31:0],wb_ack_o,wb_err_o,wb_inta_o,outp_0,outp_1,outp_2,outp_3,outp_4,outp_5,outp_6,outp_7,outp_8,outp_9,outp_10,outp_11,outp_12,outp_13,outp_14,outp_15,outp_16,outp_17,outp_18,outp_19,outp_20,outp_21,outp_22,outp_23,outp_24,outp_25,outp_26,outp_27,outp_28,outp_29,outp_30,outp_31,inp_0,inp_1,inp_2,inp_3,inp_4,inp_5,inp_6,inp_7,inp_8,inp_9,inp_10,inp_11,inp_12,inp_13,inp_14,inp_15,inp_16,inp_17,inp_18,inp_19,inp_20,inp_21,inp_22,inp_23,inp_24,inp_25,inp_26,inp_27,inp_28,inp_29,inp_30,inp_31,oe_0,oe_1,oe_2,oe_3,oe_4,oe_5,oe_6,oe_7,oe_8,oe_9,oe_10,oe_11,oe_12,oe_13,oe_14,oe_15,oe_16,oe_17,oe_18,oe_19,oe_20,oe_21,oe_22,oe_23,oe_24,oe_25,oe_26,oe_27,oe_28,oe_29,oe_30,oe_31" */;
  input wb_clk_i;
  input wb_rst_i;
  input wb_cyc_i;
  input [7:0]wb_adr_i;
  input [31:0]wb_dat_i;
  input [3:0]wb_sel_i;
  input wb_we_i;
  input wb_stb_i;
  output [31:0]wb_dat_o;
  output wb_ack_o;
  output wb_err_o;
  output wb_inta_o;
  input outp_0;
  input outp_1;
  input outp_2;
  input outp_3;
  input outp_4;
  input outp_5;
  input outp_6;
  input outp_7;
  input outp_8;
  input outp_9;
  input outp_10;
  input outp_11;
  input outp_12;
  input outp_13;
  input outp_14;
  input outp_15;
  input outp_16;
  input outp_17;
  input outp_18;
  input outp_19;
  input outp_20;
  input outp_21;
  input outp_22;
  input outp_23;
  input outp_24;
  input outp_25;
  input outp_26;
  input outp_27;
  input outp_28;
  input outp_29;
  input outp_30;
  input outp_31;
  output inp_0;
  output inp_1;
  output inp_2;
  output inp_3;
  output inp_4;
  output inp_5;
  output inp_6;
  output inp_7;
  output inp_8;
  output inp_9;
  output inp_10;
  output inp_11;
  output inp_12;
  output inp_13;
  output inp_14;
  output inp_15;
  output inp_16;
  output inp_17;
  output inp_18;
  output inp_19;
  output inp_20;
  output inp_21;
  output inp_22;
  output inp_23;
  output inp_24;
  output inp_25;
  output inp_26;
  output inp_27;
  output inp_28;
  output inp_29;
  output inp_30;
  output inp_31;
  output oe_0;
  output oe_1;
  output oe_2;
  output oe_3;
  output oe_4;
  output oe_5;
  output oe_6;
  output oe_7;
  output oe_8;
  output oe_9;
  output oe_10;
  output oe_11;
  output oe_12;
  output oe_13;
  output oe_14;
  output oe_15;
  output oe_16;
  output oe_17;
  output oe_18;
  output oe_19;
  output oe_20;
  output oe_21;
  output oe_22;
  output oe_23;
  output oe_24;
  output oe_25;
  output oe_26;
  output oe_27;
  output oe_28;
  output oe_29;
  output oe_30;
  output oe_31;
endmodule
