import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_exception_test_top (
    input  logic                         clk,
    input  logic                         rst_n,

    input  logic [3:0]                   fe_valid,
    input  logic [3:0][31:0]             fe_insts,
    input  logic [3:0]                   fe_xcpt_valid,
    input  logic [3:0][5:0]              fe_xcpt_code,
    output logic                         fe_ready,
    output logic [31:0]                  debug_pc,
    output logic                         redirect_valid,
    output logic [31:0]                  redirect_pc,
    output logic [2:0]                   redirect_flush_typ,

    output logic                         rob_empty,
    output logic [1:0]                   commit_valids,
    output logic [1:0][31:0]             commit_pcs,
    output logic [1:0][31:0]             commit_insts,
    output logic [1:0][ROB_ADDR_SZ-1:0]  commit_rob_idx,

    output logic [4:0]                   rf_write_valid,
    output logic [4:0][4:0]              rf_write_ldst,
    output logic [4:0][31:0]             rf_write_data,

    output logic                         exception_valid,
    output logic [31:0]                  exception_pc,
    output logic [31:0]                  exception_inst,
    output logic [31:0]                  exception_cause,
    output logic [31:0]                  exception_badvaddr,

    output logic [1:0]                   csr_current_plv,
    output logic                         csr_current_ie,
    output logic [31:0]                  csr_era,
    output logic [31:0]                  csr_eentry
);
    localparam logic [31:0] RESET_PC = 32'h1c00_0000;

    commit_signal_t core_commit;

    loom_core #(
        .RESET_PC(RESET_PC)
    ) core (
        .clk,
        .rst_n,
        .fe_valid,
        .fe_insts,
        .fe_pcs('0),
        .fe_xcpt_valid,
        .fe_xcpt_code,
        .fe_ready,
        .fe_redirect_valid(redirect_valid),
        .fe_redirect_pc(redirect_pc),
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
        .dmem_req_valid(),
        .dmem_req_ready(1'b1),
        .dmem_req_is_store(),
        .dmem_req_addr(),
        .dmem_req_data(),
        .dmem_req_mask(),
        .dmem_req_size(),
        .dmem_req_idx(),
        .dmem_req_uop(),
        .dmem_resp_valid(1'b0),
        .dmem_resp_is_store(1'b0),
        .dmem_resp_data('0),
        .dmem_resp_idx('0),
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

    assign exception_valid = core.rob_com_xcpt_w.valid;
    assign exception_pc = core.rob_com_xcpt_w.pc;
    assign exception_inst = core.rob_com_xcpt_w.inst;
    assign exception_cause = core.rob_com_xcpt_w.cause;
    assign exception_badvaddr = core.rob_com_xcpt_w.badvaddr;

    assign redirect_flush_typ =
        core.rob_flush_w.valid ? core.rob_flush_w.flush_typ : FT_NONE;

    assign csr_current_plv = core.csr_current_plv_w;
    assign csr_current_ie = core.csr_current_ie_w;
    assign csr_era = core.csr_ertn_target_w;
    assign csr_eentry = core.csr_xcpt_target_w;
endmodule
