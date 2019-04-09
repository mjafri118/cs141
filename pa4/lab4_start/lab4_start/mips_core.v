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
	clk, rst,
	mem_wr_ena, mem_addr, mem_wr_data, mem_rd_data
	//PCWrite, IorD, IRWrite, RegDst, MemtoReg, RegWrite, ALUSrcA, ALUSrcB, ALUControl
	);

	// --------- VARIABLES/WIRES --------
	
	
	//parameter definitions
	parameter N = 32;
	parameter I_LENGTH = 1024;
	parameter D_LENGTH = 1024;
	
	// CONTROLS
	wire PCWrite, IorD, IRWrite, RegDst, MemtoReg, RegWrite, ALUSrcA, Branch, PCEn, Zero;
	wire [1:0] ALUSrcB;
	wire [3:0] ALUControl;
	
	// MEMORY
	input wire clk, rst;
	output wire mem_wr_ena;
	output wire [N-1:0] mem_addr, mem_wr_data;
	input wire [N-1:0] mem_rd_data;
	
	// INTERNALS
	wire [N-1:0] PC, PC_0, ALUOut, Data, SignImm, SrcA, SrcB, A, B, Instr, WD3, RD1, RD2, PadShamt;
	wire [4:0] A3; // testing
	
	// ASSIGNS
	assign mem_wr_data = B;
	
	// ---------- INSTANTIATING EXTERNAL MODULES ---------
	
	// ----- MUXES -----
	// naming convention based on control signals.
	
	// Two to One's
	two_mux #(
		.N(32)
	) IorD_MUX(
			.X(PC), .Y(ALUOut), .Z(mem_addr), .CTRL(IorD));
			
	two_mux #(
		.N(5)
	) RegDst_MUX(
			.X(Instr[20:16]), .Y(Instr[15:11]), .Z(A3), .CTRL(RegDst));
			
	two_mux #(
		.N(32)
	) MemtoReg_MUX(
			.X(ALUOut), .Y(Data), .Z(WD3), .CTRL(MemtoReg));
			
	two_mux #(
		.N(32)
	) ALUSrcA_MUX(
			.X(PC), .Y(A), .Z(SrcA), .CTRL(ALUSrcA));
			
	// Four to One's
	four_mux #(.N(32)
	) ALUSrcB_MUX(
		.A(B),.B(32'd4),.C(SignImm),.D(PadShamt),.CTRL(ALUSrcB),.Z(SrcB));
		
	// ----- ALU -----
	alu #(.N(32)
	) ALU(.x(SrcA), .y(SrcB), .op_code(ALUControl), .z(PC_0), .equal(), .zero(Zero), .overflow());
	
	// ----- ARCHITECTURAL MEMORY (i.e. legit just registers) -----
	// naming convention based on outputs
	PC_AM_register #(.N(32)
	) PC_AM(.clk(clk), .rst(rst), .d(PC_0), .q(PC), .ena(PCEn));
	
	register #(.N(32)
	) Instr_AM(.clk(clk), .rst(rst), .d(mem_rd_data), .q(Instr), .ena(IRWrite));
	
	register #(.N(32)
	) Data_AM(.clk(clk), .rst(rst), .d(mem_rd_data), .q(Data), .ena(1'b1));
	
	register #(.N(32)
	) A_AM(.clk(clk), .rst(rst), .d(RD1), .q(A), .ena(1'b1));
	
	register #(.N(32)
	) B_AM(.clk(clk), .rst(rst), .d(RD2), .q(B), .ena(1'b1));
	
	register #(.N(32)
	) ALUOut_AM(.clk(clk), .rst(rst), .d(PC_0), .q(ALUOut), .ena(1'b1));
	
	// ----- REGISTER FILE -----
	register_file #(.N(32)
	) Register_File(
		.clk(clk), .rst(rst), 
		.rd_addr0(Instr[25:21]), .rd_addr1(Instr[20:16]), .wr_addr(A3), .rd_data0(RD1), .rd_data1(RD2), .wr_data(WD3), .wr_ena(RegWrite)); 
		
	// ----- SIGN EXTENSION ------
	signExt #(.N_in(16), .N_out(32) 
	) SIGN_EXT(.immed(Instr[15:0]), .out(SignImm));
	
	// ----- PAD ------
	pad32 #(.N_in(5), .N_out(32) 
	) PAD(.immed(Instr[10:6]), .out(PadShamt));

	
	// ----- CONTROLLER -----
	//control signals
		mips_controller Controller(.clk(clk), .rst(rst), 
					.Funct(Instr[5:0]), .OpCode(Instr[31:26]),
					.MemtoReg(MemtoReg), .RegDST(RegDst), .IorD(IorD), .PCSrc(), .ALUSrcB(ALUSrcB), .ALUSrcA(ALUSrcA),
					.IRWrite(IRWrite), .MemWrite(mem_wr_ena), .PCWrite(PCWrite), .Branch(Branch), .RegWrite(RegWrite), .ALUControl(ALUControl));
		assign PCEn = (Zero & Branch) | PCWrite;
	//port definitions - customize for different bit widths


endmodule
`default_nettype wire //some Xilinx IP requires that the default_nettype be set to wire
