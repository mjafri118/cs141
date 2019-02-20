`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    cla_adder_32bit 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module cla_adder_32bit(A, B, S, C0, C32, Pg, Gg, overflow);

	//port definitions - customize for different bit widths
	input wire [31:0] A, B;
	input wire C0;
	output wire [31:0] S;
	output wire C32, Pg, Gg, overflow;
	
	wire [1:0] G, P;
	wire C16;
	
	//Divide inputs/outputs
	cla_adder_16bit CLA_31to16(.A(A[31:16]), .B(B[31:16]), .S(S[31:16]), .C0(C16), .C16(), .Pg(P[1]), .Gg(G[1]));
	cla_adder_16bit CLA_15to0(.A(A[15:0]), .B(B[15:0]), .S(S[15:0]), .C0(C0), .C16(), .Pg(P[0]), .Gg(G[0]));

	assign C16 = G[0] | (P[0] & C0);
	assign C32 = G[1] | (P[1] & G[0]) | (&P[1:0] & C0);
	
	assign Pg = &P[1:0];
	assign Gg = G[1] | (P[1] & G[0]);
	assign overflow = (~A[31] & ~B[31] & S[31]) | (A[31] & B[31] & ~S[31]);

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
