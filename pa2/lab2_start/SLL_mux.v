`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    SLL_mux 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module SLL_mux(X, S ,Z);

	//parameter definitions
	parameter BUSSIZE = 1;	//define size of input or output buses
	parameter n = 32;       // number of muxes total
	parameter i = 2;        // number mux being created, corresponding to index of output

	//port definitions - customize for different bit widths
	input wire [31:0] X;
	input wire [31:0] S;
	output wire Z;
	
	wire [31:0] MuxIn; // wires that actually get hooked up to the mux.
	
	wire W0, W1, W2;
	
	// Assigns the right value to each mux input. 
	
	    genvar j;
		 
		 // wires input wires to mux.
		 for (j = 0; j < i + 1; j = j + 1 ) begin : assign_muxIns_values
		     assign MuxIn[j] = X[i - j];
		 end
		 
		 // grounds remaining connections to mux.
		 for (j = i + 1; j < n ; j = j + 1 ) begin : assign_muxIns_ground
		     assign MuxIn[j] = 0;
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
	mux_2to1 #(.BUSSIZE(BUSSIZE)) MUX_3_0(.X(W0), .Y(W1), .S(S[4]), .Z(W2));
	
	// checks if shift is greater than 2^5. If so, 0, else W2. 
	assign Z = |S[31:5] ? 0 : W2;
	


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
