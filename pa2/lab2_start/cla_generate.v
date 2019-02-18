`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    cla_generate 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module cla_generate(A, B, G);
	
	input wire A, B;
	output wire G;
	
	assign G = A & B;


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
