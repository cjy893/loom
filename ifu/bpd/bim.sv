import loom_params::*;
import loom_consts::*;
import loom_types::*;

module bim #(
    parameter int NUM_SETS = 2048,
    parameter int NUM_COLS = 8,
    parameter int BANK_WIDTH = 2
)(
    input logic clk,
    input logic rst_n,

    input logic f0_valid,
    input logic [31:0] f0_pc,

    input branch_prediction_t [BANK_WIDTH-1:0] f1_preds_in,

    output branch_prediction_t [BANK_WIDTH-1:0] f2_preds,
    output logic [BPD_MAX_META_LENGTH-1:0] f2_meta,

    output logic ready,

    input logic update_valid,
    input bpd_bank_update_t update
);
    localparam int NUM_SETS_PER_COL = NUM_SETS/NUM_COLS;
    localparam int CTR_SZ = 2;
    localparam int COL_SZ = (NUM_COLS <= 1) ? 1 : $clog2(NUM_COLS);
    localparam int SET_SZ = (NUM_SETS_PER_COL <= 1) ? 1 : $clog2(NUM_SETS_PER_COL);
    localparam logic [COL_SZ-1:0] LAST_COL = COL_SZ'(NUM_COLS-1);
    localparam logic [SET_SZ-1:0] LAST_SET = SET_SZ'(NUM_SETS_PER_COL-1);

    localparam int IDX_SZ = $clog2(NUM_SETS);
    localparam int FETCH_ALIGN_BITS = $clog2(ICACHE_FETCH_BYTES);
    localparam int CFI_IDX_SZ = (BANK_WIDTH <= 1) ? 1 : $clog2(BANK_WIDTH);

    localparam int BIM_META_SZ = BANK_WIDTH * CTR_SZ;
    localparam int NUM_WRBYPASS = 2;
    localparam int WRBYPASS_IDX_SZ = $clog2(NUM_WRBYPASS);

    function automatic logic [CTR_SZ-1:0] bim_write(
        input logic [CTR_SZ-1:0] old_ctr,
        input logic taken
    );
        if(taken) bim_write = (&old_ctr) ? old_ctr : old_ctr + CTR_SZ'(1);
        else bim_write = (~|old_ctr) ? old_ctr : old_ctr - CTR_SZ'(1);
    endfunction

    logic [BANK_WIDTH*CTR_SZ-1:0] ram [NUM_COLS-1:0] [NUM_SETS_PER_COL-1:0];

    logic [IDX_SZ-1:0] s0_idx;
    logic [COL_SZ-1:0] s0_col;
    logic [SET_SZ-1:0] s0_set;

    assign s0_idx = f0_pc[FETCH_ALIGN_BITS+IDX_SZ -1:FETCH_ALIGN_BITS];
    assign s0_col = s0_idx[COL_SZ-1:0];
    assign s0_set = s0_idx[COL_SZ+SET_SZ-1:COL_SZ];

    logic s1_valid;
    logic [BANK_WIDTH-1:0] [CTR_SZ-1:0] s1_rdata;
    logic s1_update_valid;
    bpd_bank_update_t s1_update;

    logic s2_valid;
    branch_prediction_t [BANK_WIDTH-1:0] s2_preds_in;
    logic [BANK_WIDTH-1:0] [CTR_SZ-1:0] s2_ctrs;

    assign f2_meta = s2_valid ? {{BPD_MAX_META_LENGTH - BANK_WIDTH * CTR_SZ{1'b0}}, s2_ctrs[1], s2_ctrs[0]} : '0;

    logic [IDX_SZ-1:0] upd_idx;
    logic [COL_SZ-1:0] upd_col;
    logic [SET_SZ-1:0] upd_set;
    logic upd_is_commit;

    assign upd_idx = s1_update.pc[FETCH_ALIGN_BITS+IDX_SZ -1:FETCH_ALIGN_BITS];
    assign upd_col = upd_idx[COL_SZ-1:0];
    assign upd_set = upd_idx[COL_SZ+SET_SZ-1:COL_SZ];
    assign upd_is_commit = !s1_update.is_mispredict_update && !s1_update.is_repair_update && !(|s1_update.btb_mispredicts);

    logic [BANK_WIDTH-1:0] [CTR_SZ-1:0] upd_old_ctr;
    logic [BANK_WIDTH-1:0] [CTR_SZ-1:0] upd_new_ctr;
    logic [BANK_WIDTH-1:0] upd_lane_taken;
    logic [BANK_WIDTH-1:0][CTR_SZ-1:0] upd_meta_ctr;
    logic [BANK_WIDTH-1:0] upd_wmask;
    logic upd_write;

    logic [NUM_WRBYPASS-1:0] wrbypass_valid;
    logic [IDX_SZ-1:0] wrbypass_idx [NUM_WRBYPASS-1:0];
    logic [BANK_WIDTH-1:0][CTR_SZ-1:0] wrbypass_data [NUM_WRBYPASS-1:0];
    logic [NUM_WRBYPASS-1:0] wrbypass_hits;
    logic wrbypass_hit;
    logic [WRBYPASS_IDX_SZ-1:0] wrbypass_hit_idx;
    logic [WRBYPASS_IDX_SZ-1:0] wrbypass_enq_idx;

    logic doing_reset;
    logic [COL_SZ-1:0] rst_col;
    logic [SET_SZ-1:0] rst_set;

    logic bim_ready;
    assign bim_ready = !doing_reset;
    assign ready = bim_ready;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            s1_valid <= 1'b0;
            s2_valid <= 1'b0;
        end else begin
            s1_valid <= f0_valid && !doing_reset;
            s2_valid <= s1_valid;
        end
    end

    always_ff @(posedge clk) begin
        if(f0_valid && !doing_reset) begin
            if(upd_write && s0_idx == upd_idx) s1_rdata <= upd_new_ctr;
            else s1_rdata <= ram[s0_col][s0_set];
        end

        s2_preds_in <= f1_preds_in;
        s2_ctrs <= s1_rdata;
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            s1_update_valid <= 1'b0;
            s1_update <= '0;
        end else begin
            s1_update_valid <= update_valid && !doing_reset;
            if(update_valid && !doing_reset) s1_update <= update;
        end
    end


    for(genvar lane = 0; lane < BANK_WIDTH; lane++) begin
        always_comb begin
            f2_preds[lane] = '0;
            if(s2_valid) begin
                f2_preds[lane] = s2_preds_in[lane];
                if(s2_preds_in[lane].is_br) f2_preds[lane].taken = s2_ctrs[lane][1];
            end
        end
    end

    for(genvar lane = 0; lane < BANK_WIDTH; lane++) begin: gen_update
        assign upd_wmask[lane] = (s1_update.cfi_valid && s1_update.cfi_idx == CFI_IDX_SZ'(lane)) || s1_update.br_mask[lane];
        assign upd_lane_taken[lane] = s1_update.cfi_valid && (s1_update.cfi_idx == CFI_IDX_SZ'(lane)) &&
                                      ((s1_update.cfi_is_br && s1_update.br_mask[lane] && s1_update.cfi_taken) || s1_update.cfi_is_b_bl);
        assign upd_new_ctr[lane] = upd_wmask[lane] ? bim_write(upd_old_ctr[lane], upd_lane_taken[lane]) : upd_old_ctr[lane];
    end

    assign upd_write = s1_update_valid && upd_is_commit && |upd_wmask;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            doing_reset <= 1'b1;
            rst_col <= '0;
            rst_set <= '0;
        end else if(doing_reset) begin
            ram[rst_col][rst_set] <= {BANK_WIDTH{2'b10}};

            if(rst_set == LAST_SET) begin
                rst_set <= '0;
                if(rst_col == LAST_COL) doing_reset <= 1'b0;
                else rst_col <= rst_col + 1'b1;
            end else begin
                rst_set <= rst_set + 1'b1;
            end
        end
        else if(upd_write) begin
            ram[upd_col][upd_set] <= upd_new_ctr;
        end
    end

    for(genvar entry = 0; entry < NUM_WRBYPASS; entry++) begin
        assign wrbypass_hits[entry] = wrbypass_valid[entry] && wrbypass_idx[entry] == upd_idx;
    end

    always_comb begin
        wrbypass_hit = 1'b0;
        wrbypass_hit_idx = '0;
        for(int entry = 0; entry < NUM_WRBYPASS; entry++) begin
            if(wrbypass_hits[entry] && !wrbypass_hit) begin
                wrbypass_hit = 1'b1;
                wrbypass_hit_idx = WRBYPASS_IDX_SZ'(entry);
            end
        end
    end

    assign upd_meta_ctr = s1_update.meta[BIM_META_SZ-1:0];
    assign upd_old_ctr = wrbypass_hit ? wrbypass_data[wrbypass_hit_idx] : upd_meta_ctr;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            wrbypass_valid <= '0;
            wrbypass_enq_idx <= '0;
            for(int entry = 0; entry < NUM_WRBYPASS; entry++) begin
                wrbypass_idx[entry] <= '0;
                wrbypass_data[entry] <= '0;
            end
        end else if(upd_write) begin
            if(wrbypass_hit) begin
                wrbypass_data[wrbypass_hit_idx] <= upd_new_ctr;
            end else begin
                wrbypass_valid[wrbypass_enq_idx] <= 1'b1;
                wrbypass_idx[wrbypass_enq_idx] <= upd_idx;
                wrbypass_data[wrbypass_enq_idx] <= upd_new_ctr;
                wrbypass_enq_idx <= wrbypass_enq_idx + 1'b1;
            end
        end
    end
endmodule