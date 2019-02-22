`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    test_SLL 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module test_SLL();

	// Inputs
	reg [31:0] X; // value to be shifted
	reg [31:0] Y; // shifting amount

	// Outputs
	wire [31:0] Z; // shifting result

	// Instantiate the Unit Under Test (UUT)
	SLL uut (
		.X(X),
		.Y(Y),
		.Z(Z)
	);
	
	integer error = 0;

	initial begin
		// Wait 100 ns for global reset to finish
		#100;
		
		X = 32'b10000000000000000000000000001010; // arbitrary.
		
		#75;
	
		X = 32'd321313;
		
		#75;
		
		X = 32'd0 - 32'd1;
		
		#75;
		
		X = 32'd1;
		
		$display("End of test!");

	end

	// Runs whenever x changes.
	always @(X) begin
		#1;
		case(X)
			default: begin
				// Increasing shifting amount by 1 from 0 to 38.
				for (Y = 0; Y != 32'd38; Y = Y + 1) begin
					#2;
					
					// Creates error increment. 
					if (X << Y != Z) begin
						error = error + 1;
						$display("Error below when x is %b", X);
					end
					$display("X: %d, switch value=%d, output=%b . Expected %b",X, Y, Z, X << Y);
		
				end
			end
		endcase
	end


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
