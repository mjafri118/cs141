`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:41:32 01/18/2019
// Design Name:   traffic_light_controller
// Module Name:   Z:/labs/lab3_2019/tb_tlc.v
// Project Name:  lab3_2019
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: traffic_light_controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_tlc;

	// Inputs
	reg clk;
	reg rst;
	reg car_ns;
	reg car_ew;
	reg ped;

	// Outputs
	wire [2:0] light_ns;
	wire [2:0] light_ew;
	wire [1:0] light_ped;

	// Instantiate the Unit Under Test (UUT)
	traffic_light_controller uut (
		.clk(clk), 
		.rst(rst), 
		.car_ns(car_ns), 
		.car_ew(car_ew), 
		.ped(ped), 
		.light_ns(light_ns), 
		.light_ew(light_ew), 
		.light_ped(light_ped)
	);
	
	always #5 clk = ~clk;

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		car_ns = 0;
		car_ew = 0;
		ped = 0;

		// Wait 100 ns for global reset to finish
		#5;
		
		rst = 0; 
		#320;
		car_ew = 1; 
		#10;
		car_ew = 0; 
		#190;
		car_ns = 1; 
		#10;
		car_ns = 0;
		#190;
		ped = 1; 
		#350;
		ped = 0; 
		car_ew = 1;
		#300;
		$finish;
		
        
		// Add stimulus here

	end
      
endmodule

