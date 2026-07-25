import loom_params::*;
import loom_consts::*;
import loom_types::*;

module load_queue_multi_test_top (
    input  logic                         clk,
    input  logic                         rst_n,

    input  logic                         enq0_valid,
    input  logic [ROB_ADDR_SZ-1:0]       enq0_rob_idx,
    input  logic [MAX_PREG_SZ-1:0]       enq0_pdst,
    input  logic [MAX_BR_COUNT-1:0]      enq0_br_mask,
    input  logic [1:0]                   enq0_mem_size,
    input  logic                         enq0_mem_signed,
    output logic                         enq0_ready,
    output logic [LDQ_ADDR_SZ+1:0]       enq0_idx,

    input  logic                         enq1_valid,
    input  logic [ROB_ADDR_SZ-1:0]       enq1_rob_idx,
    input  logic [MAX_PREG_SZ-1:0]       enq1_pdst,
    input  logic [MAX_BR_COUNT-1:0]      enq1_br_mask,
    input  logic [1:0]                   enq1_mem_size,
    input  logic                         enq1_mem_signed,
    output logic                         enq1_ready,
    output logic [LDQ_ADDR_SZ+1:0]       enq1_idx,

    input  logic                         agen_valid_in,
    input  logic [LDQ_ADDR_SZ+1:0]       agen_idx_in,
    input  logic [XLEN-1:0]              agen_addr_in,

    output logic                         dmem_req_valid,
    input  logic                         dmem_req_ready,
    output logic [XLEN-1:0]              dmem_req_addr,
    output logic [LDQ_ADDR_SZ+1:0]       dmem_req_idx,
    output logic [MAX_BR_COUNT-1:0]      dmem_req_br_mask,
    output logic [1:0]                   dmem_req_mem_size,
    output logic                         dmem_req_mem_signed,

    input  logic                         dmem_resp_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       dmem_resp_idx,
    input  logic [XLEN-1:0]              dmem_resp_data,

    output logic                         load_wb_valid,
    output logic [XLEN-1:0]              load_wb_data,
    output logic [ROB_ADDR_SZ-1:0]       load_wb_rob_idx,
    output logic [MAX_PREG_SZ-1:0]       load_wb_pdst,
    output logic [LDQ_ADDR_SZ+1:0]       load_wb_ldq_idx,

    input  logic                         commit0_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       commit0_idx,
    input  logic                         commit1_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       commit1_idx,

    input  logic [MAX_BR_COUNT-1:0]      resolve_mask,
    input  logic [MAX_BR_COUNT-1:0]      mispredict_mask,
    input  logic                         br_mispredict,
    input  logic                         flush_pipeline,

    output logic                         ldq_empty
);
    localparam int TAG_WIDTH = LDQ_ADDR_SZ + 2;

    logic [1:0] enq_valid;
    uop_t [1:0] enq_uops;
    logic [1:0] enq_ready;
    logic [1:0][TAG_WIDTH-1:0] enq_idx;

    logic [0:0] agen_valid;
    uop_t [0:0] agen_uops;
    logic [0:0][XLEN-1:0] agen_addr;

    logic [1:0] commit_valid;
    uop_t [1:0] commit_uops;

    uop_t dmem_req_uop;
    exe_unit_resp_t load_wb_resp;
    br_update_info_t brupdate;

    always_comb begin
        enq_valid[0] = enq0_valid;
        enq_valid[1] = enq1_valid;
        enq_uops = '0;
        enq_uops[0].rob_idx = enq0_rob_idx;
        enq_uops[0].pdst = enq0_pdst;
        enq_uops[0].uses_ldq = 1'b1;
        enq_uops[0].dst_rtype = RT_FIX;
        enq_uops[0].br_mask = enq0_br_mask;
        enq_uops[0].mem_size = enq0_mem_size;
        enq_uops[0].mem_signed = enq0_mem_signed;
        enq_uops[1].rob_idx = enq1_rob_idx;
        enq_uops[1].pdst = enq1_pdst;
        enq_uops[1].uses_ldq = 1'b1;
        enq_uops[1].dst_rtype = RT_FIX;
        enq_uops[1].br_mask = enq1_br_mask;
        enq_uops[1].mem_size = enq1_mem_size;
        enq_uops[1].mem_signed = enq1_mem_signed;

        agen_valid[0] = agen_valid_in;
        agen_uops[0] = '0;
        agen_uops[0].uses_ldq = 1'b1;
        agen_uops[0].ldq_idx = agen_idx_in;
        agen_addr[0] = agen_addr_in;

        commit_valid[0] = commit0_valid;
        commit_valid[1] = commit1_valid;
        commit_uops = '0;
        commit_uops[0].uses_ldq = 1'b1;
        commit_uops[0].ldq_idx = commit0_idx;
        commit_uops[1].uses_ldq = 1'b1;
        commit_uops[1].ldq_idx = commit1_idx;

        brupdate = '0;
        brupdate.b1.resolve_mask = resolve_mask;
        brupdate.b1.mispredict_mask = mispredict_mask;
        brupdate.b2.mispredict = br_mispredict;
    end

    assign enq0_ready = enq_ready[0];
    assign enq1_ready = enq_ready[1];
    assign enq0_idx = enq_idx[0];
    assign enq1_idx = enq_idx[1];
    assign dmem_req_br_mask = dmem_req_uop.br_mask;
    assign dmem_req_mem_size = dmem_req_uop.mem_size;
    assign dmem_req_mem_signed = dmem_req_uop.mem_signed;
    assign load_wb_data = load_wb_resp.data;
    assign load_wb_rob_idx = load_wb_resp.uop.rob_idx;
    assign load_wb_pdst = load_wb_resp.uop.pdst;
    assign load_wb_ldq_idx = load_wb_resp.uop.ldq_idx;

    load_queue #(
        .NUM_ENTRIES(LDQ_ENTRIES),
        .ENQ_WIDTH(2),
        .AGEN_WIDTH(1),
        .COMMIT_WIDTH(2),
        .ADDR_WIDTH(XLEN),
        .GEN_BITS(2),
        .SLOT_WIDTH(LDQ_ADDR_SZ),
        .TAG_WIDTH(TAG_WIDTH)
    ) dut (
        .clk,
        .rst_n,
        .enq_valid,
        .enq_uops,
        .enq_ready,
        .enq_idx,
        .agen_valid,
        .agen_uops,
        .agen_addr,
        .dmem_req_valid,
        .dmem_req_ready,
        .dmem_req_addr,
        .dmem_req_idx,
        .dmem_req_uop,
        .dmem_resp_valid,
        .dmem_resp_idx,
        .dmem_resp_data,
        .load_wb_valid,
        .load_wb_resp,
        .commit_valid,
        .commit_uops,
        .brupdate,
        .flush_pipeline,
        .ldq_empty
    );
endmodule
