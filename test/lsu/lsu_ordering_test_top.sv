import loom_params::*;
import loom_consts::*;
import loom_types::*;

// Queue-level integration harness. The production LSU must preserve this
// ordering, recovery, and memory-side behavior when it connects these queues.
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

    output logic                         st_clr_bsy_valid,
    output logic [ROB_ADDR_SZ-1:0]       st_clr_bsy_rob_idx,

    input  logic                         st_commit_valid,
    input  logic [STQ_ADDR_SZ+1:0]       st_commit_idx,

    output logic                         store_req_valid,
    input  logic                         store_req_ready,
    output logic [XLEN-1:0]              store_req_addr,
    output logic [XLEN-1:0]              store_req_data,
    output logic [XLEN/8-1:0]            store_req_mask,
    output logic [STQ_ADDR_SZ+1:0]       store_req_idx,
    output logic [ROB_ADDR_SZ-1:0]       store_req_rob_idx,

    input  logic                         store_ack_valid,
    input  logic [STQ_ADDR_SZ+1:0]       store_ack_idx,

    input  logic                         ld_agen_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       ld_agen_idx,
    input  logic [XLEN-1:0]              ld_agen_addr,
    input  logic                         ld_commit_valid,
    input  logic [LDQ_ADDR_SZ+1:0]       ld_commit_idx,

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

    input  logic [ROB_ADDR_SZ-1:0]       rob_head_idx,
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
    logic [0:0] ld_commit_valid_vec;
    uop_t [0:0] ld_commit_uops;
    uop_t load_req_uop;
    exe_unit_resp_t load_wb_resp;
    logic ld_query_valid;
    uop_t ld_query_uop;
    logic [XLEN-1:0] ld_query_addr;
    logic ld_query_block;
    logic ld_query_forward_valid;
    logic [XLEN-1:0] ld_query_forward_data;

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
    logic [0:0] st_clr_bsy_valid_vec;
    logic [0:0][ROB_ADDR_SZ-1:0] st_clr_bsy_rob_idx_vec;
    logic [0:0] st_commit_valid_vec;
    uop_t [0:0] st_commit_uops;
    uop_t store_req_uop;

    logic ld_xlate_req_valid, ld_xlate_req_ready;
    logic [LDQ_TAG_WIDTH-1:0] ld_xlate_req_tag, ld_xlate_resp_tag;
    logic [XLEN-1:0] ld_xlate_req_vaddr, ld_xlate_resp_paddr;
    logic ld_xlate_resp_valid;
    logic [1:0] ld_xlate_resp_mat;
    logic ld_xlate_resp_cacheable;

    logic st_xlate_req_valid, st_xlate_req_ready;
    logic [STQ_TAG_WIDTH-1:0] st_xlate_req_tag, st_xlate_resp_tag;
    logic [XLEN-1:0] st_xlate_req_vaddr, st_xlate_resp_paddr;
    logic st_xlate_resp_valid;
    logic [1:0] st_xlate_resp_mat;
    logic st_xlate_resp_cacheable;

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

        ld_commit_valid_vec[0] = ld_commit_valid;
        ld_commit_uops = '0;
        ld_commit_uops[0].uses_ldq = 1'b1;
        ld_commit_uops[0].ldq_idx = ld_commit_idx;

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

        st_commit_valid_vec[0] = st_commit_valid;
        st_commit_uops = '0;
        st_commit_uops[0].uses_stq = 1'b1;
        st_commit_uops[0].stq_idx = st_commit_idx;
    end

    assign ld_enq_ready = ld_enq_ready_vec[0];
    assign ld_enq_idx = ld_enq_idx_vec[0];
    assign st_enq_ready = st_enq_ready_vec[0];
    assign st_enq_idx = st_enq_idx_vec[0];
    assign load_wb_data = load_wb_resp.data;
    assign load_wb_rob_idx = load_wb_resp.uop.rob_idx;
    assign load_wb_ldq_idx = load_wb_resp.uop.ldq_idx;
    assign st_clr_bsy_valid = st_clr_bsy_valid_vec[0];
    assign st_clr_bsy_rob_idx = st_clr_bsy_rob_idx_vec[0];
    assign store_req_rob_idx = store_req_uop.rob_idx;

    lsq_identity_xlate #(.TAG_WIDTH(LDQ_TAG_WIDTH)) ld_xlate (
        .clk, .rst_n, .flush(flush_pipeline),
        .req_valid(ld_xlate_req_valid), .req_ready(ld_xlate_req_ready),
        .req_tag(ld_xlate_req_tag), .req_vaddr(ld_xlate_req_vaddr),
        .req_access(ACCESS_LOAD),
        .resp_valid(ld_xlate_resp_valid), .resp_ready(1'b1),
        .resp_tag(ld_xlate_resp_tag), .resp_paddr(ld_xlate_resp_paddr),
        .resp_access(), .resp_mat(ld_xlate_resp_mat),
        .resp_cacheable(ld_xlate_resp_cacheable)
    );

    lsq_identity_xlate #(.TAG_WIDTH(STQ_TAG_WIDTH)) st_xlate (
        .clk, .rst_n, .flush(flush_pipeline),
        .req_valid(st_xlate_req_valid), .req_ready(st_xlate_req_ready),
        .req_tag(st_xlate_req_tag), .req_vaddr(st_xlate_req_vaddr),
        .req_access(ACCESS_STORE),
        .resp_valid(st_xlate_resp_valid), .resp_ready(1'b1),
        .resp_tag(st_xlate_resp_tag), .resp_paddr(st_xlate_resp_paddr),
        .resp_access(), .resp_mat(st_xlate_resp_mat),
        .resp_cacheable(st_xlate_resp_cacheable)
    );

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
        .enq_fire(ld_enq_valid_vec),
        .enq_uops(ld_enq_uops),
        .enq_ready(ld_enq_ready_vec),
        .enq_idx(ld_enq_idx_vec),
        .agen_valid(ld_agen_valid_vec),
        .agen_uops(ld_agen_uops),
        .agen_addr(ld_agen_addr_vec),
        .ld_query_valid,
        .ld_query_uop,
        .ld_query_addr,
        .ld_query_block,
        .ld_query_forward_valid,
        .ld_query_forward_data,
        .dmem_req_valid(load_req_valid),
        .dmem_req_ready(load_req_ready),
        .dmem_req_addr(load_req_addr),
        .dmem_req_idx(load_req_idx),
        .dmem_req_uop(load_req_uop),
        .dmem_resp_valid(load_resp_valid),
        .dmem_resp_idx(load_resp_idx),
        .dmem_resp_data(load_resp_data),
        .xlate_req_valid(ld_xlate_req_valid),
        .xlate_req_ready(ld_xlate_req_ready),
        .xlate_req_vaddr(ld_xlate_req_vaddr),
        .xlate_req_tag(ld_xlate_req_tag),
        .xlate_resp_valid(ld_xlate_resp_valid),
        .xlate_resp_accept(ld_xlate_resp_valid),
        .xlate_resp_tag(ld_xlate_resp_tag),
        .xlate_resp_paddr(ld_xlate_resp_paddr),
        .xlate_resp_mat(ld_xlate_resp_mat),
        .xlate_resp_cacheable(ld_xlate_resp_cacheable),
        .xlate_resp_xcpt(1'b0),
        .xlate_resp_match(),
        .xlate_resp_uop(),
        .load_wb_valid,
        .load_wb_resp,
        .commit_valid(ld_commit_valid_vec),
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
        .enq_fire(st_enq_valid_vec),
        .enq_uops(st_enq_uops),
        .enq_ready(st_enq_ready_vec),
        .enq_idx(st_enq_idx_vec),
        .agen_valid(st_agen_valid_vec),
        .agen_uops(st_agen_uops),
        .agen_addr(st_agen_addr_vec),
        .dgen_valid(st_dgen_valid_vec),
        .dgen_uops(st_dgen_uops),
        .dgen_data(st_dgen_data_vec),
        .clr_bsy_valid(st_clr_bsy_valid_vec),
        .clr_bsy_rob_idx(st_clr_bsy_rob_idx_vec),
        .store_req_valid,
        .store_req_ready,
        .store_req_addr,
        .store_req_data,
        .store_req_mask,
        .store_req_idx,
        .store_req_uop,
        .xlate_req_valid(st_xlate_req_valid),
        .xlate_req_ready(st_xlate_req_ready),
        .xlate_req_vaddr(st_xlate_req_vaddr),
        .xlate_req_tag(st_xlate_req_tag),
        .xlate_resp_valid(st_xlate_resp_valid),
        .xlate_resp_accept(st_xlate_resp_valid),
        .xlate_resp_tag(st_xlate_resp_tag),
        .xlate_resp_paddr(st_xlate_resp_paddr),
        .xlate_resp_mat(st_xlate_resp_mat),
        .xlate_resp_cacheable(st_xlate_resp_cacheable),
        .xlate_resp_xcpt(1'b0),
        .xlate_resp_match(),
        .xlate_resp_uop(),
        .store_ack_valid,
        .store_ack_idx,
        .commit_valid(st_commit_valid_vec),
        .commit_uops(st_commit_uops),
        .ld_query_valid,
        .ld_query_uop,
        .ld_query_addr,
        .rob_head_idx,
        .ld_query_block,
        .ld_query_forward_valid,
        .ld_query_forward_data,
        .brupdate,
        .flush_pipeline,
        .stq_empty
    );
endmodule
