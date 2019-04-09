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
`define IDLE 4'b0000
`define ALL_RED_START 4'b0001
`define ALL_RED 4'b0011
`define NS_GREEN_START 4'b0010
`define NS_GREEN 4'b0110
`define NS_YELLOW_START 4'b0111
`define NS_YELLOW 4'b0101
`define EW_GREEN_START 4'b0100
`define EW_GREEN 4'b1100
`define EW_YELLOW_START 4'b1101
`define EW_YELLOW 4'b1001

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
	reg from_ns, from_ns_next; 
	
	
	always @(posedge clk or posedge rst) begin 
		if (rst) begin
			state <= `IDLE; 
		end
		else
			state <= next_state;		
	end 
	
	always @(posedge clk) begin 
		if (rst)
			from_ns <= 0;
		else 
			from_ns <= from_ns_next; 
	end
	
	always @(state, timer_out, rst, ped, car_ns, car_ew, from_ns) begin 
		case (state) 
				`IDLE : begin 
					light_ns <= `LIGHT_RED;
					light_ew <= `LIGHT_RED;
					light_ped <= `PED_NEITHER; 
					timer_en <= 0; 
					timer_load <= 1; 
					from_ns_next <= 0; 
					next_state <= `ALL_RED_START; 
					timer_init <= 4'b1111;
				end
				
				`ALL_RED_START : begin 
					light_ns <= `LIGHT_RED;
					light_ew <= `LIGHT_RED;
					light_ped <= `PED_BOTH;
					timer_load <= 0;
					timer_en <= 1;
					next_state <= `ALL_RED; 
					timer_init <= 4'b1111; 
					from_ns_next <= from_ns; 
				end
				
				`ALL_RED : begin 
					light_ns <= `LIGHT_RED;
					light_ew <= `LIGHT_RED;
					light_ped <= `PED_BOTH;
					from_ns_next <= from_ns; 
					timer_en <= 1; 
					
					if (timer_out == 4'b0000) begin 
						timer_load <= 1;
						timer_init <= 4'b1010; 
						if (car_ns && !car_ew) next_state <= `NS_GREEN_START;
						else if (car_ew && !car_ns) next_state <= `EW_GREEN_START;
						else if (from_ns) next_state <= `EW_GREEN_START; 
						else next_state <= `NS_GREEN_START; 
					end else begin 
						timer_load <= 0; 
						timer_init <= 4'b1111; 
						next_state <= `ALL_RED; 
					end
				end
				
				`NS_GREEN_START : begin 
					light_ns <= `LIGHT_GREEN;
					light_ew <= `LIGHT_RED;
					light_ped <= `PED_NS; 
					next_state <= `NS_GREEN;
					timer_init <= 4'b1111; 
					timer_load <= 0;
					timer_en <= 1; 
					from_ns_next <= 1; 
				end
				
				`NS_GREEN : begin 
					light_ns <= `LIGHT_GREEN;
					light_ew <= `LIGHT_RED;
					light_ped <= `PED_NS;  
					timer_en <= 1; 
					from_ns_next <= 1; 
					
					if (timer_out == 4'b0000) begin  
						timer_load <= 1; 
						timer_init <= 4'b0101; 
						next_state <= `NS_YELLOW_START;
					end else begin 
						timer_load <= 0; 
						timer_init <= 4'b1111; 
						next_state <= `NS_GREEN; 
					end
				end
				
				`NS_YELLOW_START : begin 
					light_ns <= `LIGHT_YELLOW;
					light_ew <= `LIGHT_RED;
					light_ped <= `PED_NS;
					next_state <= `NS_YELLOW;
					timer_init <= 4'b1111; 
					timer_load <= 0;
					timer_en <= 1; 
					from_ns_next <= 1; 
				end
				
				`NS_YELLOW : begin 
					light_ns <= `LIGHT_YELLOW;
					light_ew <= `LIGHT_RED;
					light_ped <= `PED_NS;
					timer_en <= 1; 
					from_ns_next <= 1; 
					
					if (timer_out == 4'b0000) begin 
						timer_load <= 1; 
						if (ped) begin 
							timer_init <= 4'b1111;
							next_state <= `ALL_RED_START;
						end
						else begin
							timer_init <= 4'b1010; 
							next_state <= `EW_GREEN_START;
						end
					end else begin 
						timer_init <= 4'b1111;
						timer_load <= 0; 
						next_state <= `NS_YELLOW; 
					end
		
				end
				
				`EW_GREEN_START : begin 
					light_ns <= `LIGHT_RED;
					light_ew <= `LIGHT_GREEN;
					light_ped <= `PED_EW;
					next_state <= `EW_GREEN;
					timer_init <= 4'b1111; 
					timer_load <= 0;
					timer_en <= 1; 
					from_ns_next <= 0; 
				end
				
				`EW_GREEN : begin 
					light_ns <= `LIGHT_RED;
					light_ew <= `LIGHT_GREEN;
					light_ped <= `PED_EW;
					timer_en <= 1;  
					from_ns_next <= 0; 
					
					if (timer_out == 4'b0000) begin 
						timer_load <= 1; 
						timer_init <= 4'b0101; 
						next_state <= `EW_YELLOW_START;
					end
					else begin 
						timer_load <= 0; 
						timer_init <= 4'b1111; 
						next_state <= `EW_GREEN; 
					end
				end	
				
				`EW_YELLOW_START : begin 
					light_ns <= `LIGHT_RED;
					light_ew <= `LIGHT_YELLOW;
					light_ped <= `PED_EW;
					next_state <= `EW_YELLOW;
					timer_init <= 4'b1111; 
					timer_load <= 0;
					timer_en <= 1; 
					from_ns_next <= 0; 
				end
				
				`EW_YELLOW : begin 
					light_ns <= `LIGHT_RED;
					light_ew <= `LIGHT_YELLOW;
					light_ped <= `PED_EW;
					timer_en <= 1; 
					from_ns_next <= 0; 
					
					if (timer_out == 4'b0000) begin 
						timer_load <= 1; 
						if (ped) begin 
							next_state <= `ALL_RED_START;
							timer_init <= 4'b1111; 
						end
						else begin
							next_state <= `NS_GREEN_START; 
							timer_init <= 4'b1010; 
						end
					end
					else begin 
						next_state <= `EW_YELLOW;
						timer_load <= 0; 
						timer_init <= 4'b1111; 
					end
				end
				
				default : begin 
					next_state <= `IDLE; 
					timer_en <= 0; 
					timer_load <= 0;
					timer_init <= 4'b1111; 
					light_ns <= `LIGHT_RED;
					light_ew <= `LIGHT_RED;
					light_ped <= `PED_NEITHER; 
					from_ns_next <= 0; 
				end
		endcase
	end 

endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
