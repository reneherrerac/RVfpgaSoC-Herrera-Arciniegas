// (c) Copyright 1995-2021 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


// IP VLNV: xilinx.com:module_ref:gpio_wrapper:1.0
// IP Revision: 1

`timescale 1ns/1ps

(* IP_DEFINITION_SOURCE = "module_ref" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module BD_gpio_wrapper_0_0 (
  wb_clk_i,
  wb_rst_i,
  wb_cyc_i,
  wb_adr_i,
  wb_dat_i,
  wb_sel_i,
  wb_we_i,
  wb_stb_i,
  wb_dat_o,
  wb_ack_o,
  wb_err_o,
  wb_inta_o,
  outp_0,
  outp_1,
  outp_2,
  outp_3,
  outp_4,
  outp_5,
  outp_6,
  outp_7,
  outp_8,
  outp_9,
  outp_10,
  outp_11,
  outp_12,
  outp_13,
  outp_14,
  outp_15,
  outp_16,
  outp_17,
  outp_18,
  outp_19,
  outp_20,
  outp_21,
  outp_22,
  outp_23,
  outp_24,
  outp_25,
  outp_26,
  outp_27,
  outp_28,
  outp_29,
  outp_30,
  outp_31,
  inp_0,
  inp_1,
  inp_2,
  inp_3,
  inp_4,
  inp_5,
  inp_6,
  inp_7,
  inp_8,
  inp_9,
  inp_10,
  inp_11,
  inp_12,
  inp_13,
  inp_14,
  inp_15,
  inp_16,
  inp_17,
  inp_18,
  inp_19,
  inp_20,
  inp_21,
  inp_22,
  inp_23,
  inp_24,
  inp_25,
  inp_26,
  inp_27,
  inp_28,
  inp_29,
  inp_30,
  inp_31,
  oe_0,
  oe_1,
  oe_2,
  oe_3,
  oe_4,
  oe_5,
  oe_6,
  oe_7,
  oe_8,
  oe_9,
  oe_10,
  oe_11,
  oe_12,
  oe_13,
  oe_14,
  oe_15,
  oe_16,
  oe_17,
  oe_18,
  oe_19,
  oe_20,
  oe_21,
  oe_22,
  oe_23,
  oe_24,
  oe_25,
  oe_26,
  oe_27,
  oe_28,
  oe_29,
  oe_30,
  oe_31
);

input wire wb_clk_i;
input wire wb_rst_i;
input wire wb_cyc_i;
input wire [7 : 0] wb_adr_i;
input wire [31 : 0] wb_dat_i;
input wire [3 : 0] wb_sel_i;
input wire wb_we_i;
input wire wb_stb_i;
output wire [31 : 0] wb_dat_o;
output wire wb_ack_o;
output wire wb_err_o;
output wire wb_inta_o;
input wire outp_0;
input wire outp_1;
input wire outp_2;
input wire outp_3;
input wire outp_4;
input wire outp_5;
input wire outp_6;
input wire outp_7;
input wire outp_8;
input wire outp_9;
input wire outp_10;
input wire outp_11;
input wire outp_12;
input wire outp_13;
input wire outp_14;
input wire outp_15;
input wire outp_16;
input wire outp_17;
input wire outp_18;
input wire outp_19;
input wire outp_20;
input wire outp_21;
input wire outp_22;
input wire outp_23;
input wire outp_24;
input wire outp_25;
input wire outp_26;
input wire outp_27;
input wire outp_28;
input wire outp_29;
input wire outp_30;
input wire outp_31;
output wire inp_0;
output wire inp_1;
output wire inp_2;
output wire inp_3;
output wire inp_4;
output wire inp_5;
output wire inp_6;
output wire inp_7;
output wire inp_8;
output wire inp_9;
output wire inp_10;
output wire inp_11;
output wire inp_12;
output wire inp_13;
output wire inp_14;
output wire inp_15;
output wire inp_16;
output wire inp_17;
output wire inp_18;
output wire inp_19;
output wire inp_20;
output wire inp_21;
output wire inp_22;
output wire inp_23;
output wire inp_24;
output wire inp_25;
output wire inp_26;
output wire inp_27;
output wire inp_28;
output wire inp_29;
output wire inp_30;
output wire inp_31;
output wire oe_0;
output wire oe_1;
output wire oe_2;
output wire oe_3;
output wire oe_4;
output wire oe_5;
output wire oe_6;
output wire oe_7;
output wire oe_8;
output wire oe_9;
output wire oe_10;
output wire oe_11;
output wire oe_12;
output wire oe_13;
output wire oe_14;
output wire oe_15;
output wire oe_16;
output wire oe_17;
output wire oe_18;
output wire oe_19;
output wire oe_20;
output wire oe_21;
output wire oe_22;
output wire oe_23;
output wire oe_24;
output wire oe_25;
output wire oe_26;
output wire oe_27;
output wire oe_28;
output wire oe_29;
output wire oe_30;
output wire oe_31;

  gpio_wrapper inst (
    .wb_clk_i(wb_clk_i),
    .wb_rst_i(wb_rst_i),
    .wb_cyc_i(wb_cyc_i),
    .wb_adr_i(wb_adr_i),
    .wb_dat_i(wb_dat_i),
    .wb_sel_i(wb_sel_i),
    .wb_we_i(wb_we_i),
    .wb_stb_i(wb_stb_i),
    .wb_dat_o(wb_dat_o),
    .wb_ack_o(wb_ack_o),
    .wb_err_o(wb_err_o),
    .wb_inta_o(wb_inta_o),
    .outp_0(outp_0),
    .outp_1(outp_1),
    .outp_2(outp_2),
    .outp_3(outp_3),
    .outp_4(outp_4),
    .outp_5(outp_5),
    .outp_6(outp_6),
    .outp_7(outp_7),
    .outp_8(outp_8),
    .outp_9(outp_9),
    .outp_10(outp_10),
    .outp_11(outp_11),
    .outp_12(outp_12),
    .outp_13(outp_13),
    .outp_14(outp_14),
    .outp_15(outp_15),
    .outp_16(outp_16),
    .outp_17(outp_17),
    .outp_18(outp_18),
    .outp_19(outp_19),
    .outp_20(outp_20),
    .outp_21(outp_21),
    .outp_22(outp_22),
    .outp_23(outp_23),
    .outp_24(outp_24),
    .outp_25(outp_25),
    .outp_26(outp_26),
    .outp_27(outp_27),
    .outp_28(outp_28),
    .outp_29(outp_29),
    .outp_30(outp_30),
    .outp_31(outp_31),
    .inp_0(inp_0),
    .inp_1(inp_1),
    .inp_2(inp_2),
    .inp_3(inp_3),
    .inp_4(inp_4),
    .inp_5(inp_5),
    .inp_6(inp_6),
    .inp_7(inp_7),
    .inp_8(inp_8),
    .inp_9(inp_9),
    .inp_10(inp_10),
    .inp_11(inp_11),
    .inp_12(inp_12),
    .inp_13(inp_13),
    .inp_14(inp_14),
    .inp_15(inp_15),
    .inp_16(inp_16),
    .inp_17(inp_17),
    .inp_18(inp_18),
    .inp_19(inp_19),
    .inp_20(inp_20),
    .inp_21(inp_21),
    .inp_22(inp_22),
    .inp_23(inp_23),
    .inp_24(inp_24),
    .inp_25(inp_25),
    .inp_26(inp_26),
    .inp_27(inp_27),
    .inp_28(inp_28),
    .inp_29(inp_29),
    .inp_30(inp_30),
    .inp_31(inp_31),
    .oe_0(oe_0),
    .oe_1(oe_1),
    .oe_2(oe_2),
    .oe_3(oe_3),
    .oe_4(oe_4),
    .oe_5(oe_5),
    .oe_6(oe_6),
    .oe_7(oe_7),
    .oe_8(oe_8),
    .oe_9(oe_9),
    .oe_10(oe_10),
    .oe_11(oe_11),
    .oe_12(oe_12),
    .oe_13(oe_13),
    .oe_14(oe_14),
    .oe_15(oe_15),
    .oe_16(oe_16),
    .oe_17(oe_17),
    .oe_18(oe_18),
    .oe_19(oe_19),
    .oe_20(oe_20),
    .oe_21(oe_21),
    .oe_22(oe_22),
    .oe_23(oe_23),
    .oe_24(oe_24),
    .oe_25(oe_25),
    .oe_26(oe_26),
    .oe_27(oe_27),
    .oe_28(oe_28),
    .oe_29(oe_29),
    .oe_30(oe_30),
    .oe_31(oe_31)
  );
endmodule
