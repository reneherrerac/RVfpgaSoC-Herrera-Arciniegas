// SPDX-License-Identifier: Apache-2.0
// Copyright 2019 Western Digital Corporation or its affiliates.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//********************************************************************************
// $Id$
//
// Function: Verilog testbench for SweRVolf
// Comments:
//
//********************************************************************************

`default_nettype none
module rvfpgasim
  #(parameter bootrom_file  = "")
`ifdef VERILATOR
  (input wire clk,
   input wire  rst,
   input wire  i_jtag_tck,
   input wire  i_jtag_tms,
   input wire  i_jtag_tdi,
   input wire  i_jtag_trst_n,
   output wire o_jtag_tdo,
   output wire o_uart_tx,
   output wire o_gpio
   )
`endif
  ;

   localparam RAM_SIZE     = 32'h10000;

`ifndef VERILATOR
   reg 	 clk = 1'b0;
   reg 	 rst = 1'b1;
   always #10 clk <= !clk;
   initial #100 rst <= 1'b0;
   wire  o_gpio;
   wire i_jtag_tck = 1'b0;
   wire i_jtag_tms = 1'b0;
   wire i_jtag_tdi = 1'b0;
   wire i_jtag_trst_n = 1'b0;
   wire o_jtag_tdo;
   wire  o_uart_tx;

//   uart_decoder #(115200) uart_decoder (o_uart_tx);

