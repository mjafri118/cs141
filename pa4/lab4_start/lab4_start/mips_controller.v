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
	
	
	module mips_controller(clk, rst, Funct, OpCode, MemtoReg, RegDST, IorD, PCSrc, ALUSrcB, ALUSrcA, IRWrite, MemWrite, PCWrite, Branch, RegWrite, ALUControl, Zero, Equal);
	
	//parameter definitions
	
	// local paramaters
	// These are namespaces used for the states. 
	localparam [4:0]  sr = 5'b01111, 
							s0 = 5'b00000,
							s1 = 5'b00001,
							s2 = 5'b00010,
							s3 = 5'b00011,
							s4 = 5'b00100,
							s5 = 5'b00101,
							s6 = 5'b00110,
							s7 = 5'b00111,
							s8 = 5'b01000,
							s9 = 5'b01001,
						  s10 = 5'b01010,
						  s11 = 5'b01011,
						  s12 = 5'b01100,
						  s13 = 5'b01101,
						  s14 = 5'b01110,
						  s15 = 5'b10000,
						  s16 = 5'b10001;
	
	// INPUT
	input wire clk, rst, Zero, Equal;
	input wire [5:0] Funct, OpCode;
	output reg MemtoReg, IorD, IRWrite, MemWrite, PCWrite, Branch, RegWrite;
	reg MemtoReg_next, IorD_next, IRWrite_next, MemWrite_next, PCWrite_next, Branch_next, RegWrite_next;
	output reg [1:0] ALUSrcA, PCSrc, RegDST;
	output reg [2:0] ALUSrcB;
	reg [1:0] ALUSrcA_next, PCSrc_next, RegDST_next;
	reg [2:0] ALUSrcB_next;
	output wire [3:0] ALUControl;
	
	reg [1:0] ALUOp, ALUOp_next;
	//Function controls
	reg [5:0] FalseFunct;
	reg FunctControl, FunctControl_next;
	wire [5:0] ALUFunct;

	
	// FSM Variables
	reg [4:0] state, next_state; 
	
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

	always @(Funct, OpCode, state, rst, Zero) begin
		case (state)
			
			// repeat to take into account non perfect memory
			sr : begin 
				// multiplexer selects
				// DC when doesn't show up in FSM
				IorD_next <= 0;
				ALUSrcA_next <= 2'b00;
				ALUSrcB_next <= 3'b001;
				ALUOp_next <= 2'b00;
				PCSrc_next <= 2'b00;
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
				// multiplexer selects
				// DC when doesn't show up in FSM
				ALUSrcA_next <= 2'b00;
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
			
			end
			
			s1 : begin // decode	
		
				// Go to R-Type FSM
				if (OpCode == 6'b000000) begin
					// multiplexer selects
					// DC when doesn't show up in FSM
					
					ALUOp_next <= 2'b10;
					FunctControl_next <= 0;
					
					// Change Mux 4-to-1 control signal to 11 if R-type shift is used. //Funct == (6'b101010 || 6'b000000 || 6'b000010 || 6'b000011) || 
					if ((Funct == 6'b000000) || (Funct == 6'b000010) || (Funct == 6'b000011)) begin
						 ALUSrcA_next <= 2'b10;
						 ALUSrcB_next <= 3'b011;    
					end 
					
					// Else use the output of regb using control signal 00 
					else begin
						 ALUSrcA_next <= 2'b01;
						 ALUSrcB_next <= 3'b000;
					end
					
					if((Funct == 6'b001000)) begin
						PCSrc_next <= 2'b00;
						PCWrite_next <= 1;
						
						next_state <= s11;
					end
					else begin
						PCWrite_next <= 0;
						
						next_state <= s6;
					end
					
					// Register Enables
					// if they don't show up, must be set as 0
					IRWrite_next <= 0;
					MemWrite_next <= 0;
					Branch_next <= 0;
					RegWrite_next <= 0;
				end
				
				// Enter LW or SW
				else if ((OpCode == 6'b100011) || (OpCode == 6'b101011)) begin
					// Register Enables
					// if they don't show up, must be set as 0
					IRWrite_next <= 0;
					PCWrite_next <= 0;
					MemWrite_next <= 0;
					Branch_next <= 0;
					RegWrite_next <= 0;
					
					ALUSrcA_next <= 2'b01;
					ALUSrcB_next <= 3'b010;
					ALUOp_next <= 2'b00;
					
					next_state <= s2;
				end
				
				//Enter I-type
				else if ((OpCode == 6'b001100) || (OpCode == 6'b001101) || (OpCode == 6'b001110) || (OpCode == 6'b001010) || (OpCode == 6'b001000)) begin
					
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
				
				// Enter j instr
				else if(OpCode == 6'b000010) begin
				
					PCSrc_next <= 2'b10;
					
					// Register Enables
					// if they don't show up, must be set as 0
					IRWrite_next <= 0;
					PCWrite_next <= 1;
					MemWrite_next <= 0;
					Branch_next <= 0;
					RegWrite_next <= 0;
				
					next_state <= s11;
				end
				
				// Enter jal instr
				else if(OpCode == 6'b000011) begin
					ALUSrcA_next <= 2'b00;
					ALUSrcB_next <= 3'b111;
					ALUOp_next <= 2'b00;
					PCSrc_next <= 2'b00;
					
					// Register Enables
					// if they don't show up, must be set as 0
					IRWrite_next <= 0;
					PCWrite_next <= 0;
					MemWrite_next <= 0;
					Branch_next <= 0;
					RegWrite_next <= 0;
				
					next_state <= s12;
				end
				
				// Enter BEQ and BNE instr
				else if ((OpCode == 6'b000100) || (OpCode == 6'b000101)) begin
					 ALUSrcA_next  <= 2'b01;
					 ALUSrcB_next  <= 3'b000;
					 ALUOp_next <= 2'b01;
					 PCSrc_next <= 2'b01;
					 Branch_next <= 0;
					 
					 // Register Enables
					 // if they don't show up, must be set as 0
					 IRWrite_next <= 0;
					 PCWrite_next <= 0;
					 MemWrite_next <= 0;
					 RegWrite_next <= 0;
					
					 next_state <= s8;
				end
				
			end
			
			s2 : begin // state 2: moves to load or store word.
			
				// Load Word
				if (OpCode == 6'b100011) begin
					IorD_next <= 1;
					MemWrite_next <= 0;
					
					next_state <= s3;
				end				
				
				// Store Word
				if (OpCode == 6'b101011) begin
					IorD_next <= 1;
					MemWrite_next <= 1;
	
					next_state <= s5;
				end	
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 0;
				PCWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
			
			end
			
			s3 : begin // Load word's MemRead
			
				IorD_next <= 1;
				MemWrite_next <= 0;
					
				IRWrite_next <= 0;
				PCWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;

				next_state <= s4;
			end
			
			s4 : begin
				RegDST_next <= 2'b00;
				MemtoReg_next <= 1;
				RegWrite_next <= 1; 
				IorD_next <= 0; // testing IorD
				
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 0;
				PCWrite_next <= 0;
				MemWrite_next <= 0;
				Branch_next <= 0;
				
				next_state <= s10;
			end
			
			s5  : begin
				IorD_next <= 0;
				MemWrite_next <= 0;
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 0;
				PCWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
				
				next_state <= s10;
			end	
			
			s6 : begin // state 6: execution R-type
				// multiplexer selects
				// DC when doesn't show up in FSM
				RegDST_next <= 2'b01;
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
				ALUSrcA_next <= 2'b00;
				ALUSrcB_next <= 3'b001;
				ALUOp_next <= 2'b00;
				PCSrc_next <= 2'b00;
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
			
			s8 : begin // state  8: branch for BEQ
			
				
				
				// evaluating Zero
				if (((OpCode == 6'b000100) && (Zero == 1'b1)) || ((OpCode == 6'b000101) && (Zero == 1'b0))) begin
						// multiplication
						
						// Perform: PC + 4 + 4*IMM 
						ALUSrcA_next <= 2'b00; // PC + 4
						ALUSrcB_next <= 3'b110; // immediate * 4
						ALUOp_next <= 2'b00; // add
						
						Branch_next <= 1'b1;
						PCSrc_next <= 2'b00;
						
						// Register Enables
						// if they don't show up, must be set as 0
						IRWrite_next <= 0;
						PCWrite_next <= 0;
						MemWrite_next <= 0;
						RegWrite_next <= 0;
									
						next_state <= s14;
						
				end
				
				else if (((OpCode == 6'b000100) && (Zero == 1'b0)) || ((OpCode == 6'b000101) && (Zero == 1'b1))) begin
					// setup for S10 normal business
					// multiplexer selects
					// DC when doesn't show up in FSM
					RegDST_next <= 2'b00;
					MemtoReg_next <= 0;
					FunctControl_next <= 0;
					
					// Register Enables
					// if they don't show up, must be set as 0
					IRWrite_next <= 0;
					PCWrite_next <= 0;
					MemWrite_next <= 0;
					Branch_next <= 0;
					RegWrite_next <= 0;
					
					next_state <= s10;
				end
				
				
				
			end
			
			s9 : begin	// state 9: execution I type
				// multiplexer selects
				// DC when doesn't show up in FSM
				RegDST_next <= 2'b00;
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
				ALUSrcA_next <= 2'b00;
				ALUSrcB_next <= 3'b001;
				ALUOp_next <= 2'b00;
				PCSrc_next <= 2'b00;
				FunctControl_next <= 0;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 1; // SR 
				PCWrite_next <= 0;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
				
				next_state <= sr;
			end
			
			// j instr write step
			s11 : begin
				PCSrc_next <= 2'b10;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 0;
				PCWrite_next <= 0;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
			
				next_state <= s10;
			end
			
			// jal instr reg write step
			s12 : begin
				RegDST_next <= 2'b10;	// CHANGE THIS to 2
				MemtoReg_next <= 0;
				FunctControl_next <= 0;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 0;
				PCWrite_next <= 0;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 1;
				
				next_state <= s13;				
			end
			
			s13 : begin
							
				PCSrc_next <= 2'b10;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 0;
				PCWrite_next <= 1;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
			
				next_state <= s11;
			end
			
			s14: begin // state 14: BEQ true 
				Branch_next <= 1'b1;
				PCSrc_next <= 2'b00;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 1;
				PCWrite_next <= 0;
				MemWrite_next <= 0;
				RegWrite_next <= 0;
				
				IorD_next <= 0;
				ALUSrcA_next <= 2'b00;
				ALUSrcB_next <= 3'b111;
				ALUOp_next <= 2'b01;
				PCSrc_next <= 2'b00;
				FunctControl_next <= 0;
				
				next_state <= s15;
			
			end
			
			s15: begin
				// multiplexer selects
				// DC when doesn't show up in FSM
				IorD_next <= 0;
				ALUSrcA_next <= 2'b00;
				ALUSrcB_next <= 3'b111;
				ALUOp_next <= 2'b00;
				PCSrc_next <= 2'b00;
				FunctControl_next <= 0;
				
				// Register Enables
				// if they don't show up, must be set as 0
				IRWrite_next <= 0;
				PCWrite_next <= 1;
				MemWrite_next <= 0;
				Branch_next <= 0;
				RegWrite_next <= 0;
				
				next_state <= s16;
			end
			
			s16: begin
				// multiplexer selects
				// DC when doesn't show up in FSM
				IorD_next <= 0;
				ALUSrcA_next <= 2'b00;
				ALUSrcB_next <= 3'b111;
				ALUOp_next <= 2'b00;
				PCSrc_next <= 2'b00;
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
				ALUSrcA_next <= 2'b00;
				ALUSrcB_next <= 3'b001;
				ALUOp_next <= 2'b00;
				PCSrc_next <= 2'b00;
				
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
