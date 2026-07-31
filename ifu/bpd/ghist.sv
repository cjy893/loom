import loom_params::*;
import loom_consts::*;
import loom_types::*;

module ghist #(
    parameter int GHIST_LEN = 64,
    parameter int RAS_ENTRIES = 32
)(
    input logic clk,
    input logic rst_n,

    input logic f1_update_valid,
    input logic f1_is_br,
    input logic f1_taken,
    input logic f1_is_call,
    input logic f1_is_ret,

    output global_history_t current_ghist,

    input logic restore_valid,
    input global_history_t restore_ghist
);
    localparam int RAS_IDX_SZ = (RAS_ENTRIES <= 1) ? 1 : $clog2(RAS_ENTRIES);
    localparam logic [RAS_IDX_SZ-1:0] RAS_LAST_IDX = RAS_IDX_SZ'(RAS_ENTRIES-1);

    logic [GHIST_LEN-1:0] hist;
    logic [RAS_IDX_SZ-1:0] ras_idx;
    logic saw_nt;

    always_comb begin
        current_ghist = '0;

        current_ghist.old_history = hist;
        current_ghist.current_saw_branch_not_taken = saw_nt;
        current_ghist.ras_idx = ras_idx;
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            hist <= '0;
            ras_idx <= '0;
            saw_nt <= 1'b0;
        end else if(restore_valid) begin
            hist <= restore_ghist.old_history;
            ras_idx <= restore_ghist.ras_idx;
            saw_nt <= restore_ghist.current_saw_branch_not_taken;
        end else if(f1_update_valid) begin
            if(f1_is_br) begin
                if(f1_taken) begin
                    hist <= {hist[GHIST_LEN-2:0], 1'b1};
                    saw_nt <= 1'b0;
                end else begin
                    hist <= hist << 1;
                    saw_nt <= 1'b1;
                end
            end

            if(f1_is_call) ras_idx <= (ras_idx == RAS_LAST_IDX) ? '0 : ras_idx + 1'b1;
            if(f1_is_ret) ras_idx <= (ras_idx == '0) ? RAS_LAST_IDX : ras_idx - 1'b1;
        end
    end
endmodule