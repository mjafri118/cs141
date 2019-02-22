`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:   CS141
// Engineer:  Avinash Uttamchandani
//
////////////////////////////////////////////////////////////////////////////////

`include "alu_defines.v"

module test_alu;

	// Inputs
	reg signed [31:0] X;
	reg signed [31:0] Y;
	reg [3:0] op_code;

	// Outputs
	wire signed [31:0] Z;
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
		
		#50;
		
		X = 34;
		Y = 36;
		
		
		//Iterate for X from 34 to 37 and run all operations on it
		for(X = 34; X != 38; X = X + 1) begin
			#10;
			for(op_code = 4'b0000; op_code != 4'b1111; op_code = op_code + 1) begin	//Check all op_codes
				#50;
			end
		end
		
		//Iterate for large values of X and Y, run all operations		
		//Check large values of X positive overflow
		X = 32'h6FFFFFEE;
		Y = 32'h6FF7FFFE;
		for(X = 32'h6FFFFFEE; X != 32'h6FFFFFFE; X = X + 1) begin
			$display("checkpoint 1");
			for(op_code = 4'b0000; op_code != 4'b1111; op_code = op_code + 1) begin	//Check all op_codes
				#50;
			end
		end
		
		//check opposite signs
		X = 32'h6FFFFFEE;
		Y = 32'h8FF7FFFE;
		X[31] = 0;
		Y[31] = 1;
		for(X = 32'h6FFFFFEE; X != 32'h6FFFFFFE; X = X + 1) begin
			$display("checkpoint 2");
			for(op_code = 4'b0000; op_code != 4'b1111; op_code = op_code + 1) begin	//Check all op_codes
				#50;
			end
		end
		
		X = 32'h8FF7FFFE;
		Y = 32'h6FFFFFEE;
		X[31] = 1;
		Y[31] = 0;
		for(Y = 32'h6FFFFFEE; Y != 32'h6FFFFFFE; Y = Y + 1) begin
			$display("checkpoint 3");
			for(op_code = 4'b0000; op_code != 4'b1111; op_code = op_code + 1) begin	//Check all op_codes
				#50;
			end
		end
		
		//check flags in small case
		X = 32'd1;
		Y = 32'd1;
		for(op_code = 4'b0000; op_code != 4'b1111; op_code = op_code + 1) begin	//Check all op_codes
			#10;
		end
		
		$finish;
	
	end

	
	// an 'always' block is executed whenever any of the variables in the sensitivity
	// list are changed (X, Y, or op_code in this case)
	always @(X,Y,op_code) begin
		#1;
		//Check flags briefly
		if((zero == 1) && (Z != 0)) begin
			$display("ERROR: ZERO, output not actually zero, zero = %b, Z = %b", zero, Z);
		end
		if((equal == 1) && (X!= Y)) begin
			$display("ERROR: EQUAL, inputs not actually equal, equal = %b, X = %b, Y = %b", equal, X, Y);
		end
		
		//Op_code checks
		case (op_code)
			`ALU_OP_AND : begin
				//only executes when the op code is 0000 (AND)
				if( Z !== (X & Y) ) begin
					$display("ERROR: AND:  op_code = %b, X = %h, Y = %h, Z = %h", op_code, X, Y, Z);
					error = error + 1;
				end
			end
			
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
				if(((X + Y) > 2147483647) && (overflow !== 1)) begin
					$display("ERROR: ADD (no overflow): op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b", op_code, X, Y, Z, overflow);
					error = error + 1;
				end
			end
			
			`ALU_OP_SUB: begin
				if(Z[31] == 1) begin
					if((((~Z) + 1) !== -(X - Y)) && (overflow !== 1)) begin
						$display("ERROR: SUB (wrong number):  op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b", op_code, X, Y, (~Z) + 1, overflow);
						error = error + 1;
					end
				end
				if(Z[31] == 0) begin
					if((Z !== (X - Y)) && (overflow !== 1)) begin
						$display("ERROR: SUB (wrong number):  op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b", op_code, X, Y, Z, overflow);
						error = error + 1;
					end
				end
				if(overflow == 1) begin	//Warning if there is an overflow
					$display("WARNING: SUB (overflow):  op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b", op_code, X, Y, Z, overflow);
				end
				if(((X + ~Y + 1) > 2147483647) && (overflow !== 1)) begin
					$display("ERROR: ADD (no overflow): op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b", op_code, X, Y, Z, overflow);
					error = error + 1;
				end
			end
			
			`ALU_OP_SLT: begin
					if((Y > X) && (Z != 1)) begin
						$display("ERROR: X = %d, Y = %d, out = %d", X, Y, Z);
						error = error +1;
					end
					if((Y < X) && (Z == 1)) begin
						$display("ERROR: X = %d, Y = %d, out = %d", X, Y, Z);
						error = error +1;
					end
			end
			
			`ALU_OP_SRL: begin
					if (X >> Y != Z) begin
						$display("ERROR: SRL, X = %d Y = %d Z = %d expected = %d", X, Y, Z, X>>Y);
						error = error +1;
					end
			end
			
			`ALU_OP_SLL: begin
					if (X << Y != Z) begin
						$display("ERROR: SLL, X = %d Y = %d Z = %d", X, Y, Z);
						error = error +1;
					end				
					
			end
			
			`ALU_OP_SRA: begin
					if (X >>> Y != $signed(Z)) begin
						$display("ERROR: SRA, X = %d Y = %d Z = %d expected = %d", X, Y, Z, $signed(X>>>Y));
						error = error +1;
					end
			end
			
			default : begin
				//executes at default
				if (Z !== 32'd0) begin
					$display("ERROR HAPPENED! invalid op code, Z was not zero, op_code = %b, X = %h, Y = %h, Z = %h", op_code, X, Y, Z);
					
				end
				//Check flags on reserve cases
				if((zero == 1) | (equal == 1) | (overflow == 1)) begin
					$display("ERROR: Flag active on reserved value, op_code = %b, zero = %b, equal = %b, overflow = %b", op_code, zero, equal, overflow);
					error = error + 1;
				end
			end
		endcase
		
	end
	
endmodule

