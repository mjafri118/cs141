`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    and_operator 
// Author(s): MJ and VQ
// Description: AND submodule for ALU
//
//
//////////////////////////////////////////////////////////////////////////////////
module and_operator(X,Y,Z);

	//port definitions - customize for different bit widths
	input  wire [31:0] X;
	input  wire [31:0] Y;
	output wire [31:0] Z;

	assign Z = X & Y;

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
