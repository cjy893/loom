import loom_params::*;
import loom_consts::*;
import loom_types::*;

module issue_unit_collapsing #(
    parameter int NUM_ENTRIES = 16,
    parameter int ISSUE_WIDTH = 2,
    parameter int DISPATCH_WIDTH = 1,
    parameter int NUM_WAKEUP_PORTS = 6,
    parameter int PREG_SZ = 6,
    parameter bit IS_MEM = 0
)(
    input logic clk,
    input logic rst_n,

    input logic [DISPATCH_WIDTH-1:0] dis_valid,
    input uop_t [DISPATCH_WIDTH-1:0] dis_uop,
    output logic [DISPATCH_WIDTH-1:0] dis_ready,

    output logic [ISSUE_WIDTH-1:0] iss_valid,
    output uop_t [ISSUE_WIDTH-1:0] iss_uop,

    input logic [NUM_WAKEUP_PORTS-1:0] wakeup_valid,
    input logic [NUM_WAKEUP_PORTS-1:0][PREG_SZ-1:0] wakeup_pdst,

    input br_update_info_t brupdate,
    input logic [ROB_ADDR_SZ-1:0] rob_head_idx,
    input logic flush_pipeline,
    input logic squash_grant
);
    localparam int UOP_BITS = $bits(uop_t);

    logic [NUM_ENTRIES-1:0] slot_valid;
    uop_t [NUM_ENTRIES-1:0] slot_uop;
    logic [NUM_ENTRIES-1:0] slot_killed;
    logic [NUM_ENTRIES-1:0] slot_ready;
    logic [NUM_ENTRIES-1:0] slot_grant;
    logic [NUM_ENTRIES-1:0] slot_complete;
    logic [NUM_ENTRIES-1:0] slot_agen_ready;
    logic [NUM_ENTRIES-1:0] slot_dgen_ready;
    logic [NUM_ENTRIES-1:0] issue_agen;
    logic [NUM_ENTRIES-1:0] issue_dgen;
    logic [DISPATCH_WIDTH-1:0][$clog2(NUM_ENTRIES)-1:0] dis_slot;
    logic [DISPATCH_WIDTH-1:0] dis_br_killed;
    uop_t [DISPATCH_WIDTH-1:0] dis_uop_updated;
    logic [DISPATCH_WIDTH-1:0] alloc_fire;

    // older_q[i][j] means that the uop in slot j is older than slot i.
    logic [NUM_ENTRIES-1:0][NUM_ENTRIES-1:0] older_q;
    logic [NUM_ENTRIES-1:0][NUM_ENTRIES-1:0] older_n;
    logic [NUM_ENTRIES-1:0] oldest_ready;
    logic [NUM_ENTRIES-1:0] survivor;

    logic [UOP_BITS-1:0][NUM_ENTRIES-1:0] uop_mux_terms;
    logic [UOP_BITS-1:0] selected_uop_bits;
    uop_t selected_uop;

    always_comb begin
        dis_br_killed = '0;
        dis_uop_updated = dis_uop;
        for(int d = 0; d < DISPATCH_WIDTH; d++) begin
            dis_br_killed[d] = dis_valid[d] && |(dis_uop[d].br_mask & brupdate.b1.mispredict_mask);
            dis_uop_updated[d].br_mask = dis_uop[d].br_mask & ~brupdate.b1.resolve_mask;
            dis_uop_updated[d].iw_issued = 1'b0;
            dis_uop_updated[d].iw_issued_partial_agen = 1'b0;
            dis_uop_updated[d].iw_issued_partial_dgen = 1'b0;
        end
    end

    always_comb begin
        logic [NUM_ENTRIES-1:0] available;
        logic [ISSUE_WIDTH-1:0] port_used;

        slot_killed = '0;
        slot_ready = '0;
        slot_grant = '0;
        slot_complete = '0;
        slot_agen_ready = '0;
        slot_dgen_ready = '0;
        issue_agen = '0;
        issue_dgen = '0;
        oldest_ready = '0;
        uop_mux_terms = '0;
        selected_uop_bits = '0;
        selected_uop = '0;
        iss_valid = '0;
        iss_uop = '0;
        port_used = '0;

        for (int i = 0; i < NUM_ENTRIES; i++) begin
            slot_killed[i] = |(slot_uop[i].br_mask & brupdate.b1.mispredict_mask);
            if (IS_MEM) begin
                slot_agen_ready[i] = slot_valid[i] && !slot_killed[i] &&
                                     slot_uop[i].fu_code[FC_AGEN] &&
                                     !slot_uop[i].iw_issued_partial_agen &&
                                     !slot_uop[i].psrc1_busy;
                slot_dgen_ready[i] = slot_valid[i] && !slot_killed[i] &&
                                     slot_uop[i].fu_code[FC_DGEN] &&
                                     !slot_uop[i].iw_issued_partial_dgen &&
                                     !slot_uop[i].psrc2_busy;
                slot_ready[i] = slot_agen_ready[i] || slot_dgen_ready[i];
            end else begin
                slot_ready[i] = slot_valid[i] && !slot_killed[i] &&
                                !slot_uop[i].psrc1_busy &&
                                !slot_uop[i].psrc2_busy &&
                                !slot_uop[i].psrc3_busy;
            end
        end

        if (IS_MEM) begin
            // Select the oldest ready entry using the registered age matrix.
            // Each row is reduced in parallel, avoiding a serial min-distance
            // comparator chain through every MEM IQ entry.
            for (int i = 0; i < NUM_ENTRIES; i++) begin
                oldest_ready[i] = slot_ready[i] &&
                                  !(|(older_q[i] & slot_ready));
            end

            slot_grant = oldest_ready & {NUM_ENTRIES{!squash_grant}};
            issue_agen = slot_grant & slot_agen_ready;
            issue_dgen = slot_grant & slot_dgen_ready;

            // Transpose the one-hot payload mux so each output bit is a
            // reduction tree rather than a priority assignment chain.
            for (int b = 0; b < UOP_BITS; b++) begin
                for (int i = 0; i < NUM_ENTRIES; i++) begin
                    uop_mux_terms[b][i] = slot_uop[i][b] & slot_grant[i];
                end
                selected_uop_bits[b] = |uop_mux_terms[b];
            end

            selected_uop = uop_t'(selected_uop_bits);
            iss_valid[0] = |slot_grant;
            iss_uop[0] = selected_uop;
            iss_uop[0].br_mask = selected_uop.br_mask &
                                 ~brupdate.b1.resolve_mask;
            iss_uop[0].fu_code[FC_AGEN] = |issue_agen;
            iss_uop[0].fu_code[FC_DGEN] = |issue_dgen;

            for (int i = 0; i < NUM_ENTRIES; i++) begin
                slot_complete[i] = slot_grant[i] &&
                    ((!slot_uop[i].fu_code[FC_AGEN]) ||
                     slot_uop[i].iw_issued_partial_agen ||
                     issue_agen[i]) &&
                    ((!slot_uop[i].fu_code[FC_DGEN]) ||
                     slot_uop[i].iw_issued_partial_dgen ||
                     issue_dgen[i]);
            end
        end else begin
            for (int i = 0; i < NUM_ENTRIES; i++) begin
                for (int p = 0; p < ISSUE_WIDTH; p++) begin
                    if (slot_ready[i] && !port_used[p]) begin
                        iss_valid[p] = !squash_grant;
                        iss_uop[p] = slot_uop[i];
                        iss_uop[p].br_mask = slot_uop[i].br_mask & ~brupdate.b1.resolve_mask;
                        slot_grant[i] = !squash_grant;
                        slot_complete[i] = !squash_grant;
                        port_used[p] = 1'b1;
                        break;
                    end
                end
            end
        end

        // MEM dispatch only observes registered vacancies. This deliberately
        // gives up same-cycle refill to break issue-select -> completion ->
        // dispatch-ready timing. Other queues keep their existing refill path.
        if (IS_MEM)
            available = ~slot_valid;
        else
            available = ~slot_valid | slot_complete | slot_killed;
        dis_ready = '0;
        dis_slot = '0;
        for (int d = 0; d < DISPATCH_WIDTH; d++) begin
            for (int i = 0; i < NUM_ENTRIES; i++) begin
                if (!dis_ready[d] && available[i]) begin
                    dis_ready[d] = 1'b1;
                    dis_slot[d] = i[$clog2(NUM_ENTRIES)-1:0];
                    available[i] = 1'b0;
                end
            end
        end
    end

    always_comb begin
        alloc_fire = '0;
        older_n = older_q;
        survivor = slot_valid & ~slot_complete & ~slot_killed;

        for (int d = 0; d < DISPATCH_WIDTH; d++) begin
            alloc_fire[d] = dis_valid[d] && dis_ready[d] &&
                            !dis_br_killed[d];
        end

        if (IS_MEM) begin
            // Remove stale rows and columns before inserting new entries.
            for (int i = 0; i < NUM_ENTRIES; i++) begin
                for (int j = 0; j < NUM_ENTRIES; j++) begin
                    if (!survivor[i] || !survivor[j])
                        older_n[i][j] = 1'b0;
                end
            end

            // A dispatched uop is younger than every surviving entry. For two
            // dispatches in one cycle, the lower dispatch lane is older.
            for (int d = 0; d < DISPATCH_WIDTH; d++) begin
                if (alloc_fire[d]) begin
                    for (int j = 0; j < NUM_ENTRIES; j++) begin
                        older_n[dis_slot[d]][j] = survivor[j];
                        older_n[j][dis_slot[d]] = 1'b0;
                    end

                    for (int e = 0; e < d; e++) begin
                        if (alloc_fire[e]) begin
                            older_n[dis_slot[d]][dis_slot[e]] = 1'b1;
                            older_n[dis_slot[e]][dis_slot[d]] = 1'b0;
                        end
                    end
                    older_n[dis_slot[d]][dis_slot[d]] = 1'b0;
                end
            end
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n || flush_pipeline)
            older_q <= '0;
        else
            older_q <= older_n;
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n || flush_pipeline) begin
            slot_valid <= '0;
        end else begin
            for (int i = 0; i < NUM_ENTRIES; i++) begin
                slot_uop[i].br_mask <= slot_uop[i].br_mask & ~brupdate.b1.resolve_mask;
                if (slot_complete[i] || slot_killed[i])
                    slot_valid[i] <= 1'b0;

                if (slot_grant[i] && !slot_complete[i]) begin
                    if (issue_agen[i])
                        slot_uop[i].iw_issued_partial_agen <= 1'b1;
                    if (issue_dgen[i])
                        slot_uop[i].iw_issued_partial_dgen <= 1'b1;
                end

                for (int w = 0; w < NUM_WAKEUP_PORTS; w++) begin
                    if (wakeup_valid[w]) begin
                        if (slot_uop[i].psrc1 == wakeup_pdst[w] && wakeup_pdst[w] != '0)
                            slot_uop[i].psrc1_busy <= 1'b0;
                        if (slot_uop[i].psrc2 == wakeup_pdst[w] && wakeup_pdst[w] != '0)
                            slot_uop[i].psrc2_busy <= 1'b0;
                        if (slot_uop[i].psrc3 == wakeup_pdst[w] && wakeup_pdst[w] != '0)
                            slot_uop[i].psrc3_busy <= 1'b0;
                    end
                end
            end

            for (int d = 0; d < DISPATCH_WIDTH; d++) begin
                if (dis_valid[d] && dis_ready[d] && !dis_br_killed[d]) begin
                    slot_valid[dis_slot[d]] <= 1'b1;
                    slot_uop[dis_slot[d]] <= dis_uop_updated[d];
                    for (int w = 0; w < NUM_WAKEUP_PORTS; w++) begin
                        if (wakeup_valid[w]) begin
                            if (dis_uop_updated[d].psrc1 == wakeup_pdst[w] && wakeup_pdst[w] != '0)
                                slot_uop[dis_slot[d]].psrc1_busy <= 1'b0;
                            if (dis_uop_updated[d].psrc2 == wakeup_pdst[w] && wakeup_pdst[w] != '0)
                                slot_uop[dis_slot[d]].psrc2_busy <= 1'b0;
                            if (dis_uop_updated[d].psrc3 == wakeup_pdst[w] && wakeup_pdst[w] != '0)
                                slot_uop[dis_slot[d]].psrc3_busy <= 1'b0;
                        end
                    end
                end
            end
        end
    end
endmodule
