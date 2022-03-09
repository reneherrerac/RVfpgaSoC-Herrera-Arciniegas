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


// IP VLNV: xilinx.com:module_ref:intcon_wrapper_bd:1.0
// IP Revision: 1

(* X_CORE_INFO = "intcon_wrapper_bd,Vivado 2019.2" *)
(* CHECK_LICENSE_TYPE = "BD_intcon_wrapper_bd_0_0,intcon_wrapper_bd,{}" *)
(* CORE_GENERATION_INFO = "BD_intcon_wrapper_bd_0_0,intcon_wrapper_bd,{x_ipProduct=Vivado 2019.2,x_ipVendor=xilinx.com,x_ipLibrary=module_ref,x_ipName=intcon_wrapper_bd,x_ipVersion=1.0,x_ipCoreRevision=1,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED}" *)
(* IP_DEFINITION_SOURCE = "module_ref" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module BD_intcon_wrapper_bd_0_0 (
  clk_i_wrapper,
  rst_ni_wrapper,
  i_ifu_arid,
  i_ifu_araddr,
  i_ifu_arlen,
  i_ifu_arsize,
  i_ifu_arburst,
  i_ifu_arlock,
  i_ifu_arcache,
  i_ifu_arprot,
  i_ifu_arregion,
  i_ifu_arqos,
  i_ifu_arvalid,
  i_ifu_rready,
  o_ifu_arready,
  o_ifu_rid,
  o_ifu_rdata,
  o_ifu_rresp,
  o_ifu_rlast,
  o_ifu_rvalid,
  i_lsu_awid,
  i_lsu_awaddr,
  i_lsu_awlen,
  i_lsu_awsize,
  i_lsu_awburst,
  i_lsu_awlock,
  i_lsu_awcache,
  i_lsu_awprot,
  i_lsu_awregion,
  i_lsu_awqos,
  i_lsu_awvalid,
  i_lsu_wdata,
  i_lsu_wstrb,
  i_lsu_wlast,
  i_lsu_wvalid,
  i_lsu_arid,
  i_lsu_araddr,
  i_lsu_arlen,
  i_lsu_arsize,
  i_lsu_arburst,
  i_lsu_arlock,
  i_lsu_arcache,
  i_lsu_arprot,
  i_lsu_arregion,
  i_lsu_arqos,
  i_lsu_arvalid,
  i_lsu_bready,
  i_lsu_rready,
  o_lsu_awready,
  o_lsu_arready,
  o_lsu_wready,
  o_lsu_bid,
  o_lsu_bresp,
  o_lsu_bvalid,
  o_lsu_rid,
  o_lsu_rdata,
  o_lsu_rresp,
  o_lsu_rlast,
  o_lsu_rvalid,
  i_sb_awid,
  i_sb_awaddr,
  i_sb_awlen,
  i_sb_awsize,
  i_sb_awburst,
  i_sb_awlock,
  i_sb_awcache,
  i_sb_awprot,
  i_sb_awregion,
  i_sb_awqos,
  i_sb_awvalid,
  i_sb_wdata,
  i_sb_wstrb,
  i_sb_wlast,
  i_sb_wvalid,
  o_sb_awready,
  i_sb_bready,
  i_sb_arid,
  i_sb_araddr,
  i_sb_arlen,
  i_sb_arsize,
  i_sb_arburst,
  i_sb_arlock,
  i_sb_arcache,
  i_sb_arprot,
  i_sb_arregion,
  i_sb_arqos,
  i_sb_arvalid,
  o_sb_arready,
  o_sb_wready,
  o_sb_bid,
  o_sb_bresp,
  o_sb_bvalid,
  o_sb_rid,
  o_sb_rdata,
  o_sb_rresp,
  o_sb_rlast,
  o_sb_rvalid,
  i_sb_rready,
  o_ram_awid,
  o_ram_awaddr,
  o_ram_awlen,
  o_ram_awsize,
  o_ram_awburst,
  o_ram_awlock,
  o_ram_awcache,
  o_ram_awprot,
  o_ram_awregion,
  o_ram_awqos,
  o_ram_awvalid,
  i_ram_awready,
  o_ram_arid,
  o_ram_araddr,
  o_ram_arlen,
  o_ram_arsize,
  o_ram_arburst,
  o_ram_arlock,
  o_ram_arcache,
  o_ram_arprot,
  o_ram_arregion,
  o_ram_arqos,
  o_ram_arvalid,
  i_ram_arready,
  o_ram_wdata,
  o_ram_wstrb,
  o_ram_wlast,
  o_ram_wvalid,
  i_ram_wready,
  i_ram_bid,
  i_ram_bresp,
  i_ram_bvalid,
  o_ram_bready,
  i_ram_rid,
  i_ram_rdata,
  i_ram_rresp,
  i_ram_rlast,
  i_ram_rvalid,
  o_ram_rready,
  wb_rom_adr_o,
  wb_rom_dat_o,
  wb_rom_sel_o,
  wb_rom_we_o,
  wb_rom_cyc_o,
  wb_rom_stb_o,
  wb_rom_dat_i,
  wb_rom_ack_i,
  wb_spi_flash_adr_o,
  wb_spi_flash_dat_o,
  wb_spi_flash_sel_o,
  wb_spi_flash_we_o,
  wb_spi_flash_cyc_o,
  wb_spi_flash_stb_o,
  wb_spi_flash_cti_o,
  wb_spi_flash_bte_o,
  wb_spi_flash_dat_i,
  wb_spi_flash_ack_i,
  wb_spi_flash_err_i,
  wb_spi_flash_rty_i,
  wb_sys_adr_o,
  wb_sys_dat_o,
  wb_sys_sel_o,
  wb_sys_we_o,
  wb_sys_cyc_o,
  wb_sys_stb_o,
  wb_sys_cti_o,
  wb_sys_bte_o,
  wb_sys_dat_i,
  wb_sys_ack_i,
  wb_sys_err_i,
  wb_sys_rty_i,
  wb_uart_adr_o,
  wb_uart_dat_o,
  wb_uart_sel_o,
  wb_uart_we_o,
  wb_uart_cyc_o,
  wb_uart_stb_o,
  wb_uart_cti_o,
  wb_uart_bte_o,
  wb_uart_dat_i,
  wb_uart_ack_i,
  wb_uart_err_i,
  wb_uart_rty_i,
  wb_gpio_adr_o,
  wb_gpio_dat_o,
  wb_gpio_sel_o,
  wb_gpio_we_o,
  wb_gpio_cyc_o,
  wb_gpio_stb_o,
  wb_gpio_dat_i,
  wb_gpio_ack_i,
  wb_gpio_err_i,
  wb_ptc_adr_o,
  wb_ptc_dat_o,
  wb_ptc_sel_o,
  wb_ptc_we_o,
  wb_ptc_cyc_o,
  wb_ptc_stb_o,
  wb_ptc_cti_o,
  wb_ptc_bte_o,
  wb_ptc_dat_i,
  wb_ptc_ack_i,
  wb_ptc_err_i,
  wb_ptc_rty_i,
  wb_spi_accel_adr_o,
  wb_spi_accel_dat_o,
  wb_spi_accel_sel_o,
  wb_spi_accel_we_o,
  wb_spi_accel_cyc_o,
  wb_spi_accel_stb_o,
  wb_spi_accel_cti_o,
  wb_spi_accel_bte_o,
  wb_spi_accel_dat_i,
  wb_spi_accel_ack_i,
  wb_spi_accel_err_i,
  wb_spi_accel_rty_i
);

input wire clk_i_wrapper;
input wire rst_ni_wrapper;
input wire [2 : 0] i_ifu_arid;
input wire [31 : 0] i_ifu_araddr;
input wire [7 : 0] i_ifu_arlen;
input wire [2 : 0] i_ifu_arsize;
input wire [1 : 0] i_ifu_arburst;
input wire i_ifu_arlock;
input wire [3 : 0] i_ifu_arcache;
input wire [2 : 0] i_ifu_arprot;
input wire [3 : 0] i_ifu_arregion;
input wire [3 : 0] i_ifu_arqos;
input wire i_ifu_arvalid;
input wire i_ifu_rready;
output wire o_ifu_arready;
output wire [2 : 0] o_ifu_rid;
output wire [63 : 0] o_ifu_rdata;
output wire [1 : 0] o_ifu_rresp;
output wire o_ifu_rlast;
output wire o_ifu_rvalid;
input wire [3 : 0] i_lsu_awid;
input wire [31 : 0] i_lsu_awaddr;
input wire [7 : 0] i_lsu_awlen;
input wire [2 : 0] i_lsu_awsize;
input wire [1 : 0] i_lsu_awburst;
input wire i_lsu_awlock;
input wire [3 : 0] i_lsu_awcache;
input wire [2 : 0] i_lsu_awprot;
input wire [3 : 0] i_lsu_awregion;
input wire [3 : 0] i_lsu_awqos;
input wire i_lsu_awvalid;
input wire [63 : 0] i_lsu_wdata;
input wire [7 : 0] i_lsu_wstrb;
input wire i_lsu_wlast;
input wire i_lsu_wvalid;
input wire [3 : 0] i_lsu_arid;
input wire [31 : 0] i_lsu_araddr;
input wire [7 : 0] i_lsu_arlen;
input wire [2 : 0] i_lsu_arsize;
input wire [1 : 0] i_lsu_arburst;
input wire i_lsu_arlock;
input wire [3 : 0] i_lsu_arcache;
input wire [2 : 0] i_lsu_arprot;
input wire [3 : 0] i_lsu_arregion;
input wire [3 : 0] i_lsu_arqos;
input wire i_lsu_arvalid;
input wire i_lsu_bready;
input wire i_lsu_rready;
output wire o_lsu_awready;
output wire o_lsu_arready;
output wire o_lsu_wready;
output wire [3 : 0] o_lsu_bid;
output wire [1 : 0] o_lsu_bresp;
output wire o_lsu_bvalid;
output wire [3 : 0] o_lsu_rid;
output wire [63 : 0] o_lsu_rdata;
output wire [1 : 0] o_lsu_rresp;
output wire o_lsu_rlast;
output wire o_lsu_rvalid;
input wire [0 : 0] i_sb_awid;
input wire [31 : 0] i_sb_awaddr;
input wire [7 : 0] i_sb_awlen;
input wire [2 : 0] i_sb_awsize;
input wire [1 : 0] i_sb_awburst;
input wire i_sb_awlock;
input wire [3 : 0] i_sb_awcache;
input wire [2 : 0] i_sb_awprot;
input wire [3 : 0] i_sb_awregion;
input wire [3 : 0] i_sb_awqos;
input wire i_sb_awvalid;
input wire [63 : 0] i_sb_wdata;
input wire [7 : 0] i_sb_wstrb;
input wire i_sb_wlast;
input wire i_sb_wvalid;
output wire o_sb_awready;
input wire i_sb_bready;
input wire [0 : 0] i_sb_arid;
input wire [31 : 0] i_sb_araddr;
input wire [7 : 0] i_sb_arlen;
input wire [2 : 0] i_sb_arsize;
input wire [1 : 0] i_sb_arburst;
input wire i_sb_arlock;
input wire [3 : 0] i_sb_arcache;
input wire [2 : 0] i_sb_arprot;
input wire [3 : 0] i_sb_arregion;
input wire [3 : 0] i_sb_arqos;
input wire i_sb_arvalid;
output wire o_sb_arready;
output wire o_sb_wready;
output wire [0 : 0] o_sb_bid;
output wire [1 : 0] o_sb_bresp;
output wire o_sb_bvalid;
output wire [0 : 0] o_sb_rid;
output wire [63 : 0] o_sb_rdata;
output wire [1 : 0] o_sb_rresp;
output wire o_sb_rlast;
output wire o_sb_rvalid;
input wire i_sb_rready;
output wire [5 : 0] o_ram_awid;
output wire [31 : 0] o_ram_awaddr;
output wire [7 : 0] o_ram_awlen;
output wire [2 : 0] o_ram_awsize;
output wire [1 : 0] o_ram_awburst;
output wire o_ram_awlock;
output wire [3 : 0] o_ram_awcache;
output wire [2 : 0] o_ram_awprot;
output wire [3 : 0] o_ram_awregion;
output wire [3 : 0] o_ram_awqos;
output wire o_ram_awvalid;
input wire i_ram_awready;
output wire [5 : 0] o_ram_arid;
output wire [31 : 0] o_ram_araddr;
output wire [7 : 0] o_ram_arlen;
output wire [2 : 0] o_ram_arsize;
output wire [1 : 0] o_ram_arburst;
output wire o_ram_arlock;
output wire [3 : 0] o_ram_arcache;
output wire [2 : 0] o_ram_arprot;
output wire [3 : 0] o_ram_arregion;
output wire [3 : 0] o_ram_arqos;
output wire o_ram_arvalid;
input wire i_ram_arready;
output wire [63 : 0] o_ram_wdata;
output wire [7 : 0] o_ram_wstrb;
output wire o_ram_wlast;
output wire o_ram_wvalid;
input wire i_ram_wready;
input wire [5 : 0] i_ram_bid;
input wire [1 : 0] i_ram_bresp;
input wire i_ram_bvalid;
output wire o_ram_bready;
input wire [5 : 0] i_ram_rid;
input wire [63 : 0] i_ram_rdata;
input wire [1 : 0] i_ram_rresp;
input wire i_ram_rlast;
input wire i_ram_rvalid;
output wire o_ram_rready;
output wire [31 : 0] wb_rom_adr_o;
output wire [31 : 0] wb_rom_dat_o;
output wire [3 : 0] wb_rom_sel_o;
output wire wb_rom_we_o;
output wire wb_rom_cyc_o;
output wire wb_rom_stb_o;
input wire [31 : 0] wb_rom_dat_i;
input wire wb_rom_ack_i;
output wire [31 : 0] wb_spi_flash_adr_o;
output wire [31 : 0] wb_spi_flash_dat_o;
output wire [3 : 0] wb_spi_flash_sel_o;
output wire wb_spi_flash_we_o;
output wire wb_spi_flash_cyc_o;
output wire wb_spi_flash_stb_o;
output wire [2 : 0] wb_spi_flash_cti_o;
output wire [1 : 0] wb_spi_flash_bte_o;
input wire [31 : 0] wb_spi_flash_dat_i;
input wire wb_spi_flash_ack_i;
input wire wb_spi_flash_err_i;
input wire wb_spi_flash_rty_i;
output wire [31 : 0] wb_sys_adr_o;
output wire [31 : 0] wb_sys_dat_o;
output wire [3 : 0] wb_sys_sel_o;
output wire wb_sys_we_o;
output wire wb_sys_cyc_o;
output wire wb_sys_stb_o;
output wire [2 : 0] wb_sys_cti_o;
output wire [1 : 0] wb_sys_bte_o;
input wire [31 : 0] wb_sys_dat_i;
input wire wb_sys_ack_i;
input wire wb_sys_err_i;
input wire wb_sys_rty_i;
output wire [31 : 0] wb_uart_adr_o;
output wire [31 : 0] wb_uart_dat_o;
output wire [3 : 0] wb_uart_sel_o;
output wire wb_uart_we_o;
output wire wb_uart_cyc_o;
output wire wb_uart_stb_o;
output wire [2 : 0] wb_uart_cti_o;
output wire [1 : 0] wb_uart_bte_o;
input wire [31 : 0] wb_uart_dat_i;
input wire wb_uart_ack_i;
input wire wb_uart_err_i;
input wire wb_uart_rty_i;
output wire [7 : 0] wb_gpio_adr_o;
output wire [31 : 0] wb_gpio_dat_o;
output wire [3 : 0] wb_gpio_sel_o;
output wire wb_gpio_we_o;
output wire wb_gpio_cyc_o;
output wire wb_gpio_stb_o;
input wire [31 : 0] wb_gpio_dat_i;
input wire wb_gpio_ack_i;
input wire wb_gpio_err_i;
output wire [31 : 0] wb_ptc_adr_o;
output wire [31 : 0] wb_ptc_dat_o;
output wire [3 : 0] wb_ptc_sel_o;
output wire wb_ptc_we_o;
output wire wb_ptc_cyc_o;
output wire wb_ptc_stb_o;
output wire [2 : 0] wb_ptc_cti_o;
output wire [1 : 0] wb_ptc_bte_o;
input wire [31 : 0] wb_ptc_dat_i;
input wire wb_ptc_ack_i;
input wire wb_ptc_err_i;
input wire wb_ptc_rty_i;
output wire [31 : 0] wb_spi_accel_adr_o;
output wire [31 : 0] wb_spi_accel_dat_o;
output wire [3 : 0] wb_spi_accel_sel_o;
output wire wb_spi_accel_we_o;
output wire wb_spi_accel_cyc_o;
output wire wb_spi_accel_stb_o;
output wire [2 : 0] wb_spi_accel_cti_o;
output wire [1 : 0] wb_spi_accel_bte_o;
input wire [31 : 0] wb_spi_accel_dat_i;
input wire wb_spi_accel_ack_i;
input wire wb_spi_accel_err_i;
input wire wb_spi_accel_rty_i;

  intcon_wrapper_bd inst (
    .clk_i_wrapper(clk_i_wrapper),
    .rst_ni_wrapper(rst_ni_wrapper),
    .i_ifu_arid(i_ifu_arid),
    .i_ifu_araddr(i_ifu_araddr),
    .i_ifu_arlen(i_ifu_arlen),
    .i_ifu_arsize(i_ifu_arsize),
    .i_ifu_arburst(i_ifu_arburst),
    .i_ifu_arlock(i_ifu_arlock),
    .i_ifu_arcache(i_ifu_arcache),
    .i_ifu_arprot(i_ifu_arprot),
    .i_ifu_arregion(i_ifu_arregion),
    .i_ifu_arqos(i_ifu_arqos),
    .i_ifu_arvalid(i_ifu_arvalid),
    .i_ifu_rready(i_ifu_rready),
    .o_ifu_arready(o_ifu_arready),
    .o_ifu_rid(o_ifu_rid),
    .o_ifu_rdata(o_ifu_rdata),
    .o_ifu_rresp(o_ifu_rresp),
    .o_ifu_rlast(o_ifu_rlast),
    .o_ifu_rvalid(o_ifu_rvalid),
    .i_lsu_awid(i_lsu_awid),
    .i_lsu_awaddr(i_lsu_awaddr),
    .i_lsu_awlen(i_lsu_awlen),
    .i_lsu_awsize(i_lsu_awsize),
    .i_lsu_awburst(i_lsu_awburst),
    .i_lsu_awlock(i_lsu_awlock),
    .i_lsu_awcache(i_lsu_awcache),
    .i_lsu_awprot(i_lsu_awprot),
    .i_lsu_awregion(i_lsu_awregion),
    .i_lsu_awqos(i_lsu_awqos),
    .i_lsu_awvalid(i_lsu_awvalid),
    .i_lsu_wdata(i_lsu_wdata),
    .i_lsu_wstrb(i_lsu_wstrb),
    .i_lsu_wlast(i_lsu_wlast),
    .i_lsu_wvalid(i_lsu_wvalid),
    .i_lsu_arid(i_lsu_arid),
    .i_lsu_araddr(i_lsu_araddr),
    .i_lsu_arlen(i_lsu_arlen),
    .i_lsu_arsize(i_lsu_arsize),
    .i_lsu_arburst(i_lsu_arburst),
    .i_lsu_arlock(i_lsu_arlock),
    .i_lsu_arcache(i_lsu_arcache),
    .i_lsu_arprot(i_lsu_arprot),
    .i_lsu_arregion(i_lsu_arregion),
    .i_lsu_arqos(i_lsu_arqos),
    .i_lsu_arvalid(i_lsu_arvalid),
    .i_lsu_bready(i_lsu_bready),
    .i_lsu_rready(i_lsu_rready),
    .o_lsu_awready(o_lsu_awready),
    .o_lsu_arready(o_lsu_arready),
    .o_lsu_wready(o_lsu_wready),
    .o_lsu_bid(o_lsu_bid),
    .o_lsu_bresp(o_lsu_bresp),
    .o_lsu_bvalid(o_lsu_bvalid),
    .o_lsu_rid(o_lsu_rid),
    .o_lsu_rdata(o_lsu_rdata),
    .o_lsu_rresp(o_lsu_rresp),
    .o_lsu_rlast(o_lsu_rlast),
    .o_lsu_rvalid(o_lsu_rvalid),
    .i_sb_awid(i_sb_awid),
    .i_sb_awaddr(i_sb_awaddr),
    .i_sb_awlen(i_sb_awlen),
    .i_sb_awsize(i_sb_awsize),
    .i_sb_awburst(i_sb_awburst),
    .i_sb_awlock(i_sb_awlock),
    .i_sb_awcache(i_sb_awcache),
    .i_sb_awprot(i_sb_awprot),
    .i_sb_awregion(i_sb_awregion),
    .i_sb_awqos(i_sb_awqos),
    .i_sb_awvalid(i_sb_awvalid),
    .i_sb_wdata(i_sb_wdata),
    .i_sb_wstrb(i_sb_wstrb),
    .i_sb_wlast(i_sb_wlast),
    .i_sb_wvalid(i_sb_wvalid),
    .o_sb_awready(o_sb_awready),
    .i_sb_bready(i_sb_bready),
    .i_sb_arid(i_sb_arid),
    .i_sb_araddr(i_sb_araddr),
    .i_sb_arlen(i_sb_arlen),
    .i_sb_arsize(i_sb_arsize),
    .i_sb_arburst(i_sb_arburst),
    .i_sb_arlock(i_sb_arlock),
    .i_sb_arcache(i_sb_arcache),
    .i_sb_arprot(i_sb_arprot),
    .i_sb_arregion(i_sb_arregion),
    .i_sb_arqos(i_sb_arqos),
    .i_sb_arvalid(i_sb_arvalid),
    .o_sb_arready(o_sb_arready),
    .o_sb_wready(o_sb_wready),
    .o_sb_bid(o_sb_bid),
    .o_sb_bresp(o_sb_bresp),
    .o_sb_bvalid(o_sb_bvalid),
    .o_sb_rid(o_sb_rid),
    .o_sb_rdata(o_sb_rdata),
    .o_sb_rresp(o_sb_rresp),
    .o_sb_rlast(o_sb_rlast),
    .o_sb_rvalid(o_sb_rvalid),
    .i_sb_rready(i_sb_rready),
    .o_ram_awid(o_ram_awid),
    .o_ram_awaddr(o_ram_awaddr),
    .o_ram_awlen(o_ram_awlen),
    .o_ram_awsize(o_ram_awsize),
    .o_ram_awburst(o_ram_awburst),
    .o_ram_awlock(o_ram_awlock),
    .o_ram_awcache(o_ram_awcache),
    .o_ram_awprot(o_ram_awprot),
    .o_ram_awregion(o_ram_awregion),
    .o_ram_awqos(o_ram_awqos),
    .o_ram_awvalid(o_ram_awvalid),
    .i_ram_awready(i_ram_awready),
    .o_ram_arid(o_ram_arid),
    .o_ram_araddr(o_ram_araddr),
    .o_ram_arlen(o_ram_arlen),
    .o_ram_arsize(o_ram_arsize),
    .o_ram_arburst(o_ram_arburst),
    .o_ram_arlock(o_ram_arlock),
    .o_ram_arcache(o_ram_arcache),
    .o_ram_arprot(o_ram_arprot),
    .o_ram_arregion(o_ram_arregion),
    .o_ram_arqos(o_ram_arqos),
    .o_ram_arvalid(o_ram_arvalid),
    .i_ram_arready(i_ram_arready),
    .o_ram_wdata(o_ram_wdata),
    .o_ram_wstrb(o_ram_wstrb),
    .o_ram_wlast(o_ram_wlast),
    .o_ram_wvalid(o_ram_wvalid),
    .i_ram_wready(i_ram_wready),
    .i_ram_bid(i_ram_bid),
    .i_ram_bresp(i_ram_bresp),
    .i_ram_bvalid(i_ram_bvalid),
    .o_ram_bready(o_ram_bready),
    .i_ram_rid(i_ram_rid),
    .i_ram_rdata(i_ram_rdata),
    .i_ram_rresp(i_ram_rresp),
    .i_ram_rlast(i_ram_rlast),
    .i_ram_rvalid(i_ram_rvalid),
    .o_ram_rready(o_ram_rready),
    .wb_rom_adr_o(wb_rom_adr_o),
    .wb_rom_dat_o(wb_rom_dat_o),
    .wb_rom_sel_o(wb_rom_sel_o),
    .wb_rom_we_o(wb_rom_we_o),
    .wb_rom_cyc_o(wb_rom_cyc_o),
    .wb_rom_stb_o(wb_rom_stb_o),
    .wb_rom_dat_i(wb_rom_dat_i),
    .wb_rom_ack_i(wb_rom_ack_i),
    .wb_spi_flash_adr_o(wb_spi_flash_adr_o),
    .wb_spi_flash_dat_o(wb_spi_flash_dat_o),
    .wb_spi_flash_sel_o(wb_spi_flash_sel_o),
    .wb_spi_flash_we_o(wb_spi_flash_we_o),
    .wb_spi_flash_cyc_o(wb_spi_flash_cyc_o),
    .wb_spi_flash_stb_o(wb_spi_flash_stb_o),
    .wb_spi_flash_cti_o(wb_spi_flash_cti_o),
    .wb_spi_flash_bte_o(wb_spi_flash_bte_o),
    .wb_spi_flash_dat_i(wb_spi_flash_dat_i),
    .wb_spi_flash_ack_i(wb_spi_flash_ack_i),
    .wb_spi_flash_err_i(wb_spi_flash_err_i),
    .wb_spi_flash_rty_i(wb_spi_flash_rty_i),
    .wb_sys_adr_o(wb_sys_adr_o),
    .wb_sys_dat_o(wb_sys_dat_o),
    .wb_sys_sel_o(wb_sys_sel_o),
    .wb_sys_we_o(wb_sys_we_o),
    .wb_sys_cyc_o(wb_sys_cyc_o),
    .wb_sys_stb_o(wb_sys_stb_o),
    .wb_sys_cti_o(wb_sys_cti_o),
    .wb_sys_bte_o(wb_sys_bte_o),
    .wb_sys_dat_i(wb_sys_dat_i),
    .wb_sys_ack_i(wb_sys_ack_i),
    .wb_sys_err_i(wb_sys_err_i),
    .wb_sys_rty_i(wb_sys_rty_i),
    .wb_uart_adr_o(wb_uart_adr_o),
    .wb_uart_dat_o(wb_uart_dat_o),
    .wb_uart_sel_o(wb_uart_sel_o),
    .wb_uart_we_o(wb_uart_we_o),
    .wb_uart_cyc_o(wb_uart_cyc_o),
    .wb_uart_stb_o(wb_uart_stb_o),
    .wb_uart_cti_o(wb_uart_cti_o),
    .wb_uart_bte_o(wb_uart_bte_o),
    .wb_uart_dat_i(wb_uart_dat_i),
    .wb_uart_ack_i(wb_uart_ack_i),
    .wb_uart_err_i(wb_uart_err_i),
    .wb_uart_rty_i(wb_uart_rty_i),
    .wb_gpio_adr_o(wb_gpio_adr_o),
    .wb_gpio_dat_o(wb_gpio_dat_o),
    .wb_gpio_sel_o(wb_gpio_sel_o),
    .wb_gpio_we_o(wb_gpio_we_o),
    .wb_gpio_cyc_o(wb_gpio_cyc_o),
    .wb_gpio_stb_o(wb_gpio_stb_o),
    .wb_gpio_dat_i(wb_gpio_dat_i),
    .wb_gpio_ack_i(wb_gpio_ack_i),
    .wb_gpio_err_i(wb_gpio_err_i),
    .wb_ptc_adr_o(wb_ptc_adr_o),
    .wb_ptc_dat_o(wb_ptc_dat_o),
    .wb_ptc_sel_o(wb_ptc_sel_o),
    .wb_ptc_we_o(wb_ptc_we_o),
    .wb_ptc_cyc_o(wb_ptc_cyc_o),
    .wb_ptc_stb_o(wb_ptc_stb_o),
    .wb_ptc_cti_o(wb_ptc_cti_o),
    .wb_ptc_bte_o(wb_ptc_bte_o),
    .wb_ptc_dat_i(wb_ptc_dat_i),
    .wb_ptc_ack_i(wb_ptc_ack_i),
    .wb_ptc_err_i(wb_ptc_err_i),
    .wb_ptc_rty_i(wb_ptc_rty_i),
    .wb_spi_accel_adr_o(wb_spi_accel_adr_o),
    .wb_spi_accel_dat_o(wb_spi_accel_dat_o),
    .wb_spi_accel_sel_o(wb_spi_accel_sel_o),
    .wb_spi_accel_we_o(wb_spi_accel_we_o),
    .wb_spi_accel_cyc_o(wb_spi_accel_cyc_o),
    .wb_spi_accel_stb_o(wb_spi_accel_stb_o),
    .wb_spi_accel_cti_o(wb_spi_accel_cti_o),
    .wb_spi_accel_bte_o(wb_spi_accel_bte_o),
    .wb_spi_accel_dat_i(wb_spi_accel_dat_i),
    .wb_spi_accel_ack_i(wb_spi_accel_ack_i),
    .wb_spi_accel_err_i(wb_spi_accel_err_i),
    .wb_spi_accel_rty_i(wb_spi_accel_rty_i)
  );
endmodule
