`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    traffic_light_controller 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
//define states
`define IDLE 4'b0000
`define SAMPLE_STATE1 4'b0001
`define SAMPLE_STATE2 4'b0010


//useful macros
`define LIGHT_RED 3'b001
`define LIGHT_YELLOW 3'b010
`define LIGHT_GREEN 3'b100

`define PED_NS 2'b10
`define PED_EW 2'b01 
`define PED_BOTH 2'b11 
`define PED_NEITHER 2'b00 

module traffic_light_controller(clk, rst, timer_en, timer_load, timer_init, timer_out, 
										  car_ns, car_ew, ped, light_ns, light_ew, light_ped);

	//port definitions 
	input clk, rst, car_ns, car_ew, ped;
	input wire [3:0] timer_out; 
	
	output reg [3:0] timer_init; 
	output reg [2:0] light_ns, light_ew; 
	output reg [1:0] light_ped;
	output reg timer_load, timer_en; 

	reg [3:0] state, next_state; 
	reg sample_reg, sample_reg_next; 
	
	
	//change to next state and change value of any internal register
	always @(posedge clk or posedge rst) begin 
		if (rst) begin
			state <= `IDLE; 
			sample_reg <= 0; 
		end
		else
			state <= next_state;
			sample_reg <= sample_reg_next; 	
	end 
	
	//triggers on change of state or inputs
	always @(state, timer_out, rst, ped, car_ns, car_ew/*, from_ns*/) begin 
		case (state) 
				`IDLE : begin 
					
					//set outputs
					light_ns <= `LIGHT_RED;
					light_ew <= `LIGHT_RED;
					light_ped <= `PED_NEITHER; 
					timer_en <= 0; 
					timer_load <= 1; 
					timer_init <= 4'b1111;

					
					//sample state transition
					if (ped)
						next_state <= `SAMPLE_STATE1;
					else 
						next_state <= `SAMPLE_STATE2; 
					
					//set next value for internal registers
					sample_reg_next <= 1; 
				end
				
				
				default : begin 
					light_ns <= `LIGHT_RED;
					light_ew <= `LIGHT_RED;
					light_ped <= `PED_NEITHER; 
					timer_en <= 0; 
					timer_load <= 1;
					timer_init <= 4'b1111;	
					
					next_state <= `IDLE; 
					
					sample_reg_next <= 0; 
				end
		endcase
	end 

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
