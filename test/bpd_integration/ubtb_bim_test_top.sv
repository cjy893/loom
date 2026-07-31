import loom_params::*;
import loom_consts::*;
import loom_types::*;

module ubtb_bim_test_top (
    input logic clk,
    input logic rst_n,

    // F0 请求 (给 UBTB 和 BIM)
    input  logic        f0_valid,
    input  logic [31:0] f0_pc,

    // BIM F2 预测输出
    output branch_prediction_t [BANK_WIDTH-1:0] f2_preds,
    output logic [BPD_MAX_META_LENGTH-1:0] bim_f2_meta,
    output logic bim_ready,

    // UBTB F1 预测输出 (调试观察)
    output branch_prediction_t [BANK_WIDTH-1:0] ubtb_f1_preds,

    // 更新 — 同时给 UBTB 和 BIM
    input  logic        update_valid,
    input  logic        update_is_mispredict_update,
    input  logic        update_is_repair_update,
    input  logic [BANK_WIDTH-1:0] update_btb_mispredicts,
    input  logic [31:0] update_pc,
    input  logic [BANK_WIDTH-1:0] update_br_mask,
    input  logic        update_cfi_valid,
    input  logic        update_cfi_idx,
    input  logic        update_cfi_taken,
    input  logic        update_cfi_mispredicted,
    input  logic        update_cfi_is_br,
    input  logic        update_cfi_is_b_bl,
    input  logic        update_cfi_is_jirl,
    input  logic [31:0] update_target,
    input  logic [BPD_MAX_META_LENGTH-1:0] update_meta
);
    bpd_bank_update_t update_packed;
    assign update_packed.is_mispredict_update = update_is_mispredict_update;
    assign update_packed.is_repair_update     = update_is_repair_update;
    assign update_packed.btb_mispredicts      = update_btb_mispredicts;
    assign update_packed.pc                   = update_pc;
    assign update_packed.br_mask              = update_br_mask;
    assign update_packed.cfi_valid            = update_cfi_valid;
    assign update_packed.cfi_idx              = update_cfi_idx;
    assign update_packed.cfi_taken            = update_cfi_taken;
    assign update_packed.cfi_mispredicted     = update_cfi_mispredicted;
    assign update_packed.cfi_is_br            = update_cfi_is_br;
    assign update_packed.cfi_is_b_bl          = update_cfi_is_b_bl;
    assign update_packed.cfi_is_jirl          = update_cfi_is_jirl;
    assign update_packed.ghist                = '0;
    assign update_packed.lhist                = '0;
    assign update_packed.target               = update_target;
    assign update_packed.meta                 = update_meta;

    // ── UBTB ──
    branch_prediction_t [BANK_WIDTH-1:0] ubtb_preds;
    assign ubtb_f1_preds = ubtb_preds;

    ubtb #(
        .NUM_ENTRIES(16),
        .BANK_WIDTH(BANK_WIDTH),
        .TAG_SZ(30)
    ) ubtb_inst (
        .clk,
        .rst_n,
        .f0_valid,
        .f0_pc,
        .f1_preds (ubtb_preds),
        .update_valid,
        .update    (update_packed)
    );

    // ── BIM ──
    bim #(
        .NUM_SETS(BIM_SETS),
        .NUM_COLS(BIM_COLS),
        .BANK_WIDTH(BANK_WIDTH)
    ) bim_inst (
        .clk,
        .rst_n,
        .f0_valid,
        .f0_pc,
        .f1_preds_in (ubtb_preds),
        .f2_preds,
        .f2_meta     (bim_f2_meta),
        .ready       (bim_ready),
        .update_valid,
        .update      (update_packed)
    );
endmodule
