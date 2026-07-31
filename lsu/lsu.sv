import loom_params::*;
import loom_consts::*;
import loom_types::*;

module lsu #(
    parameter int DISPATCH_WIDTH = DECODE_WIDTH,
    parameter int AGEN_WIDTH = LSU_WIDTH,
    parameter int DGEN_WIDTH = MEM_WIDTH,
    parameter int COMMIT_WIDTH = RETIRE_WIDTH,
    parameter int CLR_WIDTH = DECODE_WIDTH
)(
    input logic clk,
    input logic rst_n,

    input logic [DISPATCH_WIDTH-1:0] dis_valid,
    input uop_t [DISPATCH_WIDTH-1:0] dis_uops,
    input logic [DISPATCH_WIDTH-1:0] dis_uses_ldq,
    input logic [DISPATCH_WIDTH-1:0] dis_uses_stq,
    output logic [DISPATCH_WIDTH-1:0] dis_lsq_ready,
    output logic [DISPATCH_WIDTH-1:0] [LDQ_ADDR_SZ+1:0] dis_ldq_idx,
    output logic [DISPATCH_WIDTH-1:0] [STQ_ADDR_SZ+1:0] dis_stq_idx,
    input logic [DISPATCH_WIDTH-1:0] dis_fire,

    input logic [AGEN_WIDTH-1:0] agen_valid,
    input uop_t [AGEN_WIDTH-1:0] agen_uops,
    input logic [AGEN_WIDTH-1:0] [XLEN-1:0] agen_addr,

    input logic [DGEN_WIDTH-1:0] dgen_valid,
    input uop_t [DGEN_WIDTH-1:0] dgen_uops,
    input logic [DGEN_WIDTH-1:0] [XLEN-1:0] dgen_data,

    output logic                    xlate_req_valid,
    input  logic                    xlate_req_ready,
    output logic [LSU_ADDR_SZ+1:0]  xlate_req_tag,
    output logic [XLEN-1:0]         xlate_req_vaddr,
    output logic [1:0]              xlate_req_access,

    input  logic                    xlate_resp_valid,
    output logic                    xlate_resp_ready,
    input  logic [LSU_ADDR_SZ+1:0]  xlate_resp_tag,
    input  logic [1:0]              xlate_resp_access,
    input  logic [XLEN-1:0]         xlate_resp_paddr,
    input  logic [1:0]              xlate_resp_mat,
    input  logic                    xlate_resp_cacheable,
    input  logic                    xlate_resp_xcpt_valid,
    input  logic [5:0]              xlate_resp_xcpt_code,
    input  logic [XLEN-1:0]         xlate_resp_badvaddr,

    output exception_t              xlate_xcpt,
    input  logic                    xlate_xcpt_ready,

    input logic [COMMIT_WIDTH-1:0] commit_valid,
    input uop_t [COMMIT_WIDTH-1:0] commit_uops,
    input logic [ROB_ADDR_SZ-1:0] rob_head_idx,

    output logic [CLR_WIDTH-1:0] clr_bsy_valid,
    output logic [CLR_WIDTH-1:0] [ROB_ADDR_SZ-1:0] clr_bsy_rob_idx,

    output logic load_wb_valid,
    output exe_unit_resp_t load_wb_resp,

    output logic dmem_req_valid,
    input logic dmem_req_ready,
    output logic dmem_req_is_store,
    output logic [XLEN-1:0] dmem_req_addr,
    output logic [XLEN-1:0] dmem_req_data,
    output logic [XLEN/8-1:0] dmem_req_mask,
    output logic [1:0] dmem_req_size,
    output logic [LSU_ADDR_SZ+1:0] dmem_req_idx,
    output uop_t dmem_req_uop,

    input logic dmem_resp_valid,
    input logic dmem_resp_is_store,
    input logic [XLEN-1:0] dmem_resp_data,
    input logic [LSU_ADDR_SZ+1:0] dmem_resp_idx,

    input br_update_info_t brupdate,
    input logic flush_pipeline,

    output logic ldq_empty,
    output logic stq_empty
);
    localparam int LDQ_TAG_WIDTH = LDQ_ADDR_SZ + 2;
    localparam int STQ_TAG_WIDTH = STQ_ADDR_SZ + 2;

    logic [DISPATCH_WIDTH-1:0] ldq_enq_valid;
    logic [DISPATCH_WIDTH-1:0] ldq_enq_fire;
    logic [DISPATCH_WIDTH-1:0] ldq_enq_ready;
    logic [DISPATCH_WIDTH-1:0][LDQ_TAG_WIDTH-1:0] ldq_enq_idx;

    logic [DISPATCH_WIDTH-1:0] stq_enq_valid;
    logic [DISPATCH_WIDTH-1:0] stq_enq_fire;
    logic [DISPATCH_WIDTH-1:0] stq_enq_ready;
    logic [DISPATCH_WIDTH-1:0][STQ_TAG_WIDTH-1:0] stq_enq_idx;

    logic [AGEN_WIDTH-1:0] ldq_agen_valid;
    logic [AGEN_WIDTH-1:0] stq_agen_valid;
    logic [DGEN_WIDTH-1:0] stq_dgen_valid;

    logic ld_query_valid;
    uop_t ld_query_uop;
    logic [XLEN-1:0] ld_query_addr;
    logic ld_query_block;
    logic ld_query_forward_valid;
    logic [XLEN-1:0] ld_query_forward_data;

    logic ld_req_valid;
    logic ld_req_ready;
    logic [XLEN-1:0] ld_req_addr;
    logic [LDQ_TAG_WIDTH-1:0] ld_req_idx;
    uop_t ld_req_uop;

    logic st_req_valid;
    logic st_req_ready;
    logic [XLEN-1:0] st_req_addr;
    logic [XLEN-1:0] st_req_data;
    logic [XLEN/8-1:0] st_req_mask;
    logic [STQ_TAG_WIDTH-1:0] st_req_idx;
    uop_t st_req_uop;

    logic ld_resp_valid;
    logic [LDQ_TAG_WIDTH-1:0] ld_resp_idx;
    logic st_ack_valid;
    logic [STQ_TAG_WIDTH-1:0] st_ack_idx;

    logic arb_locked;
    logic locked_is_store;
    logic prefer_store;
    logic selected_is_store;
    logic selected_valid;
    logic dmem_req_fire;

    logic ld_xlate_req_valid, ld_xlate_req_ready;
    logic [XLEN-1:0] ld_xlate_req_vaddr;
    logic [LDQ_TAG_WIDTH-1:0] ld_xlate_req_tag;

    logic st_xlate_req_valid, st_xlate_req_ready;
    logic [XLEN-1:0] st_xlate_req_vaddr;
    logic [STQ_TAG_WIDTH-1:0] st_xlate_req_tag;

    logic ld_xlate_resp_valid, ld_xlate_resp_match;
    logic st_xlate_resp_valid, st_xlate_resp_match;
    uop_t ld_xlate_resp_uop, st_xlate_resp_uop;
    logic xlate_resp_accept;

    logic xlate_arb_locked;
    logic xlate_locked_is_store;
    logic xlate_prefer_store;
    logic xlate_selected_is_store;
    logic xlate_selected_valid;
    logic xlate_req_fire;

    assign ldq_enq_valid = dis_valid & dis_uses_ldq;
    assign ldq_enq_fire = dis_fire & ldq_enq_valid;
    assign stq_enq_valid = dis_valid & dis_uses_stq;
    assign stq_enq_fire = dis_fire & stq_enq_valid;

    always_comb begin
        dis_lsq_ready = '0;
        dis_ldq_idx = '0;
        dis_stq_idx = '0;

        for(int w = 0; w < DISPATCH_WIDTH; w++) begin
            dis_lsq_ready[w] =
                !dis_valid[w] ||
                ((!dis_uses_ldq[w] || ldq_enq_ready[w]) &&
                 (!dis_uses_stq[w] || stq_enq_ready[w]));

            if(ldq_enq_valid[w]) dis_ldq_idx[w] = ldq_enq_idx[w];
            if(stq_enq_valid[w]) dis_stq_idx[w] = stq_enq_idx[w];
        end
    end

    always_comb begin
        ldq_agen_valid = '0;
        stq_agen_valid = '0;
        stq_dgen_valid = '0;

        for(int a = 0; a < AGEN_WIDTH; a++) begin
            ldq_agen_valid[a] = agen_valid[a] && agen_uops[a].uses_ldq;
            stq_agen_valid[a] = agen_valid[a] && agen_uops[a].uses_stq;
        end

        for(int d = 0; d < DGEN_WIDTH; d++)
            stq_dgen_valid[d] = dgen_valid[d] && dgen_uops[d].uses_stq;
    end

    always_comb begin
        if(xlate_arb_locked)
            xlate_selected_is_store = xlate_locked_is_store;
        else begin
            case({st_xlate_req_valid, ld_xlate_req_valid})
                2'b10: xlate_selected_is_store = 1'b1;
                2'b11: xlate_selected_is_store = xlate_prefer_store;
                default: xlate_selected_is_store = 1'b0;
            endcase
        end

        xlate_req_valid = 1'b0;
        xlate_req_tag = '0;
        xlate_req_vaddr = '0;
        xlate_req_access = ACCESS_LOAD;
        ld_xlate_req_ready = 1'b0;
        st_xlate_req_ready = 1'b0;

        if(xlate_selected_is_store) begin
            xlate_req_valid = st_xlate_req_valid;
            xlate_req_tag[STQ_TAG_WIDTH-1:0] = st_xlate_req_tag;
            xlate_req_vaddr = st_xlate_req_vaddr;
            xlate_req_access = ACCESS_STORE;
            st_xlate_req_ready = xlate_req_ready;
        end else begin
            xlate_req_valid = ld_xlate_req_valid;
            xlate_req_tag[LDQ_TAG_WIDTH-1:0] = ld_xlate_req_tag;
            xlate_req_vaddr = ld_xlate_req_vaddr;
            xlate_req_access = ACCESS_LOAD;
            ld_xlate_req_ready = xlate_req_ready;
        end

        xlate_selected_valid = xlate_selected_is_store ?
                                st_xlate_req_valid :
                                ld_xlate_req_valid;
        xlate_req_fire = xlate_req_valid && xlate_req_ready;
    end

    always_comb begin
        ld_xlate_resp_valid = xlate_resp_valid && xlate_resp_access == ACCESS_LOAD;

        st_xlate_resp_valid = xlate_resp_valid && xlate_resp_access == ACCESS_STORE;

        xlate_xcpt = '0;

        if(ld_xlate_resp_match) begin
            xlate_xcpt.uop = ld_xlate_resp_uop;
        end else if(st_xlate_resp_match) begin
            xlate_xcpt.uop = st_xlate_resp_uop;
        end

        xlate_xcpt.valid = xlate_resp_valid && xlate_resp_xcpt_valid && (ld_xlate_resp_match || st_xlate_resp_match) && !flush_pipeline;
        xlate_xcpt.cause = xlate_resp_xcpt_code;
        xlate_xcpt.badvaddr = xlate_resp_badvaddr;

        xlate_resp_ready = !xlate_resp_xcpt_valid || !(ld_xlate_resp_match || st_xlate_resp_match) || xlate_xcpt_ready;

        xlate_resp_accept = xlate_resp_valid && xlate_resp_ready;
    end

    always_comb begin
        if(arb_locked) begin
            selected_is_store = locked_is_store;
        end else begin
            case({st_req_valid, ld_req_valid})
                2'b10: selected_is_store = 1'b1;
                2'b11: selected_is_store = prefer_store;
                default: selected_is_store = 1'b0;
            endcase
        end

        dmem_req_valid = 1'b0;
        dmem_req_is_store = selected_is_store;
        dmem_req_addr = '0;
        dmem_req_data = '0;
        dmem_req_mask = '0;
        dmem_req_size = '0;
        dmem_req_idx = '0;
        dmem_req_uop = '0;
        ld_req_ready = 1'b0;
        st_req_ready = 1'b0;

        if(selected_is_store) begin
            dmem_req_valid = st_req_valid;
            dmem_req_addr = st_req_addr;
            dmem_req_data = st_req_data;
            dmem_req_mask = st_req_mask;
            dmem_req_size = st_req_uop.mem_size;
            dmem_req_idx[STQ_TAG_WIDTH-1:0] = st_req_idx;
            dmem_req_uop = st_req_uop;
            st_req_ready = dmem_req_ready;
        end else begin
            dmem_req_valid = ld_req_valid;
            dmem_req_addr = ld_req_addr;
            dmem_req_size = ld_req_uop.mem_size;
            dmem_req_idx[LDQ_TAG_WIDTH-1:0] = ld_req_idx;
            dmem_req_uop = ld_req_uop;
            ld_req_ready = dmem_req_ready;
        end

        selected_valid = selected_is_store ? st_req_valid : ld_req_valid;
        dmem_req_fire = dmem_req_valid && dmem_req_ready;
    end

    always_comb begin
        ld_resp_valid = dmem_resp_valid && !dmem_resp_is_store;
        ld_resp_idx = dmem_resp_idx[LDQ_TAG_WIDTH-1:0];
        st_ack_valid = dmem_resp_valid && dmem_resp_is_store;
        st_ack_idx = dmem_resp_idx[STQ_TAG_WIDTH-1:0];
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            xlate_arb_locked <= 1'b0;
            xlate_locked_is_store <= 1'b0;
            xlate_prefer_store <= 1'b0;
        end else if(flush_pipeline) begin
            xlate_arb_locked <= 1'b0;
            xlate_locked_is_store <= 1'b0;
            xlate_prefer_store <= 1'b0;
        end else begin
            if(xlate_arb_locked) begin
                if(!xlate_selected_valid || xlate_req_fire)
                    xlate_arb_locked <= 1'b0;
            end else if(xlate_req_valid && !xlate_req_ready) begin
                xlate_arb_locked <= 1'b1;
                xlate_locked_is_store <= xlate_selected_is_store;
            end

            if(xlate_req_fire) xlate_prefer_store <= !xlate_selected_is_store;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            arb_locked <= 1'b0;
            locked_is_store <= 1'b0;
            prefer_store <= 1'b0;
        end else begin
            if(arb_locked) begin
                if(!selected_valid || dmem_req_fire)
                    arb_locked <= 1'b0;
            end else if(dmem_req_valid && !dmem_req_ready) begin
                arb_locked <= 1'b1;
                locked_is_store <= selected_is_store;
            end

            if(dmem_req_fire)
                prefer_store <= !selected_is_store;
        end
    end

    load_queue #(
        .NUM_ENTRIES(LDQ_ENTRIES),
        .ENQ_WIDTH(DISPATCH_WIDTH),
        .AGEN_WIDTH(AGEN_WIDTH),
        .COMMIT_WIDTH(COMMIT_WIDTH),
        .ADDR_WIDTH(XLEN),
        .GEN_BITS(2),
        .SLOT_WIDTH(LDQ_ADDR_SZ),
        .TAG_WIDTH(LDQ_TAG_WIDTH)
    ) load_queue_i (
        .clk,
        .rst_n,
        .enq_valid(ldq_enq_valid),
        .enq_fire(ldq_enq_fire),
        .enq_uops(dis_uops),
        .enq_ready(ldq_enq_ready),
        .enq_idx(ldq_enq_idx),
        .agen_valid(ldq_agen_valid),
        .agen_uops(agen_uops),
        .agen_addr(agen_addr),
        .ld_query_valid,
        .ld_query_uop,
        .ld_query_addr,
        .ld_query_block,
        .ld_query_forward_valid,
        .ld_query_forward_data,
        .dmem_req_valid(ld_req_valid),
        .dmem_req_ready(ld_req_ready),
        .dmem_req_addr(ld_req_addr),
        .dmem_req_idx(ld_req_idx),
        .dmem_req_uop(ld_req_uop),
        .dmem_resp_valid(ld_resp_valid),
        .dmem_resp_idx(ld_resp_idx),
        .dmem_resp_data(dmem_resp_data),
        .xlate_req_valid     (ld_xlate_req_valid),
        .xlate_req_ready     (ld_xlate_req_ready),
        .xlate_req_vaddr     (ld_xlate_req_vaddr),
        .xlate_req_tag       (ld_xlate_req_tag),
        .xlate_resp_valid    (ld_xlate_resp_valid),
        .xlate_resp_accept   (xlate_resp_accept),
        .xlate_resp_tag      (xlate_resp_tag[LDQ_TAG_WIDTH-1:0]),
        .xlate_resp_paddr    (xlate_resp_paddr),
        .xlate_resp_mat      (xlate_resp_mat),
        .xlate_resp_cacheable(xlate_resp_cacheable),
        .xlate_resp_xcpt     (xlate_resp_xcpt_valid),
        .xlate_resp_match    (ld_xlate_resp_match),
        .xlate_resp_uop      (ld_xlate_resp_uop),
        .load_wb_valid,
        .load_wb_resp,
        .commit_valid,
        .commit_uops,
        .brupdate,
        .flush_pipeline,
        .ldq_empty
    );

    store_queue #(
        .NUM_ENTRIES(STQ_ENTRIES),
        .ENQ_WIDTH(DISPATCH_WIDTH),
        .AGEN_WIDTH(AGEN_WIDTH),
        .DGEN_WIDTH(DGEN_WIDTH),
        .COMMIT_WIDTH(COMMIT_WIDTH),
        .CLR_WIDTH(CLR_WIDTH),
        .ADDR_WIDTH(XLEN),
        .DATA_WIDTH(XLEN),
        .MASK_WIDTH(XLEN/8),
        .GEN_BITS(2),
        .SLOT_WIDTH(STQ_ADDR_SZ),
        .TAG_WIDTH(STQ_TAG_WIDTH)
    ) store_queue_i (
        .clk,
        .rst_n,
        .enq_valid(stq_enq_valid),
        .enq_fire(stq_enq_fire),
        .enq_uops(dis_uops),
        .enq_ready(stq_enq_ready),
        .enq_idx(stq_enq_idx),
        .agen_valid(stq_agen_valid),
        .agen_uops(agen_uops),
        .agen_addr(agen_addr),
        .dgen_valid(stq_dgen_valid),
        .dgen_uops(dgen_uops),
        .dgen_data(dgen_data),
        .clr_bsy_valid,
        .clr_bsy_rob_idx,
        .store_req_valid(st_req_valid),
        .store_req_ready(st_req_ready),
        .store_req_addr(st_req_addr),
        .store_req_data(st_req_data),
        .store_req_mask(st_req_mask),
        .store_req_idx(st_req_idx),
        .store_req_uop(st_req_uop),
        .xlate_req_valid     (st_xlate_req_valid),
        .xlate_req_ready     (st_xlate_req_ready),
        .xlate_req_vaddr     (st_xlate_req_vaddr),
        .xlate_req_tag       (st_xlate_req_tag),
        .xlate_resp_valid    (st_xlate_resp_valid),
        .xlate_resp_accept   (xlate_resp_accept),
        .xlate_resp_tag      (xlate_resp_tag[STQ_TAG_WIDTH-1:0]),
        .xlate_resp_paddr    (xlate_resp_paddr),
        .xlate_resp_mat      (xlate_resp_mat),
        .xlate_resp_cacheable(xlate_resp_cacheable),
        .xlate_resp_xcpt     (xlate_resp_xcpt_valid),
        .xlate_resp_match    (st_xlate_resp_match),
        .xlate_resp_uop      (st_xlate_resp_uop),
        .store_ack_valid(st_ack_valid),
        .store_ack_idx(st_ack_idx),
        .commit_valid,
        .commit_uops,
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
