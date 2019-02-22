`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:48:22 02/21/2019
// Design Name:   slt_operator
// Module Name:   Z:/shared_folder/cs141/pa2/lab2_start/test_slt.v
// Project Name:  lab2_alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: slt_operator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_slt;

	// Inputs
	reg signed [31:0] X;
	reg signed [31:0] Y;

	// Outputs
	wire signed [31:0] Z;

	// Instantiate the Unit Under Test (UUT)
	slt_operator uut (
		.X(X), 
		.Y(Y), 
		.Z(Z)
	);
	integer error = 0;
	initial begin
		// Initialize Inputs
		X = 0;
		Y = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		X = 32'd354;	//expect 1
		Y = 32'd450;
		#10;
		
		Y = 32'd204;	// expect 0
		#10;
		
		X = ~X + 1;	//expect 1
		#10;
		
		Y = ~Y + 1;	//expect 1
		#10;
		
		Y = 32'd450;	//expect 0
		Y = ~Y + 1;
		#10;

	end
	always @(X, Y) begin
		#3;
		if((Y > X) && (Z != 1)) begin
			$display("ERROR: X = %d, Y = %d, out = %d", X, Y, Z);
			error = error +1;
		end
		if((Y < X) && (Z == 1)) begin
			$display("ERROR: X = %d, Y = %d, out = %d", X, Y, Z);
			error = error +1;
		end
	end
      
endmodule

