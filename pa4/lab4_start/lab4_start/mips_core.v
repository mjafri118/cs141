`timescale 1ns / 1ps
`default_nettype none //helps catch typo-related bugs
//////////////////////////////////////////////////////////////////////////////////
// 
// CS 141 - Fall 2015
// Module Name:    mips_core 
// Author(s): 
// Description: 
//
//
//////////////////////////////////////////////////////////////////////////////////
module mips_core(
	clk, 
	mem_wr_ena, mem_addr, mem_wr_data, mem_rd_data);

	//parameter definitions
	parameter N = 32;
	parameter I_LENGTH = 1024;
	parameter D_LENGTH = 1024;
	
	// MEMORY
	input wire clk;
	output wire mem_wr_ena;
	output wire [N-1:0] mem_addr, mem_wr_data;
	input wire [N-1:0] mem_rd_data;
	
	// ----- MUXES -----
	// naming convention based on control signals.
	
	// Two to One's
	two_mux #(
		.N(32)
	) IorD_MUX(
			.X(), .Y(), .Z(), .CTRL());
			
	two_mux #(
		.N(32)
	) RegDst_MUX(
			.X(), .Y(), .Z(), .CTRL());
			
	two_mux #(
		.N(32)
	) MemtoReg_MUX(
			.X(), .Y(), .Z(), .CTRL());
			
	two_mux #(
		.N(32)
	) ALUSrcA_MUX(
			.X(), .Y(), .Z(), .CTRL());
			
	// Four to One's
	four_mux #(N(32)
	) ALUSrcB_MUX(
		.A(),.B(),.C(),.D(),.CTRL(),.Z());
		
	// ----- ALU -----
	alu #(N(32)
	) ALU(.x(), .y(), .op_code(), .z(), .equal(), .zero(), .overflow());
	
	// ----- ARCHITECTURAL MEMORY (i.e. legit just registers) -----
	// naming convention based on outputs
	register #(N(32)
	) PC_AM(.clk(), .rst(), .d(), .q(), .ena());
	
	register #(N(32)
	) Instr_AM(.clk(), .rst(), .d(), .q(), .ena());
	
	register #(N(32)
	) Data_AM(.clk(), .rst(), .d(), .q(), .ena());
	
	register #(N(32)
	) A_AM(.clk(), .rst(), .d(), .q(), .ena());
	
	register #(N(32)
	) B_AM(.clk(), .rst(), .d(), .q(), .ena());
	
	register #(N(32)
	) ALUOut_AM(.clk(), .rst(), .d(), .q(), .ena());
	
	// ----- REGISTER FILE -----
	register_file #(N(32)
	) Register_File(
		.clk(), .rst(), 
		.rd_addr0(), .rd_addr1(), .wr_addr(), .rd_data0(), .rd_data1(), .wr_data(), .wr_ena()); 
	

	//port definitions - customize for different bit widths


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
