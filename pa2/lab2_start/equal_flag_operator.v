`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    equal_flag_operator 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module equal_flag_operator(X, Y, equal);

	//parameter definitions
	parameter BUSSIZE = 32;
	
	//port definitions - customize for different bit widths
	input wire [BUSSIZE-1:0] X, Y;
	output wire equal;
	
	wire [BUSSIZE-1:0] Z;
	
	assign Z = ~(X ^ Y);
	assign equal = &Z;


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
