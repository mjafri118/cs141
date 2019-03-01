////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: main_synthesis.v
// /___/   /\     Timestamp: Fri Mar 01 01:36:33 2019
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim main.ngc main_synthesis.v 
// Device	: xc6slx45-3N-csg324
// Input file	: main.ngc
// Output file	: \\vmware-host\shared folders\shared_with_vm\141git\cs141\pa3\lab3_start\netgen\synthesis\main_synthesis.v
// # of Modules	: 1
// Design Name	: main
// Xilinx        : C:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module main (
  rstb_button, button_center, button_down, unbuf_clk, switch, led
);
  input rstb_button;
  input button_center;
  input button_down;
  input unbuf_clk;
  input [7 : 0] switch;
  output [7 : 0] led;
  wire switch_3_IBUF_0;
  wire switch_2_IBUF_1;
  wire switch_1_IBUF_2;
  wire switch_0_IBUF_3;
  wire rstb_button_IBUF_4;
  wire button_center_IBUF_5;
  wire button_down_IBUF_6;
  wire \DEBOUNCE_RSTB/debounced_8 ;
  wire \DEBOUNCE_CENTB/debounced_9 ;
  wire \DEBOUNCE_DOWNB/debounced_10 ;
  wire cclk;
  wire \timer_u/out_reg_3 ;
  wire \timer_u/out_reg_2 ;
  wire \timer_u/out_reg_1 ;
  wire \timer_u/out_reg_0 ;
  wire rst;
  wire \div_1hz/clk_out_17 ;
  wire \CLOCK_GEN/clk180 ;
  wire \CLOCK_GEN/clk0 ;
  wire \CLOCK_GEN/clkin1 ;
  wire \div_1hz/r_count[31]_GND_7_o_equal_1_o ;
  wire \div_1hz/Mcount_r_count_eqn_0 ;
  wire \div_1hz/Mcount_r_count_eqn_1 ;
  wire \div_1hz/Mcount_r_count_eqn_2 ;
  wire \div_1hz/Mcount_r_count_eqn_3 ;
  wire \div_1hz/Mcount_r_count_eqn_4 ;
  wire \div_1hz/Mcount_r_count_eqn_5 ;
  wire \div_1hz/Mcount_r_count_eqn_6 ;
  wire \div_1hz/Mcount_r_count_eqn_7 ;
  wire \div_1hz/Mcount_r_count_eqn_8 ;
  wire \div_1hz/Mcount_r_count_eqn_9 ;
  wire \div_1hz/Mcount_r_count_eqn_10 ;
  wire \div_1hz/Mcount_r_count_eqn_11 ;
  wire \div_1hz/Mcount_r_count_eqn_12 ;
  wire \div_1hz/Mcount_r_count_eqn_13 ;
  wire \div_1hz/Mcount_r_count_eqn_14 ;
  wire \div_1hz/Mcount_r_count_eqn_15 ;
  wire \div_1hz/Mcount_r_count_eqn_16 ;
  wire \div_1hz/Mcount_r_count_eqn_17 ;
  wire \div_1hz/Mcount_r_count_eqn_18 ;
  wire \div_1hz/Mcount_r_count_eqn_19 ;
  wire \div_1hz/Mcount_r_count_eqn_20 ;
  wire \div_1hz/Mcount_r_count_eqn_21 ;
  wire \div_1hz/Mcount_r_count_eqn_22 ;
  wire \div_1hz/Mcount_r_count_eqn_23 ;
  wire \div_1hz/Mcount_r_count_eqn_24 ;
  wire \div_1hz/Mcount_r_count_eqn_25 ;
  wire \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ;
  wire \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<3>_127 ;
  wire \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<3> ;
  wire \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi3 ;
  wire \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<2>_130 ;
  wire \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<2>_131 ;
  wire \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi2_132 ;
  wire \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<1>_133 ;
  wire \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<1>_134 ;
  wire \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi1_135 ;
  wire \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<0>_136 ;
  wire \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<0>_137 ;
  wire \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi_138 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter23 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter22 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter21 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter20 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter19 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter18 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter17 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter16 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter15 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter14 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter13 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter12 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter11 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter10 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter9 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter8 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter7 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter6 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter5 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter4 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter3 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter2 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter1 ;
  wire \DEBOUNCE_DOWNB/Mcount_counter ;
  wire \DEBOUNCE_DOWNB/counter[31]_GND_2_o_LessThan_2_o_inv_inv ;
  wire \DEBOUNCE_DOWNB/Mcount_counter_val ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<3>_241 ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<3> ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi3 ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<2>_244 ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<2>_245 ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi2_246 ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<1>_247 ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<1>_248 ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi1_249 ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<0>_250 ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<0>_251 ;
  wire \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi_252 ;
  wire \DEBOUNCE_CENTB/Mcount_counter23 ;
  wire \DEBOUNCE_CENTB/Mcount_counter22 ;
  wire \DEBOUNCE_CENTB/Mcount_counter21 ;
  wire \DEBOUNCE_CENTB/Mcount_counter20 ;
  wire \DEBOUNCE_CENTB/Mcount_counter19 ;
  wire \DEBOUNCE_CENTB/Mcount_counter18 ;
  wire \DEBOUNCE_CENTB/Mcount_counter17 ;
  wire \DEBOUNCE_CENTB/Mcount_counter16 ;
  wire \DEBOUNCE_CENTB/Mcount_counter15 ;
  wire \DEBOUNCE_CENTB/Mcount_counter14 ;
  wire \DEBOUNCE_CENTB/Mcount_counter13 ;
  wire \DEBOUNCE_CENTB/Mcount_counter12 ;
  wire \DEBOUNCE_CENTB/Mcount_counter11 ;
  wire \DEBOUNCE_CENTB/Mcount_counter10 ;
  wire \DEBOUNCE_CENTB/Mcount_counter9 ;
  wire \DEBOUNCE_CENTB/Mcount_counter8 ;
  wire \DEBOUNCE_CENTB/Mcount_counter7 ;
  wire \DEBOUNCE_CENTB/Mcount_counter6 ;
  wire \DEBOUNCE_CENTB/Mcount_counter5 ;
  wire \DEBOUNCE_CENTB/Mcount_counter4 ;
  wire \DEBOUNCE_CENTB/Mcount_counter3 ;
  wire \DEBOUNCE_CENTB/Mcount_counter2 ;
  wire \DEBOUNCE_CENTB/Mcount_counter1 ;
  wire \DEBOUNCE_CENTB/Mcount_counter ;
  wire \DEBOUNCE_CENTB/counter[31]_GND_2_o_LessThan_2_o_inv_inv ;
  wire \DEBOUNCE_CENTB/Mcount_counter_val ;
  wire \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ;
  wire \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<3>_353 ;
  wire \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<3> ;
  wire \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi3 ;
  wire \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<2>_356 ;
  wire \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<2>_357 ;
  wire \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi2_358 ;
  wire \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<1>_359 ;
  wire \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<1>_360 ;
  wire \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi1_361 ;
  wire \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<0>_362 ;
  wire \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<0>_363 ;
  wire \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi_364 ;
  wire \DEBOUNCE_RSTB/Mcount_counter23 ;
  wire \DEBOUNCE_RSTB/Mcount_counter22 ;
  wire \DEBOUNCE_RSTB/Mcount_counter21 ;
  wire \DEBOUNCE_RSTB/Mcount_counter20 ;
  wire \DEBOUNCE_RSTB/Mcount_counter19 ;
  wire \DEBOUNCE_RSTB/Mcount_counter18 ;
  wire \DEBOUNCE_RSTB/Mcount_counter17 ;
  wire \DEBOUNCE_RSTB/Mcount_counter16 ;
  wire \DEBOUNCE_RSTB/Mcount_counter15 ;
  wire \DEBOUNCE_RSTB/Mcount_counter14 ;
  wire \DEBOUNCE_RSTB/Mcount_counter13 ;
  wire \DEBOUNCE_RSTB/Mcount_counter12 ;
  wire \DEBOUNCE_RSTB/Mcount_counter11 ;
  wire \DEBOUNCE_RSTB/Mcount_counter10 ;
  wire \DEBOUNCE_RSTB/Mcount_counter9 ;
  wire \DEBOUNCE_RSTB/Mcount_counter8 ;
  wire \DEBOUNCE_RSTB/Mcount_counter7 ;
  wire \DEBOUNCE_RSTB/Mcount_counter6 ;
  wire \DEBOUNCE_RSTB/Mcount_counter5 ;
  wire \DEBOUNCE_RSTB/Mcount_counter4 ;
  wire \DEBOUNCE_RSTB/Mcount_counter3 ;
  wire \DEBOUNCE_RSTB/Mcount_counter2 ;
  wire \DEBOUNCE_RSTB/Mcount_counter1 ;
  wire \DEBOUNCE_RSTB/Mcount_counter ;
  wire \DEBOUNCE_RSTB/counter[31]_GND_2_o_LessThan_2_o_inv_inv ;
  wire \DEBOUNCE_RSTB/Mcount_counter_val ;
  wire \timer_u/rst_init[0]_AND_8_o ;
  wire \timer_u/rst_init[0]_AND_7_o ;
  wire \timer_u/rst_init[1]_AND_6_o ;
  wire \timer_u/rst_init[1]_AND_5_o ;
  wire \timer_u/rst_init[2]_AND_4_o ;
  wire \timer_u/rst_init[2]_AND_3_o ;
  wire \timer_u/rst_init[3]_AND_2_o ;
  wire \timer_u/rst_init[3]_AND_1_o ;
  wire \timer_u/out_reg[3]_init[3]_mux_6_OUT<0> ;
  wire \timer_u/out_reg[3]_init[3]_mux_6_OUT<1> ;
  wire \timer_u/out_reg[3]_init[3]_mux_6_OUT<2> ;
  wire \timer_u/out_reg[3]_init[3]_mux_6_OUT<3> ;
  wire \div_1hz/r_count[31]_GND_7_o_equal_1_o<31> ;
  wire \div_1hz/r_count[31]_GND_7_o_equal_1_o<31>1_481 ;
  wire \div_1hz/r_count[31]_GND_7_o_equal_1_o<31>2_482 ;
  wire \div_1hz/r_count[31]_GND_7_o_equal_1_o<31>3_483 ;
  wire \div_1hz/Mcount_r_count_cy<1>_rt_499 ;
  wire \div_1hz/Mcount_r_count_cy<2>_rt_500 ;
  wire \div_1hz/Mcount_r_count_cy<3>_rt_501 ;
  wire \div_1hz/Mcount_r_count_cy<4>_rt_502 ;
  wire \div_1hz/Mcount_r_count_cy<5>_rt_503 ;
  wire \div_1hz/Mcount_r_count_cy<6>_rt_504 ;
  wire \div_1hz/Mcount_r_count_cy<7>_rt_505 ;
  wire \div_1hz/Mcount_r_count_cy<8>_rt_506 ;
  wire \div_1hz/Mcount_r_count_cy<9>_rt_507 ;
  wire \div_1hz/Mcount_r_count_cy<10>_rt_508 ;
  wire \div_1hz/Mcount_r_count_cy<11>_rt_509 ;
  wire \div_1hz/Mcount_r_count_cy<12>_rt_510 ;
  wire \div_1hz/Mcount_r_count_cy<13>_rt_511 ;
  wire \div_1hz/Mcount_r_count_cy<14>_rt_512 ;
  wire \div_1hz/Mcount_r_count_cy<15>_rt_513 ;
  wire \div_1hz/Mcount_r_count_cy<16>_rt_514 ;
  wire \div_1hz/Mcount_r_count_cy<17>_rt_515 ;
  wire \div_1hz/Mcount_r_count_cy<18>_rt_516 ;
  wire \div_1hz/Mcount_r_count_cy<19>_rt_517 ;
  wire \div_1hz/Mcount_r_count_cy<20>_rt_518 ;
  wire \div_1hz/Mcount_r_count_cy<21>_rt_519 ;
  wire \div_1hz/Mcount_r_count_cy<22>_rt_520 ;
  wire \div_1hz/Mcount_r_count_cy<23>_rt_521 ;
  wire \div_1hz/Mcount_r_count_cy<24>_rt_522 ;
  wire \div_1hz/Mcount_r_count_xor<25>_rt_523 ;
  wire \div_1hz/clk_out_rstpot_524 ;
  wire \DEBOUNCE_DOWNB/debounced_rstpot_525 ;
  wire \DEBOUNCE_CENTB/debounced_rstpot_526 ;
  wire \DEBOUNCE_RSTB/debounced_rstpot_527 ;
  wire \timer_u/out_reg_0_LDC_528 ;
  wire \timer_u/out_reg_0_C_0_529 ;
  wire \timer_u/out_reg_0_P_0_530 ;
  wire \timer_u/out_reg_1_LDC_531 ;
  wire \timer_u/out_reg_1_C_1_532 ;
  wire \timer_u/out_reg_1_P_1_533 ;
  wire \timer_u/out_reg_2_LDC_534 ;
  wire \timer_u/out_reg_2_C_2_535 ;
  wire \timer_u/out_reg_2_P_2_536 ;
  wire \timer_u/out_reg_3_LDC_537 ;
  wire \timer_u/out_reg_3_C_3_538 ;
  wire \timer_u/out_reg_3_P_3_539 ;
  wire \div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 ;
  wire \NLW_CLOCK_GEN/clkout2_buf_O_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_CLK2X180_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_CLK2X_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_CLKFX_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_CLK270_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_CLKFX180_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_CLKDV_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_PSDONE_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_CLK90_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_LOCKED_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_STATUS<7>_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_STATUS<6>_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_STATUS<5>_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_STATUS<4>_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_STATUS<3>_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_STATUS<2>_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_STATUS<1>_UNCONNECTED ;
  wire \NLW_CLOCK_GEN/dcm_sp_inst_STATUS<0>_UNCONNECTED ;
  wire [25 : 0] \div_1hz/r_count ;
  wire [25 : 0] Result;
  wire [0 : 0] \div_1hz/Mcount_r_count_lut ;
  wire [24 : 0] \div_1hz/Mcount_r_count_cy ;
  wire [23 : 0] \DEBOUNCE_DOWNB/Mcount_counter_lut ;
  wire [22 : 0] \DEBOUNCE_DOWNB/Mcount_counter_cy ;
  wire [23 : 0] \DEBOUNCE_DOWNB/counter ;
  wire [1 : 0] \DEBOUNCE_DOWNB/shift_in ;
  wire [23 : 0] \DEBOUNCE_CENTB/Mcount_counter_lut ;
  wire [22 : 0] \DEBOUNCE_CENTB/Mcount_counter_cy ;
  wire [23 : 0] \DEBOUNCE_CENTB/counter ;
  wire [1 : 0] \DEBOUNCE_CENTB/shift_in ;
  wire [23 : 0] \DEBOUNCE_RSTB/Mcount_counter_lut ;
  wire [22 : 0] \DEBOUNCE_RSTB/Mcount_counter_cy ;
  wire [23 : 0] \DEBOUNCE_RSTB/counter ;
  wire [1 : 0] \DEBOUNCE_RSTB/shift_in ;
  wire [3 : 0] \timer_u/out_next ;
  VCC   XST_VCC (
    .P(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> )
  );
  GND   XST_GND (
    .G(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 )
  );
  FDC   \div_1hz/r_count_0  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_0 ),
    .Q(\div_1hz/r_count [0])
  );
  FDC   \div_1hz/r_count_1  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_1 ),
    .Q(\div_1hz/r_count [1])
  );
  FDC   \div_1hz/r_count_2  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_2 ),
    .Q(\div_1hz/r_count [2])
  );
  FDC   \div_1hz/r_count_3  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_3 ),
    .Q(\div_1hz/r_count [3])
  );
  FDC   \div_1hz/r_count_4  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_4 ),
    .Q(\div_1hz/r_count [4])
  );
  FDC   \div_1hz/r_count_5  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_5 ),
    .Q(\div_1hz/r_count [5])
  );
  FDC   \div_1hz/r_count_6  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_6 ),
    .Q(\div_1hz/r_count [6])
  );
  FDC   \div_1hz/r_count_7  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_7 ),
    .Q(\div_1hz/r_count [7])
  );
  FDC   \div_1hz/r_count_8  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_8 ),
    .Q(\div_1hz/r_count [8])
  );
  FDC   \div_1hz/r_count_9  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_9 ),
    .Q(\div_1hz/r_count [9])
  );
  FDC   \div_1hz/r_count_10  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_10 ),
    .Q(\div_1hz/r_count [10])
  );
  FDC   \div_1hz/r_count_11  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_11 ),
    .Q(\div_1hz/r_count [11])
  );
  FDC   \div_1hz/r_count_12  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_12 ),
    .Q(\div_1hz/r_count [12])
  );
  FDC   \div_1hz/r_count_13  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_13 ),
    .Q(\div_1hz/r_count [13])
  );
  FDC   \div_1hz/r_count_14  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_14 ),
    .Q(\div_1hz/r_count [14])
  );
  FDC   \div_1hz/r_count_15  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_15 ),
    .Q(\div_1hz/r_count [15])
  );
  FDC   \div_1hz/r_count_16  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_16 ),
    .Q(\div_1hz/r_count [16])
  );
  FDC   \div_1hz/r_count_17  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_17 ),
    .Q(\div_1hz/r_count [17])
  );
  FDC   \div_1hz/r_count_18  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_18 ),
    .Q(\div_1hz/r_count [18])
  );
  FDC   \div_1hz/r_count_19  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_19 ),
    .Q(\div_1hz/r_count [19])
  );
  FDC   \div_1hz/r_count_20  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_20 ),
    .Q(\div_1hz/r_count [20])
  );
  FDC   \div_1hz/r_count_21  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_21 ),
    .Q(\div_1hz/r_count [21])
  );
  FDC   \div_1hz/r_count_22  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_22 ),
    .Q(\div_1hz/r_count [22])
  );
  FDC   \div_1hz/r_count_23  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_23 ),
    .Q(\div_1hz/r_count [23])
  );
  FDC   \div_1hz/r_count_24  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_24 ),
    .Q(\div_1hz/r_count [24])
  );
  FDC   \div_1hz/r_count_25  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/Mcount_r_count_eqn_25 ),
    .Q(\div_1hz/r_count [25])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<0>  (
    .CI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .S(\div_1hz/Mcount_r_count_lut [0]),
    .O(\div_1hz/Mcount_r_count_cy [0])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<0>  (
    .CI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .LI(\div_1hz/Mcount_r_count_lut [0]),
    .O(Result[0])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<1>  (
    .CI(\div_1hz/Mcount_r_count_cy [0]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<1>_rt_499 ),
    .O(\div_1hz/Mcount_r_count_cy [1])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<1>  (
    .CI(\div_1hz/Mcount_r_count_cy [0]),
    .LI(\div_1hz/Mcount_r_count_cy<1>_rt_499 ),
    .O(Result[1])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<2>  (
    .CI(\div_1hz/Mcount_r_count_cy [1]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<2>_rt_500 ),
    .O(\div_1hz/Mcount_r_count_cy [2])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<2>  (
    .CI(\div_1hz/Mcount_r_count_cy [1]),
    .LI(\div_1hz/Mcount_r_count_cy<2>_rt_500 ),
    .O(Result[2])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<3>  (
    .CI(\div_1hz/Mcount_r_count_cy [2]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<3>_rt_501 ),
    .O(\div_1hz/Mcount_r_count_cy [3])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<3>  (
    .CI(\div_1hz/Mcount_r_count_cy [2]),
    .LI(\div_1hz/Mcount_r_count_cy<3>_rt_501 ),
    .O(Result[3])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<4>  (
    .CI(\div_1hz/Mcount_r_count_cy [3]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<4>_rt_502 ),
    .O(\div_1hz/Mcount_r_count_cy [4])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<4>  (
    .CI(\div_1hz/Mcount_r_count_cy [3]),
    .LI(\div_1hz/Mcount_r_count_cy<4>_rt_502 ),
    .O(Result[4])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<5>  (
    .CI(\div_1hz/Mcount_r_count_cy [4]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<5>_rt_503 ),
    .O(\div_1hz/Mcount_r_count_cy [5])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<5>  (
    .CI(\div_1hz/Mcount_r_count_cy [4]),
    .LI(\div_1hz/Mcount_r_count_cy<5>_rt_503 ),
    .O(Result[5])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<6>  (
    .CI(\div_1hz/Mcount_r_count_cy [5]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<6>_rt_504 ),
    .O(\div_1hz/Mcount_r_count_cy [6])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<6>  (
    .CI(\div_1hz/Mcount_r_count_cy [5]),
    .LI(\div_1hz/Mcount_r_count_cy<6>_rt_504 ),
    .O(Result[6])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<7>  (
    .CI(\div_1hz/Mcount_r_count_cy [6]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<7>_rt_505 ),
    .O(\div_1hz/Mcount_r_count_cy [7])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<7>  (
    .CI(\div_1hz/Mcount_r_count_cy [6]),
    .LI(\div_1hz/Mcount_r_count_cy<7>_rt_505 ),
    .O(Result[7])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<8>  (
    .CI(\div_1hz/Mcount_r_count_cy [7]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<8>_rt_506 ),
    .O(\div_1hz/Mcount_r_count_cy [8])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<8>  (
    .CI(\div_1hz/Mcount_r_count_cy [7]),
    .LI(\div_1hz/Mcount_r_count_cy<8>_rt_506 ),
    .O(Result[8])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<9>  (
    .CI(\div_1hz/Mcount_r_count_cy [8]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<9>_rt_507 ),
    .O(\div_1hz/Mcount_r_count_cy [9])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<9>  (
    .CI(\div_1hz/Mcount_r_count_cy [8]),
    .LI(\div_1hz/Mcount_r_count_cy<9>_rt_507 ),
    .O(Result[9])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<10>  (
    .CI(\div_1hz/Mcount_r_count_cy [9]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<10>_rt_508 ),
    .O(\div_1hz/Mcount_r_count_cy [10])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<10>  (
    .CI(\div_1hz/Mcount_r_count_cy [9]),
    .LI(\div_1hz/Mcount_r_count_cy<10>_rt_508 ),
    .O(Result[10])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<11>  (
    .CI(\div_1hz/Mcount_r_count_cy [10]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<11>_rt_509 ),
    .O(\div_1hz/Mcount_r_count_cy [11])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<11>  (
    .CI(\div_1hz/Mcount_r_count_cy [10]),
    .LI(\div_1hz/Mcount_r_count_cy<11>_rt_509 ),
    .O(Result[11])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<12>  (
    .CI(\div_1hz/Mcount_r_count_cy [11]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<12>_rt_510 ),
    .O(\div_1hz/Mcount_r_count_cy [12])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<12>  (
    .CI(\div_1hz/Mcount_r_count_cy [11]),
    .LI(\div_1hz/Mcount_r_count_cy<12>_rt_510 ),
    .O(Result[12])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<13>  (
    .CI(\div_1hz/Mcount_r_count_cy [12]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<13>_rt_511 ),
    .O(\div_1hz/Mcount_r_count_cy [13])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<13>  (
    .CI(\div_1hz/Mcount_r_count_cy [12]),
    .LI(\div_1hz/Mcount_r_count_cy<13>_rt_511 ),
    .O(Result[13])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<14>  (
    .CI(\div_1hz/Mcount_r_count_cy [13]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<14>_rt_512 ),
    .O(\div_1hz/Mcount_r_count_cy [14])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<14>  (
    .CI(\div_1hz/Mcount_r_count_cy [13]),
    .LI(\div_1hz/Mcount_r_count_cy<14>_rt_512 ),
    .O(Result[14])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<15>  (
    .CI(\div_1hz/Mcount_r_count_cy [14]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<15>_rt_513 ),
    .O(\div_1hz/Mcount_r_count_cy [15])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<15>  (
    .CI(\div_1hz/Mcount_r_count_cy [14]),
    .LI(\div_1hz/Mcount_r_count_cy<15>_rt_513 ),
    .O(Result[15])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<16>  (
    .CI(\div_1hz/Mcount_r_count_cy [15]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<16>_rt_514 ),
    .O(\div_1hz/Mcount_r_count_cy [16])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<16>  (
    .CI(\div_1hz/Mcount_r_count_cy [15]),
    .LI(\div_1hz/Mcount_r_count_cy<16>_rt_514 ),
    .O(Result[16])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<17>  (
    .CI(\div_1hz/Mcount_r_count_cy [16]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<17>_rt_515 ),
    .O(\div_1hz/Mcount_r_count_cy [17])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<17>  (
    .CI(\div_1hz/Mcount_r_count_cy [16]),
    .LI(\div_1hz/Mcount_r_count_cy<17>_rt_515 ),
    .O(Result[17])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<18>  (
    .CI(\div_1hz/Mcount_r_count_cy [17]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<18>_rt_516 ),
    .O(\div_1hz/Mcount_r_count_cy [18])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<18>  (
    .CI(\div_1hz/Mcount_r_count_cy [17]),
    .LI(\div_1hz/Mcount_r_count_cy<18>_rt_516 ),
    .O(Result[18])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<19>  (
    .CI(\div_1hz/Mcount_r_count_cy [18]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<19>_rt_517 ),
    .O(\div_1hz/Mcount_r_count_cy [19])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<19>  (
    .CI(\div_1hz/Mcount_r_count_cy [18]),
    .LI(\div_1hz/Mcount_r_count_cy<19>_rt_517 ),
    .O(Result[19])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<20>  (
    .CI(\div_1hz/Mcount_r_count_cy [19]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<20>_rt_518 ),
    .O(\div_1hz/Mcount_r_count_cy [20])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<20>  (
    .CI(\div_1hz/Mcount_r_count_cy [19]),
    .LI(\div_1hz/Mcount_r_count_cy<20>_rt_518 ),
    .O(Result[20])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<21>  (
    .CI(\div_1hz/Mcount_r_count_cy [20]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<21>_rt_519 ),
    .O(\div_1hz/Mcount_r_count_cy [21])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<21>  (
    .CI(\div_1hz/Mcount_r_count_cy [20]),
    .LI(\div_1hz/Mcount_r_count_cy<21>_rt_519 ),
    .O(Result[21])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<22>  (
    .CI(\div_1hz/Mcount_r_count_cy [21]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<22>_rt_520 ),
    .O(\div_1hz/Mcount_r_count_cy [22])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<22>  (
    .CI(\div_1hz/Mcount_r_count_cy [21]),
    .LI(\div_1hz/Mcount_r_count_cy<22>_rt_520 ),
    .O(Result[22])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<23>  (
    .CI(\div_1hz/Mcount_r_count_cy [22]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<23>_rt_521 ),
    .O(\div_1hz/Mcount_r_count_cy [23])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<23>  (
    .CI(\div_1hz/Mcount_r_count_cy [22]),
    .LI(\div_1hz/Mcount_r_count_cy<23>_rt_521 ),
    .O(Result[23])
  );
  MUXCY   \div_1hz/Mcount_r_count_cy<24>  (
    .CI(\div_1hz/Mcount_r_count_cy [23]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\div_1hz/Mcount_r_count_cy<24>_rt_522 ),
    .O(\div_1hz/Mcount_r_count_cy [24])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<24>  (
    .CI(\div_1hz/Mcount_r_count_cy [23]),
    .LI(\div_1hz/Mcount_r_count_cy<24>_rt_522 ),
    .O(Result[24])
  );
  XORCY   \div_1hz/Mcount_r_count_xor<25>  (
    .CI(\div_1hz/Mcount_r_count_cy [24]),
    .LI(\div_1hz/Mcount_r_count_xor<25>_rt_523 ),
    .O(Result[25])
  );
  BUFG   \CLOCK_GEN/clkout2_buf  (
    .O(\NLW_CLOCK_GEN/clkout2_buf_O_UNCONNECTED ),
    .I(\CLOCK_GEN/clk180 )
  );
  BUFG   \CLOCK_GEN/clkout1_buf  (
    .O(cclk),
    .I(\CLOCK_GEN/clk0 )
  );
  DCM_SP #(
    .CLKIN_DIVIDE_BY_2 ( "FALSE" ),
    .CLKOUT_PHASE_SHIFT ( "NONE" ),
    .CLK_FEEDBACK ( "1X" ),
    .DESKEW_ADJUST ( "SYSTEM_SYNCHRONOUS" ),
    .DFS_FREQUENCY_MODE ( "LOW" ),
    .DLL_FREQUENCY_MODE ( "LOW" ),
    .DSS_MODE ( "NONE" ),
    .DUTY_CYCLE_CORRECTION ( "TRUE" ),
    .FACTORY_JF ( 16'h0000 ),
    .STARTUP_WAIT ( "FALSE" ),
    .CLKFX_DIVIDE ( 1 ),
    .CLKFX_MULTIPLY ( 4 ),
    .PHASE_SHIFT ( 0 ),
    .CLKDV_DIVIDE ( 2.000000 ),
    .CLKIN_PERIOD ( 10.000000 ))
  \CLOCK_GEN/dcm_sp_inst  (
    .CLK2X180(\NLW_CLOCK_GEN/dcm_sp_inst_CLK2X180_UNCONNECTED ),
    .PSCLK(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .CLK2X(\NLW_CLOCK_GEN/dcm_sp_inst_CLK2X_UNCONNECTED ),
    .CLKFX(\NLW_CLOCK_GEN/dcm_sp_inst_CLKFX_UNCONNECTED ),
    .CLK180(\CLOCK_GEN/clk180 ),
    .CLK270(\NLW_CLOCK_GEN/dcm_sp_inst_CLK270_UNCONNECTED ),
    .RST(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .PSINCDEC(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .CLKIN(\CLOCK_GEN/clkin1 ),
    .CLKFB(cclk),
    .PSEN(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .CLK0(\CLOCK_GEN/clk0 ),
    .CLKFX180(\NLW_CLOCK_GEN/dcm_sp_inst_CLKFX180_UNCONNECTED ),
    .CLKDV(\NLW_CLOCK_GEN/dcm_sp_inst_CLKDV_UNCONNECTED ),
    .PSDONE(\NLW_CLOCK_GEN/dcm_sp_inst_PSDONE_UNCONNECTED ),
    .CLK90(\NLW_CLOCK_GEN/dcm_sp_inst_CLK90_UNCONNECTED ),
    .LOCKED(\NLW_CLOCK_GEN/dcm_sp_inst_LOCKED_UNCONNECTED ),
    .DSSEN(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .STATUS({\NLW_CLOCK_GEN/dcm_sp_inst_STATUS<7>_UNCONNECTED , \NLW_CLOCK_GEN/dcm_sp_inst_STATUS<6>_UNCONNECTED , 
\NLW_CLOCK_GEN/dcm_sp_inst_STATUS<5>_UNCONNECTED , \NLW_CLOCK_GEN/dcm_sp_inst_STATUS<4>_UNCONNECTED , 
\NLW_CLOCK_GEN/dcm_sp_inst_STATUS<3>_UNCONNECTED , \NLW_CLOCK_GEN/dcm_sp_inst_STATUS<2>_UNCONNECTED , 
\NLW_CLOCK_GEN/dcm_sp_inst_STATUS<1>_UNCONNECTED , \NLW_CLOCK_GEN/dcm_sp_inst_STATUS<0>_UNCONNECTED })
  );
  IBUFG #(
    .CAPACITANCE ( "DONT_CARE" ),
    .IBUF_DELAY_VALUE ( "0" ),
    .IBUF_LOW_PWR ( "TRUE" ),
    .IOSTANDARD ( "DEFAULT" ))
  \CLOCK_GEN/clkin1_buf  (
    .I(unbuf_clk),
    .O(\CLOCK_GEN/clkin1 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>  (
    .CI(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<3>_127 ),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .S(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .O(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<3>  (
    .CI(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<2>_130 ),
    .DI(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi3 ),
    .S(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<3> ),
    .O(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<3>_127 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<2>  (
    .CI(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<1>_133 ),
    .DI(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi2_132 ),
    .S(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<2>_131 ),
    .O(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<2>_130 )
  );
  LUT5 #(
    .INIT ( 32'h00000400 ))
  \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<2>  (
    .I0(\DEBOUNCE_DOWNB/counter [17]),
    .I1(\DEBOUNCE_DOWNB/counter [19]),
    .I2(\DEBOUNCE_DOWNB/counter [18]),
    .I3(\DEBOUNCE_DOWNB/counter [20]),
    .I4(\DEBOUNCE_DOWNB/counter [21]),
    .O(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<2>_131 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<1>  (
    .CI(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<0>_136 ),
    .DI(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi1_135 ),
    .S(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<1>_134 ),
    .O(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<1>_133 )
  );
  LUT5 #(
    .INIT ( 32'h00000400 ))
  \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<1>  (
    .I0(\DEBOUNCE_DOWNB/counter [13]),
    .I1(\DEBOUNCE_DOWNB/counter [12]),
    .I2(\DEBOUNCE_DOWNB/counter [14]),
    .I3(\DEBOUNCE_DOWNB/counter [15]),
    .I4(\DEBOUNCE_DOWNB/counter [16]),
    .O(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<1>_134 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<0>  (
    .CI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .DI(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi_138 ),
    .S(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<0>_137 ),
    .O(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<0>_136 )
  );
  LUT5 #(
    .INIT ( 32'h00004000 ))
  \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<0>  (
    .I0(\DEBOUNCE_DOWNB/counter [8]),
    .I1(\DEBOUNCE_DOWNB/counter [7]),
    .I2(\DEBOUNCE_DOWNB/counter [9]),
    .I3(\DEBOUNCE_DOWNB/counter [10]),
    .I4(\DEBOUNCE_DOWNB/counter [11]),
    .O(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<0>_137 )
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_23  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter23 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [23])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_22  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter22 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [22])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_21  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter21 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [21])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_20  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter20 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [20])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_19  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter19 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [19])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_18  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter18 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [18])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_16  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter16 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [16])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_15  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter15 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [15])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_17  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter17 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [17])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_14  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter14 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [14])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_13  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter13 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [13])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_12  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter12 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [12])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_11  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter11 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [11])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_10  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter10 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [10])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_9  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter9 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [9])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_8  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter8 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [8])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_7  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter7 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [7])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_6  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter6 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [6])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_5  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter5 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [5])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_4  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter4 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [4])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_3  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter3 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [3])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_2  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter2 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [2])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_1  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter1 ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [1])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/counter_0  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/Mcount_counter ),
    .R(\DEBOUNCE_DOWNB/Mcount_counter_val ),
    .Q(\DEBOUNCE_DOWNB/counter [0])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<23>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [22]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [23]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter23 )
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<22>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [21]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [22]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter22 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<22>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [21]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [22]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [22])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<21>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [20]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [21]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter21 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<21>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [20]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [21]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [21])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<20>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [19]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [20]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter20 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<20>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [19]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [20]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [20])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<19>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [18]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [19]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter19 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<19>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [18]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [19]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [19])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<18>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [17]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [18]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter18 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<18>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [17]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [18]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [18])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<17>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [16]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [17]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter17 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<17>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [16]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [17]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [17])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<16>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [15]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [16]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter16 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<16>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [15]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [16]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [16])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<15>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [14]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [15]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter15 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<15>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [14]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [15]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [15])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<14>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [13]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [14]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter14 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<14>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [13]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [14]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [14])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<13>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [12]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [13]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter13 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<13>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [12]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [13]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [13])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<12>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [11]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [12]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter12 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<12>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [11]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [12]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [12])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<11>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [10]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [11]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter11 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<11>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [10]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [11]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [11])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<10>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [9]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [10]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter10 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<10>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [9]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [10]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [10])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<9>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [8]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [9]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter9 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<9>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [8]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [9]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [9])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<8>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [7]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [8]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter8 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<8>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [7]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [8]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [8])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<7>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [6]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [7]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter7 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<7>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [6]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [7]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [7])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<6>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [5]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [6]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter6 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<6>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [5]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [6]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [6])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<5>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [4]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [5]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter5 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<5>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [4]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [5]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [5])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<4>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [3]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [4]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter4 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<4>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [3]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [4]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [4])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<3>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [2]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [3]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter3 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<3>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [2]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [3]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [3])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<2>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [1]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [2]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter2 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<2>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [1]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [2]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [2])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<1>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [0]),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [1]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter1 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<1>  (
    .CI(\DEBOUNCE_DOWNB/Mcount_counter_cy [0]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [1]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [1])
  );
  XORCY   \DEBOUNCE_DOWNB/Mcount_counter_xor<0>  (
    .CI(\DEBOUNCE_DOWNB/counter[31]_GND_2_o_LessThan_2_o_inv_inv ),
    .LI(\DEBOUNCE_DOWNB/Mcount_counter_lut [0]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcount_counter_cy<0>  (
    .CI(\DEBOUNCE_DOWNB/counter[31]_GND_2_o_LessThan_2_o_inv_inv ),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_DOWNB/Mcount_counter_lut [0]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_cy [0])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/shift_in_1  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/shift_in [0]),
    .R(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .Q(\DEBOUNCE_DOWNB/shift_in [1])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/shift_in_0  (
    .C(cclk),
    .D(button_down_IBUF_6),
    .R(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .Q(\DEBOUNCE_DOWNB/shift_in [0])
  );
  MUXCY   \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>  (
    .CI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<3>_241 ),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .S(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .O(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<3>  (
    .CI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<2>_244 ),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi3 ),
    .S(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<3> ),
    .O(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<3>_241 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<2>  (
    .CI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<1>_247 ),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi2_246 ),
    .S(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<2>_245 ),
    .O(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<2>_244 )
  );
  LUT5 #(
    .INIT ( 32'h00000400 ))
  \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<2>  (
    .I0(\DEBOUNCE_CENTB/counter [17]),
    .I1(\DEBOUNCE_CENTB/counter [19]),
    .I2(\DEBOUNCE_CENTB/counter [18]),
    .I3(\DEBOUNCE_CENTB/counter [20]),
    .I4(\DEBOUNCE_CENTB/counter [21]),
    .O(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<2>_245 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<1>  (
    .CI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<0>_250 ),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi1_249 ),
    .S(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<1>_248 ),
    .O(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<1>_247 )
  );
  LUT5 #(
    .INIT ( 32'h00000400 ))
  \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<1>  (
    .I0(\DEBOUNCE_CENTB/counter [13]),
    .I1(\DEBOUNCE_CENTB/counter [12]),
    .I2(\DEBOUNCE_CENTB/counter [14]),
    .I3(\DEBOUNCE_CENTB/counter [15]),
    .I4(\DEBOUNCE_CENTB/counter [16]),
    .O(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<1>_248 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<0>  (
    .CI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi_252 ),
    .S(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<0>_251 ),
    .O(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<0>_250 )
  );
  LUT5 #(
    .INIT ( 32'h00004000 ))
  \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<0>  (
    .I0(\DEBOUNCE_CENTB/counter [8]),
    .I1(\DEBOUNCE_CENTB/counter [7]),
    .I2(\DEBOUNCE_CENTB/counter [9]),
    .I3(\DEBOUNCE_CENTB/counter [10]),
    .I4(\DEBOUNCE_CENTB/counter [11]),
    .O(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<0>_251 )
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_23  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter23 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [23])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_22  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter22 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [22])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_21  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter21 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [21])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_20  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter20 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [20])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_19  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter19 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [19])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_18  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter18 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [18])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_16  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter16 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [16])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_15  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter15 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [15])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_17  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter17 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [17])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_14  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter14 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [14])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_13  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter13 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [13])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_12  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter12 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [12])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_11  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter11 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [11])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_10  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter10 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [10])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_9  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter9 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [9])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_8  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter8 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [8])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_7  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter7 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [7])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_6  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter6 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [6])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_5  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter5 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [5])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_4  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter4 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [4])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_3  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter3 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [3])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_2  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter2 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [2])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_1  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter1 ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [1])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/counter_0  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/Mcount_counter ),
    .R(\DEBOUNCE_CENTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_CENTB/counter [0])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<23>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [22]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [23]),
    .O(\DEBOUNCE_CENTB/Mcount_counter23 )
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<22>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [21]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [22]),
    .O(\DEBOUNCE_CENTB/Mcount_counter22 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<22>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [21]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [22]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [22])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<21>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [20]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [21]),
    .O(\DEBOUNCE_CENTB/Mcount_counter21 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<21>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [20]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [21]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [21])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<20>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [19]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [20]),
    .O(\DEBOUNCE_CENTB/Mcount_counter20 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<20>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [19]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [20]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [20])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<19>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [18]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [19]),
    .O(\DEBOUNCE_CENTB/Mcount_counter19 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<19>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [18]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [19]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [19])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<18>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [17]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [18]),
    .O(\DEBOUNCE_CENTB/Mcount_counter18 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<18>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [17]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [18]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [18])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<17>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [16]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [17]),
    .O(\DEBOUNCE_CENTB/Mcount_counter17 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<17>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [16]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [17]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [17])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<16>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [15]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [16]),
    .O(\DEBOUNCE_CENTB/Mcount_counter16 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<16>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [15]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [16]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [16])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<15>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [14]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [15]),
    .O(\DEBOUNCE_CENTB/Mcount_counter15 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<15>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [14]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [15]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [15])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<14>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [13]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [14]),
    .O(\DEBOUNCE_CENTB/Mcount_counter14 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<14>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [13]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [14]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [14])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<13>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [12]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [13]),
    .O(\DEBOUNCE_CENTB/Mcount_counter13 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<13>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [12]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [13]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [13])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<12>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [11]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [12]),
    .O(\DEBOUNCE_CENTB/Mcount_counter12 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<12>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [11]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [12]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [12])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<11>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [10]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [11]),
    .O(\DEBOUNCE_CENTB/Mcount_counter11 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<11>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [10]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [11]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [11])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<10>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [9]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [10]),
    .O(\DEBOUNCE_CENTB/Mcount_counter10 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<10>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [9]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [10]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [10])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<9>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [8]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [9]),
    .O(\DEBOUNCE_CENTB/Mcount_counter9 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<9>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [8]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [9]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [9])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<8>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [7]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [8]),
    .O(\DEBOUNCE_CENTB/Mcount_counter8 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<8>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [7]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [8]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [8])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<7>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [6]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [7]),
    .O(\DEBOUNCE_CENTB/Mcount_counter7 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<7>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [6]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [7]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [7])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<6>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [5]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [6]),
    .O(\DEBOUNCE_CENTB/Mcount_counter6 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<6>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [5]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [6]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [6])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<5>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [4]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [5]),
    .O(\DEBOUNCE_CENTB/Mcount_counter5 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<5>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [4]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [5]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [5])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<4>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [3]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [4]),
    .O(\DEBOUNCE_CENTB/Mcount_counter4 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<4>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [3]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [4]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [4])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<3>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [2]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [3]),
    .O(\DEBOUNCE_CENTB/Mcount_counter3 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<3>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [2]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [3]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [3])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<2>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [1]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [2]),
    .O(\DEBOUNCE_CENTB/Mcount_counter2 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<2>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [1]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [2]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [2])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<1>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [0]),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [1]),
    .O(\DEBOUNCE_CENTB/Mcount_counter1 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<1>  (
    .CI(\DEBOUNCE_CENTB/Mcount_counter_cy [0]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [1]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [1])
  );
  XORCY   \DEBOUNCE_CENTB/Mcount_counter_xor<0>  (
    .CI(\DEBOUNCE_CENTB/counter[31]_GND_2_o_LessThan_2_o_inv_inv ),
    .LI(\DEBOUNCE_CENTB/Mcount_counter_lut [0]),
    .O(\DEBOUNCE_CENTB/Mcount_counter )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcount_counter_cy<0>  (
    .CI(\DEBOUNCE_CENTB/counter[31]_GND_2_o_LessThan_2_o_inv_inv ),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_CENTB/Mcount_counter_lut [0]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_cy [0])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/shift_in_1  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/shift_in [0]),
    .R(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .Q(\DEBOUNCE_CENTB/shift_in [1])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/shift_in_0  (
    .C(cclk),
    .D(button_center_IBUF_5),
    .R(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .Q(\DEBOUNCE_CENTB/shift_in [0])
  );
  MUXCY   \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>  (
    .CI(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<3>_353 ),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .S(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .O(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<3>  (
    .CI(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<2>_356 ),
    .DI(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi3 ),
    .S(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<3> ),
    .O(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<3>_353 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<2>  (
    .CI(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<1>_359 ),
    .DI(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi2_358 ),
    .S(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<2>_357 ),
    .O(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<2>_356 )
  );
  LUT5 #(
    .INIT ( 32'h00000400 ))
  \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<2>  (
    .I0(\DEBOUNCE_RSTB/counter [17]),
    .I1(\DEBOUNCE_RSTB/counter [19]),
    .I2(\DEBOUNCE_RSTB/counter [18]),
    .I3(\DEBOUNCE_RSTB/counter [20]),
    .I4(\DEBOUNCE_RSTB/counter [21]),
    .O(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<2>_357 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<1>  (
    .CI(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<0>_362 ),
    .DI(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi1_361 ),
    .S(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<1>_360 ),
    .O(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<1>_359 )
  );
  LUT5 #(
    .INIT ( 32'h00000400 ))
  \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<1>  (
    .I0(\DEBOUNCE_RSTB/counter [13]),
    .I1(\DEBOUNCE_RSTB/counter [12]),
    .I2(\DEBOUNCE_RSTB/counter [14]),
    .I3(\DEBOUNCE_RSTB/counter [15]),
    .I4(\DEBOUNCE_RSTB/counter [16]),
    .O(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<1>_360 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<0>  (
    .CI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .DI(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi_364 ),
    .S(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<0>_363 ),
    .O(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<0>_362 )
  );
  LUT5 #(
    .INIT ( 32'h00004000 ))
  \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<0>  (
    .I0(\DEBOUNCE_RSTB/counter [8]),
    .I1(\DEBOUNCE_RSTB/counter [7]),
    .I2(\DEBOUNCE_RSTB/counter [9]),
    .I3(\DEBOUNCE_RSTB/counter [10]),
    .I4(\DEBOUNCE_RSTB/counter [11]),
    .O(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<0>_363 )
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_23  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter23 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [23])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_22  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter22 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [22])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_21  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter21 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [21])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_20  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter20 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [20])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_19  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter19 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [19])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_18  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter18 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [18])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_16  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter16 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [16])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_15  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter15 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [15])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_17  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter17 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [17])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_14  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter14 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [14])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_13  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter13 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [13])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_12  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter12 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [12])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_11  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter11 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [11])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_10  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter10 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [10])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_9  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter9 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [9])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_8  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter8 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [8])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_7  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter7 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [7])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_6  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter6 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [6])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_5  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter5 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [5])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_4  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter4 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [4])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_3  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter3 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [3])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_2  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter2 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [2])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_1  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter1 ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [1])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/counter_0  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/Mcount_counter ),
    .R(\DEBOUNCE_RSTB/Mcount_counter_val ),
    .Q(\DEBOUNCE_RSTB/counter [0])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<23>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [22]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [23]),
    .O(\DEBOUNCE_RSTB/Mcount_counter23 )
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<22>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [21]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [22]),
    .O(\DEBOUNCE_RSTB/Mcount_counter22 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<22>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [21]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [22]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [22])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<21>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [20]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [21]),
    .O(\DEBOUNCE_RSTB/Mcount_counter21 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<21>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [20]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [21]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [21])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<20>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [19]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [20]),
    .O(\DEBOUNCE_RSTB/Mcount_counter20 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<20>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [19]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [20]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [20])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<19>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [18]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [19]),
    .O(\DEBOUNCE_RSTB/Mcount_counter19 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<19>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [18]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [19]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [19])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<18>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [17]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [18]),
    .O(\DEBOUNCE_RSTB/Mcount_counter18 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<18>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [17]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [18]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [18])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<17>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [16]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [17]),
    .O(\DEBOUNCE_RSTB/Mcount_counter17 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<17>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [16]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [17]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [17])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<16>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [15]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [16]),
    .O(\DEBOUNCE_RSTB/Mcount_counter16 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<16>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [15]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [16]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [16])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<15>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [14]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [15]),
    .O(\DEBOUNCE_RSTB/Mcount_counter15 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<15>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [14]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [15]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [15])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<14>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [13]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [14]),
    .O(\DEBOUNCE_RSTB/Mcount_counter14 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<14>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [13]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [14]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [14])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<13>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [12]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [13]),
    .O(\DEBOUNCE_RSTB/Mcount_counter13 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<13>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [12]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [13]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [13])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<12>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [11]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [12]),
    .O(\DEBOUNCE_RSTB/Mcount_counter12 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<12>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [11]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [12]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [12])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<11>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [10]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [11]),
    .O(\DEBOUNCE_RSTB/Mcount_counter11 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<11>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [10]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [11]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [11])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<10>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [9]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [10]),
    .O(\DEBOUNCE_RSTB/Mcount_counter10 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<10>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [9]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [10]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [10])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<9>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [8]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [9]),
    .O(\DEBOUNCE_RSTB/Mcount_counter9 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<9>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [8]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [9]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [9])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<8>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [7]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [8]),
    .O(\DEBOUNCE_RSTB/Mcount_counter8 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<8>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [7]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [8]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [8])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<7>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [6]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [7]),
    .O(\DEBOUNCE_RSTB/Mcount_counter7 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<7>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [6]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [7]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [7])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<6>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [5]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [6]),
    .O(\DEBOUNCE_RSTB/Mcount_counter6 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<6>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [5]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [6]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [6])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<5>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [4]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [5]),
    .O(\DEBOUNCE_RSTB/Mcount_counter5 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<5>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [4]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [5]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [5])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<4>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [3]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [4]),
    .O(\DEBOUNCE_RSTB/Mcount_counter4 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<4>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [3]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [4]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [4])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<3>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [2]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [3]),
    .O(\DEBOUNCE_RSTB/Mcount_counter3 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<3>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [2]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [3]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [3])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<2>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [1]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [2]),
    .O(\DEBOUNCE_RSTB/Mcount_counter2 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<2>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [1]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [2]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [2])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<1>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [0]),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [1]),
    .O(\DEBOUNCE_RSTB/Mcount_counter1 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<1>  (
    .CI(\DEBOUNCE_RSTB/Mcount_counter_cy [0]),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [1]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [1])
  );
  XORCY   \DEBOUNCE_RSTB/Mcount_counter_xor<0>  (
    .CI(\DEBOUNCE_RSTB/counter[31]_GND_2_o_LessThan_2_o_inv_inv ),
    .LI(\DEBOUNCE_RSTB/Mcount_counter_lut [0]),
    .O(\DEBOUNCE_RSTB/Mcount_counter )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcount_counter_cy<0>  (
    .CI(\DEBOUNCE_RSTB/counter[31]_GND_2_o_LessThan_2_o_inv_inv ),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .S(\DEBOUNCE_RSTB/Mcount_counter_lut [0]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_cy [0])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/shift_in_1  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/shift_in [0]),
    .R(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .Q(\DEBOUNCE_RSTB/shift_in [1])
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/shift_in_0  (
    .C(cclk),
    .D(rstb_button_IBUF_4),
    .R(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .Q(\DEBOUNCE_RSTB/shift_in [0])
  );
  FD   \timer_u/out_next_3  (
    .C(\div_1hz/clk_out_17 ),
    .D(\timer_u/out_reg[3]_init[3]_mux_6_OUT<3> ),
    .Q(\timer_u/out_next [3])
  );
  FD   \timer_u/out_next_2  (
    .C(\div_1hz/clk_out_17 ),
    .D(\timer_u/out_reg[3]_init[3]_mux_6_OUT<2> ),
    .Q(\timer_u/out_next [2])
  );
  FD   \timer_u/out_next_1  (
    .C(\div_1hz/clk_out_17 ),
    .D(\timer_u/out_reg[3]_init[3]_mux_6_OUT<1> ),
    .Q(\timer_u/out_next [1])
  );
  FD   \timer_u/out_next_0  (
    .C(\div_1hz/clk_out_17 ),
    .D(\timer_u/out_reg[3]_init[3]_mux_6_OUT<0> ),
    .Q(\timer_u/out_next [0])
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_01  (
    .I0(Result[0]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o ),
    .O(\div_1hz/Mcount_r_count_eqn_0 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_110  (
    .I0(Result[1]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o ),
    .O(\div_1hz/Mcount_r_count_eqn_1 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_26  (
    .I0(Result[2]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o ),
    .O(\div_1hz/Mcount_r_count_eqn_2 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_31  (
    .I0(Result[3]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o ),
    .O(\div_1hz/Mcount_r_count_eqn_3 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_41  (
    .I0(Result[4]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o ),
    .O(\div_1hz/Mcount_r_count_eqn_4 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_51  (
    .I0(Result[5]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o ),
    .O(\div_1hz/Mcount_r_count_eqn_5 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_61  (
    .I0(Result[6]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o ),
    .O(\div_1hz/Mcount_r_count_eqn_6 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_71  (
    .I0(Result[7]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o ),
    .O(\div_1hz/Mcount_r_count_eqn_7 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_81  (
    .I0(Result[8]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o ),
    .O(\div_1hz/Mcount_r_count_eqn_8 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_91  (
    .I0(Result[9]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o ),
    .O(\div_1hz/Mcount_r_count_eqn_9 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_101  (
    .I0(Result[10]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o ),
    .O(\div_1hz/Mcount_r_count_eqn_10 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_111  (
    .I0(Result[11]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o ),
    .O(\div_1hz/Mcount_r_count_eqn_11 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_121  (
    .I0(Result[12]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o ),
    .O(\div_1hz/Mcount_r_count_eqn_12 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_131  (
    .I0(Result[13]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o ),
    .O(\div_1hz/Mcount_r_count_eqn_13 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_141  (
    .I0(Result[14]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 ),
    .O(\div_1hz/Mcount_r_count_eqn_14 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_151  (
    .I0(Result[15]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 ),
    .O(\div_1hz/Mcount_r_count_eqn_15 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_161  (
    .I0(Result[16]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 ),
    .O(\div_1hz/Mcount_r_count_eqn_16 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_171  (
    .I0(Result[17]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 ),
    .O(\div_1hz/Mcount_r_count_eqn_17 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_181  (
    .I0(Result[18]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 ),
    .O(\div_1hz/Mcount_r_count_eqn_18 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_191  (
    .I0(Result[19]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 ),
    .O(\div_1hz/Mcount_r_count_eqn_19 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_201  (
    .I0(Result[20]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 ),
    .O(\div_1hz/Mcount_r_count_eqn_20 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_211  (
    .I0(Result[21]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 ),
    .O(\div_1hz/Mcount_r_count_eqn_21 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_221  (
    .I0(Result[22]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 ),
    .O(\div_1hz/Mcount_r_count_eqn_22 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_231  (
    .I0(Result[23]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 ),
    .O(\div_1hz/Mcount_r_count_eqn_23 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_241  (
    .I0(Result[24]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 ),
    .O(\div_1hz/Mcount_r_count_eqn_24 )
  );
  LUT2 #(
    .INIT ( 4'h2 ))
  \div_1hz/Mcount_r_count_eqn_251  (
    .I0(Result[25]),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 ),
    .O(\div_1hz/Mcount_r_count_eqn_25 )
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  \DEBOUNCE_DOWNB/Mcount_counter_val321  (
    .I0(\DEBOUNCE_DOWNB/shift_in [0]),
    .I1(\DEBOUNCE_DOWNB/shift_in [1]),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_val )
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  \DEBOUNCE_CENTB/Mcount_counter_val321  (
    .I0(\DEBOUNCE_CENTB/shift_in [0]),
    .I1(\DEBOUNCE_CENTB/shift_in [1]),
    .O(\DEBOUNCE_CENTB/Mcount_counter_val )
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  \DEBOUNCE_RSTB/Mcount_counter_val321  (
    .I0(\DEBOUNCE_RSTB/shift_in [0]),
    .I1(\DEBOUNCE_RSTB/shift_in [1]),
    .O(\DEBOUNCE_RSTB/Mcount_counter_val )
  );
  LUT6 #(
    .INIT ( 64'hEBEBEBEA41414140 ))
  \timer_u/Mmux_out_reg[3]_init[3]_mux_6_OUT21  (
    .I0(\DEBOUNCE_CENTB/debounced_9 ),
    .I1(\timer_u/out_reg_0 ),
    .I2(\timer_u/out_reg_1 ),
    .I3(\timer_u/out_reg_2 ),
    .I4(\timer_u/out_reg_3 ),
    .I5(switch_1_IBUF_2),
    .O(\timer_u/out_reg[3]_init[3]_mux_6_OUT<1> )
  );
  LUT6 #(
    .INIT ( 64'hEEEBEEEA44414440 ))
  \timer_u/Mmux_out_reg[3]_init[3]_mux_6_OUT31  (
    .I0(\DEBOUNCE_CENTB/debounced_9 ),
    .I1(\timer_u/out_reg_2 ),
    .I2(\timer_u/out_reg_0 ),
    .I3(\timer_u/out_reg_1 ),
    .I4(\timer_u/out_reg_3 ),
    .I5(switch_2_IBUF_1),
    .O(\timer_u/out_reg[3]_init[3]_mux_6_OUT<2> )
  );
  LUT6 #(
    .INIT ( 64'hEEEEEEEA44444440 ))
  \timer_u/Mmux_out_reg[3]_init[3]_mux_6_OUT41  (
    .I0(\DEBOUNCE_CENTB/debounced_9 ),
    .I1(\timer_u/out_reg_3 ),
    .I2(\timer_u/out_reg_0 ),
    .I3(\timer_u/out_reg_1 ),
    .I4(\timer_u/out_reg_2 ),
    .I5(switch_3_IBUF_0),
    .O(\timer_u/out_reg[3]_init[3]_mux_6_OUT<3> )
  );
  LUT6 #(
    .INIT ( 64'hBBBBBBBA11111110 ))
  \timer_u/Mmux_out_reg[3]_init[3]_mux_6_OUT11  (
    .I0(\DEBOUNCE_CENTB/debounced_9 ),
    .I1(\timer_u/out_reg_0 ),
    .I2(\timer_u/out_reg_1 ),
    .I3(\timer_u/out_reg_2 ),
    .I4(\timer_u/out_reg_3 ),
    .I5(switch_0_IBUF_3),
    .O(\timer_u/out_reg[3]_init[3]_mux_6_OUT<0> )
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \timer_u/rst_init[0]_AND_8_o1  (
    .I0(switch_0_IBUF_3),
    .I1(\DEBOUNCE_DOWNB/debounced_10 ),
    .O(\timer_u/rst_init[0]_AND_8_o )
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \timer_u/rst_init[0]_AND_7_o1  (
    .I0(\DEBOUNCE_DOWNB/debounced_10 ),
    .I1(switch_0_IBUF_3),
    .O(\timer_u/rst_init[0]_AND_7_o )
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \timer_u/rst_init[1]_AND_6_o1  (
    .I0(switch_1_IBUF_2),
    .I1(\DEBOUNCE_DOWNB/debounced_10 ),
    .O(\timer_u/rst_init[1]_AND_6_o )
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \timer_u/rst_init[1]_AND_5_o1  (
    .I0(\DEBOUNCE_DOWNB/debounced_10 ),
    .I1(switch_1_IBUF_2),
    .O(\timer_u/rst_init[1]_AND_5_o )
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \timer_u/rst_init[2]_AND_4_o1  (
    .I0(switch_2_IBUF_1),
    .I1(\DEBOUNCE_DOWNB/debounced_10 ),
    .O(\timer_u/rst_init[2]_AND_4_o )
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \timer_u/rst_init[2]_AND_3_o1  (
    .I0(\DEBOUNCE_DOWNB/debounced_10 ),
    .I1(switch_2_IBUF_1),
    .O(\timer_u/rst_init[2]_AND_3_o )
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \timer_u/rst_init[3]_AND_2_o1  (
    .I0(switch_3_IBUF_0),
    .I1(\DEBOUNCE_DOWNB/debounced_10 ),
    .O(\timer_u/rst_init[3]_AND_2_o )
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \timer_u/rst_init[3]_AND_1_o1  (
    .I0(\DEBOUNCE_DOWNB/debounced_10 ),
    .I1(switch_3_IBUF_0),
    .O(\timer_u/rst_init[3]_AND_1_o )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \div_1hz/r_count[31]_GND_7_o_equal_1_o<31>1  (
    .I0(\div_1hz/r_count [20]),
    .I1(\div_1hz/r_count [19]),
    .I2(\div_1hz/r_count [22]),
    .I3(\div_1hz/r_count [21]),
    .I4(\div_1hz/r_count [25]),
    .I5(\div_1hz/r_count [23]),
    .O(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31> )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \div_1hz/r_count[31]_GND_7_o_equal_1_o<31>2  (
    .I0(\div_1hz/r_count [12]),
    .I1(\div_1hz/r_count [6]),
    .I2(\div_1hz/r_count [14]),
    .I3(\div_1hz/r_count [13]),
    .I4(\div_1hz/r_count [17]),
    .I5(\div_1hz/r_count [15]),
    .O(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>1_481 )
  );
  LUT6 #(
    .INIT ( 64'h8000000000000000 ))
  \div_1hz/r_count[31]_GND_7_o_equal_1_o<31>3  (
    .I0(\div_1hz/r_count [1]),
    .I1(\div_1hz/r_count [0]),
    .I2(\div_1hz/r_count [3]),
    .I3(\div_1hz/r_count [2]),
    .I4(\div_1hz/r_count [5]),
    .I5(\div_1hz/r_count [4]),
    .O(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>2_482 )
  );
  LUT6 #(
    .INIT ( 64'h0000000000000001 ))
  \div_1hz/r_count[31]_GND_7_o_equal_1_o<31>4  (
    .I0(\div_1hz/r_count [8]),
    .I1(\div_1hz/r_count [7]),
    .I2(\div_1hz/r_count [9]),
    .I3(\div_1hz/r_count [10]),
    .I4(\div_1hz/r_count [11]),
    .I5(\div_1hz/r_count [16]),
    .O(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>3_483 )
  );
  LUT6 #(
    .INIT ( 64'h1000000000000000 ))
  \div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5  (
    .I0(\div_1hz/r_count [18]),
    .I1(\div_1hz/r_count [24]),
    .I2(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>3_483 ),
    .I3(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>2_482 ),
    .I4(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>1_481 ),
    .I5(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31> ),
    .O(\div_1hz/r_count[31]_GND_7_o_equal_1_o )
  );
  IBUF   switch_3_IBUF (
    .I(switch[3]),
    .O(switch_3_IBUF_0)
  );
  IBUF   switch_2_IBUF (
    .I(switch[2]),
    .O(switch_2_IBUF_1)
  );
  IBUF   switch_1_IBUF (
    .I(switch[1]),
    .O(switch_1_IBUF_2)
  );
  IBUF   switch_0_IBUF (
    .I(switch[0]),
    .O(switch_0_IBUF_3)
  );
  IBUF   rstb_button_IBUF (
    .I(rstb_button),
    .O(rstb_button_IBUF_4)
  );
  IBUF   button_center_IBUF (
    .I(button_center),
    .O(button_center_IBUF_5)
  );
  IBUF   button_down_IBUF (
    .I(button_down),
    .O(button_down_IBUF_6)
  );
  OBUF   led_7_OBUF (
    .I(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .O(led[7])
  );
  OBUF   led_6_OBUF (
    .I(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .O(led[6])
  );
  OBUF   led_5_OBUF (
    .I(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .O(led[5])
  );
  OBUF   led_4_OBUF (
    .I(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .O(led[4])
  );
  OBUF   led_3_OBUF (
    .I(\timer_u/out_reg_3 ),
    .O(led[3])
  );
  OBUF   led_2_OBUF (
    .I(\timer_u/out_reg_2 ),
    .O(led[2])
  );
  OBUF   led_1_OBUF (
    .I(\timer_u/out_reg_1 ),
    .O(led[1])
  );
  OBUF   led_0_OBUF (
    .I(\timer_u/out_reg_0 ),
    .O(led[0])
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<3>1  (
    .I0(\DEBOUNCE_DOWNB/counter [22]),
    .I1(\DEBOUNCE_DOWNB/counter [23]),
    .O(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<3> )
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<3>1  (
    .I0(\DEBOUNCE_CENTB/counter [22]),
    .I1(\DEBOUNCE_CENTB/counter [23]),
    .O(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<3> )
  );
  LUT2 #(
    .INIT ( 4'h4 ))
  \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<3>1  (
    .I0(\DEBOUNCE_RSTB/counter [22]),
    .I1(\DEBOUNCE_RSTB/counter [23]),
    .O(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<3> )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<1>_rt  (
    .I0(\div_1hz/r_count [1]),
    .O(\div_1hz/Mcount_r_count_cy<1>_rt_499 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<2>_rt  (
    .I0(\div_1hz/r_count [2]),
    .O(\div_1hz/Mcount_r_count_cy<2>_rt_500 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<3>_rt  (
    .I0(\div_1hz/r_count [3]),
    .O(\div_1hz/Mcount_r_count_cy<3>_rt_501 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<4>_rt  (
    .I0(\div_1hz/r_count [4]),
    .O(\div_1hz/Mcount_r_count_cy<4>_rt_502 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<5>_rt  (
    .I0(\div_1hz/r_count [5]),
    .O(\div_1hz/Mcount_r_count_cy<5>_rt_503 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<6>_rt  (
    .I0(\div_1hz/r_count [6]),
    .O(\div_1hz/Mcount_r_count_cy<6>_rt_504 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<7>_rt  (
    .I0(\div_1hz/r_count [7]),
    .O(\div_1hz/Mcount_r_count_cy<7>_rt_505 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<8>_rt  (
    .I0(\div_1hz/r_count [8]),
    .O(\div_1hz/Mcount_r_count_cy<8>_rt_506 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<9>_rt  (
    .I0(\div_1hz/r_count [9]),
    .O(\div_1hz/Mcount_r_count_cy<9>_rt_507 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<10>_rt  (
    .I0(\div_1hz/r_count [10]),
    .O(\div_1hz/Mcount_r_count_cy<10>_rt_508 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<11>_rt  (
    .I0(\div_1hz/r_count [11]),
    .O(\div_1hz/Mcount_r_count_cy<11>_rt_509 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<12>_rt  (
    .I0(\div_1hz/r_count [12]),
    .O(\div_1hz/Mcount_r_count_cy<12>_rt_510 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<13>_rt  (
    .I0(\div_1hz/r_count [13]),
    .O(\div_1hz/Mcount_r_count_cy<13>_rt_511 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<14>_rt  (
    .I0(\div_1hz/r_count [14]),
    .O(\div_1hz/Mcount_r_count_cy<14>_rt_512 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<15>_rt  (
    .I0(\div_1hz/r_count [15]),
    .O(\div_1hz/Mcount_r_count_cy<15>_rt_513 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<16>_rt  (
    .I0(\div_1hz/r_count [16]),
    .O(\div_1hz/Mcount_r_count_cy<16>_rt_514 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<17>_rt  (
    .I0(\div_1hz/r_count [17]),
    .O(\div_1hz/Mcount_r_count_cy<17>_rt_515 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<18>_rt  (
    .I0(\div_1hz/r_count [18]),
    .O(\div_1hz/Mcount_r_count_cy<18>_rt_516 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<19>_rt  (
    .I0(\div_1hz/r_count [19]),
    .O(\div_1hz/Mcount_r_count_cy<19>_rt_517 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<20>_rt  (
    .I0(\div_1hz/r_count [20]),
    .O(\div_1hz/Mcount_r_count_cy<20>_rt_518 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<21>_rt  (
    .I0(\div_1hz/r_count [21]),
    .O(\div_1hz/Mcount_r_count_cy<21>_rt_519 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<22>_rt  (
    .I0(\div_1hz/r_count [22]),
    .O(\div_1hz/Mcount_r_count_cy<22>_rt_520 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<23>_rt  (
    .I0(\div_1hz/r_count [23]),
    .O(\div_1hz/Mcount_r_count_cy<23>_rt_521 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_cy<24>_rt  (
    .I0(\div_1hz/r_count [24]),
    .O(\div_1hz/Mcount_r_count_cy<24>_rt_522 )
  );
  LUT1 #(
    .INIT ( 2'h2 ))
  \div_1hz/Mcount_r_count_xor<25>_rt  (
    .I0(\div_1hz/r_count [25]),
    .O(\div_1hz/Mcount_r_count_xor<25>_rt_523 )
  );
  FDC   \div_1hz/clk_out  (
    .C(cclk),
    .CLR(rst),
    .D(\div_1hz/clk_out_rstpot_524 ),
    .Q(\div_1hz/clk_out_17 )
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_DOWNB/debounced  (
    .C(cclk),
    .D(\DEBOUNCE_DOWNB/debounced_rstpot_525 ),
    .R(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .Q(\DEBOUNCE_DOWNB/debounced_10 )
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_CENTB/debounced  (
    .C(cclk),
    .D(\DEBOUNCE_CENTB/debounced_rstpot_526 ),
    .R(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .Q(\DEBOUNCE_CENTB/debounced_9 )
  );
  FDR #(
    .INIT ( 1'b0 ))
  \DEBOUNCE_RSTB/debounced  (
    .C(cclk),
    .D(\DEBOUNCE_RSTB/debounced_rstpot_527 ),
    .R(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi4 ),
    .Q(\DEBOUNCE_RSTB/debounced_8 )
  );
  LUT2 #(
    .INIT ( 4'h7 ))
  \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi31  (
    .I0(\DEBOUNCE_DOWNB/counter [23]),
    .I1(\DEBOUNCE_DOWNB/counter [22]),
    .O(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi3 )
  );
  LUT5 #(
    .INIT ( 32'h11155555 ))
  \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi2  (
    .I0(\DEBOUNCE_DOWNB/counter [21]),
    .I1(\DEBOUNCE_DOWNB/counter [19]),
    .I2(\DEBOUNCE_DOWNB/counter [18]),
    .I3(\DEBOUNCE_DOWNB/counter [17]),
    .I4(\DEBOUNCE_DOWNB/counter [20]),
    .O(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi2_132 )
  );
  LUT4 #(
    .INIT ( 16'h0155 ))
  \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi1  (
    .I0(\DEBOUNCE_DOWNB/counter [16]),
    .I1(\DEBOUNCE_DOWNB/counter [14]),
    .I2(\DEBOUNCE_DOWNB/counter [13]),
    .I3(\DEBOUNCE_DOWNB/counter [15]),
    .O(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi1_135 )
  );
  LUT4 #(
    .INIT ( 16'h1555 ))
  \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi  (
    .I0(\DEBOUNCE_DOWNB/counter [11]),
    .I1(\DEBOUNCE_DOWNB/counter [9]),
    .I2(\DEBOUNCE_DOWNB/counter [8]),
    .I3(\DEBOUNCE_DOWNB/counter [10]),
    .O(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi_138 )
  );
  MUXCY   \DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_inv1_cy  (
    .CI(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .S(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .O(\DEBOUNCE_DOWNB/counter[31]_GND_2_o_LessThan_2_o_inv_inv )
  );
  LUT2 #(
    .INIT ( 4'h7 ))
  \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi31  (
    .I0(\DEBOUNCE_CENTB/counter [23]),
    .I1(\DEBOUNCE_CENTB/counter [22]),
    .O(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi3 )
  );
  LUT5 #(
    .INIT ( 32'h11155555 ))
  \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi2  (
    .I0(\DEBOUNCE_CENTB/counter [21]),
    .I1(\DEBOUNCE_CENTB/counter [19]),
    .I2(\DEBOUNCE_CENTB/counter [18]),
    .I3(\DEBOUNCE_CENTB/counter [17]),
    .I4(\DEBOUNCE_CENTB/counter [20]),
    .O(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi2_246 )
  );
  LUT4 #(
    .INIT ( 16'h0155 ))
  \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi1  (
    .I0(\DEBOUNCE_CENTB/counter [16]),
    .I1(\DEBOUNCE_CENTB/counter [14]),
    .I2(\DEBOUNCE_CENTB/counter [13]),
    .I3(\DEBOUNCE_CENTB/counter [15]),
    .O(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi1_249 )
  );
  LUT4 #(
    .INIT ( 16'h1555 ))
  \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi  (
    .I0(\DEBOUNCE_CENTB/counter [11]),
    .I1(\DEBOUNCE_CENTB/counter [9]),
    .I2(\DEBOUNCE_CENTB/counter [8]),
    .I3(\DEBOUNCE_CENTB/counter [10]),
    .O(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi_252 )
  );
  MUXCY   \DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_inv1_cy  (
    .CI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .S(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .O(\DEBOUNCE_CENTB/counter[31]_GND_2_o_LessThan_2_o_inv_inv )
  );
  LUT2 #(
    .INIT ( 4'h7 ))
  \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi31  (
    .I0(\DEBOUNCE_RSTB/counter [23]),
    .I1(\DEBOUNCE_RSTB/counter [22]),
    .O(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi3 )
  );
  LUT5 #(
    .INIT ( 32'h11155555 ))
  \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi2  (
    .I0(\DEBOUNCE_RSTB/counter [21]),
    .I1(\DEBOUNCE_RSTB/counter [19]),
    .I2(\DEBOUNCE_RSTB/counter [18]),
    .I3(\DEBOUNCE_RSTB/counter [17]),
    .I4(\DEBOUNCE_RSTB/counter [20]),
    .O(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi2_358 )
  );
  LUT4 #(
    .INIT ( 16'h0155 ))
  \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi1  (
    .I0(\DEBOUNCE_RSTB/counter [16]),
    .I1(\DEBOUNCE_RSTB/counter [14]),
    .I2(\DEBOUNCE_RSTB/counter [13]),
    .I3(\DEBOUNCE_RSTB/counter [15]),
    .O(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi1_361 )
  );
  LUT4 #(
    .INIT ( 16'h1555 ))
  \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi  (
    .I0(\DEBOUNCE_RSTB/counter [11]),
    .I1(\DEBOUNCE_RSTB/counter [9]),
    .I2(\DEBOUNCE_RSTB/counter [8]),
    .I3(\DEBOUNCE_RSTB/counter [10]),
    .O(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lutdi_364 )
  );
  MUXCY   \DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_inv1_cy  (
    .CI(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .DI(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .S(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .O(\DEBOUNCE_RSTB/counter[31]_GND_2_o_LessThan_2_o_inv_inv )
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<0>  (
    .I0(\DEBOUNCE_DOWNB/counter [0]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [0])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<0>  (
    .I0(\DEBOUNCE_CENTB/counter [0]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [0])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<0>  (
    .I0(\DEBOUNCE_RSTB/counter [0]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [0])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<1>  (
    .I0(\DEBOUNCE_DOWNB/counter [1]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [1])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<1>  (
    .I0(\DEBOUNCE_CENTB/counter [1]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [1])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<1>  (
    .I0(\DEBOUNCE_RSTB/counter [1]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [1])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<2>  (
    .I0(\DEBOUNCE_DOWNB/counter [2]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [2])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<2>  (
    .I0(\DEBOUNCE_CENTB/counter [2]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [2])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<2>  (
    .I0(\DEBOUNCE_RSTB/counter [2]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [2])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<3>  (
    .I0(\DEBOUNCE_DOWNB/counter [3]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [3])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<3>  (
    .I0(\DEBOUNCE_CENTB/counter [3]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [3])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<3>  (
    .I0(\DEBOUNCE_RSTB/counter [3]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [3])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<4>  (
    .I0(\DEBOUNCE_DOWNB/counter [4]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [4])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<4>  (
    .I0(\DEBOUNCE_CENTB/counter [4]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [4])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<4>  (
    .I0(\DEBOUNCE_RSTB/counter [4]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [4])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<5>  (
    .I0(\DEBOUNCE_DOWNB/counter [5]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [5])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<5>  (
    .I0(\DEBOUNCE_CENTB/counter [5]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [5])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<5>  (
    .I0(\DEBOUNCE_RSTB/counter [5]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [5])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<6>  (
    .I0(\DEBOUNCE_DOWNB/counter [6]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [6])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<6>  (
    .I0(\DEBOUNCE_CENTB/counter [6]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [6])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<6>  (
    .I0(\DEBOUNCE_RSTB/counter [6]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [6])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<7>  (
    .I0(\DEBOUNCE_DOWNB/counter [7]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [7])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<7>  (
    .I0(\DEBOUNCE_CENTB/counter [7]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [7])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<7>  (
    .I0(\DEBOUNCE_RSTB/counter [7]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [7])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<8>  (
    .I0(\DEBOUNCE_DOWNB/counter [8]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [8])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<8>  (
    .I0(\DEBOUNCE_CENTB/counter [8]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [8])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<8>  (
    .I0(\DEBOUNCE_RSTB/counter [8]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [8])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<9>  (
    .I0(\DEBOUNCE_DOWNB/counter [9]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [9])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<9>  (
    .I0(\DEBOUNCE_CENTB/counter [9]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [9])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<9>  (
    .I0(\DEBOUNCE_RSTB/counter [9]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [9])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<10>  (
    .I0(\DEBOUNCE_DOWNB/counter [10]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [10])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<10>  (
    .I0(\DEBOUNCE_CENTB/counter [10]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [10])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<10>  (
    .I0(\DEBOUNCE_RSTB/counter [10]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [10])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<11>  (
    .I0(\DEBOUNCE_DOWNB/counter [11]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [11])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<11>  (
    .I0(\DEBOUNCE_CENTB/counter [11]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [11])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<11>  (
    .I0(\DEBOUNCE_RSTB/counter [11]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [11])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<12>  (
    .I0(\DEBOUNCE_DOWNB/counter [12]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [12])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<12>  (
    .I0(\DEBOUNCE_CENTB/counter [12]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [12])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<12>  (
    .I0(\DEBOUNCE_RSTB/counter [12]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [12])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<13>  (
    .I0(\DEBOUNCE_DOWNB/counter [13]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [13])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<13>  (
    .I0(\DEBOUNCE_CENTB/counter [13]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [13])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<13>  (
    .I0(\DEBOUNCE_RSTB/counter [13]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [13])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<14>  (
    .I0(\DEBOUNCE_DOWNB/counter [14]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [14])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<14>  (
    .I0(\DEBOUNCE_CENTB/counter [14]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [14])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<14>  (
    .I0(\DEBOUNCE_RSTB/counter [14]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [14])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<15>  (
    .I0(\DEBOUNCE_DOWNB/counter [15]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [15])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<15>  (
    .I0(\DEBOUNCE_CENTB/counter [15]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [15])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<15>  (
    .I0(\DEBOUNCE_RSTB/counter [15]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [15])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<16>  (
    .I0(\DEBOUNCE_DOWNB/counter [16]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [16])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<16>  (
    .I0(\DEBOUNCE_CENTB/counter [16]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [16])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<16>  (
    .I0(\DEBOUNCE_RSTB/counter [16]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [16])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<17>  (
    .I0(\DEBOUNCE_DOWNB/counter [17]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [17])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<17>  (
    .I0(\DEBOUNCE_CENTB/counter [17]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [17])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<17>  (
    .I0(\DEBOUNCE_RSTB/counter [17]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [17])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<18>  (
    .I0(\DEBOUNCE_DOWNB/counter [18]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [18])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<18>  (
    .I0(\DEBOUNCE_CENTB/counter [18]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [18])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<18>  (
    .I0(\DEBOUNCE_RSTB/counter [18]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [18])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<19>  (
    .I0(\DEBOUNCE_DOWNB/counter [19]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [19])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<19>  (
    .I0(\DEBOUNCE_CENTB/counter [19]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [19])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<19>  (
    .I0(\DEBOUNCE_RSTB/counter [19]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [19])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<20>  (
    .I0(\DEBOUNCE_DOWNB/counter [20]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [20])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<20>  (
    .I0(\DEBOUNCE_CENTB/counter [20]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [20])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<20>  (
    .I0(\DEBOUNCE_RSTB/counter [20]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [20])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<21>  (
    .I0(\DEBOUNCE_DOWNB/counter [21]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [21])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<21>  (
    .I0(\DEBOUNCE_CENTB/counter [21]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [21])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<21>  (
    .I0(\DEBOUNCE_RSTB/counter [21]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [21])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<22>  (
    .I0(\DEBOUNCE_DOWNB/counter [22]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [22])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<22>  (
    .I0(\DEBOUNCE_CENTB/counter [22]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [22])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<22>  (
    .I0(\DEBOUNCE_RSTB/counter [22]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [22])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_DOWNB/Mcount_counter_lut<23>  (
    .I0(\DEBOUNCE_DOWNB/counter [23]),
    .I1(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/Mcount_counter_lut [23])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_CENTB/Mcount_counter_lut<23>  (
    .I0(\DEBOUNCE_CENTB/counter [23]),
    .I1(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/Mcount_counter_lut [23])
  );
  LUT2 #(
    .INIT ( 4'h8 ))
  \DEBOUNCE_RSTB/Mcount_counter_lut<23>  (
    .I0(\DEBOUNCE_RSTB/counter [23]),
    .I1(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/Mcount_counter_lut [23])
  );
  LUT4 #(
    .INIT ( 16'hF0E8 ))
  \DEBOUNCE_DOWNB/debounced_rstpot  (
    .I0(\DEBOUNCE_DOWNB/shift_in [1]),
    .I1(\DEBOUNCE_DOWNB/shift_in [0]),
    .I2(\DEBOUNCE_DOWNB/debounced_10 ),
    .I3(\DEBOUNCE_DOWNB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_126 ),
    .O(\DEBOUNCE_DOWNB/debounced_rstpot_525 )
  );
  LUT4 #(
    .INIT ( 16'hF0E8 ))
  \DEBOUNCE_CENTB/debounced_rstpot  (
    .I0(\DEBOUNCE_CENTB/shift_in [1]),
    .I1(\DEBOUNCE_CENTB/shift_in [0]),
    .I2(\DEBOUNCE_CENTB/debounced_9 ),
    .I3(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_238 ),
    .O(\DEBOUNCE_CENTB/debounced_rstpot_526 )
  );
  LUT4 #(
    .INIT ( 16'hCCE8 ))
  \DEBOUNCE_RSTB/debounced_rstpot  (
    .I0(\DEBOUNCE_RSTB/shift_in [1]),
    .I1(\DEBOUNCE_RSTB/debounced_8 ),
    .I2(\DEBOUNCE_RSTB/shift_in [0]),
    .I3(\DEBOUNCE_RSTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_cy<4>_352 ),
    .O(\DEBOUNCE_RSTB/debounced_rstpot_527 )
  );
  LDC   \timer_u/out_reg_0_LDC  (
    .CLR(\timer_u/rst_init[0]_AND_8_o ),
    .D(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .G(\timer_u/rst_init[0]_AND_7_o ),
    .Q(\timer_u/out_reg_0_LDC_528 )
  );
  FDC   \timer_u/out_reg_0_C_0  (
    .C(\div_1hz/clk_out_17 ),
    .CLR(\timer_u/rst_init[0]_AND_8_o ),
    .D(\timer_u/out_next [0]),
    .Q(\timer_u/out_reg_0_C_0_529 )
  );
  FDP   \timer_u/out_reg_0_P_0  (
    .C(\div_1hz/clk_out_17 ),
    .D(\timer_u/out_next [0]),
    .PRE(\timer_u/rst_init[0]_AND_7_o ),
    .Q(\timer_u/out_reg_0_P_0_530 )
  );
  LUT3 #(
    .INIT ( 8'hE4 ))
  \timer_u/out_reg_01  (
    .I0(\timer_u/out_reg_0_LDC_528 ),
    .I1(\timer_u/out_reg_0_C_0_529 ),
    .I2(\timer_u/out_reg_0_P_0_530 ),
    .O(\timer_u/out_reg_0 )
  );
  LDC   \timer_u/out_reg_1_LDC  (
    .CLR(\timer_u/rst_init[1]_AND_6_o ),
    .D(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .G(\timer_u/rst_init[1]_AND_5_o ),
    .Q(\timer_u/out_reg_1_LDC_531 )
  );
  FDC   \timer_u/out_reg_1_C_1  (
    .C(\div_1hz/clk_out_17 ),
    .CLR(\timer_u/rst_init[1]_AND_6_o ),
    .D(\timer_u/out_next [1]),
    .Q(\timer_u/out_reg_1_C_1_532 )
  );
  FDP   \timer_u/out_reg_1_P_1  (
    .C(\div_1hz/clk_out_17 ),
    .D(\timer_u/out_next [1]),
    .PRE(\timer_u/rst_init[1]_AND_5_o ),
    .Q(\timer_u/out_reg_1_P_1_533 )
  );
  LUT3 #(
    .INIT ( 8'hE4 ))
  \timer_u/out_reg_11  (
    .I0(\timer_u/out_reg_1_LDC_531 ),
    .I1(\timer_u/out_reg_1_C_1_532 ),
    .I2(\timer_u/out_reg_1_P_1_533 ),
    .O(\timer_u/out_reg_1 )
  );
  LDC   \timer_u/out_reg_2_LDC  (
    .CLR(\timer_u/rst_init[2]_AND_4_o ),
    .D(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .G(\timer_u/rst_init[2]_AND_3_o ),
    .Q(\timer_u/out_reg_2_LDC_534 )
  );
  FDC   \timer_u/out_reg_2_C_2  (
    .C(\div_1hz/clk_out_17 ),
    .CLR(\timer_u/rst_init[2]_AND_4_o ),
    .D(\timer_u/out_next [2]),
    .Q(\timer_u/out_reg_2_C_2_535 )
  );
  FDP   \timer_u/out_reg_2_P_2  (
    .C(\div_1hz/clk_out_17 ),
    .D(\timer_u/out_next [2]),
    .PRE(\timer_u/rst_init[2]_AND_3_o ),
    .Q(\timer_u/out_reg_2_P_2_536 )
  );
  LUT3 #(
    .INIT ( 8'hE4 ))
  \timer_u/out_reg_21  (
    .I0(\timer_u/out_reg_2_LDC_534 ),
    .I1(\timer_u/out_reg_2_C_2_535 ),
    .I2(\timer_u/out_reg_2_P_2_536 ),
    .O(\timer_u/out_reg_2 )
  );
  LDC   \timer_u/out_reg_3_LDC  (
    .CLR(\timer_u/rst_init[3]_AND_2_o ),
    .D(\DEBOUNCE_CENTB/Mcompar_counter[31]_GND_2_o_LessThan_2_o_lut<4> ),
    .G(\timer_u/rst_init[3]_AND_1_o ),
    .Q(\timer_u/out_reg_3_LDC_537 )
  );
  FDC   \timer_u/out_reg_3_C_3  (
    .C(\div_1hz/clk_out_17 ),
    .CLR(\timer_u/rst_init[3]_AND_2_o ),
    .D(\timer_u/out_next [3]),
    .Q(\timer_u/out_reg_3_C_3_538 )
  );
  FDP   \timer_u/out_reg_3_P_3  (
    .C(\div_1hz/clk_out_17 ),
    .D(\timer_u/out_next [3]),
    .PRE(\timer_u/rst_init[3]_AND_1_o ),
    .Q(\timer_u/out_reg_3_P_3_539 )
  );
  LUT3 #(
    .INIT ( 8'hE4 ))
  \timer_u/out_reg_31  (
    .I0(\timer_u/out_reg_3_LDC_537 ),
    .I1(\timer_u/out_reg_3_C_3_538 ),
    .I2(\timer_u/out_reg_3_P_3_539 ),
    .O(\timer_u/out_reg_3 )
  );
  LUT2 #(
    .INIT ( 4'h6 ))
  \div_1hz/clk_out_rstpot  (
    .I0(\div_1hz/clk_out_17 ),
    .I1(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 ),
    .O(\div_1hz/clk_out_rstpot_524 )
  );
  LUT6 #(
    .INIT ( 64'h1000000000000000 ))
  \div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_1  (
    .I0(\div_1hz/r_count [18]),
    .I1(\div_1hz/r_count [24]),
    .I2(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>3_483 ),
    .I3(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>2_482 ),
    .I4(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>1_481 ),
    .I5(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31> ),
    .O(\div_1hz/r_count[31]_GND_7_o_equal_1_o<31>5_540 )
  );
  INV   \div_1hz/Mcount_r_count_lut<0>_INV_0  (
    .I(\div_1hz/r_count [0]),
    .O(\div_1hz/Mcount_r_count_lut [0])
  );
  INV   rst1_INV_0 (
    .I(\DEBOUNCE_RSTB/debounced_8 ),
    .O(rst)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

