-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
-- Date        : Mon May 31 23:38:31 2021
-- Host        : LenovoHamza running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ BD_gpio_wrapper_0_0_sim_netlist.vhdl
-- Design      : BD_gpio_wrapper_0_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7a100tcsg324-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_gpio_top is
  port (
    wb_ack_o : out STD_LOGIC;
    Q : out STD_LOGIC_VECTOR ( 31 downto 0 );
    wb_inta_o : out STD_LOGIC;
    wb_dat_o : out STD_LOGIC_VECTOR ( 31 downto 0 );
    \ext_pad_o_reg[31]_0\ : out STD_LOGIC_VECTOR ( 31 downto 0 );
    wb_stb_i : in STD_LOGIC;
    wb_cyc_i : in STD_LOGIC;
    wb_adr_i : in STD_LOGIC_VECTOR ( 3 downto 0 );
    wb_dat_i : in STD_LOGIC_VECTOR ( 31 downto 0 );
    wb_clk_i : in STD_LOGIC;
    D : in STD_LOGIC_VECTOR ( 31 downto 0 );
    wb_we_i : in STD_LOGIC;
    wb_rst_i : in STD_LOGIC
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_gpio_top;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_gpio_top is
  signal \^q\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal ext_pad_s : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal in_muxed : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal out_pad : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal p_0_in : STD_LOGIC;
  signal p_1_in : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal p_1_in_0 : STD_LOGIC_VECTOR ( 1 to 1 );
  signal rgpio_aux : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \rgpio_aux[31]_i_1_n_0\ : STD_LOGIC;
  signal \rgpio_ctrl[0]_i_1_n_0\ : STD_LOGIC;
  signal \rgpio_ctrl[1]_i_1_n_0\ : STD_LOGIC;
  signal \rgpio_ctrl[1]_i_2_n_0\ : STD_LOGIC;
  signal rgpio_eclk : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \rgpio_eclk[31]_i_1_n_0\ : STD_LOGIC;
  signal rgpio_in : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal rgpio_inte : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \rgpio_inte[31]_i_1_n_0\ : STD_LOGIC;
  signal rgpio_ints : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \rgpio_ints0__159\ : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \rgpio_ints[31]_i_1_n_0\ : STD_LOGIC;
  signal \rgpio_ints[31]_i_3_n_0\ : STD_LOGIC;
  signal rgpio_nec : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \rgpio_nec[31]_i_1_n_0\ : STD_LOGIC;
  signal \rgpio_oe[0]_i_1_n_0\ : STD_LOGIC;
  signal \rgpio_oe[0]_i_2_n_0\ : STD_LOGIC;
  signal rgpio_out : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \rgpio_out[31]_i_1_n_0\ : STD_LOGIC;
  signal rgpio_ptrig : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \rgpio_ptrig[31]_i_1_n_0\ : STD_LOGIC;
  signal sync : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \^wb_ack_o\ : STD_LOGIC;
  signal wb_ack_o_i_1_n_0 : STD_LOGIC;
  signal wb_dat : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal \wb_dat_o[0]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[0]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[0]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[10]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[10]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[10]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[11]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[11]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[11]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[12]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[12]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[12]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[13]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[13]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[13]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[14]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[14]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[14]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[15]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[15]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[15]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[16]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[16]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[16]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[17]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[17]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[17]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[18]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[18]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[18]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[19]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[19]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[19]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[1]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[1]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[1]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[20]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[20]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[20]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[21]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[21]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[21]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[22]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[22]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[22]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[23]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[23]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[23]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[24]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[24]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[24]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[25]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[25]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[25]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[26]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[26]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[26]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[27]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[27]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[27]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[28]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[28]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[28]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[29]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[29]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[29]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[2]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[2]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[2]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[30]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[30]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[30]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[31]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[31]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[31]_i_5_n_0\ : STD_LOGIC;
  signal \wb_dat_o[3]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[3]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[3]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[4]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[4]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[4]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[5]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[5]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[5]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[6]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[6]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[6]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[7]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[7]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[7]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[8]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[8]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[8]_i_4_n_0\ : STD_LOGIC;
  signal \wb_dat_o[9]_i_2_n_0\ : STD_LOGIC;
  signal \wb_dat_o[9]_i_3_n_0\ : STD_LOGIC;
  signal \wb_dat_o[9]_i_4_n_0\ : STD_LOGIC;
  signal wb_inta : STD_LOGIC;
  signal \^wb_inta_o\ : STD_LOGIC;
  signal wb_inta_o_i_2_n_0 : STD_LOGIC;
  signal wb_inta_o_i_3_n_0 : STD_LOGIC;
  signal wb_inta_o_i_4_n_0 : STD_LOGIC;
  signal wb_inta_o_i_5_n_0 : STD_LOGIC;
  signal wb_inta_o_i_6_n_0 : STD_LOGIC;
  signal wb_inta_o_i_7_n_0 : STD_LOGIC;
  signal wb_inta_o_i_8_n_0 : STD_LOGIC;
  signal wb_inta_o_i_9_n_0 : STD_LOGIC;
  signal wb_rst_n : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \rgpio_ints[0]_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \rgpio_ints[10]_i_1\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \rgpio_ints[11]_i_1\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \rgpio_ints[12]_i_1\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \rgpio_ints[13]_i_1\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \rgpio_ints[14]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \rgpio_ints[15]_i_1\ : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of \rgpio_ints[16]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \rgpio_ints[17]_i_1\ : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of \rgpio_ints[18]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \rgpio_ints[19]_i_1\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \rgpio_ints[1]_i_1\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \rgpio_ints[20]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \rgpio_ints[21]_i_1\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \rgpio_ints[22]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \rgpio_ints[23]_i_1\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \rgpio_ints[24]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \rgpio_ints[25]_i_1\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \rgpio_ints[26]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \rgpio_ints[27]_i_1\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \rgpio_ints[28]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \rgpio_ints[29]_i_1\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \rgpio_ints[2]_i_1\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \rgpio_ints[30]_i_1\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \rgpio_ints[31]_i_2\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \rgpio_ints[3]_i_1\ : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of \rgpio_ints[4]_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \rgpio_ints[5]_i_1\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \rgpio_ints[6]_i_1\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \rgpio_ints[7]_i_1\ : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of \rgpio_ints[8]_i_1\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \rgpio_ints[9]_i_1\ : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \rgpio_oe[0]_i_2\ : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of wb_ack_o_i_1 : label is "soft_lutpair0";
begin
  Q(31 downto 0) <= \^q\(31 downto 0);
  wb_ack_o <= \^wb_ack_o\;
  wb_inta_o <= \^wb_inta_o\;
\ext_pad_o[0]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(0),
      I1 => rgpio_aux(0),
      O => out_pad(0)
    );
\ext_pad_o[10]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(10),
      I1 => rgpio_aux(10),
      O => out_pad(10)
    );
\ext_pad_o[11]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(11),
      I1 => rgpio_aux(11),
      O => out_pad(11)
    );
\ext_pad_o[12]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(12),
      I1 => rgpio_aux(12),
      O => out_pad(12)
    );
\ext_pad_o[13]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(13),
      I1 => rgpio_aux(13),
      O => out_pad(13)
    );
\ext_pad_o[14]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(14),
      I1 => rgpio_aux(14),
      O => out_pad(14)
    );
\ext_pad_o[15]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(15),
      I1 => rgpio_aux(15),
      O => out_pad(15)
    );
\ext_pad_o[16]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(16),
      I1 => rgpio_aux(16),
      O => out_pad(16)
    );
\ext_pad_o[17]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(17),
      I1 => rgpio_aux(17),
      O => out_pad(17)
    );
\ext_pad_o[18]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(18),
      I1 => rgpio_aux(18),
      O => out_pad(18)
    );
\ext_pad_o[19]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(19),
      I1 => rgpio_aux(19),
      O => out_pad(19)
    );
\ext_pad_o[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(1),
      I1 => rgpio_aux(1),
      O => out_pad(1)
    );
\ext_pad_o[20]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(20),
      I1 => rgpio_aux(20),
      O => out_pad(20)
    );
\ext_pad_o[21]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(21),
      I1 => rgpio_aux(21),
      O => out_pad(21)
    );
\ext_pad_o[22]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(22),
      I1 => rgpio_aux(22),
      O => out_pad(22)
    );
\ext_pad_o[23]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(23),
      I1 => rgpio_aux(23),
      O => out_pad(23)
    );
\ext_pad_o[24]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(24),
      I1 => rgpio_aux(24),
      O => out_pad(24)
    );
\ext_pad_o[25]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(25),
      I1 => rgpio_aux(25),
      O => out_pad(25)
    );
\ext_pad_o[26]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(26),
      I1 => rgpio_aux(26),
      O => out_pad(26)
    );
\ext_pad_o[27]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(27),
      I1 => rgpio_aux(27),
      O => out_pad(27)
    );
\ext_pad_o[28]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(28),
      I1 => rgpio_aux(28),
      O => out_pad(28)
    );
\ext_pad_o[29]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(29),
      I1 => rgpio_aux(29),
      O => out_pad(29)
    );
\ext_pad_o[2]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(2),
      I1 => rgpio_aux(2),
      O => out_pad(2)
    );
\ext_pad_o[30]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(30),
      I1 => rgpio_aux(30),
      O => out_pad(30)
    );
\ext_pad_o[31]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(31),
      I1 => rgpio_aux(31),
      O => out_pad(31)
    );
\ext_pad_o[3]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(3),
      I1 => rgpio_aux(3),
      O => out_pad(3)
    );
\ext_pad_o[4]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(4),
      I1 => rgpio_aux(4),
      O => out_pad(4)
    );
\ext_pad_o[5]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(5),
      I1 => rgpio_aux(5),
      O => out_pad(5)
    );
\ext_pad_o[6]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(6),
      I1 => rgpio_aux(6),
      O => out_pad(6)
    );
\ext_pad_o[7]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(7),
      I1 => rgpio_aux(7),
      O => out_pad(7)
    );
\ext_pad_o[8]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(8),
      I1 => rgpio_aux(8),
      O => out_pad(8)
    );
\ext_pad_o[9]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => rgpio_out(9),
      I1 => rgpio_aux(9),
      O => out_pad(9)
    );
\ext_pad_o_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(0),
      Q => \ext_pad_o_reg[31]_0\(0)
    );
\ext_pad_o_reg[10]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(10),
      Q => \ext_pad_o_reg[31]_0\(10)
    );
\ext_pad_o_reg[11]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(11),
      Q => \ext_pad_o_reg[31]_0\(11)
    );
\ext_pad_o_reg[12]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(12),
      Q => \ext_pad_o_reg[31]_0\(12)
    );
\ext_pad_o_reg[13]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(13),
      Q => \ext_pad_o_reg[31]_0\(13)
    );
\ext_pad_o_reg[14]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(14),
      Q => \ext_pad_o_reg[31]_0\(14)
    );
\ext_pad_o_reg[15]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(15),
      Q => \ext_pad_o_reg[31]_0\(15)
    );
\ext_pad_o_reg[16]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(16),
      Q => \ext_pad_o_reg[31]_0\(16)
    );
\ext_pad_o_reg[17]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(17),
      Q => \ext_pad_o_reg[31]_0\(17)
    );
\ext_pad_o_reg[18]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(18),
      Q => \ext_pad_o_reg[31]_0\(18)
    );
\ext_pad_o_reg[19]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(19),
      Q => \ext_pad_o_reg[31]_0\(19)
    );
\ext_pad_o_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(1),
      Q => \ext_pad_o_reg[31]_0\(1)
    );
\ext_pad_o_reg[20]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(20),
      Q => \ext_pad_o_reg[31]_0\(20)
    );
\ext_pad_o_reg[21]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(21),
      Q => \ext_pad_o_reg[31]_0\(21)
    );
\ext_pad_o_reg[22]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(22),
      Q => \ext_pad_o_reg[31]_0\(22)
    );
\ext_pad_o_reg[23]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(23),
      Q => \ext_pad_o_reg[31]_0\(23)
    );
\ext_pad_o_reg[24]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(24),
      Q => \ext_pad_o_reg[31]_0\(24)
    );
