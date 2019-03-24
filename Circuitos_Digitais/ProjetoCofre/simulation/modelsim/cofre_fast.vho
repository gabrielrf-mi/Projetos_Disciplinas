-- Copyright (C) 1991-2013 Altera Corporation
-- Your use of Altera Corporation's design tools, logic functions 
-- and other software and tools, and its AMPP partner logic 
-- functions, and any output files from any of the foregoing 
-- (including device programming or simulation files), and any 
-- associated documentation or information are expressly subject 
-- to the terms and conditions of the Altera Program License 
-- Subscription Agreement, Altera MegaCore Function License 
-- Agreement, or other applicable license agreement, including, 
-- without limitation, that your use is for the sole purpose of 
-- programming logic devices manufactured by Altera and sold by 
-- Altera or its authorized distributors.  Please refer to the 
-- applicable agreement for further details.

-- VENDOR "Altera"
-- PROGRAM "Quartus II 64-Bit"
-- VERSION "Version 13.0.0 Build 156 04/24/2013 SJ Web Edition"

-- DATE "04/25/2018 20:31:00"

-- 
-- Device: Altera EP2C35F672C6 Package FBGA672
-- 

-- 
-- This VHDL file should be used for ModelSim-Altera (VHDL) only
-- 

LIBRARY CYCLONEII;
LIBRARY IEEE;
USE CYCLONEII.CYCLONEII_COMPONENTS.ALL;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY 	cofre IS
    PORT (
	entrada : IN std_logic_vector(7 DOWNTO 0);
	reset : IN std_logic;
	cs : IN std_logic;
	clk : IN std_logic;
	bloq : OUT std_logic;
	abre : OUT std_logic;
	modo : OUT std_logic
	);
END cofre;

-- Design Ports Information
-- bloq	=>  Location: PIN_J11,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: 24mA
-- abre	=>  Location: PIN_C11,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: 24mA
-- modo	=>  Location: PIN_B11,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: 24mA
-- cs	=>  Location: PIN_C13,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
-- entrada[0]	=>  Location: PIN_D13,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
-- entrada[1]	=>  Location: PIN_D12,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
-- entrada[2]	=>  Location: PIN_J14,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
-- entrada[3]	=>  Location: PIN_C12,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
-- entrada[4]	=>  Location: PIN_F12,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
-- entrada[5]	=>  Location: PIN_G12,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
-- entrada[6]	=>  Location: PIN_J10,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
-- entrada[7]	=>  Location: PIN_J13,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
-- clk	=>  Location: PIN_P2,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
-- reset	=>  Location: PIN_B12,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default


ARCHITECTURE structure OF cofre IS
SIGNAL gnd : std_logic := '0';
SIGNAL vcc : std_logic := '1';
SIGNAL unknown : std_logic := 'X';
SIGNAL devoe : std_logic := '1';
SIGNAL devclrn : std_logic := '1';
SIGNAL devpor : std_logic := '1';
SIGNAL ww_devoe : std_logic;
SIGNAL ww_devclrn : std_logic;
SIGNAL ww_devpor : std_logic;
SIGNAL ww_entrada : std_logic_vector(7 DOWNTO 0);
SIGNAL ww_reset : std_logic;
SIGNAL ww_cs : std_logic;
SIGNAL ww_clk : std_logic;
SIGNAL ww_bloq : std_logic;
SIGNAL ww_abre : std_logic;
SIGNAL ww_modo : std_logic;
SIGNAL \clk~clkctrl_INCLK_bus\ : std_logic_vector(3 DOWNTO 0);
SIGNAL \FFD3|QSignal~regout\ : std_logic;
SIGNAL \FFD2|QSignal~regout\ : std_logic;
SIGNAL \QXNOResult~1_combout\ : std_logic;
SIGNAL \FFD2|QSignal~feeder_combout\ : std_logic;
SIGNAL \clk~combout\ : std_logic;
SIGNAL \clk~clkctrl_outclk\ : std_logic;
SIGNAL \cs~combout\ : std_logic;
SIGNAL \FFD1|QSignal~regout\ : std_logic;
SIGNAL \FFD0|QSignal~feeder_combout\ : std_logic;
SIGNAL \FFD0|QSignal~regout\ : std_logic;
SIGNAL \QXNOResult~0_combout\ : std_logic;
SIGNAL \FFD7|QSignal~regout\ : std_logic;
SIGNAL \FFD6|QSignal~regout\ : std_logic;
SIGNAL \FFD5|QSignal~regout\ : std_logic;
SIGNAL \FFD4|QSignal~feeder_combout\ : std_logic;
SIGNAL \FFD4|QSignal~regout\ : std_logic;
SIGNAL \QXNOResult~2_combout\ : std_logic;
SIGNAL \QXNOResult~3_combout\ : std_logic;
SIGNAL \QXNOResult~combout\ : std_logic;
SIGNAL \FFDM0|QSignal~0_combout\ : std_logic;
SIGNAL \reset~combout\ : std_logic;
SIGNAL \FFDM0|QSignal~regout\ : std_logic;
SIGNAL \comb~0_combout\ : std_logic;
SIGNAL \FFD8|QSignal~regout\ : std_logic;
SIGNAL QXNOR : std_logic_vector(7 DOWNTO 0);
SIGNAL \entrada~combout\ : std_logic_vector(7 DOWNTO 0);
SIGNAL \ALT_INV_clk~clkctrl_outclk\ : std_logic;
SIGNAL \ALT_INV_cs~combout\ : std_logic;
SIGNAL \FFD8|ALT_INV_QSignal~regout\ : std_logic;

