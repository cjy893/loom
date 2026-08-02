import loom_params::*;
import loom_consts::*;
import loom_types::*;

`ifdef CORE_FETCH_METADATA_REFERENCE
module core_fetch_metadata_reference (
    input  logic                         clk,
    input  logic                         rst_n,
    input  logic [1:0]                   fe_valid,
    input  logic [1:0][31:0]             fe_pcs,
    input  logic [1:0][31:0]             fe_insts,
    input  logic [1:0][FTQ_ADDR_SZ-1:0]  fe_ftq_idx,
    input  logic [1:0]                   fe_predicted_taken,
    output logic                         fe_ready,
    output logic [1:0]                   commit_valid,
    output logic [1:0][31:0]             commit_pcs,
    output logic [1:0][31:0]             commit_insts,
    output logic [1:0][FTQ_ADDR_SZ-1:0]  commit_ftq_idx,
    output logic [1:0]                   commit_taken,
    output logic [1:0][$clog2(ICACHE_BLOCK_BYTES)-1:0] commit_pc_lob
);
    assign fe_ready = 1'b1;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            commit_valid <= '0;
            commit_pcs <= '0;
            commit_insts <= '0;
            commit_ftq_idx <= '0;
            commit_taken <= '0;
            commit_pc_lob <= '0;
        end else begin
            commit_valid <= fe_valid;
            for (int lane = 0; lane < 2; lane++) begin
                if (fe_valid[lane]) begin
                    commit_pcs[lane] <= fe_pcs[lane];
                    commit_insts[lane] <= fe_insts[lane];
                    commit_ftq_idx[lane] <= fe_ftq_idx[lane];
                    commit_taken[lane] <= fe_predicted_taken[lane];
                    commit_pc_lob[lane] <=
                        fe_pcs[lane][$clog2(ICACHE_BLOCK_BYTES)-1:0];
                end
            end
        end
    end
endmodule
`endif

