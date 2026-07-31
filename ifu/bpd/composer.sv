import loom_params::*;
import loom_consts::*;
import loom_types::*;

module composer #(
    parameter int BANK_WIDTH = 2,
    parameter int UBTB_ENTRIES = 16,
    parameter int UBTB_TAG_SZ = 30,
    parameter int BIM_SETS = 2048,
    parameter int BIM_COLS = 8,
    parameter int BTB_SETS = 32,
    parameter int BTB_WAYS = 2,
    parameter int BTB_TAG_SZ = 25
)(
    input logic clk,
    input logic rst_n,

    input logic f0_valid,
    input logic [31:0] f0_pc,

    output branch_prediction_t [BANK_WIDTH-1:0] f1_preds,
    output branch_prediction_t [BANK_WIDTH-1:0] f2_preds,
    output branch_prediction_t [BANK_WIDTH-1:0] f3_preds,

    output logic [BPD_MAX_META_LENGTH-1:0] f2_meta,
    output logic [BPD_MAX_META_LENGTH-1:0] f3_meta,

    output logic ready,

    input logic update_valid,
    input bpd_bank_update_t update
);
    localparam int BIM_META_SZ = BANK_WIDTH * 2;
    localparam int BTB_WAY_IDX_SZ = (BTB_WAYS <= 1) ? 1 : $clog2(BTB_WAYS);
    localparam int BTB_META_SZ = BANK_WIDTH * (1 + BTB_WAY_IDX_SZ);

    logic bim_ready;
    logic predictor_f0_valid;
    logic predictor_update_valid;

    logic [BPD_MAX_META_LENGTH-1:0] bim_f2_meta;
    logic [BPD_MAX_META_LENGTH-1:0] bim_f3_meta;
    logic [BPD_MAX_META_LENGTH-1:0] btb_f3_meta;

    bpd_bank_update_t bim_update;

    always_comb begin
        bim_update = update;
        bim_update.meta = update.meta >> BTB_META_SZ;
    end

    always_comb begin
        f3_meta = '0;
        f3_meta[BTB_META_SZ-1:0] = btb_f3_meta[BTB_META_SZ-1:0];
        f3_meta[BTB_META_SZ +: BIM_META_SZ] = bim_f3_meta[BIM_META_SZ-1:0];
    end
    assign f2_meta = bim_f2_meta;

    assign ready = bim_ready;
    assign predictor_f0_valid = f0_valid && bim_ready;
    assign predictor_update_valid = update_valid && bim_ready;

    ubtb #(.NUM_ENTRIES(UBTB_ENTRIES), .BANK_WIDTH(BANK_WIDTH), .TAG_SZ(UBTB_TAG_SZ))
    i_ubtb (
        .clk,
        .rst_n,
        .f0_valid(predictor_f0_valid),
        .f0_pc,
        .f1_preds,
        .update_valid(predictor_update_valid),
        .update
    );

    bim #(.NUM_SETS(BIM_SETS), .NUM_COLS(BIM_COLS), .BANK_WIDTH(BANK_WIDTH))
    i_bim (
        .clk,
        .rst_n,
        .f0_valid(predictor_f0_valid),
        .f0_pc,
        .f1_preds_in(f1_preds),
        .f2_preds,
        .f2_meta(bim_f2_meta),
        .ready(bim_ready),
        .update_valid(predictor_update_valid),
        .update(bim_update)
    );

    btb #(.NUM_SETS(BTB_SETS), .NUM_WAYS(BTB_WAYS), .BANK_WIDTH(BANK_WIDTH), .TAG_SZ(BTB_TAG_SZ))
    i_btb (
        .clk,
        .rst_n,
        .f0_valid(predictor_f0_valid),
        .f0_pc,
        .f2_preds_in(f2_preds),
        .f3_preds,
        .f3_meta(btb_f3_meta),
        .update_valid(predictor_update_valid),
        .update
    );

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)
            bim_f3_meta <= '0;
        else
            bim_f3_meta <= bim_f2_meta;
    end
endmodule