BEGIN

ww_entrada <= entrada;
ww_reset <= reset;
ww_cs <= cs;
ww_clk <= clk;
bloq <= ww_bloq;
abre <= ww_abre;
modo <= ww_modo;
ww_devoe <= devoe;
ww_devclrn <= devclrn;
ww_devpor <= devpor;

\clk~clkctrl_INCLK_bus\ <= (gnd & gnd & gnd & \clk~combout\);
\ALT_INV_clk~clkctrl_outclk\ <= NOT \clk~clkctrl_outclk\;
\ALT_INV_cs~combout\ <= NOT \cs~combout\;
\FFD8|ALT_INV_QSignal~regout\ <= NOT \FFD8|QSignal~regout\;

-- Location: LCFF_X28_Y35_N11
\FFD3|QSignal\ : cycloneii_lcell_ff
PORT MAP (
	clk => \ALT_INV_clk~clkctrl_outclk\,
	sdata => \entrada~combout\(3),
	aclr => \FFDM0|QSignal~regout\,
	sload => VCC,
	ena => \ALT_INV_cs~combout\,
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	regout => \FFD3|QSignal~regout\);

-- Location: LCFF_X28_Y35_N29
\FFD2|QSignal\ : cycloneii_lcell_ff
PORT MAP (
	clk => \ALT_INV_clk~clkctrl_outclk\,
	datain => \FFD2|QSignal~feeder_combout\,
	aclr => \FFDM0|QSignal~regout\,
	ena => \ALT_INV_cs~combout\,
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	regout => \FFD2|QSignal~regout\);

-- Location: LCCOMB_X28_Y35_N10
\QXNOResult~1\ : cycloneii_lcell_comb
-- Equation(s):
-- \QXNOResult~1_combout\ = (\entrada~combout\(3) & (\FFD3|QSignal~regout\ & (\entrada~combout\(2) $ (!\FFD2|QSignal~regout\)))) # (!\entrada~combout\(3) & (!\FFD3|QSignal~regout\ & (\entrada~combout\(2) $ (!\FFD2|QSignal~regout\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1000010000100001",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \entrada~combout\(3),
	datab => \entrada~combout\(2),
	datac => \FFD3|QSignal~regout\,
	datad => \FFD2|QSignal~regout\,
	combout => \QXNOResult~1_combout\);

-- Location: PIN_J14,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
\entrada[2]~I\ : cycloneii_io
-- pragma translate_off
GENERIC MAP (
	input_async_reset => "none",
	input_power_up => "low",
	input_register_mode => "none",
	input_sync_reset => "none",
	oe_async_reset => "none",
	oe_power_up => "low",
	oe_register_mode => "none",
	oe_sync_reset => "none",
	operation_mode => "input",
	output_async_reset => "none",
	output_power_up => "low",
	output_register_mode => "none",
	output_sync_reset => "none")
-- pragma translate_on
PORT MAP (
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	devoe => ww_devoe,
	oe => GND,
	padio => ww_entrada(2),
	combout => \entrada~combout\(2));

-- Location: PIN_C12,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
\entrada[3]~I\ : cycloneii_io
-- pragma translate_off
GENERIC MAP (
	input_async_reset => "none",
	input_power_up => "low",
	input_register_mode => "none",
	input_sync_reset => "none",
	oe_async_reset => "none",
	oe_power_up => "low",
	oe_register_mode => "none",
	oe_sync_reset => "none",
	operation_mode => "input",
	output_async_reset => "none",
	output_power_up => "low",
	output_register_mode => "none",
	output_sync_reset => "none")
