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

module test_adder2bits();

	// Inputs
	reg [2:0] A, B; // 
	
	// Outputs
	wire Co;
	wire [1:0] S;

	// Instantiate the Unit Under Test (UUT)
	adder_2bit uut (
		.A(A[1:0]), 
		.B(B[1:0]), 
		.Co(Co), 
		.S(S)
	);
	
	integer error = 0;

	initial begin
		// Wait 100 ns for global reset to finish
		#100;	
		
		for (B = 3'b0; B!=3'd4; B= B + 1) begin
		
			for (A = 3'd0; A!= 3'd4; A = A + 1 ) begin
			    #10; // wait for inputs to propagate
				 if (A + B != S) begin
				     if (Co != 1) begin
					      error = error + 1;
							$display("Error: %b + %b is %b with carryover %b", A,B,S,Co);
					  end
				 end
			
			end
		
		end

	end
      
endmodule
`default_nettype wire