\ext_pad_o_reg[25]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(25),
      Q => \ext_pad_o_reg[31]_0\(25)
    );
\ext_pad_o_reg[26]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(26),
      Q => \ext_pad_o_reg[31]_0\(26)
    );
\ext_pad_o_reg[27]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(27),
      Q => \ext_pad_o_reg[31]_0\(27)
    );
\ext_pad_o_reg[28]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(28),
      Q => \ext_pad_o_reg[31]_0\(28)
    );
\ext_pad_o_reg[29]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(29),
      Q => \ext_pad_o_reg[31]_0\(29)
    );
\ext_pad_o_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(2),
      Q => \ext_pad_o_reg[31]_0\(2)
    );
\ext_pad_o_reg[30]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(30),
      Q => \ext_pad_o_reg[31]_0\(30)
    );
\ext_pad_o_reg[31]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(31),
      Q => \ext_pad_o_reg[31]_0\(31)
    );
\ext_pad_o_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(3),
      Q => \ext_pad_o_reg[31]_0\(3)
    );
\ext_pad_o_reg[4]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(4),
      Q => \ext_pad_o_reg[31]_0\(4)
    );
\ext_pad_o_reg[5]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(5),
      Q => \ext_pad_o_reg[31]_0\(5)
    );
\ext_pad_o_reg[6]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(6),
      Q => \ext_pad_o_reg[31]_0\(6)
    );
\ext_pad_o_reg[7]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(7),
      Q => \ext_pad_o_reg[31]_0\(7)
    );
\ext_pad_o_reg[8]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(8),
      Q => \ext_pad_o_reg[31]_0\(8)
    );
\ext_pad_o_reg[9]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => out_pad(9),
      Q => \ext_pad_o_reg[31]_0\(9)
    );
\ext_pad_s_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(0),
      Q => ext_pad_s(0)
    );
\ext_pad_s_reg[10]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(10),
      Q => ext_pad_s(10)
    );
\ext_pad_s_reg[11]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(11),
      Q => ext_pad_s(11)
    );
\ext_pad_s_reg[12]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(12),
      Q => ext_pad_s(12)
    );
\ext_pad_s_reg[13]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(13),
      Q => ext_pad_s(13)
    );
\ext_pad_s_reg[14]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(14),
      Q => ext_pad_s(14)
    );
\ext_pad_s_reg[15]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(15),
      Q => ext_pad_s(15)
    );
\ext_pad_s_reg[16]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(16),
      Q => ext_pad_s(16)
    );
\ext_pad_s_reg[17]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(17),
      Q => ext_pad_s(17)
    );
\ext_pad_s_reg[18]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(18),
      Q => ext_pad_s(18)
    );
\ext_pad_s_reg[19]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(19),
      Q => ext_pad_s(19)
    );
\ext_pad_s_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(1),
      Q => ext_pad_s(1)
    );
\ext_pad_s_reg[20]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(20),
      Q => ext_pad_s(20)
    );
\ext_pad_s_reg[21]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(21),
      Q => ext_pad_s(21)
    );
\ext_pad_s_reg[22]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(22),
      Q => ext_pad_s(22)
    );
\ext_pad_s_reg[23]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(23),
      Q => ext_pad_s(23)
    );
\ext_pad_s_reg[24]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(24),
      Q => ext_pad_s(24)
    );
\ext_pad_s_reg[25]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(25),
      Q => ext_pad_s(25)
    );
\ext_pad_s_reg[26]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(26),
      Q => ext_pad_s(26)
    );
\ext_pad_s_reg[27]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(27),
      Q => ext_pad_s(27)
    );
\ext_pad_s_reg[28]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(28),
      Q => ext_pad_s(28)
    );
\ext_pad_s_reg[29]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(29),
      Q => ext_pad_s(29)
    );
\ext_pad_s_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(2),
      Q => ext_pad_s(2)
    );
\ext_pad_s_reg[30]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(30),
      Q => ext_pad_s(30)
    );
\ext_pad_s_reg[31]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(31),
      Q => ext_pad_s(31)
    );
\ext_pad_s_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(3),
      Q => ext_pad_s(3)
    );
\ext_pad_s_reg[4]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(4),
      Q => ext_pad_s(4)
    );
\ext_pad_s_reg[5]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(5),
      Q => ext_pad_s(5)
    );
\ext_pad_s_reg[6]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(6),
      Q => ext_pad_s(6)
    );
\ext_pad_s_reg[7]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(7),
      Q => ext_pad_s(7)
    );
\ext_pad_s_reg[8]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(8),
      Q => ext_pad_s(8)
    );
\ext_pad_s_reg[9]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => sync(9),
      Q => ext_pad_s(9)
    );
\rgpio_aux[31]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000008"
    )
        port map (
      I0 => wb_adr_i(2),
      I1 => wb_adr_i(0),
      I2 => wb_adr_i(1),
      I3 => wb_adr_i(3),
      I4 => \rgpio_oe[0]_i_2_n_0\,
      O => \rgpio_aux[31]_i_1_n_0\
    );
\rgpio_aux_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(0),
      Q => rgpio_aux(0)
    );
\rgpio_aux_reg[10]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(10),
      Q => rgpio_aux(10)
    );
\rgpio_aux_reg[11]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(11),
      Q => rgpio_aux(11)
    );
\rgpio_aux_reg[12]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(12),
      Q => rgpio_aux(12)
    );
\rgpio_aux_reg[13]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(13),
      Q => rgpio_aux(13)
    );
\rgpio_aux_reg[14]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(14),
      Q => rgpio_aux(14)
    );
\rgpio_aux_reg[15]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(15),
      Q => rgpio_aux(15)
    );
\rgpio_aux_reg[16]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(16),
      Q => rgpio_aux(16)
    );
\rgpio_aux_reg[17]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(17),
      Q => rgpio_aux(17)
    );
\rgpio_aux_reg[18]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(18),
      Q => rgpio_aux(18)
    );
\rgpio_aux_reg[19]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(19),
      Q => rgpio_aux(19)
    );
\rgpio_aux_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(1),
      Q => rgpio_aux(1)
    );
\rgpio_aux_reg[20]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(20),
      Q => rgpio_aux(20)
    );
\rgpio_aux_reg[21]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(21),
      Q => rgpio_aux(21)
    );
\rgpio_aux_reg[22]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(22),
      Q => rgpio_aux(22)
    );
\rgpio_aux_reg[23]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(23),
      Q => rgpio_aux(23)
    );
\rgpio_aux_reg[24]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(24),
      Q => rgpio_aux(24)
    );
\rgpio_aux_reg[25]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(25),
      Q => rgpio_aux(25)
    );
\rgpio_aux_reg[26]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(26),
      Q => rgpio_aux(26)
    );
\rgpio_aux_reg[27]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(27),
      Q => rgpio_aux(27)
    );
\rgpio_aux_reg[28]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(28),
      Q => rgpio_aux(28)
    );
\rgpio_aux_reg[29]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(29),
      Q => rgpio_aux(29)
    );
\rgpio_aux_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(2),
      Q => rgpio_aux(2)
    );
\rgpio_aux_reg[30]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(30),
      Q => rgpio_aux(30)
    );
\rgpio_aux_reg[31]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(31),
      Q => rgpio_aux(31)
    );
\rgpio_aux_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(3),
      Q => rgpio_aux(3)
    );
\rgpio_aux_reg[4]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(4),
      Q => rgpio_aux(4)
    );
\rgpio_aux_reg[5]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(5),
      Q => rgpio_aux(5)
    );
\rgpio_aux_reg[6]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(6),
      Q => rgpio_aux(6)
    );
\rgpio_aux_reg[7]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(7),
      Q => rgpio_aux(7)
    );
\rgpio_aux_reg[8]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(8),
      Q => rgpio_aux(8)
    );
\rgpio_aux_reg[9]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_aux[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(9),
      Q => rgpio_aux(9)
    );
\rgpio_ctrl[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"B8"
    )
        port map (
      I0 => wb_dat_i(0),
      I1 => \rgpio_ctrl[1]_i_2_n_0\,
      I2 => p_1_in_0(1),
      O => \rgpio_ctrl[0]_i_1_n_0\
    );
\rgpio_ctrl[1]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AFAFACA0"
    )
        port map (
      I0 => wb_dat_i(1),
      I1 => \^wb_inta_o\,
      I2 => \rgpio_ctrl[1]_i_2_n_0\,
      I3 => p_1_in_0(1),
      I4 => p_0_in,
      O => \rgpio_ctrl[1]_i_1_n_0\
    );
\rgpio_ctrl[1]_i_2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000008"
    )
        port map (
      I0 => wb_adr_i(2),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(0),
      I3 => wb_adr_i(3),
      I4 => \rgpio_oe[0]_i_2_n_0\,
      O => \rgpio_ctrl[1]_i_2_n_0\
    );
\rgpio_ctrl_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => \rgpio_ctrl[0]_i_1_n_0\,
      Q => p_1_in_0(1)
    );
\rgpio_ctrl_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => \rgpio_ctrl[1]_i_1_n_0\,
      Q => p_0_in
    );
\rgpio_eclk[31]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000004"
    )
        port map (
      I0 => wb_adr_i(1),
      I1 => wb_adr_i(3),
      I2 => wb_adr_i(2),
      I3 => wb_adr_i(0),
      I4 => \rgpio_oe[0]_i_2_n_0\,
      O => \rgpio_eclk[31]_i_1_n_0\
    );
\rgpio_eclk_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(0),
      Q => rgpio_eclk(0)
    );
\rgpio_eclk_reg[10]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(10),
      Q => rgpio_eclk(10)
    );
\rgpio_eclk_reg[11]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(11),
      Q => rgpio_eclk(11)
    );
\rgpio_eclk_reg[12]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(12),
      Q => rgpio_eclk(12)
    );
\rgpio_eclk_reg[13]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(13),
      Q => rgpio_eclk(13)
    );
\rgpio_eclk_reg[14]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(14),
      Q => rgpio_eclk(14)
    );
\rgpio_eclk_reg[15]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(15),
      Q => rgpio_eclk(15)
    );
\rgpio_eclk_reg[16]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(16),
      Q => rgpio_eclk(16)
    );
\rgpio_eclk_reg[17]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(17),
      Q => rgpio_eclk(17)
    );
\rgpio_eclk_reg[18]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(18),
      Q => rgpio_eclk(18)
    );
\rgpio_eclk_reg[19]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(19),
      Q => rgpio_eclk(19)
    );
\rgpio_eclk_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(1),
      Q => rgpio_eclk(1)
    );
\rgpio_eclk_reg[20]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(20),
      Q => rgpio_eclk(20)
    );
\rgpio_eclk_reg[21]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(21),
      Q => rgpio_eclk(21)
    );
\rgpio_eclk_reg[22]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(22),
      Q => rgpio_eclk(22)
    );
\rgpio_eclk_reg[23]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(23),
      Q => rgpio_eclk(23)
    );
\rgpio_eclk_reg[24]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(24),
      Q => rgpio_eclk(24)
    );
\rgpio_eclk_reg[25]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(25),
      Q => rgpio_eclk(25)
    );
\rgpio_eclk_reg[26]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(26),
      Q => rgpio_eclk(26)
    );
\rgpio_eclk_reg[27]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(27),
      Q => rgpio_eclk(27)
    );
\rgpio_eclk_reg[28]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(28),
      Q => rgpio_eclk(28)
    );
\rgpio_eclk_reg[29]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(29),
      Q => rgpio_eclk(29)
    );
\rgpio_eclk_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(2),
      Q => rgpio_eclk(2)
    );
\rgpio_eclk_reg[30]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(30),
      Q => rgpio_eclk(30)
    );
\rgpio_eclk_reg[31]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(31),
      Q => rgpio_eclk(31)
    );
\rgpio_eclk_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(3),
      Q => rgpio_eclk(3)
    );
\rgpio_eclk_reg[4]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(4),
      Q => rgpio_eclk(4)
    );
\rgpio_eclk_reg[5]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(5),
      Q => rgpio_eclk(5)
    );
\rgpio_eclk_reg[6]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(6),
      Q => rgpio_eclk(6)
    );
\rgpio_eclk_reg[7]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(7),
      Q => rgpio_eclk(7)
    );
