`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/28/2021 06:30:20 PM
// Design Name: 
// Module Name: gpio_wrapper
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////
`default_nettype wire
module gpio_wrapper(
input wb_clk_i,
input wb_rst_i, 
input wb_cyc_i, 
input   [8-1:0]	wb_adr_i,	// address bus inputs
input   [32-1:0]	wb_dat_i,	// input data bus
input	  [3:0]     wb_sel_i,	// byte select inputs
input             wb_we_i,	// indicates write transfer
input             wb_stb_i,	// strobe input
output  [32-1:0]  wb_dat_o,	// output data bus
output wb_ack_o,
output wb_err_o,
output wb_inta_o,
//input aux_i,
//input clk_pad_i,
input outp_0,input outp_1,input outp_2,input outp_3,input outp_4,input outp_5,input outp_6,input outp_7,input outp_8,input outp_9,input outp_10,input outp_11,input outp_12,input outp_13,input outp_14,input outp_15,input outp_16,input outp_17,input outp_18,input outp_19,input outp_20,input outp_21,input outp_22,input outp_23,input outp_24,input outp_25,input outp_26,input outp_27,input outp_28,input outp_29,input outp_30,input outp_31
,
output inp_0,output inp_1,output inp_2,output inp_3,output inp_4,output inp_5,output inp_6,output inp_7,output inp_8,output inp_9,output inp_10,output inp_11,output inp_12,output inp_13,output inp_14,output inp_15,output inp_16,output inp_17,output inp_18,output inp_19,output inp_20,output inp_21,output inp_22,output inp_23,output inp_24,output inp_25,output inp_26,output inp_27,output inp_28,output inp_29,output inp_30,output inp_31
,
output oe_0,output oe_1,output oe_2,output oe_3,output oe_4,output oe_5,output oe_6,output oe_7,output oe_8,output oe_9,output oe_10,output oe_11,output oe_12,output oe_13,output oe_14,output oe_15,output oe_16,output oe_17,output oe_18,output oe_19,output oe_20,output oe_21,output oe_22,output oe_23,output oe_24,output oe_25,output oe_26,output oe_27,output oe_28,output oe_29,output oe_30,output oe_31
    );
    

    gpio_top gpio
    (   .wb_clk_i     (wb_clk_i), 
        .wb_rst_i     (wb_rst_i), 
        .wb_cyc_i     (wb_cyc_i), 
        .wb_adr_i     ({2'b0,wb_adr_i[5:2],2'b0}), 
        .wb_dat_i     (wb_dat_i), 
        .wb_sel_i     (4'b1111),
        .wb_we_i      (wb_we_i), 
        .wb_stb_i     (wb_stb_i), 
        .wb_dat_o     (wb_dat_o),
        .wb_ack_o     (wb_ack_o), 
        .wb_err_o     (wb_err_o),
        .wb_inta_o    (wb_inta_o),
        // External GPIO Interface
        .ext_pad_i     ({outp_31,outp_30,outp_29,outp_28,outp_27,outp_26,outp_25,outp_24,outp_23,outp_22,outp_21,outp_20,outp_19,outp_18,outp_17,outp_16,outp_15,outp_14,outp_13,outp_12,outp_11,outp_10,outp_9,outp_8,outp_7,outp_6,outp_5,outp_4,outp_3,outp_2,outp_1,outp_0}),
        .ext_pad_o     ({inp_31,inp_30,inp_29,inp_28,inp_27,inp_26,inp_25,inp_24,inp_23,inp_22,inp_21,inp_20,inp_19,inp_18,inp_17,inp_16,inp_15,inp_14,inp_13,inp_12,inp_11,inp_10,inp_9,inp_8,inp_7,inp_6,inp_5,inp_4,inp_3,inp_2,inp_1,inp_0}),
        .ext_padoe_o   ({oe_31,oe_30,oe_29,oe_28,oe_27,oe_26,oe_25,oe_24,oe_23,oe_22,oe_21,oe_20,oe_19,oe_18,oe_17,oe_16,oe_15,oe_14,oe_13,oe_12,oe_11,oe_10,oe_9,oe_8,oe_7,oe_6,oe_5,oe_4,oe_3,oe_2,oe_1,oe_0})
        );
    
    
    
endmodule