module core_fetch_metadata_test_top (
    input  logic                         clk,
    input  logic                         rst_n,
    input  logic                         frontend_enable,
    input  logic                         flush,

    input  logic [3:0]                   enq_valid,
    input  logic [31:0]                  enq_pc0,
    input  logic [31:0]                  enq_pc1,
    input  logic [31:0]                  enq_pc2,
    input  logic [31:0]                  enq_pc3,
    input  logic [31:0]                  enq_inst0,
    input  logic [31:0]                  enq_inst1,
    input  logic [31:0]                  enq_inst2,
    input  logic [31:0]                  enq_inst3,
    input  logic [FTQ_ADDR_SZ-1:0]       enq_ftq_idx0,
    input  logic [FTQ_ADDR_SZ-1:0]       enq_ftq_idx1,
    input  logic [FTQ_ADDR_SZ-1:0]       enq_ftq_idx2,
    input  logic [FTQ_ADDR_SZ-1:0]       enq_ftq_idx3,
    input  logic [3:0]                   enq_taken,
    output logic                         enq_ready,

    output logic [1:0]                   deq_valid_dbg,
    output logic [31:0]                  deq_pc0_dbg,
    output logic [31:0]                  deq_pc1_dbg,
    output logic [31:0]                  deq_inst0_dbg,
    output logic [31:0]                  deq_inst1_dbg,
    output logic [FTQ_ADDR_SZ-1:0]       deq_ftq_idx0_dbg,
    output logic [FTQ_ADDR_SZ-1:0]       deq_ftq_idx1_dbg,
    output logic [1:0]                   deq_taken_dbg,
    output logic                         core_fe_ready_dbg,

    output logic [1:0]                   commit_valid,
    output logic [31:0]                  commit_pc0,
    output logic [31:0]                  commit_pc1,
    output logic [31:0]                  commit_inst0,
    output logic [31:0]                  commit_inst1,
    output logic [FTQ_ADDR_SZ-1:0]       commit_ftq_idx0,
    output logic [FTQ_ADDR_SZ-1:0]       commit_ftq_idx1,
    output logic [1:0]                   commit_taken,
    output logic [$clog2(ICACHE_BLOCK_BYTES)-1:0] commit_pc_lob0,
    output logic [$clog2(ICACHE_BLOCK_BYTES)-1:0] commit_pc_lob1
);
    logic [3:0][31:0] enq_pcs;
    logic [3:0][31:0] enq_insts;
    logic [3:0][FTQ_ADDR_SZ-1:0] enq_ftq_idx;
    logic [3:0][31:0] enq_predicted_npc;

    logic [1:0] buffer_deq_valid;
    logic [1:0][31:0] buffer_deq_pcs;
    logic [1:0][31:0] buffer_deq_insts;
    logic [1:0][FTQ_ADDR_SZ-1:0] buffer_deq_ftq_idx;
    logic [1:0] buffer_deq_predicted_taken;
    logic [1:0][31:0] buffer_deq_predicted_npc;
    logic [1:0] buffer_deq_xcpt_valid;
    logic [1:0][5:0] buffer_deq_xcpt_code;
    logic buffer_deq_ready;

    logic [1:0] core_fe_valid;
    logic core_fe_ready;
    logic [1:0] core_commit_valid;
    logic [1:0][31:0] core_commit_pcs;
    logic [1:0][31:0] core_commit_insts;
    logic [1:0][FTQ_ADDR_SZ-1:0] core_commit_ftq_idx;
    logic [1:0] core_commit_taken;
    logic [1:0][$clog2(ICACHE_BLOCK_BYTES)-1:0] core_commit_pc_lob;

    assign enq_pcs = {enq_pc3, enq_pc2, enq_pc1, enq_pc0};
    assign enq_insts = {enq_inst3, enq_inst2, enq_inst1, enq_inst0};
    assign enq_ftq_idx = {
        enq_ftq_idx3, enq_ftq_idx2, enq_ftq_idx1, enq_ftq_idx0
    };
    for (genvar lane = 0; lane < 4; lane++) begin : gen_predicted_npc
        assign enq_predicted_npc[lane] = enq_pcs[lane] + 32'd4;
    end

    assign core_fe_valid = frontend_enable ? buffer_deq_valid : '0;
    assign buffer_deq_ready = frontend_enable && core_fe_ready;

    assign deq_valid_dbg = buffer_deq_valid;
    assign deq_pc0_dbg = buffer_deq_pcs[0];
    assign deq_pc1_dbg = buffer_deq_pcs[1];
    assign deq_inst0_dbg = buffer_deq_insts[0];
    assign deq_inst1_dbg = buffer_deq_insts[1];
    assign deq_ftq_idx0_dbg = buffer_deq_ftq_idx[0];
    assign deq_ftq_idx1_dbg = buffer_deq_ftq_idx[1];
    assign deq_taken_dbg = buffer_deq_predicted_taken;
    assign core_fe_ready_dbg = core_fe_ready;

    assign commit_valid = core_commit_valid;
    assign commit_pc0 = core_commit_pcs[0];
    assign commit_pc1 = core_commit_pcs[1];
    assign commit_inst0 = core_commit_insts[0];
    assign commit_inst1 = core_commit_insts[1];
    assign commit_ftq_idx0 = core_commit_ftq_idx[0];
    assign commit_ftq_idx1 = core_commit_ftq_idx[1];
    assign commit_taken = core_commit_taken;
    assign commit_pc_lob0 = core_commit_pc_lob[0];
    assign commit_pc_lob1 = core_commit_pc_lob[1];

    fetcher_buffer #(
        .FETCH_WIDTH(4),
        .CORE_WIDTH(2),
        .NUM_ENTRIES(8),
        .FTQ_IDX_SZ(FTQ_ADDR_SZ)
    ) fetch_buffer (
        .clk,
        .rst_n,
        .flush,
        .enq_valid,
        .enq_pcs,
        .enq_insts,
        .enq_ready,
        .enq_ftq_idx,
        .enq_predicted_taken(enq_taken),
        .enq_predicted_npc,
        .deq_ftq_idx(buffer_deq_ftq_idx),
        .deq_predicted_taken(buffer_deq_predicted_taken),
        .deq_predicted_npc(buffer_deq_predicted_npc),
        .enq_xcpt_valid('0),
        .enq_xcpt_code('0),
        .deq_xcpt_valid(buffer_deq_xcpt_valid),
        .deq_xcpt_code(buffer_deq_xcpt_code),
        .deq_valid(buffer_deq_valid),
        .deq_pcs(buffer_deq_pcs),
        .deq_insts(buffer_deq_insts),
        .deq_ready(buffer_deq_ready)
    );

`ifdef CORE_FETCH_METADATA_REFERENCE
    core_fetch_metadata_reference reference_core (
        .clk,
        .rst_n,
        .fe_valid(core_fe_valid),
        .fe_pcs(buffer_deq_pcs),
        .fe_insts(buffer_deq_insts),
        .fe_ftq_idx(buffer_deq_ftq_idx),
        .fe_predicted_taken(buffer_deq_predicted_taken),
        .fe_ready(core_fe_ready),
        .commit_valid(core_commit_valid),
        .commit_pcs(core_commit_pcs),
        .commit_insts(core_commit_insts),
        .commit_ftq_idx(core_commit_ftq_idx),
        .commit_taken(core_commit_taken),
        .commit_pc_lob(core_commit_pc_lob)
    );
`else
    commit_signal_t core_commit;
    logic dmem_req_valid;
    logic dmem_req_is_store;
    logic [31:0] dmem_req_addr;
    logic [31:0] dmem_req_data;
    logic [3:0] dmem_req_mask;
    logic [1:0] dmem_req_size;
    logic [LSU_ADDR_SZ+1:0] dmem_req_idx;
    uop_t dmem_req_uop;

    loom_core #(
        .RESET_PC(32'h1c07_1000),
        .USE_EXTERNAL_FE_PCS(1'b1),
        .FETCH_WIDTH(2),
        .CORE_WIDTH(2)
    ) core (
        .clk,
        .rst_n,
        .fe_valid(core_fe_valid),
        .fe_insts(buffer_deq_insts),
        .fe_pcs(buffer_deq_pcs),
        .fe_ftq_idx(buffer_deq_ftq_idx),
        .fe_predicted_taken(buffer_deq_predicted_taken),
        .fe_predicted_npc(buffer_deq_predicted_npc),
        .fe_ready(core_fe_ready),
        .fe_redirect_valid(),
        .fe_redirect_pc(),
        .fe_flush_valid(),
        .fe_redirect_ftq_idx(),
        .fe_redirect_taken(),
        .fe_redirect_pc_lob(),
        .fe_redirect_cfi_type(),
        .fe_xcpt_valid(buffer_deq_xcpt_valid),
        .fe_xcpt_code(buffer_deq_xcpt_code),
        .ifu_xlate_req_valid(1'b0),
        .ifu_xlate_req_ready(),
        .ifu_xlate_req_vaddr('0),
        .ifu_xlate_resp_valid(),
        .ifu_xlate_resp_ready(1'b1),
        .ifu_xlate_resp_vaddr(),
        .ifu_xlate_resp_paddr(),
        .ifu_xlate_resp_mat(),
        .ifu_xlate_resp_cacheable(),
        .ifu_xlate_resp_xcpt_valid(),
        .ifu_xlate_resp_xcpt_code(),
        .ifu_xlate_resp_badvaddr(),
        .ftq_exec_query_valid(),
        .ftq_exec_query_idx(),
        .ftq_exec_query_pc(),
        .ftq_exec_query_resp_valid('0),
        .ftq_exec_query_next_pc('0),
        .ftq_exec_query_cfi_match('0),
        .dmem_req_valid,
        .dmem_req_ready(1'b1),
        .dmem_req_is_store,
        .dmem_req_cacheable(),
        .dmem_req_addr,
        .dmem_req_data,
        .dmem_req_mask,
        .dmem_req_size,
        .dmem_req_idx,
        .dmem_req_uop,
        .dmem_resp_valid(1'b0),
        .dmem_resp_is_store(1'b0),
        .dmem_resp_data('0),
        .dmem_resp_idx('0),
        .icache_maint_valid(),
        .icache_maint_ready(1'b1),
        .icache_maint_mode(),
        .icache_maint_vaddr(),
        .icache_maint_paddr(),
        .icache_maint_done(1'b1),
        .dcache_maint_valid(),
        .dcache_maint_ready(1'b1),
        .dcache_maint_op(),
        .dcache_maint_mode(),
        .dcache_maint_vaddr(),
        .dcache_maint_paddr(),
        .dcache_maint_done(1'b1),
        .hw_irq('0),
        .ipi_irq(1'b0),
        .csr_req_valid(),
        .csr_addr(),
        .csr_cmd(),
        .csr_wdata(),
        .csr_wmask(),
        .commit(core_commit),
        .rob_empty(),
        .debug_pc(),
        .commit_valid_dbg(),
        .commit_valids_dbg(),
        .commit_ldst_dbg(),
        .rf_wr_en_dbg(),
        .rf_wr_pdst_dbg(),
        .rf_wr_ldst_dbg(),
        .rf_wr_data_dbg(),
        .alu_src1_dbg(),
        .alu_imm_dbg(),
        .alu_imm_packed_dbg(),
        .alu_imm_sel_dbg(),
        .rob_ready_dbg(),
        .ren_stalls_dbg(),
        .rn2_mask_dbg(),
        .dis_fire_dbg(),
        .dis_unique_dbg(),
        .alu_iss_valid_dbg(),
        .alu_res_valid_dbg(),
        .rob_wb_valid_dbg()
    );

    always_comb begin
        core_commit_valid = core_commit.arch_valids;
        core_commit_pcs = '0;
        core_commit_insts = '0;
        core_commit_ftq_idx = '0;
        core_commit_taken = '0;
        core_commit_pc_lob = '0;
        for (int lane = 0; lane < 2; lane++) begin
            core_commit_pcs[lane] = core_commit.uops[lane].pc[31:0];
            core_commit_insts[lane] = core_commit.uops[lane].inst;
            core_commit_ftq_idx[lane] = core_commit.uops[lane].ftq_idx;
            core_commit_taken[lane] = core_commit.uops[lane].taken;
            core_commit_pc_lob[lane] = core_commit.uops[lane].pc_lob;
        end
    end
`endif
endmodule