\rgpio_eclk_reg[8]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(8),
      Q => rgpio_eclk(8)
    );
\rgpio_eclk_reg[9]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_eclk[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(9),
      Q => rgpio_eclk(9)
    );
\rgpio_in[0]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(0),
      I1 => rgpio_eclk(0),
      O => in_muxed(0)
    );
\rgpio_in[10]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(10),
      I1 => rgpio_eclk(10),
      O => in_muxed(10)
    );
\rgpio_in[11]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(11),
      I1 => rgpio_eclk(11),
      O => in_muxed(11)
    );
\rgpio_in[12]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(12),
      I1 => rgpio_eclk(12),
      O => in_muxed(12)
    );
\rgpio_in[13]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(13),
      I1 => rgpio_eclk(13),
      O => in_muxed(13)
    );
\rgpio_in[14]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(14),
      I1 => rgpio_eclk(14),
      O => in_muxed(14)
    );
\rgpio_in[15]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(15),
      I1 => rgpio_eclk(15),
      O => in_muxed(15)
    );
\rgpio_in[16]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(16),
      I1 => rgpio_eclk(16),
      O => in_muxed(16)
    );
\rgpio_in[17]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(17),
      I1 => rgpio_eclk(17),
      O => in_muxed(17)
    );
\rgpio_in[18]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(18),
      I1 => rgpio_eclk(18),
      O => in_muxed(18)
    );
\rgpio_in[19]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(19),
      I1 => rgpio_eclk(19),
      O => in_muxed(19)
    );
\rgpio_in[1]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(1),
      I1 => rgpio_eclk(1),
      O => in_muxed(1)
    );
\rgpio_in[20]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(20),
      I1 => rgpio_eclk(20),
      O => in_muxed(20)
    );
\rgpio_in[21]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(21),
      I1 => rgpio_eclk(21),
      O => in_muxed(21)
    );
\rgpio_in[22]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(22),
      I1 => rgpio_eclk(22),
      O => in_muxed(22)
    );
\rgpio_in[23]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(23),
      I1 => rgpio_eclk(23),
      O => in_muxed(23)
    );
\rgpio_in[24]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(24),
      I1 => rgpio_eclk(24),
      O => in_muxed(24)
    );
\rgpio_in[25]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(25),
      I1 => rgpio_eclk(25),
      O => in_muxed(25)
    );
\rgpio_in[26]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(26),
      I1 => rgpio_eclk(26),
      O => in_muxed(26)
    );
\rgpio_in[27]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(27),
      I1 => rgpio_eclk(27),
      O => in_muxed(27)
    );
\rgpio_in[28]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(28),
      I1 => rgpio_eclk(28),
      O => in_muxed(28)
    );
\rgpio_in[29]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(29),
      I1 => rgpio_eclk(29),
      O => in_muxed(29)
    );
\rgpio_in[2]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(2),
      I1 => rgpio_eclk(2),
      O => in_muxed(2)
    );
\rgpio_in[30]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(30),
      I1 => rgpio_eclk(30),
      O => in_muxed(30)
    );
\rgpio_in[31]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(31),
      I1 => rgpio_eclk(31),
      O => in_muxed(31)
    );
\rgpio_in[3]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(3),
      I1 => rgpio_eclk(3),
      O => in_muxed(3)
    );
\rgpio_in[4]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(4),
      I1 => rgpio_eclk(4),
      O => in_muxed(4)
    );
\rgpio_in[5]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(5),
      I1 => rgpio_eclk(5),
      O => in_muxed(5)
    );
\rgpio_in[6]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(6),
      I1 => rgpio_eclk(6),
      O => in_muxed(6)
    );
\rgpio_in[7]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(7),
      I1 => rgpio_eclk(7),
      O => in_muxed(7)
    );
\rgpio_in[8]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(8),
      I1 => rgpio_eclk(8),
      O => in_muxed(8)
    );
\rgpio_in[9]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ext_pad_s(9),
      I1 => rgpio_eclk(9),
      O => in_muxed(9)
    );
\rgpio_in_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(0),
      Q => rgpio_in(0)
    );
\rgpio_in_reg[10]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(10),
      Q => rgpio_in(10)
    );
\rgpio_in_reg[11]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(11),
      Q => rgpio_in(11)
    );
\rgpio_in_reg[12]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(12),
      Q => rgpio_in(12)
    );
\rgpio_in_reg[13]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(13),
      Q => rgpio_in(13)
    );
\rgpio_in_reg[14]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(14),
      Q => rgpio_in(14)
    );
\rgpio_in_reg[15]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(15),
      Q => rgpio_in(15)
    );
\rgpio_in_reg[16]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(16),
      Q => rgpio_in(16)
    );
\rgpio_in_reg[17]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(17),
      Q => rgpio_in(17)
    );
\rgpio_in_reg[18]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(18),
      Q => rgpio_in(18)
    );
\rgpio_in_reg[19]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(19),
      Q => rgpio_in(19)
    );
\rgpio_in_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(1),
      Q => rgpio_in(1)
    );
\rgpio_in_reg[20]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(20),
      Q => rgpio_in(20)
    );
\rgpio_in_reg[21]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(21),
      Q => rgpio_in(21)
    );
\rgpio_in_reg[22]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(22),
      Q => rgpio_in(22)
    );
\rgpio_in_reg[23]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(23),
      Q => rgpio_in(23)
    );
\rgpio_in_reg[24]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(24),
      Q => rgpio_in(24)
    );
\rgpio_in_reg[25]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(25),
      Q => rgpio_in(25)
    );
\rgpio_in_reg[26]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(26),
      Q => rgpio_in(26)
    );
\rgpio_in_reg[27]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(27),
      Q => rgpio_in(27)
    );
\rgpio_in_reg[28]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(28),
      Q => rgpio_in(28)
    );
\rgpio_in_reg[29]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(29),
      Q => rgpio_in(29)
    );
\rgpio_in_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(2),
      Q => rgpio_in(2)
    );
\rgpio_in_reg[30]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(30),
      Q => rgpio_in(30)
    );
\rgpio_in_reg[31]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(31),
      Q => rgpio_in(31)
    );
\rgpio_in_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(3),
      Q => rgpio_in(3)
    );
\rgpio_in_reg[4]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(4),
      Q => rgpio_in(4)
    );
\rgpio_in_reg[5]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(5),
      Q => rgpio_in(5)
    );
\rgpio_in_reg[6]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(6),
      Q => rgpio_in(6)
    );
\rgpio_in_reg[7]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(7),
      Q => rgpio_in(7)
    );
\rgpio_in_reg[8]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(8),
      Q => rgpio_in(8)
    );
\rgpio_in_reg[9]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => in_muxed(9),
      Q => rgpio_in(9)
    );
\rgpio_inte[31]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000008"
    )
        port map (
      I0 => wb_adr_i(1),
      I1 => wb_adr_i(0),
      I2 => wb_adr_i(2),
      I3 => wb_adr_i(3),
      I4 => \rgpio_oe[0]_i_2_n_0\,
      O => \rgpio_inte[31]_i_1_n_0\
    );
\rgpio_inte_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(0),
      Q => rgpio_inte(0)
    );
\rgpio_inte_reg[10]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(10),
      Q => rgpio_inte(10)
    );
\rgpio_inte_reg[11]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(11),
      Q => rgpio_inte(11)
    );
\rgpio_inte_reg[12]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(12),
      Q => rgpio_inte(12)
    );
\rgpio_inte_reg[13]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(13),
      Q => rgpio_inte(13)
    );
\rgpio_inte_reg[14]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(14),
      Q => rgpio_inte(14)
    );
\rgpio_inte_reg[15]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(15),
      Q => rgpio_inte(15)
    );
\rgpio_inte_reg[16]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(16),
      Q => rgpio_inte(16)
    );
\rgpio_inte_reg[17]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(17),
      Q => rgpio_inte(17)
    );
\rgpio_inte_reg[18]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(18),
      Q => rgpio_inte(18)
    );
\rgpio_inte_reg[19]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(19),
      Q => rgpio_inte(19)
    );
\rgpio_inte_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(1),
      Q => rgpio_inte(1)
    );
\rgpio_inte_reg[20]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(20),
      Q => rgpio_inte(20)
    );
\rgpio_inte_reg[21]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(21),
      Q => rgpio_inte(21)
    );
\rgpio_inte_reg[22]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(22),
      Q => rgpio_inte(22)
    );
\rgpio_inte_reg[23]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(23),
      Q => rgpio_inte(23)
    );
\rgpio_inte_reg[24]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(24),
      Q => rgpio_inte(24)
    );
\rgpio_inte_reg[25]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(25),
      Q => rgpio_inte(25)
    );
\rgpio_inte_reg[26]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(26),
      Q => rgpio_inte(26)
    );
\rgpio_inte_reg[27]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(27),
      Q => rgpio_inte(27)
    );
\rgpio_inte_reg[28]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(28),
      Q => rgpio_inte(28)
    );
\rgpio_inte_reg[29]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(29),
      Q => rgpio_inte(29)
    );
\rgpio_inte_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(2),
      Q => rgpio_inte(2)
    );
\rgpio_inte_reg[30]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(30),
      Q => rgpio_inte(30)
    );
\rgpio_inte_reg[31]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(31),
      Q => rgpio_inte(31)
    );
\rgpio_inte_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(3),
      Q => rgpio_inte(3)
    );
\rgpio_inte_reg[4]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(4),
      Q => rgpio_inte(4)
    );
\rgpio_inte_reg[5]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(5),
      Q => rgpio_inte(5)
    );
\rgpio_inte_reg[6]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(6),
      Q => rgpio_inte(6)
    );
\rgpio_inte_reg[7]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(7),
      Q => rgpio_inte(7)
    );
\rgpio_inte_reg[8]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(8),
      Q => rgpio_inte(8)
    );
\rgpio_inte_reg[9]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_inte[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(9),
      Q => rgpio_inte(9)
    );
\rgpio_ints[0]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(0),
      I1 => \rgpio_ints0__159\(0),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(0)
    );
\rgpio_ints[0]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(0),
      I1 => rgpio_inte(0),
      I2 => ext_pad_s(0),
      I3 => rgpio_eclk(0),
      I4 => rgpio_ptrig(0),
      I5 => rgpio_in(0),
      O => \rgpio_ints0__159\(0)
    );
\rgpio_ints[10]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(10),
      I1 => \rgpio_ints0__159\(10),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(10)
    );
\rgpio_ints[10]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(10),
      I1 => rgpio_inte(10),
      I2 => ext_pad_s(10),
      I3 => rgpio_eclk(10),
      I4 => rgpio_ptrig(10),
      I5 => rgpio_in(10),
      O => \rgpio_ints0__159\(10)
    );
\rgpio_ints[11]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(11),
      I1 => \rgpio_ints0__159\(11),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(11)
    );
\rgpio_ints[11]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(11),
      I1 => rgpio_inte(11),
      I2 => ext_pad_s(11),
      I3 => rgpio_eclk(11),
      I4 => rgpio_ptrig(11),
      I5 => rgpio_in(11),
      O => \rgpio_ints0__159\(11)
    );
\rgpio_ints[12]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(12),
      I1 => \rgpio_ints0__159\(12),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(12)
    );
\rgpio_ints[12]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(12),
      I1 => rgpio_inte(12),
      I2 => ext_pad_s(12),
      I3 => rgpio_eclk(12),
      I4 => rgpio_ptrig(12),
      I5 => rgpio_in(12),
      O => \rgpio_ints0__159\(12)
    );
\rgpio_ints[13]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(13),
      I1 => \rgpio_ints0__159\(13),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(13)
    );
\rgpio_ints[13]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(13),
      I1 => rgpio_inte(13),
      I2 => ext_pad_s(13),
      I3 => rgpio_eclk(13),
      I4 => rgpio_ptrig(13),
      I5 => rgpio_in(13),
      O => \rgpio_ints0__159\(13)
    );
\rgpio_ints[14]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(14),
      I1 => \rgpio_ints0__159\(14),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(14)
    );
