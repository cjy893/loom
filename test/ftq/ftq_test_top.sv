import loom_params::*;
import loom_consts::*;
import loom_types::*;

module ftq_test_top #(
    parameter int NUM_ENTRIES = 16
)(
    input  logic clk,
    input  logic rst_n,

    // ── Enqueue ──
    input  logic                                     enq_valid,
    output logic                                     enq_ready,
    input  logic [31:0]                              enq_pc,
    input  logic [31:0]                              enq_next_pc,
    input  logic [FETCH_WIDTH-1:0]                   enq_br_mask,
    input  logic                                     enq_cfi_valid,
    input  logic [$clog2(FETCH_WIDTH)-1:0]           enq_cfi_idx,
    input  logic [2:0]                               enq_cfi_type,
    input  logic                                     enq_cfi_is_call,
    input  logic                                     enq_cfi_is_ret,
    input  logic                                     enq_cfi_npc_plus4,
    input  logic                                     enq_cfi_taken,
    input  logic [31:0]                              enq_ras_top,
    input  logic [RAS_IDX_SZ-1:0]                    enq_ras_idx,
    input  logic                                     enq_start_bank,
    input  global_history_t                          enq_ghist,
    input  logic [NBANKS-1:0]
                [BPD_MAX_META_LENGTH-1:0]             enq_meta,
    output logic [$clog2(NUM_ENTRIES)-1:0]           enq_idx,

    // ── Commit ──
    input  logic                                     commit_valid,
    input  logic [$clog2(NUM_ENTRIES)-1:0]           commit_ftq_idx,

    // ── Redirect ──
    input  logic                                     redirect_valid,
    input  logic [$clog2(NUM_ENTRIES)-1:0]           redirect_ftq_idx,

    // ── Brupdate (from backend) ──
    input  logic                                     brupdate_b2_mispredict,
    input  logic [$clog2(NUM_ENTRIES)-1:0]           brupdate_b2_ftq_idx,
    input  logic                                     brupdate_b2_taken,
    input  logic [31:0]                              brupdate_b2_target,
    input  logic [FETCH_WIDTH-1:0]                   brupdate_b2_br_mask,
    input  logic                                     brupdate_b2_cfi_is_br,
    input  logic                                     brupdate_b2_cfi_is_call,
    input  logic                                     brupdate_b2_cfi_is_ret,

    // ── BPD Update (to predictors) ──
    output logic                                     bpd_update_valid,
    output logic                                     bpd_update_is_mispredict_update,
    output logic                                     bpd_update_is_repair_update,
    output logic [31:0]                              bpd_update_pc,
    output logic [FETCH_WIDTH-1:0]                   bpd_update_br_mask,
    output logic                                     bpd_update_cfi_valid,
    output logic [$clog2(FETCH_WIDTH)-1:0]           bpd_update_cfi_idx,
    output logic                                     bpd_update_cfi_taken,
    output logic                                     bpd_update_cfi_mispredicted,
    output logic                                     bpd_update_cfi_is_br,
    output logic                                     bpd_update_cfi_is_b_bl,
    output logic                                     bpd_update_cfi_is_jirl,
    output logic [31:0]                              bpd_update_target,
    output global_history_t                          bpd_update_ghist,
    output logic [NBANKS-1:0]
                [BPD_MAX_META_LENGTH-1:0]             bpd_update_meta,

    // ── GHist 恢复 ──
    output logic                                     ghist_restore_valid,
    output global_history_t                          ghist_restore,

    // ── RAS 修复 ──
    output logic                                     ras_repair_valid,
    output logic [RAS_IDX_SZ-1:0]                    ras_repair_idx,
    output logic [31:0]                              ras_repair_addr,

    // ── 后端查询 ──
    input  logic                                     query_valid,
    input  logic [$clog2(NUM_ENTRIES)-1:0]           query_idx,
    output logic                                     query_resp_valid,
    output logic [31:0]                              query_pc,
    output logic [FETCH_WIDTH-1:0]                   query_br_mask,
    output logic                                     query_cfi_valid,
    output logic [$clog2(FETCH_WIDTH)-1:0]           query_cfi_idx,
    output logic [2:0]                               query_cfi_type,
    output logic                                     query_cfi_is_call,
    output logic                                     query_cfi_is_ret,
    output logic                                     query_cfi_npc_plus4,
    output logic                                     query_cfi_taken,
    output logic [31:0]                              query_ras_top,
    output logic [RAS_IDX_SZ-1:0]                    query_ras_idx,
    output logic                                     query_start_bank,
    output global_history_t                          query_ghist
);
`ifdef FTQ_TEST_CONTRACT_STUB
    always_comb begin
        enq_ready = 1'b1;
        enq_idx = '0;

        bpd_update_valid = 1'b0;
        bpd_update_is_mispredict_update = 1'b0;
        bpd_update_is_repair_update = 1'b0;
        bpd_update_pc = '0;
        bpd_update_br_mask = '0;
        bpd_update_cfi_valid = 1'b0;
        bpd_update_cfi_idx = '0;
        bpd_update_cfi_taken = 1'b0;
        bpd_update_cfi_mispredicted = 1'b0;
        bpd_update_cfi_is_br = 1'b0;
        bpd_update_cfi_is_b_bl = 1'b0;
        bpd_update_cfi_is_jirl = 1'b0;
        bpd_update_target = '0;
        bpd_update_ghist = '0;
        bpd_update_meta = '0;

        ghist_restore_valid = 1'b0;
        ghist_restore = '0;
        ras_repair_valid = 1'b0;
        ras_repair_idx = '0;
        ras_repair_addr = '0;

        query_resp_valid = 1'b0;
        query_pc = '0;
        query_br_mask = '0;
        query_cfi_valid = 1'b0;
        query_cfi_idx = '0;
        query_cfi_type = '0;
        query_cfi_is_call = 1'b0;
        query_cfi_is_ret = 1'b0;
        query_cfi_npc_plus4 = 1'b0;
        query_cfi_taken = 1'b0;
        query_ras_top = '0;
        query_ras_idx = '0;
        query_start_bank = 1'b0;
        query_ghist = '0;
    end
`else
    fetch_target_queue #(.NUM_ENTRIES(NUM_ENTRIES)) dut (
        .clk, .rst_n,
        .enq_valid, .enq_ready,
        .enq_pc, .enq_next_pc,
        .enq_br_mask, .enq_cfi_valid, .enq_cfi_idx,
        .enq_cfi_type, .enq_cfi_is_call, .enq_cfi_is_ret,
        .enq_cfi_npc_plus4, .enq_cfi_taken,
        .enq_ras_top, .enq_ras_idx, .enq_start_bank,
        .enq_ghist, .enq_meta, .enq_idx,
        .commit_valid, .commit_ftq_idx,
        .redirect_valid, .redirect_ftq_idx,
        .brupdate_b2_mispredict, .brupdate_b2_ftq_idx,
        .brupdate_b2_taken, .brupdate_b2_target,
        .brupdate_b2_br_mask, .brupdate_b2_cfi_is_br,
        .brupdate_b2_cfi_is_call, .brupdate_b2_cfi_is_ret,
        .bpd_update_valid, .bpd_update_is_mispredict_update,
        .bpd_update_is_repair_update, .bpd_update_pc,
        .bpd_update_br_mask, .bpd_update_cfi_valid,
        .bpd_update_cfi_idx, .bpd_update_cfi_taken,
        .bpd_update_cfi_mispredicted, .bpd_update_cfi_is_br,
        .bpd_update_cfi_is_b_bl, .bpd_update_cfi_is_jirl,
        .bpd_update_target, .bpd_update_ghist, .bpd_update_meta,
        .ghist_restore_valid, .ghist_restore,
        .ras_repair_valid, .ras_repair_idx, .ras_repair_addr,
        .query_valid, .query_idx, .query_resp_valid,
        .query_pc, .query_br_mask,
        .query_cfi_valid, .query_cfi_idx, .query_cfi_type,
        .query_cfi_is_call, .query_cfi_is_ret,
        .query_cfi_npc_plus4, .query_cfi_taken,
        .query_ras_top, .query_ras_idx, .query_start_bank,
        .query_ghist
    );
`endif
endmodule
