`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    adder_cascaded32 
// Author(s): 
// Description: Adds 32 bits to each other. Cascades via carry ripple adder circuit.
// A and B are 32 bits, S is sum, and Ov is overflow. 
//
//
//////////////////////////////////////////////////////////////////////////////////
module adder_cascaded32(A, B, S, Ov);

	// Definitions
	input wire [31:0] A, B;
	
	output wire [31:0] S;
	output wire Ov;
	
	// N bits added need N+1 Cout to Cin connections.
	wire [32:0] CotoCin;
	
	// No carry in for the first adder.
	assign CotoCin[0] = 0;
	
	// Connects each adder via the CotoCin wire. 
	generate
	    genvar i;
		 for (i = 1; i < 33; i = i + 1 ) begin
		     adder_1bit adder_gen (
			      .A(A[i-1]),
					.B(B[i-1]),
					.Ci(CotoCin[i-1]),
					.Co(CotoCin[i]),
					.S(S[i-1])
			  );
		 end
	
	endgenerate
	
	// XORing the last two Co's yield an overflow truth. 
	assign Ov = CotoCin[32] ^ CotoCin[31] ;


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
