// 32x32 register file

module reg_file
    #(
        parameter DATA_WIDTH = 32, // bits per reg
                  ADDR_WIDTH = 5   // number of address bits
    )
    (
        input wire clk, reset,
        input wire wr_en,
        input wire [ADDR_WIDTH-1:0] w_addr, r0_addr, r1_addr,
        input wire [DATA_WIDTH-1:0] w_data,
        output wire [DATA_WIDTH-1:0] r0_data, r1_data
    );

    reg [DATA_WIDTH-1:0] regs [0:2**ADDR_WIDTH-1];
	integer i;

    always @(posedge clk, posedge reset)
	begin
		if (reset)
			for (i = 0; i < 2**ADDR_WIDTH; i = i + 1)
				regs[i] <= 0;

        if (wr_en)
            regs[w_addr] <= w_data;
	end

    assign r0_data = r0_addr == 0 ? 0 : regs[r0_addr];
    assign r1_data = r1_addr == 0 ? 0 : regs[r1_addr];
endmodule
