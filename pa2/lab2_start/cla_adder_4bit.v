`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    cla_adder_4bit 
// Author(s): 
// Description: 4 bit unit of Carry-Lookahead Adder
//
//
//////////////////////////////////////////////////////////////////////////////////
module cla_adder_4bit(A, B, S, C0, C4, Pg, Gg);

	//port definitions - customize for different bit widths
	input wire [3:0] A, B;
	input wire C0;	//C0 carry in
	output wire [3:0] S;
	output wire C4, Pg, Gg;	//C4 carry out, Pg for total propagate, Gg for total generate
	
	wire [3:0] G, P;	//G for generate, P for propagate
	wire C1, C2, C3;
	
	//Make Generates and Propagates
	generate
		genvar i;
		for(i=0; i < 4; i = i+1) begin
		
			cla_generate generate_gen (A[i], B[i], G[i]);
			cla_propagate propagate_gen (A[i], B[i], P[i]);
		
		end
	endgenerate
	
	//Calculate Carries for Sums later
	assign C1 = G[0] | (P[0] & C0);
	assign C2 = G[1] | (P[1] & G[0]) | (&P[1:0] & C0);
	assign C3 = G[2] | (P[2] & G[1]) | (&P[2:1] & G[0]) | (&P[2:0] & C0);
	assign C4 = G[3] | (P[3] & G[2]) | (&P[3:2] & G[1]) | (&P[3:1] & G[0]) | (&P[3:0] & C0);
	
	//Final output - carries and sums and total prop and gen
	assign Pg = &P[3:0];
	assign Gg = G[3] | (P[3] & G[2]) | (&P[3:2] & G[1]) | (&P[3:1] & G[0]);
	
	assign S[0] = A[0]^B[0]^C0;
	assign S[1] = A[1]^B[1]^C1;
	assign S[2] = A[2]^B[2]^C2;
	assign S[3] = A[3]^B[3]^C3;
	
	
endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
