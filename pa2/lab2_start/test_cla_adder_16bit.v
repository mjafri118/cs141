`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:02:45 02/18/2019
// Design Name:   cla_adder_16bit
// Module Name:   Z:/shared_folder/cs141/pa2/lab2_start/test_cla_adder_16bit.v
// Project Name:  lab2_alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cla_adder_16bit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_cla_adder_16bit;

	// Inputs
	reg [15:0] A;
	reg [15:0] B;
	reg C0;

	// Outputs
	wire [15:0] S;
	wire C16;
	wire Pg;
	wire Gg;

	// Instantiate the Unit Under Test (UUT)
	cla_adder_16bit uut (
		.A(A), 
		.B(B), 
		.S(S), 
		.C0(C0), 
		.C16(C16), 
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
		B = 16'd5;	//basic low value adding
		for (A = 16'd1; A!= 16'd15; A = A + 1 ) begin
			#10;
			$display("Add: %d + %d = ", A, B, S);
			if((A + B + C0 !== S) && (C16 !== 1)) begin	//adding errors
				$display("ERROR addition error ABOVE");
				error = error + 1;
			end
			if((A + B >= 65536) && (C16 !== 1)) begin	//carry errors
				$display("ERROR no carry ABOVE");
				error = error + 1;
			end
			if(C16 == 1) begin
				$display("WARNING carry");
			end
		end
		
		B = 16'd84;	//using multiple units
		for (A = 16'd24; A!= 16'd58; A = A + 1 ) begin
			#10;
			$display("Add: %d + %d = ", A, B, S);
			if((A + B + C0 !== S) && (C16 !== 1)) begin	//adding errors
				$display("ERROR addition error ABOVE");
				error = error + 1;
			end
			if((A + B >= 65536) && (C16 !== 1)) begin	//carry errors
				$display("ERROR no carry ABOVE");
				error = error + 1;
			end
			if(C16 == 1) begin
				$display("WARNING carry");
			end
		end
		
		B = 16'd65500;	//large values and overflowing
		for (A = 16'd24; A!= 16'd58; A = A + 1 ) begin
			#10;
			$display("Add: %d + %d = ", A, B, S);
			if((A + B + C0 !== S) && (C16 !== 1)) begin	//adding errors
				$display("ERROR addition error ABOVE");
				error = error + 1;
			end
			if((A + B >= 65536) && (C16 !== 1)) begin	//carry errors
				$display("ERROR no carry ABOVE");
				error = error + 1;
			end
			if(C16 == 1) begin
				$display("WARNING carry");
			end
		end
		
		C0 = 1;
		B = 16'd65500;	//large values and overflowing
		for (A = 16'd24; A!= 16'd58; A = A + 1 ) begin
			#10;
			$display("Add: %d + %d = ", A, B, S);
			if((A + B + C0 !== S) && (C16 !== 1)) begin	//adding errors
				$display("ERROR addition error ABOVE");
				error = error + 1;
			end
			if((A + B >= 65536) && (C16 !== 1)) begin	//carry errors
				$display("ERROR no carry ABOVE");
				error = error + 1;
			end
			if(C16 == 1) begin
				$display("WARNING carry");
			end
		end
		

	end
      
endmodule

