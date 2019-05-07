// register with asynchronous reset

module reg_reset
    #(
        parameter N = 32
    )
    (
        input wire clk, reset,
        input wire [N-1:0] d,
        output reg [N-1:0] q
    );
    
    always @(posedge clk, posedge reset)
        if (reset)
            q <= 0;
        else
            q <= d;
endmodule
