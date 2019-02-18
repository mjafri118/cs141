`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    cla_adder_16bit 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module cla_adder_16bit(A, B, S, C0, C16, Pg, Gg);

	//port definitions - customize for different bit widths
	input wire [15:0] A, B;
	input wire C0;
	output wire [15:0] S;
	output wire C16, Pg, Gg;	//haven't done Pg and Gg
	
	wire [3:0] G, P;	//G for generate, P for propagate
	wire C4, C8, C12;
	
	//Divide inputs/outputs (A, B; S) among the 4-bit units
	cla_adder_4bit CLA_15to12(.A(A[15:12]), .B(B[15:12]), .S(S[15:12]), .C0(C12), .C4(), .Pg(P[3]), .Gg(G[3]));
	cla_adder_4bit CLA_11to8(.A(A[11:8]), .B(B[11:8]), .S(S[11:8]), .C0(C8), .C4(), .Pg(P[2]), .Gg(G[2]));
	cla_adder_4bit CLA_7to4(.A(A[7:4]), .B(B[7:4]), .S(S[7:4]), .C0(C4), .C4(), .Pg(P[1]), .Gg(G[1]));
	cla_adder_4bit CLA_3to0(.A(A[3:0]), .B(B[3:0]), .S(S[3:0]), .C0(C0), .C4(), .Pg(P[0]), .Gg(G[0]));
	
	//Collect props and gens from the 4-bits
	
	//Calculate Carries for Sums later
	assign C4 = G[0] | (P[0] & C0);
	assign C8 = G[1] | (P[1] & G[0]) | (&P[1:0] & C0);
	assign C12 = G[2] | (P[2] & G[1]) | (&P[2:1] & G[0]) | (&P[2:0] & C0);
	assign C16 = G[3] | (P[3] & G[2]) | (&P[3:2] & G[1]) | (&P[3:1] & G[0]) | (&P[3:0] & C0);
	
	//Calculate outputs
	assign Pg = &P[3:0];
	assign Gg = G[3] | (P[3] & G[2]) | (&P[3:2] & G[1]) | (&P[3:1] & G[0]);


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
