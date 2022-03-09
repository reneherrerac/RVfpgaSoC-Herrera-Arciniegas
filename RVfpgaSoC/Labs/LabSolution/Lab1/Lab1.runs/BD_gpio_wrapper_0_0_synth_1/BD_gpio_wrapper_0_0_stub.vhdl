-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
-- Date        : Mon May 31 23:38:30 2021
-- Host        : LenovoHamza running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ BD_gpio_wrapper_0_0_stub.vhdl
-- Design      : BD_gpio_wrapper_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a100tcsg324-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  Port ( 
    wb_clk_i : in STD_LOGIC;
    wb_rst_i : in STD_LOGIC;
    wb_cyc_i : in STD_LOGIC;
    wb_adr_i : in STD_LOGIC_VECTOR ( 7 downto 0 );
    wb_dat_i : in STD_LOGIC_VECTOR ( 31 downto 0 );
    wb_sel_i : in STD_LOGIC_VECTOR ( 3 downto 0 );
    wb_we_i : in STD_LOGIC;
    wb_stb_i : in STD_LOGIC;
    wb_dat_o : out STD_LOGIC_VECTOR ( 31 downto 0 );
    wb_ack_o : out STD_LOGIC;
    wb_err_o : out STD_LOGIC;
    wb_inta_o : out STD_LOGIC;
    outp_0 : in STD_LOGIC;
    outp_1 : in STD_LOGIC;
    outp_2 : in STD_LOGIC;
    outp_3 : in STD_LOGIC;
    outp_4 : in STD_LOGIC;
    outp_5 : in STD_LOGIC;
    outp_6 : in STD_LOGIC;
    outp_7 : in STD_LOGIC;
    outp_8 : in STD_LOGIC;
    outp_9 : in STD_LOGIC;
    outp_10 : in STD_LOGIC;
    outp_11 : in STD_LOGIC;
    outp_12 : in STD_LOGIC;
    outp_13 : in STD_LOGIC;
    outp_14 : in STD_LOGIC;
    outp_15 : in STD_LOGIC;
    outp_16 : in STD_LOGIC;
    outp_17 : in STD_LOGIC;
    outp_18 : in STD_LOGIC;
    outp_19 : in STD_LOGIC;
    outp_20 : in STD_LOGIC;
    outp_21 : in STD_LOGIC;
    outp_22 : in STD_LOGIC;
    outp_23 : in STD_LOGIC;
    outp_24 : in STD_LOGIC;
    outp_25 : in STD_LOGIC;
    outp_26 : in STD_LOGIC;
    outp_27 : in STD_LOGIC;
    outp_28 : in STD_LOGIC;
    outp_29 : in STD_LOGIC;
    outp_30 : in STD_LOGIC;
    outp_31 : in STD_LOGIC;
    inp_0 : out STD_LOGIC;
    inp_1 : out STD_LOGIC;
    inp_2 : out STD_LOGIC;
    inp_3 : out STD_LOGIC;
    inp_4 : out STD_LOGIC;
    inp_5 : out STD_LOGIC;
    inp_6 : out STD_LOGIC;
    inp_7 : out STD_LOGIC;
    inp_8 : out STD_LOGIC;
    inp_9 : out STD_LOGIC;
    inp_10 : out STD_LOGIC;
    inp_11 : out STD_LOGIC;
    inp_12 : out STD_LOGIC;
    inp_13 : out STD_LOGIC;
    inp_14 : out STD_LOGIC;
    inp_15 : out STD_LOGIC;
    inp_16 : out STD_LOGIC;
    inp_17 : out STD_LOGIC;
    inp_18 : out STD_LOGIC;
    inp_19 : out STD_LOGIC;
    inp_20 : out STD_LOGIC;
    inp_21 : out STD_LOGIC;
    inp_22 : out STD_LOGIC;
    inp_23 : out STD_LOGIC;
    inp_24 : out STD_LOGIC;
    inp_25 : out STD_LOGIC;
    inp_26 : out STD_LOGIC;
    inp_27 : out STD_LOGIC;
    inp_28 : out STD_LOGIC;
    inp_29 : out STD_LOGIC;
    inp_30 : out STD_LOGIC;
    inp_31 : out STD_LOGIC;
    oe_0 : out STD_LOGIC;
    oe_1 : out STD_LOGIC;
    oe_2 : out STD_LOGIC;
    oe_3 : out STD_LOGIC;
    oe_4 : out STD_LOGIC;
    oe_5 : out STD_LOGIC;
    oe_6 : out STD_LOGIC;
    oe_7 : out STD_LOGIC;
    oe_8 : out STD_LOGIC;
    oe_9 : out STD_LOGIC;
    oe_10 : out STD_LOGIC;
    oe_11 : out STD_LOGIC;
    oe_12 : out STD_LOGIC;
    oe_13 : out STD_LOGIC;
    oe_14 : out STD_LOGIC;
    oe_15 : out STD_LOGIC;
    oe_16 : out STD_LOGIC;
    oe_17 : out STD_LOGIC;
    oe_18 : out STD_LOGIC;
    oe_19 : out STD_LOGIC;
    oe_20 : out STD_LOGIC;
    oe_21 : out STD_LOGIC;
    oe_22 : out STD_LOGIC;
    oe_23 : out STD_LOGIC;
    oe_24 : out STD_LOGIC;
    oe_25 : out STD_LOGIC;
    oe_26 : out STD_LOGIC;
    oe_27 : out STD_LOGIC;
    oe_28 : out STD_LOGIC;
    oe_29 : out STD_LOGIC;
    oe_30 : out STD_LOGIC;
    oe_31 : out STD_LOGIC
  );

end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture stub of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "wb_clk_i,wb_rst_i,wb_cyc_i,wb_adr_i[7:0],wb_dat_i[31:0],wb_sel_i[3:0],wb_we_i,wb_stb_i,wb_dat_o[31:0],wb_ack_o,wb_err_o,wb_inta_o,outp_0,outp_1,outp_2,outp_3,outp_4,outp_5,outp_6,outp_7,outp_8,outp_9,outp_10,outp_11,outp_12,outp_13,outp_14,outp_15,outp_16,outp_17,outp_18,outp_19,outp_20,outp_21,outp_22,outp_23,outp_24,outp_25,outp_26,outp_27,outp_28,outp_29,outp_30,outp_31,inp_0,inp_1,inp_2,inp_3,inp_4,inp_5,inp_6,inp_7,inp_8,inp_9,inp_10,inp_11,inp_12,inp_13,inp_14,inp_15,inp_16,inp_17,inp_18,inp_19,inp_20,inp_21,inp_22,inp_23,inp_24,inp_25,inp_26,inp_27,inp_28,inp_29,inp_30,inp_31,oe_0,oe_1,oe_2,oe_3,oe_4,oe_5,oe_6,oe_7,oe_8,oe_9,oe_10,oe_11,oe_12,oe_13,oe_14,oe_15,oe_16,oe_17,oe_18,oe_19,oe_20,oe_21,oe_22,oe_23,oe_24,oe_25,oe_26,oe_27,oe_28,oe_29,oe_30,oe_31";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "gpio_wrapper,Vivado 2019.2";
begin
end;
