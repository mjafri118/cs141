`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    clk_divider 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module clk_divider(clk_in, rst, clk_out);

	//parameter definitions

	//port definitions - customize for different bit widths
	input wire clk_in;
	input wire rst;
	output reg clk_out;

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
