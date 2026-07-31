import loom_params::*;
import loom_consts::*;
import loom_types::*;

module ubtb #(
    parameter int NUM_ENTRIES = 16,
    parameter int BANK_WIDTH = 2,
    parameter int TAG_SZ = 30
)(
    input logic clk,
    input logic rst_n,

    input logic f0_valid,
    input logic [31:0] f0_pc,

    output branch_prediction_t [BANK_WIDTH-1:0] f1_preds,

    input logic update_valid,
    input bpd_bank_update_t update
);
    localparam int ENTRY_IDX_SIZE = (NUM_ENTRIES <= 1) ? 1 : $clog2(NUM_ENTRIES);

    typedef struct packed {
        logic [TAG_SZ-1:0] tag;
        logic [31:0] target;
        logic is_br;
        logic is_b_bl;
        logic is_jirl;
    } ubtb_entry_t;

    logic [NUM_ENTRIES-1:0] entry_valid;
    ubtb_entry_t [NUM_ENTRIES-1:0] entries;
    logic [ENTRY_IDX_SIZE-1:0] repl_ptr;

    logic f1_valid;
    logic [31:0] f1_pc;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            f1_valid <= 1'b0;
        end
        else f1_valid <=f0_valid;
    end

    always_ff @(posedge clk) begin
        f1_pc <= f0_pc;
    end

    for(genvar lane = 0; lane < BANK_WIDTH; lane++) begin
        logic [31:0] lane_pc;
        logic [TAG_SZ-1:0] lane_tag;
        logic [NUM_ENTRIES-1:0] hit_vec;
        logic [ENTRY_IDX_SIZE-1:0] hit_idx;
        logic hit;

        assign lane_pc = f1_pc + (lane *4);
        assign lane_tag = lane_pc[31:2];

        for(genvar e = 0; e < NUM_ENTRIES; e++) begin
            assign hit_vec[e] = entry_valid[e] && (entries[e].tag == lane_tag);
        end

        always_comb begin
            hit = 1'b0;
            hit_idx = '0;
            for(int e = 0; e < NUM_ENTRIES; e++) begin
                if(hit_vec[e] && !hit) begin
                    hit = 1'b1;
                    hit_idx = ENTRY_IDX_SIZE'(e);
                end
            end
        end

        always_comb begin
            f1_preds[lane] = '0;
            if(f1_valid && hit) begin
                f1_preds[lane].taken = 1'b1;
                f1_preds[lane].is_br = entries[hit_idx].is_br;
                f1_preds[lane].is_b_bl = entries[hit_idx].is_b_bl;
                f1_preds[lane].is_jirl = entries[hit_idx].is_jirl;
                f1_preds[lane].predicted_pc = entries[hit_idx].target;
            end
        end
    end

    logic [31:0] update_lane_pc;
    logic [TAG_SZ-1:0] update_tag;
    logic [NUM_ENTRIES-1:0] update_hit_vec;
    logic update_hit;
    logic [ENTRY_IDX_SIZE-1:0] update_hit_idx;

    assign update_lane_pc = update.pc + ({31'b0, update.cfi_idx} << 2);
    assign update_tag = update_lane_pc[31:2];

    for(genvar e = 0; e < NUM_ENTRIES; e++) begin
        assign update_hit_vec[e] = entry_valid[e] && (entries[e].tag  == update_tag);
    end

    always_comb begin
        update_hit = 1'b0;
        update_hit_idx = '0;
        for(int e = 0; e < NUM_ENTRIES; e++) begin
            if(update_hit_vec[e] && !update_hit) begin
                update_hit = 1'b1;
                update_hit_idx = ENTRY_IDX_SIZE'(e);
            end
        end
    end

    logic update_is_taken_cfi;
    assign update_is_taken_cfi = update.cfi_valid && (update.cfi_is_b_bl || update.cfi_is_jirl || (update.cfi_is_br && update.cfi_taken));

    logic do_allocate;
    logic do_update_target;
    assign do_allocate = update_valid && update_is_taken_cfi && !update_hit;
    assign do_update_target = update_valid && update_is_taken_cfi && update_hit;

    logic found_empty;
    logic [ENTRY_IDX_SIZE-1:0] alloc_idx;

    always_comb begin
        found_empty = 1'b0;
        alloc_idx = repl_ptr;

        for(int e = 0; e < NUM_ENTRIES; e++) begin
            if(!entry_valid[e] && !found_empty) begin
                found_empty = 1'b1;
                alloc_idx = ENTRY_IDX_SIZE'(e);
            end
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            entry_valid <= '0;
            repl_ptr <= '0;
        end else if (do_allocate) begin
            entry_valid[alloc_idx] <= 1'b1;
            if(!found_empty) begin
                repl_ptr <= repl_ptr + 1'b1;
            end
        end
    end

    always_ff @(posedge clk) begin
        if(rst_n) begin
            if(do_allocate) begin
                entries[alloc_idx].tag <= update_tag;
                entries[alloc_idx].target <= update.target;
                entries[alloc_idx].is_br <= update.cfi_is_br;
                entries[alloc_idx].is_b_bl <= update.cfi_is_b_bl;
                entries[alloc_idx].is_jirl <= update.cfi_is_jirl;
            end else if(do_update_target) begin
                entries[update_hit_idx].target <= update.target;
                entries[update_hit_idx].is_br <= update.cfi_is_br;
                entries[update_hit_idx].is_b_bl <= update.cfi_is_b_bl;
                entries[update_hit_idx].is_jirl <= update.cfi_is_jirl;
            end
        end
    end
endmodule