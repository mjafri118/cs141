module cpu_tb();
    reg clk, reset;
	integer i;

    wire wr_en;
    wire [31:0] mem_addr, w_data, r_data;

    rw_ram ram_unit (.clk(clk), .wr_en(wr_en), .addr(mem_addr),
		.w_data(w_data), .r_data(r_data));
    cpu cpu_unit (.clk(clk), .reset(reset), .r_data(r_data),
		.wr_en(wr_en), .mem_addr(mem_addr), .w_data(w_data));

    initial
    begin
        reset = 1;
        # 22;
        reset = 0;

		repeat(1000) @(posedge clk);

		for (i = 0; i < 32; i = i + 1)
			$display("reg %d = %d", i, $signed(cpu_unit.reg_file_unit.regs[i]));

		$display("dmem[21] = %d", ram_unit.dmem[21]); // memory address 84 (should contain 7 for our default test)

		$finish;
    end

    always
    begin
        clk = 1; # 5; clk = 0; #5;
    end
endmodule
