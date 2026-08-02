module ras #(
    parameter int NUM_ENTRIES = 32
)(
    input logic clk,
    input logic rst_n,

    input logic write_valid,
    input logic [$clog2(NUM_ENTRIES)-1:0] write_idx,
    input logic [31:0] write_addr,

    input logic [$clog2(NUM_ENTRIES)-1:0] read_idx,
    output logic [31:0] read_addr,

    input logic repair_valid,
    input logic [$clog2(NUM_ENTRIES)-1:0] repair_idx,
    input logic [31:0] repair_addr
);
    logic [31:0] stack [NUM_ENTRIES-1:0];

    assign read_addr = stack[read_idx];

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            for(int i = 0; i < NUM_ENTRIES; i++) begin
                stack[i] <= '0;
            end
        end else begin
            if(repair_valid) stack[repair_idx] <= repair_addr;
            else if(write_valid) stack[write_idx] <= write_addr;
        end
    end
endmodule