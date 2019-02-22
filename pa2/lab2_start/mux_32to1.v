`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    mux_32to1 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module mux_32to1(X, S, Z);

	//parameter definitions
	parameter BUSSIZE = 1;	//define size of input or output buses
	parameter n = 32;
	parameter i = 2;
	parameter ARITHMETIC = 0;

	//port definitions - customize for different bit widths
	input wire [31:0] X;
	input wire [4:0] S;
	output wire Z;
	
	wire [31:0] MuxIn; // wires that actually get hooked up to the mux.
	
	wire W0, W1;
	
	// Assigns the right value to each mux input. 
	
	    genvar j;
		 for (j = 0; j < n - i; j = j + 1 ) begin : assign_muxIns_values
		     assign MuxIn[j] = X[i + j];
		 end
		 
		 for (j = n - i; j < n ; j = j + 1 ) begin : assign_muxIns_ground
		     assign MuxIn[j] = ARITHMETIC ? X[31]: 0;
		 end
	
	mux_16to1 #(.BUSSIZE(BUSSIZE)) MUX_012_0(.A(MuxIn[0]), 
															.B(MuxIn[1]), 
															.C(MuxIn[2]), 
															.D(MuxIn[3]), 
															.E(MuxIn[4]), 
															.F(MuxIn[5]), 
															.G(MuxIn[6]), 
															.H(MuxIn[7]), 
															.I(MuxIn[8]),
															.J(MuxIn[9]),
															.K(MuxIn[10]),
															.L(MuxIn[11]),
															.M(MuxIn[12]),
															.N(MuxIn[13]),
															.O(MuxIn[14]),
															.P(MuxIn[15]),
															.S(S[3:0]), 
															.Z(W0));
															
	mux_16to1 #(.BUSSIZE(BUSSIZE)) MUX_012_1(.A(MuxIn[16]), 
															.B(MuxIn[17]), 
															.C(MuxIn[18]), 
															.D(MuxIn[19]), 
															.E(MuxIn[20]), 
															.F(MuxIn[21]), 
															.G(MuxIn[22]), 
															.H(MuxIn[23]), 
															.I(MuxIn[24]),
															.J(MuxIn[25]),
															.K(MuxIn[26]),
															.L(MuxIn[27]),
															.M(MuxIn[28]),
															.N(MuxIn[29]),
															.O(MuxIn[30]),
															.P(MuxIn[31]),
															.S(S[3:0]), 
															.Z(W1));
	//mux_16to1 #(.BUSSIZE(BUSSIZE)) MUX_012_1(.A(I), 
	//.B(J), .C(K), .D(L), .E(M), .F(N), .G(O), .H(P), .S(S[2:0]), .Z(W1));
	mux_2to1 #(.BUSSIZE(BUSSIZE)) MUX_3_0(.X(W0), .Y(W1), .S(S[4]), .Z(Z));


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
