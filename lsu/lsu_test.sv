import loom_params::*;
import loom_types::*;

// Temporary scalar adapter used by test/lsu. The production LSU will replace
// this module after the load and store queue interfaces are both established.
module lsu_test (
    input  logic                         clk,
    input  logic                         rst_n,

    input  logic                         ldq_enq_valid,
    output logic                         ldq_enq_ready,
    input  uop_t                         ldq_enq_uop,
    output logic [LDQ_ADDR_SZ+1:0]       ldq_enq_idx,

    input  logic                         load_agen_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       load_agen_idx,
    input  logic [XLEN-1:0]              load_agen_addr,

    output logic                         dmem_req_valid,
    input  logic                         dmem_req_ready,
    output logic [XLEN-1:0]              dmem_req_addr,
    output logic [LDQ_ADDR_SZ+1:0]       dmem_req_idx,

    input  logic                         dmem_resp_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       dmem_resp_idx,
    input  logic [XLEN-1:0]              dmem_resp_data,

    output logic                         load_wb_valid,
    output exe_unit_resp_t               load_wb_resp,

    input  logic                         ldq_commit_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       ldq_commit_idx,

    input  br_update_info_t              brupdate,
    input  logic                         flush_pipeline
);
    localparam int TAG_WIDTH = LDQ_ADDR_SZ + 2;

    logic [0:0] enq_valid;
    uop_t [0:0] enq_uops;
    logic [0:0] enq_ready;
    logic [0:0][TAG_WIDTH-1:0] enq_idx;

    logic [0:0] agen_valid;
    uop_t [0:0] agen_uops;
    logic [0:0][XLEN-1:0] agen_addr;

    logic [0:0] commit_valid;
    uop_t [0:0] commit_uops;

    uop_t dmem_req_uop_unused;
    logic ldq_empty_unused;

    always_comb begin
        enq_valid[0] = ldq_enq_valid;
        enq_uops[0] = ldq_enq_uop;

        agen_valid[0] = load_agen_valid;
        agen_uops[0] = '0;
        agen_uops[0].uses_ldq = 1'b1;
        agen_uops[0].ldq_idx = load_agen_idx;
        agen_addr[0] = load_agen_addr;

        commit_valid[0] = ldq_commit_valid;
        commit_uops[0] = '0;
        commit_uops[0].uses_ldq = 1'b1;
        commit_uops[0].ldq_idx = ldq_commit_idx;
    end

    assign ldq_enq_ready = enq_ready[0];
    assign ldq_enq_idx = enq_idx[0];

    load_queue #(
        .NUM_ENTRIES(LDQ_ENTRIES),
        .ENQ_WIDTH(1),
        .AGEN_WIDTH(1),
        .COMMIT_WIDTH(1),
        .ADDR_WIDTH(XLEN),
        .GEN_BITS(2),
        .SLOT_WIDTH(LDQ_ADDR_SZ),
        .TAG_WIDTH(TAG_WIDTH)
    ) load_queue_test (
        .clk,
        .rst_n,
        .enq_valid,
        .enq_fire(enq_valid),
        .enq_uops,
        .enq_ready,
        .enq_idx,
        .agen_valid,
        .agen_uops,
        .agen_addr,
        .ld_query_valid(),
        .ld_query_uop(),
        .ld_query_addr(),
        .ld_query_block(1'b0),
        .ld_query_forward_valid(1'b0),
        .ld_query_forward_data('0),
        .dmem_req_valid,
        .dmem_req_ready,
        .dmem_req_addr,
        .dmem_req_idx,
        .dmem_req_uop(dmem_req_uop_unused),
        .dmem_resp_valid,
        .dmem_resp_idx,
        .dmem_resp_data,
        .load_wb_valid,
        .load_wb_resp,
        .commit_valid,
        .commit_uops,
        .brupdate,
        .flush_pipeline,
        .ldq_empty(ldq_empty_unused)
    );
endmodule
