import loom_params::*;
import loom_consts::*;
import loom_types::*;

module issue_test_top (
    input  logic clk,
    input  logic rst_n,
    input  logic dis_valid,
    input  logic [5:0] dis_rob_idx,
    input  logic [5:0] dis_psrc1,
    input  logic       dis_psrc1_busy,
    input  logic [3:0] dis_br_mask,
    output logic       dis_ready,

    input  logic       wakeup_valid,
    input  logic [5:0] wakeup_pdst,
    input  logic [3:0] resolve_mask,
    input  logic [3:0] mispredict_mask,
    input  logic       flush_pipeline,
    input  logic       squash_grant,

    output logic [1:0] iss_valid,
    output logic [5:0] iss_rob_idx_0,
    output logic [5:0] iss_rob_idx_1,
    output logic [3:0] iss_br_mask_0
);
    uop_t [0:0] dis_uop;
    uop_t [1:0] iss_uop;
    br_update_info_t brupdate;

    always_comb begin
        dis_uop = '0;
        dis_uop[0].rob_idx = dis_rob_idx;
        dis_uop[0].psrc1 = dis_psrc1;
        dis_uop[0].psrc1_busy = dis_psrc1_busy;
        dis_uop[0].br_mask = dis_br_mask;
        dis_uop[0].dst_rtype = RT_FIX;
        dis_uop[0].fu_code[FC_ALU] = 1'b1;
        brupdate = '0;
        brupdate.b1.resolve_mask = resolve_mask;
        brupdate.b1.mispredict_mask = mispredict_mask;
        brupdate.b2.mispredict = |mispredict_mask;
    end

    issue_unit_collapsing #(
        .NUM_ENTRIES(4),
        .ISSUE_WIDTH(2),
        .DISPATCH_WIDTH(1),
        .NUM_WAKEUP_PORTS(1),
        .PREG_SZ(6),
        .IS_MEM(0)
    ) dut (
        .clk,
        .rst_n,
        .dis_valid,
        .dis_uop,
        .dis_ready,
        .iss_valid,
        .iss_uop,
        .wakeup_valid,
        .wakeup_pdst,
        .brupdate,
        .rob_head_idx('0),
        .flush_pipeline,
        .squash_grant
    );

    assign iss_rob_idx_0 = iss_uop[0].rob_idx;
    assign iss_rob_idx_1 = iss_uop[1].rob_idx;
    assign iss_br_mask_0 = iss_uop[0].br_mask;
endmodule
