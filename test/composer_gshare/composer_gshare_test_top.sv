import loom_params::*;
import loom_consts::*;
import loom_types::*;

module composer_gshare_test_top (
    input  logic clk,
    input  logic rst_n,

    input  logic                                f0_valid,
    input  logic [31:0]                         f0_pc,
    input  logic [GLOBAL_HISTORY_LENGTH-1:0]    f0_ghist,

    output branch_prediction_t [BANK_WIDTH-1:0] f1_preds,
    output branch_prediction_t [BANK_WIDTH-1:0] f2_preds,
    output branch_prediction_t [BANK_WIDTH-1:0] f3_preds,
    output logic [BPD_MAX_META_LENGTH-1:0]       f2_meta,
    output logic [BPD_MAX_META_LENGTH-1:0]       f3_meta,
    output logic                                ready,

    input  logic                                update_valid,
    input  logic                                update_is_mispredict_update,
    input  logic                                update_is_repair_update,
    input  logic [BANK_WIDTH-1:0]               update_btb_mispredicts,
    input  logic [31:0]                         update_pc,
    input  logic [BANK_WIDTH-1:0]               update_br_mask,
    input  logic                                update_cfi_valid,
    input  logic                                update_cfi_idx,
    input  logic                                update_cfi_taken,
    input  logic                                update_cfi_mispredicted,
    input  logic                                update_cfi_is_br,
    input  logic                                update_cfi_is_b_bl,
    input  logic                                update_cfi_is_jirl,
    input  logic [GLOBAL_HISTORY_LENGTH-1:0]    update_ghist,
    input  logic [31:0]                         update_target,
    input  logic [BPD_MAX_META_LENGTH-1:0]      update_meta
);
    bpd_bank_update_t update_packed;

    always_comb begin
        update_packed = '0;
        update_packed.is_mispredict_update = update_is_mispredict_update;
        update_packed.is_repair_update = update_is_repair_update;
        update_packed.btb_mispredicts = update_btb_mispredicts;
        update_packed.pc = update_pc;
        update_packed.br_mask = update_br_mask;
        update_packed.cfi_valid = update_cfi_valid;
        update_packed.cfi_idx = update_cfi_idx;
        update_packed.cfi_taken = update_cfi_taken;
        update_packed.cfi_mispredicted = update_cfi_mispredicted;
        update_packed.cfi_is_br = update_cfi_is_br;
        update_packed.cfi_is_b_bl = update_cfi_is_b_bl;
        update_packed.cfi_is_jirl = update_cfi_is_jirl;
        update_packed.ghist = update_ghist;
        update_packed.target = update_target;
        update_packed.meta = update_meta;
    end

    composer #(
        .UBTB_ENTRIES(8),
        .BIM_SETS(8),
        .BIM_COLS(1),
        .GSHARE_SETS(16),
        .GSHARE_HISTORY_BITS(4),
        .BTB_SETS(8),
        .BTB_WAYS(2)
    ) dut (
        .clk,
        .rst_n,
        .f0_valid,
        .f0_pc,
        .f0_ghist,
        .f1_preds,
        .f2_preds,
        .f3_preds,
        .f2_meta,
        .f3_meta,
        .ready,
        .update_valid,
        .update(update_packed)
    );
endmodule
