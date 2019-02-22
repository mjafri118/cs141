`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    test_SRA 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module test_SRA();

	// Inputs
	reg signed [31:0] X; // value to be shifted
	reg signed [31:0] Y; // shifting amount

	// Outputs
	wire [31:0] Z; // shifting result

	// Instantiate the Unit Under Test (UUT)
	SRA uut (
		.X(X),
		.Y(Y),
		.Z(Z)
	);
	
	integer error = 0;

	initial begin
		//X = 0;
		//Y = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		X = 32'b10000000000000000000000000001010; // arbitrary.
		
		#50;
	
		X = 32'd321313;
		
		#50;
		
		X = 32'd0 - 32'd1;
		
		#50;
		
		X = 32'd1;
		
		$display("End of test!");

	end

	// Runs whenever x changes.
	always @(X) begin
		#1;
		case(X)
			default: begin
				// Increasing shifting amount by 1 from 0 to 31.
				for (Y = 0; Y != 32'd32; Y = Y + 1) begin
					#1;
					
					// Creates error increment. 
					if (X >>> Y != $signed(Z)) begin
						error = error + 1;
						$display("Error below when x is %b", X);
					end
					$display("X: %d, switch value=%d, output=%d . Expected %d",X, Y, $signed(Z), X >>> Y);
		
				end
			end
		endcase
	end

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
