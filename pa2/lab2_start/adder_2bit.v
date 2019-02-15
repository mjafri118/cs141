`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    adder_2bit 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module adder_2bit(A, B, S, Co);
	input wire [1:0] A, B;
	output wire [1:0] S;
	output wire Co;
	
	
	wire CiInitial;
	wire CotoCi;
	
	adder_1bit adder_1bit_1 (
		.A(A[1]),
		.B(B[1]),
		.Ci(CotoCi),
		.Co(Co),
		.S(S[1])
	);
	
	adder_1bit adder_1bit_0 (
		.A(A[0]),
		.B(B[0]),
		.Ci(CiInitial),
		.Co(CotoCi),
		.S(S[0])
	);
	
	assign CiInitial = 0;


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
