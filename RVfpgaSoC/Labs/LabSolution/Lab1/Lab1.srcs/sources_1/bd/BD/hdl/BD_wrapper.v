//Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
//Date        : Mon May 31 23:25:42 2021
//Host        : LenovoHamza running 64-bit major release  (build 9200)
//Command     : generate_target BD_wrapper.bd
//Design      : BD_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module BD_wrapper
   (AN_0,
    Digits_Bits_0,
    bidir_0,
    bidir_1,
    bidir_10,
    bidir_11,
    bidir_12,
    bidir_13,
    bidir_14,
    bidir_15,
    bidir_16,
    bidir_17,
    bidir_18,
    bidir_19,
    bidir_2,
    bidir_20,
    bidir_21,
    bidir_22,
    bidir_23,
    bidir_24,
    bidir_25,
    bidir_26,
    bidir_27,
    bidir_28,
    bidir_29,
    bidir_3,
    bidir_30,
    bidir_31,
    bidir_4,
    bidir_5,
    bidir_6,
    bidir_7,
    bidir_8,
    bidir_9,
    clk_0,
    dmi_hard_reset_0,
    dmi_reg_addr_0,
    dmi_reg_en_0,
    dmi_reg_rdata_0,
    dmi_reg_wdata_0,
    dmi_reg_wr_en_0,
    i_ram_arready_0,
    i_ram_awready_0,
    i_ram_bid_0,
    i_ram_bresp_0,
    i_ram_bvalid_0,
    i_ram_init_done_0,
    i_ram_init_error_0,
    i_ram_rdata_0,
    i_ram_rid_0,
    i_ram_rlast_0,
    i_ram_rresp_0,
    i_ram_rvalid_0,
    i_ram_wready_0,
    o_ram_araddr_0,
    o_ram_arburst_0,
    o_ram_arcache_0,
    o_ram_arid_0,
    o_ram_arlen_0,
    o_ram_arlock_0,
    o_ram_arprot_0,
    o_ram_arqos_0,
    o_ram_arregion_0,
    o_ram_arsize_0,
    o_ram_arvalid_0,
    o_ram_awaddr_0,
    o_ram_awburst_0,
    o_ram_awcache_0,
    o_ram_awid_0,
    o_ram_awlen_0,
    o_ram_awlock_0,
    o_ram_awprot_0,
    o_ram_awqos_0,
    o_ram_awregion_0,
    o_ram_awsize_0,
    o_ram_awvalid_0,
    o_ram_bready_0,
    o_ram_rready_0,
    o_ram_wdata_0,
    o_ram_wlast_0,
    o_ram_wstrb_0,
    o_ram_wvalid_0,
    rst_0);
  output [7:0]AN_0;
  output [6:0]Digits_Bits_0;
  output bidir_0;
  output bidir_1;
  output bidir_10;
  output bidir_11;
  output bidir_12;
  output bidir_13;
  output bidir_14;
  output bidir_15;
  output bidir_16;
  output bidir_17;
  output bidir_18;
  output bidir_19;
  output bidir_2;
  output bidir_20;
  output bidir_21;
  output bidir_22;
  output bidir_23;
  output bidir_24;
  output bidir_25;
  output bidir_26;
  output bidir_27;
  output bidir_28;
  output bidir_29;
  output bidir_3;
  output bidir_30;
  output bidir_31;
  output bidir_4;
  output bidir_5;
  output bidir_6;
  output bidir_7;
  output bidir_8;
  output bidir_9;
  input clk_0;
  input dmi_hard_reset_0;
  input [6:0]dmi_reg_addr_0;
  input dmi_reg_en_0;
  output [31:0]dmi_reg_rdata_0;
  input [31:0]dmi_reg_wdata_0;
  input dmi_reg_wr_en_0;
  input i_ram_arready_0;
  input i_ram_awready_0;
  input [5:0]i_ram_bid_0;
  input [1:0]i_ram_bresp_0;
  input i_ram_bvalid_0;
  input i_ram_init_done_0;
  input i_ram_init_error_0;
  input [63:0]i_ram_rdata_0;
  input [5:0]i_ram_rid_0;
  input i_ram_rlast_0;
  input [1:0]i_ram_rresp_0;
  input i_ram_rvalid_0;
  input i_ram_wready_0;
  output [31:0]o_ram_araddr_0;
  output [1:0]o_ram_arburst_0;
  output [3:0]o_ram_arcache_0;
  output [5:0]o_ram_arid_0;
  output [7:0]o_ram_arlen_0;
  output o_ram_arlock_0;
  output [2:0]o_ram_arprot_0;
  output [3:0]o_ram_arqos_0;
  output [3:0]o_ram_arregion_0;
  output [2:0]o_ram_arsize_0;
  output o_ram_arvalid_0;
  output [31:0]o_ram_awaddr_0;
  output [1:0]o_ram_awburst_0;
  output [3:0]o_ram_awcache_0;
  output [5:0]o_ram_awid_0;
  output [7:0]o_ram_awlen_0;
  output o_ram_awlock_0;
  output [2:0]o_ram_awprot_0;
  output [3:0]o_ram_awqos_0;
  output [3:0]o_ram_awregion_0;
  output [2:0]o_ram_awsize_0;
  output o_ram_awvalid_0;
  output o_ram_bready_0;
  output o_ram_rready_0;
  output [63:0]o_ram_wdata_0;
  output o_ram_wlast_0;
  output [7:0]o_ram_wstrb_0;
  output o_ram_wvalid_0;
  input rst_0;

  wire [7:0]AN_0;
  wire [6:0]Digits_Bits_0;
  wire bidir_0;
  wire bidir_1;
  wire bidir_10;
  wire bidir_11;
  wire bidir_12;
  wire bidir_13;
  wire bidir_14;
  wire bidir_15;
  wire bidir_16;
  wire bidir_17;
  wire bidir_18;
  wire bidir_19;
  wire bidir_2;
  wire bidir_20;
  wire bidir_21;
  wire bidir_22;
  wire bidir_23;
  wire bidir_24;
  wire bidir_25;
  wire bidir_26;
  wire bidir_27;
  wire bidir_28;
  wire bidir_29;
  wire bidir_3;
  wire bidir_30;
  wire bidir_31;
  wire bidir_4;
  wire bidir_5;
  wire bidir_6;
  wire bidir_7;
  wire bidir_8;
  wire bidir_9;
  wire clk_0;
  wire dmi_hard_reset_0;
  wire [6:0]dmi_reg_addr_0;
  wire dmi_reg_en_0;
  wire [31:0]dmi_reg_rdata_0;
  wire [31:0]dmi_reg_wdata_0;
  wire dmi_reg_wr_en_0;
  wire i_ram_arready_0;
  wire i_ram_awready_0;
  wire [5:0]i_ram_bid_0;
  wire [1:0]i_ram_bresp_0;
  wire i_ram_bvalid_0;
  wire i_ram_init_done_0;
  wire i_ram_init_error_0;
  wire [63:0]i_ram_rdata_0;
  wire [5:0]i_ram_rid_0;
  wire i_ram_rlast_0;
  wire [1:0]i_ram_rresp_0;
  wire i_ram_rvalid_0;
  wire i_ram_wready_0;
  wire [31:0]o_ram_araddr_0;
  wire [1:0]o_ram_arburst_0;
  wire [3:0]o_ram_arcache_0;
  wire [5:0]o_ram_arid_0;
  wire [7:0]o_ram_arlen_0;
  wire o_ram_arlock_0;
  wire [2:0]o_ram_arprot_0;
  wire [3:0]o_ram_arqos_0;
  wire [3:0]o_ram_arregion_0;
  wire [2:0]o_ram_arsize_0;
  wire o_ram_arvalid_0;
  wire [31:0]o_ram_awaddr_0;
  wire [1:0]o_ram_awburst_0;
  wire [3:0]o_ram_awcache_0;
  wire [5:0]o_ram_awid_0;
  wire [7:0]o_ram_awlen_0;
  wire o_ram_awlock_0;
  wire [2:0]o_ram_awprot_0;
  wire [3:0]o_ram_awqos_0;
  wire [3:0]o_ram_awregion_0;
  wire [2:0]o_ram_awsize_0;
  wire o_ram_awvalid_0;
  wire o_ram_bready_0;
  wire o_ram_rready_0;
  wire [63:0]o_ram_wdata_0;
  wire o_ram_wlast_0;
  wire [7:0]o_ram_wstrb_0;
  wire o_ram_wvalid_0;
  wire rst_0;

  BD BD_i
       (.AN_0(AN_0),
        .Digits_Bits_0(Digits_Bits_0),
        .bidir_0(bidir_0),
        .bidir_1(bidir_1),
        .bidir_10(bidir_10),
        .bidir_11(bidir_11),
        .bidir_12(bidir_12),
        .bidir_13(bidir_13),
        .bidir_14(bidir_14),
        .bidir_15(bidir_15),
        .bidir_16(bidir_16),
        .bidir_17(bidir_17),
        .bidir_18(bidir_18),
        .bidir_19(bidir_19),
        .bidir_2(bidir_2),
        .bidir_20(bidir_20),
        .bidir_21(bidir_21),
        .bidir_22(bidir_22),
        .bidir_23(bidir_23),
        .bidir_24(bidir_24),
        .bidir_25(bidir_25),
        .bidir_26(bidir_26),
        .bidir_27(bidir_27),
        .bidir_28(bidir_28),
        .bidir_29(bidir_29),
        .bidir_3(bidir_3),
        .bidir_30(bidir_30),
        .bidir_31(bidir_31),
        .bidir_4(bidir_4),
        .bidir_5(bidir_5),
        .bidir_6(bidir_6),
        .bidir_7(bidir_7),
        .bidir_8(bidir_8),
        .bidir_9(bidir_9),
        .clk_0(clk_0),
        .dmi_hard_reset_0(dmi_hard_reset_0),
        .dmi_reg_addr_0(dmi_reg_addr_0),
        .dmi_reg_en_0(dmi_reg_en_0),
        .dmi_reg_rdata_0(dmi_reg_rdata_0),
        .dmi_reg_wdata_0(dmi_reg_wdata_0),
        .dmi_reg_wr_en_0(dmi_reg_wr_en_0),
        .i_ram_arready_0(i_ram_arready_0),
        .i_ram_awready_0(i_ram_awready_0),
        .i_ram_bid_0(i_ram_bid_0),
        .i_ram_bresp_0(i_ram_bresp_0),
        .i_ram_bvalid_0(i_ram_bvalid_0),
        .i_ram_init_done_0(i_ram_init_done_0),
        .i_ram_init_error_0(i_ram_init_error_0),
        .i_ram_rdata_0(i_ram_rdata_0),
        .i_ram_rid_0(i_ram_rid_0),
        .i_ram_rlast_0(i_ram_rlast_0),
        .i_ram_rresp_0(i_ram_rresp_0),
        .i_ram_rvalid_0(i_ram_rvalid_0),
        .i_ram_wready_0(i_ram_wready_0),
        .o_ram_araddr_0(o_ram_araddr_0),
        .o_ram_arburst_0(o_ram_arburst_0),
        .o_ram_arcache_0(o_ram_arcache_0),
        .o_ram_arid_0(o_ram_arid_0),
        .o_ram_arlen_0(o_ram_arlen_0),
        .o_ram_arlock_0(o_ram_arlock_0),
        .o_ram_arprot_0(o_ram_arprot_0),
        .o_ram_arqos_0(o_ram_arqos_0),
        .o_ram_arregion_0(o_ram_arregion_0),
        .o_ram_arsize_0(o_ram_arsize_0),
        .o_ram_arvalid_0(o_ram_arvalid_0),
        .o_ram_awaddr_0(o_ram_awaddr_0),
        .o_ram_awburst_0(o_ram_awburst_0),
        .o_ram_awcache_0(o_ram_awcache_0),
        .o_ram_awid_0(o_ram_awid_0),
        .o_ram_awlen_0(o_ram_awlen_0),
        .o_ram_awlock_0(o_ram_awlock_0),
        .o_ram_awprot_0(o_ram_awprot_0),
        .o_ram_awqos_0(o_ram_awqos_0),
        .o_ram_awregion_0(o_ram_awregion_0),
        .o_ram_awsize_0(o_ram_awsize_0),
        .o_ram_awvalid_0(o_ram_awvalid_0),
        .o_ram_bready_0(o_ram_bready_0),
        .o_ram_rready_0(o_ram_rready_0),
        .o_ram_wdata_0(o_ram_wdata_0),
        .o_ram_wlast_0(o_ram_wlast_0),
        .o_ram_wstrb_0(o_ram_wstrb_0),
        .o_ram_wvalid_0(o_ram_wvalid_0),
        .rst_0(rst_0));
endmodule
