`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    test_SRL 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module test_SRL();

	// Inputs
	reg [31:0] X; // value to be shifted
	reg [31:0] Y; // shifting amount

	// Outputs
	wire [31:0] Z; // shifting result

	// Instantiate the Unit Under Test (UUT)
	SRL uut (
		.X(X),
		.Y(Y),
		.Z(Z)
	);
	
	integer error = 0;

	initial begin
		X = 0;
		Y = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		X = 32'b10001010000110111100100101111010; // arbitrary.
        
		// Increasing shifting amount by 1 from 0 to 31.
		for (Y = 0; Y != 32'd32; Y = Y + 1) begin
			#20;
			if (X >> Y != Z) begin
				error = error + 1;
				$display("Error below:");
			end
			$display("Switch value=%d, output=%d . Expected %d", Y, Z, X >> Y);
		
		end

	end

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
