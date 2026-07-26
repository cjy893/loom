import loom_params::*;
import loom_consts::*;
import loom_types::*;

module rob #(
    parameter int NUM_ENTRIES = 64,
    parameter int CORE_WIDTH = 2,
    parameter int NUM_ROWS = NUM_ENTRIES / CORE_WIDTH,
    parameter int ROB_ADDR_SZ = $clog2(NUM_ENTRIES),
    parameter int NUM_WAKEUP_PORTS = 6,
    parameter bit ENABLE_SINGLE_DEBUG_COMMIT = 1'b1
)(
    input logic clk,
    input logic rst_n,

    input logic [CORE_WIDTH-1:0] enq_valids,
    input uop_t [CORE_WIDTH-1:0] enq_uops,
    input logic enq_partial_stall,
    output logic [ROB_ADDR_SZ-1:0] rob_tail_idx,

    input exe_unit_resp_t [NUM_WAKEUP_PORTS-1:0] wb_resps,

    input logic [CORE_WIDTH-1:0] lsu_clr_bsy_valid,
    input logic [CORE_WIDTH-1:0] [ROB_ADDR_SZ-1:0] lsu_clr_bsy_addr,

    input br_update_info_t brupdate,

    input logic interrupt_pending,
    input logic [XLEN-1:0] interrupt_next_pc,
    output logic interrupt_taken,

    input exception_t lxcpt,
    input exception_t csr_replay,

    input logic csr_stall,

    output commit_signal_t commit,
    output commit_exception_signals_t com_xcpt,
    output commit_exception_signals_t flush,
    output logic empty,
    output logic ready,
    output logic rollback,
    output logic flush_frontend,
    output logic [ROB_ADDR_SZ-1:0] rob_head_idx,
    output logic [ROB_ADDR_SZ-1:0] rob_pnr_idx
);
    logic [NUM_ROWS-1:0] rob_val [CORE_WIDTH-1:0];
    logic [NUM_ROWS-1:0] rob_bsy [CORE_WIDTH-1:0];
    logic [NUM_ROWS-1:0] rob_unsafe [CORE_WIDTH-1:0];
    uop_t [NUM_ROWS-1:0] rob_uop [CORE_WIDTH-1:0];
    logic [NUM_ROWS-1:0][XLEN-1:0] rob_wdata [CORE_WIDTH-1:0];
    logic [NUM_ROWS-1:0] rob_exception [CORE_WIDTH-1:0];
    logic [NUM_ROWS-1:0] rob_predicated [CORE_WIDTH-1:0];

    logic [$clog2(NUM_ROWS)-1:0] rob_head;
    logic [$clog2(NUM_ROWS)-1:0] rob_tail;
    logic [$clog2(NUM_ROWS)-1:0] rob_pnr;
    logic [$clog2(CORE_WIDTH)-1:0] rob_head_lsb;
    logic [$clog2(CORE_WIDTH)-1:0] rob_tail_lsb;
    logic [$clog2(CORE_WIDTH)-1:0] rob_pnr_lsb;

    assign rob_head_idx = {rob_head, rob_head_lsb};
    assign rob_tail_idx = {rob_tail, rob_tail_lsb};
    assign rob_pnr_idx = {rob_pnr, rob_pnr_lsb};

    wire rob_safe_all = ~(|(rob_unsafe[0]) || |(rob_unsafe[1]));

    typedef enum logic [1:0] {
        S_NORMAL,
        S_WAIT_TILL_EMPTY,
        S_ROLLBACK
    } rob_state_t;

    rob_state_t rob_state;

    function automatic logic [$clog2(NUM_ROWS)-1:0] get_row( logic [ROB_ADDR_SZ-1:0] idx);
        return idx[ROB_ADDR_SZ-1:$clog2(CORE_WIDTH)];
    endfunction

    function automatic logic [$clog2(CORE_WIDTH)-1:0] get_bank( logic [ROB_ADDR_SZ-1:0] idx);
        return idx[$clog2(CORE_WIDTH)-1:0];
    endfunction

    function automatic logic [$clog2(NUM_ROWS)-1:0] wrap_inc( logic [$clog2(NUM_ROWS)-1:0] ptr);
        return (ptr == NUM_ROWS-1) ? '0 : ptr + 1'b1;
    endfunction

    function automatic logic is_older(logic [ROB_ADDR_SZ-1:0] a, logic [ROB_ADDR_SZ-1:0] b);
        logic [$clog2(NUM_ENTRIES)-1:0] dist_a, dist_b;
        dist_a = (a >= rob_head_idx) ? a - rob_head_idx : a + NUM_ENTRIES - rob_head_idx;
        dist_b = (b >= rob_head_idx) ? b - rob_head_idx : b + NUM_ENTRIES - rob_head_idx;
        return dist_a < dist_b;
    endfunction

    function automatic logic [$clog2(CORE_WIDTH)-1:0] priority_encoder(logic [CORE_WIDTH-1:0] vec);
        for(int i = 0; i < CORE_WIDTH; i++) begin
            if(vec[i]) return i;
        end
        return '0;
    endfunction

    wire [CORE_WIDTH-1:0] rob_tail_valids;
    for (genvar w = 0; w < CORE_WIDTH; w++) begin
        assign rob_tail_valids[w] = rob_val[w][rob_tail];
    end

    function automatic logic [ROB_ADDR_SZ-1:0] find_oldest_unsafe();
        logic [$clog2(NUM_ROWS)-1:0] current_row;
        current_row = rob_head;
        for(int row = 0; row < NUM_ROWS; row++) begin
            for(int bank = 0; bank < CORE_WIDTH; bank++) begin
                if(rob_unsafe[bank][current_row]) begin
                    return {current_row, bank[$clog2(CORE_WIDTH)-1:0]};
                end
            end
            current_row = wrap_inc(current_row);
        end
        return rob_tail_idx;
    endfunction

    wire [CORE_WIDTH-1:0] rob_head_vals;
    wire [CORE_WIDTH-1:0] rob_head_bsy;
    wire [CORE_WIDTH-1:0] rob_head_unsafe;
    wire [CORE_WIDTH-1:0] rob_head_exception;
    for(genvar w = 0; w < CORE_WIDTH; w++) begin
        assign rob_head_vals[w] = rob_val[w][rob_head];
        assign rob_head_bsy[w] = rob_bsy[w][rob_head];
        assign rob_head_unsafe[w] = rob_unsafe[w][rob_head];
        assign rob_head_exception[w] = rob_exception[w][rob_head];
    end

    logic [NUM_ROWS-1:0] [XLEN-1:0] rob_exc_cause [CORE_WIDTH-1:0];
    logic [NUM_ROWS-1:0] [XLEN-1:0] rob_exc_badvaddr [CORE_WIDTH-1:0];

    logic lxcpt_live;
    logic [$clog2(NUM_ROWS)-1:0] lxcpt_row;
    logic [$clog2(CORE_WIDTH)-1:0] lxcpt_bank;
    logic lxcpt_br_killed;
    always_comb begin
        lxcpt_row = get_row(lxcpt.uop.rob_idx);
        lxcpt_bank = get_bank(lxcpt.uop.rob_idx);
        lxcpt_br_killed = brupdate.b2.mispredict && |(lxcpt.uop.br_mask & brupdate.b1.mispredict_mask);
        lxcpt_live = lxcpt.valid && rob_val[lxcpt_bank][lxcpt_row] && !lxcpt_br_killed &&
                     rob_state != S_ROLLBACK && rob_uop[lxcpt_bank][lxcpt_row].rob_idx == lxcpt.uop.rob_idx;
    end

    logic [$clog2(CORE_WIDTH)-1:0] first_head_bank;
    logic first_head_exception;
    logic [XLEN-1:0] interrupt_era;
    always_comb begin
        first_head_bank = priority_encoder(rob_head_vals);
        first_head_exception = (|rob_head_vals) && rob_exception[first_head_bank][rob_head];

        if(|rob_head_vals) begin
            interrupt_era = rob_uop[first_head_bank][rob_head].pc[XLEN-1:0];
        end else begin
            interrupt_era = interrupt_next_pc;
        end
    end

    assign interrupt_taken = interrupt_pending && (rob_state == S_NORMAL) && !first_head_exception &&
                             !exception_throw_d1 && !exception_throw_d2 && !brupdate.b2.mispredict && !lxcpt_live;

    logic [CORE_WIDTH-1:0] can_commit;
    logic [CORE_WIDTH-1:0] can_throw_exception;
    logic [CORE_WIDTH-1:0] will_commit;

    logic block_commit;
    logic block_xcpt;
    logic exception_throw;
    logic debug_gpr_seen;
    always_comb begin
        block_commit = (rob_state !=S_NORMAL && rob_state != S_WAIT_TILL_EMPTY) || exception_throw_d1 || exception_throw_d2 || interrupt_taken;
        block_xcpt = 1'b0;
        exception_throw = 1'b0;
        will_commit = '0;
        debug_gpr_seen = 1'b0;

        for(int w = 0; w < CORE_WIDTH; w++) begin
            can_commit[w] = rob_head_vals[w] && !rob_head_bsy[w] && !csr_stall && !brupdate.b2.mispredict;
            can_throw_exception[w] = rob_head_vals[w] && rob_head_exception[w];
            will_commit[w] = can_commit[w] && !can_throw_exception[w] && !block_commit;

            if(ENABLE_SINGLE_DEBUG_COMMIT &&
               will_commit[w] &&
               !rob_predicated[w][rob_head] &&
               rob_uop[w][rob_head].dst_rtype == RT_FIX &&
               rob_uop[w][rob_head].ldst != '0) begin
                if(debug_gpr_seen) begin
                    will_commit[w] = 1'b0;
                    block_commit = 1'b1;
                end else begin
                    debug_gpr_seen = 1'b1;
                end
            end

            if(can_throw_exception[w] && !block_commit && !block_xcpt) exception_throw = 1'b1;

            if(rob_head_vals[w] && (!can_commit[w] || can_throw_exception[w])) begin
                block_commit = 1'b1;
            end

            if(will_commit[w]) begin
                block_xcpt = 1'b1;
            end
        end
    end

    logic [$clog2(CORE_WIDTH)-1:0] xcpt_bank;
    uop_t xcpt_uop;
    always_comb begin
        xcpt_bank = priority_encoder(can_throw_exception);
        xcpt_uop = rob_uop[xcpt_bank][rob_head];
    end

    always_comb begin
        com_xcpt = '0;

        if(interrupt_taken) begin
            com_xcpt.valid = 1'b1;
            com_xcpt.pc = interrupt_era;
            com_xcpt.inst = '0;
            com_xcpt.cause = '0;
            com_xcpt.badvaddr = '0;
            com_xcpt.flush_typ = FT_XCPT;
        end else if(exception_throw) begin
            com_xcpt.valid = 1'b1;
            com_xcpt.pc = xcpt_uop.pc[XLEN-1:0];
            com_xcpt.inst = xcpt_uop.inst;
            com_xcpt.ftq_idx = xcpt_uop.ftq_idx;
            com_xcpt.edge_inst = xcpt_uop.edge_inst;
            com_xcpt.pc_lob = xcpt_uop.pc_lob;
            com_xcpt.cause = rob_exc_cause[xcpt_bank][rob_head];
            com_xcpt.badvaddr = rob_exc_badvaddr[xcpt_bank][rob_head];
            com_xcpt.flush_typ = FT_XCPT;
        end
    end

    logic [CORE_WIDTH-1:0] flush_commit_mask;
    logic [$clog2(CORE_WIDTH)-1:0] flush_bank;
    uop_t flush_uop;
    always_comb begin
        for(int w = 0; w < CORE_WIDTH; w++) begin
            flush_commit_mask[w] = commit.valids[w] && commit.uops[w].flush_on_commit;
        end
        flush_bank = priority_encoder(flush_commit_mask);
        flush_uop = exception_throw ? xcpt_uop : commit.uops[flush_bank];
    end

    always_comb begin
        flush = '0;

        flush.valid = exception_throw || (|flush_commit_mask);
        flush.pc = flush_uop.pc[XLEN-1:0];
        flush.ftq_idx = flush_uop.ftq_idx;
        flush.edge_inst = flush_uop.edge_inst;
        flush.is_16bit = 1'b0;
        flush.pc_lob = flush_uop.pc_lob;
        flush.inst = flush_uop.inst;

        if(com_xcpt.valid) begin
            flush = com_xcpt;
        end else if(|flush_commit_mask) begin
            flush.valid = 1'b1;
            flush.pc = flush_uop.pc[XLEN-1:0];
            flush.inst = flush_uop.inst;

            if(flush_uop.is_ertn) flush.flush_typ = FT_ERTN;
            else if(|flush_commit_mask) flush.flush_typ = FT_REFETCH;
        end
    end

    assign flush_frontend = flush.valid;

    for(genvar w = 0; w < CORE_WIDTH; w++) begin
        assign commit.valids[w] = will_commit[w];
        assign commit.arch_valids[w] = will_commit[w] && !rob_predicated[w][rob_head];
        assign commit.uops[w] = rob_uop[w][rob_head];
        assign commit.debug_insts[w*32 +: 32] = rob_uop[w][rob_head].inst;
        assign commit.debug_wdata[w*XLEN +: XLEN] = rob_wdata[w][rob_head];
    end

    logic exception_throw_d1, exception_throw_d2;
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            exception_throw_d1 <= 1'b0;
            exception_throw_d2 <= 1'b0;
        end else begin
            exception_throw_d1 <= exception_throw;
            exception_throw_d2 <= exception_throw_d1;
        end
    end

    // A partial dispatch can leave younger lanes reserved in the current tail
    // row. Do not let commit advance past that row before those lanes arrive.
    wire head_row_has_pending_enq =
        (rob_head == rob_tail) && (rob_tail_lsb != '0);
    wire finished_committing_row =
        (|commit.valids) &&
        ((will_commit ^ rob_head_vals) == '0) &&
        !head_row_has_pending_enq;
    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            rob_head <= '0;
            rob_head_lsb <= '0;
            rob_tail <= '0;
            rob_tail_lsb <= '0;
            rob_pnr <= '0;
            rob_pnr_lsb <= '0;
        end else begin
            if(finished_committing_row) begin
                rob_head <= wrap_inc(rob_head);
                rob_head_lsb <= '0;
            end else if(rob_state != S_ROLLBACK) begin
                rob_head_lsb <= priority_encoder(rob_head_vals);
            end

            if(rob_state == S_ROLLBACK) begin
                rob_tail <= rob_head;
                rob_tail_lsb <= '0;
            end else if(brupdate.b2.mispredict) begin
                rob_tail <= wrap_inc(get_row(brupdate.b2.uop.rob_idx));
                rob_tail_lsb <= '0;
            end else if(|enq_valids && !enq_partial_stall) begin
                rob_tail <= wrap_inc(rob_tail);
                rob_tail_lsb <= '0;
            end else if(|enq_valids && enq_partial_stall) begin
                rob_tail_lsb <= priority_encoder(~enq_valids);
            end

            if(!rob_safe_all) begin
                {rob_pnr, rob_pnr_lsb} <= find_oldest_unsafe();
            end else begin
                rob_pnr <= rob_tail;
                rob_pnr_lsb <= priority_encoder(~rob_tail_valids);
            end
        end
    end

    wire full = (wrap_inc(rob_tail) == rob_head) && (rob_val[0][rob_tail] || rob_val[1][rob_tail]);
    for(genvar w = 0; w < CORE_WIDTH; w++) begin: gen_rob_bank
        always_ff @(posedge clk or negedge rst_n) begin
            if(!rst_n) begin
                rob_val[w] <= '0;
                rob_bsy[w] <= '0;
                rob_unsafe[w] <= '0;
                rob_wdata[w] <= '0;
                rob_exception[w] <= '0;
                rob_predicated[w] <= '0;
                rob_exc_cause[w] <= '0;
                rob_exc_badvaddr[w] <= '0;
            end else begin
                if(enq_valids[w] && rob_state == S_NORMAL) begin
                    rob_val[w][rob_tail] <= 1'b1;
                    rob_bsy[w][rob_tail] <= enq_uops[w].starts_bsy;
                    rob_unsafe[w][rob_tail] <= enq_uops[w].starts_unsafe;
                    rob_exception[w][rob_tail] <= enq_uops[w].exception;
                    rob_predicated[w][rob_tail] <= enq_uops[w].predicated;
                    rob_uop[w][rob_tail] <= enq_uops[w];
                    rob_wdata[w][rob_tail] <= '0;
                    rob_exc_cause[w][rob_tail] <= enq_uops[w].exc_cause;
                    rob_exc_badvaddr[w][rob_tail] <= '0;
                end

                if(lxcpt_live && lxcpt_bank == w) begin
                    rob_exception[w][lxcpt_row] <= 1'b1;
                    rob_exc_cause[w][lxcpt_row] <= {{(XLEN-6){1'b0}}, lxcpt.cause};
                    rob_exc_badvaddr[w][lxcpt_row] <= lxcpt.badvaddr;
                    rob_bsy[w][lxcpt_row] <= 1'b0;
                    rob_unsafe[w][lxcpt_row] <= 1'b0;
                end

                for(int i = 0; i < NUM_WAKEUP_PORTS; i++) begin
                    if(wb_resps[i].valid &&
                       get_bank(wb_resps[i].uop.rob_idx) == w &&
                       rob_val[w][get_row(wb_resps[i].uop.rob_idx)] &&
                       rob_uop[w][get_row(wb_resps[i].uop.rob_idx)].rob_idx ==
                           wb_resps[i].uop.rob_idx) begin
                        rob_bsy[w][get_row(wb_resps[i].uop.rob_idx)] <= 1'b0;
                        rob_unsafe[w][get_row(wb_resps[i].uop.rob_idx)] <= 1'b0;
                        rob_predicated[w][get_row(wb_resps[i].uop.rob_idx)] <= 1'b0;
                        rob_wdata[w][get_row(wb_resps[i].uop.rob_idx)] <= wb_resps[i].data;
                    end
                end

                for(int i = 0; i < CORE_WIDTH; i++) begin
                    if(lsu_clr_bsy_valid[i] && get_bank(lsu_clr_bsy_addr[i]) == w) begin
                        rob_bsy[w][get_row(lsu_clr_bsy_addr[i])] <= 1'b0;
                        rob_unsafe[w][get_row(lsu_clr_bsy_addr[i])] <= 1'b0;
                    end
                end

                if(brupdate.b2.mispredict) begin
                    for(int row = 0; row < NUM_ROWS; row++) begin
                        if(is_older(brupdate.b2.uop.rob_idx, {$clog2(NUM_ROWS)'(row), $clog2(CORE_WIDTH)'(w)})) begin
                            rob_val[w][row] <= 1'b0;
                        end
                    end
                end

                if(rob_state == S_ROLLBACK) begin
                    rob_val[w] <= '0;
                    rob_bsy[w] <= '0;
                end

                if(will_commit[w]) begin
                    rob_val[w][rob_head] <= 1'b0;
                end
            end
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            rob_state <= S_NORMAL;
        end else begin
            case(rob_state)
                S_NORMAL: begin
                    if(interrupt_taken) begin
                        rob_state <= S_ROLLBACK;
                    end else if(exception_throw_d2) begin
                        rob_state <= S_ROLLBACK;
                    end else if(|enq_valids && enq_uops[priority_encoder(enq_valids)].is_unique) begin
                        rob_state <= S_WAIT_TILL_EMPTY;
                    end
                end
                S_WAIT_TILL_EMPTY: begin
                    if(exception_throw_d2) begin
                        rob_state <= S_ROLLBACK;
                    end else if(empty) begin
                        rob_state <= S_NORMAL;
                    end
                end
                S_ROLLBACK: begin
                    rob_state <= S_NORMAL;
                end
                default: begin
                    rob_state <= S_ROLLBACK;
                end
            endcase
        end
    end

    assign rollback = (rob_state == S_ROLLBACK);
    assign ready = (rob_state == S_NORMAL) && !full && !interrupt_taken;
    assign empty = (rob_head == rob_tail) && (rob_head_vals == '0);
endmodule
