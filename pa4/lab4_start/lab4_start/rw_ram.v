module rw_ram
    #(
        parameter IMEM_SIZE = 128,
		parameter DMEM_SIZE = 128,
		parameter I_WIDTH = 7, // log2(IMEM_SIZE
		parameter D_WIDTH = 7 // log2(DMEM_SIZE)
    )
    (
        input wire clk,
        input wire wr_en,
        input wire [31:0] addr,
        input wire [31:0] w_data,
        output wire [31:0] r_data
    );

    reg [31:0] imem [0:IMEM_SIZE];
	reg [31:0] dmem [0:DMEM_SIZE];

	wire [I_WIDTH-1:0] iaddr;
	wire [D_WIDTH-1:0] daddr;

	assign iaddr = addr[I_WIDTH+1:2];
	assign daddr = addr[D_WIDTH+1:2];

	initial begin
        $readmemh("asm/imem.memh", imem);
		$readmemh("asm/dmem.memh", dmem);
	end

    always @(posedge clk)
        if (wr_en)
			if (addr[31:20] == 12'h4)
				imem[iaddr] <= w_data;
			else
				dmem[daddr] <= w_data;

    assign r_data = addr[31:20] == 12'h4 ? imem[iaddr] : dmem[daddr];
endmodule
