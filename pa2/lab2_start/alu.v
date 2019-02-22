`timescale 1ns / 1ps
`default_nettype none
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Spring 2019
// Module Name:    alu 
// Author(s): Mohib Jafri, Victor Qin
// Description: CS 141 programming assignment 2
//
//
//////////////////////////////////////////////////////////////////////////////////
`include "alu_defines.v"

module alu(X,Y,Z,op_code, equal, overflow, zero);

	//parameter definitions
	parameter FLAG_MUX = 1;
	
	//port definitions - customize for different bit widths
	input  wire [31:0] X;
	input  wire [31:0] Y;
	output wire [31:0] Z;
	input  wire [3:0] op_code;
	
	output wire equal, overflow, zero;
	
	wire [31:0] and_out, or_out, xor_out, nor_out, add_out, sub_out, slt_out, srl_out, sll_out, sra_out;
	wire flags, overflow_sub_out, overflow_add_out, over;
	
	//functional blocks
	
   //YOUR CODE HERE - remember to use a separate file for each module you create
	//Logical operations
	and_operator AND_op(.X(X), .Y(Y), .Z(and_out));
	or_operator OR_op(.X(X), .Y(Y), .Z(or_out));
	xor_operator XOR_op(.X(X), .Y(Y), .Z(xor_out));
	nor_operator NOR_op(.X(X), .Y(Y), .Z(nor_out));
	
	//Math operations
   //	adder_cascaded32 ADD_op(.A(X), .B(Y), .S(add_out), .Ov(overflow));
	cla_adder_32bit ADD_op(.A(X), .B(Y), .S(add_out), .C0(0), .C32(), .Pg(), .Gg(), .overflow(overflow_add_out));	//overflow is def broken rn - need to check how signed overflow works for cla
	cla_adder_32bit SUB_op(.A(X), .B(~Y), .S(sub_out), .C0(1), .C32(), .Pg(), .Gg(), .overflow(overflow_sub_out));
	
	//Other operations
	slt_operator SLT_op(.X(X), .Y(Y), .Z(slt_out));
	SRL SRL_op(.X(X), .Y(Y), .Z(srl_out));
	SLL SLL_op(.X(X), .Y(Y), .Z(sll_out));
	SRA SRA_op(.X(X), .Y(Y), .Z(sra_out));
	
	
	//Define Main Output Mux
	mux_16to1 MUX_16(.A(and_out), .B(or_out), .C(xor_out), .D(nor_out), .E(0), .F(add_out), .G(sub_out), .H(slt_out), .I(srl_out), .J(sll_out), .K(sra_out), .L(0), .M(0), .N(0), .O(0), .P(0), .S(op_code), .Z(Z));

	//Define flag mux and output - tracks if address is reserved or not
	mux_16to1 #(.BUSSIZE(FLAG_MUX)) MUX_flags(.A(1), .B(1), .C(1), .D(1), .E(0), .F(1), .G(1), .H(1), .I(1), .J(1), .K(1), .L(0), .M(0), .N(0), .O(0), .P(0), .S(op_code), .Z(flags));
	mux_16to1 #(.BUSSIZE(FLAG_MUX)) MUX_over(.A(0), .B(0), .C(0), .D(0), .E(0), .F(1), .G(1), .H(0), .I(0), .J(0), .K(0), .L(0), .M(0), .N(0), .O(0), .P(0), .S(op_code), .Z(over));
	assign equal = &(~(X^Y)) & flags; 
	assign zero = &(~Z) & flags;	
	assign overflow = (overflow_add_out | overflow_sub_out) & over;
	


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
