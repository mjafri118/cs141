`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    alu_decoder 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module alu_decoder(ALUOp, Funct, ALUControl);
	input wire [1:0] ALUOp;
	input wire [5:0] Funct;
	output wire [3:0] ALUControl;
	reg [3:0] ALUControlIntl;
	//parameter definitions
	assign ALUControl = ALUControlIntl;
	//port definitions - customize for different bit widths
	
	always @(ALUOp, Funct) begin
	
	    // Add
		 if (ALUOp == 2'b00) begin
		     ALUControlIntl = 4'b0111;
		 end
		 
		 // Subtract 
		 else if (ALUOp == 2'b01) begin
			  ALUControlIntl = 4'b1000;
		 end
		 
		 // R Type
		 else if (ALUOp == 2'b10) begin
			  case (Funct)
			      // add
			      6'b100000: begin
					    ALUControlIntl = 4'b0111;
					end
					
					// sub
			      6'b100010: begin
					    ALUControlIntl = 4'b1000;
					end
					
					// and
			      6'b100100: begin
					    ALUControlIntl = 4'b0000;
					end
					
					// or
			      6'b100101: begin
					    ALUControlIntl = 4'b0001;
					end
					
					// xor
			      6'b100110: begin
					    ALUControlIntl = 4'b0010;
					end
					
					// nor
			      6'b100111: begin
					    ALUControlIntl = 4'b0011;
					end
					
					// slt
			      6'b101010: begin
					    ALUControlIntl = 4'b0100;
					end
					
					// sll
			      6'b000000: begin
					    ALUControlIntl = 4'b0101;
					end
					
					// srl
			      6'b000010: begin
					    ALUControlIntl = 4'b0110;
					end
					
					// sra
			      6'b000011: begin
					    ALUControlIntl = 4'b1011;
					end
			endcase
					
				
		 end 
	end


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
