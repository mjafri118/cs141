`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    mips_controller 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module mips_controller(clk, Funct, OpCode, MemtoReg, RegDST, IorD, PCSrc, ALUSrcB, ALUSrcA, IRWrite, MemWrite, PCWrite, Branch, RegWrite, ALUControl);
	
	//parameter definitions
	
	// local paramaters
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
	
	// INPUT
	input wire clk;
	input wire [5:0] Funct, OpCode;
	output wire MemtoReg, RegDST, IorD, PCSrc, ALUSrcA, IRWrite, MemWrite, PCWrite, Branch, RegWrite;
	reg MemtoReg_next, RegDST_next, IorD_next, PCSrc_next, ALUSrcA_next, IRWrite_next, MemWrite_next, PCWrite_next, Branch_next, RegWrite_next;
	// @VICTOR: make NEXT regs for all outputs
	output wire [1:0] ALUSrcB;
	output wire [3:0] ALUControl;
	
	
	// FSM Variables
	reg [3:0] state, next_state; 
	
	wire [1:0] ALUOp;
	// OUTPUT
	
		//change to next state and change value of any internal register
	always @(posedge clk or posedge rst) begin 
		if (rst) begin
			state <= `s0; 
		end
		else begin
			state <= next_state;
			last_green <= last_green_next;
			//next_ped <= next_ped_next;
		end
	end 

	//port definitions - customize for different bit widths


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
