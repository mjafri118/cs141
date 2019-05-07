`include "cpu.vh"

module control
    (
        input wire clk,
        input wire [5:0] op,
        input wire [5:0] funct,
        input wire reset,
        output reg MemtoReg, RegDst, IorD,
                   ALUSrcA, IRWrite, MemWrite, PCWrite,
                   Branch, RegWrite,
        output reg [1:0] ALUSrcB, PCSrc,
        output reg [3:0] ALUControl
    );

    reg [1:0] ALUOp;

    // states: fetch, decode, memadr, memread, mem writeback, memwrite
    // execute, alu writeback, branch, imm execute, imm writeback,
    // jump
    localparam s0 = 4'b0000,
               s1 = 4'b0001,
               s2 = 4'b0010,
               s3 = 4'b0011,
               s4 = 4'b0100,
               s5 = 4'b0101,
               s6 = 4'b0110,
               s7 = 4'b0111,
               s8 = 4'b1000,
               s9 = 4'b1001,
               s10 = 4'b1010,
               s11 = 4'b1011;

    reg[3:0] state_reg, state_next;

    always @(posedge clk, posedge reset)
        if (reset)
            state_reg <= s0;
        else
            state_reg <= state_next;

    always @*
    begin
        MemtoReg = 1'b0;
        RegDst = 1'b0;
        IorD = 1'b0;
        PCSrc = 2'b00;
        ALUSrcA = 1'b0;
        IRWrite = 1'b0;
        MemWrite = 1'b0;
        PCWrite = 1'b0;
        Branch = 1'b0;
        RegWrite = 1'b0;
        ALUSrcB = 2'b0;
        ALUOp = 2'b00;
		state_next = s0;

        case (state_reg)
            s0: begin
                ALUSrcB = 2'b01;
                IRWrite = 1'b1;
                PCWrite = 1'b1;
                state_next = s1;
            end
            s1: begin
                ALUSrcB = 2'b11;
                if (op == `OP_J)
                    state_next = s11;
                else if (op == `OP_ADDI)
                    state_next = s9;
                else if (op == `OP_BEQ)
                    state_next = s8;
                else if (op == `OP_RTYPE)
                    state_next = s6;
                else if (op == `OP_LW || op == `OP_SW)
                    state_next = s2;
            end
            s2: begin
                ALUSrcA = 1'b1;
                ALUSrcB = 2'b10;
                if (op == `OP_LW)
                    state_next = s3;
                else if (op == `OP_SW)
                    state_next = s5;
            end
            s3: begin
                IorD = 1'b1;
                state_next = s4;
            end
            s4: begin
                MemtoReg = 1'b1;
                RegWrite = 1'b1;
                state_next = s0;
            end
            s5: begin
                IorD = 1'b1;
                MemWrite = 1'b1;
                state_next = s0;
            end
            s6: begin
                ALUSrcA = 1'b1;
                ALUOp = 2'b10;
                state_next = s7;
            end
            s7: begin
                RegDst = 1'b1;
                RegWrite = 1'b1;
                state_next = s0;
            end
            s8: begin
                ALUSrcA = 1'b1;
                ALUOp = 2'b01;
                PCSrc = 2'b01;
                Branch = 1'b1;
                state_next = s0;
            end
            s9: begin
                ALUSrcA = 1'b1;
                ALUSrcB = 2'b10;
                state_next = s10;
            end
            s10: begin
                RegWrite = 1'b1;
                state_next = s0;
            end
            s11: begin
                PCSrc = 2'b10;
                PCWrite = 1'b1;
                state_next = s0;
            end
        endcase
    end

    always @*
    begin
		ALUControl = `ALU_AND;
        casez ({ALUOp, funct})
            {2'b00, 6'b??????}: ALUControl = `ALU_ADD;
            {2'b?1, 6'b??????}: ALUControl = `ALU_SUB;
            {2'b1?, `F_ADD}: ALUControl = `ALU_ADD;
				{2'b1?, `F_MULT}: ALUControl = `ALU_MULT;
            {2'b1?, `F_SUB}: ALUControl = `ALU_SUB;
            {2'b1?, `F_AND}: ALUControl = `ALU_AND;
            {2'b1?, `F_OR}: ALUControl = `ALU_OR;
            {2'b1?, `F_SLT}: ALUControl = `ALU_SLT;		
			{2'b1?, `F_XOR}: ALUControl = `ALU_XOR;
            {2'b1?, `F_NOR}: ALUControl = `ALU_NOR;
        endcase
    end
endmodule
