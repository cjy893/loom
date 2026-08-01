module icache #(
    parameter int ADDR_WIDTH = 32,
    parameter int FETCH_WIDTH = 4,
    parameter int NUM_SETS = 64,
    parameter int NUM_WAYS = 2,
    parameter int LINE_BYTES = 32,
    parameter int MEM_DATA_WIDTH = 32,
    parameter int MEM_LEN_WIDTH = 4
)(
    input  logic clk,
    input  logic rst_n,

    input  logic                  req_valid,
    output logic                  req_ready,
    input  logic [ADDR_WIDTH-1:0] req_paddr,
    input  logic                  req_cacheable,

    output logic                        resp_valid,
    input  logic                        resp_ready,
    output logic [FETCH_WIDTH-1:0][31:0] resp_insts,

    input  logic                  maint_valid,
    output logic                  maint_ready,
    input  logic [1:0]            maint_mode,
    input  logic                  maint_all,
    input  logic [ADDR_WIDTH-1:0] maint_vaddr,
    input  logic [ADDR_WIDTH-1:0] maint_paddr,
    output logic                  maint_done,

    output logic                     mem_req_valid,
    input  logic                     mem_req_ready,
    output logic [ADDR_WIDTH-1:0]    mem_req_addr,
    output logic [MEM_LEN_WIDTH-1:0] mem_req_len,

    input  logic                      mem_resp_valid,
    output logic                      mem_resp_ready,
    input  logic [MEM_DATA_WIDTH-1:0] mem_resp_data,
    input  logic                      mem_resp_last
);
    localparam int MEM_BYTES = MEM_DATA_WIDTH / 8;
    localparam int FETCH_BYTES = FETCH_WIDTH * 4;
    localparam int LINE_BEATS = LINE_BYTES / MEM_BYTES;
    localparam int SET_BITS = (NUM_SETS > 1) ? $clog2(NUM_SETS) : 1;
    localparam int WAY_BITS = (NUM_WAYS > 1) ? $clog2(NUM_WAYS) : 1;
    localparam int BEAT_BITS = (LINE_BEATS > 1) ? $clog2(LINE_BEATS) : 1;
    localparam int LINE_OFFSET_BITS = $clog2(LINE_BYTES);
    localparam int FETCH_OFFSET_BITS = $clog2(FETCH_BYTES);
    localparam int TAG_BITS = ADDR_WIDTH - LINE_OFFSET_BITS - SET_BITS;

    typedef enum logic [2:0] {
        S_IDLE,
        S_LOOKUP,
        S_MEM_REQ,
        S_MEM_RESP,
        S_RESPONSE
    } state_t;

    state_t state_q;

    logic [TAG_BITS-1:0] tag_array [NUM_SETS][NUM_WAYS];
    logic [MEM_DATA_WIDTH-1:0] data_array [NUM_SETS][NUM_WAYS][LINE_BEATS];
    logic valid_array [NUM_SETS][NUM_WAYS];
    logic [WAY_BITS-1:0] replace_way_q [NUM_SETS];

    logic [ADDR_WIDTH-1:0] req_paddr_q;
    logic req_cacheable_q;
    logic [FETCH_WIDTH-1:0][31:0] resp_insts_q;

    logic [SET_BITS-1:0] refill_set_q;
    logic [TAG_BITS-1:0] refill_tag_q;
    logic [WAY_BITS-1:0] refill_way_q;
    logic [BEAT_BITS-1:0] refill_beat_q;
    logic maint_done_q;
    logic lookup_hit;
    logic [WAY_BITS-1:0] lookup_hit_way;
    logic [WAY_BITS-1:0] lookup_victim_way;
    logic [SET_BITS-1:0] lookup_set;
    logic [TAG_BITS-1:0] lookup_tag;

    function automatic logic [ADDR_WIDTH-1:0] align_line(
        input logic [ADDR_WIDTH-1:0] addr
    );
        align_line = (addr >> LINE_OFFSET_BITS) << LINE_OFFSET_BITS;
    endfunction

    function automatic logic [ADDR_WIDTH-1:0] align_fetch(
        input logic [ADDR_WIDTH-1:0] addr
    );
        align_fetch = (addr >> FETCH_OFFSET_BITS) << FETCH_OFFSET_BITS;
    endfunction

    function automatic logic [SET_BITS-1:0] address_set(
        input logic [ADDR_WIDTH-1:0] addr
    );
        address_set = SET_BITS'(addr >> LINE_OFFSET_BITS);
    endfunction

    function automatic logic [TAG_BITS-1:0] address_tag(
        input logic [ADDR_WIDTH-1:0] addr
    );
        address_tag = TAG_BITS'(addr >> (LINE_OFFSET_BITS + SET_BITS));
    endfunction

    initial begin
        assert (ADDR_WIDTH > LINE_OFFSET_BITS + SET_BITS);
        assert (MEM_DATA_WIDTH == 32);
        assert (NUM_SETS > 0 && (NUM_SETS & (NUM_SETS - 1)) == 0);
        assert (NUM_WAYS > 0 && (NUM_WAYS & (NUM_WAYS - 1)) == 0);
        assert (LINE_BYTES > 0 && (LINE_BYTES & (LINE_BYTES - 1)) == 0);
        assert (FETCH_BYTES <= LINE_BYTES);
        assert ((LINE_BYTES % FETCH_BYTES) == 0);
        assert ((LINE_BYTES % MEM_BYTES) == 0);
        assert (LINE_BEATS <= (1 << MEM_LEN_WIDTH));
    end

    always_comb begin
        logic victim_found;

        lookup_set = address_set(req_paddr_q);
        lookup_tag = address_tag(req_paddr_q);
        lookup_hit = 1'b0;
        lookup_hit_way = '0;

        for (int way = 0; way < NUM_WAYS; way++) begin
            if (valid_array[lookup_set][way] &&
                tag_array[lookup_set][way] == lookup_tag) begin
                lookup_hit = 1'b1;
                lookup_hit_way = WAY_BITS'(way);
            end
        end

        lookup_victim_way = replace_way_q[lookup_set];
        victim_found = 1'b0;
        for (int way = 0; way < NUM_WAYS; way++) begin
            if (!victim_found && !valid_array[lookup_set][way]) begin
                lookup_victim_way = WAY_BITS'(way);
                victim_found = 1'b1;
            end
        end

    end

    always_comb begin
        req_ready = rst_n && state_q == S_IDLE && !maint_valid;

        resp_valid = state_q == S_RESPONSE;
        resp_insts = resp_insts_q;

        maint_ready = rst_n && state_q == S_IDLE;
        maint_done = maint_done_q;

        mem_req_valid = state_q == S_MEM_REQ;
        mem_req_addr = req_cacheable_q
            ? align_line(req_paddr_q)
            : align_fetch(req_paddr_q);
        mem_req_len = req_cacheable_q
            ? MEM_LEN_WIDTH'(LINE_BEATS - 1)
            : MEM_LEN_WIDTH'(FETCH_WIDTH - 1);

        mem_resp_ready = state_q == S_MEM_RESP;
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state_q <= S_IDLE;
            req_paddr_q <= '0;
            req_cacheable_q <= 1'b0;
            resp_insts_q <= '0;
            refill_set_q <= '0;
            refill_tag_q <= '0;
            refill_way_q <= '0;
            refill_beat_q <= '0;
            maint_done_q <= 1'b0;

            for (int set = 0; set < NUM_SETS; set++) begin
                replace_way_q[set] <= '0;
                for (int way = 0; way < NUM_WAYS; way++) begin
                    valid_array[set][way] <= 1'b0;
                end
            end
        end else begin
            maint_done_q <= 1'b0;

            case (state_q)
                S_IDLE: begin
                    if (maint_valid && maint_ready) begin
                        assert (maint_mode != 2'd3);

                        if (maint_all) begin
                            for (int set = 0; set < NUM_SETS; set++) begin
                                for (int way = 0; way < NUM_WAYS; way++) begin
                                    valid_array[set][way] <= 1'b0;
                                end
                            end
                        end else if (maint_mode != 2'd2) begin
                            valid_array[address_set(maint_vaddr)]
                                       [WAY_BITS'(maint_vaddr)] <= 1'b0;
                        end else begin
                            for (int way = 0; way < NUM_WAYS; way++) begin
                                if (valid_array[address_set(maint_paddr)][way] &&
                                    tag_array[address_set(maint_paddr)][way] ==
                                        address_tag(maint_paddr)) begin
                                    valid_array[address_set(maint_paddr)][way] <=
                                        1'b0;
                                end
                            end
                        end

                        maint_done_q <= 1'b1;
                    end else if (req_valid && req_ready) begin
                        req_paddr_q <= req_paddr;
                        req_cacheable_q <= req_cacheable;
                        state_q <= S_LOOKUP;
                    end
                end

                S_LOOKUP: begin
                    if (req_cacheable_q && lookup_hit) begin
                        for (int lane = 0; lane < FETCH_WIDTH; lane++) begin
                            resp_insts_q[lane] <=
                                data_array[lookup_set][lookup_hit_way]
                                    [((req_paddr_q & (LINE_BYTES - 1)) >> 2) + lane];
                        end
                        state_q <= S_RESPONSE;
                    end else begin
                        refill_set_q <= lookup_set;
                        refill_tag_q <= lookup_tag;
                        refill_way_q <= lookup_victim_way;
                        state_q <= S_MEM_REQ;
                    end
                end

                S_MEM_REQ: begin
                    if (mem_req_valid && mem_req_ready) begin
                        refill_beat_q <= '0;
                        state_q <= S_MEM_RESP;
                    end
                end

                S_MEM_RESP: begin
                    if (mem_resp_valid && mem_resp_ready) begin
                        if (req_cacheable_q) begin
                            data_array[refill_set_q][refill_way_q]
                                      [refill_beat_q] <= mem_resp_data;

                            for (int lane = 0; lane < FETCH_WIDTH; lane++) begin
                                if (refill_beat_q == BEAT_BITS'(
                                    ((req_paddr_q & (LINE_BYTES - 1)) >> 2) + lane)) begin
                                    resp_insts_q[lane] <= mem_resp_data;
                                end
                            end
                        end else begin
                            for (int lane = 0; lane < FETCH_WIDTH; lane++) begin
                                if (refill_beat_q == BEAT_BITS'(lane))
                                    resp_insts_q[lane] <= mem_resp_data;
                            end
                        end

                        if (mem_resp_last) begin
                            assert (refill_beat_q == BEAT_BITS'(
                                req_cacheable_q ? LINE_BEATS - 1 : FETCH_WIDTH - 1));

                            if (req_cacheable_q) begin
                                tag_array[refill_set_q][refill_way_q] <= refill_tag_q;
                                valid_array[refill_set_q][refill_way_q] <= 1'b1;
                                replace_way_q[refill_set_q] <=
                                    refill_way_q == WAY_BITS'(NUM_WAYS - 1)
                                        ? '0
                                        : refill_way_q + 1'b1;
                            end

                            state_q <= S_RESPONSE;
                        end else begin
                            assert (refill_beat_q < BEAT_BITS'(
                                req_cacheable_q ? LINE_BEATS - 1 : FETCH_WIDTH - 1));
                            refill_beat_q <= refill_beat_q + 1'b1;
                        end
                    end
                end

                S_RESPONSE: begin
                    if (resp_valid && resp_ready)
                        state_q <= S_IDLE;
                end

                default: state_q <= S_IDLE;
            endcase
        end
    end
endmodule
