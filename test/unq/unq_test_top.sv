import loom_params::*;
import loom_consts::*;
import loom_types::*;

module unq_test_top (
    input  logic        clk,
    input  logic        rst_n,
    input  logic        iss_valid,
    input  logic [1:0]  op_class,
    input  logic [3:0]  fcn_op,
    input  logic [5:0]  rob_idx,
    input  logic [13:0] csr_addr_in,
    input  logic [2:0]  csr_cmd_in,
    input  logic [31:0] rs1_data,
    input  logic [31:0] rs2_data,
    input  logic [31:0] csr_rdata,
    input  logic        kill,

    output logic        csr_req_valid,
    output logic [13:0] csr_addr,
    output logic [1:0]  csr_cmd,
    output logic [31:0] csr_wdata,
    output logic        res_valid,
    output logic [31:0] res_data,
    output logic [5:0]  res_rob_idx
);
    uop_t iss_uop;
    exe_unit_resp_t res;
    br_update_info_t brupdate;

    always_comb begin
        iss_uop = '0;
        iss_uop.rob_idx = rob_idx;
        iss_uop.fcn_op = fcn_op;
        iss_uop.imm_packed[13:0] = csr_addr_in;
        iss_uop.csr_cmd = csr_cmd_in;
        case (op_class)
            2'd0: iss_uop.fu_code[FC_CSR] = 1'b1;
            2'd1: iss_uop.fu_code[FC_MUL] = 1'b1;
            2'd2: iss_uop.fu_code[FC_DIV] = 1'b1;
            default: begin end
        endcase
        brupdate = '0;
    end

    unq dut (
        .clk,
        .rst_n,
        .iss_valid,
        .iss_uop,
        .rs1_data,
        .rs2_data,
        .csr_req_valid,
        .csr_addr,
        .csr_cmd,
        .csr_wdata,
        .csr_rdata,
        .res_valid,
        .res,
        .brupdate,
        .kill
    );

    assign res_data = res.data;
    assign res_rob_idx = res.uop.rob_idx;
endmodule
