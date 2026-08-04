import loom_params::*;
import loom_consts::*;
import loom_types::*;

module rob_test_top (
    input  logic clk,
    input  logic rst_n,

    input  logic [1:0] enq_valid,
    input  logic       enq_partial_stall,
    input  logic [5:0] enq_rob_idx_0,
    input  logic [5:0] enq_rob_idx_1,
    input  logic [4:0] enq_ldst_0,
    input  logic [4:0] enq_ldst_1,
    input  logic [1:0] enq_writes_gpr,
    input  logic       enq_busy_0,
    input  logic       enq_busy_1,
    input  logic [1:0] enq_exception,
    input  logic [1:0] enq_flush_on_commit,
    input  logic [1:0] enq_is_ertn,
    input  logic [31:0] enq_exc_cause_0,
    input  logic [31:0] enq_exc_cause_1,
    input  logic [31:0] enq_pc_0,
    input  logic [31:0] enq_pc_1,
    input  logic [31:0] enq_inst_0,
    input  logic [31:0] enq_inst_1,

    input  logic [1:0] wb_valid,
    input  logic [5:0] wb_rob_idx_0,
    input  logic [5:0] wb_rob_idx_1,
    input  logic [31:0] wb_data_0,
    input  logic [31:0] wb_data_1,

    input  logic [1:0] lsu_clr_bsy_valid,
    input  logic [2:0] lsu_clr_bsy_addr_0,
    input  logic [2:0] lsu_clr_bsy_addr_1,

    input  logic        interrupt_pending,
    input  logic [31:0] interrupt_next_pc,
    input  logic [3:0]  br_mispredict_mask,
    input  logic        br_mispredict,
    input  logic        lxcpt_valid,
    input  logic [5:0]  lxcpt_rob_idx,
    input  logic [5:0]  lxcpt_cause,
    input  logic [31:0] lxcpt_badvaddr,

    output logic [5:0] tail_idx,
    output logic [5:0] head_idx,
    output logic       ready,
    output logic       empty,
    output logic [1:0] commit_valid,
    output logic [1:0] commit_arch_valid,
    output logic [4:0] commit_ldst_0,
    output logic [4:0] commit_ldst_1,
    output logic [31:0] commit_wdata_0,
    output logic [31:0] commit_wdata_1,
    output logic [31:0] commit_inst_0,
    output logic [31:0] commit_inst_1,
    output logic [1:0] dual_mode_commit_valid,
    output logic [31:0] dual_mode_commit_wdata_0,
    output logic [31:0] dual_mode_commit_wdata_1,
    output logic       com_xcpt_valid,
    output logic [31:0] com_xcpt_pc,
    output logic [31:0] com_xcpt_inst,
    output logic [31:0] com_xcpt_cause,
    output logic [31:0] com_xcpt_badvaddr,
    output logic       flush_valid,
    output logic [2:0] flush_typ,
    output logic       flush_frontend,
    output logic       rollback,
    output logic       interrupt_taken
);
    uop_t [1:0] enq_uops;
    exe_unit_resp_t [1:0] wb_resps;
    logic [1:0][2:0] lsu_clr_bsy_addr;
    commit_signal_t commit;
    commit_signal_t dual_mode_commit;
    commit_exception_signals_t com_xcpt;
    commit_exception_signals_t flush;
    br_update_info_t brupdate;
    exception_t lxcpt;

    always_comb begin
        enq_uops = '0;
        enq_uops[0].rob_idx = enq_rob_idx_0;
        enq_uops[0].ldst = enq_ldst_0;
        enq_uops[0].starts_bsy = enq_busy_0;
        enq_uops[0].exception = enq_exception[0];
        enq_uops[0].flush_on_commit = enq_flush_on_commit[0];
        enq_uops[0].is_ertn = enq_is_ertn[0];
        enq_uops[0].exc_cause = enq_exc_cause_0;
        enq_uops[0].pc = enq_pc_0;
        enq_uops[0].inst = enq_inst_0;
        enq_uops[0].dst_rtype = enq_writes_gpr[0] ? RT_FIX : RT_X;
        enq_uops[1].rob_idx = enq_rob_idx_1;
        enq_uops[1].ldst = enq_ldst_1;
        enq_uops[1].starts_bsy = enq_busy_1;
        enq_uops[1].exception = enq_exception[1];
        enq_uops[1].flush_on_commit = enq_flush_on_commit[1];
        enq_uops[1].is_ertn = enq_is_ertn[1];
        enq_uops[1].exc_cause = enq_exc_cause_1;
        enq_uops[1].pc = enq_pc_1;
        enq_uops[1].inst = enq_inst_1;
        enq_uops[1].dst_rtype = enq_writes_gpr[1] ? RT_FIX : RT_X;

        wb_resps = '0;
        wb_resps[0].valid = wb_valid[0];
        wb_resps[0].uop.rob_idx = wb_rob_idx_0;
        wb_resps[0].data = wb_data_0;
        wb_resps[1].valid = wb_valid[1];
        wb_resps[1].uop.rob_idx = wb_rob_idx_1;
        wb_resps[1].data = wb_data_1;
        lsu_clr_bsy_addr[0] = lsu_clr_bsy_addr_0;
        lsu_clr_bsy_addr[1] = lsu_clr_bsy_addr_1;
        brupdate = '0;
        brupdate.b1.mispredict_mask = br_mispredict_mask;
        brupdate.b2.mispredict = br_mispredict;
        lxcpt = '0;
        lxcpt.valid = lxcpt_valid;
        lxcpt.uop.rob_idx = lxcpt_rob_idx;
        lxcpt.cause = lxcpt_cause;
        lxcpt.badvaddr = lxcpt_badvaddr;
    end

    rob #(
        .NUM_ENTRIES(8),
        .CORE_WIDTH(2),
        .NUM_ROWS(4),
        .ROB_ADDR_SZ(3),
        .NUM_WAKEUP_PORTS(2)
    ) dut (
        .clk,
        .rst_n,
        .enq_valids(enq_valid),
        .enq_uops,
        .enq_partial_stall,
        .rob_tail_idx(tail_idx),
        .wb_resps,
        .lsu_clr_bsy_valid,
        .lsu_clr_bsy_addr,
        .brupdate,
        .interrupt_pending,
        .interrupt_next_pc,
        .interrupt_taken,
        .lxcpt,
        .csr_replay('0),
        .csr_stall(1'b0),
        .commit,
        .com_xcpt,
        .flush,
        .empty,
        .ready,
        .rollback,
        .flush_frontend,
        .rob_head_idx(head_idx),
        .rob_pnr_idx()
    );

    rob #(
        .NUM_ENTRIES(8),
        .CORE_WIDTH(2),
        .NUM_ROWS(4),
        .ROB_ADDR_SZ(3),
        .NUM_WAKEUP_PORTS(2),
        .ENABLE_SINGLE_DEBUG_COMMIT(1'b0)
    ) dual_mode_dut (
        .clk,
        .rst_n,
        .enq_valids(enq_valid),
        .enq_uops,
        .enq_partial_stall,
        .rob_tail_idx(),
        .wb_resps,
        .lsu_clr_bsy_valid,
        .lsu_clr_bsy_addr,
        .brupdate,
        .interrupt_pending,
        .interrupt_next_pc,
        .interrupt_taken(),
        .lxcpt,
        .csr_replay('0),
        .csr_stall(1'b0),
        .commit(dual_mode_commit),
        .com_xcpt(),
        .flush(),
        .empty(),
        .ready(),
        .rollback(),
        .flush_frontend(),
        .rob_head_idx(),
        .rob_pnr_idx()
    );

    assign commit_valid = commit.valids;
    assign commit_arch_valid = commit.arch_valids;
    assign commit_ldst_0 = commit.uops[0].ldst;
    assign commit_ldst_1 = commit.uops[1].ldst;
    assign commit_wdata_0 = commit.debug_wdata[0*XLEN +: XLEN];
    assign commit_wdata_1 = commit.debug_wdata[1*XLEN +: XLEN];
    assign commit_inst_0 = commit.debug_insts[0*32 +: 32];
    assign commit_inst_1 = commit.debug_insts[1*32 +: 32];
    assign dual_mode_commit_valid = dual_mode_commit.valids;
    assign dual_mode_commit_wdata_0 =
        dual_mode_commit.debug_wdata[0*XLEN +: XLEN];
    assign dual_mode_commit_wdata_1 =
        dual_mode_commit.debug_wdata[1*XLEN +: XLEN];
    assign com_xcpt_valid = com_xcpt.valid;
    assign com_xcpt_pc = com_xcpt.pc;
    assign com_xcpt_inst = com_xcpt.inst;
    assign com_xcpt_cause = com_xcpt.cause;
    assign com_xcpt_badvaddr = com_xcpt.badvaddr;
    assign flush_valid = flush.valid;
    assign flush_typ = flush.flush_typ;
endmodule
