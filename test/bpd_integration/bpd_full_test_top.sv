import loom_params::*;
import loom_consts::*;
import loom_types::*;

module bpd_full_test_top (
    input logic clk,
    input logic rst_n,

    // F0 请求
    input  logic        f0_valid,
    input  logic [31:0] f0_pc,

    // F1 推测更新 (ghist)
    input  logic f1_update_valid,
    input  logic f1_is_br,
    input  logic f1_taken,
    input  logic f1_is_call,
    input  logic f1_is_ret,

    // 输出
    output branch_prediction_t [BANK_WIDTH-1:0] ubtb_f1_preds,
    output branch_prediction_t [BANK_WIDTH-1:0] bim_f2_preds,
    output branch_prediction_t [BANK_WIDTH-1:0] btb_f3_preds,
    output logic [BPD_MAX_META_LENGTH-1:0] bim_f2_meta,
    output global_history_t current_ghist,
    output logic bim_ready,

    // RAS
    input  logic [RAS_IDX_SZ-1:0] ras_read_idx,
    output logic [31:0] ras_read_addr,

    // GHist 恢复
    input  logic             ghist_restore_valid,
    input  logic [63:0]      restore_old_history,
    input  logic             restore_saw_nt,
    input  logic [4:0]       restore_ras_idx,

    // 更新
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

    // ── GHist ──
    global_history_t restore_packed;
    assign restore_packed.old_history                 = restore_old_history;
    assign restore_packed.current_saw_branch_not_taken = restore_saw_nt;
    assign restore_packed.new_saw_branch_not_taken     = 1'b0;
    assign restore_packed.new_saw_branch_taken         = 1'b0;
    assign restore_packed.ras_idx                      = restore_ras_idx;

    logic [FETCH_WIDTH-1:0] ghist_br_mask;
    logic ghist_cfi_valid;
    logic ghist_cfi_taken;

    assign ghist_br_mask = f1_is_br ? FETCH_WIDTH'(1) : '0;
    assign ghist_cfi_valid = f1_is_br || f1_is_call || f1_is_ret;
    assign ghist_cfi_taken = f1_is_br ? f1_taken
                                      : (f1_is_call || f1_is_ret);

    ghist #(.GHIST_LEN(GLOBAL_HISTORY_LENGTH), .RAS_ENTRIES(RAS_ENTRIES))
    ghist_inst (
        .clk, .rst_n,
        .update_valid(f1_update_valid),
        .update_pc(f0_pc),
        .update_br_mask(ghist_br_mask),
        .update_cfi_valid(ghist_cfi_valid),
        .update_cfi_idx('0),
        .update_cfi_taken(ghist_cfi_taken),
        .update_cfi_is_br(f1_is_br),
        .update_cfi_is_call(f1_is_call),
        .update_cfi_is_ret(f1_is_ret),
        .current_ghist,
        .restore_valid(ghist_restore_valid),
        .restore_ghist(restore_packed)
    );

    // ── RAS ──
    ras #(.NUM_ENTRIES(RAS_ENTRIES)) ras_inst (
        .clk, .rst_n,
        .write_valid (f1_update_valid && f1_is_call),
        .write_idx   (current_ghist.ras_idx),
        .write_addr  (f0_pc + 32'd4),   // 返回地址 = PC+4
        .read_idx    (ras_read_idx),
        .read_addr   (ras_read_addr),
        .repair_valid(1'b0),
        .repair_idx  ('0),
        .repair_addr ('0)
    );

    // ── UBTB ──
    ubtb #(.NUM_ENTRIES(16), .BANK_WIDTH(BANK_WIDTH), .TAG_SZ(30))
    ubtb_inst (.clk, .rst_n, .f0_valid, .f0_pc,
               .f1_preds(ubtb_f1_preds), .update_valid, .update(update_packed));

    // ── BIM ──
    bim #(.NUM_SETS(BIM_SETS), .NUM_COLS(BIM_COLS), .BANK_WIDTH(BANK_WIDTH))
    bim_inst (.clk, .rst_n, .f0_valid, .f0_pc,
              .f1_preds_in(ubtb_f1_preds), .f2_preds(bim_f2_preds),
              .f2_meta(bim_f2_meta), .ready(bim_ready),
              .update_valid, .update(update_packed));

    // ── BTB ──
    btb #(.NUM_SETS(BTB_SETS), .NUM_WAYS(BTB_WAYS), .BANK_WIDTH(BANK_WIDTH), .TAG_SZ(BTB_TAG_SZ))
    btb_inst (.clk, .rst_n, .f0_valid, .f0_pc,
              .f2_preds_in(bim_f2_preds), .f3_preds(btb_f3_preds),
              .f3_meta(), .update_valid, .update(update_packed));
endmodule