-- pragma translate_on
PORT MAP (
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	devoe => ww_devoe,
	oe => GND,
	padio => ww_entrada(3),
	combout => \entrada~combout\(3));

-- Location: LCCOMB_X28_Y35_N28
\FFD2|QSignal~feeder\ : cycloneii_lcell_comb
-- Equation(s):
-- \FFD2|QSignal~feeder_combout\ = \entrada~combout\(2)

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111111100000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datad => \entrada~combout\(2),
	combout => \FFD2|QSignal~feeder_combout\);

-- Location: PIN_P2,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
\clk~I\ : cycloneii_io
-- pragma translate_off
GENERIC MAP (
	input_async_reset => "none",
	input_power_up => "low",
	input_register_mode => "none",
	input_sync_reset => "none",
	oe_async_reset => "none",
	oe_power_up => "low",
	oe_register_mode => "none",
	oe_sync_reset => "none",
	operation_mode => "input",
	output_async_reset => "none",
	output_power_up => "low",
	output_register_mode => "none",
	output_sync_reset => "none")
-- pragma translate_on
PORT MAP (
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	devoe => ww_devoe,
	oe => GND,
	padio => ww_clk,
	combout => \clk~combout\);

-- Location: CLKCTRL_G3
\clk~clkctrl\ : cycloneii_clkctrl
-- pragma translate_off
GENERIC MAP (
	clock_type => "global clock",
	ena_register_mode => "none")
-- pragma translate_on
PORT MAP (
	inclk => \clk~clkctrl_INCLK_bus\,
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	outclk => \clk~clkctrl_outclk\);

-- Location: PIN_D12,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
\entrada[1]~I\ : cycloneii_io
-- pragma translate_off
GENERIC MAP (
	input_async_reset => "none",
	input_power_up => "low",
	input_register_mode => "none",
	input_sync_reset => "none",
	oe_async_reset => "none",
	oe_power_up => "low",
	oe_register_mode => "none",
	oe_sync_reset => "none",
	operation_mode => "input",
	output_async_reset => "none",
	output_power_up => "low",
	output_register_mode => "none",
	output_sync_reset => "none")
-- pragma translate_on
PORT MAP (
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	devoe => ww_devoe,
	oe => GND,
	padio => ww_entrada(1),
	combout => \entrada~combout\(1));

-- Location: PIN_C13,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
\cs~I\ : cycloneii_io
-- pragma translate_off
GENERIC MAP (
	input_async_reset => "none",
	input_power_up => "low",
	input_register_mode => "none",
	input_sync_reset => "none",
	oe_async_reset => "none",
	oe_power_up => "low",
	oe_register_mode => "none",
	oe_sync_reset => "none",
	operation_mode => "input",
	output_async_reset => "none",
	output_power_up => "low",
	output_register_mode => "none",
	output_sync_reset => "none")
-- pragma translate_on
PORT MAP (
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	devoe => ww_devoe,
	oe => GND,
	padio => ww_cs,
	combout => \cs~combout\);

-- Location: LCFF_X28_Y35_N15
\FFD1|QSignal\ : cycloneii_lcell_ff
PORT MAP (
	clk => \ALT_INV_clk~clkctrl_outclk\,
	sdata => \entrada~combout\(1),
	aclr => \FFDM0|QSignal~regout\,
	sload => VCC,
	ena => \ALT_INV_cs~combout\,
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	regout => \FFD1|QSignal~regout\);

-- Location: PIN_D13,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
\entrada[0]~I\ : cycloneii_io
-- pragma translate_off
GENERIC MAP (
	input_async_reset => "none",
	input_power_up => "low",
	input_register_mode => "none",
	input_sync_reset => "none",
	oe_async_reset => "none",
	oe_power_up => "low",
	oe_register_mode => "none",
	oe_sync_reset => "none",
	operation_mode => "input",
	output_async_reset => "none",
	output_power_up => "low",
	output_register_mode => "none",
	output_sync_reset => "none")
-- pragma translate_on
PORT MAP (
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	devoe => ww_devoe,
	oe => GND,
	padio => ww_entrada(0),
	combout => \entrada~combout\(0));