\rgpio_ints[14]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(14),
      I1 => rgpio_inte(14),
      I2 => ext_pad_s(14),
      I3 => rgpio_eclk(14),
      I4 => rgpio_ptrig(14),
      I5 => rgpio_in(14),
      O => \rgpio_ints0__159\(14)
    );
\rgpio_ints[15]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(15),
      I1 => \rgpio_ints0__159\(15),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(15)
    );
\rgpio_ints[15]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(15),
      I1 => rgpio_inte(15),
      I2 => ext_pad_s(15),
      I3 => rgpio_eclk(15),
      I4 => rgpio_ptrig(15),
      I5 => rgpio_in(15),
      O => \rgpio_ints0__159\(15)
    );
\rgpio_ints[16]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(16),
      I1 => \rgpio_ints0__159\(16),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(16)
    );
\rgpio_ints[16]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(16),
      I1 => rgpio_inte(16),
      I2 => ext_pad_s(16),
      I3 => rgpio_eclk(16),
      I4 => rgpio_ptrig(16),
      I5 => rgpio_in(16),
      O => \rgpio_ints0__159\(16)
    );
\rgpio_ints[17]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(17),
      I1 => \rgpio_ints0__159\(17),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(17)
    );
\rgpio_ints[17]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(17),
      I1 => rgpio_inte(17),
      I2 => ext_pad_s(17),
      I3 => rgpio_eclk(17),
      I4 => rgpio_ptrig(17),
      I5 => rgpio_in(17),
      O => \rgpio_ints0__159\(17)
    );
\rgpio_ints[18]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(18),
      I1 => \rgpio_ints0__159\(18),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(18)
    );
\rgpio_ints[18]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(18),
      I1 => rgpio_inte(18),
      I2 => ext_pad_s(18),
      I3 => rgpio_eclk(18),
      I4 => rgpio_ptrig(18),
      I5 => rgpio_in(18),
      O => \rgpio_ints0__159\(18)
    );
\rgpio_ints[19]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(19),
      I1 => \rgpio_ints0__159\(19),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(19)
    );
\rgpio_ints[19]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(19),
      I1 => rgpio_inte(19),
      I2 => ext_pad_s(19),
      I3 => rgpio_eclk(19),
      I4 => rgpio_ptrig(19),
      I5 => rgpio_in(19),
      O => \rgpio_ints0__159\(19)
    );
\rgpio_ints[1]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(1),
      I1 => \rgpio_ints0__159\(1),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(1)
    );
\rgpio_ints[1]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(1),
      I1 => rgpio_inte(1),
      I2 => ext_pad_s(1),
      I3 => rgpio_eclk(1),
      I4 => rgpio_ptrig(1),
      I5 => rgpio_in(1),
      O => \rgpio_ints0__159\(1)
    );
\rgpio_ints[20]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(20),
      I1 => \rgpio_ints0__159\(20),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(20)
    );
\rgpio_ints[20]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(20),
      I1 => rgpio_inte(20),
      I2 => ext_pad_s(20),
      I3 => rgpio_eclk(20),
      I4 => rgpio_ptrig(20),
      I5 => rgpio_in(20),
      O => \rgpio_ints0__159\(20)
    );
\rgpio_ints[21]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(21),
      I1 => \rgpio_ints0__159\(21),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(21)
    );
\rgpio_ints[21]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(21),
      I1 => rgpio_inte(21),
      I2 => ext_pad_s(21),
      I3 => rgpio_eclk(21),
      I4 => rgpio_ptrig(21),
      I5 => rgpio_in(21),
      O => \rgpio_ints0__159\(21)
    );
\rgpio_ints[22]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(22),
      I1 => \rgpio_ints0__159\(22),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(22)
    );
\rgpio_ints[22]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(22),
      I1 => rgpio_inte(22),
      I2 => ext_pad_s(22),
      I3 => rgpio_eclk(22),
      I4 => rgpio_ptrig(22),
      I5 => rgpio_in(22),
      O => \rgpio_ints0__159\(22)
    );
\rgpio_ints[23]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(23),
      I1 => \rgpio_ints0__159\(23),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(23)
    );
\rgpio_ints[23]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(23),
      I1 => rgpio_inte(23),
      I2 => ext_pad_s(23),
      I3 => rgpio_eclk(23),
      I4 => rgpio_ptrig(23),
      I5 => rgpio_in(23),
      O => \rgpio_ints0__159\(23)
    );
\rgpio_ints[24]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(24),
      I1 => \rgpio_ints0__159\(24),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(24)
    );
\rgpio_ints[24]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(24),
      I1 => rgpio_inte(24),
      I2 => ext_pad_s(24),
      I3 => rgpio_eclk(24),
      I4 => rgpio_ptrig(24),
      I5 => rgpio_in(24),
      O => \rgpio_ints0__159\(24)
    );
\rgpio_ints[25]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(25),
      I1 => \rgpio_ints0__159\(25),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(25)
    );
\rgpio_ints[25]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(25),
      I1 => rgpio_inte(25),
      I2 => ext_pad_s(25),
      I3 => rgpio_eclk(25),
      I4 => rgpio_ptrig(25),
      I5 => rgpio_in(25),
      O => \rgpio_ints0__159\(25)
    );
\rgpio_ints[26]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(26),
      I1 => \rgpio_ints0__159\(26),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(26)
    );
\rgpio_ints[26]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(26),
      I1 => rgpio_inte(26),
      I2 => ext_pad_s(26),
      I3 => rgpio_eclk(26),
      I4 => rgpio_ptrig(26),
      I5 => rgpio_in(26),
      O => \rgpio_ints0__159\(26)
    );
\rgpio_ints[27]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(27),
      I1 => \rgpio_ints0__159\(27),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(27)
    );
\rgpio_ints[27]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(27),
      I1 => rgpio_inte(27),
      I2 => ext_pad_s(27),
      I3 => rgpio_eclk(27),
      I4 => rgpio_ptrig(27),
      I5 => rgpio_in(27),
      O => \rgpio_ints0__159\(27)
    );
\rgpio_ints[28]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(28),
      I1 => \rgpio_ints0__159\(28),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(28)
    );
\rgpio_ints[28]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(28),
      I1 => rgpio_inte(28),
      I2 => ext_pad_s(28),
      I3 => rgpio_eclk(28),
      I4 => rgpio_ptrig(28),
      I5 => rgpio_in(28),
      O => \rgpio_ints0__159\(28)
    );
\rgpio_ints[29]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(29),
      I1 => \rgpio_ints0__159\(29),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(29)
    );
\rgpio_ints[29]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(29),
      I1 => rgpio_inte(29),
      I2 => ext_pad_s(29),
      I3 => rgpio_eclk(29),
      I4 => rgpio_ptrig(29),
      I5 => rgpio_in(29),
      O => \rgpio_ints0__159\(29)
    );
\rgpio_ints[2]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(2),
      I1 => \rgpio_ints0__159\(2),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(2)
    );
\rgpio_ints[2]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(2),
      I1 => rgpio_inte(2),
      I2 => ext_pad_s(2),
      I3 => rgpio_eclk(2),
      I4 => rgpio_ptrig(2),
      I5 => rgpio_in(2),
      O => \rgpio_ints0__159\(2)
    );
\rgpio_ints[30]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(30),
      I1 => \rgpio_ints0__159\(30),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(30)
    );
\rgpio_ints[30]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(30),
      I1 => rgpio_inte(30),
      I2 => ext_pad_s(30),
      I3 => rgpio_eclk(30),
      I4 => rgpio_ptrig(30),
      I5 => rgpio_in(30),
      O => \rgpio_ints0__159\(30)
    );
\rgpio_ints[31]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => \rgpio_ints[31]_i_3_n_0\,
      I1 => p_1_in_0(1),
      O => \rgpio_ints[31]_i_1_n_0\
    );
\rgpio_ints[31]_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(31),
      I1 => \rgpio_ints0__159\(31),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(31)
    );
\rgpio_ints[31]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000800"
    )
        port map (
      I0 => wb_adr_i(1),
      I1 => wb_adr_i(0),
      I2 => wb_adr_i(3),
      I3 => wb_adr_i(2),
      I4 => \rgpio_oe[0]_i_2_n_0\,
      O => \rgpio_ints[31]_i_3_n_0\
    );
\rgpio_ints[31]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(31),
      I1 => rgpio_inte(31),
      I2 => ext_pad_s(31),
      I3 => rgpio_eclk(31),
      I4 => rgpio_ptrig(31),
      I5 => rgpio_in(31),
      O => \rgpio_ints0__159\(31)
    );
\rgpio_ints[3]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(3),
      I1 => \rgpio_ints0__159\(3),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(3)
    );
\rgpio_ints[3]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(3),
      I1 => rgpio_inte(3),
      I2 => ext_pad_s(3),
      I3 => rgpio_eclk(3),
      I4 => rgpio_ptrig(3),
      I5 => rgpio_in(3),
      O => \rgpio_ints0__159\(3)
    );
\rgpio_ints[4]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(4),
      I1 => \rgpio_ints0__159\(4),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(4)
    );
\rgpio_ints[4]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(4),
      I1 => rgpio_inte(4),
      I2 => ext_pad_s(4),
      I3 => rgpio_eclk(4),
      I4 => rgpio_ptrig(4),
      I5 => rgpio_in(4),
      O => \rgpio_ints0__159\(4)
    );
\rgpio_ints[5]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(5),
      I1 => \rgpio_ints0__159\(5),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(5)
    );
\rgpio_ints[5]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(5),
      I1 => rgpio_inte(5),
      I2 => ext_pad_s(5),
      I3 => rgpio_eclk(5),
      I4 => rgpio_ptrig(5),
      I5 => rgpio_in(5),
      O => \rgpio_ints0__159\(5)
    );
\rgpio_ints[6]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(6),
      I1 => \rgpio_ints0__159\(6),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(6)
    );
\rgpio_ints[6]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(6),
      I1 => rgpio_inte(6),
      I2 => ext_pad_s(6),
      I3 => rgpio_eclk(6),
      I4 => rgpio_ptrig(6),
      I5 => rgpio_in(6),
      O => \rgpio_ints0__159\(6)
    );
\rgpio_ints[7]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(7),
      I1 => \rgpio_ints0__159\(7),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(7)
    );
\rgpio_ints[7]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(7),
      I1 => rgpio_inte(7),
      I2 => ext_pad_s(7),
      I3 => rgpio_eclk(7),
      I4 => rgpio_ptrig(7),
      I5 => rgpio_in(7),
      O => \rgpio_ints0__159\(7)
    );
\rgpio_ints[8]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(8),
      I1 => \rgpio_ints0__159\(8),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(8)
    );
\rgpio_ints[8]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(8),
      I1 => rgpio_inte(8),
      I2 => ext_pad_s(8),
      I3 => rgpio_eclk(8),
      I4 => rgpio_ptrig(8),
      I5 => rgpio_in(8),
      O => \rgpio_ints0__159\(8)
    );
\rgpio_ints[9]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"AC"
    )
        port map (
      I0 => wb_dat_i(9),
      I1 => \rgpio_ints0__159\(9),
      I2 => \rgpio_ints[31]_i_3_n_0\,
      O => p_1_in(9)
    );
\rgpio_ints[9]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AAAAEEAEAAEAAAAA"
    )
        port map (
      I0 => rgpio_ints(9),
      I1 => rgpio_inte(9),
      I2 => ext_pad_s(9),
      I3 => rgpio_eclk(9),
      I4 => rgpio_ptrig(9),
      I5 => rgpio_in(9),
      O => \rgpio_ints0__159\(9)
    );
\rgpio_ints_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(0),
      Q => rgpio_ints(0)
    );
\rgpio_ints_reg[10]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(10),
      Q => rgpio_ints(10)
    );
\rgpio_ints_reg[11]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(11),
      Q => rgpio_ints(11)
    );
\rgpio_ints_reg[12]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(12),
      Q => rgpio_ints(12)
    );
\rgpio_ints_reg[13]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(13),
      Q => rgpio_ints(13)
    );
\rgpio_ints_reg[14]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(14),
      Q => rgpio_ints(14)
    );
\rgpio_ints_reg[15]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(15),
      Q => rgpio_ints(15)
    );
\rgpio_ints_reg[16]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(16),
      Q => rgpio_ints(16)
    );
