`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:22:26 04/04/2019
// Design Name:   signExt
// Module Name:   Z:/shared_folder/cs141/pa4/lab4_start/lab4_start/test_signExt.v
// Project Name:  lab4-start
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: signExt
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_signExt;

	// Inputs
	reg [15:0] immed;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	signExt uut (
		.immed(immed), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		immed = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		immed = 16'b0011111111111111;
		#10;
		immed = 16'b1100000000000000;
		#10;

	end
      
endmodule

