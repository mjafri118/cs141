`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    pad32 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module pad32(immed, out);

	//parameter definitions
	parameter N_in = 5;
	parameter N_out = 32;

	//port definitions - customize for different bit widths
	input wire [N_in-1:0] immed;
	output wire [N_out-1:0] out;
	
	assign out[N_in-1:0] = immed[N_in-1:0];
	assign out[N_out-1:N_in] = {27{1'b0}};



endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
