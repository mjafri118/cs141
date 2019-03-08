`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:12:37 03/05/2019
// Design Name:   traffic_light_controller
// Module Name:   Z:/shared_folder/cs141/pa3/lab3_start/test_traffic_light_controller.v
// Project Name:  lab3_start
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

module test_traffic_light_controller;

	// Inputs
	reg clk;
	reg rst;
	reg [3:0] timer_out;
	reg car_ns;
	reg car_ew;
	reg ped;

	// Outputs
	wire timer_en;
	wire timer_load;
	wire [3:0] timer_init;
	wire [2:0] light_ns;
	wire [2:0] light_ew;
	wire [1:0] light_ped;

	// Instantiate the Unit Under Test (UUT)
	traffic_light_controller uut (
		.clk(clk), 
		.rst(rst), 
		.timer_en(timer_en), 
		.timer_load(timer_load), 
		.timer_init(timer_init), 
		.timer_out(timer_out), 
		.car_ns(car_ns), 
		.car_ew(car_ew), 
		.ped(ped), 
		.light_ns(light_ns), 
		.light_ew(light_ew), 
		.light_ped(light_ped)
	);

	integer timer = 4'd0;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		timer_out = 0;
		car_ns = 0;
		car_ew = 0;
		ped = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		if(timer == 5) begin
			rst = 1;
		end
		if(timer == 6) begin
			rst = 0;
		end
		
		if(timer == 13) begin
			car_ns = 1;
		end
		if(timer == 24) begin
			car_ns = 0;
			car_ew = 1;
		end
		if(timer == 30) begin
			car_ew = 0;
		end
		
		

	end
	
	integer cur_state = 8'b00000000;
	integer prev_state = 8'b00000000;
	
	//Run a clock
	integer T = 1000000000; // 1 second period
	always begin
		clk = 1'b0;
		#(T/2);
		clk = 1'b1;
		#(T/2);
		timer = timer + 1;
	end
	
	// Test blocks checking requirements
	always @(light_ns, light_ew, light_ped) begin
		#2;
//		timer = 4'd0;
		// need to keep track of previous state to make sure transitions in right order
		prev_state = cur_state;
		cur_state = light_ns + light_ped + light_ew;
		
		$display("TIME = %b", timer);
		case(prev_state)
			8'b00100001 : begin
				if(cur_state !== 8'b00111001) begin
					$display("ERROR: Rule 2  Cur: NS=%b, EW=%b, PED=%b		Prev: NS=%b, EW=%b, PED=%b		Time=%b", cur[7:5], cur[2:0], cur[4:3], prev[7:5], prev[2:0], prev[4:3], timer);
				end
			end
			
			8'b00111001 : begin
				if(car_ns == 1 && cur_state !== 8'b10010001) begin
					$display("ERROR: Rule 4 (NS)  Cur: NS=%b, EW=%b, PED=%b		Prev: NS=%b, EW=%b, PED=%b		Time=%b", cur[7:5], cur[2:0], cur[4:3], prev[7:5], prev[2:0], prev[4:3], timer);
				end
				if(car_ew == 1 && cur_state !== 8'b00101100) begin
					$display("ERROR: Rule 4 (EW)  Cur: NS=%b, EW=%b, PED=%b		Prev: NS=%b, EW=%b, PED=%b		Time=%b", cur[7:5], cur[2:0], cur[4:3], prev[7:5], prev[2:0], prev[4:3], timer);
				end
			end

			8'b10010001: begin
				if(cur_state !== 8'b01010001) begin
					$display("ERROR: Rule 8 (NS)  Cur: NS=%b, EW=%b, PED=%b		Prev: NS=%b, EW=%b, PED=%b		Time=%b", cur[7:5], cur[2:0], cur[4:3], prev[7:5], prev[2:0], prev[4:3], timer);
				end
			end
			
			8'b00101100: begin
				if(cur_state !== 8'b00101010) begin
					$display("ERROR: Rule 8 (NS)  Cur: NS=%b, EW=%b, PED=%b		Prev: NS=%b, EW=%b, PED=%b		Time=%b", cur[7:5], cur[2:0], cur[4:3], prev[7:5], prev[2:0], prev[4:3], timer);
				end
			end
			
		endcase		
		
	end
      
endmodule

