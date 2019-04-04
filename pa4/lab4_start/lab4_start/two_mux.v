`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    two_mux 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module two_mux(X, Y, Z, CTRL);

	//parameter definitions
	parameter N = 32;
	input wire [N-1:0] X, Y;
	output wire [N-1:0] Z;
	input wire CTRL;

	//port definitions - customize for different bit widths
	
	assign Z = CTRL ? Y : X;


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
