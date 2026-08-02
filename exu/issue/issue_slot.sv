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
        killed = kill || |(slot_uop.br_mask & brupdate.b1.mispredict_mask);
    end

    uop_t next_uop;
    logic psrc1_wake, psrc2_wake, psrc3_wake;
    always_comb begin
        next_uop = slot_uop;
        next_uop.br_mask = slot_uop.br_mask & ~brupdate.b1.resolve_mask;

        psrc1_wake = 1'b0;
        psrc2_wake = 1'b0;
        psrc3_wake = 1'b0;

        for(int i = 0; i < NUM_WAKEUP_PORTS; i++) begin
            if(wakeup_valid[i]) begin
                if(wakeup_pdst[i] == slot_uop.psrc1 && slot_uop.psrc1 != '0) psrc1_wake = 1'b1;
                if(wakeup_pdst[i] == slot_uop.psrc2 && slot_uop.psrc2 != '0) psrc2_wake = 1'b1;
                if(wakeup_pdst[i] == slot_uop.psrc3 && slot_uop.psrc3 != '0) psrc3_wake = 1'b1;
            end
        end

        if(psrc1_wake) next_uop.psrc1_busy = 1'b0;
        if(psrc2_wake) next_uop.psrc2_busy = 1'b0;
        if(psrc3_wake) next_uop.psrc3_busy = 1'b0;

        next_uop.iw_issued = 1'b0;
        if(grant) next_uop.iw_issued = 1'b1;
    end

    wire iss_ready;
    assign iss_ready = !next_uop.psrc1_busy && !next_uop.psrc2_busy && !next_uop.psrc3_busy;

    wire agen_ready, dgen_ready;
    if(IS_MEM) begin
        assign agen_ready = slot_uop.fu_code[FC_AGEN] && !next_uop.psrc1_busy;
        assign dgen_ready = slot_uop.fu_code[FC_DGEN] && !next_uop.psrc2_busy;
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
                    iss_uop.psrc1 = slot_uop.psrc2;
                    iss_uop.lsrc1_rtype = slot_uop.lsrc2_rtype;
                    iss_uop.imm_sel = IMM_NONE;
                end
            end else if(slot_uop.fu_code[FC_DGEN]) begin
                iss_uop.imm_sel = IMM_NONE;
                iss_uop.psrc1 = slot_uop.psrc2;
                iss_uop.lsrc1_rtype = slot_uop.lsrc2_rtype;
            end
            iss_uop.lsrc2_rtype = RT_X;
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
                    if(wakeup_pdst[i] == slot_uop.psrc1) slot_uop.psrc1_busy <= 1'b0;
                    if(wakeup_pdst[i] == slot_uop.psrc2) slot_uop.psrc2_busy <= 1'b0;
                    if(wakeup_pdst[i] == slot_uop.psrc3) slot_uop.psrc3_busy <= 1'b0;
                end
            end
        end
    end
endmodule
