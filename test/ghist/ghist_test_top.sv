import loom_params::*;
import loom_consts::*;
import loom_types::*;

module ghist_test_top (
    input logic clk,
    input logic rst_n,

    input logic                         update_valid,
    input logic [31:0]                  update_pc,
    input logic [FETCH_WIDTH-1:0]       update_br_mask,
    input logic                         update_cfi_valid,
    input logic [$clog2(FETCH_WIDTH)-1:0] update_cfi_idx,
    input logic                         update_cfi_taken,
    input logic                         update_cfi_is_br,
    input logic                         update_cfi_is_call,
    input logic                         update_cfi_is_ret,

    input logic                         restore_valid,
    input logic [GLOBAL_HISTORY_LENGTH-1:0] restore_old_history,
    input logic                         restore_current_saw_nt,
    input logic                         restore_new_saw_nt,
    input logic                         restore_new_saw_taken,
    input logic [RAS_IDX_SZ-1:0]        restore_ras_idx,

    output logic [GLOBAL_HISTORY_LENGTH-1:0] current_old_history,
    output logic                         current_saw_nt,
    output logic                         current_new_saw_nt,
    output logic                         current_new_saw_taken,
    output logic [RAS_IDX_SZ-1:0]        current_ras_idx
);
    global_history_t current_ghist;
    global_history_t restore_ghist;

    always_comb begin
        restore_ghist = '0;
        restore_ghist.old_history = restore_old_history;
        restore_ghist.current_saw_branch_not_taken = restore_current_saw_nt;
        restore_ghist.new_saw_branch_not_taken = restore_new_saw_nt;
        restore_ghist.new_saw_branch_taken = restore_new_saw_taken;
        restore_ghist.ras_idx = restore_ras_idx;
    end

    assign current_old_history = current_ghist.old_history;
    assign current_saw_nt = current_ghist.current_saw_branch_not_taken;
    assign current_new_saw_nt = current_ghist.new_saw_branch_not_taken;
    assign current_new_saw_taken = current_ghist.new_saw_branch_taken;
    assign current_ras_idx = current_ghist.ras_idx;

    ghist #(
        .GHIST_LEN (GLOBAL_HISTORY_LENGTH),
        .RAS_ENTRIES(RAS_ENTRIES)
    ) dut (
        .clk,
        .rst_n,
        .update_valid,
        .update_pc,
        .update_br_mask,
        .update_cfi_valid,
        .update_cfi_idx,
        .update_cfi_taken,
        .update_cfi_is_br,
        .update_cfi_is_call,
        .update_cfi_is_ret,
        .current_ghist,
        .restore_valid,
        .restore_ghist
    );
endmodule