-- Location: LCCOMB_X28_Y35_N16
\FFD0|QSignal~feeder\ : cycloneii_lcell_comb
-- Equation(s):
-- \FFD0|QSignal~feeder_combout\ = \entrada~combout\(0)

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111111100000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datad => \entrada~combout\(0),
	combout => \FFD0|QSignal~feeder_combout\);

-- Location: LCFF_X28_Y35_N17
\FFD0|QSignal\ : cycloneii_lcell_ff
PORT MAP (
	clk => \ALT_INV_clk~clkctrl_outclk\,
	datain => \FFD0|QSignal~feeder_combout\,
	aclr => \FFDM0|QSignal~regout\,
	ena => \ALT_INV_cs~combout\,
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	regout => \FFD0|QSignal~regout\);

-- Location: LCCOMB_X28_Y35_N14
\QXNOResult~0\ : cycloneii_lcell_comb
-- Equation(s):
-- \QXNOResult~0_combout\ = (\entrada~combout\(0) & (\FFD0|QSignal~regout\ & (\entrada~combout\(1) $ (!\FFD1|QSignal~regout\)))) # (!\entrada~combout\(0) & (!\FFD0|QSignal~regout\ & (\entrada~combout\(1) $ (!\FFD1|QSignal~regout\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1000001001000001",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \entrada~combout\(0),
	datab => \entrada~combout\(1),
	datac => \FFD1|QSignal~regout\,
	datad => \FFD0|QSignal~regout\,
	combout => \QXNOResult~0_combout\);

-- Location: PIN_J13,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
\entrada[7]~I\ : cycloneii_io
-- pragma translate_off
GENERIC MAP (
	input_async_reset => "none",
	input_power_up => "low",
	input_register_mode => "none",
	input_sync_reset => "none",
	oe_async_reset => "none",
	oe_power_up => "low",
	oe_register_mode => "none",
	oe_sync_reset => "none",
	operation_mode => "input",
	output_async_reset => "none",
	output_power_up => "low",
	output_register_mode => "none",
	output_sync_reset => "none")
-- pragma translate_on
PORT MAP (
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	devoe => ww_devoe,
	oe => GND,
	padio => ww_entrada(7),
	combout => \entrada~combout\(7));

-- Location: LCFF_X28_Y35_N1
\FFD7|QSignal\ : cycloneii_lcell_ff
PORT MAP (
	clk => \ALT_INV_clk~clkctrl_outclk\,
	sdata => \entrada~combout\(7),
	aclr => \FFDM0|QSignal~regout\,
	sload => VCC,
	ena => \ALT_INV_cs~combout\,
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	regout => \FFD7|QSignal~regout\);

-- Location: LCCOMB_X28_Y35_N0
\QXNOR[7]\ : cycloneii_lcell_comb
-- Equation(s):
-- QXNOR(7) = \entrada~combout\(7) $ (\FFD7|QSignal~regout\)

-- pragma translate_off
GENERIC MAP (
	lut_mask => "0011110000111100",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \entrada~combout\(7),
	datac => \FFD7|QSignal~regout\,
	combout => QXNOR(7));

-- Location: PIN_J10,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
\entrada[6]~I\ : cycloneii_io
-- pragma translate_off
GENERIC MAP (
	input_async_reset => "none",
	input_power_up => "low",
	input_register_mode => "none",
	input_sync_reset => "none",
	oe_async_reset => "none",
	oe_power_up => "low",
	oe_register_mode => "none",
	oe_sync_reset => "none",
	operation_mode => "input",
	output_async_reset => "none",
	output_power_up => "low",
	output_register_mode => "none",
	output_sync_reset => "none")
-- pragma translate_on
PORT MAP (
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	devoe => ww_devoe,
	oe => GND,
	padio => ww_entrada(6),
	combout => \entrada~combout\(6));

-- Location: LCFF_X28_Y35_N7
\FFD6|QSignal\ : cycloneii_lcell_ff
PORT MAP (
	clk => \ALT_INV_clk~clkctrl_outclk\,
	sdata => \entrada~combout\(6),
	aclr => \FFDM0|QSignal~regout\,
	sload => VCC,
	ena => \ALT_INV_cs~combout\,
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	regout => \FFD6|QSignal~regout\);

-- Location: PIN_F12,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
\entrada[4]~I\ : cycloneii_io
-- pragma translate_off
GENERIC MAP (
	input_async_reset => "none",
	input_power_up => "low",
	input_register_mode => "none",
	input_sync_reset => "none",
	oe_async_reset => "none",
	oe_power_up => "low",
	oe_register_mode => "none",
	oe_sync_reset => "none",
	operation_mode => "input",
	output_async_reset => "none",
	output_power_up => "low",
	output_register_mode => "none",
	output_sync_reset => "none")
