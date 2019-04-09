`default_nettype none
`timescale 1ns/1ps

module test_mips_multicycle;

//module cli args
integer NUM_CYCLES = 100;
integer DATA_MEM_START;
integer DATA_MEM_STOP;
integer i;
reg [8*100:0] WAVE_FILE;

//declare any parameters for your mips core module
parameter N = 32;

//declare any additional IO for your mips core module
reg  clk, rst;
wire rstb;
assign rstb = ~rst;

//memory
wire [N-1:0] mem_wr_data, mem_addr;
wire [N-1:0] mem_rd_data;
wire mem_wr_ena;
wire mem_invalid;


synth_dual_port_memory #(
	.N(32),
	.I_LENGTH(1024),
	.D_LENGTH(1024)
) MEMORY(
	.clk(clk),
	.rstb(rstb), 
	.error(),
	.wr_ena1(), .addr1(), .din1(), .dout1(),
	.wr_ena0(mem_wr_ena),
	.addr0(mem_addr),
	.din0(mem_wr_data),
	.dout0(mem_rd_data)
);

//instantiate your mips core module here
mips_core #(
	.N(32),
	.I_LENGTH(1024),
	.D_LENGTH(1024)
) MIPS(
	.clk(clk),
	.rst(rst),
	.mem_wr_ena(mem_wr_ena),
	.mem_addr(mem_addr),
	.mem_wr_data(mem_wr_data),
	.mem_rd_data(mem_rd_data)
	);


initial begin
	clk = 0;
	rst = 1;
	
	if(!$value$plusargs("NUM_CYCLES=%d", NUM_CYCLES)) begin
		$display("defaulting to 1000 cycles");
		NUM_CYCLES = 1000;
	end
	
	repeat (2) @(posedge clk); rst = 0;
	
	repeat (NUM_CYCLES) @(negedge clk); //run the CPU
	$display("simulated %d cycles", NUM_CYCLES);
	
	DATA_MEM_START = 32'h0;	
	DATA_MEM_STOP = DATA_MEM_START + 32'd1000 ;  //change this to a larger number if you wish to dump the data memory at the end of the program
	if (DATA_MEM_STOP > DATA_MEM_START) begin
		$display("Dumping data memory from address %d -> %d:", DATA_MEM_START, DATA_MEM_STOP);
		
		for (i = DATA_MEM_START; i < DATA_MEM_STOP; i = i + 1) begin
			$display("\tDMEM[%d]=%h", i, MEMORY.DMEM[i]);
		end
	end
	
	$finish;
end

always #5 clk = ~clk;

endmodule

`default_nettype wire
