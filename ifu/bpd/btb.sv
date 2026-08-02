import loom_params::*;
import loom_consts::*;
import loom_types::*;

module btb #(
    parameter int NUM_SETS = 32,
    parameter int NUM_WAYS = 2,
    parameter int BANK_WIDTH = 2,
    parameter int TAG_SZ = 25
)(
    input logic clk,
    input logic rst_n,

    input logic f0_valid,
    input logic [31:0] f0_pc,

    input branch_prediction_t [BANK_WIDTH-1:0] f2_preds_in,

    output branch_prediction_t [BANK_WIDTH-1:0] f3_preds,
    output logic [BPD_MAX_META_LENGTH-1:0] f3_meta,

    input logic update_valid,
    input bpd_bank_update_t update
);
    localparam SET_SZ = $clog2(NUM_SETS);
    localparam int WAY_IDX_SZ = (NUM_WAYS <= 1) ? 1 : $clog2(NUM_WAYS);
    localparam int META_SZ = BANK_WIDTH * (1 + WAY_IDX_SZ);

    typedef struct packed {
        logic [TAG_SZ-1:0] tag;
        logic [31:0] target;
        logic is_br;
        logic is_b_bl;
        logic is_jirl;
    } btb_entry_t;

    logic [NUM_WAYS-1:0] entry_valid [NUM_SETS-1:0];
    btb_entry_t [NUM_WAYS-1:0] entries [NUM_SETS-1:0];
    logic [WAY_IDX_SZ-1:0] repl_ptr [NUM_SETS-1:0];

    logic [BANK_WIDTH-1:0] [SET_SZ-1:0] s0_set;
    logic [BANK_WIDTH-1:0] [TAG_SZ-1:0] s0_tag;

    for(genvar lane = 0; lane < BANK_WIDTH; lane++) begin: gen_s0
        logic [31:0] lane_pc;
        assign lane_pc = f0_pc + (lane * 4);
        assign s0_set[lane] = lane_pc[SET_SZ+1:2];
        assign s0_tag[lane] = lane_pc[SET_SZ+2 +: TAG_SZ];
    end

    logic s1_valid;
    logic [BANK_WIDTH-1:0] [SET_SZ-1:0] s1_set;
    logic [BANK_WIDTH-1:0] [TAG_SZ-1:0] s1_tag;

    always_ff @(posedge clk) begin
        s1_set <= s0_set;
        s1_tag <= s0_tag;
    end

    logic [BANK_WIDTH-1:0] s1_hit;
    logic [BANK_WIDTH-1:0] [WAY_IDX_SZ-1:0] s1_hit_way;
    btb_entry_t [BANK_WIDTH-1:0] s1_entry;

    for(genvar lane = 0; lane < BANK_WIDTH; lane++) begin
        always_comb begin
            s1_hit[lane] = 1'b0;
            s1_entry[lane] = '0;
            s1_hit_way[lane] = 1'b0;
            for(int w = 0; w < NUM_WAYS; w++) begin
                if(entry_valid[s1_set[lane]][w] && entries[s1_set[lane]][w].tag == s1_tag[lane]) begin
                    s1_hit[lane] = 1'b1;
                    s1_hit_way[lane] = WAY_IDX_SZ'(w);
                    s1_entry[lane] = entries[s1_set[lane]][w];
                    break;
                end
            end
        end
    end

    logic s2_valid;
    logic [BANK_WIDTH-1:0] s2_hit;
    logic [BANK_WIDTH-1:0] [WAY_IDX_SZ-1:0] s2_hit_way;
    btb_entry_t [BANK_WIDTH-1:0] s2_entry;

    logic f3_valid;
    logic [BANK_WIDTH-1:0] f3_hit;
    logic [BANK_WIDTH-1:0] [WAY_IDX_SZ-1:0] f3_hit_way;
    btb_entry_t [BANK_WIDTH-1:0] f3_entry;
    branch_prediction_t [BANK_WIDTH-1:0] f3_preds_in;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            s1_valid <= 1'b0;
            s2_valid <= 1'b0;
            f3_valid <= 1'b0;
        end else begin
            s1_valid <= f0_valid;
            s2_valid <= s1_valid;
            f3_valid <= s2_valid;
        end
    end

    always_ff @(posedge clk) begin
        s2_hit <= s1_hit;
        s2_entry <= s1_entry;
        s2_hit_way <= s1_hit_way;

        f3_hit <= s2_hit;
        f3_entry <= s2_entry;
        f3_preds_in <= f2_preds_in;
        f3_hit_way <= s2_hit_way;
    end

    for(genvar lane = 0; lane < BANK_WIDTH; lane++) begin
        always_comb begin
            f3_preds[lane] = '0;
            if(f3_valid) begin
                f3_preds[lane] = f3_preds_in[lane];
                if(f3_hit[lane]) begin
                    f3_preds[lane].predicted_pc = f3_entry[lane].target;
                    f3_preds[lane].is_br = f3_entry[lane].is_br;
                    f3_preds[lane].is_b_bl = f3_entry[lane].is_b_bl;
                    f3_preds[lane].is_jirl = f3_entry[lane].is_jirl;

                    if(f3_entry[lane].is_b_bl || f3_entry[lane].is_jirl) f3_preds[lane].taken = 1'b1;
                end
            end
        end
    end

    assign f3_meta = f3_valid ? {{BPD_MAX_META_LENGTH - META_SZ{1'b0}}, f3_hit_way, f3_hit} : '0;

    logic [31:0] upd_lane_pc;
    logic [SET_SZ-1:0] upd_set;
    logic [TAG_SZ-1:0] upd_tag;
    logic upd_is_taken_cfi;
    logic upd_is_commit;

    assign upd_is_commit = !update.is_mispredict_update && !update.is_repair_update && !(|update.btb_mispredicts);
    assign upd_lane_pc = update.pc + ({31'b0, update.cfi_idx} << 2);
    assign upd_set = upd_lane_pc[SET_SZ+1:2];
    assign upd_tag = upd_lane_pc[SET_SZ+2 +: TAG_SZ];
    assign upd_is_taken_cfi = update.cfi_valid && (update.cfi_is_b_bl || update.cfi_is_jirl || (update.cfi_is_br && update.cfi_taken));

    logic upd_hit;
    logic [WAY_IDX_SZ-1:0] upd_hit_way;

    logic [BANK_WIDTH-1:0] upd_meta_hit;
    logic [BANK_WIDTH-1:0][WAY_IDX_SZ-1:0] upd_meta_way;
    logic [BANK_WIDTH-1:0][SET_SZ-1:0] invalidate_set;

    assign upd_meta_hit = update.meta[BANK_WIDTH-1:0];
    assign upd_meta_way = update.meta[BANK_WIDTH +: BANK_WIDTH * WAY_IDX_SZ];

    for (genvar lane = 0; lane < BANK_WIDTH; lane++) begin : gen_invalidate_addr
        logic [31:0] lane_pc;

        assign lane_pc = update.pc + lane * 4;
        assign invalidate_set[lane] = lane_pc[SET_SZ+1:2];
    end

    always_comb begin
        upd_hit = 1'b0;
        upd_hit_way = '0;
        for(int w = 0; w < NUM_WAYS; w++) begin
            if(entry_valid[upd_set][w] && entries[upd_set][w].tag == upd_tag) begin
                upd_hit = 1'b1;
                upd_hit_way = WAY_IDX_SZ'(w);
                break;
            end
        end
    end

    logic do_allocate, do_update;
    assign do_allocate = update_valid && upd_is_commit && upd_is_taken_cfi && !upd_hit;
    assign do_update = update_valid && upd_is_commit && upd_is_taken_cfi && upd_hit;

    logic [WAY_IDX_SZ-1:0] alloc_way;
    assign alloc_way = repl_ptr[upd_set];

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            for(int s = 0; s < NUM_SETS; s++) begin
                repl_ptr[s] <= '0;
                entry_valid[s] <= '0;
            end
        end else begin
            if(do_allocate) begin
                entry_valid[upd_set][alloc_way] <= 1'b1;

                if(repl_ptr[upd_set] == WAY_IDX_SZ'(NUM_WAYS - 1)) repl_ptr[upd_set] <= '0;
                else repl_ptr[upd_set] <= repl_ptr[upd_set] + 1'b1;
            end

            for(int lane = 0; lane < BANK_WIDTH; lane++) begin
                if(update_valid && update.btb_mispredicts[lane] && upd_meta_hit[lane]) begin
                    entry_valid[invalidate_set[lane]][upd_meta_way[lane]] <= 1'b0;
                end
            end
        end
    end

    always_ff @(posedge clk) begin
        if(rst_n) begin
            if(do_allocate) begin
                entries[upd_set][alloc_way].tag <= upd_tag;
                entries[upd_set][alloc_way].target <= update.target;
                entries[upd_set][alloc_way].is_br <= update.cfi_is_br;
                entries[upd_set][alloc_way].is_b_bl <= update.cfi_is_b_bl;
                entries[upd_set][alloc_way].is_jirl <= update.cfi_is_jirl;
            end else if(do_update) begin
                entries[upd_set][upd_hit_way].target <= update.target;
                entries[upd_set][upd_hit_way].is_br <= update.cfi_is_br;
                entries[upd_set][upd_hit_way].is_b_bl <= update.cfi_is_b_bl;
                entries[upd_set][upd_hit_way].is_jirl <= update.cfi_is_jirl;
            end
        end
    end
endmodule