import loom_params::*;
import loom_consts::*;
import loom_types::*;

module lsq_allocation_test_top (
    input  logic                         clk,
    input  logic                         rst_n,

    input  logic [1:0]                   ld_enq_valid,
    input  logic [1:0]                   ld_enq_fire,
    output logic [1:0]                   ld_enq_ready,
    output logic [LDQ_ADDR_SZ+1:0]       ld_enq_idx0,
    output logic [LDQ_ADDR_SZ+1:0]       ld_enq_idx1,
    output logic                         ldq_empty,

    input  logic [1:0]                   st_enq_valid,
    input  logic [1:0]                   st_enq_fire,
    output logic [1:0]                   st_enq_ready,
    output logic [STQ_ADDR_SZ+1:0]       st_enq_idx0,
    output logic [STQ_ADDR_SZ+1:0]       st_enq_idx1,
    output logic                         stq_empty,

    input  logic                         flush_pipeline
);
    uop_t [1:0] ld_enq_uops;
    uop_t [1:0] st_enq_uops;
    logic [1:0][LDQ_ADDR_SZ+1:0] ld_enq_idx;
    logic [1:0][STQ_ADDR_SZ+1:0] st_enq_idx;
    br_update_info_t brupdate;

    assign ld_enq_idx0 = ld_enq_idx[0];
    assign ld_enq_idx1 = ld_enq_idx[1];
    assign st_enq_idx0 = st_enq_idx[0];
    assign st_enq_idx1 = st_enq_idx[1];

    always_comb begin
        brupdate = '0;
        ld_enq_uops = '0;
        st_enq_uops = '0;

        for(int w = 0; w < 2; w++) begin
            ld_enq_uops[w].uses_ldq = 1'b1;
            ld_enq_uops[w].rob_idx = w;
            ld_enq_uops[w].mem_size = 2'd2;

            st_enq_uops[w].uses_stq = 1'b1;
            st_enq_uops[w].rob_idx = w;
            st_enq_uops[w].mem_size = 2'd2;
        end
    end

    load_queue #(
        .ENQ_WIDTH(2),
        .AGEN_WIDTH(1),
        .COMMIT_WIDTH(1)
    ) load_queue_dut (
        .clk,
        .rst_n,
        .enq_valid(ld_enq_valid),
        .enq_fire(ld_enq_fire),
        .enq_uops(ld_enq_uops),
        .enq_ready(ld_enq_ready),
        .enq_idx(ld_enq_idx),
        .agen_valid('0),
        .agen_uops('0),
        .agen_addr('0),
        .ld_query_valid(),
        .ld_query_uop(),
        .ld_query_addr(),
        .ld_query_block(1'b0),
        .ld_query_forward_valid(1'b0),
        .ld_query_forward_data('0),
        .dmem_req_valid(),
        .dmem_req_ready(1'b0),
        .dmem_req_addr(),
        .dmem_req_idx(),
        .dmem_req_uop(),
        .dmem_resp_valid(1'b0),
        .dmem_resp_idx('0),
        .dmem_resp_data('0),
        .xlate_req_valid(),
        .xlate_req_ready(1'b1),
        .xlate_req_vaddr(),
        .xlate_req_tag(),
        .xlate_resp_valid(1'b0),
        .xlate_resp_accept(1'b0),
        .xlate_resp_tag('0),
        .xlate_resp_paddr('0),
        .xlate_resp_mat('0),
        .xlate_resp_cacheable(1'b0),
        .xlate_resp_xcpt(1'b0),
        .xlate_resp_match(),
        .xlate_resp_uop(),
        .load_wb_valid(),
        .load_wb_resp(),
        .commit_valid('0),
        .commit_uops('0),
        .brupdate,
        .flush_pipeline,
        .ldq_empty
    );

    store_queue #(
        .ENQ_WIDTH(2),
        .AGEN_WIDTH(1),
        .DGEN_WIDTH(1),
        .COMMIT_WIDTH(1),
        .CLR_WIDTH(1)
    ) store_queue_dut (
        .clk,
        .rst_n,
        .enq_valid(st_enq_valid),
        .enq_fire(st_enq_fire),
        .enq_uops(st_enq_uops),
        .enq_ready(st_enq_ready),
        .enq_idx(st_enq_idx),
        .agen_valid('0),
        .agen_uops('0),
        .agen_addr('0),
        .dgen_valid('0),
        .dgen_uops('0),
        .dgen_data('0),
        .clr_bsy_valid(),
        .clr_bsy_rob_idx(),
        .store_req_valid(),
        .store_req_ready(1'b0),
        .store_req_addr(),
        .store_req_data(),
        .store_req_mask(),
        .store_req_idx(),
        .store_req_uop(),
        .xlate_req_valid(),
        .xlate_req_ready(1'b1),
        .xlate_req_vaddr(),
        .xlate_req_tag(),
        .xlate_resp_valid(1'b0),
        .xlate_resp_accept(1'b0),
        .xlate_resp_tag('0),
        .xlate_resp_paddr('0),
        .xlate_resp_mat('0),
        .xlate_resp_cacheable(1'b0),
        .xlate_resp_xcpt(1'b0),
        .xlate_resp_match(),
        .xlate_resp_uop(),
        .store_ack_valid(1'b0),
        .store_ack_idx('0),
        .commit_valid('0),
        .commit_uops('0),
        .ld_query_valid(1'b0),
        .ld_query_uop('0),
        .ld_query_addr('0),
        .rob_head_idx('0),
        .ld_query_block(),
        .ld_query_forward_valid(),
        .ld_query_forward_data(),
        .brupdate,
        .flush_pipeline,
        .stq_empty
    );
endmodule
