// register with asynchronous reset and synchronous enable

module reg_en
    #(
        parameter N = 32,
		parameter rstval = 0
    )
    (
        input wire clk, reset,
        input wire en,
        input wire [N-1:0] d,
        output reg [N-1:0] q
    );
    
    always @(posedge clk, posedge reset)
        if (reset)
            q <= rstval;
        else if (en)
            q <= d;
endmodule
