import loom_params::*;
import loom_consts::*;
import loom_types::*;

module alu_test_top (
    input  logic clk,
    input  logic rst_n,
    input  logic valid,
    input  logic [3:0] op,
    input  logic [1:0] op1_sel,
    input  logic [2:0] op2_sel,
    input  logic [31:0] rs1,
    input  logic [31:0] rs2,
    input  logic [31:0] imm,
    input  logic [5:0] rob_idx,
    input  logic       is_br,
    input  logic [3:0] br_type,
    input  logic       predicted_taken,
    input  logic       kill,

    output logic        wakeup_valid,
    output logic        result_valid,
    output logic [31:0] result,
    output logic [5:0]  result_rob_idx,
    output logic        brinfo_valid,
    output logic        branch_taken,
    output logic        mispredict
);
    uop_t uop;
    exe_unit_resp_t response;
    wakeup_t wakeup;
    br_resolution_info_t brinfo;
    br_update_info_t brupdate;

    always_comb begin
        uop = '0;
        uop.fcn_op = op;
        uop.op1_sel = op1_sel;
        uop.op2_sel = op2_sel;
        uop.rob_idx = rob_idx;
        uop.pdst = 6'd32;
        uop.dst_rtype = RT_FIX;
        uop.is_br = is_br;
        uop.br_type = br_type;
        uop.taken = predicted_taken;
        brupdate = '0;
    end

    alu dut (
        .clk,
        .rst_n,
        .iss_valid(valid),
        .iss_uop(uop),
        .rs1_data(rs1),
        .rs2_data(rs2),
        .imm_data(imm),
        .res_valid(result_valid),
        .res(response),
        .wakeup_valid,
        .wakeup,
        .brinfo_valid,
        .brinfo,
        .brupdate,
        .kill
    );

    assign result = response.data;
    assign result_rob_idx = response.uop.rob_idx;
    assign branch_taken = brinfo.taken;
    assign mispredict = brinfo.mispredict;
endmodule
