module dcache_test_top #(
    parameter int ADDR_WIDTH = 32,
    parameter int TAG_WIDTH = 8,
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
    input  logic                  req_is_store,
    input  logic [31:0]           req_wdata,
    input  logic [3:0]            req_wmask,
    input  logic [TAG_WIDTH-1:0]  req_tag,

    output logic                 resp_valid,
    input  logic                 resp_ready,
    output logic                 resp_is_store,
    output logic [31:0]          resp_rdata,
    output logic [TAG_WIDTH-1:0] resp_tag,

    input  logic                  maint_valid,
    output logic                  maint_ready,
    input  logic [1:0]            maint_op,
    input  logic [1:0]            maint_mode,
    input  logic                  maint_all,
    input  logic [ADDR_WIDTH-1:0] maint_vaddr,
    input  logic [ADDR_WIDTH-1:0] maint_paddr,
    output logic                  maint_done,

    output logic                     mem_read_req_valid,
    input  logic                     mem_read_req_ready,
    output logic [ADDR_WIDTH-1:0]    mem_read_req_addr,
    output logic [MEM_LEN_WIDTH-1:0] mem_read_req_len,

    input  logic                      mem_read_resp_valid,
    output logic                      mem_read_resp_ready,
    input  logic [MEM_DATA_WIDTH-1:0] mem_read_resp_data,
    input  logic                      mem_read_resp_last,

    output logic                     mem_write_req_valid,
    input  logic                     mem_write_req_ready,
    output logic [ADDR_WIDTH-1:0]    mem_write_req_addr,
    output logic [MEM_LEN_WIDTH-1:0] mem_write_req_len,

    output logic                        mem_write_data_valid,
    input  logic                        mem_write_data_ready,
    output logic [MEM_DATA_WIDTH-1:0]   mem_write_data,
    output logic [MEM_DATA_WIDTH/8-1:0] mem_write_mask,
    output logic                        mem_write_data_last,

    input  logic mem_write_resp_valid,
    output logic mem_write_resp_ready
);
    dcache #(
        .ADDR_WIDTH    (ADDR_WIDTH),
        .TAG_WIDTH     (TAG_WIDTH),
        .NUM_SETS      (NUM_SETS),
        .NUM_WAYS      (NUM_WAYS),
        .LINE_BYTES    (LINE_BYTES),
        .MEM_DATA_WIDTH(MEM_DATA_WIDTH),
        .MEM_LEN_WIDTH (MEM_LEN_WIDTH)
    ) dut (.*);
endmodule
