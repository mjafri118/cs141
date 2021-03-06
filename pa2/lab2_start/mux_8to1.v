`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    mux_8to1 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module mux_8to1(A,B,C,D,E,F,G,H,S,Z);

	//parameter definitions
	parameter BUSSIZE = 32;	//define size of input or output buses

	//port definitions - customize for different bit widths
	input wire [BUSSIZE-1:0] A,B,C,D,E,F,G,H;
	input wire [2:0] S;
	output wire [BUSSIZE-1:0] Z;
	
	wire [BUSSIZE-1:0]  W0, W1;
	
	mux_4to1 #(.BUSSIZE(BUSSIZE)) MUX_01_0(.A(A), .B(B), .C(C), .D(D), .S(S[1:0]), .Z(W0));
	mux_4to1 #(.BUSSIZE(BUSSIZE)) MUX_01_1(.A(E), .B(F), .C(G), .D(H), .S(S[1:0]), .Z(W1));
	mux_2to1 #(.BUSSIZE(BUSSIZE)) MUX_2_0(.X(W0), .Y(W1), .S(S[2]), .Z(Z));

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
