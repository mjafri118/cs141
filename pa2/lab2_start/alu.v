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

	//port definitions - customize for different bit widths
	input  wire [31:0] X;
	input  wire [31:0] Y;
	output wire [31:0] Z;
	input  wire [3:0] op_code;
	
	output wire equal, overflow, zero;
	
	wire [31:0] and_out, or_out, xor_out, nor_out, add_out, sub_out, slt_out, srl_out, sll_out, sra_out;
		//functional blocks
	
   //YOUR CODE HERE - remember to use a separate file for each module you create
	//Define operations
	and_operator AND_op(.X(X), .Y(Y), .Z(and_out));
	or_operator OR_op(.X(X), .Y(Y), .Z(or_out));
	xor_operator XOR_op(.X(X), .Y(Y), .Z(xor_out));
	nor_operator NOR_op(.X(X), .Y(Y), .Z(nor_out));
	adder_cascaded32 ADD_op(.A(X), .B(Y), .S(add_out), .Ov(overflow));
	
	//Define Mux
	mux_16to1 MUX_16(.A(and_out), .B(or_out), .C(xor_out), .D(nor_out), .E(0), .F(add_out), .G(0), .H(0), .I(0), .J(0), .K(0), .L(0), .M(0), .N(0), .O(0), .P(0), .S(op_code), .Z(Z));


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
