import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_interrupt_lsu_test_top (
    input  logic                         clk,
    input  logic                         rst_n,

    input  logic [3:0]                   fe_valid,
    input  logic [3:0][31:0]             fe_insts,
    output logic                         fe_ready,
    output logic [31:0]                  debug_pc,
    output logic                         redirect_valid,
    output logic [31:0]                  redirect_pc,
    output logic [2:0]                   redirect_flush_typ,

    input  logic [7:0]                   hw_irq,
    output logic                         interrupt_pending,
    output logic                         interrupt_taken,

    output logic                         dmem_req_valid,
    input  logic                         dmem_req_ready,
    output logic                         dmem_req_is_store,
    output logic [31:0]                  dmem_req_addr,
    output logic [31:0]                  dmem_req_data,
    output logic [3:0]                   dmem_req_mask,
    output logic [1:0]                   dmem_req_size,
    output logic [LSU_ADDR_SZ+1:0]       dmem_req_idx,
    output logic [4:0]                   dmem_req_ldst,
    output logic [ROB_ADDR_SZ-1:0]       dmem_req_rob_idx,

    input  logic                         dmem_resp_valid,
    input  logic                         dmem_resp_is_store,
    input  logic [31:0]                  dmem_resp_data,
    input  logic [LSU_ADDR_SZ+1:0]       dmem_resp_idx,

    output logic                         rob_empty,
    output logic                         ldq_empty,
    output logic                         stq_empty,
    output logic                         stq_uncommitted_ready,
    output logic                         stq_committed_valid,
    output logic                         br_kill,
    output logic                         br_mispredict,

    output logic [1:0]                   commit_valids,
    output logic [1:0][31:0]             commit_pcs,
    output logic [1:0][31:0]             commit_insts,
    output logic [1:0]                   commit_uses_stq,

    output logic [4:0]                   rf_write_valid,
    output logic [4:0][4:0]              rf_write_ldst,
    output logic [4:0][31:0]             rf_write_data,

    output logic [31:0]                  csr_era
);
    localparam logic [31:0] RESET_PC = 32'h1c00_0000;

    uop_t dmem_req_uop;
    commit_signal_t core_commit;
    logic [3:0][31:0] sequential_predicted_npc;

    for (genvar lane = 0; lane < 4; lane++) begin : gen_predicted_npc
        assign sequential_predicted_npc[lane] =
            debug_pc + 32'((lane + 1) * 4);
    end

    loom_core #(
        .RESET_PC(RESET_PC)
    ) core (
        .clk,
        .rst_n,
        .fe_valid,
        .fe_insts,
        .fe_pcs('0),
        .fe_ftq_idx('0),
        .fe_predicted_taken('0),
        .fe_predicted_npc(sequential_predicted_npc),
        .fe_xcpt_valid('0),
        .fe_xcpt_code('0),
        .fe_ready,
        .fe_redirect_valid(redirect_valid),
        .fe_redirect_pc(redirect_pc),
        .fe_flush_valid(),
        .fe_redirect_ftq_idx(),
        .fe_redirect_taken(),
        .fe_redirect_pc_lob(),
        .fe_redirect_cfi_type(),
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
        .dmem_req_ready,
        .dmem_req_is_store,
        .dmem_req_cacheable(),
        .dmem_req_addr,
        .dmem_req_data,
        .dmem_req_mask,
        .dmem_req_size,
        .dmem_req_idx,
        .dmem_req_uop,
        .dmem_resp_valid,
        .dmem_resp_is_store,
        .dmem_resp_data,
        .dmem_resp_idx,
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
        .hw_irq,
        .ipi_irq(1'b0),
        .csr_req_valid(),
        .csr_addr(),
        .csr_cmd(),
        .csr_wdata(),
        .csr_wmask(),
        .commit(core_commit),
        .rob_empty,
        .debug_pc,
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

    assign dmem_req_ldst = dmem_req_uop.ldst;
    assign dmem_req_rob_idx = dmem_req_uop.rob_idx;

    assign interrupt_pending = core.csr_interrupt_pending_w;
    assign interrupt_taken = core.rob_inst.interrupt_taken;
    assign redirect_flush_typ =
        core.rob_flush_w.valid ? core.rob_flush_w.flush_typ : FT_NONE;
    assign br_kill = |core.brupdate_w.b1.mispredict_mask;
    assign br_mispredict = core.brupdate_w.b2.mispredict;

    assign ldq_empty = core.lsu_ldq_empty;
    assign stq_empty = core.lsu_stq_empty;
    assign csr_era = core.csr_ertn_target_w;

    assign commit_valids = core_commit.arch_valids;
    for (genvar w = 0; w < 2; w++) begin : gen_commit_debug
        assign commit_pcs[w] = core_commit.uops[w].pc[31:0];
        assign commit_insts[w] = core_commit.uops[w].debug_inst;
        assign commit_uses_stq[w] = core_commit.uops[w].uses_stq;
    end

    assign rf_write_valid = core.rf_write_en;
    assign rf_write_data = core.rf_write_data;

    always_comb begin
        rf_write_ldst = '0;
        for (int w = 0; w < 3; w++)
            rf_write_ldst[w] = core.alu_res[w].uop.ldst;
        rf_write_ldst[3] = core.lsu_resp_w.uop.ldst;
        rf_write_ldst[4] = core.unq_res.uop.ldst;
    end

    always_comb begin
        stq_uncommitted_ready = 1'b0;
        stq_committed_valid = 1'b0;

        for (int i = 0; i < STQ_ENTRIES; i++) begin
            stq_uncommitted_ready |=
                core.lsu_inst.store_queue_i.entries[i].valid &&
                core.lsu_inst.store_queue_i.entries[i].cleared &&
                !core.lsu_inst.store_queue_i.entries[i].committed;
            stq_committed_valid |=
                core.lsu_inst.store_queue_i.entries[i].valid &&
                core.lsu_inst.store_queue_i.entries[i].committed;
        end
    end
endmodule
