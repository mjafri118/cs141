`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    mux_4to1 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module mux_4to1(A,B,C,D,S,Z);

	//parameter definitions
	parameter BUSSIZE = 32;	//define size of input or output buses

	//port definitions - customize for different bit widths
	input wire [BUSSIZE-1:0] A,B,C,D;
	input wire [1:0] S;
	output wire [BUSSIZE-1:0] Z;
	
	wire [BUSSIZE-1:0]  W0, W1;
	
	mux_2to1 #(.BUSSIZE(BUSSIZE)) MUX_0_0(.X(A), .Y(B), .S(S[0]), .Z(W0));
	mux_2to1 #(.BUSSIZE(BUSSIZE)) MUX_0_1(.X(C), .Y(D), .S(S[0]), .Z(W1));
	mux_2to1 #(.BUSSIZE(BUSSIZE)) MUX_1_0(.X(W0), .Y(W1), .S(S[1]), .Z(Z));


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
