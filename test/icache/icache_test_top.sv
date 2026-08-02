module icache_test_top #(
    parameter int ADDR_WIDTH = 32,
    parameter int FETCH_WIDTH = 4,
    parameter int NUM_SETS = 4,
    parameter int NUM_WAYS = 2,
    parameter int LINE_BYTES = 32,
    parameter int MEM_DATA_WIDTH = 32,
    parameter int MEM_LEN_WIDTH = 4
)(
    input  logic clk,
    input  logic rst_n,

    input  logic                  req_valid,
    output logic                  req_ready,
    input  logic [ADDR_WIDTH-1:0] req_paddr,
    input  logic                  req_cacheable,

    output logic                        resp_valid,
    input  logic                        resp_ready,
    output logic [FETCH_WIDTH-1:0][31:0] resp_insts,

    input  logic                  maint_valid,
    output logic                  maint_ready,
    input  logic [1:0]            maint_mode,
    input  logic                  maint_all,
    input  logic [ADDR_WIDTH-1:0] maint_vaddr,
    input  logic [ADDR_WIDTH-1:0] maint_paddr,
    output logic                  maint_done,

    output logic                     mem_req_valid,
    input  logic                     mem_req_ready,
    output logic [ADDR_WIDTH-1:0]    mem_req_addr,
    output logic [MEM_LEN_WIDTH-1:0] mem_req_len,

    input  logic                      mem_resp_valid,
    output logic                      mem_resp_ready,
    input  logic [MEM_DATA_WIDTH-1:0] mem_resp_data,
    input  logic                      mem_resp_last
);
    icache #(
        .ADDR_WIDTH    (ADDR_WIDTH),
        .FETCH_WIDTH   (FETCH_WIDTH),
        .NUM_SETS      (NUM_SETS),
        .NUM_WAYS      (NUM_WAYS),
        .LINE_BYTES    (LINE_BYTES),
        .MEM_DATA_WIDTH(MEM_DATA_WIDTH),
        .MEM_LEN_WIDTH (MEM_LEN_WIDTH)
    ) dut (
        .clk,
        .rst_n,
        .req_valid,
        .req_ready,
        .req_paddr,
        .req_cacheable,
        .resp_valid,
        .resp_ready,
        .resp_insts,
        .maint_valid,
        .maint_ready,
        .maint_mode,
        .maint_all,
        .maint_vaddr,
        .maint_paddr,
        .maint_done,
        .mem_req_valid,
        .mem_req_ready,
        .mem_req_addr,
        .mem_req_len,
        .mem_resp_valid,
        .mem_resp_ready,
        .mem_resp_data,
        .mem_resp_last
    );
endmodule
