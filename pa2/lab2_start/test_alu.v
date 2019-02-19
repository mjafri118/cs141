`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:   CS141
// Engineer:  Avinash Uttamchandani
//
////////////////////////////////////////////////////////////////////////////////

`include "alu_defines.v"

module test_alu;

	// Inputs
	reg [31:0] X;
	reg [31:0] Y;
	reg [3:0] op_code;

	// Outputs
	wire [31:0] Z;
	wire equal;
	wire overflow;
	wire zero;

	// Instantiate the Unit Under Test (UUT)
	alu uut (
		.X(X), 
		.Y(Y), 
		.Z(Z), 
		.op_code(op_code), 
		.equal(equal), 
		.overflow(overflow), 
		.zero(zero)
	);

	// HINT: 'integer' variables might be useful
	integer error = 0;
	
	initial begin
		// Initialize Inputs
		X = 0;
		Y = 0;
		op_code = 0;
		
		// YOUR CODE HERE
		// loop through all important test vectors
		// this triggers the always block
		X = 34;
		Y = 36;
		
		
		//Iterate for X from 34 to 37 and run all operations on it
		for(X = 34; X != 38; X = X + 1) begin
			#10;
			for(op_code = 4'b0000; op_code < 4'b0111; op_code = op_code + 1) begin	//Check all op_codesthat are currently programmed
				#10;
			end
		end
		
		//Check positive overflow
		X = 32'h6FFFFFEE;
		Y = 32'h6FF7FFFE;
		op_code = 4'b0101;
		#10;
		
		//Check negative overflow
		X = 32'h8FFFEFFF;
		Y = 32'h8FF7FFFE;
		op_code = 4'b0101;
		#10;
		
		//check opposite signs
		X = 32'h8FFFEFFF;
		Y = 32'h8FF7FFFE;
		X[31] = 0;
		Y[31] = 1;
		op_code = 4'b0101;
		#10;
		op_code = 4'b0110;
		#10;
		
		$finish;
	
	end
	
	// an 'always' block is executed whenever any of the variables in the sensitivity
	// list are changed (X, Y, or op_code in this case)
	always @(X,Y,op_code) begin
		#1;
		case (op_code)
			`ALU_OP_AND : begin
				//only executes when the op code is 0000 (AND)
				if( Z !== (X & Y) ) begin
					$display("ERROR: AND:  op_code = %b, X = %h, Y = %h, Z = %h", op_code, X, Y, Z);
					error = error + 1;
				end
			end
			// ADD IN YOUR OWN OP CODE CHECKERS HERE!!!
			`ALU_OP_XOR : begin
				if( Z !== (X ^ Y)) begin
					$display("ERROR: XOR:  op_code = %b, X = %h, Y = %h, Z = %h", op_code, X, Y, Z);
					error = error + 1;
				end
			end
			`ALU_OP_OR : begin
				if( Z !== (X | Y)) begin
					$display("ERROR: OR:  op_code = %b, X = %h, Y = %h, Z = %h", op_code, X, Y, Z);
					error = error + 1;
				end
			end
			`ALU_OP_NOR: begin
				if( Z !== ~(X | Y)) begin
					$display("ERROR: NOR:  op_code = %b, X = %h, Y = %h, Z = %h", op_code, X, Y, Z);
					error = error + 1;
				end
			end
			`ALU_OP_ADD: begin
				if( (Z !== (X + Y)) && (overflow !== 1)) begin	//If no overflow and addition is wrong
					$display("ERROR: ADD (wrong number):  op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b", op_code, X, Y, Z, overflow);
					error = error + 1;
				end
				if(overflow == 1) begin	//Warning if there is an overflow
					$display("WARNING: ADD (overflow):  op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b", op_code, X, Y, Z, overflow);
				end
			end
			`ALU_OP_SUB: begin
				if(Z[31] == 1) begin
					if(((~Z) + 1) !== -(X - Y)) begin
						$display("ERROR: SUB (wrong number):  op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b", op_code, X, Y, (~Z) + 1, overflow);
						error = error + 1;
					end
				end
				if(Z[31] == 0) begin
					if(Z !== (X - Y)) begin
						$display("ERROR: SUB (wrong number):  op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b", op_code, X, Y, Z, overflow);
						error = error + 1;
					end
				end
			end
			`ALU_OP_SLT: begin
			end
			`ALU_OP_SRL: begin
			end
			`ALU_OP_SLL: begin
			end
			`ALU_OP_SRA: begin
			end
			default : begin
				//executes at default
				if (Z !== 32'd0) begin
					$display("ERROR HAPPENED! invalid op code, Z was not zero, op_code = %b, X = %h, Y = %h, Z = %h", op_code, X, Y, Z);
				end
			end
		endcase
		
	end
	
endmodule

