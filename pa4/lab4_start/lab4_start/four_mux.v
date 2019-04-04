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
module four_mux(A,B,C,D,CTRL,Z);

	//parameter definitions
	parameter N = 32;	//define size of input or output buses

	//port definitions - customize for different bit widths
	input wire [N-1:0] A,B,C,D;
	input wire [1:0] CTRL;
	output wire [N-1:0] Z;
	
	wire [N-1:0]  W0, W1;
	
	two_mux #(.N(N)) MUX_0_0(.X(A), .Y(B), .CTRL(CTRL[0]), .Z(W0));
	two_mux #(.N(N)) MUX_0_1(.X(C), .Y(D), .CTRL(CTRL[0]), .Z(W1));
	two_mux #(.N(N)) MUX_1_0(.X(W0), .Y(W1), .CTRL(CTRL[1]), .Z(Z));


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