`endif

   reg [1023:0] ram_init_file;
   initial begin
      if (|$test$plusargs("jtag_vpi_enable"))
	$display("JTAG VPI enabled. Not loading RAM");
      else if ($value$plusargs("ram_init_file=%s", ram_init_file)) begin
	 $display("Loading RAM contents from %0s", ram_init_file);
	 $readmemh(ram_init_file, ram.ram.mem);
      end
   end

   reg [1023:0] rom_init_file;
   initial begin
      if ($value$plusargs("rom_init_file=%s", rom_init_file)) begin
	 $display("Loading ROM contents from %0s", rom_init_file);
	 $readmemh(rom_init_file, swervolf.bootrom_wrapper_0.bootrom.ram.mem);
      end else if (!(|bootrom_file))
	//Jump to address 0 if no bootloader is selected
	swervolf.bootrom_wrapper_0.bootrom.ram.mem[0] = 64'h0000000000000067;
   end

   wire [15:0]  i_sw;
   assign  i_sw = 16'hFE34;
   wire [15:0] 	       gpio_out;
   wire [15:0]         gpio_out2;
   assign gpio_out = 16'b1;
   assign gpio_out2 = 16'b1;

   wire [5:0]  ram_awid;
   wire [31:0] ram_awaddr;
   wire [7:0]  ram_awlen;
   wire [2:0]  ram_awsize;
   wire [1:0]  ram_awburst;
   wire        ram_awlock;
   wire [3:0]  ram_awcache;
   wire [2:0]  ram_awprot;
   wire [3:0]  ram_awregion;
   wire [3:0]  ram_awqos;
   wire        ram_awvalid;
   wire        ram_awready;
   wire [5:0]  ram_arid;
   wire [31:0] ram_araddr;
   wire [7:0]  ram_arlen;
   wire [2:0]  ram_arsize;
   wire [1:0]  ram_arburst;
   wire        ram_arlock;
   wire [3:0]  ram_arcache;
   wire [2:0]  ram_arprot;
   wire [3:0]  ram_arregion;
   wire [3:0]  ram_arqos;
   wire        ram_arvalid;
   wire        ram_arready;
   wire [63:0] ram_wdata;
   wire [7:0]  ram_wstrb;
   wire        ram_wlast;
   wire        ram_wvalid;
   wire        ram_wready;
   wire [5:0]  ram_bid;
   wire [1:0]  ram_bresp;
   wire        ram_bvalid;
   wire        ram_bready;
   wire [5:0]  ram_rid;
   wire [63:0] ram_rdata;
   wire [1:0]  ram_rresp;
   wire        ram_rlast;
   wire        ram_rvalid;
   wire        ram_rready;

   wire        dmi_reg_en;
   wire [6:0]  dmi_reg_addr;
   wire        dmi_reg_wr_en;
   wire [31:0] dmi_reg_wdata;
   wire [31:0] dmi_reg_rdata;
   wire        dmi_hard_reset;
   
   axi_mem_wrapper
     #(.ID_WIDTH  (`RV_LSU_BUS_TAG+2),
       .MEM_SIZE  (RAM_SIZE),
       .INIT_FILE (""))
   ram
     (.clk       (clk),
      .rst_n     (!rst),
      .i_awid    (ram_awid),
      .i_awaddr  (ram_awaddr),
      .i_awlen   (ram_awlen),
      .i_awsize  (ram_awsize),
      .i_awburst (ram_awburst),
      .i_awvalid (ram_awvalid),
      .o_awready (ram_awready),

      .i_arid    (ram_arid),
      .i_araddr  (ram_araddr),
      .i_arlen   (ram_arlen),
      .i_arsize  (ram_arsize),
      .i_arburst (ram_arburst),
      .i_arvalid (ram_arvalid),
      .o_arready (ram_arready),

      .i_wdata  (ram_wdata),
      .i_wstrb  (ram_wstrb),
      .i_wlast  (ram_wlast),
      .i_wvalid (ram_wvalid),
      .o_wready (ram_wready),

      .o_bid    (ram_bid),
      .o_bresp  (ram_bresp),
      .o_bvalid (ram_bvalid),
      .i_bready (ram_bready),

      .o_rid    (ram_rid),
      .o_rdata  (ram_rdata),
      .o_rresp  (ram_rresp),
      .o_rlast  (ram_rlast),
      .o_rvalid (ram_rvalid),
      .i_rready (ram_rready));

   dmi_wrapper dmi_wrapper
     (.trst_n    (i_jtag_trst_n),
      .tck       (i_jtag_tck),
      .tms       (i_jtag_tms),
      .tdi       (i_jtag_tdi),
      .tdo       (o_jtag_tdo),
      .tdoEnable (),
      // Processor Signals
      .scan_mode      (1'b0),
      .core_rst_n     (!rst),
      .core_clk       (clk),
      .jtag_id        (31'd0),
      .rd_data        (dmi_reg_rdata),
      .reg_wr_data    (dmi_reg_wdata),
      .reg_wr_addr    (dmi_reg_addr),
      .reg_en         (dmi_reg_en),
      .reg_wr_en      (dmi_reg_wr_en),
      .dmi_hard_reset (dmi_hard_reset)); 

   BD swervolf
     (.clk_0                 (clk),
      .rst_0                 (!rst),
      .dmi_reg_rdata_0       (dmi_reg_rdata),
      .dmi_reg_wdata_0       (dmi_reg_wdata),
      .dmi_reg_addr_0        (dmi_reg_addr),
      .dmi_reg_en_0          (dmi_reg_en),
      .dmi_reg_wr_en_0       (dmi_reg_wr_en),
      .dmi_hard_reset_0      (dmi_hard_reset),
      .o_ram_awid_0          (ram_awid),
      .o_ram_awaddr_0        (ram_awaddr),
      .o_ram_awlen_0         (ram_awlen),
      .o_ram_awsize_0        (ram_awsize),
      .o_ram_awburst_0       (ram_awburst),
      .o_ram_awlock_0        (ram_awlock),
      .o_ram_awcache_0       (ram_awcache),
      .o_ram_awprot_0        (ram_awprot),
      .o_ram_awregion_0      (ram_awregion),
      .o_ram_awqos_0         (ram_awqos),
      .o_ram_awvalid_0       (ram_awvalid),
      .i_ram_awready_0       (ram_awready),
      .o_ram_arid_0          (ram_arid),
      .o_ram_araddr_0        (ram_araddr),
      .o_ram_arlen_0         (ram_arlen),
      .o_ram_arsize_0        (ram_arsize),
      .o_ram_arburst_0       (ram_arburst),
      .o_ram_arlock_0        (ram_arlock),
      .o_ram_arcache_0       (ram_arcache),
      .o_ram_arprot_0        (ram_arprot),
      .o_ram_arregion_0      (ram_arregion),
      .o_ram_arqos_0         (ram_arqos),
      .o_ram_arvalid_0       (ram_arvalid),
      .i_ram_arready_0       (ram_arready),
      .o_ram_wdata_0         (ram_wdata),
      .o_ram_wstrb_0         (ram_wstrb),
      .o_ram_wlast_0         (ram_wlast),
      .o_ram_wvalid_0        (ram_wvalid),
      .i_ram_wready_0        (ram_wready),
      .i_ram_bid_0           (ram_bid),
      .i_ram_bresp_0         (ram_bresp),
      .i_ram_bvalid_0        (ram_bvalid),
      .o_ram_bready_0        (ram_bready),
      .i_ram_rid_0           (ram_rid),
      .i_ram_rdata_0         (ram_rdata),
      .i_ram_rresp_0         (ram_rresp),
      .i_ram_rlast_0         (ram_rlast),
      .i_ram_rvalid_0        (ram_rvalid),
      .o_ram_rready_0        (ram_rready),
      .i_ram_init_done_0  (),
      .i_ram_init_error_0 (),
      .bidir_0        (gpio_out2[0]),
      .bidir_1        (gpio_out2[1]),
      .bidir_2        (gpio_out2[2]),
      .bidir_3        (gpio_out2[3]),
      .bidir_4        (gpio_out2[4]),
      .bidir_5        (gpio_out2[5]),
      .bidir_6        (gpio_out2[6]),
      .bidir_7        (gpio_out2[7]),
      .bidir_8        (gpio_out2[8]),
      .bidir_9        (gpio_out2[9]),
      .bidir_10        (gpio_out2[10]),
      .bidir_11        (gpio_out2[11]),
      .bidir_12        (gpio_out2[12]),
      .bidir_13        (gpio_out2[13]),
      .bidir_14        (gpio_out2[14]),
      .bidir_15        (gpio_out2[15]),
      .bidir_16        (gpio_out[0]),
      .bidir_17        (gpio_out[1]),
      .bidir_18        (gpio_out[2]),
      .bidir_19        (gpio_out[3]),
      .bidir_20        (gpio_out[4]),
      .bidir_21        (gpio_out[5]),
      .bidir_22        (gpio_out[6]),
      .bidir_23        (gpio_out[7]),
      .bidir_24        (gpio_out[8]),
      .bidir_25        (gpio_out[9]),
      .bidir_26        (gpio_out[10]),
      .bidir_27        (gpio_out[11]),
      .bidir_28        (gpio_out[12]),
      .bidir_29        (gpio_out[13]),
      .bidir_30        (gpio_out[14]),
      .bidir_31        (gpio_out[15]),
      .AN_0 (),
      .Digits_Bits_0 ()
 //     .o_accel_sclk   (accel_sclk),
 //     .o_accel_cs_n   (o_accel_cs_n),
 //     .o_accel_mosi   (o_accel_mosi),
 //     .i_accel_miso   (i_accel_miso)

);

endmodule
