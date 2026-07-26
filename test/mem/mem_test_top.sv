import loom_params::*;
import loom_consts::*;
import loom_types::*;

module mem_test_top (
    input  logic        clk,
    input  logic        rst_n,
    input  logic        iss_valid,
    input  logic        use_agen,
    input  logic        use_dgen,
    input  logic [5:0]  rob_idx,
    input  logic [31:0] rs1_data,
    input  logic [31:0] rs2_data,
    input  logic [31:0] imm_data,
    input  logic [3:0]  uop_br_mask,
    input  logic [3:0]  resolve_mask,
    input  logic [3:0]  mispredict_mask,
    input  logic        br_mispredict,
    input  logic        kill,

    output logic        agen_valid,
    output logic [31:0] agen_addr,
    output logic [5:0]  agen_rob_idx,
    output logic        dgen_valid,
    output logic [31:0] dgen_data,
    output logic [5:0]  dgen_rob_idx
);
    uop_t iss_uop;
    uop_t agen_uop;
    uop_t dgen_uop;
    br_update_info_t brupdate;

    always_comb begin
        iss_uop = '0;
        iss_uop.rob_idx = rob_idx;
        iss_uop.fu_code[FC_AGEN] = use_agen;
        iss_uop.fu_code[FC_DGEN] = use_dgen;
        iss_uop.br_mask = uop_br_mask;
        brupdate = '0;
        brupdate.b1.resolve_mask = resolve_mask;
        brupdate.b1.mispredict_mask = mispredict_mask;
        brupdate.b2.mispredict = br_mispredict;
    end

    mem #(
        .HAS_AGEN(1),
        .HAS_DGEN(1)
    ) dut (
        .clk,
        .rst_n,
        .iss_valid,
        .iss_uop,
        .rs1_data,
        .rs2_data,
        .imm_data,
        .agen_valid,
        .agen_addr,
        .agen_uop,
        .dgen_valid,
        .dgen_data,
        .dgen_uop,
        .xcpt(),
        .brupdate,
        .kill
    );

    assign agen_rob_idx = agen_uop.rob_idx;
    assign dgen_rob_idx = dgen_uop.rob_idx;
endmodule
