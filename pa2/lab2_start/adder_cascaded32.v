`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    adder_cascaded32 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module adder_cascaded32(A, B, S, Ov);

	//parameter definitions
	input wire [31:0] A, B;
	
	output wire [31:0] S;
	output wire Ov;
	
	wire [32:0] CotoCin;
	
	assign CotoCin[0] = 0;
	
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
	
	assign Ov = CotoCin[32] ^ CotoCin[31] ;


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