-- pragma translate_on
PORT MAP (
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	devoe => ww_devoe,
	oe => GND,
	padio => ww_entrada(4),
	combout => \entrada~combout\(4));

-- Location: PIN_G12,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
\entrada[5]~I\ : cycloneii_io
-- pragma translate_off
GENERIC MAP (
	input_async_reset => "none",
	input_power_up => "low",
	input_register_mode => "none",
	input_sync_reset => "none",
	oe_async_reset => "none",
	oe_power_up => "low",
	oe_register_mode => "none",
	oe_sync_reset => "none",
	operation_mode => "input",
	output_async_reset => "none",
	output_power_up => "low",
	output_register_mode => "none",
	output_sync_reset => "none")
-- pragma translate_on
PORT MAP (
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	devoe => ww_devoe,
	oe => GND,
	padio => ww_entrada(5),
	combout => \entrada~combout\(5));

-- Location: LCFF_X28_Y35_N19
\FFD5|QSignal\ : cycloneii_lcell_ff
PORT MAP (
	clk => \ALT_INV_clk~clkctrl_outclk\,
	sdata => \entrada~combout\(5),
	aclr => \FFDM0|QSignal~regout\,
	sload => VCC,
	ena => \ALT_INV_cs~combout\,
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	regout => \FFD5|QSignal~regout\);

-- Location: LCCOMB_X28_Y35_N12
\FFD4|QSignal~feeder\ : cycloneii_lcell_comb
-- Equation(s):
-- \FFD4|QSignal~feeder_combout\ = \entrada~combout\(4)

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1111111100000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datad => \entrada~combout\(4),
	combout => \FFD4|QSignal~feeder_combout\);

-- Location: LCFF_X28_Y35_N13
\FFD4|QSignal\ : cycloneii_lcell_ff
PORT MAP (
	clk => \ALT_INV_clk~clkctrl_outclk\,
	datain => \FFD4|QSignal~feeder_combout\,
	aclr => \FFDM0|QSignal~regout\,
	ena => \ALT_INV_cs~combout\,
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	regout => \FFD4|QSignal~regout\);

-- Location: LCCOMB_X28_Y35_N18
\QXNOResult~2\ : cycloneii_lcell_comb
-- Equation(s):
-- \QXNOResult~2_combout\ = (\entrada~combout\(5) & (\FFD5|QSignal~regout\ & (\entrada~combout\(4) $ (!\FFD4|QSignal~regout\)))) # (!\entrada~combout\(5) & (!\FFD5|QSignal~regout\ & (\entrada~combout\(4) $ (!\FFD4|QSignal~regout\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1000010000100001",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \entrada~combout\(5),
	datab => \entrada~combout\(4),
	datac => \FFD5|QSignal~regout\,
	datad => \FFD4|QSignal~regout\,
	combout => \QXNOResult~2_combout\);

-- Location: LCCOMB_X28_Y35_N6
\QXNOResult~3\ : cycloneii_lcell_comb
-- Equation(s):
-- \QXNOResult~3_combout\ = (!QXNOR(7) & (\QXNOResult~2_combout\ & (\entrada~combout\(6) $ (!\FFD6|QSignal~regout\))))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "0010000100000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \entrada~combout\(6),
	datab => QXNOR(7),
	datac => \FFD6|QSignal~regout\,
	datad => \QXNOResult~2_combout\,
	combout => \QXNOResult~3_combout\);

-- Location: LCCOMB_X28_Y35_N30
QXNOResult : cycloneii_lcell_comb
-- Equation(s):
-- \QXNOResult~combout\ = (\QXNOResult~1_combout\ & (!\FFDM0|QSignal~regout\ & (\QXNOResult~0_combout\ & \QXNOResult~3_combout\)))

-- pragma translate_off
GENERIC MAP (
	lut_mask => "0010000000000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	dataa => \QXNOResult~1_combout\,
	datab => \FFDM0|QSignal~regout\,
	datac => \QXNOResult~0_combout\,
	datad => \QXNOResult~3_combout\,
	combout => \QXNOResult~combout\);

-- Location: LCCOMB_X28_Y35_N8
\FFDM0|QSignal~0\ : cycloneii_lcell_comb
-- Equation(s):
-- \FFDM0|QSignal~0_combout\ = !\QXNOResult~combout\

