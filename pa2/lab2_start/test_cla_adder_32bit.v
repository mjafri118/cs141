`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:21:35 02/18/2019
// Design Name:   cla_adder_32bit
// Module Name:   Z:/shared_folder/cs141/pa2/lab2_start/test_cla_adder_32bit.v
// Project Name:  lab2_alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cla_adder_32bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_cla_adder_32bit;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg C0;

	// Outputs
	wire [31:0] S;
	wire C32;
	wire Pg;
	wire Gg;
	wire overflow;

	// Instantiate the Unit Under Test (UUT)
	cla_adder_32bit uut (
		.A(A), 
		.B(B), 
		.S(S), 
		.C0(C0), 
		.C32(C32), 
		.Pg(Pg), 
		.Gg(Gg),
		.overflow(overflow)
	);

	integer error = 0;
	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		C0 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		B = 32'd5;	//basic low value adding
		for (A = 32'd1; A!= 32'd15; A = A + 1 ) begin
			#10;

		end

		B = 32'd639872;	//basic low value adding
		for (A = 32'd19837; A!= 32'd19893; A = A + 1 ) begin
			#10;
		end
		
		B = 32'd2147483547;	//large values and overflow
		for (A = 32'd75; A!= 32'd125; A = A + 1 ) begin
			#10;
		end

		C0 = 1;
		for (A = 32'd75; A!= 32'd125; A = A + 1 ) begin
			#10;
		end

	end
   
	always@(A, B, C0) begin
		#1;
		$display("Add: carry is %d; %d + %d = ", C0, A, B, S);
		if((A + B + C0 !== S) && (overflow !== 1)) begin	//adding errors
			$display("ERROR addition error ABOVE");
			error = error + 1;
		end
		if((A + B > 2147483647) && (overflow !== 1)) begin	//carry errors
			$display("ERROR no overflow ABOVE");
			error = error + 1;
		end
		if(overflow == 1) begin
			$display("WARNING overflow");
		end
	end
	
	
endmodule

