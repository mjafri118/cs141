`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    test_mux_32to1 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module test_mux_32to1();

	// Inputs
	reg [31:0] X;
	reg [4:0] S;

	// Outputs
	wire Z;

	// Instantiate the Unit Under Test (UUT)
	mux_32to1 uut (
		.X(X),
		.S(S), 
		.Z(Z)
	);

	initial begin
		// Initialize Inputs
		X = 32'b11000000000000000000000001010101;
		S = 4'b0000;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		for (S = 0; S != 4'b1111; S = S + 1) begin
			#10;
			$display("switch value=%b, output=%d", S, Z);
		
		end

	end


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
