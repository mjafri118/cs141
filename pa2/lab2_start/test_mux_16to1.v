`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:46:54 02/12/2019
// Design Name:   mux_16to1
// Module Name:   Z:/shared_folder/cs141/pa2/lab2_start/test_mux_16to1.v
// Project Name:  lab2_alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux_16to1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_mux_16to1;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [31:0] C;
	reg [31:0] D;
	reg [31:0] E;
	reg [31:0] F;
	reg [31:0] G;
	reg [31:0] H;
	reg [31:0] I;
	reg [31:0] J;
	reg [31:0] K;
	reg [31:0] L;
	reg [31:0] M;
	reg [31:0] N;
	reg [31:0] O;
	reg [31:0] P;
	reg [3:0] S;

	// Outputs
	wire [31:0] Z;

	// Instantiate the Unit Under Test (UUT)
	mux_16to1 uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.E(E), 
		.F(F), 
		.G(G), 
		.H(H), 
		.I(I), 
		.J(J), 
		.K(K), 
		.L(L), 
		.M(M), 
		.N(N), 
		.O(O), 
		.P(P), 
		.S(S), 
		.Z(Z)
	);

	initial begin
		// Initialize Inputs
		A = 32'd11;
		B = 32'd12;
		C = 32'd13;
		D = 32'd14;
		E = 32'd15;
		F = 32'd16;
		G = 32'd17;
		H = 32'd18;
		I = 32'd19;
		J = 32'd20;
		K = 32'd21;
		L = 32'd22;
		M = 32'd23;
		N = 32'd24;
		O = 32'd25;
		P = 32'd26;
		S = 4'b0000;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		for (S = 0; S != 4'b1111; S = S + 1) begin
			#10;
			$display("switch value=%b, output=%d", S, Z);
		
		end

	end
      
endmodule

