`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:11:09 01/18/2019
// Design Name:   timer
// Module Name:   Z:/labs/lab3_2019/tb_timer.v
// Project Name:  lab3_2019
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: timer
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_timer;

	// Inputs
	reg clk;
	reg rst;
	reg start;
	reg [3:0] init;

	// Outputs
	wire done;

	// Instantiate the Unit Under Test (UUT)
	timer uut (
		.clk(clk), 
		.rst(rst), 
		.start(start), 
		.init(init), 
		.done(done)
	);

	always begin 
		#5 clk = ~clk; 
	end
	
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		start = 0;
		init = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		rst = 1; 
		#10; 
		rst = 0; 
		#10;
		init = 3'd4;
		#10
		start = 1;
		#10; 
		start = 0; 
		#100;
		rst = 1; 
		#10;
		rst = 0; 
		init = 1001;
		#10; 
		start = 1; 
		#10; 
		start = 0; 
		#200;
		rst = 1; 
		#10 
		rst = 0; 
		#10;
		$finish;
	
	end
      
endmodule

