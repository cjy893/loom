import loom_params::*;
import loom_consts::*;
import loom_types::*;

module ghist #(
    parameter int GHIST_LEN = 64,
    parameter int RAS_ENTRIES = 32
)(
    input logic clk,
    input logic rst_n,

    input logic update_valid,
    input logic [31:0] update_pc,
    input logic [FETCH_WIDTH-1:0] update_br_mask,

    input logic update_cfi_valid,
    input logic [$clog2(FETCH_WIDTH)-1:0] update_cfi_idx,
    input logic update_cfi_taken,
    input logic update_cfi_is_br,
    input logic update_cfi_is_call,
    input logic update_cfi_is_ret,

    output global_history_t current_ghist,

    input logic restore_valid,
    input global_history_t restore_ghist
);
    global_history_t history_q;
    global_history_t history_d;

    assign current_ghist = history_q;

    always_comb begin
        history_d = update_global_history(
            history_q,
            update_br_mask,
            update_cfi_valid,
            update_cfi_idx,
            update_cfi_taken,
            update_cfi_is_br,
            update_cfi_is_call,
            update_cfi_is_ret,
            update_pc
        );
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) history_q <= '0;
        else if (restore_valid) history_q <= restore_ghist;
        else if (update_valid) history_q <= history_d;
    end
endmodule