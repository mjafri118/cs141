module cpu
    (
        input wire clk, reset,
        input wire [31:0] r_data,
        output wire wr_en,
        output wire [31:0] mem_addr, w_data
    );

    // control wires
    wire MemtoReg, RegDst, IorD,
          ALUSrcA, IRWrite, MemWrite, PCWrite,
          Branch, RegWrite;
    wire [1:0] ALUSrcB, PCSrc;
    wire [3:0] ALUControl;

    // datapath wires
    wire [31:0] PCcur, Adr, ALUOut, ALUResult, SrcA,
                Data, Instr, SignImm, PCJump, RegA, RegB;
	reg [31:0] SrcB;
	reg [31:0] PCnew;
	wire [27:0] ShftInstr;
    wire Zero, PCEn;

    // register file inputs/outputs
    wire [4:0] RegA1, RegA2, RegA3;
    wire [31:0] RegWD3, RegRD1, RegRD2;

    control ctrl_unit (clk, Instr[31:26], Instr[5:0], reset,
               MemtoReg, RegDst, IorD, ALUSrcA, IRWrite, MemWrite, PCWrite,
               Branch, RegWrite, ALUSrcB, PCSrc, ALUControl);

    reg_en #(.rstval(32'h400000)) pc_reg (.clk(clk), .reset(reset), .en(PCEn), .d(PCnew), .q(PCcur));
    assign Adr = IorD ? ALUOut : PCcur;

    // set outputs to interface with main memory module
    assign wr_en = MemWrite;
    assign mem_addr = Adr;
    assign w_data = RegB;

    reg_en instr_reg (.clk(clk), .reset(reset), .en(IRWrite), .d(r_data), .q(Instr));
    reg_reset data_reg (.clk(clk), .reset(reset), .d(r_data), .q(Data));

    assign RegA1 = Instr[25:21];
    assign RegA2 = Instr[20:16];
    assign RegA3 = RegDst ? Instr[15:11] : Instr[20:16];
    assign RegWD3 = MemtoReg ? Data : ALUOut;

    reg_file reg_file_unit (.clk(clk), .reset(reset), .wr_en(RegWrite), .w_addr(RegA3),
        .w_data(RegWD3), .r0_addr(RegA1), .r1_addr(RegA2),
        .r0_data(RegRD1), .r1_data(RegRD2));

    reg_reset reg_a (.clk(clk), .reset(reset), .d(RegRD1), .q(RegA));
    reg_reset reg_b (.clk(clk), .reset(reset), .d(RegRD2), .q(RegB));

    assign SrcA = ALUSrcA ? RegA : PCcur;

    always @*
        case (ALUSrcB)
            2'b00: SrcB = RegB;
            2'b01: SrcB = 32'd4;
            2'b10: SrcB = SignImm;
            2'b11: SrcB = SignImm << 2;
        endcase

    assign SignImm = { {16{Instr[15]}}, Instr[15:0] };
    
    alu alu_unit (.x(SrcA), .y(SrcB), .op(ALUControl), .z(ALUResult),
        .zero(Zero));

    reg_reset alu_reg (.clk(clk), .reset(reset), .d(ALUResult), .q(ALUOut));

    always @*
        case (PCSrc)
            2'b00: PCnew = ALUResult;
            2'b01: PCnew = ALUOut;
            2'b10: PCnew = PCJump;
			default: PCnew = 32'h0;
        endcase

    assign PCEn = (Zero & Branch) | PCWrite;
    assign ShftInstr = Instr[25:0] << 2;
    assign PCJump = {PCcur[31:28], ShftInstr};
endmodule
