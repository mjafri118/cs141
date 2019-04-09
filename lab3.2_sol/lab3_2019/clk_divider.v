`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    clk_divider 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module clk_divider(clk_in, rst, clk_out);

	//parameter definitions

	//port definitions - customize for different bit widths
	input wire clk_in;
	input wire rst;
	output reg clk_out;
	
	reg[31:0] counter;
	
	always @(posedge clk_in or posedge rst) begin 
		if (rst) begin 
			clk_out <= 0; 
			counter <= 0; 
		end 
		else if (counter == 49_999_999) begin 
			counter <= 0; 
			clk_out <= ~clk_out; 
		end else begin 
			counter <= counter + 1; 
			clk_out <= clk_out; 
		end
	end
	



endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
