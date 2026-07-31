import loom_params::*;
import loom_consts::*;
import loom_types::*;

module store_queue_test_top (
    input  logic                         clk,
    input  logic                         rst_n,

    input  logic                         enq0_valid,
    input  logic [ROB_ADDR_SZ-1:0]       enq0_rob_idx,
    input  logic [MAX_BR_COUNT-1:0]      enq0_br_mask,
    input  logic [1:0]                   enq0_mem_size,
    output logic                         enq0_ready,
    output logic [STQ_ADDR_SZ+1:0]       enq0_idx,

    input  logic                         enq1_valid,
    input  logic [ROB_ADDR_SZ-1:0]       enq1_rob_idx,
    input  logic [MAX_BR_COUNT-1:0]      enq1_br_mask,
    input  logic [1:0]                   enq1_mem_size,
    output logic                         enq1_ready,
    output logic [STQ_ADDR_SZ+1:0]       enq1_idx,

    input  logic                         agen_valid_in,
    input  logic [STQ_ADDR_SZ+1:0]       agen_idx_in,
    input  logic [XLEN-1:0]              agen_addr_in,

    input  logic                         dgen_valid_in,
    input  logic [STQ_ADDR_SZ+1:0]       dgen_idx_in,
    input  logic [XLEN-1:0]              dgen_data_in,

    output logic                         clr0_valid,
    output logic [ROB_ADDR_SZ-1:0]       clr0_rob_idx,
    output logic                         clr1_valid,
    output logic [ROB_ADDR_SZ-1:0]       clr1_rob_idx,

    output logic                         store_req_valid,
    input  logic                         store_req_ready,
    output logic [XLEN-1:0]              store_req_addr,
    output logic [XLEN-1:0]              store_req_data,
    output logic [XLEN/8-1:0]            store_req_mask,
    output logic [STQ_ADDR_SZ+1:0]       store_req_idx,
    output logic [ROB_ADDR_SZ-1:0]       store_req_rob_idx,
    output logic [MAX_BR_COUNT-1:0]      store_req_br_mask,
    output logic [1:0]                   store_req_mem_size,

    input  logic                         store_ack_valid,
    input  logic [STQ_ADDR_SZ+1:0]       store_ack_idx,

    input  logic                         commit0_valid,
    input  logic [STQ_ADDR_SZ+1:0]       commit0_idx,
    input  logic                         commit1_valid,
    input  logic [STQ_ADDR_SZ+1:0]       commit1_idx,

    input  logic [MAX_BR_COUNT-1:0]      resolve_mask,
    input  logic [MAX_BR_COUNT-1:0]      mispredict_mask,
    input  logic                         br_mispredict,
    input  logic                         flush_pipeline,

    input  logic                         query_valid,
    input  logic [ROB_ADDR_SZ-1:0]       query_rob_idx,
    input  logic [XLEN-1:0]              query_addr,
    input  logic [1:0]                   query_mem_size,
    input  logic [ROB_ADDR_SZ-1:0]       rob_head_idx,
    output logic                         query_block,
    output logic                         query_forward_valid,
    output logic [XLEN-1:0]              query_forward_data,

    output logic                         xlate_done,

    output logic                         stq_empty
);
    localparam int TAG_WIDTH = STQ_ADDR_SZ + 2;

    logic [1:0] enq_valid;
    uop_t [1:0] enq_uops;
    logic [1:0] enq_ready;
    logic [1:0][TAG_WIDTH-1:0] enq_idx;

    logic [0:0] agen_valid;
    uop_t [0:0] agen_uops;
    logic [0:0][XLEN-1:0] agen_addr;

    logic [0:0] dgen_valid;
    uop_t [0:0] dgen_uops;
    logic [0:0][XLEN-1:0] dgen_data;

    logic [1:0] clr_bsy_valid;
    logic [1:0][ROB_ADDR_SZ-1:0] clr_bsy_rob_idx;

    logic [1:0] commit_valid;
    uop_t [1:0] commit_uops;
    uop_t query_uop;
    uop_t store_req_uop;
    br_update_info_t brupdate;

    logic xlate_req_valid, xlate_req_ready;
    logic [TAG_WIDTH-1:0] xlate_req_tag, xlate_resp_tag;
    logic [XLEN-1:0] xlate_req_vaddr, xlate_resp_paddr;
    logic xlate_resp_valid;
    logic [1:0] xlate_resp_mat;
    logic xlate_resp_cacheable;

    always_comb begin
        enq_valid[0] = enq0_valid;
        enq_valid[1] = enq1_valid;
        enq_uops = '0;
        enq_uops[0].rob_idx = enq0_rob_idx;
        enq_uops[0].br_mask = enq0_br_mask;
        enq_uops[0].mem_size = enq0_mem_size;
        enq_uops[0].mem_cmd = 5'd1;
        enq_uops[0].uses_stq = 1'b1;
        enq_uops[1].rob_idx = enq1_rob_idx;
        enq_uops[1].br_mask = enq1_br_mask;
        enq_uops[1].mem_size = enq1_mem_size;
        enq_uops[1].mem_cmd = 5'd1;
        enq_uops[1].uses_stq = 1'b1;

        agen_valid[0] = agen_valid_in;
        agen_uops[0] = '0;
        agen_uops[0].uses_stq = 1'b1;
        agen_uops[0].stq_idx = agen_idx_in;
        agen_addr[0] = agen_addr_in;

        dgen_valid[0] = dgen_valid_in;
        dgen_uops[0] = '0;
        dgen_uops[0].uses_stq = 1'b1;
        dgen_uops[0].stq_idx = dgen_idx_in;
        dgen_data[0] = dgen_data_in;

        commit_valid[0] = commit0_valid;
        commit_valid[1] = commit1_valid;
        commit_uops = '0;
        commit_uops[0].uses_stq = 1'b1;
        commit_uops[0].stq_idx = commit0_idx;
        commit_uops[1].uses_stq = 1'b1;
        commit_uops[1].stq_idx = commit1_idx;

        query_uop = '0;
        query_uop.rob_idx = query_rob_idx;
        query_uop.uses_ldq = 1'b1;
        query_uop.mem_size = query_mem_size;

        brupdate = '0;
        brupdate.b1.resolve_mask = resolve_mask;
        brupdate.b1.mispredict_mask = mispredict_mask;
        brupdate.b2.mispredict = br_mispredict;
    end

    assign enq0_ready = enq_ready[0];
    assign enq1_ready = enq_ready[1];
    assign enq0_idx = enq_idx[0];
    assign enq1_idx = enq_idx[1];
    assign clr0_valid = clr_bsy_valid[0];
    assign clr0_rob_idx = clr_bsy_rob_idx[0];
    assign clr1_valid = clr_bsy_valid[1];
    assign clr1_rob_idx = clr_bsy_rob_idx[1];
    assign store_req_rob_idx = store_req_uop.rob_idx;
    assign store_req_br_mask = store_req_uop.br_mask;
    assign store_req_mem_size = store_req_uop.mem_size;
    assign xlate_done = xlate_resp_valid;

    lsq_identity_xlate #(.TAG_WIDTH(TAG_WIDTH)) xlate (
        .clk, .rst_n, .flush(flush_pipeline),
        .req_valid(xlate_req_valid), .req_ready(xlate_req_ready),
        .req_tag(xlate_req_tag), .req_vaddr(xlate_req_vaddr),
        .req_access(ACCESS_STORE),
        .resp_valid(xlate_resp_valid), .resp_ready(1'b1),
        .resp_tag(xlate_resp_tag), .resp_paddr(xlate_resp_paddr),
        .resp_access(), .resp_mat(xlate_resp_mat),
        .resp_cacheable(xlate_resp_cacheable)
    );

    store_queue dut (
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
        .dgen_valid,
        .dgen_uops,
        .dgen_data,
        .clr_bsy_valid,
        .clr_bsy_rob_idx,
        .store_req_valid,
        .store_req_ready,
        .store_req_addr,
        .store_req_data,
        .store_req_mask,
        .store_req_idx,
        .store_req_uop,
        .xlate_req_valid,
        .xlate_req_ready,
        .xlate_req_vaddr,
        .xlate_req_tag,
        .xlate_resp_valid,
        .xlate_resp_accept(xlate_resp_valid),
        .xlate_resp_tag,
        .xlate_resp_paddr,
        .xlate_resp_mat,
        .xlate_resp_cacheable,
        .xlate_resp_xcpt(1'b0),
        .xlate_resp_match(),
        .xlate_resp_uop(),
        .store_ack_valid,
        .store_ack_idx,
        .commit_valid,
        .commit_uops,
        .ld_query_valid(query_valid),
        .ld_query_uop(query_uop),
        .ld_query_addr(query_addr),
        .rob_head_idx,
        .ld_query_block(query_block),
        .ld_query_forward_valid(query_forward_valid),
        .ld_query_forward_data(query_forward_data),
        .brupdate,
        .flush_pipeline,
        .stq_empty
    );
endmodule
