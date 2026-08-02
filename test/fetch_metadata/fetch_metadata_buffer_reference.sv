module fetcher_buffer #(
    parameter int FETCH_WIDTH = 4,
    parameter int CORE_WIDTH = 2,
    parameter int NUM_ENTRIES = 8,
    parameter int FTQ_IDX_SZ = 4
)(
    input  logic                                      clk,
    input  logic                                      rst_n,
    input  logic                                      flush,

    input  logic [FETCH_WIDTH-1:0]                    enq_valid,
    input  logic [FETCH_WIDTH-1:0][31:0]              enq_pcs,
    input  logic [FETCH_WIDTH-1:0][31:0]              enq_insts,
    input  logic [FETCH_WIDTH-1:0][FTQ_IDX_SZ-1:0]    enq_ftq_idx,
    input  logic [FETCH_WIDTH-1:0]                    enq_predicted_taken,
    input  logic [FETCH_WIDTH-1:0][31:0]              enq_predicted_npc,
    output logic                                      enq_ready,
    input  logic [FETCH_WIDTH-1:0]                    enq_xcpt_valid,
    input  logic [FETCH_WIDTH-1:0][5:0]               enq_xcpt_code,

    output logic [CORE_WIDTH-1:0]                     deq_valid,
    output logic [CORE_WIDTH-1:0][31:0]               deq_pcs,
    output logic [CORE_WIDTH-1:0][31:0]               deq_insts,
    output logic [CORE_WIDTH-1:0][FTQ_IDX_SZ-1:0]     deq_ftq_idx,
    output logic [CORE_WIDTH-1:0]                     deq_predicted_taken,
    output logic [CORE_WIDTH-1:0][31:0]               deq_predicted_npc,
    output logic [CORE_WIDTH-1:0]                     deq_xcpt_valid,
    output logic [CORE_WIDTH-1:0][5:0]                deq_xcpt_code,
    input  logic                                      deq_ready
);
    localparam int PTR_WIDTH =
        (NUM_ENTRIES > 1) ? $clog2(NUM_ENTRIES) : 1;
    localparam int COUNT_WIDTH = $clog2(NUM_ENTRIES + 1);

    logic [NUM_ENTRIES-1:0][31:0] pc_mem;
    logic [NUM_ENTRIES-1:0][31:0] inst_mem;
    logic [NUM_ENTRIES-1:0][FTQ_IDX_SZ-1:0] ftq_idx_mem;
    logic [NUM_ENTRIES-1:0] taken_mem;
    logic [NUM_ENTRIES-1:0][31:0] predicted_npc_mem;
    logic [NUM_ENTRIES-1:0] xcpt_valid_mem;
    logic [NUM_ENTRIES-1:0][5:0] xcpt_code_mem;
    logic [PTR_WIDTH-1:0] head_q;
    logic [PTR_WIDTH-1:0] tail_q;
    logic [COUNT_WIDTH-1:0] count_q;

    integer enq_count;
    integer deq_count;
    integer free_slots;
    logic enq_fire;

    function automatic logic [PTR_WIDTH-1:0] add_ptr(
        input logic [PTR_WIDTH-1:0] ptr,
        input integer amount
    );
        integer result;
        result = int'(ptr) + amount;
        while (result >= NUM_ENTRIES)
            result -= NUM_ENTRIES;
        return PTR_WIDTH'(result);
    endfunction

    always_comb begin
        enq_count = 0;
        for (int lane = 0; lane < FETCH_WIDTH; lane++)
            if (enq_valid[lane])
                enq_count++;

        deq_count = 0;
        if (!flush && deq_ready) begin
            if (int'(count_q) < CORE_WIDTH)
                deq_count = int'(count_q);
            else
                deq_count = CORE_WIDTH;
        end

        free_slots = NUM_ENTRIES - int'(count_q);
        enq_ready = !flush && (enq_count <= free_slots);
        enq_fire = enq_ready && (|enq_valid);

        deq_valid = '0;
        deq_pcs = '0;
        deq_insts = '0;
        deq_ftq_idx = '0;
        deq_predicted_taken = '0;
        deq_predicted_npc = '0;
        deq_xcpt_valid = '0;
        deq_xcpt_code = '0;
        for (int lane = 0; lane < CORE_WIDTH; lane++) begin
            if (lane < int'(count_q)) begin
                deq_valid[lane] = 1'b1;
                deq_pcs[lane] =
                    pc_mem[add_ptr(head_q, lane)];
                deq_insts[lane] =
                    inst_mem[add_ptr(head_q, lane)];
                deq_ftq_idx[lane] =
                    ftq_idx_mem[add_ptr(head_q, lane)];
                deq_predicted_taken[lane] =
                    taken_mem[add_ptr(head_q, lane)];
                deq_predicted_npc[lane] =
                    predicted_npc_mem[add_ptr(head_q, lane)];
                deq_xcpt_valid[lane] =
                    xcpt_valid_mem[add_ptr(head_q, lane)];
                deq_xcpt_code[lane] =
                    xcpt_code_mem[add_ptr(head_q, lane)];
            end
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            head_q <= '0;
            tail_q <= '0;
            count_q <= '0;
        end else if (flush) begin
            head_q <= '0;
            tail_q <= '0;
            count_q <= '0;
        end else begin
            integer packed_offset;

            packed_offset = 0;
            if (enq_fire) begin
                for (int lane = 0; lane < FETCH_WIDTH; lane++) begin
                    if (enq_valid[lane]) begin
                        pc_mem[add_ptr(tail_q, packed_offset)] <=
                            enq_pcs[lane];
                        inst_mem[add_ptr(tail_q, packed_offset)] <=
                            enq_insts[lane];
                        ftq_idx_mem[
                            add_ptr(tail_q, packed_offset)
                        ] <= enq_ftq_idx[lane];
                        taken_mem[
                            add_ptr(tail_q, packed_offset)
                        ] <= enq_predicted_taken[lane];
                        predicted_npc_mem[
                            add_ptr(tail_q, packed_offset)
                        ] <= enq_predicted_npc[lane];
                        xcpt_valid_mem[
                            add_ptr(tail_q, packed_offset)
                        ] <= enq_xcpt_valid[lane];
                        xcpt_code_mem[
                            add_ptr(tail_q, packed_offset)
                        ] <= enq_xcpt_code[lane];
                        packed_offset++;
                    end
                end
                tail_q <= add_ptr(tail_q, enq_count);
            end

            if (deq_count != 0)
                head_q <= add_ptr(head_q, deq_count);

            count_q <= COUNT_WIDTH'(
                int'(count_q) +
                (enq_fire ? enq_count : 0) -
                deq_count
            );
        end
    end
endmodule
