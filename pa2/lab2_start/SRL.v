`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    SRL 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module SRL(X, Y, Z);

	// Definitions
	input wire [31:0] X, Y; // we will only use the 5 LSBs of Y as select as per Joseph's rec.
	
	output wire [31:0] Z;
		
	generate
	    genvar i;
		 
		 // Creates each of 32 muxes needed for each shifted output.
		 for (i = 0; i < 32; i = i + 1 ) begin : create_i_muxes			  
			  mux_32to1 #(.n(32), .i(i), .ARITHMETIC(0)) mux_gen (
			      .X(X),
					.S(Y[4:0]),
					.Z(Z[i])
			  ); 
		 end
	
	endgenerate

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
