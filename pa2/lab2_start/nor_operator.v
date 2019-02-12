`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    nor_operator 
// Author(s): VQ and MJ
// Description: NOR operator for ALU
//
//
//////////////////////////////////////////////////////////////////////////////////
module nor_operator();

	//port definitions - customize for different bit widths
	input  wire [31:0] X;
	input  wire [31:0] Y;
	output wire [31:0] Z;

	assign Z = ~(X | Y);


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
