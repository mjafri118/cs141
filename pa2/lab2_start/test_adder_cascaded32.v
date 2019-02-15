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

module test_adder_cascaded32();

	// Inputs
	reg [32:0] A, B; // 
	
	// Outputs
	wire Ov;
	wire [31:0] S;

	// Instantiate the Unit Under Test (UUT)
	adder_cascaded32 uut (
		.A(A[31:0]), 
		.B(B[31:0]), 
		.S(S), 
		.Ov(Ov)
	);
	
	integer error = 0;

	initial begin
		// Wait 100 ns for global reset to finish
		#100;	
		A[32] = 0;
		B[32] = 0;
		
		A[31:0] = ~0;
		B[31:0] = 0;
		B[0] = 1;
		#100;
		$display("%b + %b is %b with carryover %b", A[31:0],B[31:0],S,Ov);
		
		
		
		
		for (B = 33'd1; B!=33'd10; B= B + 1) begin
			for (A = 33'd1; A!= 33'd10; A = A + 1 ) begin
			    #100; // wait for inputs to propagate
				 if (A + B != S) begin
				     if (Ov != 1) begin
					      error = error + 1;
							$display("Error: %d + %d is %d with carryover %d", A[31:0],B[31:0],S,Ov);
					  end
				 end
			
			end
		
		end
		
		$display("Completed.");

	end
      
endmodule
`default_nettype wire

