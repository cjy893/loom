import loom_params::*;
import loom_consts::*;
import loom_types::*;

module rename_test_top (
    input  logic clk,
    input  logic rst_n,

    input  logic [1:0] in_valid,
    input  logic [4:0] in_lsrc1_0,
    input  logic [4:0] in_lsrc2_0,
    input  logic [4:0] in_ldst_0,
    input  logic [3:0] in_br_mask_0,
    input  logic [4:0] in_lsrc1_1,
    input  logic [4:0] in_lsrc2_1,
    input  logic [4:0] in_ldst_1,
    input  logic [3:0] in_br_mask_1,
    input  logic       in_allocate_brtag_0,
    input  logic [1:0] in_br_tag_0,
    input  logic       in_allocate_brtag_1,
    input  logic [1:0] in_br_tag_1,

    input  logic wakeup_valid,
    input  logic [5:0] wakeup_pdst,

    input  logic commit_valid,
    input  logic [4:0] commit_ldst,
    input  logic [5:0] commit_pdst,
    input  logic [5:0] commit_stale_pdst,
    input  logic rollback,
    input  logic kill,
    input  logic br_mispredict,
    input  logic [1:0] br_mispredict_tag,
    input  logic dis_ready,
    input  logic [1:0] dis_fire,

    output logic [1:0] out_valid,
    output logic [5:0] out_psrc1_0,
    output logic [5:0] out_psrc2_0,
    output logic [5:0] out_pdst_0,
    output logic [5:0] out_stale_0,
    output logic       out_psrc1_busy_0,
    output logic [5:0] out_psrc1_1,
    output logic [5:0] out_psrc2_1,
    output logic [5:0] out_pdst_1,
    output logic [5:0] out_stale_1,
    output logic       out_psrc1_busy_1,
    output logic [1:0] stalls
);
    uop_t [1:0] dec_uops;
    uop_t [1:0] rn_uops;
    uop_t [1:0] commit_uops;
    wakeup_t [5:0] wakeups;
    br_update_info_t brupdate;
    logic [1:0] dec_fire;

    assign dec_fire = in_valid & {2{!(|stalls)}};

    always_comb begin
        dec_uops = '0;
        dec_uops[0].lsrc1 = in_lsrc1_0;
        dec_uops[0].lsrc2 = in_lsrc2_0;
        dec_uops[0].ldst = in_ldst_0;
        dec_uops[0].dst_rtype = RT_FIX;
        dec_uops[0].lsrc1_rtype = RT_FIX;
        dec_uops[0].lsrc2_rtype = RT_FIX;
        dec_uops[0].allocate_brtag = in_allocate_brtag_0;
        dec_uops[0].br_tag = in_br_tag_0;
        dec_uops[0].br_mask = in_br_mask_0;

        dec_uops[1].lsrc1 = in_lsrc1_1;
        dec_uops[1].lsrc2 = in_lsrc2_1;
        dec_uops[1].ldst = in_ldst_1;
        dec_uops[1].dst_rtype = RT_FIX;
        dec_uops[1].lsrc1_rtype = RT_FIX;
        dec_uops[1].lsrc2_rtype = RT_FIX;
        dec_uops[1].allocate_brtag = in_allocate_brtag_1;
        dec_uops[1].br_tag = in_br_tag_1;
        dec_uops[1].br_mask = in_br_mask_1;

        wakeups = '0;
        wakeups[0].valid = wakeup_valid;
        wakeups[0].uop.pdst = wakeup_pdst;

        commit_uops = '0;
        commit_uops[0].ldst = commit_ldst;
        commit_uops[0].pdst = commit_pdst;
        commit_uops[0].stale_pdst = commit_stale_pdst;
        commit_uops[0].dst_rtype = RT_FIX;
        brupdate = '0;
        brupdate.b2.mispredict = br_mispredict;
        brupdate.b2.uop.br_tag = br_mispredict_tag;
        if(br_mispredict) begin
            brupdate.b1.resolve_mask[br_mispredict_tag] = 1'b1;
            brupdate.b1.mispredict_mask[br_mispredict_tag] = 1'b1;
        end
    end

    rename_stage #(
        .CORE_WIDTH(2),
        .PHYSICAL_REGS(48),
        .WAKEUP_PORTS(6),
        .IS_FP(0)
    ) dut (
        .clk,
        .rst_n,
        .dec_valids(in_valid),
        .dec_fire,
        .dec_uops,
        .wakeups,
        .brupdate,
        .kill,
        .commit_valids({1'b0, commit_valid}),
        .commit_uops,
        .rollback,
        .dis_fire,
        .dis_ready,
        .rn_stalls(stalls),
        .rn2_mask(out_valid),
        .rn2_uops(rn_uops),
        .child_rebusys('0)
    );

    assign out_psrc1_0 = rn_uops[0].psrc1;
    assign out_psrc2_0 = rn_uops[0].psrc2;
    assign out_pdst_0 = rn_uops[0].pdst;
    assign out_stale_0 = rn_uops[0].stale_pdst;
    assign out_psrc1_busy_0 = rn_uops[0].psrc1_busy;
    assign out_psrc1_1 = rn_uops[1].psrc1;
    assign out_psrc2_1 = rn_uops[1].psrc2;
    assign out_pdst_1 = rn_uops[1].pdst;
    assign out_stale_1 = rn_uops[1].stale_pdst;
    assign out_psrc1_busy_1 = rn_uops[1].psrc1_busy;
endmodule
