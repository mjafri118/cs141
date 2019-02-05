`timescale 1ns / 1ps  //sets the timescale (for simulation)
`default_nettype none //overrides default behaviour: errors when a net type is not declired

module main(switch, led);
	// declare inputs and outputs
	input wire [7:0] switch;
	output wire [7:0] led;

	assign led[7:4] = 4'b0000;

	// problem 1
	assign led[0] = switch[0] & switch[1];

endmodule

`default_nettype none //reengages default behaviour: needed for other Xilinx modules
