import loom_params::*;
import loom_consts::*;
import loom_types::*;

module decode_test_top (
    input  logic [31:0] inst,
    input  logic [31:0] pc,
    input  logic [1:0]  status_prv,

    output logic [3:0]  iq_type,
    output logic [9:0]  fu_code,
    output logic [5:0]  ldst,
    output logic [5:0]  lrs1,
    output logic [5:0]  lrs2,
    output logic [1:0]  dst_rtype,
    output logic [1:0]  op1_sel,
    output logic [2:0]  op2_sel,
    output logic [3:0]  fcn_op,
    output logic [2:0]  imm_sel,
    output logic [25:0] imm_packed,
    output logic [3:0]  br_type,
    output logic        allocate_brtag,
    output logic        is_br,
    output logic        is_jal,
    output logic        is_jalr,
    output logic        uses_ldq,
    output logic        uses_stq,
    output logic [4:0]  mem_cmd,
    output logic [1:0]  mem_size,
    output logic        mem_signed,
    output logic        is_unique,
    output logic        is_rdcnt,
    output logic        is_eret,
    output logic        flush_on_commit,
    output logic [2:0]  csr_cmd,
    output logic        exception,
    output logic [31:0] exc_cause,
    output logic        xcpt_ae_if
);
    uop_t uop;

    decode dut (
        .inst,
        .pc,
        .status_prv,
        .uop
    );

    assign iq_type = uop.iq_type;
    assign fu_code = uop.fu_code;
    assign ldst = uop.ldst;
    assign lrs1 = uop.lrs1;
    assign lrs2 = uop.lrs2;
    assign dst_rtype = uop.dst_rtype;
    assign op1_sel = uop.op1_sel;
    assign op2_sel = uop.op2_sel;
    assign fcn_op = uop.fcn_op;
    assign imm_sel = uop.imm_sel;
    assign imm_packed = uop.imm_packed;
    assign br_type = uop.br_type;
    assign allocate_brtag = uop.allocate_brtag;
    assign is_br = uop.is_br;
    assign is_jal = uop.is_jal;
    assign is_jalr = uop.is_jalr;
    assign uses_ldq = uop.uses_ldq;
    assign uses_stq = uop.uses_stq;
    assign mem_cmd = uop.mem_cmd;
    assign mem_size = uop.mem_size;
    assign mem_signed = uop.mem_signed;
    assign is_unique = uop.is_unique;
    assign is_rdcnt = uop.is_rdcnt;
    assign is_eret = uop.is_eret;
    assign flush_on_commit = uop.flush_on_commit;
    assign csr_cmd = uop.csr_cmd;
    assign exception = uop.exception;
    assign exc_cause = uop.exc_cause;
    assign xcpt_ae_if = uop.xcpt_ae_if;
endmodule
