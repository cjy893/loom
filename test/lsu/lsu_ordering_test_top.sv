import loom_params::*;
import loom_consts::*;
import loom_types::*;

// This wrapper intentionally instantiates the current queues without adding
// ordering logic. The red tests define the contract for their future LSU
// integration.
module lsu_ordering_test_top (
    input  logic                         clk,
    input  logic                         rst_n,

    input  logic                         st_enq_valid,
    input  logic [ROB_ADDR_SZ-1:0]       st_enq_rob_idx,
    input  logic [1:0]                   st_enq_mem_size,
    output logic                         st_enq_ready,
    output logic [STQ_ADDR_SZ+1:0]       st_enq_idx,

    input  logic                         ld_enq_valid,
    input  logic [ROB_ADDR_SZ-1:0]       ld_enq_rob_idx,
    input  logic [MAX_PREG_SZ-1:0]       ld_enq_pdst,
    input  logic [1:0]                   ld_enq_mem_size,
    input  logic                         ld_enq_mem_signed,
    input  logic [STQ_ADDR_SZ+1:0]       ld_enq_stq_snapshot,
    output logic                         ld_enq_ready,
    output logic [LDQ_ADDR_SZ+1:0]       ld_enq_idx,

    input  logic                         st_agen_valid,
    input  logic [STQ_ADDR_SZ+1:0]       st_agen_idx,
    input  logic [XLEN-1:0]              st_agen_addr,

    input  logic                         st_dgen_valid,
    input  logic [STQ_ADDR_SZ+1:0]       st_dgen_idx,
    input  logic [XLEN-1:0]              st_dgen_data,

    input  logic                         ld_agen_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       ld_agen_idx,
    input  logic [XLEN-1:0]              ld_agen_addr,

    output logic                         load_req_valid,
    input  logic                         load_req_ready,
    output logic [XLEN-1:0]              load_req_addr,
    output logic [LDQ_ADDR_SZ+1:0]       load_req_idx,

    input  logic                         load_resp_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       load_resp_idx,
    input  logic [XLEN-1:0]              load_resp_data,

    output logic                         load_wb_valid,
    output logic [XLEN-1:0]              load_wb_data,
    output logic [ROB_ADDR_SZ-1:0]       load_wb_rob_idx,
    output logic [LDQ_ADDR_SZ+1:0]       load_wb_ldq_idx,

    input  logic                         flush_pipeline,
    output logic                         ldq_empty,
    output logic                         stq_empty
);
    localparam int LDQ_TAG_WIDTH = LDQ_ADDR_SZ + 2;
    localparam int STQ_TAG_WIDTH = STQ_ADDR_SZ + 2;

    logic [0:0] ld_enq_valid_vec;
    uop_t [0:0] ld_enq_uops;
    logic [0:0] ld_enq_ready_vec;
    logic [0:0][LDQ_TAG_WIDTH-1:0] ld_enq_idx_vec;
    logic [0:0] ld_agen_valid_vec;
    uop_t [0:0] ld_agen_uops;
    logic [0:0][XLEN-1:0] ld_agen_addr_vec;
    logic [0:0] ld_commit_valid;
    uop_t [0:0] ld_commit_uops;
    uop_t load_req_uop;
    exe_unit_resp_t load_wb_resp;

    logic [0:0] st_enq_valid_vec;
    uop_t [0:0] st_enq_uops;
    logic [0:0] st_enq_ready_vec;
    logic [0:0][STQ_TAG_WIDTH-1:0] st_enq_idx_vec;
    logic [0:0] st_agen_valid_vec;
    uop_t [0:0] st_agen_uops;
    logic [0:0][XLEN-1:0] st_agen_addr_vec;
    logic [0:0] st_dgen_valid_vec;
    uop_t [0:0] st_dgen_uops;
    logic [0:0][XLEN-1:0] st_dgen_data_vec;
    logic [0:0] st_clr_bsy_valid;
    logic [0:0][ROB_ADDR_SZ-1:0] st_clr_bsy_rob_idx;
    logic [0:0] st_commit_valid;
    uop_t [0:0] st_commit_uops;
    logic store_req_valid;
    logic [XLEN-1:0] store_req_addr;
    logic [XLEN-1:0] store_req_data;
    logic [XLEN/8-1:0] store_req_mask;
    logic [STQ_TAG_WIDTH-1:0] store_req_idx;
    uop_t store_req_uop;

    br_update_info_t brupdate;

    always_comb begin
        brupdate = '0;

        ld_enq_valid_vec[0] = ld_enq_valid;
        ld_enq_uops[0] = '0;
        ld_enq_uops[0].rob_idx = ld_enq_rob_idx;
        ld_enq_uops[0].pdst = ld_enq_pdst;
        ld_enq_uops[0].dst_rtype = RT_FIX;
        ld_enq_uops[0].uses_ldq = 1'b1;
        ld_enq_uops[0].mem_cmd = 5'd0;
        ld_enq_uops[0].mem_size = ld_enq_mem_size;
        ld_enq_uops[0].mem_signed = ld_enq_mem_signed;
        ld_enq_uops[0].stq_idx = ld_enq_stq_snapshot;

        ld_agen_valid_vec[0] = ld_agen_valid;
        ld_agen_uops[0] = '0;
        ld_agen_uops[0].uses_ldq = 1'b1;
        ld_agen_uops[0].ldq_idx = ld_agen_idx;
        ld_agen_addr_vec[0] = ld_agen_addr;

        ld_commit_valid = '0;
        ld_commit_uops = '0;

        st_enq_valid_vec[0] = st_enq_valid;
        st_enq_uops[0] = '0;
        st_enq_uops[0].rob_idx = st_enq_rob_idx;
        st_enq_uops[0].uses_stq = 1'b1;
        st_enq_uops[0].mem_cmd = 5'd1;
        st_enq_uops[0].mem_size = st_enq_mem_size;

        st_agen_valid_vec[0] = st_agen_valid;
        st_agen_uops[0] = '0;
        st_agen_uops[0].uses_stq = 1'b1;
        st_agen_uops[0].stq_idx = st_agen_idx;
        st_agen_addr_vec[0] = st_agen_addr;

        st_dgen_valid_vec[0] = st_dgen_valid;
        st_dgen_uops[0] = '0;
        st_dgen_uops[0].uses_stq = 1'b1;
        st_dgen_uops[0].stq_idx = st_dgen_idx;
        st_dgen_data_vec[0] = st_dgen_data;

        st_commit_valid = '0;
        st_commit_uops = '0;
    end

    assign ld_enq_ready = ld_enq_ready_vec[0];
    assign ld_enq_idx = ld_enq_idx_vec[0];
    assign st_enq_ready = st_enq_ready_vec[0];
    assign st_enq_idx = st_enq_idx_vec[0];
    assign load_wb_data = load_wb_resp.data;
    assign load_wb_rob_idx = load_wb_resp.uop.rob_idx;
    assign load_wb_ldq_idx = load_wb_resp.uop.ldq_idx;

    load_queue #(
        .NUM_ENTRIES(LDQ_ENTRIES),
        .ENQ_WIDTH(1),
        .AGEN_WIDTH(1),
        .COMMIT_WIDTH(1),
        .ADDR_WIDTH(XLEN),
        .GEN_BITS(2),
        .SLOT_WIDTH(LDQ_ADDR_SZ),
        .TAG_WIDTH(LDQ_TAG_WIDTH)
    ) load_queue_dut (
        .clk,
        .rst_n,
        .enq_valid(ld_enq_valid_vec),
        .enq_uops(ld_enq_uops),
        .enq_ready(ld_enq_ready_vec),
        .enq_idx(ld_enq_idx_vec),
        .agen_valid(ld_agen_valid_vec),
        .agen_uops(ld_agen_uops),
        .agen_addr(ld_agen_addr_vec),
        .dmem_req_valid(load_req_valid),
        .dmem_req_ready(load_req_ready),
        .dmem_req_addr(load_req_addr),
        .dmem_req_idx(load_req_idx),
        .dmem_req_uop(load_req_uop),
        .dmem_resp_valid(load_resp_valid),
        .dmem_resp_idx(load_resp_idx),
        .dmem_resp_data(load_resp_data),
        .load_wb_valid,
        .load_wb_resp,
        .commit_valid(ld_commit_valid),
        .commit_uops(ld_commit_uops),
        .brupdate,
        .flush_pipeline,
        .ldq_empty
    );

    store_queue #(
        .NUM_ENTRIES(STQ_ENTRIES),
        .ENQ_WIDTH(1),
        .AGEN_WIDTH(1),
        .DGEN_WIDTH(1),
        .COMMIT_WIDTH(1),
        .CLR_WIDTH(1),
        .ADDR_WIDTH(XLEN),
        .DATA_WIDTH(XLEN),
        .GEN_BITS(2),
        .SLOT_WIDTH(STQ_ADDR_SZ),
        .TAG_WIDTH(STQ_TAG_WIDTH)
    ) store_queue_dut (
        .clk,
        .rst_n,
        .enq_valid(st_enq_valid_vec),
        .enq_uops(st_enq_uops),
        .enq_ready(st_enq_ready_vec),
        .enq_idx(st_enq_idx_vec),
        .agen_valid(st_agen_valid_vec),
        .agen_uops(st_agen_uops),
        .agen_addr(st_agen_addr_vec),
        .dgen_valid(st_dgen_valid_vec),
        .dgen_uops(st_dgen_uops),
        .dgen_data(st_dgen_data_vec),
        .clr_bsy_valid(st_clr_bsy_valid),
        .clr_bsy_rob_idx(st_clr_bsy_rob_idx),
        .store_req_valid,
        .store_req_ready(1'b0),
        .store_req_addr,
        .store_req_data,
        .store_req_mask,
        .store_req_idx,
        .store_req_uop,
        .store_ack_valid(1'b0),
        .store_ack_idx('0),
        .commit_valid(st_commit_valid),
        .commit_uops(st_commit_uops),
        .brupdate,
        .flush_pipeline,
        .stq_empty
    );
endmodule
