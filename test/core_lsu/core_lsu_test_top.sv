import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_lsu_test_top (
    input  logic                         clk,
    input  logic                         rst_n,
    input  logic [3:0]                   fe_valid,
    input  logic [3:0][31:0]             fe_insts,
    output logic                         fe_ready,

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
    output logic                         dmem_req_mem_signed,
    output logic                         dmem_req_uses_ldq,
    output logic                         dmem_req_uses_stq,

    input  logic                         dmem_resp_valid,
    input  logic                         dmem_resp_is_store,
    input  logic [31:0]                  dmem_resp_data,
    input  logic [LSU_ADDR_SZ+1:0]       dmem_resp_idx,

    output logic                         rob_empty,
    output logic [31:0]                  debug_pc,
    output logic                         ldq_empty,
    output logic                         stq_empty,
    output logic                         br_mispredict,
    output logic [1:0]                   rn2_mask,
    output logic [1:0]                   dis_fire,
    output logic                         lsu_dispatch_ready,

    output logic [1:0]                   commit_valids,
    output logic [1:0][4:0]              commit_ldst,
    output logic [1:0]                   commit_uses_stq,
    output logic [1:0][STQ_ADDR_SZ+1:0]  commit_stq_idx,

    output logic [4:0]                   rf_write_valid,
    output logic [4:0][5:0]              rf_write_pdst,
    output logic [4:0][4:0]              rf_write_ldst,
    output logic [4:0][31:0]             rf_write_data
);
    uop_t dmem_req_uop;
    commit_signal_t core_commit;

    boom_core core (
        .clk,
        .rst_n,
        .fe_valid,
        .fe_insts,
        .fe_pcs('0),
        .fe_ready,
        .fe_redirect_valid(br_mispredict),
        .fe_redirect_pc(),
        .dmem_req_valid,
        .dmem_req_ready,
        .dmem_req_is_store,
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
        .csr_req_valid(),
        .csr_addr(),
        .csr_cmd(),
        .csr_wdata(),
        .csr_wmask(),
        .csr_rdata('0),
        .csr_xcpt_target('0),
        .csr_ertn_target('0),
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
        .alu_rs1_dbg(),
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
    assign dmem_req_mem_signed = dmem_req_uop.mem_signed;
    assign dmem_req_uses_ldq = dmem_req_uop.uses_ldq;
    assign dmem_req_uses_stq = dmem_req_uop.uses_stq;

    assign ldq_empty = core.lsu_ldq_empty;
    assign stq_empty = core.lsu_stq_empty;
    assign rn2_mask = core.rn2_mask;
    assign dis_fire = core.dis_fire;
    assign lsu_dispatch_ready = core.lsu_dispatch_ready;
    assign commit_valids = core_commit.arch_valids;

    for (genvar w = 0; w < 2; w++) begin : gen_commit_debug
        assign commit_ldst[w] = core_commit.uops[w].ldst;
        assign commit_uses_stq[w] = core_commit.uops[w].uses_stq;
        assign commit_stq_idx[w] = core_commit.uops[w].stq_idx;
    end

    assign rf_write_valid = core.rf_write_en;
    assign rf_write_pdst = core.rf_write_addr;
    assign rf_write_data = core.rf_write_data;

    always_comb begin
        rf_write_ldst = '0;
        for (int w = 0; w < 3; w++)
            rf_write_ldst[w] = core.alu_res[w].uop.ldst;
        rf_write_ldst[3] = core.lsu_resp_w.uop.ldst;
        rf_write_ldst[4] = core.unq_res.uop.ldst;
    end
endmodule
