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
module mips_controller(clk, rst, Funct, OpCode, MemtoReg, RegDST, IorD, PCSrc, ALUSrcB, ALUSrcA, IRWrite, MemWrite, PCWrite, Branch, RegWrite, ALUControl);
	
	//parameter definitions
	
	// local paramaters
	// These are namespaces used for the states. 
	localparam [3:0]  sr = 4'b1111, 
							sr2 = 4'b1110,
							s0 = 4'b0000,
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
	input wire clk, rst;
	input wire [5:0] Funct, OpCode;
	output reg MemtoReg, RegDST, IorD, PCSrc, ALUSrcA, IRWrite, MemWrite, PCWrite, Branch, RegWrite;
	reg MemtoReg_next, RegDST_next, IorD_next, PCSrc_next, ALUSrcA_next, IRWrite_next, MemWrite_next, PCWrite_next, Branch_next, RegWrite_next;
	output reg [1:0] ALUSrcB;
	reg [1:0] ALUSrcB_next;
	output wire [3:0] ALUControl;
	
	reg [1:0] ALUOp, ALUOp_next;

	
	// FSM Variables
	reg [3:0] state, next_state; 
	
	// Instantiate External ALU Decoder
	alu_decoder aluDecoder(.ALUOp(ALUOp), .Funct(Funct), .ALUControl(ALUControl));
	
	
	// OUTPUT
	
		//change to next state and change value of any internal register
	always @(posedge clk) begin 
		if (rst) begin
			state <= s0; 
		end

		state <= next_state;
		
		// Next statements for outputs
		MemtoReg <= MemtoReg_next;
		RegDST <= RegDST_next;
		IorD <= IorD_next;
		PCSrc <= PCSrc_next;
		ALUSrcA <= ALUSrcA_next;
		ALUSrcB <= ALUSrcB_next;
		IRWrite <= IRWrite_next;
		MemWrite <= MemWrite_next;
		PCWrite <= PCWrite_next;
		Branch <= Branch_next;
		RegWrite <= RegWrite_next;
			
	end 

	always @(Funct, OpCode) begin
		case (state)
			default : begin	// equivalent to s0
				// multiplexer selects
				// DC when doesn't show up in FSM
				IorD_next <= 0;
				ALUSrcA_next <= 0;
				ALUSrcB_next <= 2'b01;
				ALUOp_next <= 2'b00;
				PCSrc_next <= 0;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 1;
				PCWrite_next <= 1;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
				
				
				next_state <= sr;
				
			end
			
			// repeat to take into account non perfect memory
			sr : begin 
				// multiplexer selects
				// DC when doesn't show up in FSM
				IorD_next <= 0;
				ALUSrcA_next <= 0;
				ALUSrcB_next <= 2'b01;
				ALUOp_next <= 2'b00;
				PCSrc_next <= 0;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 1;
				PCWrite_next <= 1;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
				
				next_state <= sr2;
			end
			
			// repeat to take into account non perfect memory
			sr2 : begin 
				// multiplexer selects
				// DC when doesn't show up in FSM
				IorD_next <= 0;
				ALUSrcA_next <= 0;
				ALUSrcB_next <= 2'b01;
				ALUOp_next <= 2'b00;
				PCSrc_next <= 0;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 1;
				PCWrite_next <= 1;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
				
				next_state <= s0;
			end
		
			s0 : begin // fetch, reset state
				// multiplexer selects
				// DC when doesn't show up in FSM
				ALUSrcA_next <= 0;
				ALUSrcB_next <= 2'b01;
				ALUOp_next <= 2'b00;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 0;
				PCWrite_next <= 0;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
				
				next_state <= s1;
			
			end
			
			s1 : begin // decode	
							// Go to R-Type FSM
				if (OpCode == 6'b000000) begin
					// multiplexer selects
					// DC when doesn't show up in FSM
					ALUSrcA_next <= 1;
					ALUOp_next <= 2'b10;
					
					// Change Mux 4-to-1 control signal to 11 if R-type shift is used.
					if (Funct == (6'b101010 || 6'b000000 || 6'b000010 || 6'b000011)) begin
					    ALUSrcB_next <= 2'b11;    
					end 
					
					// Else use the output of regb using control signal 00 
					else begin
					    ALUSrcB_next <= 2'b00;
					end
					
					// Register Enables
					// if they don't show up, must be set as 0
					IRWrite_next <= 0;
					PCWrite_next <= 0;
					MemWrite_next <= 0;
					Branch_next <= 0;
					RegWrite_next <= 0;
					
				   next_state <= s6;
				end
				
			end
			
			s6 : begin // state 6
				// execute
				// multiplexer selects
				// DC when doesn't show up in FSM
				RegDST_next <= 1;
				MemtoReg_next <= 0;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 0;
				PCWrite_next <= 0;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 1;
				
				next_state <= s7;
			
			end
			
			s7 : begin // state 7: write back
				// multiplexer selects
				// DC when doesn't show up in FSM
				IorD_next <= 0;
				ALUSrcA_next <= 0;
				ALUSrcB_next <= 2'b01;
				ALUOp_next <= 2'b00;
				PCSrc_next <= 0;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 1;
				PCWrite_next <= 1;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
				
				next_state <= s0;
			
			end
			
		endcase
	
	end

	//port definitions - customize for different bit widths




endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
