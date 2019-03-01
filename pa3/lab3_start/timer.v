`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    timer_new 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module timer #(parameter n = 4) (clk, rst, en, load, init, out);

	//port definitions - customize for different bit widths
	input clk, rst, en, load;
	input [n-1:0] init;
	output [n-1:0] out;
	
	reg [n-1:0] out_reg, out_next;
	
	// Reset
	always @(posedge clk, posedge rst)
	begin
		if (rst)
			out_reg <= {(n) {1'b1}}; // is load maximum value?
		else
			out_reg <= out_next;
	end
	
	// Next state logic
	always @*
	begin
		
		// Load init value.
		if (load)
			out_next <= init;
		
		// Load decrement if not already at 0.
		else if (en)
			out_next <= (out_reg == {(n) {1'b0}} ) ? {(n) {1'b0}} : out_reg - 1;
		
		// Basically do nothing! "Pause."
		else
			out_next <= out_reg;	
	end

	assign out = out_reg;


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
