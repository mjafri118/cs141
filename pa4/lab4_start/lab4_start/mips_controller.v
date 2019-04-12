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
	output reg MemtoReg, RegDST, IorD, PCSrc, IRWrite, MemWrite, PCWrite, Branch, RegWrite;
	reg MemtoReg_next, RegDST_next, IorD_next, PCSrc_next, IRWrite_next, MemWrite_next, PCWrite_next, Branch_next, RegWrite_next;
	output reg [1:0] ALUSrcA;
	output reg [2:0] ALUSrcB;
	reg [1:0] ALUSrcA_next;
	reg [2:0] ALUSrcB_next;
	output wire [3:0] ALUControl;
	
	reg [1:0] ALUOp, ALUOp_next;
	//Function controls
	reg [5:0] FalseFunct;
	reg FunctControl, FunctControl_next;
	wire [5:0] ALUFunct;

	
	// FSM Variables
	reg [3:0] state, next_state; 
	
	// Mux for Funct controls
	two_mux #(
		.N(32)
	) FunctMux(
			.X(Funct), .Y(FalseFunct), .Z(ALUFunct), .CTRL(FunctControl));
	
	// Instantiate External ALU Decoder
	alu_decoder aluDecoder(.ALUOp(ALUOp), .Funct(ALUFunct), .ALUControl(ALUControl));
	
	
	// OUTPUT
	
		//change to next state and change value of any internal register
	always @(posedge clk) begin 
		if (rst) begin
			state <= s7; 
		end
		else begin
			state <= next_state;
		end
		
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
		
		ALUOp <= ALUOp_next;
		FunctControl <= FunctControl_next;
		
	end 

	always @(Funct, OpCode, state,rst) begin
		case (state)
			
			// repeat to take into account non perfect memory
			sr : begin 
				// multiplexer selects
				// DC when doesn't show up in FSM
				IorD_next <= 0;
				ALUSrcA_next <= 00;
				ALUSrcB_next <= 3'b001;
				ALUOp_next <= 2'b00;
				PCSrc_next <= 0;
				FunctControl_next <= 0;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 0;
				PCWrite_next <= 1;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
				
				next_state <= s0;
			end

		
			s0 : begin // fetch, reset state
//				$display("s0");
				// multiplexer selects
				// DC when doesn't show up in FSM
				ALUSrcA_next <= 00;
				ALUSrcB_next <= 3'b001;
				ALUOp_next <= 2'b00;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 0;
				PCWrite_next <= 0;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
				
				next_state <= s1;
//				$display("next state s1");
			
			end
			
			s1 : begin // decode	
				$display("s1");
				// Go to R-Type FSM
				if (OpCode == 6'b000000) begin
					// multiplexer selects
					// DC when doesn't show up in FSM
					
					ALUOp_next <= 2'b10;
					FunctControl_next <= 0;
					
					// Change Mux 4-to-1 control signal to 11 if R-type shift is used. //Funct == (6'b101010 || 6'b000000 || 6'b000010 || 6'b000011) || 
					if ((Funct == 6'b000000) || (Funct == 6'b000010) || (Funct == 6'b000011)) begin
						$display("entering shift R, %b", Funct);
						 ALUSrcA_next <= 2'b10;
						 ALUSrcB_next <= 3'b011;    
					end 
					
					// Else use the output of regb using control signal 00 
					else begin
	//					$display("entering normal R");
						 ALUSrcA_next <= 2'b01;
						 ALUSrcB_next <= 3'b000;
					end
					
					// Register Enables
					// if they don't show up, must be set as 0
					IRWrite_next <= 0;
					PCWrite_next <= 0;
					MemWrite_next <= 0;
					Branch_next <= 0;
					RegWrite_next <= 0;
					
					next_state <= s6;
					$display("next state s6");
				end
				
				//Enter I-type
				else if((OpCode == 6'b001100) || (OpCode == 6'b001101) || (OpCode == 6'b001110) || (OpCode == 6'b001010) || (OpCode == 6'b001000)) begin
					
					//manipulate FunctControl_next so that false Funct is sent
					ALUOp_next <= 2'b10;
					FunctControl_next <= 1;
					
					//Defining False Funct
					case(OpCode)
						//andi
						6'b001100:
							FalseFunct <= 6'b100100;
						//ori
						6'b001101:
							FalseFunct <= 6'b100101;
						//xori
						6'b001110:
							FalseFunct <= 6'b100110;
						//slti
						6'b001010:
							FalseFunct <= 6'b101010;
						//addi
						6'b001000:
							FalseFunct <= 6'b100000;
					endcase
					
					//SrcB on 010 to take in sign extended immediate
					ALUSrcA_next <= 2'b01;
					ALUSrcB_next <= 3'b010;
					
					// Register Enables
					// if they don't show up, must be set as 0
					IRWrite_next <= 0;
					PCWrite_next <= 0;
					MemWrite_next <= 0;
					Branch_next <= 0;
					RegWrite_next <= 0;
					
					next_state <= s9;
				end
				
			end
			
			s6 : begin // state 6: execution R-type
				// multiplexer selects
				// DC when doesn't show up in FSM
				RegDST_next <= 1;
				MemtoReg_next <= 0;
				FunctControl_next <= 0;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 0;
				PCWrite_next <= 0;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 1;
				
				next_state <= s7;
			
			end
			
			s7 : begin // state 7: write back R-type
				// multiplexer selects
				// DC when doesn't show up in FSM
				IorD_next <= 0;
				ALUSrcA_next <= 0;
				ALUSrcB_next <= 3'b001;
				ALUOp_next <= 2'b00;
				PCSrc_next <= 0;
				FunctControl_next <= 0;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 1;
				PCWrite_next <= 0;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
				
				next_state <= sr;
			
			end
			
			s9 : begin	// state 9: execution I type
				// multiplexer selects
				// DC when doesn't show up in FSM
				RegDST_next <= 0;
				MemtoReg_next <= 0;
				FunctControl_next <= 0;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 0;
				PCWrite_next <= 0;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 1;
				
				next_state <= s10;
			end
			
			s10 : begin
				// multiplexer selects
				// DC when doesn't show up in FSM
				IorD_next <= 0;
				ALUSrcA_next <= 0;
				ALUSrcB_next <= 3'b001;
				ALUOp_next <= 2'b00;
				PCSrc_next <= 0;
				FunctControl_next <= 0;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 1;
				PCWrite_next <= 0;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
				
				next_state <= sr;
			end
			
			default : begin	// equivalent to s0
				// multiplexer selects
				// DC when doesn't show up in FSM
				IorD_next <= 0;
				ALUSrcA_next <= 0;
				ALUSrcB_next <= 3'b001;
				ALUOp_next <= 2'b00;
				PCSrc_next <= 0;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 1;
				PCWrite_next <= 0;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
				
				next_state <= sr;
				
			end
			
		endcase
	
	end

	//port definitions - customize for different bit widths




endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
