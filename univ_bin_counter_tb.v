`timescale 1 ns/10 ps

module univ_binary_counter_tb();
	localparam T=20; // clock period
	reg clk, reset, syn_clr, load, en, up;
	reg [7:0] d;
	wire [7:0] q;

	// the .* notation automatically passes all signals that have
	// the same name as the input/output ports into the corresponding
	// port in the module
	// since every port here has the same name as the wires/regs we
	// want to pass in, we can use .* for all port assignments
	univ_bin_counter uut (.*);

	//****************************************************************
	// reset for the first half cycle
	//****************************************************************
	initial
	begin
		reset = 1'b1;
		#(T/2);
		reset = 1'b0;
	end

	//****************************************************************
	// clock
	//****************************************************************
	// 20 ns clock running forever
	always
	begin
		clk = 1'b1;
		#(T/2);
		clk = 1'b0;
		#(T/2);
	end

	initial
	begin
		//*************************************************************
		// initial input
		//*************************************************************
		syn_clr = 1'b0;
		load = 1'b0;
		en = 1'b0;
		up  = 1'b1; // count up
		d = 3'b000;
		@(negedge reset);  // wait reset to deassert
		@(negedge clk);    // wait for one clock
		$display("start q: %d", q);
		//*************************************************************
		// test load
		//*************************************************************
		load = 1'b1;
		d = 3'b011;
		@(negedge clk);    // wait for one clock
		load = 1'b0;
		repeat(2) @(negedge clk);
		$display("test load q: %d", q);
		//*************************************************************
		// test syn_clear
		//*************************************************************
		syn_clr = 1'b1;  // assert clear
		@(negedge clk);
		syn_clr = 1'b0;
		$display("test clear q: %d", q);
		//*************************************************************
		// test up counter and pause
		//*************************************************************
		en = 1'b1; // count
		up = 1'b1;
		repeat(10) @(negedge clk);
		en = 1'b0; // pause
		repeat(2) @(negedge clk);
		en = 1'b1;
		repeat(2) @(negedge clk);
		$display("test up and pause q: %d", q);
		//*************************************************************
		// test down counter
		//*************************************************************
		up = 1'b0;
		repeat(10) @(negedge clk);
		$display("test down q: %d", q);

		// absolute delay
		#(4*T);  //  wait for 80 ns
		en = 1'b0; // pause
		#(4*T);  //  wait for 80 ns
		//*************************************************************
		// stop simulation
		//*************************************************************
		// return to interactive simulation mode
		$finish;
	end
endmodule
