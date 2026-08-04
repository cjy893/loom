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
    localparam int CTR_SZ = 2;
    localparam int IDX_SZ = $clog2(NUM_SETS);
    localparam logic [IDX_SZ-1:0] LAST_IDX = IDX_SZ'(NUM_SETS-1);
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

    logic [IDX_SZ-1:0] s0_idx;

    assign s0_idx = f0_pc[FETCH_ALIGN_BITS+IDX_SZ -1:FETCH_ALIGN_BITS];

    logic s1_valid;
    logic [BANK_WIDTH-1:0] [CTR_SZ-1:0] s1_ram_rdata;
    logic s1_read_bypass_valid;
    logic [BANK_WIDTH-1:0] [CTR_SZ-1:0] s1_read_bypass_data;
    logic s1_update_valid;
    bpd_bank_update_t s1_update;

    logic s2_valid;
    branch_prediction_t [BANK_WIDTH-1:0] s2_preds_in;
    logic [BANK_WIDTH-1:0] [CTR_SZ-1:0] s2_ctrs;

    assign f2_meta = s2_valid ? {{BPD_MAX_META_LENGTH - BANK_WIDTH * CTR_SZ{1'b0}}, s2_ctrs[1], s2_ctrs[0]} : '0;

    logic [IDX_SZ-1:0] upd_idx;
    logic upd_is_commit;

    assign upd_idx = s1_update.pc[FETCH_ALIGN_BITS+IDX_SZ -1:FETCH_ALIGN_BITS];
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
    logic [IDX_SZ-1:0] rst_idx;
    logic ram_write_en;
    logic [IDX_SZ-1:0] ram_write_idx;
    logic [BANK_WIDTH*CTR_SZ-1:0] ram_write_data;

    logic bim_ready;
    assign bim_ready = !doing_reset;
    assign ready = bim_ready;

    assign ram_write_en = doing_reset || upd_write;
    assign ram_write_idx = doing_reset ? rst_idx : upd_idx;
    assign ram_write_data = doing_reset ? {BANK_WIDTH{2'b10}} : upd_new_ctr;

    bpd_sdp_bram #(
        .DEPTH(NUM_SETS),
        .WIDTH(BANK_WIDTH * CTR_SZ)
    ) ram (
        .clk,
        .read_en(f0_valid && !doing_reset),
        .read_addr(s0_idx),
        .read_data(s1_ram_rdata),
        .write_en(ram_write_en),
        .write_addr(ram_write_idx),
        .write_data(ram_write_data)
    );

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            s1_valid <= 1'b0;
            s2_valid <= 1'b0;
            s1_read_bypass_valid <= 1'b0;
            s1_read_bypass_data <= '0;
        end else begin
            s1_valid <= f0_valid && !doing_reset;
            s2_valid <= s1_valid;
            s1_read_bypass_valid <= f0_valid && !doing_reset && upd_write && s0_idx == upd_idx;
            if(f0_valid && !doing_reset && upd_write && s0_idx == upd_idx)
                s1_read_bypass_data <= upd_new_ctr;
        end
    end

    always_ff @(posedge clk) begin
        s2_preds_in <= f1_preds_in;
        s2_ctrs <= s1_read_bypass_valid ? s1_read_bypass_data : s1_ram_rdata;
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
            rst_idx <= '0;
        end else if(doing_reset) begin
            if(rst_idx == LAST_IDX) doing_reset <= 1'b0;
            else rst_idx <= rst_idx + 1'b1;
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
