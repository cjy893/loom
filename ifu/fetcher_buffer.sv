import loom_params::*;
import loom_consts::*;
import loom_types::*;

module fetcher_buffer #(
    parameter int FETCH_WIDTH = 4,
    parameter int CORE_WIDTH = 2,
    parameter int NUM_ENTRIES = 16,
    parameter int FTQ_IDX_SZ = FTQ_ADDR_SZ
)(
    input logic clk,
    input logic rst_n,

    input logic flush,

    input logic [FETCH_WIDTH-1:0] enq_valid,
    input logic [FETCH_WIDTH-1:0] [31:0] enq_pcs,
    input logic [FETCH_WIDTH-1:0] [31:0] enq_insts,
    output logic enq_ready,

    input  logic [FETCH_WIDTH-1:0][FTQ_IDX_SZ-1:0] enq_ftq_idx,
    input  logic [FETCH_WIDTH-1:0] enq_predicted_taken,
    output logic [CORE_WIDTH-1:0][FTQ_IDX_SZ-1:0] deq_ftq_idx,
    output logic [CORE_WIDTH-1:0] deq_predicted_taken,
    input  logic [FETCH_WIDTH-1:0][31:0] enq_predicted_npc,
    output logic [CORE_WIDTH-1:0][31:0]  deq_predicted_npc,

    input  logic [FETCH_WIDTH-1:0]      enq_xcpt_valid,
    input  logic [FETCH_WIDTH-1:0][5:0] enq_xcpt_code,
    output logic [CORE_WIDTH-1:0]       deq_xcpt_valid,
    output logic [CORE_WIDTH-1:0][5:0]  deq_xcpt_code,

    output logic [CORE_WIDTH-1:0] deq_valid,
    output logic [CORE_WIDTH-1:0] [31:0] deq_pcs,
    output logic [CORE_WIDTH-1:0] [31:0] deq_insts,
    input logic deq_ready
);
    localparam int PTR_WIDTH = (NUM_ENTRIES > 1) ? $clog2(NUM_ENTRIES) : 1;
    localparam int COUNT_WIDTH = $clog2(NUM_ENTRIES+1);
    localparam int ENQ_COUNT_WIDTH = $clog2(FETCH_WIDTH+1);
    localparam int DEQ_COUNT_WIDTH = $clog2(CORE_WIDTH+1);
    localparam int CALC_WIDTH = COUNT_WIDTH + 1;

    logic [NUM_ENTRIES-1:0] [31:0] inst_mem;
    logic [NUM_ENTRIES-1:0] [31:0] pc_mem;
    logic [NUM_ENTRIES-1:0][FTQ_IDX_SZ-1:0] ftq_idx_mem;
    logic [NUM_ENTRIES-1:0]                 predicted_taken_mem;

    logic [FETCH_WIDTH-1:0][FTQ_IDX_SZ-1:0] packed_enq_ftq_idx;
    logic [FETCH_WIDTH-1:0]                 packed_enq_predicted_taken;
    logic [NUM_ENTRIES-1:0][31:0] predicted_npc_mem;
    logic [FETCH_WIDTH-1:0][31:0] packed_enq_predicted_npc;

    logic [NUM_ENTRIES-1:0]      xcpt_valid_mem;
    logic [NUM_ENTRIES-1:0][5:0] xcpt_code_mem;

    logic [FETCH_WIDTH-1:0]      packed_enq_xcpt_valid;
    logic [FETCH_WIDTH-1:0][5:0] packed_enq_xcpt_code;

    logic [PTR_WIDTH-1:0] head_q, tail_q;
    logic [COUNT_WIDTH-1:0] count_q;

    logic [FETCH_WIDTH-1:0] [31:0] packed_enq_insts;
    logic [FETCH_WIDTH-1:0] [31:0] packed_enq_pcs;

    logic [ENQ_COUNT_WIDTH-1:0] enq_count;
    logic [DEQ_COUNT_WIDTH-1:0] deq_count;

    logic [CALC_WIDTH-1:0] free_slots;
    logic [COUNT_WIDTH-1:0] count_next;
    logic enq_fire;

    function automatic logic [PTR_WIDTH-1:0] ptr_add(
        input logic [PTR_WIDTH-1:0] ptr,
        input integer amount
    );
        integer result;

        begin
            result = int'(ptr) + amount;
            if(result >= NUM_ENTRIES) result = result - NUM_ENTRIES;

            ptr_add = PTR_WIDTH'(result);
        end
    endfunction

    always_comb begin
        integer packed_idx;

        packed_enq_insts = '0;
        packed_enq_pcs = '0;
        enq_count = '0;
        packed_idx = 0;
        packed_enq_xcpt_valid = '0;
        packed_enq_xcpt_code = '0;
        packed_enq_ftq_idx = '0;
        packed_enq_predicted_taken = '0;
        packed_enq_predicted_npc = '0;

        for(int lane = 0; lane < FETCH_WIDTH; lane++) begin
            if(enq_valid[lane]) begin
                packed_enq_insts[packed_idx] = enq_insts[lane];
                packed_enq_pcs[packed_idx] = enq_pcs[lane];
                packed_enq_xcpt_valid[packed_idx] = enq_xcpt_valid[lane];
                packed_enq_xcpt_code[packed_idx] = enq_xcpt_code[lane];
                packed_enq_ftq_idx[packed_idx] = enq_ftq_idx[lane];
                packed_enq_predicted_taken[packed_idx] = enq_predicted_taken[lane];
                packed_enq_predicted_npc[packed_idx] = enq_predicted_npc[lane];
                packed_idx++;
            end
        end

        enq_count = ENQ_COUNT_WIDTH'(packed_idx);
    end

    always_comb begin
        deq_count = '0;

        if(!flush && deq_ready) begin
            if(int'(count_q) >= CORE_WIDTH) deq_count = DEQ_COUNT_WIDTH'(CORE_WIDTH);
            else deq_count = DEQ_COUNT_WIDTH'(count_q);
        end
    end

    always_comb begin
        free_slots = CALC_WIDTH'(NUM_ENTRIES) - CALC_WIDTH'(count_q);
        enq_ready = !flush && (CALC_WIDTH'(enq_count) <= free_slots);
        enq_fire = enq_ready && (|enq_valid);
    end

    always_comb begin
        deq_valid = '0;
        deq_insts = '0;
        deq_pcs = '0;
        deq_xcpt_valid = '0;
        deq_xcpt_code = '0;
        deq_ftq_idx = '0;
        deq_predicted_taken = '0;
        deq_predicted_npc = '0;

        for(int lane = 0; lane < CORE_WIDTH; lane++) begin
            if(lane < int'(count_q)) begin
                deq_valid[lane] = 1'b1;
                deq_insts[lane] = inst_mem[ptr_add(head_q, lane)];
                deq_pcs[lane] = pc_mem[ptr_add(head_q, lane)];
                deq_xcpt_valid[lane] = xcpt_valid_mem[ptr_add(head_q, lane)];
                deq_xcpt_code[lane] = xcpt_code_mem[ptr_add(head_q, lane)];
                deq_ftq_idx[lane] = ftq_idx_mem[ptr_add(head_q, lane)];
                deq_predicted_taken[lane] = predicted_taken_mem[ptr_add(head_q, lane)];
                deq_predicted_npc[lane] = predicted_npc_mem[ptr_add(head_q, lane)];
            end
        end
    end

    always_comb begin
        count_next = COUNT_WIDTH'(count_q) + (enq_fire ? COUNT_WIDTH'(enq_count) : COUNT_WIDTH'(0)) - COUNT_WIDTH'(deq_count);
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            head_q <= '0;
            tail_q <= '0;
            count_q <= '0;
        end else if(flush) begin
            head_q <= '0;
            tail_q <= '0;
            count_q <= '0;
        end else begin
            if(enq_fire) begin
                for(int entry = 0; entry < FETCH_WIDTH; entry++) begin
                    if(entry < int'(enq_count)) begin
                        inst_mem[ptr_add(tail_q, entry)] <= packed_enq_insts[entry];
                        pc_mem[ptr_add(tail_q, entry)] <= packed_enq_pcs[entry];
                        xcpt_valid_mem[ptr_add(tail_q, entry)] <= packed_enq_xcpt_valid[entry];
                        xcpt_code_mem[ptr_add(tail_q, entry)] <= packed_enq_xcpt_code[entry];
                        ftq_idx_mem[ptr_add(tail_q, entry)] <= packed_enq_ftq_idx[entry];
                        predicted_taken_mem[ptr_add(tail_q, entry)] <= packed_enq_predicted_taken[entry];
                        predicted_npc_mem[ptr_add(tail_q, entry)] <= packed_enq_predicted_npc[entry];
                    end
                end

                tail_q <= ptr_add(tail_q, int'(enq_count));
            end

            if(deq_count != 0) head_q <= ptr_add(head_q, int'(deq_count));
            count_q <= count_next;
        end
    end
endmodule
