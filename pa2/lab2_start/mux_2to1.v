`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    mux_2to1 
// Author(s): VQ and MJ
// Description: 2 to 1 mux
//
//
//////////////////////////////////////////////////////////////////////////////////
module mux_2to1(X,Y,S,Z);

	//parameter definitions
	parameter BUSSIZE = 32;	//define size of input or output buses

	//port definitions - customize for different bit widths
	input wire [BUSSIZE-1:0] X, Y;
	input wire S;
	output wire [BUSSIZE-1:0] Z;
	
	assign Z = S ? Y : X;

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