\rgpio_ints_reg[17]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(17),
      Q => rgpio_ints(17)
    );
\rgpio_ints_reg[18]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(18),
      Q => rgpio_ints(18)
    );
\rgpio_ints_reg[19]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(19),
      Q => rgpio_ints(19)
    );
\rgpio_ints_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(1),
      Q => rgpio_ints(1)
    );
\rgpio_ints_reg[20]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(20),
      Q => rgpio_ints(20)
    );
\rgpio_ints_reg[21]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(21),
      Q => rgpio_ints(21)
    );
\rgpio_ints_reg[22]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(22),
      Q => rgpio_ints(22)
    );
\rgpio_ints_reg[23]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(23),
      Q => rgpio_ints(23)
    );
\rgpio_ints_reg[24]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(24),
      Q => rgpio_ints(24)
    );
\rgpio_ints_reg[25]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(25),
      Q => rgpio_ints(25)
    );
\rgpio_ints_reg[26]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(26),
      Q => rgpio_ints(26)
    );
\rgpio_ints_reg[27]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(27),
      Q => rgpio_ints(27)
    );
\rgpio_ints_reg[28]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(28),
      Q => rgpio_ints(28)
    );
\rgpio_ints_reg[29]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(29),
      Q => rgpio_ints(29)
    );
\rgpio_ints_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(2),
      Q => rgpio_ints(2)
    );
\rgpio_ints_reg[30]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(30),
      Q => rgpio_ints(30)
    );
\rgpio_ints_reg[31]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(31),
      Q => rgpio_ints(31)
    );
\rgpio_ints_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(3),
      Q => rgpio_ints(3)
    );
\rgpio_ints_reg[4]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(4),
      Q => rgpio_ints(4)
    );
\rgpio_ints_reg[5]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(5),
      Q => rgpio_ints(5)
    );
\rgpio_ints_reg[6]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(6),
      Q => rgpio_ints(6)
    );
\rgpio_ints_reg[7]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(7),
      Q => rgpio_ints(7)
    );
\rgpio_ints_reg[8]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(8),
      Q => rgpio_ints(8)
    );
\rgpio_ints_reg[9]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ints[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => p_1_in(9),
      Q => rgpio_ints(9)
    );
\rgpio_nec[31]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000008"
    )
        port map (
      I0 => wb_adr_i(3),
      I1 => wb_adr_i(0),
      I2 => wb_adr_i(2),
      I3 => wb_adr_i(1),
      I4 => \rgpio_oe[0]_i_2_n_0\,
      O => \rgpio_nec[31]_i_1_n_0\
    );
\rgpio_nec_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(0),
      Q => rgpio_nec(0)
    );
\rgpio_nec_reg[10]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(10),
      Q => rgpio_nec(10)
    );
\rgpio_nec_reg[11]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(11),
      Q => rgpio_nec(11)
    );
\rgpio_nec_reg[12]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(12),
      Q => rgpio_nec(12)
    );
\rgpio_nec_reg[13]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(13),
      Q => rgpio_nec(13)
    );
\rgpio_nec_reg[14]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(14),
      Q => rgpio_nec(14)
    );
\rgpio_nec_reg[15]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(15),
      Q => rgpio_nec(15)
    );
\rgpio_nec_reg[16]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(16),
      Q => rgpio_nec(16)
    );
\rgpio_nec_reg[17]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(17),
      Q => rgpio_nec(17)
    );
\rgpio_nec_reg[18]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(18),
      Q => rgpio_nec(18)
    );
\rgpio_nec_reg[19]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(19),
      Q => rgpio_nec(19)
    );
\rgpio_nec_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(1),
      Q => rgpio_nec(1)
    );
\rgpio_nec_reg[20]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(20),
      Q => rgpio_nec(20)
    );
\rgpio_nec_reg[21]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(21),
      Q => rgpio_nec(21)
    );
\rgpio_nec_reg[22]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(22),
      Q => rgpio_nec(22)
    );
\rgpio_nec_reg[23]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(23),
      Q => rgpio_nec(23)
    );
\rgpio_nec_reg[24]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(24),
      Q => rgpio_nec(24)
    );
\rgpio_nec_reg[25]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(25),
      Q => rgpio_nec(25)
    );
\rgpio_nec_reg[26]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(26),
      Q => rgpio_nec(26)
    );
\rgpio_nec_reg[27]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(27),
      Q => rgpio_nec(27)
    );
\rgpio_nec_reg[28]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(28),
      Q => rgpio_nec(28)
    );
\rgpio_nec_reg[29]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(29),
      Q => rgpio_nec(29)
    );
\rgpio_nec_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(2),
      Q => rgpio_nec(2)
    );
\rgpio_nec_reg[30]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(30),
      Q => rgpio_nec(30)
    );
\rgpio_nec_reg[31]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(31),
      Q => rgpio_nec(31)
    );
\rgpio_nec_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(3),
      Q => rgpio_nec(3)
    );
\rgpio_nec_reg[4]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(4),
      Q => rgpio_nec(4)
    );
\rgpio_nec_reg[5]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(5),
      Q => rgpio_nec(5)
    );
\rgpio_nec_reg[6]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(6),
      Q => rgpio_nec(6)
    );
\rgpio_nec_reg[7]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(7),
      Q => rgpio_nec(7)
    );
\rgpio_nec_reg[8]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(8),
      Q => rgpio_nec(8)
    );
\rgpio_nec_reg[9]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_nec[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(9),
      Q => rgpio_nec(9)
    );
\rgpio_oe[0]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000004"
    )
        port map (
      I0 => wb_adr_i(0),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => wb_adr_i(3),
      I4 => \rgpio_oe[0]_i_2_n_0\,
      O => \rgpio_oe[0]_i_1_n_0\
    );
\rgpio_oe[0]_i_2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"7F"
    )
        port map (
      I0 => wb_stb_i,
      I1 => wb_cyc_i,
      I2 => wb_we_i,
      O => \rgpio_oe[0]_i_2_n_0\
    );
\rgpio_oe_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(0),
      Q => \^q\(0)
    );
\rgpio_oe_reg[10]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(10),
      Q => \^q\(10)
    );
\rgpio_oe_reg[11]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(11),
      Q => \^q\(11)
    );
\rgpio_oe_reg[12]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(12),
      Q => \^q\(12)
    );
\rgpio_oe_reg[13]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(13),
      Q => \^q\(13)
    );
\rgpio_oe_reg[14]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(14),
      Q => \^q\(14)
    );
\rgpio_oe_reg[15]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(15),
      Q => \^q\(15)
    );
\rgpio_oe_reg[16]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(16),
      Q => \^q\(16)
    );
\rgpio_oe_reg[17]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(17),
      Q => \^q\(17)
    );
\rgpio_oe_reg[18]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(18),
      Q => \^q\(18)
    );
\rgpio_oe_reg[19]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(19),
      Q => \^q\(19)
    );
\rgpio_oe_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(1),
      Q => \^q\(1)
    );
\rgpio_oe_reg[20]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(20),
      Q => \^q\(20)
    );
\rgpio_oe_reg[21]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(21),
      Q => \^q\(21)
    );
\rgpio_oe_reg[22]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(22),
      Q => \^q\(22)
    );
\rgpio_oe_reg[23]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(23),
      Q => \^q\(23)
    );
\rgpio_oe_reg[24]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(24),
      Q => \^q\(24)
    );
\rgpio_oe_reg[25]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(25),
      Q => \^q\(25)
    );
\rgpio_oe_reg[26]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(26),
      Q => \^q\(26)
    );
\rgpio_oe_reg[27]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(27),
      Q => \^q\(27)
    );
\rgpio_oe_reg[28]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(28),
      Q => \^q\(28)
    );
\rgpio_oe_reg[29]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(29),
      Q => \^q\(29)
    );
\rgpio_oe_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(2),
      Q => \^q\(2)
    );
\rgpio_oe_reg[30]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(30),
      Q => \^q\(30)
    );
\rgpio_oe_reg[31]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(31),
      Q => \^q\(31)
    );
\rgpio_oe_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(3),
      Q => \^q\(3)
    );
\rgpio_oe_reg[4]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(4),
      Q => \^q\(4)
    );
\rgpio_oe_reg[5]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(5),
      Q => \^q\(5)
    );
\rgpio_oe_reg[6]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(6),
      Q => \^q\(6)
    );
\rgpio_oe_reg[7]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(7),
      Q => \^q\(7)
    );
\rgpio_oe_reg[8]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(8),
      Q => \^q\(8)
    );
\rgpio_oe_reg[9]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_oe[0]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(9),
      Q => \^q\(9)
    );
\rgpio_out[31]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000004"
    )
        port map (
      I0 => wb_adr_i(1),
      I1 => wb_adr_i(0),
      I2 => wb_adr_i(2),
      I3 => wb_adr_i(3),
      I4 => \rgpio_oe[0]_i_2_n_0\,
      O => \rgpio_out[31]_i_1_n_0\
    );
\rgpio_out_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(0),
      Q => rgpio_out(0)
    );
\rgpio_out_reg[10]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(10),
      Q => rgpio_out(10)
    );
\rgpio_out_reg[11]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(11),
      Q => rgpio_out(11)
    );
\rgpio_out_reg[12]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(12),
      Q => rgpio_out(12)
    );
\rgpio_out_reg[13]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(13),
      Q => rgpio_out(13)
    );
\rgpio_out_reg[14]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(14),
      Q => rgpio_out(14)
    );
\rgpio_out_reg[15]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(15),
      Q => rgpio_out(15)
    );
\rgpio_out_reg[16]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(16),
      Q => rgpio_out(16)
    );
\rgpio_out_reg[17]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(17),
      Q => rgpio_out(17)
    );
\rgpio_out_reg[18]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(18),
      Q => rgpio_out(18)
    );
\rgpio_out_reg[19]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(19),
      Q => rgpio_out(19)
    );
\rgpio_out_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(1),
      Q => rgpio_out(1)
    );
\rgpio_out_reg[20]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(20),
      Q => rgpio_out(20)
    );
\rgpio_out_reg[21]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(21),
      Q => rgpio_out(21)
    );
\rgpio_out_reg[22]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(22),
      Q => rgpio_out(22)
    );
\rgpio_out_reg[23]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(23),
      Q => rgpio_out(23)
    );
\rgpio_out_reg[24]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(24),
      Q => rgpio_out(24)
    );
\rgpio_out_reg[25]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(25),
      Q => rgpio_out(25)
    );
\rgpio_out_reg[26]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(26),
      Q => rgpio_out(26)
    );
\rgpio_out_reg[27]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(27),
      Q => rgpio_out(27)
    );
\rgpio_out_reg[28]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(28),
      Q => rgpio_out(28)
    );
\rgpio_out_reg[29]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(29),
      Q => rgpio_out(29)
    );
\rgpio_out_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(2),
      Q => rgpio_out(2)
    );
\rgpio_out_reg[30]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(30),
      Q => rgpio_out(30)
    );
\rgpio_out_reg[31]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(31),
      Q => rgpio_out(31)
    );
\rgpio_out_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(3),
      Q => rgpio_out(3)
    );
\rgpio_out_reg[4]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(4),
      Q => rgpio_out(4)
    );
\rgpio_out_reg[5]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(5),
      Q => rgpio_out(5)
    );
\rgpio_out_reg[6]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(6),
      Q => rgpio_out(6)
    );
\rgpio_out_reg[7]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(7),
      Q => rgpio_out(7)
    );
\rgpio_out_reg[8]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(8),
      Q => rgpio_out(8)
    );
\rgpio_out_reg[9]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_out[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(9),
      Q => rgpio_out(9)
    );
\rgpio_ptrig[31]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000004"
    )
        port map (
      I0 => wb_adr_i(1),
      I1 => wb_adr_i(2),
      I2 => wb_adr_i(0),
      I3 => wb_adr_i(3),
      I4 => \rgpio_oe[0]_i_2_n_0\,
      O => \rgpio_ptrig[31]_i_1_n_0\
    );
\rgpio_ptrig_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(0),
      Q => rgpio_ptrig(0)
    );
\rgpio_ptrig_reg[10]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(10),
      Q => rgpio_ptrig(10)
    );
