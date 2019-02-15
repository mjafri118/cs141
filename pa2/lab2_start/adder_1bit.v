`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    adder_1bit 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module adder_1bit(A, B, Ci, Co, S);

	input wire A, B, Ci;
	output wire S, Co;
	
	assign S = (A ^ B) ^ Ci;
	assign Co = (A & B) + (A & Ci) + (B & Ci);

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
