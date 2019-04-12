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
module eight_mux(A,B,C,D,E,F,G,H,CTRL,Z);

	//parameter definitions
	parameter N = 32;	//define size of input or output buses

	//port definitions - customize for different bit widths
	input wire [N-1:0] A,B,C,D,E,F,G,H;
	input wire [2:0] CTRL;
	output wire [N-1:0] Z;
	
	wire [N-1:0]  W0, W1;
	
	four_mux #(.N(N)) MUX_01_0(.A(A), .B(B), .C(C), .D(D), .CTRL(CTRL[1:0]), .Z(W0));
	four_mux #(.N(N)) MUX_01_1(.A(E), .B(F), .C(G), .D(H), .CTRL(CTRL[1:0]), .Z(W1));
	two_mux #(.N(N)) MUX_2_0(.X(W0), .Y(W1), .CTRL(CTRL[2]), .Z(Z));

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