\rgpio_ptrig_reg[11]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(11),
      Q => rgpio_ptrig(11)
    );
\rgpio_ptrig_reg[12]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(12),
      Q => rgpio_ptrig(12)
    );
\rgpio_ptrig_reg[13]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(13),
      Q => rgpio_ptrig(13)
    );
\rgpio_ptrig_reg[14]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(14),
      Q => rgpio_ptrig(14)
    );
\rgpio_ptrig_reg[15]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(15),
      Q => rgpio_ptrig(15)
    );
\rgpio_ptrig_reg[16]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(16),
      Q => rgpio_ptrig(16)
    );
\rgpio_ptrig_reg[17]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(17),
      Q => rgpio_ptrig(17)
    );
\rgpio_ptrig_reg[18]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(18),
      Q => rgpio_ptrig(18)
    );
\rgpio_ptrig_reg[19]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(19),
      Q => rgpio_ptrig(19)
    );
\rgpio_ptrig_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(1),
      Q => rgpio_ptrig(1)
    );
\rgpio_ptrig_reg[20]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(20),
      Q => rgpio_ptrig(20)
    );
\rgpio_ptrig_reg[21]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(21),
      Q => rgpio_ptrig(21)
    );
\rgpio_ptrig_reg[22]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(22),
      Q => rgpio_ptrig(22)
    );
\rgpio_ptrig_reg[23]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(23),
      Q => rgpio_ptrig(23)
    );
\rgpio_ptrig_reg[24]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(24),
      Q => rgpio_ptrig(24)
    );
\rgpio_ptrig_reg[25]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(25),
      Q => rgpio_ptrig(25)
    );
\rgpio_ptrig_reg[26]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(26),
      Q => rgpio_ptrig(26)
    );
\rgpio_ptrig_reg[27]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(27),
      Q => rgpio_ptrig(27)
    );
\rgpio_ptrig_reg[28]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(28),
      Q => rgpio_ptrig(28)
    );
\rgpio_ptrig_reg[29]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(29),
      Q => rgpio_ptrig(29)
    );
\rgpio_ptrig_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(2),
      Q => rgpio_ptrig(2)
    );
\rgpio_ptrig_reg[30]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(30),
      Q => rgpio_ptrig(30)
    );
\rgpio_ptrig_reg[31]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(31),
      Q => rgpio_ptrig(31)
    );
\rgpio_ptrig_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(3),
      Q => rgpio_ptrig(3)
    );
\rgpio_ptrig_reg[4]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(4),
      Q => rgpio_ptrig(4)
    );
\rgpio_ptrig_reg[5]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(5),
      Q => rgpio_ptrig(5)
    );
\rgpio_ptrig_reg[6]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(6),
      Q => rgpio_ptrig(6)
    );
\rgpio_ptrig_reg[7]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(7),
      Q => rgpio_ptrig(7)
    );
\rgpio_ptrig_reg[8]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(8),
      Q => rgpio_ptrig(8)
    );
\rgpio_ptrig_reg[9]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => \rgpio_ptrig[31]_i_1_n_0\,
      CLR => wb_rst_n,
      D => wb_dat_i(9),
      Q => rgpio_ptrig(9)
    );
\sync_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(0),
      Q => sync(0)
    );
\sync_reg[10]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(10),
      Q => sync(10)
    );
\sync_reg[11]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(11),
      Q => sync(11)
    );
\sync_reg[12]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(12),
      Q => sync(12)
    );
\sync_reg[13]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(13),
      Q => sync(13)
    );
\sync_reg[14]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(14),
      Q => sync(14)
    );
\sync_reg[15]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(15),
      Q => sync(15)
    );
\sync_reg[16]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(16),
      Q => sync(16)
    );
\sync_reg[17]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(17),
      Q => sync(17)
    );
\sync_reg[18]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(18),
      Q => sync(18)
    );
\sync_reg[19]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(19),
      Q => sync(19)
    );
\sync_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(1),
      Q => sync(1)
    );
\sync_reg[20]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(20),
      Q => sync(20)
    );
\sync_reg[21]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(21),
      Q => sync(21)
    );
\sync_reg[22]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(22),
      Q => sync(22)
    );
\sync_reg[23]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(23),
      Q => sync(23)
    );
\sync_reg[24]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(24),
      Q => sync(24)
    );
\sync_reg[25]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(25),
      Q => sync(25)
    );
\sync_reg[26]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(26),
      Q => sync(26)
    );
\sync_reg[27]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(27),
      Q => sync(27)
    );
\sync_reg[28]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(28),
      Q => sync(28)
    );
\sync_reg[29]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(29),
      Q => sync(29)
    );
\sync_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(2),
      Q => sync(2)
    );
\sync_reg[30]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(30),
      Q => sync(30)
    );
\sync_reg[31]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(31),
      Q => sync(31)
    );
\sync_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(3),
      Q => sync(3)
    );
\sync_reg[4]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(4),
      Q => sync(4)
    );
\sync_reg[5]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(5),
      Q => sync(5)
    );
\sync_reg[6]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(6),
      Q => sync(6)
    );
\sync_reg[7]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(7),
      Q => sync(7)
    );
\sync_reg[8]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(8),
      Q => sync(8)
    );
\sync_reg[9]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => D(9),
      Q => sync(9)
    );
wb_ack_o_i_1: unisim.vcomponents.LUT3
    generic map(
      INIT => X"08"
    )
        port map (
      I0 => wb_stb_i,
      I1 => wb_cyc_i,
      I2 => \^wb_ack_o\,
      O => wb_ack_o_i_1_n_0
    );
wb_ack_o_reg: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_ack_o_i_1_n_0,
      Q => \^wb_ack_o\
    );
\wb_dat_o[0]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[0]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[0]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[0]_i_4_n_0\,
      O => wb_dat(0)
    );
\wb_dat_o[0]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(0),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(0),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(0),
      O => \wb_dat_o[0]_i_2_n_0\
    );
\wb_dat_o[0]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_ints(0),
      I1 => p_1_in_0(1),
      I2 => wb_adr_i(1),
      I3 => rgpio_aux(0),
      I4 => wb_adr_i(0),
      I5 => rgpio_ptrig(0),
      O => \wb_dat_o[0]_i_3_n_0\
    );
\wb_dat_o[0]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(0),
      I1 => \^q\(0),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(0),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(0),
      O => \wb_dat_o[0]_i_4_n_0\
    );
\wb_dat_o[10]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[10]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[10]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[10]_i_4_n_0\,
      O => wb_dat(10)
    );
\wb_dat_o[10]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(10),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(10),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(10),
      O => \wb_dat_o[10]_i_2_n_0\
    );
\wb_dat_o[10]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(10),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(10),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(10),
      O => \wb_dat_o[10]_i_3_n_0\
    );
\wb_dat_o[10]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(10),
      I1 => \^q\(10),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(10),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(10),
      O => \wb_dat_o[10]_i_4_n_0\
    );
\wb_dat_o[11]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[11]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[11]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[11]_i_4_n_0\,
      O => wb_dat(11)
    );
\wb_dat_o[11]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(11),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(11),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(11),
      O => \wb_dat_o[11]_i_2_n_0\
    );
\wb_dat_o[11]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(11),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(11),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(11),
      O => \wb_dat_o[11]_i_3_n_0\
    );
\wb_dat_o[11]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(11),
      I1 => \^q\(11),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(11),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(11),
      O => \wb_dat_o[11]_i_4_n_0\
    );
\wb_dat_o[12]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[12]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[12]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[12]_i_4_n_0\,
      O => wb_dat(12)
    );
\wb_dat_o[12]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(12),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(12),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(12),
      O => \wb_dat_o[12]_i_2_n_0\
    );
\wb_dat_o[12]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(12),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(12),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(12),
      O => \wb_dat_o[12]_i_3_n_0\
    );
\wb_dat_o[12]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(12),
      I1 => \^q\(12),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(12),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(12),
      O => \wb_dat_o[12]_i_4_n_0\
    );
\wb_dat_o[13]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[13]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[13]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[13]_i_4_n_0\,
      O => wb_dat(13)
    );
\wb_dat_o[13]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(13),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(13),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(13),
      O => \wb_dat_o[13]_i_2_n_0\
    );
\wb_dat_o[13]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(13),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(13),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(13),
      O => \wb_dat_o[13]_i_3_n_0\
    );
\wb_dat_o[13]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(13),
      I1 => \^q\(13),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(13),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(13),
      O => \wb_dat_o[13]_i_4_n_0\
    );
\wb_dat_o[14]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[14]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[14]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[14]_i_4_n_0\,
      O => wb_dat(14)
    );
\wb_dat_o[14]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(14),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(14),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(14),
      O => \wb_dat_o[14]_i_2_n_0\
    );
\wb_dat_o[14]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(14),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(14),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(14),
      O => \wb_dat_o[14]_i_3_n_0\
    );
\wb_dat_o[14]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(14),
      I1 => \^q\(14),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(14),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(14),
      O => \wb_dat_o[14]_i_4_n_0\
    );
\wb_dat_o[15]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[15]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[15]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[15]_i_4_n_0\,
      O => wb_dat(15)
    );
\wb_dat_o[15]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(15),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(15),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(15),
      O => \wb_dat_o[15]_i_2_n_0\
    );
\wb_dat_o[15]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(15),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(15),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(15),
      O => \wb_dat_o[15]_i_3_n_0\
    );
\wb_dat_o[15]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(15),
      I1 => \^q\(15),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(15),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(15),
      O => \wb_dat_o[15]_i_4_n_0\
    );
\wb_dat_o[16]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[16]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[16]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[16]_i_4_n_0\,
      O => wb_dat(16)
    );
\wb_dat_o[16]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(16),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(16),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(16),
      O => \wb_dat_o[16]_i_2_n_0\
    );
\wb_dat_o[16]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(16),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(16),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(16),
      O => \wb_dat_o[16]_i_3_n_0\
    );
\wb_dat_o[16]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(16),
      I1 => \^q\(16),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(16),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(16),
      O => \wb_dat_o[16]_i_4_n_0\
    );
\wb_dat_o[17]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[17]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[17]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[17]_i_4_n_0\,
      O => wb_dat(17)
    );
\wb_dat_o[17]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(17),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(17),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(17),
      O => \wb_dat_o[17]_i_2_n_0\
    );
\wb_dat_o[17]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(17),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(17),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(17),
      O => \wb_dat_o[17]_i_3_n_0\
    );
\wb_dat_o[17]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(17),
      I1 => \^q\(17),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(17),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(17),
      O => \wb_dat_o[17]_i_4_n_0\
    );
\wb_dat_o[18]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[18]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[18]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[18]_i_4_n_0\,
      O => wb_dat(18)
    );
\wb_dat_o[18]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(18),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(18),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(18),
      O => \wb_dat_o[18]_i_2_n_0\
    );
\wb_dat_o[18]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(18),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(18),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(18),
      O => \wb_dat_o[18]_i_3_n_0\
    );
\wb_dat_o[18]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(18),
      I1 => \^q\(18),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(18),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(18),
      O => \wb_dat_o[18]_i_4_n_0\
    );
\wb_dat_o[19]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[19]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[19]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[19]_i_4_n_0\,
      O => wb_dat(19)
    );
\wb_dat_o[19]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(19),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(19),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(19),
      O => \wb_dat_o[19]_i_2_n_0\
    );
\wb_dat_o[19]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(19),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(19),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(19),
      O => \wb_dat_o[19]_i_3_n_0\
    );
\wb_dat_o[19]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(19),
      I1 => \^q\(19),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(19),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(19),
      O => \wb_dat_o[19]_i_4_n_0\
    );
\wb_dat_o[1]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[1]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[1]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[1]_i_4_n_0\,
      O => wb_dat(1)
    );
\wb_dat_o[1]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(1),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(1),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(1),
      O => \wb_dat_o[1]_i_2_n_0\
    );
\wb_dat_o[1]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_ints(1),
      I1 => p_0_in,
      I2 => wb_adr_i(1),
      I3 => rgpio_aux(1),
      I4 => wb_adr_i(0),
      I5 => rgpio_ptrig(1),
      O => \wb_dat_o[1]_i_3_n_0\
    );
