import loom_params::*;
import loom_consts::*;
import loom_types::*;

module bpd_update_router_test_top (
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
    input logic [NBANKS-1:0][BPD_MAX_META_LENGTH-1:0] update_meta,

    output logic [NBANKS-1:0] bank_valid,

    output logic bank0_is_mispredict_update,
    output logic bank0_is_repair_update,
    output logic [BANK_WIDTH-1:0] bank0_btb_mispredicts,
    output logic [31:0] bank0_pc,
    output logic [BANK_WIDTH-1:0] bank0_br_mask,
    output logic bank0_cfi_valid,
    output logic [$clog2(BANK_WIDTH)-1:0] bank0_cfi_idx,
    output logic bank0_cfi_taken,
    output logic bank0_cfi_mispredicted,
    output logic bank0_cfi_is_br,
    output logic bank0_cfi_is_b_bl,
    output logic bank0_cfi_is_jirl,
    output logic [GLOBAL_HISTORY_LENGTH-1:0] bank0_ghist,
    output logic [LOCAL_HISTORY_LENGTH-1:0] bank0_lhist,
    output logic [31:0] bank0_target,
    output logic [BPD_MAX_META_LENGTH-1:0] bank0_meta,

    output logic bank1_is_mispredict_update,
    output logic bank1_is_repair_update,
    output logic [BANK_WIDTH-1:0] bank1_btb_mispredicts,
    output logic [31:0] bank1_pc,
    output logic [BANK_WIDTH-1:0] bank1_br_mask,
    output logic bank1_cfi_valid,
    output logic [$clog2(BANK_WIDTH)-1:0] bank1_cfi_idx,
    output logic bank1_cfi_taken,
    output logic bank1_cfi_mispredicted,
    output logic bank1_cfi_is_br,
    output logic bank1_cfi_is_b_bl,
    output logic bank1_cfi_is_jirl,
    output logic [GLOBAL_HISTORY_LENGTH-1:0] bank1_ghist,
    output logic [LOCAL_HISTORY_LENGTH-1:0] bank1_lhist,
    output logic [31:0] bank1_target,
    output logic [BPD_MAX_META_LENGTH-1:0] bank1_meta
);
    bpd_update_t update;
    bpd_bank_update_t bank_update [NBANKS-1:0];

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

    bpd_update_router dut (
        .update_valid,
        .update,
        .bank_update_valid(bank_valid),
        .bank_update
    );

    assign bank0_is_mispredict_update =
        bank_update[0].is_mispredict_update;
    assign bank0_is_repair_update =
        bank_update[0].is_repair_update;
    assign bank0_btb_mispredicts = bank_update[0].btb_mispredicts;
    assign bank0_pc = bank_update[0].pc;
    assign bank0_br_mask = bank_update[0].br_mask;
    assign bank0_cfi_valid = bank_update[0].cfi_valid;
    assign bank0_cfi_idx = bank_update[0].cfi_idx;
    assign bank0_cfi_taken = bank_update[0].cfi_taken;
    assign bank0_cfi_mispredicted =
        bank_update[0].cfi_mispredicted;
    assign bank0_cfi_is_br = bank_update[0].cfi_is_br;
    assign bank0_cfi_is_b_bl = bank_update[0].cfi_is_b_bl;
    assign bank0_cfi_is_jirl = bank_update[0].cfi_is_jirl;
    assign bank0_ghist = bank_update[0].ghist;
    assign bank0_lhist = bank_update[0].lhist;
    assign bank0_target = bank_update[0].target;
    assign bank0_meta = bank_update[0].meta;

    assign bank1_is_mispredict_update =
        bank_update[1].is_mispredict_update;
    assign bank1_is_repair_update =
        bank_update[1].is_repair_update;
    assign bank1_btb_mispredicts = bank_update[1].btb_mispredicts;
    assign bank1_pc = bank_update[1].pc;
    assign bank1_br_mask = bank_update[1].br_mask;
    assign bank1_cfi_valid = bank_update[1].cfi_valid;
    assign bank1_cfi_idx = bank_update[1].cfi_idx;
    assign bank1_cfi_taken = bank_update[1].cfi_taken;
    assign bank1_cfi_mispredicted =
        bank_update[1].cfi_mispredicted;
    assign bank1_cfi_is_br = bank_update[1].cfi_is_br;
    assign bank1_cfi_is_b_bl = bank_update[1].cfi_is_b_bl;
    assign bank1_cfi_is_jirl = bank_update[1].cfi_is_jirl;
    assign bank1_ghist = bank_update[1].ghist;
    assign bank1_lhist = bank_update[1].lhist;
    assign bank1_target = bank_update[1].target;
    assign bank1_meta = bank_update[1].meta;
endmodule
