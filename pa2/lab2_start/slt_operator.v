`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    slt_operator 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module slt_operator(X, Y, Z);

	//parameter definitions
	parameter BUSSIZE = 32;

	//port definitions - customize for different bit widths
	input wire[BUSSIZE-1:0] X, Y;
	output wire[BUSSIZE-1:0] Z;
	
	wire overflow;
	wire[BUSSIZE-1:0] out;
	
	cla_adder_32bit SUB_op(.A(X), .B(~Y), .S(out), .C0(1), .C32(), .Pg(), .Gg(), .overflow(overflow));
		
	assign Z[BUSSIZE-1:1] = 0;
	assign Z[0] = overflow ? ~out[BUSSIZE-1] : out[BUSSIZE-1];

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
