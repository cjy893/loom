import loom_params::*;
import loom_consts::*;
import loom_types::*;

module bpd_banked_test_dut #(
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

    output logic f1_valid,
    output logic f2_valid,
    output logic f3_valid,
    output branch_prediction_t [FETCH_WIDTH-1:0] f1_preds,
    output branch_prediction_t [FETCH_WIDTH-1:0] f2_preds,
    output branch_prediction_t [FETCH_WIDTH-1:0] f3_preds,
    output logic [NBANKS-1:0][BPD_MAX_META_LENGTH-1:0] f3_meta,
    output logic ready,

    input logic update_valid,
    input bpd_update_t update
);
    localparam int BANK_ALIGN_BITS = $clog2(BANK_BYTES);
    localparam int BLOCK_OFFSET_BITS = $clog2(ICACHE_BLOCK_BYTES);
    localparam int NUM_BANK_CHUNKS = ICACHE_BLOCK_BYTES / BANK_BYTES;

    logic first_bank;
    logic second_bank;
    logic last_bank_in_block;
    logic [31:0] first_bank_pc;
    logic [31:0] second_bank_pc;
    logic request_valid;

    logic [NBANKS-1:0] bank_f0_valid;
    logic [NBANKS-1:0][31:0] bank_f0_pc;
    logic [NBANKS-1:0] bank_ready;

    branch_prediction_t [BANK_WIDTH-1:0] bank_f1_preds [NBANKS-1:0];
    branch_prediction_t [BANK_WIDTH-1:0] bank_f2_preds [NBANKS-1:0];
    branch_prediction_t [BANK_WIDTH-1:0] bank_f3_preds [NBANKS-1:0];
    logic [BPD_MAX_META_LENGTH-1:0] bank_f3_meta [NBANKS-1:0];

    logic f1_first_bank_q;
    logic f2_first_bank_q;
    logic f3_first_bank_q;
    logic f1_second_valid_q;
    logic f2_second_valid_q;
    logic f3_second_valid_q;

    logic [NBANKS-1:0] bank_update_valid;
    bpd_bank_update_t bank_update [NBANKS-1:0];

    assign first_bank = f0_pc[BANK_ALIGN_BITS];
    assign second_bank = ~first_bank;
    assign first_bank_pc =
        {f0_pc[31:BANK_ALIGN_BITS], {BANK_ALIGN_BITS{1'b0}}};
    assign second_bank_pc = first_bank_pc + 32'(BANK_BYTES);
    assign last_bank_in_block =
        f0_pc[BLOCK_OFFSET_BITS-1:BANK_ALIGN_BITS] ==
        (BLOCK_OFFSET_BITS-BANK_ALIGN_BITS)'(NUM_BANK_CHUNKS-1);

    assign ready = &bank_ready;
    assign request_valid = f0_valid && ready;

    always_comb begin
        bank_f0_valid = '0;
        bank_f0_pc = '0;

        bank_f0_valid[first_bank] = request_valid;
        bank_f0_pc[first_bank] = first_bank_pc;

        if (!last_bank_in_block) begin
            bank_f0_valid[second_bank] = request_valid;
            bank_f0_pc[second_bank] = second_bank_pc;
        end
    end

    bpd_update_router i_update_router (
        .update_valid,
        .update,
        .bank_update_valid,
        .bank_update
    );

    for (genvar bank = 0; bank < NBANKS; bank++) begin: gen_bank
        composer #(
            .BANK_WIDTH(BANK_WIDTH),
            .UBTB_ENTRIES(UBTB_ENTRIES),
            .UBTB_TAG_SZ(UBTB_TAG_SZ),
            .BIM_SETS(BIM_SETS),
            .BIM_COLS(BIM_COLS),
            .BTB_SETS(BTB_SETS),
            .BTB_WAYS(BTB_WAYS),
            .BTB_TAG_SZ(BTB_TAG_SZ)
        ) i_composer (
            .clk,
            .rst_n,
            .f0_valid(bank_f0_valid[bank]),
            .f0_pc(bank_f0_pc[bank]),
            .f1_preds(bank_f1_preds[bank]),
            .f2_preds(bank_f2_preds[bank]),
            .f3_preds(bank_f3_preds[bank]),
            .f2_meta(),
            .f3_meta(bank_f3_meta[bank]),
            .ready(bank_ready[bank]),
            .update_valid(bank_update_valid[bank]),
            .update(bank_update[bank])
        );

        assign f3_meta[bank] = bank_f3_meta[bank];
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            f1_valid <= 1'b0;
            f2_valid <= 1'b0;
            f3_valid <= 1'b0;
            f1_first_bank_q <= 1'b0;
            f2_first_bank_q <= 1'b0;
            f3_first_bank_q <= 1'b0;
            f1_second_valid_q <= 1'b0;
            f2_second_valid_q <= 1'b0;
            f3_second_valid_q <= 1'b0;
        end else begin
            f1_valid <= request_valid;
            f2_valid <= f1_valid;
            f3_valid <= f2_valid;

            if (request_valid) begin
                f1_first_bank_q <= first_bank;
                f1_second_valid_q <= !last_bank_in_block;
            end
            if (f1_valid) begin
                f2_first_bank_q <= f1_first_bank_q;
                f2_second_valid_q <= f1_second_valid_q;
            end
            if (f2_valid) begin
                f3_first_bank_q <= f2_first_bank_q;
                f3_second_valid_q <= f2_second_valid_q;
            end
        end
    end

    always_comb begin
        f1_preds = '0;
        f2_preds = '0;
        f3_preds = '0;

        if (f1_valid) begin
            for (int lane = 0; lane < BANK_WIDTH; lane++) begin
                f1_preds[lane] =
                    bank_f1_preds[f1_first_bank_q][lane];
                if (f1_second_valid_q)
                    f1_preds[BANK_WIDTH + lane] =
                        bank_f1_preds[~f1_first_bank_q][lane];
            end
        end

        if (f2_valid) begin
            for (int lane = 0; lane < BANK_WIDTH; lane++) begin
                f2_preds[lane] =
                    bank_f2_preds[f2_first_bank_q][lane];
                if (f2_second_valid_q)
                    f2_preds[BANK_WIDTH + lane] =
                        bank_f2_preds[~f2_first_bank_q][lane];
            end
        end

        if (f3_valid) begin
            for (int lane = 0; lane < BANK_WIDTH; lane++) begin
                f3_preds[lane] =
                    bank_f3_preds[f3_first_bank_q][lane];
                if (f3_second_valid_q)
                    f3_preds[BANK_WIDTH + lane] =
                        bank_f3_preds[~f3_first_bank_q][lane];
            end
        end
    end
endmodule
