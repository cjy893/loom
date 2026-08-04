import loom_params::*;
import loom_consts::*;
import loom_types::*;

module gshare #(
    parameter int NUM_SETS = 1024,
    parameter int BANK_WIDTH = 2,
    parameter int HISTORY_BITS = 10
)(
    input logic clk,
    input logic rst_n,

    input logic f0_valid,
    input logic [31:0] f0_pc,
    input logic [GLOBAL_HISTORY_LENGTH-1:0] f0_ghist,

    output logic [BANK_WIDTH-1:0] f2_taken,
    output logic [BANK_WIDTH-1:0] f2_provider_valid,
    output logic [BPD_MAX_META_LENGTH-1:0] f2_meta,
    output logic ready,

    input logic update_valid,
    input bpd_bank_update_t update
);
    localparam int CTR_BITS = 2;
    localparam int IDX_BITS = $clog2(NUM_SETS);
    localparam int FETCH_ALIGN_BITS = $clog2(ICACHE_FETCH_BYTES);
    localparam int META_BITS = BANK_WIDTH * CTR_BITS;
    localparam int CFI_IDX_BITS = (BANK_WIDTH <= 1) ? 1 : $clog2(BANK_WIDTH);
    localparam int NUM_WRBYPASS = 2;
    localparam int WRBYPASS_IDX_BITS = $clog2(NUM_WRBYPASS);
    localparam logic [IDX_BITS-1:0] LAST_IDX = IDX_BITS'(NUM_SETS - 1);

    // Keep one bank's counters in a flat word for the shared BRAM wrapper.
    typedef logic [META_BITS-1:0] counter_row_t;

    function automatic logic [IDX_BITS-1:0] make_index(
        input logic [31:0] pc,
        input logic [GLOBAL_HISTORY_LENGTH-1:0] ghist
    );
        logic [IDX_BITS-1:0] pc_index;
        logic [IDX_BITS-1:0] history_index;
        pc_index = pc[FETCH_ALIGN_BITS + IDX_BITS - 1:FETCH_ALIGN_BITS];
        history_index = '0;
        for(int bit_idx = 0; bit_idx < IDX_BITS; bit_idx++) begin
            if(bit_idx < HISTORY_BITS)
                history_index[bit_idx] = ghist[bit_idx];
        end
        return pc_index ^ history_index;
    endfunction

    function automatic logic [CTR_BITS-1:0] update_counter(
        input logic [CTR_BITS-1:0] old_counter,
        input logic taken
    );
        if(taken)
            return (&old_counter) ? old_counter : old_counter + CTR_BITS'(1);
        return (~|old_counter) ? old_counter : old_counter - CTR_BITS'(1);
    endfunction

    (* ram_style = "distributed" *)
    logic [BANK_WIDTH-1:0] provider_ram [0:NUM_SETS-1];

    logic doing_reset;
    logic [IDX_BITS-1:0] reset_index;

    logic [IDX_BITS-1:0] s0_index;
    logic s1_valid;
    counter_row_t s1_counter_data;
    logic [BANK_WIDTH-1:0] s1_provider_data;
    logic s1_read_bypass_valid;
    counter_row_t s1_read_bypass_counters;
    logic [BANK_WIDTH-1:0] s1_read_bypass_providers;
    logic s2_valid;
    counter_row_t s2_counters;
    logic [BANK_WIDTH-1:0] s2_providers;

    logic s1_update_valid;
    bpd_bank_update_t s1_update;
    logic [IDX_BITS-1:0] update_index;
    logic update_is_commit;
    logic [BANK_WIDTH-1:0] update_write_mask;
    logic [BANK_WIDTH-1:0] update_lane_taken;
    counter_row_t update_meta_counters;
    counter_row_t update_old_counters;
    counter_row_t update_new_counters;
    logic [BANK_WIDTH-1:0] update_new_providers;
    logic update_write;

    logic [NUM_WRBYPASS-1:0] write_bypass_valid;
    logic [IDX_BITS-1:0] write_bypass_index [NUM_WRBYPASS-1:0];
    counter_row_t write_bypass_counters [NUM_WRBYPASS-1:0];
    logic [BANK_WIDTH-1:0] write_bypass_providers [NUM_WRBYPASS-1:0];
    logic [NUM_WRBYPASS-1:0] write_bypass_hits;
    logic write_bypass_hit;
    logic [WRBYPASS_IDX_BITS-1:0] write_bypass_hit_index;
    logic [WRBYPASS_IDX_BITS-1:0] write_bypass_enqueue_index;
    logic counter_write_en;
    logic [IDX_BITS-1:0] counter_write_index;
    counter_row_t counter_write_data;

    assign ready = !doing_reset;
    assign s0_index = make_index(f0_pc, f0_ghist);
    assign update_index = make_index(s1_update.pc, s1_update.ghist);
    assign update_is_commit = !s1_update.is_mispredict_update &&
                              !s1_update.is_repair_update &&
                              !(|s1_update.btb_mispredicts);
    assign update_write_mask = s1_update.br_mask;
    assign update_write = s1_update_valid && update_is_commit &&
                          (|update_write_mask);
    assign update_meta_counters = s1_update.meta[META_BITS-1:0];
    assign update_old_counters = write_bypass_hit
                               ? write_bypass_counters[write_bypass_hit_index]
                               : update_meta_counters;
    assign update_new_providers = write_bypass_hit
                                ? write_bypass_providers[write_bypass_hit_index] |
                                  update_write_mask
                                : provider_ram[update_index] |
                                  update_write_mask;
    assign counter_write_en = doing_reset || update_write;
    assign counter_write_index = doing_reset ? reset_index : update_index;
    assign counter_write_data = doing_reset
                              ? {BANK_WIDTH{2'b10}}
                              : update_new_counters;

    bpd_sdp_bram #(
        .DEPTH(NUM_SETS),
        .WIDTH(META_BITS)
    ) counter_ram (
        .clk,
        .read_en(f0_valid && !doing_reset),
        .read_addr(s0_index),
        .read_data(s1_counter_data),
        .write_en(counter_write_en),
        .write_addr(counter_write_index),
        .write_data(counter_write_data)
    );

    for(genvar lane = 0; lane < BANK_WIDTH; lane++) begin: gen_update
        assign update_lane_taken[lane] = s1_update.cfi_valid &&
            s1_update.cfi_is_br &&
            s1_update.cfi_idx == CFI_IDX_BITS'(lane) &&
            s1_update.cfi_taken;
        assign update_new_counters[lane*CTR_BITS +: CTR_BITS] =
            update_write_mask[lane]
                ? update_counter(
                    update_old_counters[lane*CTR_BITS +: CTR_BITS],
                    update_lane_taken[lane]
                )
                : update_old_counters[lane*CTR_BITS +: CTR_BITS];
    end

    always_comb begin
        f2_taken = '0;
        f2_provider_valid = '0;
        f2_meta = '0;
        if(s2_valid) begin
            for(int lane = 0; lane < BANK_WIDTH; lane++) begin
                f2_taken[lane] =
                    s2_counters[lane*CTR_BITS + CTR_BITS - 1];
                f2_provider_valid[lane] = s2_providers[lane];
                f2_meta[lane*CTR_BITS +: CTR_BITS] =
                    s2_counters[lane*CTR_BITS +: CTR_BITS];
            end
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            doing_reset <= 1'b1;
            reset_index <= '0;
        end else if(doing_reset) begin
            if(reset_index == LAST_IDX)
                doing_reset <= 1'b0;
            else
                reset_index <= reset_index + IDX_BITS'(1);
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            s1_valid <= 1'b0;
            s2_valid <= 1'b0;
            s1_read_bypass_valid <= 1'b0;
            s1_read_bypass_counters <= '0;
            s1_read_bypass_providers <= '0;
        end else begin
            s1_valid <= f0_valid && !doing_reset;
            s2_valid <= s1_valid;
            s1_read_bypass_valid <= f0_valid && !doing_reset &&
                                    update_write && s0_index == update_index;
            if(f0_valid && !doing_reset && update_write &&
               s0_index == update_index) begin
                s1_read_bypass_counters <= update_new_counters;
                s1_read_bypass_providers <= update_new_providers;
            end
        end
    end

    always_ff @(posedge clk) begin
        if(f0_valid && !doing_reset)
            s1_provider_data <= provider_ram[s0_index];
        s2_counters <= s1_read_bypass_valid
                     ? s1_read_bypass_counters : s1_counter_data;
        s2_providers <= s1_read_bypass_valid
                      ? s1_read_bypass_providers : s1_provider_data;
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            s1_update_valid <= 1'b0;
            s1_update <= '0;
        end else begin
            s1_update_valid <= update_valid && !doing_reset;
            if(update_valid && !doing_reset)
                s1_update <= update;
        end
    end

    always_ff @(posedge clk) begin
        if(doing_reset)
            provider_ram[reset_index] <= '0;
        else if(update_write)
            provider_ram[update_index] <= update_new_providers;
    end

    for(genvar entry = 0; entry < NUM_WRBYPASS; entry++) begin: gen_bypass_hit
        assign write_bypass_hits[entry] = write_bypass_valid[entry] &&
                                          write_bypass_index[entry] == update_index;
    end

    always_comb begin
        write_bypass_hit = 1'b0;
        write_bypass_hit_index = '0;
        for(int entry = 0; entry < NUM_WRBYPASS; entry++) begin
            if(write_bypass_hits[entry] && !write_bypass_hit) begin
                write_bypass_hit = 1'b1;
                write_bypass_hit_index = WRBYPASS_IDX_BITS'(entry);
            end
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            write_bypass_valid <= '0;
            write_bypass_enqueue_index <= '0;
            for(int entry = 0; entry < NUM_WRBYPASS; entry++) begin
                write_bypass_index[entry] <= '0;
                write_bypass_counters[entry] <= '0;
                write_bypass_providers[entry] <= '0;
            end
        end else if(update_write) begin
            if(write_bypass_hit) begin
                write_bypass_counters[write_bypass_hit_index] <= update_new_counters;
                write_bypass_providers[write_bypass_hit_index] <= update_new_providers;
            end else begin
                write_bypass_valid[write_bypass_enqueue_index] <= 1'b1;
                write_bypass_index[write_bypass_enqueue_index] <= update_index;
                write_bypass_counters[write_bypass_enqueue_index] <= update_new_counters;
                write_bypass_providers[write_bypass_enqueue_index] <= update_new_providers;
                write_bypass_enqueue_index <= write_bypass_enqueue_index +
                                              WRBYPASS_IDX_BITS'(1);
            end
        end
    end
endmodule
