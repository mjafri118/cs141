`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:22:21 04/04/2019
// Design Name:   timer
// Module Name:   Z:/shared_folder/cs141/pa3/lab3_start/asdf.v
// Project Name:  lab3_start
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

module asdf;

	// Inputs
	reg clk;
	reg rst;
	reg en;
	reg load;
	reg [3:0] init;

	// Outputs
	wire [3:0] out;

	// Instantiate the Unit Under Test (UUT)
	timer uut (
		.clk(clk), 
		.rst(rst), 
		.en(en), 
		.load(load), 
		.init(init), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		en = 0;
		load = 0;
		init = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

