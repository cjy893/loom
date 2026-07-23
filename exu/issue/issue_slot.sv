import loom_params::*;
import loom_consts::*;
import loom_types::*;

module issue_slot #(
    parameter int NUM_WAKEUP_PORTS = 6,
    parameter int PREG_SZ = 6,
    parameter int ROB_ADDR_SZ = 6,
    parameter bit IS_MEM = 0
)(
    input logic clk,
    input logic rst_n,

    output logic valid,
    output logic request,
    output uop_t iss_uop,

    input logic in_valid,
    input uop_t in_uop,
    output logic in_ready,

    input logic [NUM_WAKEUP_PORTS-1:0] wakeup_valid,
    input logic [NUM_WAKEUP_PORTS-1:0][PREG_SZ-1:0] wakeup_pdst,

    input logic grant,
    input logic kill,
    input logic clear,
    input br_update_info_t brupdate
);

    logic slot_valid;
    uop_t slot_uop;

    logic killed;
    always_comb begin
        killed = 1'b0;
        if(brupdate.b2.mispredict) begin
            if((slot_uop.br_mask & brupdate.b1.mispredict_mask) != '0) killed = 1'b1;
        end
        if(kill) killed = 1'b1;
    end

    uop_t next_uop;
    logic prs1_wake, prs2_wake, prs3_wake;
    always_comb begin
        next_uop = slot_uop;
        next_uop.br_mask = slot_uop.br_mask & ~brupdate.b1.resolve_mask;

        prs1_wake = 1'b0;
        prs2_wake = 1'b0;
        prs3_wake = 1'b0;

        for(int i = 0; i < NUM_WAKEUP_PORTS; i++) begin
            if(wakeup_valid[i]) begin
                if(wakeup_pdst[i] == slot_uop.prs1 && slot_uop.prs1 != '0) prs1_wake = 1'b1;
                if(wakeup_pdst[i] == slot_uop.prs2 && slot_uop.prs2 != '0) prs2_wake = 1'b1;
                if(wakeup_pdst[i] == slot_uop.prs3 && slot_uop.prs3 != '0) prs3_wake = 1'b1;
            end
        end

        if(prs1_wake) next_uop.prs1_busy = 1'b0;
        if(prs2_wake) next_uop.prs2_busy = 1'b0;
        if(prs3_wake) next_uop.prs3_busy = 1'b0;

        next_uop.iw_issued = 1'b0;
        if(grant) next_uop.iw_issued = 1'b1;
    end

    wire iss_ready;
    assign iss_ready = !next_uop.prs1_busy && !next_uop.prs2_busy && !next_uop.prs3_busy;

    wire agen_ready, dgen_ready;
    if(IS_MEM) begin
        assign agen_ready = slot_uop.fu_code[FC_AGEN] && !next_uop.prs1_busy;
        assign dgen_ready = slot_uop.fu_code[FC_DGEN] && !next_uop.prs2_busy;
    end else begin
        assign agen_ready = 1'b0;
        assign dgen_ready = 1'b0;
    end

    assign request = slot_valid && !slot_uop.iw_issued && (iss_ready || agen_ready || dgen_ready) && !killed;
    assign in_ready = !slot_valid || (slot_uop.iw_issued && !request);

    always_comb begin
        iss_uop = next_uop;
        if(IS_MEM) begin
            if(slot_uop.fu_code[FC_AGEN] && slot_uop.fu_code[FC_DGEN]) begin
                if(agen_ready) iss_uop.fu_code[FC_DGEN] = 1'b0;
                else if(dgen_ready) begin
                    iss_uop.fu_code[FC_AGEN] = 1'b0;
                    iss_uop.prs1 = slot_uop.prs2;
                    iss_uop.lrs1_rtype = slot_uop.lrs2_rtype;
                    iss_uop.imm_sel = IS_N;
                end
            end else if(slot_uop.fu_code[FC_DGEN]) begin
                iss_uop.imm_sel = IS_N;
                iss_uop.prs1 = slot_uop.prs2;
                iss_uop.lrs1_rtype = slot_uop.lrs2_rtype;
            end
            iss_uop.lrs2_rtype = RT_X;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) slot_valid <= 1'b0;
        else if (kill || killed) slot_valid <= 1'b0;
        else if (in_valid) slot_valid <= 1'b1;
        else if (grant && !IS_MEM) slot_valid <= 1'b0;
        else if (clear) slot_valid <= 1'b0;
    end

    always_ff @(posedge clk) begin
        if(in_valid) begin
            slot_uop <= in_uop;
            slot_uop.iw_issued <= 1'b0;
        end else if(!kill && !killed) begin
            if(grant) slot_uop.iw_issued <= 1'b1;

            if(IS_MEM) begin
                if(grant && agen_ready && dgen_ready && slot_uop.fu_code[FC_AGEN] && slot_uop.fu_code[FC_DGEN] && !slot_uop.iw_issued_partial_agen && !slot_uop.iw_issued_partial_dgen) begin
                    slot_uop.iw_issued_partial_agen <= 1'b1;
                    slot_uop.iw_issued <= 1'b0;
                end
                if(grant && agen_ready && slot_uop.fu_code[FC_DGEN] && !dgen_ready && !slot_uop.iw_issued_partial_dgen) begin
                    slot_uop.iw_issued_partial_agen <= 1'b1;
                    slot_uop.iw_issued <= 1'b0;
                end
                if(grant && dgen_ready && slot_uop.fu_code[FC_AGEN] && !agen_ready && !slot_uop.iw_issued_partial_agen) begin
                    slot_uop.iw_issued_partial_dgen <= 1'b1;
                    slot_uop.iw_issued <= 1'b0;
                end
                if(slot_uop.iw_issued_partial_agen && grant && dgen_ready) slot_uop.iw_issued <= 1'b1;
                if(slot_uop.iw_issued_partial_dgen && grant && agen_ready) slot_uop.iw_issued <= 1'b1;
            end

            for(int i = 0; i < NUM_WAKEUP_PORTS; i++) begin
                if(wakeup_valid[i]) begin
                    if(wakeup_pdst[i] == slot_uop.prs1) slot_uop.prs1_busy <= 1'b0;
                    if(wakeup_pdst[i] == slot_uop.prs2) slot_uop.prs2_busy <= 1'b0;
                    if(wakeup_pdst[i] == slot_uop.prs3) slot_uop.prs3_busy <= 1'b0;
                end
            end
        end
    end
endmodule