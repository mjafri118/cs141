`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:07:38 02/26/2019
// Design Name:   clk_divider
// Module Name:   Z:/shared_folder/cs141/pa3/lab3_start/test_clk_divider.v
// Project Name:  lab3_start
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clk_divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_clk_divider;
	localparam T = 10;
	// Inputs
	reg clk_in;
	reg rst;

	// Outputs
	wire clk_out;

	// Instantiate the Unit Under Test (UUT)
	clk_divider uut (
		.clk_in(clk_in), 
		.rst(rst), 
		.clk_out(clk_out)
	);

	initial begin	//intial reset
		rst = 1'b1;
		#(T/2-10);
		rst = 1'b0;
	end
	
	always		//constant clock running
	begin
		clk_in = 1'b1;
		#(T/2);
		clk_in = 1'b0;
		#(T/2);
	end
      
endmodule

