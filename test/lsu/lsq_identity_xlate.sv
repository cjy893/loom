module lsq_identity_xlate #(
    parameter int TAG_WIDTH = 6,
    parameter int ADDR_WIDTH = 32
) (
    input  logic                  clk,
    input  logic                  rst_n,
    input  logic                  flush,

    input  logic                  req_valid,
    output logic                  req_ready,
    input  logic [TAG_WIDTH-1:0]  req_tag,
    input  logic [ADDR_WIDTH-1:0] req_vaddr,
    input  logic [1:0]            req_access,

    output logic                  resp_valid,
    input  logic                  resp_ready,
    output logic [TAG_WIDTH-1:0]  resp_tag,
    output logic [ADDR_WIDTH-1:0] resp_paddr,
    output logic [1:0]            resp_access,
    output logic [1:0]            resp_mat,
    output logic                  resp_cacheable
);
    logic                  resp_valid_q;
    logic [TAG_WIDTH-1:0]  resp_tag_q;
    logic [ADDR_WIDTH-1:0] resp_paddr_q;
    logic [1:0]            resp_access_q;

    assign req_ready = !resp_valid_q || resp_ready;
    assign resp_valid = resp_valid_q && !flush;
    assign resp_tag = resp_tag_q;
    assign resp_paddr = resp_paddr_q;
    assign resp_access = resp_access_q;
    assign resp_mat = 2'd1;
    assign resp_cacheable = 1'b1;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            resp_valid_q <= 1'b0;
            resp_tag_q <= '0;
            resp_paddr_q <= '0;
            resp_access_q <= '0;
        end else if(flush) begin
            resp_valid_q <= 1'b0;
        end else begin
            if(resp_valid_q && resp_ready)
                resp_valid_q <= 1'b0;

            if(req_valid && req_ready) begin
                resp_valid_q <= 1'b1;
                resp_tag_q <= req_tag;
                resp_paddr_q <= req_vaddr;
                resp_access_q <= req_access;
            end
        end
    end
endmodule
