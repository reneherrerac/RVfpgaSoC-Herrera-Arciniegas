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
// Function: SweRVolf toplevel for Nexys A7 board
// Comments:
//
//********************************************************************************

`default_nettype none
module rvfpga
   (input wire 	       clk,
    input wire 	       rstn,
    output wire [12:0] ddram_a,
    output wire [2:0]  ddram_ba,
    output wire        ddram_ras_n,
    output wire        ddram_cas_n,
    output wire        ddram_we_n,
    output wire        ddram_cs_n,
    output wire [1:0]  ddram_dm,
    inout wire [15:0]  ddram_dq,
    inout wire [1:0]  ddram_dqs_p,
    inout wire [1:0]  ddram_dqs_n,
    output wire        ddram_clk_p,
    output wire        ddram_clk_n,
    output wire        ddram_cke,
    output wire        ddram_odt,
    output wire        o_flash_cs_n,
    output wire        o_flash_mosi,
    input wire 	       i_flash_miso,
    input wire 	       i_uart_rx,
    output wire        o_uart_tx,
    inout wire [15:0]  i_sw,
    output reg [15:0]  o_led,
    output reg [7:0]   AN,
    output reg         CA, CB, CC, CD, CE, CF, CG,
    output wire        o_accel_cs_n,
    output wire        o_accel_mosi,
    input wire         i_accel_miso,
    output wire        accel_sclk);

   wire [15:0] 	       gpio_out;
   wire [15:0]         gpio_out2;
   wire 	       cpu_tx,litedram_tx;

   wire 	       litedram_init_done;
   wire 	       litedram_init_error;

   localparam RAM_SIZE     = 32'h10000;

   wire 	 clk_core;
   wire 	 rst_core;
   wire 	 user_clk;
   wire 	 user_rst;

   clk_gen_nexys clk_gen
     (.i_clk (user_clk),
      .i_rst (user_rst),
      .o_clk_core (clk_core),
      .o_rst_core (rst_core));

   AXI_BUS #(32, 64, 6, 1) mem();
   AXI_BUS #(32, 64, 6, 1) cpu();

   assign cpu.aw_atop = 6'd0;
   assign cpu.aw_user = 1'b0;
   assign cpu.ar_user = 1'b0;
   assign cpu.w_user = 1'b0;
   assign cpu.b_user = 1'b0;
   assign cpu.r_user = 1'b0;
   assign mem.b_user = 1'b0;
   assign mem.r_user = 1'b0;

   axi_cdc_intf
     #(.AXI_USER_WIDTH (1),
       .AXI_ADDR_WIDTH (32),
       .AXI_DATA_WIDTH (64),
       .AXI_ID_WIDTH   (6))
   cdc
     (
      .src_clk_i  (clk_core),
      .src_rst_ni (~rst_core),
      .src        (cpu),
      .dst_clk_i  (user_clk),
      .dst_rst_ni (~user_rst),
      .dst        (mem));

   litedram_top
     #(.ID_WIDTH (6))
   ddr2
     (.serial_tx   (litedram_tx),
      .serial_rx   (i_uart_rx),
      .clk100      (clk),
      .rst_n       (rstn),
      .pll_locked  (),
      .user_clk    (user_clk),
      .user_rst    (user_rst),
      .ddram_a     (ddram_a),
      .ddram_ba    (ddram_ba),
      .ddram_ras_n (ddram_ras_n),
      .ddram_cas_n (ddram_cas_n),
      .ddram_we_n  (ddram_we_n),
      .ddram_cs_n  (ddram_cs_n),
      .ddram_dm    (ddram_dm   ),
      .ddram_dq    (ddram_dq   ),
      .ddram_dqs_p (ddram_dqs_p),
      .ddram_dqs_n (ddram_dqs_n),
      .ddram_clk_p (ddram_clk_p),
      .ddram_clk_n (ddram_clk_n),
      .ddram_cke   (ddram_cke  ),
      .ddram_odt   (ddram_odt  ),
      .init_done  (litedram_init_done),
      .init_error (litedram_init_error),
      .i_awid    (mem.aw_id   ),
      .i_awaddr  (mem.aw_addr[26:0] ),
      .i_awlen   (mem.aw_len  ),
      .i_awsize  ({1'b0,mem.aw_size} ),
      .i_awburst (mem.aw_burst),
      .i_awvalid (mem.aw_valid),
      .o_awready (mem.aw_ready),
      .i_arid    (mem.ar_id   ),
      .i_araddr  (mem.ar_addr[26:0] ),
      .i_arlen   (mem.ar_len  ),
      .i_arsize  ({1'b0,mem.ar_size} ),
      .i_arburst (mem.ar_burst),
      .i_arvalid (mem.ar_valid),
      .o_arready (mem.ar_ready),
      .i_wdata   (mem.w_data  ),
      .i_wstrb   (mem.w_strb  ),
      .i_wlast   (mem.w_last  ),
      .i_wvalid  (mem.w_valid ),
      .o_wready  (mem.w_ready ),
      .o_bid     (mem.b_id    ),
      .o_bresp   (mem.b_resp  ),
      .o_bvalid  (mem.b_valid ),
      .i_bready  (mem.b_ready ),
      .o_rid     (mem.r_id    ),
      .o_rdata   (mem.r_data  ),
      .o_rresp   (mem.r_resp  ),
      .o_rlast   (mem.r_last  ),
      .o_rvalid  (mem.r_valid ),
      .i_rready  (mem.r_ready ));

   wire        dmi_reg_en;
   wire [6:0]  dmi_reg_addr;
   wire        dmi_reg_wr_en;
   wire [31:0] dmi_reg_wdata;
   wire [31:0] dmi_reg_rdata;
   wire        dmi_hard_reset;
   wire        flash_sclk;

   STARTUPE2 STARTUPE2
     (
      .CFGCLK    (),
      .CFGMCLK   (),
      .EOS       (),
      .PREQ      (),
      .CLK       (1'b0),
      .GSR       (1'b0),
      .GTS       (1'b0),
      .KEYCLEARB (1'b1),
      .PACK      (1'b0),
      .USRCCLKO  (flash_sclk),
      .USRCCLKTS (1'b0),
      .USRDONEO  (1'b1),
      .USRDONETS (1'b0));

   bscan_tap tap
     (.clk            (clk_core),
      .rst            (rst_core),
      .jtag_id        (31'd0),
      .dmi_reg_wdata  (dmi_reg_wdata),
      .dmi_reg_addr   (dmi_reg_addr),
      .dmi_reg_wr_en  (dmi_reg_wr_en),
      .dmi_reg_en     (dmi_reg_en),
      .dmi_reg_rdata  (dmi_reg_rdata),
      .dmi_hard_reset (dmi_hard_reset),
      .rd_status      (2'd0),
      .idle           (3'd0),
      .dmi_stat       (2'd0),
      .version        (4'd1));


   BD_wrapper swervolf
     (.clk_0  (clk_core),
      .rst_0 (~rst_core),
      .dmi_reg_rdata_0  (dmi_reg_rdata),
      .dmi_reg_wdata_0  (dmi_reg_wdata),
      .dmi_reg_addr_0   (dmi_reg_addr ),
      .dmi_reg_en_0     (dmi_reg_en   ),
      .dmi_reg_wr_en_0  (dmi_reg_wr_en),
      .dmi_hard_reset_0 (dmi_hard_reset),
//      .o_flash_sclk   (flash_sclk),
//      .o_flash_cs_n   (o_flash_cs_n),
//      .o_flash_mosi   (o_flash_mosi),
//      .i_flash_miso   (i_flash_miso),
//      .i_uart_rx      (i_uart_rx),
//      .o_uart_tx      (cpu_tx),
      .o_ram_awid_0     (cpu.aw_id),
      .o_ram_awaddr_0   (cpu.aw_addr),
      .o_ram_awlen_0    (cpu.aw_len),
      .o_ram_awsize_0   (cpu.aw_size),
      .o_ram_awburst_0  (cpu.aw_burst),
      .o_ram_awlock_0   (cpu.aw_lock),
      .o_ram_awcache_0  (cpu.aw_cache),
      .o_ram_awprot_0   (cpu.aw_prot),
      .o_ram_awregion_0 (cpu.aw_region),
      .o_ram_awqos_0    (cpu.aw_qos),
      .o_ram_awvalid_0  (cpu.aw_valid),
      .i_ram_awready_0  (cpu.aw_ready),
      .o_ram_arid_0     (cpu.ar_id),
      .o_ram_araddr_0   (cpu.ar_addr),
      .o_ram_arlen_0    (cpu.ar_len),
      .o_ram_arsize_0   (cpu.ar_size),
      .o_ram_arburst_0  (cpu.ar_burst),
      .o_ram_arlock_0   (cpu.ar_lock),
      .o_ram_arcache_0  (cpu.ar_cache),
      .o_ram_arprot_0   (cpu.ar_prot),
      .o_ram_arregion_0 (cpu.ar_region),
      .o_ram_arqos_0    (cpu.ar_qos),
      .o_ram_arvalid_0  (cpu.ar_valid),
      .i_ram_arready_0  (cpu.ar_ready),
      .o_ram_wdata_0    (cpu.w_data),
      .o_ram_wstrb_0    (cpu.w_strb),
      .o_ram_wlast_0    (cpu.w_last),
      .o_ram_wvalid_0   (cpu.w_valid),
      .i_ram_wready_0   (cpu.w_ready),
      .i_ram_bid_0      (cpu.b_id),
      .i_ram_bresp_0    (cpu.b_resp),
      .i_ram_bvalid_0   (cpu.b_valid),
      .o_ram_bready_0   (cpu.b_ready),
      .i_ram_rid_0      (cpu.r_id),
      .i_ram_rdata_0    (cpu.r_data),
      .i_ram_rresp_0    (cpu.r_resp),
      .i_ram_rlast_0    (cpu.r_last),
      .i_ram_rvalid_0   (cpu.r_valid),
      .o_ram_rready_0   (cpu.r_ready),
      .i_ram_init_done_0  (litedram_init_done),
      .i_ram_init_error_0 (litedram_init_error),
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
      .AN_0            (AN),
      .Digits_Bits_0   ({CA,CB,CC,CD,CE,CF,CG})
//      .o_accel_sclk   (accel_sclk),
//      .o_accel_cs_n   (o_accel_cs_n),
//      .o_accel_mosi   (o_accel_mosi),
//      .i_accel_miso   (i_accel_miso)
);

   always @(posedge clk_core) begin
      o_led[15:0] <= gpio_out2[15:0];
   end

   assign o_uart_tx = 1'b0 ? litedram_tx : cpu_tx;

endmodule
