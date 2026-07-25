import loom_params::*;
import loom_consts::*;
import loom_types::*;

module store_queue #(
    parameter int NUM_ENTRIES = STQ_ENTRIES,
    parameter int ENQ_WIDTH = DECODE_WIDTH,
    parameter int AGEN_WIDTH = LSU_WIDTH,
    parameter int DGEN_WIDTH = LSU_WIDTH,
    parameter int COMMIT_WIDTH = RETIRE_WIDTH,
    parameter int CLR_WIDTH = DECODE_WIDTH,

    parameter int ADDR_WIDTH = XLEN,
    parameter int DATA_WIDTH = XLEN,
    parameter int MASK_WIDTH = DATA_WIDTH / 8,

    parameter int GEN_BITS = 2,
    parameter int SLOT_WIDTH = $clog2(NUM_ENTRIES),
    parameter int TAG_WIDTH = SLOT_WIDTH + GEN_BITS
)(
    input logic clk,
    input logic rst_n,

    input logic [ENQ_WIDTH-1:0] enq_valid,
    input uop_t [ENQ_WIDTH-1:0] enq_uops,
    output logic [ENQ_WIDTH-1:0] enq_ready,
    output logic [ENQ_WIDTH-1:0] [TAG_WIDTH-1:0] enq_idx,

    input logic [AGEN_WIDTH-1:0] agen_valid,
    input uop_t [AGEN_WIDTH-1:0] agen_uops,
    input logic [AGEN_WIDTH-1:0] [ADDR_WIDTH-1:0] agen_addr,

    input logic [DGEN_WIDTH-1:0] dgen_valid,
    input uop_t [DGEN_WIDTH-1:0] dgen_uops,
    input logic [DGEN_WIDTH-1:0] [DATA_WIDTH-1:0] dgen_data,

    output logic [CLR_WIDTH-1:0] clr_bsy_valid,
    output logic [CLR_WIDTH-1:0] [ROB_ADDR_SZ-1:0] clr_bsy_rob_idx,

    output logic store_req_valid,
    input logic store_req_ready,
    output logic [ADDR_WIDTH-1:0] store_req_addr,
    output logic [DATA_WIDTH-1:0] store_req_data,
    output logic [MASK_WIDTH-1:0] store_req_mask,
    output logic [TAG_WIDTH-1:0] store_req_idx,
    output uop_t store_req_uop,

    input logic store_ack_valid,
    input logic [TAG_WIDTH-1:0] store_ack_idx,

    input logic [COMMIT_WIDTH-1:0] commit_valid,
    input uop_t [COMMIT_WIDTH-1:0] commit_uops,

    input br_update_info_t brupdate,
    input logic flush_pipeline,

    output logic stq_empty
);
    localparam int CQ_COUNT_WIDTH = $clog2(NUM_ENTRIES + 1);
    localparam int PUSH_COUNT_WIDTH = $clog2(COMMIT_WIDTH + 1);
    localparam int BYTE_OFFSET_WIDTH = (MASK_WIDTH > 1) ? $clog2(MASK_WIDTH) : 1;

    typedef struct packed {
        logic valid;
        logic addr_valid;
        logic data_valid;
        logic committed;
        logic requested;
        logic completed;
        logic cleared;
        logic [ADDR_WIDTH-1:0] addr;
        logic [DATA_WIDTH-1:0] data;
        uop_t uop;
    } stq_entry_t;

    stq_entry_t [NUM_ENTRIES-1:0] entries;
    logic [NUM_ENTRIES-1:0] [GEN_BITS-1:0] next_gen;
    logic [SLOT_WIDTH-1:0] alloc_hint;

    stq_entry_t [ENQ_WIDTH-1:0] enq_entries;
    logic [ENQ_WIDTH-1:0] [SLOT_WIDTH-1:0] enq_slot;
    logic [ENQ_WIDTH-1:0] enq_fire, enq_killed;
    uop_t [ENQ_WIDTH-1:0] enq_uops_updated;
    logic [SLOT_WIDTH-1:0] alloc_hint_next;

    logic [CLR_WIDTH-1:0] [SLOT_WIDTH-1:0] clr_slot;

    logic [NUM_ENTRIES-1:0] [TAG_WIDTH-1:0] commit_fifo;
    logic [SLOT_WIDTH-1:0] cq_head, cq_tail;
    logic [CQ_COUNT_WIDTH-1:0] cq_count;

    logic [COMMIT_WIDTH-1:0] [SLOT_WIDTH-1:0] commit_slot;
    logic [COMMIT_WIDTH-1:0] [SLOT_WIDTH-1:0] cq_write_slot;
    logic [COMMIT_WIDTH-1:0] commit_match;
    logic [PUSH_COUNT_WIDTH-1:0] commit_push_count;
    logic [SLOT_WIDTH-1:0] cq_tail_next;
    logic [NUM_ENTRIES-1:0] entry_commiting;

    logic [TAG_WIDTH-1:0] cq_head_tag;
    logic [SLOT_WIDTH-1:0] cq_head_slot;
    logic cq_head_live, req_candidate_valid;

    logic req_hold_valid;
    logic [TAG_WIDTH-1:0] req_hold_idx;
    logic [ADDR_WIDTH-1:0] req_hold_addr;
    logic [DATA_WIDTH-1:0] req_hold_data;
    uop_t req_hold_uop;

    logic [SLOT_WIDTH-1:0] req_hold_slot;
    logic req_hold_live, store_req_fire;
    logic [BYTE_OFFSET_WIDTH-1:0] req_byte_offset;

    logic [SLOT_WIDTH-1:0] ack_slot;
    logic ack_match;
    logic [SLOT_WIDTH-1:0] cq_head_next;
    logic [CQ_COUNT_WIDTH-1:0] cq_count_next;

    always_comb begin
        ack_slot = store_ack_idx[SLOT_WIDTH-1:0];
        ack_match = store_ack_valid && (cq_count != 0) && (store_ack_idx ==cq_head_tag) &&
                    entries[ack_slot].valid && entries[ack_slot].committed && entries[ack_slot].requested && (entries[ack_slot].uop.stq_idx == store_ack_idx);
        
        if(cq_head == NUM_ENTRIES - 1) cq_head_next = '0;
        else cq_head_next = cq_head + 1'b1;

        cq_count_next = cq_count + commit_push_count;
        if(ack_match) cq_count_next = cq_count_next - 1'b1;
    end

    always_comb begin
        cq_head_tag = commit_fifo[cq_head];
        cq_head_slot = cq_head_tag[SLOT_WIDTH-1:0];

        cq_head_live = (cq_count != 0) && entries[cq_head_slot].valid && entries[cq_head_slot].committed && (entries[cq_head_slot].uop.stq_idx == cq_head_tag);
        req_candidate_valid = cq_head_live && entries[cq_head_slot].addr_valid && entries[cq_head_slot].data_valid && !entries[cq_head_slot].requested;
    end

    always_comb begin
        req_hold_slot = req_hold_idx[SLOT_WIDTH-1:0];
        req_byte_offset = req_hold_addr[BYTE_OFFSET_WIDTH-1:0];
        req_hold_live = req_hold_valid && entries[req_hold_slot].valid && entries[req_hold_slot].committed && (entries[req_hold_slot].uop.stq_idx == req_hold_idx);
        
        store_req_valid = req_hold_live && (req_hold_uop.mem_size != 2'd3);
        store_req_addr = req_hold_addr;
        store_req_idx = req_hold_idx;
        store_req_uop = req_hold_uop;
        store_req_data = '0;
        store_req_mask = '0;

        case(req_hold_uop.mem_size)
            2'd0: begin
                store_req_mask = {{(MASK_WIDTH-1){1'b0}}, 1'b1} << req_byte_offset;
                store_req_data = req_hold_data << (req_byte_offset * 8);
            end
            2'd1: begin
                store_req_mask = {{(MASK_WIDTH-2){1'b0}}, 2'b11} << req_byte_offset;
                store_req_data = req_hold_data << (req_byte_offset * 8);
            end
            2'd2: begin
                store_req_mask = '1;
                store_req_data = req_hold_data;
            end
            default: begin
                store_req_mask = '0;
                store_req_data = '0;
            end
        endcase

        store_req_fire = store_req_valid && store_req_ready;
    end

    always_comb begin
        logic [NUM_ENTRIES-1:0] selected;
        int unsigned tail_cursor;
        int unsigned pushes;

        commit_slot = '0;
        cq_write_slot = '0;
        commit_match = '0;
        commit_push_count = '0;
        entry_commiting = '0;
        selected = '0;

        tail_cursor = cq_tail;
        pushes = 0;

        for(int c = 0; c < COMMIT_WIDTH; c++) begin
            commit_slot[c] = commit_uops[c].stq_idx[SLOT_WIDTH-1:0];

            if(commit_valid[c] && commit_uops[c].uses_stq && entries[commit_slot[c]].valid && (entries[commit_slot[c]].uop.stq_idx == commit_uops[c].stq_idx) &&
               !entry_killed[commit_slot[c]] && !entries[commit_slot[c]].committed && !selected[commit_slot[c]]) begin
                commit_match[c] = 1'b1;
                entry_commiting[commit_slot[c]] = 1'b1;
                selected[commit_slot[c]] = 1'b1;
                cq_write_slot[c] = tail_cursor[SLOT_WIDTH-1:0];
                tail_cursor = (tail_cursor + 1) % NUM_ENTRIES;
                pushes++;
            end
        end

        commit_push_count = pushes[PUSH_COUNT_WIDTH-1:0];
        cq_tail_next = tail_cursor[SLOT_WIDTH-1:0];
    end

    always_comb begin
        enq_entries = '0;
        for(int w = 0; w < ENQ_WIDTH; w++) begin
            enq_entries[w].valid = 1'b1;
            enq_entries[w].uop = enq_uops_updated[w];
        end
    end

    always_comb begin
        logic [NUM_ENTRIES-1:0] available;
        int unsigned cursor;

        available = '0;
        for(int i = 0; i < NUM_ENTRIES; i++) begin
            available[i] = !entries[i].valid;
        end

        enq_ready = '0;
        enq_idx = '0;
        enq_slot = '0;
        enq_fire = '0;
        enq_uops_updated = enq_uops;
        cursor = alloc_hint;

        for(int w = 0; w < ENQ_WIDTH; w++) begin
            logic found;
            found = 1'b0;

            for(int off = 0; off < NUM_ENTRIES; off++) begin
                int unsigned slot;
                slot = (cursor + off) % NUM_ENTRIES;
                if(!found && available[slot]) begin
                    found = 1'b1;
                    enq_ready[w] = 1'b1;
                    enq_slot[w] = slot[SLOT_WIDTH-1:0];
                    enq_idx[w] = {next_gen[slot], slot[SLOT_WIDTH-1:0]};
                end
            end

            enq_killed[w] = brupdate.b2.mispredict && |(enq_uops[w].br_mask & brupdate.b1.mispredict_mask);
            enq_uops_updated[w].br_mask = enq_uops[w].br_mask & ~brupdate.b1.resolve_mask;
            enq_uops_updated[w].stq_idx = enq_idx[w];
            enq_fire[w] = enq_valid[w] && enq_ready[w] && !enq_killed[w] && !flush_pipeline;

            if(enq_fire[w]) begin
                available[enq_slot[w]] = 1'b0;
                cursor = (enq_slot[w] + 1) % NUM_ENTRIES;
            end
        end
        alloc_hint_next = cursor[SLOT_WIDTH-1:0];
    end

    logic [NUM_ENTRIES-1:0] entry_killed;

    always_comb begin
        entry_killed = '0;
        for(int i = 0; i < NUM_ENTRIES; i++) begin
            entry_killed[i] = entries[i].valid && !entries[i].committed && brupdate.b2.mispredict && |(entries[i].uop.br_mask & brupdate.b1.mispredict_mask);
        end
    end

    logic [AGEN_WIDTH-1:0] [SLOT_WIDTH-1:0] agen_slot;
    logic [AGEN_WIDTH-1:0] agen_match;
    logic [DGEN_WIDTH-1:0] [SLOT_WIDTH-1:0] dgen_slot;
    logic [DGEN_WIDTH-1:0] dgen_match;

    always_comb begin
        for(int a = 0; a < AGEN_WIDTH; a++) begin
            agen_slot[a] = agen_uops[a].stq_idx[SLOT_WIDTH-1:0];
            agen_match[a] = agen_valid[a] && entries[agen_slot[a]].valid && (entries[agen_slot[a]].uop.stq_idx == agen_uops[a].stq_idx)
                            && !entries[agen_slot[a]].addr_valid && !entry_killed[agen_slot[a]] && !flush_pipeline;
        end
        for(int d = 0; d < DGEN_WIDTH; d++) begin
            dgen_slot[d] = dgen_uops[d].stq_idx[SLOT_WIDTH-1:0];
            dgen_match[d] = dgen_valid[d] && entries[dgen_slot[d]].valid && (entries[dgen_slot[d]].uop.stq_idx == dgen_uops[d].stq_idx) &&
                            !entries[dgen_slot[d]].data_valid && !entry_killed[dgen_slot[d]] && !flush_pipeline;
        end
    end

    always_comb begin
        logic [NUM_ENTRIES-1:0] available;

        clr_bsy_valid = '0;
        clr_bsy_rob_idx = '0;
        clr_slot = '0;
        available = '0;

        for(int i = 0; i < NUM_ENTRIES; i++) begin
            available[i] = entries[i].valid && entries[i].addr_valid && entries[i].data_valid && !entry_killed[i] && !entries[i].cleared && !flush_pipeline;
        end

        for(int c = 0; c < CLR_WIDTH; c++) begin
            logic found;
            found = 1'b0;
            for(int i = 0; i < NUM_ENTRIES; i++) begin
                if(!found && available[i]) begin
                    found = 1'b1;
                    clr_bsy_valid[c] = 1'b1;
                    clr_bsy_rob_idx[c] = entries[i].uop.rob_idx;
                    clr_slot[c] = i[SLOT_WIDTH-1:0];
                    available[i] = 1'b0;
                end
            end
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            entries <= '0;
            next_gen <= '0;
            alloc_hint <= '0;
            commit_fifo <= '0;
            cq_head <= '0;
            cq_tail <= '0;
            cq_count <= '0;
            req_hold_valid <= 1'b0;
            req_hold_addr <= '0;
            req_hold_data <= '0;
            req_hold_idx <= '0;
            req_hold_uop <= '0;
        end else begin
            for(int i = 0; i < NUM_ENTRIES; i++) begin
                if(entries[i].valid) begin
                    entries[i].uop.br_mask <= entries[i].uop.br_mask & ~brupdate.b1.resolve_mask;
                    if(entry_killed[i]) entries[i].valid <= 1'b0;
                    else if(flush_pipeline && !entries[i].committed && !entry_commiting[i]) entries[i].valid <= 1'b0;
                end
            end

            for(int a = 0; a < AGEN_WIDTH; a++) begin
                if(agen_match[a]) begin
                    entries[agen_slot[a]].addr_valid <= 1'b1;
                    entries[agen_slot[a]].addr <= agen_addr[a];
                end
            end
            for(int d = 0; d < DGEN_WIDTH; d++) begin
                if(dgen_match[d]) begin
                    entries[dgen_slot[d]].data_valid <= 1'b1;
                    entries[dgen_slot[d]].data <= dgen_data[d];
                end
            end

            for(int c = 0; c < CLR_WIDTH; c++) begin
                if(clr_bsy_valid[c]) entries[clr_slot[c]].cleared <= 1'b1;
            end

            for(int c = 0; c < COMMIT_WIDTH; c++) begin
                if(commit_match[c]) begin
                    entries[commit_slot[c]].committed <= 1'b1;
                    commit_fifo[cq_write_slot[c]] <= commit_uops[c].stq_idx;

                    assert(entries[commit_slot[c]].cleared)
                    else $error("Committing store before STQ completion");
                end
            end

            if(ack_match) begin
                entries[ack_slot].completed <= 1'b1;
                entries[ack_slot].valid <= 1'b0;
                cq_head <= cq_head_next;
            end

            if(commit_push_count != 0) cq_tail <= cq_tail_next;

            cq_count <= cq_count_next;

            if((commit_push_count != 0) || ack_match) begin
                assert(cq_count_next <= NUM_ENTRIES)
                else $error("Store commit FIFO overflow");
            end

            if(req_hold_valid) begin
                if(!req_hold_live || store_req_fire) begin
                    req_hold_valid <= 1'b0;
                end
            end else if(req_candidate_valid) begin
                req_hold_valid <= 1'b1;
                req_hold_idx <= cq_head_tag;
                req_hold_addr <= entries[cq_head_slot].addr;
                req_hold_data <= entries[cq_head_slot].data;
                req_hold_uop <= entries[cq_head_slot].uop;
            end

            for(int w = 0; w < ENQ_WIDTH; w++) begin
                if(enq_fire[w]) begin
                    entries[enq_slot[w]] <= enq_entries[w];
                    next_gen[enq_slot[w]] <= next_gen[enq_slot[w]] + 1'b1;
                end
            end

            if(|enq_fire) alloc_hint <= alloc_hint_next;
            if(store_req_fire) entries[req_hold_slot].requested <= 1'b1;
        end
    end

    always_comb begin
        stq_empty = 1'b1;
        for(int i = 0; i < NUM_ENTRIES; i++) begin
            if(entries[i].valid && !entry_killed[i] && !(flush_pipeline && !entries[i].committed && !entry_commiting[i])) begin
                stq_empty = 1'b0;
            end
        end
    end
endmodule