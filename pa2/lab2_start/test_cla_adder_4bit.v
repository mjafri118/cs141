`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:17:14 02/17/2019
// Design Name:   cla_adder_4bit
// Module Name:   Z:/shared_folder/cs141/pa2/lab2_start/test_cla_adder_4bit.v
// Project Name:  lab2_alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cla_adder_4bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_cla_adder_4bit;

	// Inputs
	reg [3:0] A;
	reg [3:0] B;
	reg C0;

	// Outputs
	wire [3:0] S;
	wire C4, Pg, Gg;

	// Instantiate the Unit Under Test (UUT)
	cla_adder_4bit uut (
		.A(A), 
		.B(B), 
		.S(S), 
		.C0(C0), 
		.C4(C4),
		.Pg(Pg),
		.Gg(Gg)
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
//		for (B = 4'd1; B!=4'd15; B= B + 1) begin
		B = 4'd5;
		for (A = 4'd1; A!= 4'd15; A = A + 1 ) begin
			#10;
			$display("Add: %d + %d = ", A, B, S);
			if((A + B + C0 !== S) && (C4 !== 1)) begin	//adding errors
				$display("ERROR addition error ABOVE");
				error = error + 1;
			end
			if((A + B >= 16) && (C4 !== 1)) begin	//carry errors
				$display("ERROR no carry ABOVE");
				error = error + 1;
			end
			if(C4 == 1) begin
				$display("WARNING carry");
			end
		end
		
		C0 = 1;	//test with a carry now
		for (A = 4'd1; A!= 4'd15; A = A + 1 ) begin
			#10;
			$display("Add: %d + %d = ", A, B, S);
			if((A + B + C0 !== S) && (C4 !== 1)) begin	//adding errors
				$display("ERROR addition error ABOVE");
				error = error + 1;
			end
			if((A + B >= 16) && (C4 !== 1)) begin	//carry errors
				$display("ERROR no carry ABOVE");
				error = error + 1;
			end
			if(C4 == 1) begin
				$display("WARNING carry");
			end
		end

	end
      
endmodule

