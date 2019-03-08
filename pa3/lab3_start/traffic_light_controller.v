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
	
	// These are namespaces used for the states. 
	localparam [3:0]  s0 = 4'b0000,
							s1 = 4'b0001,
							s2 = 4'b0010,
							s3 = 4'b0011,
							s4 = 4'b0100,
							s5 = 4'b0101,
							s6 = 4'b0110,
							s7 = 4'b0111,
							s8 = 4'b1000,
							s9 = 4'b1001,
						  s10 = 4'b1010;

	//port definitions 
	input clk, rst, car_ns, car_ew, ped;
	input wire [3:0] timer_out; 
	
	output reg [3:0] timer_init; 
	output reg [2:0] light_ns, light_ew; 
	output reg [1:0] light_ped;
	output reg timer_load, timer_en; 

	reg [3:0] state, next_state; 
	reg last_green, last_green_next; // 0 for N/S, 1 for E/W
	reg [1:0] next_ped, next_ped_next; // takes same values like PED_BOTH, etc. 
	
	
	//change to next state and change value of any internal register
	always @(posedge clk or posedge rst) begin 
		if (rst) begin
			state <= `IDLE; 
			sample_reg <= 0; 
		end
		else begin
			state <= next_state;
			last_green <= last_green_next;
			next_ped <= next_ped_next;
		end
	end 
	
	//triggers on change of state or inputs
	always @(state, timer_out, rst, ped, car_ns, car_ew) begin 
		case (state) 
				`IDLE : begin // RST STATE
					
					//set outputs
					light_ns <= `LIGHT_RED;
					light_ew <= `LIGHT_RED;
					light_ped <= `PED_NEITHER; 
					timer_en <= 0; 
					timer_load <= 1; 
					timer_init <= 4'b1111;
					
					next_ped_next <= `PED_BOTH; 
					last_green_next <= 1; // E/W last, N/S begins by default.
					
					next_state <= s1;

				end
				
				s1 : begin // PED_INIT
				
					//set outputs
					light_ns <= `LIGHT_RED;
					light_ew <= `LIGHT_RED;
					light_ped <= next_ped; 
					timer_en <= 0; 
					timer_load <= 1; 
					timer_init <= 4'd14;
					
					last_green_next <= last_green ;
					
					next_state <= s3;
	
				end
								
				s3 : begin // PED_TIMER_EXECUTE
				   
					//set outputs
					light_ns <= `LIGHT_RED;
					light_ew <= `LIGHT_RED;
					light_ped <= next_ped; 
					timer_en <= 1; 
					timer_load <= 0; 
					timer_init <= 4'd14; // not really necessary.
					
					last_green_next <= last_green ;
					
					if (timer_out == 4'd0) begin // once timer has ended
					
						// go to green light for n/s
						if ((car_ns) && (~car_ew)) 
							next_state <= s4;
						
						// go to green light for e/w
						else if ((~car_ns) && (car_ew)) 
							next_state <= s5;
						
						// if neither or both car_ns, car_ew
						else 
						
							// last green was north/south, so give it to E/W
							if (last_green == 0)
								next_state <= s5;
							
							// last green was e/w, so give it to N/S now. 
							else if (last_green == 1)
								next_state <= s4;
							
					
					end
					
					// timer not done yet. 
					else
						next_state <= s3;
				
				end
				
				s4 : begin // GREEN_NS_SET
				
					//set outputs
					light_ns <= `LIGHT_GREEN;
					light_ew <= `LIGHT_RED;
					light_ped <= `PED_NS; 
					timer_en <= 0; 
					timer_load <= 1; 
					timer_init <= 4'd9;
					
					last_green_next <= last_green ;
					
					// remember that N/S was the last green light.
					last_green_next <= 0;
					
					next_state <= s7; // go to green light timer.
					
				end
				
				s5 : begin // GREEN_EW_SET
						
					//set outputs
					light_ns <= `LIGHT_RED;
					light_ew <= `LIGHT_GREEN;
					light_ped <= `PED_EW; 
					timer_en <= 0; 
					timer_load <= 1; 
					timer_init <= 4'd9;
					
					// remember that E/W was the last green light.
					last_green_next <= 1;
					
					next_state <= s7; // go to green light timer.
				
				end
			
				s7 : begin // GREEN_TIMER_EXECUTE
				
					//set outputs
					// maintains lights.
					light_ns <= last_green ? `LIGHT_RED : `LIGHT_GREEN;
					light_ew <= ~last_green ? `LIGHT_RED : `LIGHT_GREEN;
					light_ped <= last_green ? `PED_EW : `PED_NS; 
					timer_en <= 1; 
					timer_load <= 0; 
					timer_init <= 4'b1111;
					
					last_green_next <= last_green ; // test: defining this on all states.
					
					if (timer_out == 0)
						next_state <= s8;
					else
						next_state <= s7;
				
				end
				
				s8 : begin // YELLOW_SET
				
					//set outputs
					light_ns <= last_green ? `LIGHT_RED : `LIGHT_YELLOW;
					light_ew <= ~last_green ? `LIGHT_RED : `LIGHT_YELLOW;
					light_ped <= last_green ? `PED_EW : `PED_NS; 
					timer_en <= 0; 
					timer_load <= 1; 
					timer_init <= 4'd4;
					
					last_green_next <= last_green ; // test: defining this on all states.
					
					next_state <= s10;
				
				end
				
				s10 : begin // YELLOW_TIMER_EXECUTE
				
					// set outputs
					light_ns <= last_green ? `LIGHT_RED : `LIGHT_YELLOW;
					light_ew <= ~last_green ? `LIGHT_RED : `LIGHT_YELLOW;
					light_ped <= last_green ? `PED_EW : `PED_NS; 
					timer_en <= 1; 
					timer_load <= 0; 
					timer_init <= 4'b1111;
					
					last_green_next <= last_green ; // test: defining this on all states.
					
					// if timer is done
					if (timer_out == 0) begin
						
						// return to ped state if there is a pedestrian
						if (ped)
							next_state <= s1;
							
						// if no pedestrian, then just switch lights	
						else 
							next_state <= last_green ? s4 : s5;
						
					end
					
					// stay in here if timer is not done.
					else 
						next_state <= s10;
					
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
