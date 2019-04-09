`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:46:17 01/28/2019
// Design Name:   main
// Module Name:   Z:/CS141_2019/lab3_2019/tb_main.v
// Project Name:  lab3_2019
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_main;

	// Inputs
	reg [7:0] switch;
	reg rstb_button;
	reg unbuf_clk;
	reg button_center;

	// Outputs
	wire [7:0] led;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.switch(switch), 
		.led(led), 
		.rstb_button(rstb_button), 
		.unbuf_clk(unbuf_clk), 
		.button_center(button_center)
	);
	
	always #2.5 unbuf_clk = ~unbuf_clk; 

	initial begin
		// Initialize Inputs
		switch = 0;
		rstb_button = 0;
		unbuf_clk = 0;
		button_center = 0;
		
		// Wait 100 ns for global reset to finish
		#100;
		rstb_button = 1; 
		#50;
		#320;
		switch[0] = 1; 
		#10;
		switch[0] = 0; 
		#190;
		switch[7] = 1; 
		#10;
		switch[7] = 0;
		#190;
		switch[4] = 1; 
		#350;
		switch[4]= 0; 
		switch[0] = 1;
		#300;
		$finish;
		
        
		// Add stimulus here

	end
      
endmodule

