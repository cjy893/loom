import loom_params::*;
import loom_consts::*;
import loom_types::*;

module ghist_test_top (
    input logic clk,
    input logic rst_n,

    input  logic f1_update_valid,
    input  logic f1_is_br,
    input  logic f1_taken,
    input  logic f1_is_call,
    input  logic f1_is_ret,

    output global_history_t current_ghist,

    input  logic             restore_valid,
    input  logic [63:0]      restore_old_history,
    input  logic             restore_saw_nt,
    input  logic [4:0]       restore_ras_idx
);
    global_history_t restore_packed;
    assign restore_packed.old_history                 = restore_old_history;
    assign restore_packed.current_saw_branch_not_taken = restore_saw_nt;
    assign restore_packed.new_saw_branch_not_taken     = 1'b0;
    assign restore_packed.new_saw_branch_taken         = 1'b0;
    assign restore_packed.ras_idx                      = restore_ras_idx;

    ghist #(.GHIST_LEN(64), .RAS_ENTRIES(32)) dut (
        .clk, .rst_n,
        .f1_update_valid,
        .f1_is_br,
        .f1_taken,
        .f1_is_call,
        .f1_is_ret,
        .current_ghist,
        .restore_valid,
        .restore_ghist(restore_packed)
    );
endmodule
