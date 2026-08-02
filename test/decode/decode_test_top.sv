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
    output logic [5:0]  lsrc1,
    output logic [5:0]  lsrc2,
    output logic [1:0]  dst_rtype,
    output logic [1:0]  lsrc1_rtype,
    output logic [1:0]  lsrc2_rtype,
    output logic [1:0]  op1_sel,
    output logic [2:0]  op2_sel,
    output logic [3:0]  fcn_op,
    output logic [2:0]  imm_sel,
    output logic [25:0] imm_packed,
    output logic [3:0]  br_type,
    output logic        allocate_brtag,
    output logic        is_br,
    output logic        is_b_bl,
    output logic        is_jirl,
    output logic        uses_ldq,
    output logic        uses_stq,
    output logic [4:0]  mem_cmd,
    output logic [1:0]  mem_size,
    output logic        mem_signed,
    output logic        is_unique,
    output logic        is_dbar,
    output logic        is_ibar,
    output logic        is_idle,
    output logic        is_rdcnt,
    output logic        is_ertn,
    output logic        flush_on_commit,
    output logic [2:0]  csr_cmd,
    output logic [2:0]  tlb_cmd,
    output logic        exception,
    output logic [31:0] exc_cause,
    output logic        exc_adef
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
    assign lsrc1 = uop.lsrc1;
    assign lsrc2 = uop.lsrc2;
    assign dst_rtype = uop.dst_rtype;
    assign lsrc1_rtype = uop.lsrc1_rtype;
    assign lsrc2_rtype = uop.lsrc2_rtype;
    assign op1_sel = uop.op1_sel;
    assign op2_sel = uop.op2_sel;
    assign fcn_op = uop.fcn_op;
    assign imm_sel = uop.imm_sel;
    assign imm_packed = uop.imm_packed;
    assign br_type = uop.br_type;
    assign allocate_brtag = uop.allocate_brtag;
    assign is_br = uop.is_br;
    assign is_b_bl = uop.is_b_bl;
    assign is_jirl = uop.is_jirl;
    assign uses_ldq = uop.uses_ldq;
    assign uses_stq = uop.uses_stq;
    assign mem_cmd = uop.mem_cmd;
    assign mem_size = uop.mem_size;
    assign mem_signed = uop.mem_signed;
    assign is_unique = uop.is_unique;
    assign is_dbar = uop.is_dbar;
    assign is_ibar = uop.is_ibar;
    assign is_idle = uop.is_idle;
    assign is_rdcnt = uop.is_rdcnt;
    assign is_ertn = uop.is_ertn;
    assign flush_on_commit = uop.flush_on_commit;
    assign csr_cmd = uop.csr_cmd;
    assign tlb_cmd = uop.tlb_cmd;
    assign exception = uop.exception;
    assign exc_cause = uop.exc_cause;
    assign exc_adef = uop.exc_adef;
endmodule
