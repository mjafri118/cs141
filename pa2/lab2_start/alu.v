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
	//going to have to program a gate level ckt of a mux - see the book for tristates or AND stuffs
	//Could also be much shorter - very much need to check w TAs


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
