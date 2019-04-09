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
module timer(clk, rst, en, load, init, out);

	//parameter definitions

	//port definitions - customize for different bit widths
	parameter n = 4 ;
	input clk, rst, en, load;
	input [n-1:0] init;
	output [n-1:0] out;
	
	reg [n-1:0] out ;
	reg [n-1:0] next ;
	
	always @ (posedge clk or posedge rst) begin
		if (rst)
			out <= {n{1'b1}};
		else
			out <= next; 
	end

	always@(*) begin
		if (load)
			next = init;
		else if (en && out > 0)
			next = out - 1'b1;
		else
			next = out;
	end

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