-- pragma translate_off
GENERIC MAP (
	lut_mask => "0000000011111111",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datad => \QXNOResult~combout\,
	combout => \FFDM0|QSignal~0_combout\);

-- Location: PIN_B12,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: Default
\reset~I\ : cycloneii_io
-- pragma translate_off
GENERIC MAP (
	input_async_reset => "none",
	input_power_up => "low",
	input_register_mode => "none",
	input_sync_reset => "none",
	oe_async_reset => "none",
	oe_power_up => "low",
	oe_register_mode => "none",
	oe_sync_reset => "none",
	operation_mode => "input",
	output_async_reset => "none",
	output_power_up => "low",
	output_register_mode => "none",
	output_sync_reset => "none")
-- pragma translate_on
PORT MAP (
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	devoe => ww_devoe,
	oe => GND,
	padio => ww_reset,
	combout => \reset~combout\);

-- Location: LCFF_X28_Y35_N9
\FFDM0|QSignal\ : cycloneii_lcell_ff
PORT MAP (
	clk => \ALT_INV_clk~clkctrl_outclk\,
	datain => \FFDM0|QSignal~0_combout\,
	aclr => \reset~combout\,
	ena => \cs~combout\,
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	regout => \FFDM0|QSignal~regout\);

-- Location: LCCOMB_X29_Y35_N0
\comb~0\ : cycloneii_lcell_comb
-- Equation(s):
-- \comb~0_combout\ = (\reset~combout\ & \FFD8|QSignal~regout\)

-- pragma translate_off
GENERIC MAP (
	lut_mask => "1100000011000000",
	sum_lutc_input => "datac")
-- pragma translate_on
PORT MAP (
	datab => \reset~combout\,
	datac => \FFD8|QSignal~regout\,
	combout => \comb~0_combout\);

-- Location: LCFF_X29_Y35_N1
\FFD8|QSignal\ : cycloneii_lcell_ff
PORT MAP (
	clk => \ALT_INV_clk~clkctrl_outclk\,
	sdata => \QXNOResult~combout\,
	aclr => \comb~0_combout\,
	sload => VCC,
	ena => \cs~combout\,
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	regout => \FFD8|QSignal~regout\);

-- Location: PIN_J11,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: 24mA
\bloq~I\ : cycloneii_io
-- pragma translate_off
GENERIC MAP (
	input_async_reset => "none",
	input_power_up => "low",
	input_register_mode => "none",
	input_sync_reset => "none",
	oe_async_reset => "none",
	oe_power_up => "low",
	oe_register_mode => "none",
	oe_sync_reset => "none",
	operation_mode => "output",
	output_async_reset => "none",
	output_power_up => "low",
	output_register_mode => "none",
	output_sync_reset => "none")
-- pragma translate_on
PORT MAP (
	datain => \FFDM0|QSignal~regout\,
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	devoe => ww_devoe,
	oe => VCC,
	padio => ww_bloq);

-- Location: PIN_C11,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: 24mA
\abre~I\ : cycloneii_io
-- pragma translate_off
GENERIC MAP (
	input_async_reset => "none",
	input_power_up => "low",
	input_register_mode => "none",
	input_sync_reset => "none",
	oe_async_reset => "none",
	oe_power_up => "low",
	oe_register_mode => "none",
	oe_sync_reset => "none",
	operation_mode => "output",
	output_async_reset => "none",
	output_power_up => "low",
	output_register_mode => "none",
	output_sync_reset => "none")
-- pragma translate_on
PORT MAP (
	datain => \FFD8|ALT_INV_QSignal~regout\,
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	devoe => ww_devoe,
	oe => VCC,
	padio => ww_abre);

-- Location: PIN_B11,	 I/O Standard: 3.3-V LVTTL,	 Current Strength: 24mA
\modo~I\ : cycloneii_io
-- pragma translate_off
GENERIC MAP (
	input_async_reset => "none",
	input_power_up => "low",
	input_register_mode => "none",
	input_sync_reset => "none",
	oe_async_reset => "none",
	oe_power_up => "low",
	oe_register_mode => "none",
	oe_sync_reset => "none",
	operation_mode => "output",
	output_async_reset => "none",
	output_power_up => "low",
	output_register_mode => "none",
	output_sync_reset => "none")
-- pragma translate_on
PORT MAP (
	datain => \cs~combout\,
	devclrn => ww_devclrn,
	devpor => ww_devpor,
	devoe => ww_devoe,
	oe => VCC,
	padio => ww_modo);
END structure;


