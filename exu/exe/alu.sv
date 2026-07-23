import loom_params::*;
import loom_consts::*;
import loom_types::*;

module alu(
    input logic clk,
    input logic rst_n,

    input logic iss_valid,
    input uop_t iss_uop,

    input logic [31:0] rs1_data,
    input logic [31:0] rs2_data,
    input logic [31:0] imm_data,

    output logic res_valid,
    output exe_unit_resp_t res,

    output logic wakeup_valid,
    output wakeup_t wakeup,

    output logic brinfo_valid,
    output br_resolution_info_t brinfo,

    input br_update_info_t brupdate,
    input logic kill
);

    logic rrd_valid;
    uop_t rrd_uop;
    logic [31:0] rrd_rs1, rrd_rs2, rrd_imm;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) rrd_valid <= 1'b0;
        else if(kill) rrd_valid <= 1'b0;
        else begin
            rrd_valid <= iss_valid;
            if(iss_valid) begin
                rrd_uop <= iss_uop;
                rrd_rs1 <= rs1_data;
                rrd_rs2 <= rs2_data;
                rrd_imm <= imm_data;
            end
        end
    end

    logic exe_valid;
    uop_t exe_uop;
    logic [31:0] exe_rs1, exe_rs2, exe_imm;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) exe_valid <= 1'b0;
        else if(kill) exe_valid <= 1'b0;
        else begin
            exe_valid <= rrd_valid;
            if(rrd_valid) begin
                exe_uop <= rrd_uop;
                exe_rs1 <= rrd_rs1;
                exe_rs2 <= rrd_rs2;
                exe_imm <= rrd_imm;
            end
        end
    end

    assign wakeup_valid = rrd_valid && (rrd_uop.dst_rtype == RT_FIX);
    assign wakeup.uop = rrd_uop;
    assign wakeup.speculative_mask = '0;
    assign wakeup.rebusy = 1'b0;
    assign wakeup.bypassable = 1'b1;

    logic [31:0]alu_result;
    logic [31:0]op1, op2;
    always_comb begin
        alu_result = '0;

        unique case(exe_uop.op1_sel)
            OP1_RS1: op1 = exe_rs1;
            OP1_ZERO: op1 = '0;
            OP1_PC: op1 = exe_uop.pc;
            default: op1 = exe_rs1;
        endcase

        unique case(exe_uop.op2_sel)
            OP2_RS2: op2 = exe_rs2;
            OP2_IMM: op2 = exe_imm;
            OP2_ZERO: op2 = '0;
            OP2_NEXT: op2 = 32'd4;
            default: op2 = exe_rs2;
        endcase

        unique case(exe_uop.fcn_op)
            ALU_ADD: alu_result = op1 + op2;
            ALU_SUB: alu_result = op1 - op2;
            ALU_SLT: alu_result = {31'b0, $signed(op1) < $signed(op2)};
            ALU_SLTU: alu_result = {31'b0, op1 < op2};
            ALU_AND: alu_result = op1 & op2;
            ALU_OR: alu_result = op1 | op2;
            ALU_XOR: alu_result = op1 ^ op2;
            ALU_NOR: alu_result = ~(op1 | op2);
            ALU_SLL: alu_result = op1 << op2[4:0];
            ALU_SRL: alu_result = op1 >> op2[4:0];
            ALU_SRA: alu_result = $signed(op1) >>> op2[4:0];
            ALU_LUI: alu_result = op2;
            default: alu_result = op1 + op2;
        endcase
    end

    assign res_valid = exe_valid;
    assign res.valid = res_valid;
    assign res.uop = exe_uop;
    assign res.data = alu_result;
    assign res.predicated = 1'b0;
    assign res.fflags.valid = 1'b0;
    assign res.fflags.bits = '0;

    assign brinfo_valid = exe_valid && (exe_uop.is_br || exe_uop.is_jal || exe_uop.is_jalr);
    assign brinfo.uop = exe_uop;

    logic cond_true;
    logic [1:0]resolved_pc_sel;
    always_comb begin
        cond_true = 1'b0;
        resolved_pc_sel = PC_PLUS4;

        unique case(exe_uop.br_type)
            B_EQ: cond_true = ($signed(exe_rs1) == $signed(exe_rs2));
            B_NE: cond_true = ($signed(exe_rs1) != $signed(exe_rs2));
            B_GE: cond_true = ($signed(exe_rs1) >= $signed(exe_rs2));
            B_GEU: cond_true = (exe_rs1 >= exe_rs2);
            B_LT: cond_true = ($signed(exe_rs1) < $signed(exe_rs2));
            B_LTU: cond_true = (exe_rs1 < exe_rs2);
            default: cond_true = 1'b0;
        endcase

        if(exe_uop.is_br && cond_true) resolved_pc_sel = PC_BRJMP;
        if(exe_uop.is_jal) resolved_pc_sel = PC_BRJMP;
        if(exe_uop.is_jalr) resolved_pc_sel = PC_JALR;
    end

    assign brinfo.mispredict = exe_uop.is_br ? (exe_uop.taken != cond_true) : exe_uop.is_jalr;
    assign brinfo.cfi_type = exe_uop.is_br ? CFI_BR :
                             exe_uop.is_jal ? CFI_JAL :
                             exe_uop.is_jalr ? CFI_JALR : CFI_X;
    assign brinfo.taken = resolved_pc_sel != PC_PLUS4;
    assign brinfo.pc_sel = resolved_pc_sel;
    assign brinfo.jalr_target = exe_rs1 + exe_imm;
    assign brinfo.target_offset = exe_imm;
endmodule