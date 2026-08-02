import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_tlb_test_top (
    input  logic                         clk,
    input  logic                         rst_n,

    input  logic [3:0]                   fe_valid,
    input  logic [3:0][31:0]             fe_insts,
    output logic                         fe_ready,
    output logic [31:0]                  debug_pc,
    output logic                         redirect_valid,
    output logic [31:0]                  redirect_pc,

    input  logic                         ifu_xlate_req_valid,
    output logic                         ifu_xlate_req_ready,
    input  logic [31:0]                  ifu_xlate_req_vaddr,
    output logic                         ifu_xlate_resp_valid,
    input  logic                         ifu_xlate_resp_ready,
    output logic [31:0]                  ifu_xlate_resp_vaddr,
    output logic [31:0]                  ifu_xlate_resp_paddr,
    output logic [1:0]                   ifu_xlate_resp_mat,
    output logic                         ifu_xlate_resp_cacheable,
    output logic                         ifu_xlate_resp_xcpt_valid,
    output logic [5:0]                   ifu_xlate_resp_xcpt_code,
    output logic [31:0]                  ifu_xlate_resp_badvaddr,
    output logic                         itlb_tlb_req_valid,
    output logic                         itlb_tlb_req_ready,
    output logic                         itlb_tlb_resp_valid,

    output logic                         rob_empty,
    output logic [1:0]                   commit_valids,
    output logic [1:0][31:0]             commit_pcs,
    output logic [1:0][31:0]             commit_insts,
    output logic [1:0][ROB_ADDR_SZ-1:0]  commit_rob_idx,

    output logic [4:0]                   rf_write_valid,
    output logic [4:0][4:0]              rf_write_ldst,
    output logic [4:0][31:0]             rf_write_data,

    output logic                         dmem_req_valid,

    output logic                         tlb_req_fire,
    output logic                         tlb_resp_valid,
    output logic                         tlb_search_req_valid,
    output logic [31:0]                  tlb_search_req_vaddr,
    output logic [ASID_BITS-1:0]         tlb_search_req_asid,

    output logic                         tlb_wr_valid,
    output logic [4:0]                   tlb_wr_idx,
    output logic                         tlb_wr_e,
    output logic [18:0]                  tlb_wr_vppn,
    output logic [ASID_BITS-1:0]         tlb_wr_asid,
    output logic                         tlb_wr_g,
    output logic [5:0]                   tlb_wr_ps,
    output logic [19:0]                  tlb_wr_ppn0,
    output logic [19:0]                  tlb_wr_ppn1,
    output logic [1:0]                   tlb_wr_mat0,
    output logic [1:0]                   tlb_wr_mat1,
    output logic [1:0]                   tlb_wr_plv0,
    output logic [1:0]                   tlb_wr_plv1,
    output logic                         tlb_wr_d0,
    output logic                         tlb_wr_d1,
    output logic                         tlb_wr_v0,
    output logic                         tlb_wr_v1,

    output logic                         tlb_inv_valid,
    output logic [4:0]                   tlb_inv_op,
    output logic [ASID_BITS-1:0]         tlb_inv_asid,
    output logic [31:0]                  tlb_inv_vaddr,

    output logic                         tlb_csr_update_valid,
    output logic [4:0]                   tlb_csr_update_mask,
    output logic [31:0]                  tlb_csr_tlbidx_wdata,

    output logic [31:0]                  csr_tlbidx,
    output logic [31:0]                  csr_tlbehi,
    output logic [31:0]                  csr_tlbelo0,
    output logic [31:0]                  csr_tlbelo1,
    output logic [31:0]                  csr_asid
);
    localparam logic [31:0] RESET_PC = 32'h1c00_0000;

    commit_signal_t core_commit;
    uop_t unused_dmem_req_uop;

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
        .fe_predicted_npc('0),
        .fe_xcpt_valid('0),
        .fe_xcpt_code('0),
        .fe_ready,
        .fe_redirect_valid(redirect_valid),
        .fe_redirect_pc(redirect_pc),
        .ifu_xlate_req_valid,
        .ifu_xlate_req_ready,
        .ifu_xlate_req_vaddr,
        .ifu_xlate_resp_valid,
        .ifu_xlate_resp_ready,
        .ifu_xlate_resp_vaddr,
        .ifu_xlate_resp_paddr,
        .ifu_xlate_resp_mat,
        .ifu_xlate_resp_cacheable,
        .ifu_xlate_resp_xcpt_valid,
        .ifu_xlate_resp_xcpt_code,
        .ifu_xlate_resp_badvaddr,
        .ftq_exec_query_valid(),
        .ftq_exec_query_idx(),
        .ftq_exec_query_pc(),
        .ftq_exec_query_resp_valid('0),
        .ftq_exec_query_next_pc('0),
        .ftq_exec_query_cfi_match('0),
        .dmem_req_valid,
        .dmem_req_ready(1'b1),
        .dmem_req_is_store(),
        .dmem_req_cacheable(),
        .dmem_req_addr(),
        .dmem_req_data(),
        .dmem_req_mask(),
        .dmem_req_size(),
        .dmem_req_idx(),
        .dmem_req_uop(unused_dmem_req_uop),
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

    assign commit_valids = core_commit.arch_valids;

    for (genvar w = 0; w < 2; w++) begin : gen_commit_debug
        assign commit_pcs[w] = core_commit.uops[w].pc[31:0];
        assign commit_insts[w] = core_commit.uops[w].debug_inst;
        assign commit_rob_idx[w] = core_commit.uops[w].rob_idx;
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

    assign tlb_req_fire = core.tlb_req_fire;
    assign tlb_resp_valid = core.tlb_resp_valid;
    assign tlb_search_req_valid = core.tlb_search_req_valid_w;
    assign tlb_search_req_vaddr = core.tlb_search_req_vaddr_w;
    assign tlb_search_req_asid = core.tlb_search_req_asid_w;
    assign itlb_tlb_req_valid = core.itlb_req_valid_w;
    assign itlb_tlb_req_ready = core.itlb_req_ready_w;
    assign itlb_tlb_resp_valid = core.itlb_resp_valid_w;

    assign tlb_wr_valid = core.tlb_wr_valid_w;
    assign tlb_wr_idx = core.tlb_wr_idx_w;
    assign tlb_wr_e = core.tlb_wr_e_w;
    assign tlb_wr_vppn = core.tlb_wr_vppn_w;
    assign tlb_wr_asid = core.tlb_wr_asid_w;
    assign tlb_wr_g = core.tlb_wr_g_w;
    assign tlb_wr_ps = core.tlb_wr_ps_w;
    assign tlb_wr_ppn0 = core.tlb_wr_ppn0_w;
    assign tlb_wr_ppn1 = core.tlb_wr_ppn1_w;
    assign tlb_wr_mat0 = core.tlb_wr_mat0_w;
    assign tlb_wr_mat1 = core.tlb_wr_mat1_w;
    assign tlb_wr_plv0 = core.tlb_wr_plv0_w;
    assign tlb_wr_plv1 = core.tlb_wr_plv1_w;
    assign tlb_wr_d0 = core.tlb_wr_d0_w;
    assign tlb_wr_d1 = core.tlb_wr_d1_w;
    assign tlb_wr_v0 = core.tlb_wr_v0_w;
    assign tlb_wr_v1 = core.tlb_wr_v1_w;

    assign tlb_inv_valid = core.tlb_inv_valid_w;
    assign tlb_inv_op = core.tlb_inv_op_w;
    assign tlb_inv_asid = core.tlb_inv_asid_w;
    assign tlb_inv_vaddr = core.tlb_inv_vaddr_w;

    assign tlb_csr_update_valid = core.tlb_csr_update_valid_w;
    assign tlb_csr_update_mask = core.tlb_csr_update_mask_w;
    assign tlb_csr_tlbidx_wdata = core.tlb_csr_tlbidx_wdata_w;

    assign csr_tlbidx = core.csr_tlbidx_value_w;
    assign csr_tlbehi = core.csr_tlbehi_value_w;
    assign csr_tlbelo0 = core.csr_tlbelo0_value_w;
    assign csr_tlbelo1 = core.csr_tlbelo1_value_w;
    assign csr_asid = core.csr_asid_value_w;
endmodule