\wb_dat_o[1]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(1),
      I1 => \^q\(1),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(1),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(1),
      O => \wb_dat_o[1]_i_4_n_0\
    );
\wb_dat_o[20]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[20]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[20]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[20]_i_4_n_0\,
      O => wb_dat(20)
    );
\wb_dat_o[20]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(20),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(20),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(20),
      O => \wb_dat_o[20]_i_2_n_0\
    );
\wb_dat_o[20]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(20),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(20),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(20),
      O => \wb_dat_o[20]_i_3_n_0\
    );
\wb_dat_o[20]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(20),
      I1 => \^q\(20),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(20),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(20),
      O => \wb_dat_o[20]_i_4_n_0\
    );
\wb_dat_o[21]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[21]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[21]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[21]_i_4_n_0\,
      O => wb_dat(21)
    );
\wb_dat_o[21]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(21),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(21),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(21),
      O => \wb_dat_o[21]_i_2_n_0\
    );
\wb_dat_o[21]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(21),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(21),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(21),
      O => \wb_dat_o[21]_i_3_n_0\
    );
\wb_dat_o[21]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(21),
      I1 => \^q\(21),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(21),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(21),
      O => \wb_dat_o[21]_i_4_n_0\
    );
\wb_dat_o[22]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[22]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[22]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[22]_i_4_n_0\,
      O => wb_dat(22)
    );
\wb_dat_o[22]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(22),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(22),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(22),
      O => \wb_dat_o[22]_i_2_n_0\
    );
\wb_dat_o[22]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(22),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(22),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(22),
      O => \wb_dat_o[22]_i_3_n_0\
    );
\wb_dat_o[22]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(22),
      I1 => \^q\(22),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(22),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(22),
      O => \wb_dat_o[22]_i_4_n_0\
    );
\wb_dat_o[23]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[23]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[23]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[23]_i_4_n_0\,
      O => wb_dat(23)
    );
\wb_dat_o[23]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(23),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(23),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(23),
      O => \wb_dat_o[23]_i_2_n_0\
    );
\wb_dat_o[23]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(23),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(23),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(23),
      O => \wb_dat_o[23]_i_3_n_0\
    );
\wb_dat_o[23]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(23),
      I1 => \^q\(23),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(23),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(23),
      O => \wb_dat_o[23]_i_4_n_0\
    );
\wb_dat_o[24]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[24]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[24]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[24]_i_4_n_0\,
      O => wb_dat(24)
    );
\wb_dat_o[24]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(24),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(24),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(24),
      O => \wb_dat_o[24]_i_2_n_0\
    );
\wb_dat_o[24]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(24),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(24),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(24),
      O => \wb_dat_o[24]_i_3_n_0\
    );
\wb_dat_o[24]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(24),
      I1 => \^q\(24),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(24),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(24),
      O => \wb_dat_o[24]_i_4_n_0\
    );
\wb_dat_o[25]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[25]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[25]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[25]_i_4_n_0\,
      O => wb_dat(25)
    );
\wb_dat_o[25]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(25),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(25),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(25),
      O => \wb_dat_o[25]_i_2_n_0\
    );
\wb_dat_o[25]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(25),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(25),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(25),
      O => \wb_dat_o[25]_i_3_n_0\
    );
\wb_dat_o[25]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(25),
      I1 => \^q\(25),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(25),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(25),
      O => \wb_dat_o[25]_i_4_n_0\
    );
\wb_dat_o[26]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[26]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[26]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[26]_i_4_n_0\,
      O => wb_dat(26)
    );
\wb_dat_o[26]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(26),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(26),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(26),
      O => \wb_dat_o[26]_i_2_n_0\
    );
\wb_dat_o[26]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(26),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(26),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(26),
      O => \wb_dat_o[26]_i_3_n_0\
    );
\wb_dat_o[26]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(26),
      I1 => \^q\(26),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(26),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(26),
      O => \wb_dat_o[26]_i_4_n_0\
    );
\wb_dat_o[27]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[27]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[27]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[27]_i_4_n_0\,
      O => wb_dat(27)
    );
\wb_dat_o[27]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(27),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(27),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(27),
      O => \wb_dat_o[27]_i_2_n_0\
    );
\wb_dat_o[27]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(27),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(27),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(27),
      O => \wb_dat_o[27]_i_3_n_0\
    );
\wb_dat_o[27]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(27),
      I1 => \^q\(27),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(27),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(27),
      O => \wb_dat_o[27]_i_4_n_0\
    );
\wb_dat_o[28]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[28]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[28]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[28]_i_4_n_0\,
      O => wb_dat(28)
    );
\wb_dat_o[28]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(28),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(28),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(28),
      O => \wb_dat_o[28]_i_2_n_0\
    );
\wb_dat_o[28]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(28),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(28),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(28),
      O => \wb_dat_o[28]_i_3_n_0\
    );
\wb_dat_o[28]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(28),
      I1 => \^q\(28),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(28),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(28),
      O => \wb_dat_o[28]_i_4_n_0\
    );
\wb_dat_o[29]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[29]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[29]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[29]_i_4_n_0\,
      O => wb_dat(29)
    );
\wb_dat_o[29]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(29),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(29),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(29),
      O => \wb_dat_o[29]_i_2_n_0\
    );
\wb_dat_o[29]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(29),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(29),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(29),
      O => \wb_dat_o[29]_i_3_n_0\
    );
\wb_dat_o[29]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(29),
      I1 => \^q\(29),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(29),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(29),
      O => \wb_dat_o[29]_i_4_n_0\
    );
\wb_dat_o[2]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[2]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[2]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[2]_i_4_n_0\,
      O => wb_dat(2)
    );
\wb_dat_o[2]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(2),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(2),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(2),
      O => \wb_dat_o[2]_i_2_n_0\
    );
\wb_dat_o[2]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(2),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(2),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(2),
      O => \wb_dat_o[2]_i_3_n_0\
    );
\wb_dat_o[2]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(2),
      I1 => \^q\(2),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(2),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(2),
      O => \wb_dat_o[2]_i_4_n_0\
    );
\wb_dat_o[30]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[30]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[30]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[30]_i_4_n_0\,
      O => wb_dat(30)
    );
\wb_dat_o[30]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(30),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(30),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(30),
      O => \wb_dat_o[30]_i_2_n_0\
    );
\wb_dat_o[30]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(30),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(30),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(30),
      O => \wb_dat_o[30]_i_3_n_0\
    );
\wb_dat_o[30]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(30),
      I1 => \^q\(30),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(30),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(30),
      O => \wb_dat_o[30]_i_4_n_0\
    );
\wb_dat_o[31]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[31]_i_3_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[31]_i_4_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[31]_i_5_n_0\,
      O => wb_dat(31)
    );
\wb_dat_o[31]_i_2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => wb_rst_i,
      O => wb_rst_n
    );
\wb_dat_o[31]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(31),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(31),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(31),
      O => \wb_dat_o[31]_i_3_n_0\
    );
\wb_dat_o[31]_i_4\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(31),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(31),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(31),
      O => \wb_dat_o[31]_i_4_n_0\
    );
\wb_dat_o[31]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(31),
      I1 => \^q\(31),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(31),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(31),
      O => \wb_dat_o[31]_i_5_n_0\
    );
\wb_dat_o[3]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[3]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[3]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[3]_i_4_n_0\,
      O => wb_dat(3)
    );
\wb_dat_o[3]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(3),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(3),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(3),
      O => \wb_dat_o[3]_i_2_n_0\
    );
\wb_dat_o[3]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(3),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(3),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(3),
      O => \wb_dat_o[3]_i_3_n_0\
    );
\wb_dat_o[3]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(3),
      I1 => \^q\(3),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(3),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(3),
      O => \wb_dat_o[3]_i_4_n_0\
    );
\wb_dat_o[4]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[4]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[4]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[4]_i_4_n_0\,
      O => wb_dat(4)
    );
\wb_dat_o[4]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(4),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(4),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(4),
      O => \wb_dat_o[4]_i_2_n_0\
    );
\wb_dat_o[4]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(4),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(4),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(4),
      O => \wb_dat_o[4]_i_3_n_0\
    );
\wb_dat_o[4]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(4),
      I1 => \^q\(4),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(4),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(4),
      O => \wb_dat_o[4]_i_4_n_0\
    );
\wb_dat_o[5]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[5]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[5]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[5]_i_4_n_0\,
      O => wb_dat(5)
    );
\wb_dat_o[5]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(5),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(5),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(5),
      O => \wb_dat_o[5]_i_2_n_0\
    );
\wb_dat_o[5]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(5),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(5),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(5),
      O => \wb_dat_o[5]_i_3_n_0\
    );
\wb_dat_o[5]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(5),
      I1 => \^q\(5),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(5),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(5),
      O => \wb_dat_o[5]_i_4_n_0\
    );
\wb_dat_o[6]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[6]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[6]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[6]_i_4_n_0\,
      O => wb_dat(6)
    );
\wb_dat_o[6]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(6),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(6),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(6),
      O => \wb_dat_o[6]_i_2_n_0\
    );
\wb_dat_o[6]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(6),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(6),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(6),
      O => \wb_dat_o[6]_i_3_n_0\
    );
\wb_dat_o[6]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(6),
      I1 => \^q\(6),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(6),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(6),
      O => \wb_dat_o[6]_i_4_n_0\
    );
\wb_dat_o[7]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[7]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[7]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[7]_i_4_n_0\,
      O => wb_dat(7)
    );
\wb_dat_o[7]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(7),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(7),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(7),
      O => \wb_dat_o[7]_i_2_n_0\
    );
\wb_dat_o[7]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(7),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(7),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(7),
      O => \wb_dat_o[7]_i_3_n_0\
    );
\wb_dat_o[7]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(7),
      I1 => \^q\(7),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(7),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(7),
      O => \wb_dat_o[7]_i_4_n_0\
    );
\wb_dat_o[8]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[8]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[8]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[8]_i_4_n_0\,
      O => wb_dat(8)
    );
\wb_dat_o[8]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(8),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(8),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(8),
      O => \wb_dat_o[8]_i_2_n_0\
    );
\wb_dat_o[8]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(8),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(8),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(8),
      O => \wb_dat_o[8]_i_3_n_0\
    );
\wb_dat_o[8]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(8),
      I1 => \^q\(8),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(8),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(8),
      O => \wb_dat_o[8]_i_4_n_0\
    );
\wb_dat_o[9]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8BBB888"
    )
        port map (
      I0 => \wb_dat_o[9]_i_2_n_0\,
      I1 => wb_adr_i(3),
      I2 => \wb_dat_o[9]_i_3_n_0\,
      I3 => wb_adr_i(2),
      I4 => \wb_dat_o[9]_i_4_n_0\,
      O => wb_dat(9)
    );
\wb_dat_o[9]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"ABA8ABABABA8A8A8"
    )
        port map (
      I0 => rgpio_in(9),
      I1 => wb_adr_i(1),
      I2 => wb_adr_i(2),
      I3 => rgpio_nec(9),
      I4 => wb_adr_i(0),
      I5 => rgpio_eclk(9),
      O => \wb_dat_o[9]_i_2_n_0\
    );
\wb_dat_o[9]_i_3\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B833B800"
    )
        port map (
      I0 => rgpio_ints(9),
      I1 => wb_adr_i(1),
      I2 => rgpio_aux(9),
      I3 => wb_adr_i(0),
      I4 => rgpio_ptrig(9),
      O => \wb_dat_o[9]_i_3_n_0\
    );
\wb_dat_o[9]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => rgpio_inte(9),
      I1 => \^q\(9),
      I2 => wb_adr_i(1),
      I3 => rgpio_out(9),
      I4 => wb_adr_i(0),
      I5 => rgpio_in(9),
      O => \wb_dat_o[9]_i_4_n_0\
    );
\wb_dat_o_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(0),
      Q => wb_dat_o(0)
    );
\wb_dat_o_reg[10]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(10),
      Q => wb_dat_o(10)
    );
\wb_dat_o_reg[11]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(11),
      Q => wb_dat_o(11)
    );
\wb_dat_o_reg[12]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(12),
      Q => wb_dat_o(12)
    );
\wb_dat_o_reg[13]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(13),
      Q => wb_dat_o(13)
    );
