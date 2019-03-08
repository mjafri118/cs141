`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2016
// Module Name:    main 
// Author(s): [[your names here]]
// Description: CS141 Lab 3
//
//
//////////////////////////////////////////////////////////////////////////////////

module main(switch, led, rstb_button, button_center, button_down, unbuf_clk);

	//port definitions
	input wire [7:0] switch;
	input wire rstb_button, unbuf_clk, button_center, button_down;
	output wire [7:0] led;
	
	wire clk_1hz, rstb, rst, button_center_db, button_down_db, cclk;
	wire car_ns, car_ew, ped;
	wire [2:0] light_ew, light_ns; 
	wire [1:0] light_ped;
	
	wire en, load, timer_rst; 
	wire [3:0] init, out; 
	
	// debounce any changes lasting less than 100ms
	debouncer #(.CYCLES(10_000_000),.RESET_VALUE(1'b0),.COUNTER_WIDTH(32)) DEBOUNCE_RSTB (
		.clk(cclk),.rst(1'b0),.bouncy(rstb_button),.debounced(rstb));		
	
	debouncer #(.CYCLES(10_000_000),.RESET_VALUE(1'b0),.COUNTER_WIDTH(32)) DEBOUNCE_CENTB (
		.clk(cclk),.rst(1'b0),.bouncy(button_center),.debounced(button_center_db));

	debouncer #(.CYCLES(10_000_000),.RESET_VALUE(1'b0),.COUNTER_WIDTH(32)) DEBOUNCE_DOWNB (
		.clk(cclk),.rst(1'b0),.bouncy(button_down),.debounced(button_down_db));			
	
	assign timer_rst = button_down_db;
	assign rst = ~rstb; 
	
	clock_generator CLOCK_GEN (.clk_100M_raw(unbuf_clk),.clk_100M(cclk));
	
	clk_divider div_1hz(.clk_in(cclk), .rst(rst) ,.clk_out(clk_1hz));
		
	timer timer_u(.clk(clk_1hz), .rst(timer_rst), .en(en), .load(load), .init(init), .out(out)); 
	
	//uncomment for part 2
	//traffic_light_controller tlc(.clk(clk_1hz), .rst(timer_rst), .timer_en(en), .timer_load(load), .timer_init(init), .timer_out(out),
	//.car_ns(car_ns), .car_ew(car_ew), .ped(ped), .light_ns(light_ns), .light_ew(light_ew), .light_ped(light_ped));
	
	//Part 1 I/O
	//comment out for part 2
	assign led[7:4] = 3'b0; 
	assign led[3:0] = out; 
	assign init = switch[3:0];
	assign load = button_center_db; 
	assign en = 1'b1;
	
	// TEST: last led shows clock
	//assign led[7] = clk_1hz;
	 
	
	//Part 2 I/O
	//uncomment for part 2 
	/*assign car_ns = |switch[7:5]; 
	assign car_ew = |switch[2:0]; 
	assign ped = |switch[4:3];
	assign led[7:5] = light_ns; 
	assign led[4:3] = light_ped;
	assign led[2:0] = light_ew;*/
	
endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
