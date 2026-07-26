import loom_params::*;
import loom_consts::*;
import loom_types::*;

module mem_issue_test_top (
    input  logic        clk,
    input  logic        rst_n,

    input  logic        dis_valid,
    output logic        dis_ready,
    input  logic [5:0]  dis_rob_idx,
    input  logic [5:0]  dis_psrc1,
    input  logic [5:0]  dis_psrc2,
    input  logic        dis_psrc1_busy,
    input  logic        dis_psrc2_busy,
    input  logic        dis_use_agen,
    input  logic        dis_use_dgen,

    input  logic        wakeup_valid_0,
    input  logic [5:0]  wakeup_pdst_0,
    input  logic        wakeup_valid_1,
    input  logic [5:0]  wakeup_pdst_1,

    input  logic [31:0] src1_data,
    input  logic [31:0] src2_data,
    input  logic [31:0] imm_data,

    input  logic [3:0]  resolve_mask,
    input  logic [3:0]  mispredict_mask,
    input  logic        br_mispredict,
    input  logic        flush_pipeline,

    output logic        iss_valid,
    output logic [5:0]  iss_rob_idx,
    output logic        iss_use_agen,
    output logic        iss_use_dgen,

    output logic        agen_valid,
    output logic [31:0] agen_addr,
    output logic [5:0]  agen_rob_idx,
    output logic        dgen_valid,
    output logic [31:0] dgen_data,
    output logic [5:0]  dgen_rob_idx
);
    uop_t [0:0] dis_uop;
    uop_t [0:0] iss_uop;
    uop_t agen_uop;
    uop_t dgen_uop;
    logic [0:0] dis_ready_vec;
    logic [0:0] iss_valid_vec;
    logic [1:0] wakeup_valid;
    logic [1:0][5:0] wakeup_pdst;
    br_update_info_t brupdate;

    always_comb begin
        dis_uop[0] = '0;
        dis_uop[0].rob_idx = dis_rob_idx;
        dis_uop[0].psrc1 = dis_psrc1;
        dis_uop[0].psrc2 = dis_psrc2;
        dis_uop[0].psrc1_busy = dis_psrc1_busy;
        dis_uop[0].psrc2_busy = dis_psrc2_busy;
        dis_uop[0].fu_code[FC_AGEN] = dis_use_agen;
        dis_uop[0].fu_code[FC_DGEN] = dis_use_dgen;
        dis_uop[0].uses_ldq = dis_use_agen && !dis_use_dgen;
        dis_uop[0].uses_stq = dis_use_dgen;

        wakeup_valid[0] = wakeup_valid_0;
        wakeup_pdst[0] = wakeup_pdst_0;
        wakeup_valid[1] = wakeup_valid_1;
        wakeup_pdst[1] = wakeup_pdst_1;

        brupdate = '0;
        brupdate.b1.resolve_mask = resolve_mask;
        brupdate.b1.mispredict_mask = mispredict_mask;
        brupdate.b2.mispredict = br_mispredict;
    end

    issue_unit_collapsing #(
        .NUM_ENTRIES(4),
        .ISSUE_WIDTH(1),
        .DISPATCH_WIDTH(1),
        .NUM_WAKEUP_PORTS(2),
        .PREG_SZ(6),
        .IS_MEM(1)
    ) issue_dut (
        .clk,
        .rst_n,
        .dis_valid(dis_valid),
        .dis_uop,
        .dis_ready(dis_ready_vec),
        .iss_valid(iss_valid_vec),
        .iss_uop,
        .wakeup_valid,
        .wakeup_pdst,
        .brupdate,
        .flush_pipeline,
        .squash_grant(1'b0)
    );

    mem #(
        .HAS_AGEN(1),
        .HAS_DGEN(1)
    ) mem_dut (
        .clk,
        .rst_n,
        .iss_valid(iss_valid_vec[0]),
        .iss_uop(iss_uop[0]),
        .src1_data,
        .src2_data,
        .imm_data,
        .agen_valid,
        .agen_addr,
        .agen_uop,
        .dgen_valid,
        .dgen_data,
        .dgen_uop,
        .xcpt(),
        .brupdate,
        .kill(flush_pipeline)
    );

    assign dis_ready = dis_ready_vec[0];
    assign iss_valid = iss_valid_vec[0];
    assign iss_rob_idx = iss_uop[0].rob_idx;
    assign iss_use_agen = iss_uop[0].fu_code[FC_AGEN];
    assign iss_use_dgen = iss_uop[0].fu_code[FC_DGEN];
    assign agen_rob_idx = agen_uop.rob_idx;
    assign dgen_rob_idx = dgen_uop.rob_idx;
endmodule