\wb_dat_o_reg[14]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(14),
      Q => wb_dat_o(14)
    );
\wb_dat_o_reg[15]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(15),
      Q => wb_dat_o(15)
    );
\wb_dat_o_reg[16]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(16),
      Q => wb_dat_o(16)
    );
\wb_dat_o_reg[17]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(17),
      Q => wb_dat_o(17)
    );
\wb_dat_o_reg[18]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(18),
      Q => wb_dat_o(18)
    );
\wb_dat_o_reg[19]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(19),
      Q => wb_dat_o(19)
    );
\wb_dat_o_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(1),
      Q => wb_dat_o(1)
    );
\wb_dat_o_reg[20]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(20),
      Q => wb_dat_o(20)
    );
\wb_dat_o_reg[21]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(21),
      Q => wb_dat_o(21)
    );
\wb_dat_o_reg[22]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(22),
      Q => wb_dat_o(22)
    );
\wb_dat_o_reg[23]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(23),
      Q => wb_dat_o(23)
    );
\wb_dat_o_reg[24]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(24),
      Q => wb_dat_o(24)
    );
\wb_dat_o_reg[25]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(25),
      Q => wb_dat_o(25)
    );
\wb_dat_o_reg[26]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(26),
      Q => wb_dat_o(26)
    );
\wb_dat_o_reg[27]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(27),
      Q => wb_dat_o(27)
    );
\wb_dat_o_reg[28]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(28),
      Q => wb_dat_o(28)
    );
\wb_dat_o_reg[29]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(29),
      Q => wb_dat_o(29)
    );
\wb_dat_o_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(2),
      Q => wb_dat_o(2)
    );
\wb_dat_o_reg[30]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(30),
      Q => wb_dat_o(30)
    );
\wb_dat_o_reg[31]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(31),
      Q => wb_dat_o(31)
    );
\wb_dat_o_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(3),
      Q => wb_dat_o(3)
    );
\wb_dat_o_reg[4]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(4),
      Q => wb_dat_o(4)
    );
\wb_dat_o_reg[5]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(5),
      Q => wb_dat_o(5)
    );
\wb_dat_o_reg[6]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(6),
      Q => wb_dat_o(6)
    );
\wb_dat_o_reg[7]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(7),
      Q => wb_dat_o(7)
    );
\wb_dat_o_reg[8]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(8),
      Q => wb_dat_o(8)
    );
\wb_dat_o_reg[9]\: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_dat(9),
      Q => wb_dat_o(9)
    );
wb_inta_o_i_1: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFE0000"
    )
        port map (
      I0 => wb_inta_o_i_2_n_0,
      I1 => wb_inta_o_i_3_n_0,
      I2 => wb_inta_o_i_4_n_0,
      I3 => wb_inta_o_i_5_n_0,
      I4 => p_1_in_0(1),
      O => wb_inta
    );
wb_inta_o_i_2: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFFFFE"
    )
        port map (
      I0 => rgpio_ints(18),
      I1 => rgpio_ints(19),
      I2 => rgpio_ints(16),
      I3 => rgpio_ints(17),
      I4 => wb_inta_o_i_6_n_0,
      O => wb_inta_o_i_2_n_0
    );
wb_inta_o_i_3: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFFFFE"
    )
        port map (
      I0 => rgpio_ints(26),
      I1 => rgpio_ints(27),
      I2 => rgpio_ints(24),
      I3 => rgpio_ints(25),
      I4 => wb_inta_o_i_7_n_0,
      O => wb_inta_o_i_3_n_0
    );
wb_inta_o_i_4: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFFFFE"
    )
        port map (
      I0 => rgpio_ints(2),
      I1 => rgpio_ints(3),
      I2 => rgpio_ints(0),
      I3 => rgpio_ints(1),
      I4 => wb_inta_o_i_8_n_0,
      O => wb_inta_o_i_4_n_0
    );
wb_inta_o_i_5: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFFFFFE"
    )
        port map (
      I0 => rgpio_ints(10),
      I1 => rgpio_ints(11),
      I2 => rgpio_ints(8),
      I3 => rgpio_ints(9),
      I4 => wb_inta_o_i_9_n_0,
      O => wb_inta_o_i_5_n_0
    );
wb_inta_o_i_6: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFE"
    )
        port map (
      I0 => rgpio_ints(21),
      I1 => rgpio_ints(20),
      I2 => rgpio_ints(23),
      I3 => rgpio_ints(22),
      O => wb_inta_o_i_6_n_0
    );
wb_inta_o_i_7: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFE"
    )
        port map (
      I0 => rgpio_ints(29),
      I1 => rgpio_ints(28),
      I2 => rgpio_ints(31),
      I3 => rgpio_ints(30),
      O => wb_inta_o_i_7_n_0
    );
wb_inta_o_i_8: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFE"
    )
        port map (
      I0 => rgpio_ints(5),
      I1 => rgpio_ints(4),
      I2 => rgpio_ints(7),
      I3 => rgpio_ints(6),
      O => wb_inta_o_i_8_n_0
    );
wb_inta_o_i_9: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFE"
    )
        port map (
      I0 => rgpio_ints(13),
      I1 => rgpio_ints(12),
      I2 => rgpio_ints(15),
      I3 => rgpio_ints(14),
      O => wb_inta_o_i_9_n_0
    );
wb_inta_o_reg: unisim.vcomponents.FDCE
     port map (
      C => wb_clk_i,
      CE => '1',
      CLR => wb_rst_n,
      D => wb_inta,
      Q => \^wb_inta_o\
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_gpio_wrapper is
  port (
    wb_ack_o : out STD_LOGIC;
    Q : out STD_LOGIC_VECTOR ( 31 downto 0 );
    wb_inta_o : out STD_LOGIC;
    wb_dat_o : out STD_LOGIC_VECTOR ( 31 downto 0 );
    \ext_pad_o_reg[31]\ : out STD_LOGIC_VECTOR ( 31 downto 0 );
    wb_stb_i : in STD_LOGIC;
    wb_cyc_i : in STD_LOGIC;
    wb_adr_i : in STD_LOGIC_VECTOR ( 3 downto 0 );
    wb_dat_i : in STD_LOGIC_VECTOR ( 31 downto 0 );
    wb_clk_i : in STD_LOGIC;
    D : in STD_LOGIC_VECTOR ( 31 downto 0 );
    wb_we_i : in STD_LOGIC;
    wb_rst_i : in STD_LOGIC
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_gpio_wrapper;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_gpio_wrapper is
begin
gpio: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_gpio_top
     port map (
      D(31 downto 0) => D(31 downto 0),
      Q(31 downto 0) => Q(31 downto 0),
      \ext_pad_o_reg[31]_0\(31 downto 0) => \ext_pad_o_reg[31]\(31 downto 0),
      wb_ack_o => wb_ack_o,
      wb_adr_i(3 downto 0) => wb_adr_i(3 downto 0),
      wb_clk_i => wb_clk_i,
      wb_cyc_i => wb_cyc_i,
      wb_dat_i(31 downto 0) => wb_dat_i(31 downto 0),
      wb_dat_o(31 downto 0) => wb_dat_o(31 downto 0),
      wb_inta_o => wb_inta_o,
      wb_rst_i => wb_rst_i,
      wb_stb_i => wb_stb_i,
      wb_we_i => wb_we_i
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  port (
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
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "BD_gpio_wrapper_0_0,gpio_wrapper,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "module_ref";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "gpio_wrapper,Vivado 2019.2";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  signal \<const0>\ : STD_LOGIC;
begin
  wb_err_o <= \<const0>\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
inst: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_gpio_wrapper
     port map (
      D(31) => outp_31,
      D(30) => outp_30,
      D(29) => outp_29,
      D(28) => outp_28,
      D(27) => outp_27,
      D(26) => outp_26,
      D(25) => outp_25,
      D(24) => outp_24,
      D(23) => outp_23,
      D(22) => outp_22,
      D(21) => outp_21,
      D(20) => outp_20,
      D(19) => outp_19,
      D(18) => outp_18,
      D(17) => outp_17,
      D(16) => outp_16,
      D(15) => outp_15,
      D(14) => outp_14,
      D(13) => outp_13,
      D(12) => outp_12,
      D(11) => outp_11,
      D(10) => outp_10,
      D(9) => outp_9,
      D(8) => outp_8,
      D(7) => outp_7,
      D(6) => outp_6,
      D(5) => outp_5,
      D(4) => outp_4,
      D(3) => outp_3,
      D(2) => outp_2,
      D(1) => outp_1,
      D(0) => outp_0,
      Q(31) => oe_31,
      Q(30) => oe_30,
      Q(29) => oe_29,
      Q(28) => oe_28,
      Q(27) => oe_27,
      Q(26) => oe_26,
      Q(25) => oe_25,
      Q(24) => oe_24,
      Q(23) => oe_23,
      Q(22) => oe_22,
      Q(21) => oe_21,
      Q(20) => oe_20,
      Q(19) => oe_19,
      Q(18) => oe_18,
      Q(17) => oe_17,
      Q(16) => oe_16,
      Q(15) => oe_15,
      Q(14) => oe_14,
      Q(13) => oe_13,
      Q(12) => oe_12,
      Q(11) => oe_11,
      Q(10) => oe_10,
      Q(9) => oe_9,
      Q(8) => oe_8,
      Q(7) => oe_7,
      Q(6) => oe_6,
      Q(5) => oe_5,
      Q(4) => oe_4,
      Q(3) => oe_3,
      Q(2) => oe_2,
      Q(1) => oe_1,
      Q(0) => oe_0,
      \ext_pad_o_reg[31]\(31) => inp_31,
      \ext_pad_o_reg[31]\(30) => inp_30,
      \ext_pad_o_reg[31]\(29) => inp_29,
      \ext_pad_o_reg[31]\(28) => inp_28,
      \ext_pad_o_reg[31]\(27) => inp_27,
      \ext_pad_o_reg[31]\(26) => inp_26,
      \ext_pad_o_reg[31]\(25) => inp_25,
      \ext_pad_o_reg[31]\(24) => inp_24,
      \ext_pad_o_reg[31]\(23) => inp_23,
      \ext_pad_o_reg[31]\(22) => inp_22,
      \ext_pad_o_reg[31]\(21) => inp_21,
      \ext_pad_o_reg[31]\(20) => inp_20,
      \ext_pad_o_reg[31]\(19) => inp_19,
      \ext_pad_o_reg[31]\(18) => inp_18,
      \ext_pad_o_reg[31]\(17) => inp_17,
      \ext_pad_o_reg[31]\(16) => inp_16,
      \ext_pad_o_reg[31]\(15) => inp_15,
      \ext_pad_o_reg[31]\(14) => inp_14,
      \ext_pad_o_reg[31]\(13) => inp_13,
      \ext_pad_o_reg[31]\(12) => inp_12,
      \ext_pad_o_reg[31]\(11) => inp_11,
      \ext_pad_o_reg[31]\(10) => inp_10,
      \ext_pad_o_reg[31]\(9) => inp_9,
      \ext_pad_o_reg[31]\(8) => inp_8,
      \ext_pad_o_reg[31]\(7) => inp_7,
      \ext_pad_o_reg[31]\(6) => inp_6,
      \ext_pad_o_reg[31]\(5) => inp_5,
      \ext_pad_o_reg[31]\(4) => inp_4,
      \ext_pad_o_reg[31]\(3) => inp_3,
      \ext_pad_o_reg[31]\(2) => inp_2,
      \ext_pad_o_reg[31]\(1) => inp_1,
      \ext_pad_o_reg[31]\(0) => inp_0,
      wb_ack_o => wb_ack_o,
      wb_adr_i(3 downto 0) => wb_adr_i(5 downto 2),
      wb_clk_i => wb_clk_i,
      wb_cyc_i => wb_cyc_i,
      wb_dat_i(31 downto 0) => wb_dat_i(31 downto 0),
      wb_dat_o(31 downto 0) => wb_dat_o(31 downto 0),
      wb_inta_o => wb_inta_o,
      wb_rst_i => wb_rst_i,
      wb_stb_i => wb_stb_i,
      wb_we_i => wb_we_i
    );
end STRUCTURE;
