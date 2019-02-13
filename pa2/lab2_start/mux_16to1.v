`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    mux_16to1 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module mux_16to1(A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P, S, Z);

	//parameter definitions
	parameter BUSSIZE = 32;	//define size of input or output buses

	//port definitions - customize for different bit widths
	input wire [BUSSIZE-1:0] A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P;
	input wire [3:0] S;
	output wire [BUSSIZE-1:0] Z;
	
	wire [BUSSIZE-1:0]  W0, W1;
	
	mux_8to1 MUX_012_0(.A(A), .B(B), .C(C), .D(D), .E(E), .F(F), .G(G), .H(H), .S(S[2:0]), .Z(W0));
	mux_8to1 MUX_012_1(.A(I), .B(J), .C(K), .D(L), .E(M), .F(N), .G(O), .H(P), .S(S[2:0]), .Z(W1));
	mux_2to1 MUX_3_0(.X(W0), .Y(W1), .S(S[3]), .Z(Z));


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
