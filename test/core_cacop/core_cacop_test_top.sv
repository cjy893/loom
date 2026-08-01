import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_cacop_test_top (
    input  logic                         clk,
    input  logic                         rst_n,

    input  logic [3:0]                   fe_valid,
    input  logic [3:0][31:0]             fe_insts,
    output logic                         fe_ready,
    output logic [31:0]                  debug_pc,
    output logic                         redirect_valid,
    output logic [31:0]                  redirect_pc,

    output logic                         icache_maint_valid,
    input  logic                         icache_maint_ready,
    output logic [1:0]                   icache_maint_mode,
    output logic [31:0]                  icache_maint_vaddr,
    output logic [31:0]                  icache_maint_paddr,
    input  logic                         icache_maint_done,

    output logic                         dcache_maint_valid,
    input  logic                         dcache_maint_ready,
    output logic [1:0]                   dcache_maint_op,
    output logic [1:0]                   dcache_maint_mode,
    output logic [31:0]                  dcache_maint_vaddr,
    output logic [31:0]                  dcache_maint_paddr,
    input  logic                         dcache_maint_done,

    output logic [1:0]                   commit_valids,
    output logic [1:0][31:0]             commit_pcs,
    output logic [1:0][31:0]             commit_insts,
    output logic                         dmem_req_valid
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
        .fe_xcpt_valid('0),
        .fe_xcpt_code('0),
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
        .icache_maint_valid,
        .icache_maint_ready,
        .icache_maint_mode,
        .icache_maint_vaddr,
        .icache_maint_paddr,
        .icache_maint_done,
        .dcache_maint_valid,
        .dcache_maint_ready,
        .dcache_maint_op,
        .dcache_maint_mode,
        .dcache_maint_vaddr,
        .dcache_maint_paddr,
        .dcache_maint_done,
        .hw_irq('0),
        .ipi_irq(1'b0),
        .csr_req_valid(),
        .csr_addr(),
        .csr_cmd(),
        .csr_wdata(),
        .csr_wmask(),
        .commit(core_commit),
        .rob_empty(),
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
    for (genvar w = 0; w < 2; w++) begin : gen_commit
        assign commit_pcs[w] = core_commit.uops[w].pc[31:0];
        assign commit_insts[w] = core_commit.uops[w].inst;
    end
endmodule
