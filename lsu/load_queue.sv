import loom_params::*;
import loom_consts::*;
import loom_types::*;

module load_queue #(
    parameter int NUM_ENTRIES = LDQ_ENTRIES,
    parameter int ENQ_WIDTH = DECODE_WIDTH,
    parameter int AGEN_WIDTH = LSU_WIDTH,
    parameter int COMMIT_WIDTH = RETIRE_WIDTH,
    parameter int ADDR_WIDTH = XLEN,
    parameter int GEN_BITS = 2,
    parameter int SLOT_WIDTH = $clog2(NUM_ENTRIES),
    parameter int TAG_WIDTH = SLOT_WIDTH + GEN_BITS
)(
    input logic clk,
    input logic rst_n,

    input logic [ENQ_WIDTH-1:0] enq_valid,
    input logic [ENQ_WIDTH-1:0] enq_fire,
    input uop_t [ENQ_WIDTH-1:0] enq_uops,
    output logic [ENQ_WIDTH-1:0] enq_ready,
    output logic [ENQ_WIDTH-1:0] [TAG_WIDTH-1:0] enq_idx,

    input logic [AGEN_WIDTH-1:0] agen_valid,
    input uop_t [AGEN_WIDTH-1:0] agen_uops,
    input logic [AGEN_WIDTH-1:0] [ADDR_WIDTH-1:0] agen_addr,

    output logic ld_query_valid,
    output uop_t ld_query_uop,
    output logic [ADDR_WIDTH-1:0] ld_query_addr,
    input logic ld_query_block,
    input logic ld_query_forward_valid,
    input logic [XLEN-1:0] ld_query_forward_data,

    output logic dmem_req_valid,
    input logic dmem_req_ready,
    output logic [ADDR_WIDTH-1:0] dmem_req_addr,
    output logic [TAG_WIDTH-1:0] dmem_req_idx,
    output logic dmem_req_cacheable,
    output uop_t dmem_req_uop,

    input logic dmem_resp_valid,
    input logic [TAG_WIDTH-1:0] dmem_resp_idx,
    input logic [XLEN-1:0] dmem_resp_data,

    output logic xlate_req_valid,
    input  logic xlate_req_ready,
    output logic [ADDR_WIDTH-1:0] xlate_req_vaddr,
    output logic [TAG_WIDTH-1:0] xlate_req_tag,

    input  logic xlate_resp_valid,
    input  logic xlate_resp_accept,
    input  logic [TAG_WIDTH-1:0] xlate_resp_tag,
    input  logic [ADDR_WIDTH-1:0] xlate_resp_paddr,
    input  logic [1:0] xlate_resp_mat,
    input  logic xlate_resp_cacheable,
    input  logic xlate_resp_xcpt,

    output logic xlate_resp_match,
    output uop_t xlate_resp_uop,

    output logic load_wb_valid,
    output exe_unit_resp_t load_wb_resp,

    input logic [COMMIT_WIDTH-1:0] commit_valid,
    input uop_t [COMMIT_WIDTH-1:0] commit_uops,

    input br_update_info_t brupdate,
    input logic flush_pipeline,

    output logic ldq_empty
);
    typedef struct packed {
        logic valid;

        logic addr_valid;
        logic [ADDR_WIDTH-1:0] addr;
        logic [1:0] mat;
        logic cacheable;
        
        logic xlate_requested;
        logic xlate_fault;
        logic vaddr_valid;
        logic [ADDR_WIDTH-1:0] vaddr;
        
        logic requested;
        logic completed;
        logic forward_pending;
        uop_t uop;
    } ldq_entry_t;
    
    ldq_entry_t [NUM_ENTRIES-1:0] entries;
    logic [NUM_ENTRIES-1:0] [GEN_BITS-1:0] next_gen;
    logic [SLOT_WIDTH-1:0] alloc_hint;
    logic [SLOT_WIDTH-1:0] query_cursor;

    ldq_entry_t [ENQ_WIDTH-1:0] enq_entries;
    logic [ENQ_WIDTH-1:0] [SLOT_WIDTH-1:0] enq_slot;
    logic [ENQ_WIDTH-1:0] enq_write, enq_killed;
    uop_t [ENQ_WIDTH-1:0] enq_uops_updated;
    logic [SLOT_WIDTH-1:0] alloc_hint_next;

    logic req_hold_valid;
    logic [ADDR_WIDTH-1:0] req_hold_addr;
    logic [TAG_WIDTH-1:0] req_hold_idx;
    uop_t req_hold_uop;

    logic req_candidate_valid;
    logic [SLOT_WIDTH-1:0] req_candidate_slot;
    uop_t req_candidate_uop;

    logic [SLOT_WIDTH-1:0] req_hold_slot;
    logic req_hold_live;
    logic req_hold_killed;
    logic req_hold_cacheable;
    logic dmem_req_fire;

    logic [SLOT_WIDTH-1:0] resp_slot;
    logic resp_match;

    logic [XLEN-1:0] resp_shifted_data;
    logic [XLEN-1:0] resp_formatted_data;

    logic query_take_memory;
    logic query_take_forward;

    logic fwd_hold_valid;
    logic [TAG_WIDTH-1:0] fwd_hold_idx;
    logic [XLEN-1:0] fwd_hold_data;
    logic [SLOT_WIDTH-1:0] fwd_hold_slot;
    logic fwd_hold_live;
    logic fwd_hold_killed;
    logic fwd_wb_fire;

    logic [SLOT_WIDTH-1:0] wb_slot;
    logic [XLEN-1:0] wb_raw_data;

    logic [SLOT_WIDTH-1:0] xlate_cursor;
    logic xlate_candidate_valid;
    logic [SLOT_WIDTH-1:0] xlate_candidate_slot;

    logic xlate_hold_valid;
    logic [TAG_WIDTH-1:0] xlate_hold_tag;
    logic [ADDR_WIDTH-1:0] xlate_hold_vaddr;
    logic [SLOT_WIDTH-1:0] xlate_hold_slot;
    logic xlate_hold_live;
    logic xlate_hold_killed;
    logic xlate_req_fire;

    logic [SLOT_WIDTH-1:0] xlate_resp_slot;

    always_comb begin
        enq_entries = '0;
        for(int w = 0; w < ENQ_WIDTH; w++) begin
            enq_entries[w].valid = 1'b1;
            enq_entries[w].uop = enq_uops_updated[w];
        end
    end

    always_comb begin
        logic [NUM_ENTRIES-1:0] available;
        int unsigned preview_cursor;

        available = '0;
        for(int i = 0; i < NUM_ENTRIES; i++) begin
            available[i] = !entries[i].valid;
        end

        enq_ready = '0;
        enq_idx = '0;
        enq_slot = '0;
        preview_cursor = alloc_hint;

        for(int w = 0; w < ENQ_WIDTH; w++) begin
            logic found;
            found = 1'b0;

            for(int off = 0; off < NUM_ENTRIES; off++) begin
                int unsigned slot;
                slot = (preview_cursor + off) % NUM_ENTRIES;
                if(!found && available[slot]) begin
                    found = 1'b1;
                    enq_ready[w] = 1'b1;
                    enq_slot[w] = slot[SLOT_WIDTH-1:0];
                    enq_idx[w] = {next_gen[slot], slot[SLOT_WIDTH-1:0]};
                end
            end

            if(enq_valid[w] && enq_ready[w]) begin
                available[enq_slot[w]] = 1'b0;
                preview_cursor = (enq_slot[w] + 1) % NUM_ENTRIES;
            end
        end
    end

    always_comb begin
        enq_killed = '0;
        enq_uops_updated = enq_uops;
        for(int w = 0; w < ENQ_WIDTH; w++) begin
            enq_killed[w] = brupdate.b2.mispredict && |(enq_uops[w].br_mask & brupdate.b1.mispredict_mask);
            enq_uops_updated[w].br_mask = enq_uops[w].br_mask & ~brupdate.b1.resolve_mask;
            enq_uops_updated[w].ldq_idx = enq_idx[w];
        end
    end

    always_comb begin
        xlate_candidate_valid = 1'b0;
        xlate_candidate_slot = '0;

        for(int offset = 0; offset < NUM_ENTRIES; offset++) begin
            int unsigned slot;
            slot = (xlate_cursor + offset) % NUM_ENTRIES;

            if(!xlate_candidate_valid && entries[slot].valid && entries[slot].vaddr_valid && !entries[slot].xlate_requested &&
                !entries[slot].addr_valid && !entries[slot].xlate_fault && !entry_killed[slot]) begin
                xlate_candidate_valid = 1'b1;
                xlate_candidate_slot = slot[SLOT_WIDTH-1:0];
            end
        end
    end

    always_comb begin
        xlate_hold_slot = xlate_hold_tag[SLOT_WIDTH-1:0];

        xlate_hold_live = xlate_hold_valid && entries[xlate_hold_slot].valid && entries[xlate_hold_slot].vaddr_valid &&
                          !entries[xlate_hold_slot].xlate_requested && !entries[xlate_hold_slot].addr_valid &&
                          !entries[xlate_hold_slot].xlate_fault && entries[xlate_hold_slot].uop.ldq_idx == xlate_hold_tag;

        xlate_hold_killed = xlate_hold_live && entry_killed[xlate_hold_slot];
        xlate_req_valid = xlate_hold_live && !xlate_hold_killed && !flush_pipeline;
        xlate_req_vaddr = xlate_hold_vaddr;
        xlate_req_tag = xlate_hold_tag;
        xlate_req_fire = xlate_req_valid && xlate_req_ready;
    end

    always_comb begin
        xlate_resp_slot = xlate_resp_tag[SLOT_WIDTH-1:0];
        xlate_resp_match = 1'b0;
        xlate_resp_uop = '0;

        if(xlate_resp_valid) begin
            xlate_resp_match = entries[xlate_resp_slot].valid && entries[xlate_resp_slot].xlate_requested &&
                               entries[xlate_resp_slot].uop.ldq_idx == xlate_resp_tag &&
                               !entry_killed[xlate_resp_slot] && !flush_pipeline;

            if(xlate_resp_match) begin
                xlate_resp_uop = entries[xlate_resp_slot].uop;
                xlate_resp_uop.br_mask = entries[xlate_resp_slot].uop.br_mask & ~brupdate.b1.resolve_mask;
            end
        end
    end

    always_comb begin
        int unsigned accept_cursor;

        enq_write = '0;
        accept_cursor = alloc_hint;

        for(int w = 0; w < ENQ_WIDTH; w++) begin
            enq_write[w] = enq_fire[w] && enq_valid[w] && enq_ready[w] && !enq_killed[w] && !flush_pipeline;

            if(enq_write[w]) accept_cursor = (enq_slot[w] + 1) % NUM_ENTRIES;
        end

        alloc_hint_next = accept_cursor[SLOT_WIDTH-1:0];
    end

    logic [NUM_ENTRIES-1:0] entry_killed;

    always_comb begin
        entry_killed = '0;
        for(int i = 0; i < NUM_ENTRIES; i++) begin
            entry_killed[i] = entries[i].valid && brupdate.b2.mispredict && |(entries[i].uop.br_mask & brupdate.b1.mispredict_mask);
        end
    end

    always_comb begin
        req_candidate_valid = 1'b0;
        req_candidate_slot = '0;
        req_candidate_uop = '0;

        for(int offset = 0; offset < NUM_ENTRIES; offset++) begin
            int unsigned scan_slot;
            scan_slot = (query_cursor + offset) % NUM_ENTRIES;

            if(!req_candidate_valid && entries[scan_slot].valid && entries[scan_slot].addr_valid &&
               !entries[scan_slot].requested && !entries[scan_slot].forward_pending && !entries[scan_slot].completed && !entry_killed[scan_slot]) begin
                req_candidate_valid = 1'b1;
                req_candidate_slot = scan_slot[SLOT_WIDTH-1:0];
                req_candidate_uop = entries[scan_slot].uop;
            end
        end

        req_candidate_uop.br_mask = req_candidate_uop.br_mask & ~brupdate.b1.resolve_mask;
    end

    always_comb begin
        ld_query_valid = req_candidate_valid && !req_hold_valid && !fwd_hold_valid && !flush_pipeline;
        ld_query_uop = req_candidate_uop;
        ld_query_addr = entries[req_candidate_slot].addr;

        query_take_forward = ld_query_valid && ld_query_forward_valid && !ld_query_block;
        query_take_memory = ld_query_valid && !ld_query_forward_valid && !ld_query_block;
    end

    logic [AGEN_WIDTH-1:0] [SLOT_WIDTH-1:0] agen_slot;
    logic [AGEN_WIDTH-1:0] agen_match;

    always_comb begin
        for(int a = 0; a < AGEN_WIDTH; a++) begin
            agen_slot[a] = agen_uops[a].ldq_idx[SLOT_WIDTH-1:0];
            agen_match[a] = agen_valid[a] && entries[agen_slot[a]].valid && (entries[agen_slot[a]].uop.ldq_idx == agen_uops[a].ldq_idx) &&
                            !entries[agen_slot[a]].vaddr_valid && !entry_killed[agen_slot[a]] && !flush_pipeline;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            entries <= '0;
            next_gen <= '0;
            alloc_hint <= '0;
            req_hold_valid <= 1'b0;
            req_hold_addr <= '0;
            req_hold_idx <= '0;
            req_hold_cacheable <= 1'b0;
            req_hold_uop <= '0;
            fwd_hold_valid <= 1'b0;
            fwd_hold_idx <= '0;
            fwd_hold_data <= '0;
            query_cursor <= '0;
            xlate_cursor <= '0;
            xlate_hold_valid <= 1'b0;
            xlate_hold_tag <= '0;
            xlate_hold_vaddr <= '0;
        end else if(flush_pipeline) begin
            entries <= '0;
            req_hold_valid <= 1'b0;
            fwd_hold_valid <= 1'b0;
            query_cursor <= '0;
            xlate_cursor <= '0;
            xlate_hold_valid <= 1'b0;
        end else begin
            for(int i = 0; i < NUM_ENTRIES; i++) begin
                if(entries[i].valid) begin
                    entries[i].uop.br_mask <= entries[i].uop.br_mask & ~brupdate.b1.resolve_mask;

                    if(entry_killed[i]) entries[i].valid <= 1'b0;
                end
            end

            for(int a = 0; a < AGEN_WIDTH; a++) begin
                if(agen_match[a] && !entry_killed[agen_slot[a]]) begin
                    entries[agen_slot[a]].vaddr_valid <= 1'b1;
                    entries[agen_slot[a]].vaddr <= agen_addr[a];
                end
            end

            for(int c = 0; c < COMMIT_WIDTH; c++) begin
                if(commit_valid[c] && commit_uops[c].uses_ldq) begin
                    int slot;
                    slot = commit_uops[c].ldq_idx[SLOT_WIDTH-1:0];

                    if(entries[slot].valid && (entries[slot].uop.ldq_idx == commit_uops[c].ldq_idx)) entries[slot].valid <= 1'b0;
                end
            end

            for(int w = 0; w < ENQ_WIDTH; w++) begin
                if(enq_write[w]) begin
                    entries[enq_slot[w]] <= enq_entries[w];
                    next_gen[enq_slot[w]] <= next_gen[enq_slot[w]] + 1'b1;
                end
            end

            if(|enq_write) alloc_hint <= alloc_hint_next;

            if(ld_query_valid) begin
                if(req_candidate_slot == NUM_ENTRIES-1) query_cursor <= '0;
                else query_cursor <= req_candidate_slot + 1'b1;
            end

            if(req_hold_valid) begin
                if(req_hold_killed || !req_hold_live || dmem_req_fire) req_hold_valid <= 1'b0;
            end else if(query_take_memory) begin
                req_hold_valid <= 1'b1;
                req_hold_addr <= entries[req_candidate_slot].addr;
                req_hold_cacheable <= entries[req_candidate_slot].cacheable;
                req_hold_idx <= entries[req_candidate_slot].uop.ldq_idx;
                req_hold_uop <= req_candidate_uop;
            end

            if(fwd_hold_valid) begin
                if(!fwd_hold_live || fwd_hold_killed || fwd_wb_fire) fwd_hold_valid <= 1'b0;
            end else if(query_take_forward) begin
                fwd_hold_valid <= 1'b1;
                fwd_hold_idx <= entries[req_candidate_slot].uop.ldq_idx;
                fwd_hold_data <= ld_query_forward_data;
                entries[req_candidate_slot].forward_pending <= 1'b1;
            end

            if(xlate_hold_valid) begin
                if(!xlate_hold_live || xlate_hold_killed || xlate_req_fire)
                    xlate_hold_valid <= 1'b0;
            end else if(xlate_candidate_valid) begin
                xlate_hold_valid <= 1'b1;
                xlate_hold_tag <= entries[xlate_candidate_slot].uop.ldq_idx;
                xlate_hold_vaddr <= entries[xlate_candidate_slot].vaddr;
            end

            if(xlate_req_fire) begin
                entries[xlate_hold_slot].xlate_requested <= 1'b1;

                if(xlate_hold_slot == NUM_ENTRIES-1)
                    xlate_cursor <= '0;
                else
                    xlate_cursor <= xlate_hold_slot + 1'b1;
            end

            if(xlate_resp_match && xlate_resp_accept) begin
                entries[xlate_resp_slot].xlate_requested <= 1'b0;

                if(xlate_resp_xcpt) begin
                    entries[xlate_resp_slot].xlate_fault <= 1'b1;
                end else begin
                    entries[xlate_resp_slot].addr_valid <= 1'b1;
                    entries[xlate_resp_slot].addr <= xlate_resp_paddr;
                    entries[xlate_resp_slot].mat <= xlate_resp_mat;
                    entries[xlate_resp_slot].cacheable <= xlate_resp_cacheable;
                end
            end

            if(dmem_req_fire) entries[req_hold_slot].requested <= 1'b1;

            if(resp_match) entries[resp_slot].completed <= 1'b1;

            if(fwd_wb_fire) begin
                entries[fwd_hold_slot].completed <= 1'b1;
                entries[fwd_hold_slot].forward_pending <= 1'b0;
            end
        end
    end

    always_comb begin
        req_hold_slot = req_hold_idx[SLOT_WIDTH-1:0];
        req_hold_live = req_hold_valid && entries[req_hold_slot].valid && (entries[req_hold_slot].uop.ldq_idx == req_hold_idx);
        req_hold_killed = req_hold_live && entry_killed[req_hold_slot];

        dmem_req_valid = req_hold_live && !req_hold_killed && !flush_pipeline;
        dmem_req_addr = req_hold_addr;
        dmem_req_cacheable = req_hold_cacheable;
        dmem_req_idx = req_hold_idx;
        dmem_req_uop = req_hold_uop;
        dmem_req_fire = dmem_req_valid && dmem_req_ready;
    end

    always_comb begin
        resp_slot = dmem_resp_idx[SLOT_WIDTH-1:0];
        resp_match = dmem_resp_valid && entries[resp_slot].valid && entries[resp_slot].requested && !entries[resp_slot].completed &&
                     (entries[resp_slot].uop.ldq_idx == dmem_resp_idx) && !entry_killed[resp_slot] && !flush_pipeline;
        
        fwd_hold_slot = fwd_hold_idx[SLOT_WIDTH-1:0];
        fwd_hold_live = fwd_hold_valid && entries[fwd_hold_slot].valid && entries[fwd_hold_slot].forward_pending &&
                        (entries[fwd_hold_slot].uop.ldq_idx == fwd_hold_idx);
        fwd_hold_killed = fwd_hold_live && entry_killed[fwd_hold_slot];
        fwd_wb_fire = fwd_hold_live && !fwd_hold_killed && !flush_pipeline && !resp_match;

        wb_slot = resp_match ? resp_slot : fwd_hold_slot;
        wb_raw_data = resp_match ? dmem_resp_data : fwd_hold_data;

        resp_shifted_data = wb_raw_data >> (8 * entries[wb_slot].addr[1:0]);

        resp_formatted_data = '0;
        case(entries[wb_slot].uop.mem_size)
            2'b00: begin
                if(entries[wb_slot].uop.mem_signed) resp_formatted_data = {{(XLEN-8){resp_shifted_data[7]}}, resp_shifted_data[7:0]};
                else resp_formatted_data = {{(XLEN-8){1'b0}}, resp_shifted_data[7:0]};
            end
            2'b01: begin
                if(entries[wb_slot].uop.mem_signed) resp_formatted_data = {{(XLEN-16){resp_shifted_data[15]}}, resp_shifted_data[15:0]};
                else resp_formatted_data = {{(XLEN-16){1'b0}}, resp_shifted_data[15:0]};
            end
            2'b10: begin
                resp_formatted_data = resp_shifted_data;
            end
            default: resp_formatted_data = '0;
        endcase

        load_wb_valid = resp_match || fwd_wb_fire;

        load_wb_resp = '0;
        load_wb_resp.valid = load_wb_valid;
        load_wb_resp.uop = entries[wb_slot].uop;
        load_wb_resp.uop.br_mask = entries[wb_slot].uop.br_mask & ~brupdate.b1.resolve_mask;
        load_wb_resp.data = resp_formatted_data;
    end

    always_comb begin
        ldq_empty = 1'b1;

        if(!flush_pipeline) begin
            for(int i = 0; i < NUM_ENTRIES; i++) begin
                if(entries[i].valid && !entry_killed[i]) ldq_empty = 1'b0;
            end
        end
    end
endmodule