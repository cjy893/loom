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
    input logic flush_pipeline,
    input logic squash_grant
);
    logic [NUM_ENTRIES-1:0] slot_valid;
    uop_t [NUM_ENTRIES-1:0] slot_uop;
    logic [NUM_ENTRIES-1:0] slot_killed;
    logic [NUM_ENTRIES-1:0] slot_ready;
    logic [NUM_ENTRIES-1:0] slot_grant;
    logic [DISPATCH_WIDTH-1:0][$clog2(NUM_ENTRIES)-1:0] dis_slot;

    always_comb begin
        logic [NUM_ENTRIES-1:0] available;
        logic [ISSUE_WIDTH-1:0] port_used;

        slot_killed = '0;
        slot_ready = '0;
        slot_grant = '0;
        iss_valid = '0;
        iss_uop = '0;
        port_used = '0;

        for (int i = 0; i < NUM_ENTRIES; i++) begin
            slot_killed[i] = |(slot_uop[i].br_mask & brupdate.b1.mispredict_mask);
            slot_ready[i] = slot_valid[i] && !slot_killed[i] &&
                            !slot_uop[i].prs1_busy &&
                            !slot_uop[i].prs2_busy &&
                            !slot_uop[i].prs3_busy;
            for (int p = 0; p < ISSUE_WIDTH; p++) begin
                if (slot_ready[i] && !port_used[p]) begin
                    iss_valid[p] = !squash_grant;
                    iss_uop[p] = slot_uop[i];
                    slot_grant[i] = !squash_grant;
                    port_used[p] = 1'b1;
                    break;
                end
            end
        end

        // An issuing/killed slot can accept a replacement on the same edge.
        available = ~slot_valid | slot_grant | slot_killed;
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

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n || flush_pipeline) begin
            slot_valid <= '0;
        end else begin
            for (int i = 0; i < NUM_ENTRIES; i++) begin
                if (slot_grant[i] || slot_killed[i])
                    slot_valid[i] <= 1'b0;

                for (int w = 0; w < NUM_WAKEUP_PORTS; w++) begin
                    if (wakeup_valid[w]) begin
                        if (slot_uop[i].prs1 == wakeup_pdst[w] && wakeup_pdst[w] != '0)
                            slot_uop[i].prs1_busy <= 1'b0;
                        if (slot_uop[i].prs2 == wakeup_pdst[w] && wakeup_pdst[w] != '0)
                            slot_uop[i].prs2_busy <= 1'b0;
                        if (slot_uop[i].prs3 == wakeup_pdst[w] && wakeup_pdst[w] != '0)
                            slot_uop[i].prs3_busy <= 1'b0;
                    end
                end
            end

            for (int d = 0; d < DISPATCH_WIDTH; d++) begin
                if (dis_valid[d] && dis_ready[d]) begin
                    slot_valid[dis_slot[d]] <= 1'b1;
                    slot_uop[dis_slot[d]] <= dis_uop[d];
                    for (int w = 0; w < NUM_WAKEUP_PORTS; w++) begin
                        if (wakeup_valid[w]) begin
                            if (dis_uop[d].prs1 == wakeup_pdst[w] && wakeup_pdst[w] != '0)
                                slot_uop[dis_slot[d]].prs1_busy <= 1'b0;
                            if (dis_uop[d].prs2 == wakeup_pdst[w] && wakeup_pdst[w] != '0)
                                slot_uop[dis_slot[d]].prs2_busy <= 1'b0;
                            if (dis_uop[d].prs3 == wakeup_pdst[w] && wakeup_pdst[w] != '0)
                                slot_uop[dis_slot[d]].prs3_busy <= 1'b0;
                        end
                    end
                end
            end
        end
    end
endmodule
