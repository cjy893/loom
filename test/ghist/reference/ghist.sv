import loom_params::*;
import loom_consts::*;
import loom_types::*;

module ghist #(
    parameter int GHIST_LEN = 64,
    parameter int RAS_ENTRIES = 32
)(
    input logic clk,
    input logic rst_n,

    input logic                           update_valid,
    input logic [31:0]                    update_pc,
    input logic [FETCH_WIDTH-1:0]         update_br_mask,
    input logic                           update_cfi_valid,
    input logic [$clog2(FETCH_WIDTH)-1:0] update_cfi_idx,
    input logic                           update_cfi_taken,
    input logic                           update_cfi_is_br,
    input logic                           update_cfi_is_call,
    input logic                           update_cfi_is_ret,

    output global_history_t current_ghist,

    input logic            restore_valid,
    input global_history_t restore_ghist
);
    localparam int RAS_IDX_SZ_LOCAL =
        (RAS_ENTRIES <= 1) ? 1 : $clog2(RAS_ENTRIES);
    localparam logic [RAS_IDX_SZ_LOCAL-1:0] RAS_LAST_IDX =
        RAS_IDX_SZ_LOCAL'(RAS_ENTRIES - 1);
    localparam int NUM_CHUNKS = ICACHE_BLOCK_BYTES / BANK_BYTES;
    localparam int CHUNK_IDX_SZ = $clog2(NUM_CHUNKS);
    localparam logic [CHUNK_IDX_SZ-1:0] LAST_CHUNK =
        CHUNK_IDX_SZ'(NUM_CHUNKS - 1);

    global_history_t history_q;
    global_history_t history_d;
    logic [GHIST_LEN-1:0] base_history;
    logic [FETCH_WIDTH-1:0] not_taken_mask;
    logic cfi_in_first_bank;
    logic last_bank_in_block;
    logic first_bank_saw_nt;

    assign current_ghist = history_q;

    always_comb begin
        if (history_q.new_saw_branch_taken) begin
            base_history = {history_q.old_history[GHIST_LEN-2:0], 1'b1};
        end else if (history_q.new_saw_branch_not_taken) begin
            base_history = {history_q.old_history[GHIST_LEN-2:0], 1'b0};
        end else begin
            base_history = history_q.old_history;
        end
    end

    always_comb begin
        not_taken_mask = '0;
        for (int lane = 0; lane < FETCH_WIDTH; lane++) begin
            if (update_br_mask[lane] &&
                (!update_cfi_valid || lane <= int'(update_cfi_idx)) &&
                !(update_cfi_valid && update_cfi_is_br &&
                  update_cfi_taken && lane == int'(update_cfi_idx))) begin
                not_taken_mask[lane] = 1'b1;
            end
        end
    end

    always_comb begin
        history_d = history_q;
        history_d.current_saw_branch_not_taken = 1'b0;
        history_d.new_saw_branch_not_taken = 1'b0;
        history_d.new_saw_branch_taken = 1'b0;

        cfi_in_first_bank = update_cfi_valid && update_cfi_taken &&
                            int'(update_cfi_idx) < BANK_WIDTH;
        last_bank_in_block =
            update_pc[$clog2(ICACHE_BLOCK_BYTES)-1:$clog2(BANK_BYTES)] ==
            LAST_CHUNK;
        first_bank_saw_nt =
            |not_taken_mask[BANK_WIDTH-1:0] ||
            history_q.current_saw_branch_not_taken;

        if (cfi_in_first_bank || last_bank_in_block) begin
            history_d.old_history = base_history;
            history_d.new_saw_branch_not_taken = first_bank_saw_nt;
            history_d.new_saw_branch_taken =
                update_cfi_is_br && cfi_in_first_bank;
        end else begin
            history_d.old_history = first_bank_saw_nt
                ? {base_history[GHIST_LEN-2:0], 1'b0}
                : base_history;
            history_d.new_saw_branch_not_taken =
                |not_taken_mask[FETCH_WIDTH-1:BANK_WIDTH];
            history_d.new_saw_branch_taken =
                update_cfi_valid && update_cfi_taken &&
                update_cfi_is_br && !cfi_in_first_bank;
        end

        if (update_cfi_valid && update_cfi_is_call) begin
            history_d.ras_idx = history_q.ras_idx == RAS_LAST_IDX
                ? '0 : history_q.ras_idx + 1'b1;
        end else if (update_cfi_valid && update_cfi_is_ret) begin
            history_d.ras_idx = history_q.ras_idx == '0
                ? RAS_LAST_IDX : history_q.ras_idx - 1'b1;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            history_q <= '0;
        end else if (restore_valid) begin
            history_q <= restore_ghist;
        end else if (update_valid) begin
            history_q <= history_d;
        end
    end
endmodule
