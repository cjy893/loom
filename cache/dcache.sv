module dcache #(
    parameter int ADDR_WIDTH = 32,
    parameter int TAG_WIDTH = 8,
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
    input  logic                  req_is_store,
    input  logic [31:0]           req_wdata,
    input  logic [3:0]            req_wmask,
    input  logic [TAG_WIDTH-1:0]  req_tag,

    output logic                 resp_valid,
    input  logic                 resp_ready,
    output logic                 resp_is_store,
    output logic [31:0]          resp_rdata,
    output logic [TAG_WIDTH-1:0] resp_tag,

    input  logic                  maint_valid,
    output logic                  maint_ready,
    input  logic [1:0]            maint_op,
    input  logic [1:0]            maint_mode,
    input  logic                  maint_all,
    input  logic [ADDR_WIDTH-1:0] maint_vaddr,
    input  logic [ADDR_WIDTH-1:0] maint_paddr,
    output logic                  maint_done,

    output logic                     mem_read_req_valid,
    input  logic                     mem_read_req_ready,
    output logic [ADDR_WIDTH-1:0]    mem_read_req_addr,
    output logic [MEM_LEN_WIDTH-1:0] mem_read_req_len,

    input  logic                      mem_read_resp_valid,
    output logic                      mem_read_resp_ready,
    input  logic [MEM_DATA_WIDTH-1:0] mem_read_resp_data,
    input  logic                      mem_read_resp_last,

    output logic                     mem_write_req_valid,
    input  logic                     mem_write_req_ready,
    output logic [ADDR_WIDTH-1:0]    mem_write_req_addr,
    output logic [MEM_LEN_WIDTH-1:0] mem_write_req_len,

    output logic                        mem_write_data_valid,
    input  logic                        mem_write_data_ready,
    output logic [MEM_DATA_WIDTH-1:0]   mem_write_data,
    output logic [MEM_DATA_WIDTH/8-1:0] mem_write_mask,
    output logic                        mem_write_data_last,

    input  logic mem_write_resp_valid,
    output logic mem_write_resp_ready
);
    localparam int MEM_BYTES = MEM_DATA_WIDTH / 8;
    localparam int LINE_BEATS = LINE_BYTES / MEM_BYTES;
    localparam int SET_BITS = (NUM_SETS > 1) ? $clog2(NUM_SETS) : 1;
    localparam int WAY_BITS = (NUM_WAYS > 1) ? $clog2(NUM_WAYS) : 1;
    localparam int BEAT_BITS = (LINE_BEATS > 1) ? $clog2(LINE_BEATS) : 1;
    localparam int LINE_OFFSET_BITS = $clog2(LINE_BYTES);
    localparam int TAG_BITS = ADDR_WIDTH - LINE_OFFSET_BITS - SET_BITS;
    localparam int DATA_DEPTH = NUM_SETS * LINE_BEATS;
    localparam int DATA_ADDR_BITS = (DATA_DEPTH > 1) ? $clog2(DATA_DEPTH) : 1;

    localparam logic [1:0] MAINT_INVALIDATE = 2'd0;
    localparam logic [1:0] MAINT_CLEAN = 2'd1;
    localparam logic [1:0] MAINT_FLUSH = 2'd2;

    typedef enum logic [3:0] {
        S_IDLE,
        S_LOOKUP,
        S_WB_REQ,
        S_WB_DATA,
        S_WB_RESP,
        S_REFILL_REQ,
        S_REFILL_RESP,
        S_UC_READ_REQ,
        S_UC_READ_RESP,
        S_UC_WRITE_REQ,
        S_UC_WRITE_DATA,
        S_UC_WRITE_RESP,
        S_RESPONSE,
        S_MAINT_LOOKUP,
        S_MAINT_SCAN
    } state_t;

    typedef enum logic [1:0] {
        WB_TO_REFILL,
        WB_TO_MAINT_ADDR,
        WB_TO_MAINT_SCAN
    } wb_after_t;

    state_t state_q;
    wb_after_t wb_after_q;

    logic [TAG_BITS-1:0] tag_array [NUM_SETS][NUM_WAYS];
    logic [31:0] data_read_q [NUM_WAYS];

    logic data_read_en;
    logic [DATA_ADDR_BITS-1:0] data_read_addr;

    logic data_write_en;
    logic [WAY_BITS-1:0] data_write_way;
    logic [DATA_ADDR_BITS-1:0] data_write_addr;
    logic [31:0] data_write_data;

    logic valid_array [NUM_SETS][NUM_WAYS];
    logic dirty_array [NUM_SETS][NUM_WAYS];
    logic [WAY_BITS-1:0] replace_way_q [NUM_SETS];

    logic [ADDR_WIDTH-1:0] req_paddr_q;
    logic req_cacheable_q;
    logic req_is_store_q;
    logic [31:0] req_wdata_q;
    logic [3:0] req_wmask_q;
    logic [TAG_WIDTH-1:0] req_tag_q;

    logic resp_is_store_q;
    logic [31:0] resp_rdata_q;
    logic [TAG_WIDTH-1:0] resp_tag_q;

    logic [SET_BITS-1:0] refill_set_q;
    logic [TAG_BITS-1:0] refill_tag_q;
    logic [WAY_BITS-1:0] refill_way_q;
    logic [BEAT_BITS-1:0] refill_beat_q;

    logic [SET_BITS-1:0] wb_set_q;
    logic [WAY_BITS-1:0] wb_way_q;
    logic [BEAT_BITS-1:0] wb_beat_q;

    logic [1:0] maint_op_q;
    logic [1:0] maint_mode_q;
    logic maint_all_q;
    logic [ADDR_WIDTH-1:0] maint_vaddr_q;
    logic [ADDR_WIDTH-1:0] maint_paddr_q;
    logic [SET_BITS-1:0] maint_scan_set_q;
    logic [WAY_BITS-1:0] maint_scan_way_q;
    logic maint_done_q;

    logic lookup_hit;
    logic [WAY_BITS-1:0] lookup_hit_way;
    logic [WAY_BITS-1:0] lookup_victim_way;
    logic [SET_BITS-1:0] lookup_set;
    logic [TAG_BITS-1:0] lookup_tag;
    logic [BEAT_BITS-1:0] lookup_word;
    logic lookup_resp_valid;

    logic maint_hit;
    logic [WAY_BITS-1:0] maint_hit_way;
    logic [SET_BITS-1:0] maint_set;
    logic [TAG_BITS-1:0] maint_tag;
    function automatic logic [DATA_ADDR_BITS-1:0] data_address(
        input logic [SET_BITS-1:0] set_idx,
        input logic [BEAT_BITS-1:0] beat_idx
    );
        data_address = DATA_ADDR_BITS'(set_idx * LINE_BEATS + beat_idx);
    endfunction

    function automatic logic [ADDR_WIDTH-1:0] align_line(
        input logic [ADDR_WIDTH-1:0] addr
    );
        align_line = (addr >> LINE_OFFSET_BITS) << LINE_OFFSET_BITS;
    endfunction

    function automatic logic [ADDR_WIDTH-1:0] align_word(
        input logic [ADDR_WIDTH-1:0] addr
    );
        align_word = {addr[ADDR_WIDTH-1:2], 2'b00};
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

    function automatic logic [BEAT_BITS-1:0] address_word(
        input logic [ADDR_WIDTH-1:0] addr
    );
        address_word = BEAT_BITS'((addr >> 2) & (LINE_BEATS - 1));
    endfunction

    function automatic logic [ADDR_WIDTH-1:0] compose_line_address(
        input logic [TAG_BITS-1:0] tag,
        input logic [SET_BITS-1:0] set_idx
    );
        compose_line_address = (ADDR_WIDTH'(tag) << (LINE_OFFSET_BITS + SET_BITS)) | (ADDR_WIDTH'(set_idx) << LINE_OFFSET_BITS);
    endfunction

    function automatic logic [31:0] merge_word(
        input logic [31:0] old_word,
        input logic [31:0] new_word,
        input logic [3:0] byte_mask
    );
        logic [31:0] result;
        result = old_word;
        for (int byte_index = 0; byte_index < 4; byte_index++) begin
            if (byte_mask[byte_index]) begin
                result[byte_index * 8 +: 8] = new_word[byte_index * 8 +: 8];
            end
        end
        return result;
    endfunction

    initial begin
        assert (MEM_DATA_WIDTH == 32);
        assert (NUM_SETS > 0 && (NUM_SETS & (NUM_SETS - 1)) == 0);
        assert (NUM_WAYS > 0 && (NUM_WAYS & (NUM_WAYS - 1)) == 0);
        assert (LINE_BYTES > 0 && (LINE_BYTES & (LINE_BYTES - 1)) == 0);
        assert ((LINE_BYTES % MEM_BYTES) == 0);
        assert (LINE_BEATS <= (1 << MEM_LEN_WIDTH));
        assert (ADDR_WIDTH > LINE_OFFSET_BITS + SET_BITS);
    end

    assign lookup_resp_valid =
        state_q == S_LOOKUP &&
        req_cacheable_q &&
        lookup_hit;

    always_comb begin
        logic victim_found;

        lookup_set = address_set(req_paddr_q);
        lookup_tag = address_tag(req_paddr_q);
        lookup_word = address_word(req_paddr_q);
        lookup_hit = 1'b0;
        lookup_hit_way = '0;

        for (int way = 0; way < NUM_WAYS; way++) begin
            if (valid_array[lookup_set][way] && tag_array[lookup_set][way] == lookup_tag) begin
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

        maint_hit = 1'b0;
        maint_hit_way = '0;

        if (maint_mode_q != 2'd2) begin
            maint_set = address_set(maint_vaddr_q);
            maint_tag = '0;
            maint_hit_way = WAY_BITS'(maint_vaddr_q);
            maint_hit = valid_array[maint_set][maint_hit_way];
        end else begin
            maint_set = address_set(maint_paddr_q);
            maint_tag = address_tag(maint_paddr_q);
            for (int way = 0; way < NUM_WAYS; way++) begin
                if (valid_array[maint_set][way] &&
                    tag_array[maint_set][way] == maint_tag) begin
                    maint_hit = 1'b1;
                    maint_hit_way = WAY_BITS'(way);
                end
            end
        end
    end

    always_comb begin
        req_ready = rst_n && state_q == S_IDLE && !maint_valid;
        resp_valid = lookup_resp_valid || state_q == S_RESPONSE;
        resp_is_store = resp_is_store_q;
        resp_rdata = resp_rdata_q;
        resp_tag = resp_tag_q;

        if (lookup_resp_valid) begin
            resp_is_store = req_is_store_q;
            resp_rdata = req_is_store_q ? '0 : data_read_q[lookup_hit_way];
            resp_tag = req_tag_q;
        end

        maint_ready = rst_n && state_q == S_IDLE;
        maint_done = maint_done_q;

        mem_read_req_valid = state_q == S_REFILL_REQ || state_q == S_UC_READ_REQ;
        mem_read_req_addr = state_q == S_UC_READ_REQ ? align_word(req_paddr_q) : align_line(req_paddr_q);
        mem_read_req_len = state_q == S_UC_READ_REQ ? '0 : MEM_LEN_WIDTH'(LINE_BEATS - 1);
        mem_read_resp_ready = state_q == S_REFILL_RESP || state_q == S_UC_READ_RESP;

        mem_write_req_valid = state_q == S_WB_REQ || state_q == S_UC_WRITE_REQ;
        mem_write_req_addr = state_q == S_UC_WRITE_REQ ? align_word(req_paddr_q) : compose_line_address(tag_array[wb_set_q][wb_way_q], wb_set_q);
        mem_write_req_len = state_q == S_UC_WRITE_REQ ? '0 : MEM_LEN_WIDTH'(LINE_BEATS - 1);

        mem_write_data_valid = state_q == S_WB_DATA || state_q == S_UC_WRITE_DATA;
        mem_write_data = state_q == S_UC_WRITE_DATA ? req_wdata_q : data_read_q[wb_way_q];
        mem_write_mask = state_q == S_UC_WRITE_DATA ? req_wmask_q : '1;
        mem_write_data_last = state_q == S_UC_WRITE_DATA || wb_beat_q == BEAT_BITS'(LINE_BEATS - 1);
        mem_write_resp_ready = state_q == S_WB_RESP || state_q == S_UC_WRITE_RESP;
    end

    always_comb begin
        data_read_en = 1'b0;
        data_read_addr = '0;

        if (req_valid && req_ready && req_cacheable) begin
            data_read_en = 1'b1;
            data_read_addr = data_address(address_set(req_paddr),address_word(req_paddr));
        end

        else if (state_q == S_WB_REQ && mem_write_req_valid && mem_write_req_ready) begin
            data_read_en = 1'b1;
            data_read_addr = data_address(wb_set_q, '0);
        end

        // 当前beat被接受时预读下一beat
        else if (state_q == S_WB_DATA && mem_write_data_valid && mem_write_data_ready && !mem_write_data_last) begin
            data_read_en = 1'b1;
            data_read_addr = data_address(wb_set_q, wb_beat_q + 1'b1);
        end
    end

    always_comb begin
        data_write_en = 1'b0;
        data_write_way = '0;
        data_write_addr = '0;
        data_write_data = '0;

        if (state_q == S_LOOKUP && req_cacheable_q && lookup_hit && req_is_store_q) begin
            data_write_en = 1'b1;
            data_write_way = lookup_hit_way;
            data_write_addr = data_address(lookup_set, lookup_word);
            data_write_data = merge_word(
                data_read_q[lookup_hit_way],
                req_wdata_q,
                req_wmask_q
            );
        end

        // Line refill，包括store miss写分配
        else if (state_q == S_REFILL_RESP && mem_read_resp_valid && mem_read_resp_ready) begin
            data_write_en = 1'b1;
            data_write_way = refill_way_q;
            data_write_addr = data_address(refill_set_q, refill_beat_q);

            if (req_is_store_q && refill_beat_q == lookup_word)
                data_write_data = merge_word(
                    mem_read_resp_data,
                    req_wdata_q,
                    req_wmask_q
                );
            else
                data_write_data = mem_read_resp_data;
        end
    end

    for (genvar way = 0; way < NUM_WAYS; way++) begin : gen_data_way
        (* ram_style = "block" *)
        logic [31:0] mem [0:DATA_DEPTH-1];

        always_ff @(posedge clk) begin
            if (data_read_en)
                data_read_q[way] <= mem[data_read_addr];

            if (data_write_en &&
                data_write_way == WAY_BITS'(way))
                mem[data_write_addr] <= data_write_data;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state_q <= S_IDLE;
            wb_after_q <= WB_TO_REFILL;
            req_paddr_q <= '0;
            req_cacheable_q <= 1'b0;
            req_is_store_q <= 1'b0;
            req_wdata_q <= '0;
            req_wmask_q <= '0;
            req_tag_q <= '0;
            resp_is_store_q <= 1'b0;
            resp_rdata_q <= '0;
            resp_tag_q <= '0;
            refill_set_q <= '0;
            refill_tag_q <= '0;
            refill_way_q <= '0;
            refill_beat_q <= '0;
            wb_set_q <= '0;
            wb_way_q <= '0;
            wb_beat_q <= '0;
            maint_op_q <= '0;
            maint_mode_q <= '0;
            maint_all_q <= 1'b0;
            maint_vaddr_q <= '0;
            maint_paddr_q <= '0;
            maint_scan_set_q <= '0;
            maint_scan_way_q <= '0;
            maint_done_q <= 1'b0;

            for (int set_index = 0; set_index < NUM_SETS; set_index++) begin
                replace_way_q[set_index] <= '0;
                for (int way = 0; way < NUM_WAYS; way++) begin
                    valid_array[set_index][way] <= 1'b0;
                    dirty_array[set_index][way] <= 1'b0;
                end
            end
        end else begin
            maint_done_q <= 1'b0;

            case (state_q)
                S_IDLE: begin
                    if (maint_valid && maint_ready) begin
                        assert (maint_op != 2'd3);
                        assert (maint_mode != 2'd3);
                        maint_op_q <= maint_op;
                        maint_mode_q <= maint_mode;
                        maint_all_q <= maint_all;
                        maint_vaddr_q <= maint_vaddr;
                        maint_paddr_q <= maint_paddr;
                        if (maint_all) begin
                            maint_scan_set_q <= '0;
                            maint_scan_way_q <= '0;
                            state_q <= S_MAINT_SCAN;
                        end else begin
                            state_q <= S_MAINT_LOOKUP;
                        end
                    end else if (req_valid && req_ready) begin
                        assert (!req_is_store || req_wmask != 4'b0000);
                        req_paddr_q <= req_paddr;
                        req_cacheable_q <= req_cacheable;
                        req_is_store_q <= req_is_store;
                        req_wdata_q <= req_wdata;
                        req_wmask_q <= req_wmask;
                        req_tag_q <= req_tag;
                        state_q <= S_LOOKUP;
                    end
                end

                S_LOOKUP: begin
                    if (!req_cacheable_q) begin
                        state_q <= req_is_store_q ? S_UC_WRITE_REQ : S_UC_READ_REQ;
                    end else if (lookup_hit) begin
                        resp_is_store_q <= req_is_store_q;
                        resp_rdata_q <= req_is_store_q ? '0 : data_read_q[lookup_hit_way];
                        resp_tag_q <= req_tag_q;

                        if (req_is_store_q) begin
                            dirty_array[lookup_set][lookup_hit_way] <= 1'b1;
                        end
                        state_q <= resp_ready ? S_IDLE : S_RESPONSE;
                    end else begin
                        refill_set_q <= lookup_set;
                        refill_tag_q <= lookup_tag;
                        refill_way_q <= lookup_victim_way;

                        if (valid_array[lookup_set][lookup_victim_way] &&
                            dirty_array[lookup_set][lookup_victim_way]) begin
                            wb_set_q <= lookup_set;
                            wb_way_q <= lookup_victim_way;
                            wb_beat_q <= '0;
                            wb_after_q <= WB_TO_REFILL;
                            state_q <= S_WB_REQ;
                        end else begin
                            state_q <= S_REFILL_REQ;
                        end
                    end
                end

                S_WB_REQ: begin
                    if (mem_write_req_valid && mem_write_req_ready) begin
                        wb_beat_q <= '0;
                        state_q <= S_WB_DATA;
                    end
                end

                S_WB_DATA: begin
                    if (mem_write_data_valid && mem_write_data_ready) begin
                        if (mem_write_data_last) begin
                            state_q <= S_WB_RESP;
                        end else begin
                            wb_beat_q <= wb_beat_q + 1'b1;
                        end
                    end
                end

                S_WB_RESP: begin
                    if (mem_write_resp_valid && mem_write_resp_ready) begin
                        dirty_array[wb_set_q][wb_way_q] <= 1'b0;

                        case (wb_after_q)
                            WB_TO_REFILL: begin
                                state_q <= S_REFILL_REQ;
                            end

                            WB_TO_MAINT_ADDR: begin
                                if (maint_op_q == MAINT_FLUSH) begin
                                    valid_array[wb_set_q][wb_way_q] <= 1'b0;
                                end
                                maint_done_q <= 1'b1;
                                state_q <= S_IDLE;
                            end

                            default: begin
                                if (maint_op_q == MAINT_FLUSH) begin
                                    valid_array[wb_set_q][wb_way_q] <= 1'b0;
                                end

                                if (maint_scan_way_q == WAY_BITS'(NUM_WAYS - 1)) begin
                                    maint_scan_way_q <= '0;
                                    if (maint_scan_set_q == SET_BITS'(NUM_SETS - 1)) begin
                                        maint_done_q <= 1'b1;
                                        state_q <= S_IDLE;
                                    end else begin
                                        maint_scan_set_q <= maint_scan_set_q + 1'b1;
                                        state_q <= S_MAINT_SCAN;
                                    end
                                end else begin
                                    maint_scan_way_q <= maint_scan_way_q + 1'b1;
                                    state_q <= S_MAINT_SCAN;
                                end
                            end
                        endcase
                    end
                end

                S_REFILL_REQ: begin
                    if (mem_read_req_valid && mem_read_req_ready) begin
                        refill_beat_q <= '0;
                        state_q <= S_REFILL_RESP;
                    end
                end

                S_REFILL_RESP: begin
                    if (mem_read_resp_valid && mem_read_resp_ready) begin
                        if (!req_is_store_q && refill_beat_q == lookup_word) begin
                            resp_rdata_q <= mem_read_resp_data;
                        end

                        if (mem_read_resp_last) begin
                            assert (refill_beat_q == BEAT_BITS'(LINE_BEATS - 1));
                            tag_array[refill_set_q][refill_way_q] <= refill_tag_q;
                            valid_array[refill_set_q][refill_way_q] <= 1'b1;
                            dirty_array[refill_set_q][refill_way_q] <= req_is_store_q;
                            replace_way_q[refill_set_q] <= refill_way_q == WAY_BITS'(NUM_WAYS - 1) ? '0 : refill_way_q + 1'b1;
                            resp_is_store_q <= req_is_store_q;
                            resp_tag_q <= req_tag_q;
                            if (req_is_store_q) resp_rdata_q <= '0;
                            state_q <= S_RESPONSE;
                        end else begin
                            assert (refill_beat_q < BEAT_BITS'(LINE_BEATS - 1));
                            refill_beat_q <= refill_beat_q + 1'b1;
                        end
                    end
                end

                S_UC_READ_REQ: begin
                    if (mem_read_req_valid && mem_read_req_ready) begin
                        state_q <= S_UC_READ_RESP;
                    end
                end

                S_UC_READ_RESP: begin
                    if (mem_read_resp_valid && mem_read_resp_ready) begin
                        assert (mem_read_resp_last);
                        resp_is_store_q <= 1'b0;
                        resp_rdata_q <= mem_read_resp_data;
                        resp_tag_q <= req_tag_q;
                        state_q <= S_RESPONSE;
                    end
                end

                S_UC_WRITE_REQ: begin
                    if (mem_write_req_valid && mem_write_req_ready) begin
                        state_q <= S_UC_WRITE_DATA;
                    end
                end

                S_UC_WRITE_DATA: begin
                    if (mem_write_data_valid && mem_write_data_ready) begin
                        assert (mem_write_data_last);
                        state_q <= S_UC_WRITE_RESP;
                    end
                end

                S_UC_WRITE_RESP: begin
                    if (mem_write_resp_valid && mem_write_resp_ready) begin
                        resp_is_store_q <= 1'b1;
                        resp_rdata_q <= '0;
                        resp_tag_q <= req_tag_q;
                        state_q <= S_RESPONSE;
                    end
                end

                S_RESPONSE: begin
                    if (resp_valid && resp_ready) state_q <= S_IDLE;
                end

                S_MAINT_LOOKUP: begin
                    if (!maint_hit) begin
                        maint_done_q <= 1'b1;
                        state_q <= S_IDLE;
                    end else if (dirty_array[maint_set][maint_hit_way] && maint_op_q != MAINT_INVALIDATE) begin
                        wb_set_q <= maint_set;
                        wb_way_q <= maint_hit_way;
                        wb_beat_q <= '0;
                        wb_after_q <= WB_TO_MAINT_ADDR;
                        state_q <= S_WB_REQ;
                    end else begin
                        if (maint_op_q == MAINT_INVALIDATE || maint_op_q == MAINT_FLUSH) begin
                            valid_array[maint_set][maint_hit_way] <= 1'b0;
                            dirty_array[maint_set][maint_hit_way] <= 1'b0;
                        end
                        maint_done_q <= 1'b1;
                        state_q <= S_IDLE;
                    end
                end

                S_MAINT_SCAN: begin
                    if (valid_array[maint_scan_set_q][maint_scan_way_q] &&
                        dirty_array[maint_scan_set_q][maint_scan_way_q] &&
                        maint_op_q != MAINT_INVALIDATE) begin
                        wb_set_q <= maint_scan_set_q;
                        wb_way_q <= maint_scan_way_q;
                        wb_beat_q <= '0;
                        wb_after_q <= WB_TO_MAINT_SCAN;
                        state_q <= S_WB_REQ;
                    end else begin
                        if (maint_op_q == MAINT_INVALIDATE || maint_op_q == MAINT_FLUSH) begin
                            valid_array[maint_scan_set_q][maint_scan_way_q] <= 1'b0;
                            dirty_array[maint_scan_set_q][maint_scan_way_q] <= 1'b0;
                        end

                        if (maint_scan_way_q == WAY_BITS'(NUM_WAYS - 1)) begin
                            maint_scan_way_q <= '0;
                            if (maint_scan_set_q == SET_BITS'(NUM_SETS - 1)) begin
                                maint_done_q <= 1'b1;
                                state_q <= S_IDLE;
                            end else begin
                                maint_scan_set_q <= maint_scan_set_q + 1'b1;
                            end
                        end else begin
                            maint_scan_way_q <= maint_scan_way_q + 1'b1;
                        end
                    end
                end

                default: state_q <= S_IDLE;
            endcase
        end
    end
endmodule
