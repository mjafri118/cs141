`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:46:54 02/12/2019
// Design Name:   mux_16to1
// Module Name:   Z:/shared_folder/cs141/pa2/lab2_start/test_mux_16to1.v
// Project Name:  lab2_alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux_16to1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_adder();

	// Inputs
	reg A, B, Ci;
	
	// Outputs
	wire Co, S;

	// Instantiate the Unit Under Test (UUT)
	adder_1bit uut (
		.A(A), 
		.B(B), 
		.Ci(Ci),
		.Co(Co), 
		.S(S)
		
	);
	
	integer error = 0;

	initial begin
		// Initialize Inputs
		B = 1'b1;
		Ci = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		
		$display("0 + 1 is %b", S);
		
		
		for (B = 0; B!=1'b1; B= B + 1) begin
			for (A = 0; A!=1'b1; A = A + 1'b1) begin
				 #10; // wait for inputs to propagate
				 if (A + B != S) begin
				     if (Co == 1) begin
					      error = error + 1;
					  
					  end
					  
				 end
			end
		end

	end
      
endmodule
`default_nettype wire

