`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    main2 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module main2(switch, led);

	input wire [7:0] switch;
	output wire [7:0] led;

	assign led[7:4] = 4'b0000;

	// problem 2 - implication
	assign led[1] = (~switch[2]) | (switch[2] & switch[3]);
	
endmodule
`default_nettype none //some Xilinx IP requires that the default_nettype be set to wire
