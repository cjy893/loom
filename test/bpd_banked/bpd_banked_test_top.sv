import loom_params::*;
import loom_consts::*;
import loom_types::*;

module bpd_banked_test_top (
    input logic clk,
    input logic rst_n,

    input logic f0_valid,
    input logic [31:0] f0_pc,

    output logic f1_valid,
    output logic f2_valid,
    output logic f3_valid,
    output branch_prediction_t [FETCH_WIDTH-1:0] f1_preds,
    output branch_prediction_t [FETCH_WIDTH-1:0] f2_preds,
    output branch_prediction_t [FETCH_WIDTH-1:0] f3_preds,
    output logic [NBANKS-1:0][BPD_MAX_META_LENGTH-1:0] f3_meta,
    output logic ready,

    input logic update_valid,
    input logic update_is_mispredict_update,
    input logic update_is_repair_update,
    input logic [FETCH_WIDTH-1:0] update_btb_mispredicts,
    input logic [31:0] update_pc,
    input logic [FETCH_WIDTH-1:0] update_br_mask,
    input logic update_cfi_valid,
    input logic [$clog2(FETCH_WIDTH)-1:0] update_cfi_idx,
    input logic update_cfi_taken,
    input logic update_cfi_mispredicted,
    input logic update_cfi_is_br,
    input logic update_cfi_is_b_bl,
    input logic update_cfi_is_jirl,
    input logic [GLOBAL_HISTORY_LENGTH-1:0] update_ghist_old_history,
    input logic update_ghist_current_saw_nt,
    input logic update_ghist_new_saw_nt,
    input logic update_ghist_new_saw_taken,
    input logic [RAS_IDX_SZ-1:0] update_ghist_ras_idx,
    input logic [NBANKS-1:0][LOCAL_HISTORY_LENGTH-1:0] update_lhist,
    input logic [31:0] update_target,
    input logic [NBANKS-1:0][BPD_MAX_META_LENGTH-1:0] update_meta
);
    bpd_update_t update;

    always_comb begin
        update = '0;
        update.is_mispredict_update = update_is_mispredict_update;
        update.is_repair_update = update_is_repair_update;
        update.btb_mispredicts = update_btb_mispredicts;
        update.pc = update_pc;
        update.br_mask = update_br_mask;
        update.cfi_valid = update_cfi_valid;
        update.cfi_idx = update_cfi_idx;
        update.cfi_taken = update_cfi_taken;
        update.cfi_mispredicted = update_cfi_mispredicted;
        update.cfi_is_br = update_cfi_is_br;
        update.cfi_is_b_bl = update_cfi_is_b_bl;
        update.cfi_is_jirl = update_cfi_is_jirl;
        update.ghist.old_history = update_ghist_old_history;
        update.ghist.current_saw_branch_not_taken =
            update_ghist_current_saw_nt;
        update.ghist.new_saw_branch_not_taken =
            update_ghist_new_saw_nt;
        update.ghist.new_saw_branch_taken =
            update_ghist_new_saw_taken;
        update.ghist.ras_idx = update_ghist_ras_idx;
        update.lhist = update_lhist;
        update.target = update_target;
        update.meta = update_meta;
    end

    bpd_banked_test_dut #(
        .UBTB_ENTRIES(8),
        .UBTB_TAG_SZ(30),
        .BIM_SETS(64),
        .BIM_COLS(8),
        .GSHARE_SETS(64),
        .GSHARE_HISTORY_BITS(6),
        .BTB_SETS(16),
        .BTB_WAYS(2),
        .BTB_TAG_SZ(25)
    ) dut (
        .clk,
        .rst_n,
        .f0_valid,
        .f0_pc,
        .f1_valid,
        .f2_valid,
        .f3_valid,
        .f1_preds,
        .f2_preds,
        .f3_preds,
        .f3_meta,
        .ready,
        .update_valid,
        .update
    );
endmodule
