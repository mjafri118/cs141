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
	parameter N = 32;

	//port definitions - customize for different bit widths
	input wire clk_in;
	input wire rst;
	output reg clk_out;
	
	reg[N-1:0] r_count;
	
	always @(posedge clk_in, posedge rst)
	begin
		if(rst) begin
			r_count <= 0;
			clk_out <= 0;
		end
		else if(r_count == 32'd49999999) begin
			if(clk_out == 1) 
				clk_out = 0;
			else
				clk_out = 1;
			r_count <= 0;
		end
		else begin
			r_count = r_count + 1;
		end
	end
	
	
endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
