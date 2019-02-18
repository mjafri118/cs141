`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    cla_propagate 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module cla_propagate(A, B, P);

	//port definitions - customize for different bit widths
	input wire A, B;
	output wire P;
	
	assign P = A | B;


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
