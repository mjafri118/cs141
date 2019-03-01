`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    test_timer 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module test_timer;

	// Inputs
	reg [3:0] init;
	reg clk, rst, en, load;

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
	
	integer error = 0;
	integer T = 100;
	
	// Make a clock in nanoseconds, 50 ns
	//always #50 clk = ~clk;
	
	always		//constant clock running
	begin
		clk = 1'b1;
		#(T/2);
		clk = 1'b0;
		#(T/2);
	end
	
	initial begin
	
		// Wait 100 ns for global reset to finish
	   #100;
	
		// NORMAL OPERATION
		// Load values in, then see countdown timer work normally.
		@(negedge clk);
		rst = 0;
		init = 4'd5;
		load = 1;
		en = 0;
		@(negedge clk);
		load = 0;
		en = 1; // let values count down
		
		// TEST RESET HIGHEST PRIORITY
		// Same as above, but tests what happens when en, load, and rst are all 1.
		
		wait(out == 4'd0); // ensure 
		@(negedge clk);
		rst = 0;
		init = 4'd5;
		load = 1;
		en = 0;
		@(negedge clk);
		load = 0;
		en = 1;
		@(negedge clk);
		load = 1;
		rst = 1;
		#T;
		
		// TEST LOAD vs. ENABLE
		// Same as above, but tests what happens when en, load, and rst are all 1.
		@(negedge clk);
		rst = 0;
		init = 4'd5;
		load = 1;
		en = 1;
		@(negedge clk);
		load = 0;
		
		// TEST PAUSE
		en = 0;
		rst = 1;
		@(negedge clk);
		rst = 0;
		#(2*T); // value should be constant throughout
		
		
		$display("End of test!");
		$finish;

	end


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
