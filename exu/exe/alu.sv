import loom_params::*;
import loom_consts::*;
import loom_types::*;

module alu(
    input logic clk,
    input logic rst_n,

    input logic iss_valid,
    input uop_t iss_uop,

    input logic [31:0] src1_data,
    input logic [31:0] src2_data,
    input logic [31:0] imm_data,

    input logic        ftq_resp_valid,
    input logic [31:0] ftq_resp_next_pc,
    input logic        ftq_resp_cfi_match,

    output logic res_valid,
    output exe_unit_resp_t res,

    output logic wakeup_valid,
    output wakeup_t wakeup,

    output logic brinfo_valid,
    output br_resolution_info_t brinfo,

    input br_update_info_t brupdate,
    input logic kill
);
    logic iss_br_killed;
    uop_t iss_uop_updated;

    logic rrd_valid, rrd_br_killed;
    uop_t rrd_uop, rrd_uop_updated;
    logic [31:0] rrd_src1, rrd_src2, rrd_imm;
    

    logic exe_valid, exe_br_killed;
    uop_t exe_uop;
    logic [31:0] exe_src1, exe_src2, exe_imm;
    logic        exe_ftq_resp_valid;
    logic [31:0] exe_ftq_next_pc;
    logic        exe_ftq_cfi_match;
    logic [31:0] jirl_target;
    logic        jirl_mispredict;

    logic actual_taken;

    always_comb begin
        iss_br_killed = |(iss_uop.br_mask & brupdate.b1.mispredict_mask);
        rrd_br_killed = |(rrd_uop.br_mask & brupdate.b1.mispredict_mask);
        exe_br_killed = |(exe_uop.br_mask & brupdate.b1.mispredict_mask);

        iss_uop_updated = iss_uop;
        iss_uop_updated.br_mask = iss_uop.br_mask & ~brupdate.b1.resolve_mask;
        rrd_uop_updated = rrd_uop;
        rrd_uop_updated.br_mask = rrd_uop.br_mask & ~brupdate.b1.resolve_mask;
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) rrd_valid <= 1'b0;
        else if(kill) rrd_valid <= 1'b0;
        else begin
            rrd_valid <= iss_valid && !iss_br_killed;
            if(iss_valid && !iss_br_killed) begin
                rrd_uop <= iss_uop_updated;
                rrd_src1 <= src1_data;
                rrd_src2 <= src2_data;
                rrd_imm <= imm_data;
            end
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            exe_valid <= 1'b0;
            exe_ftq_resp_valid <= 1'b0;
            exe_ftq_next_pc <= '0;
            exe_ftq_cfi_match <= 1'b0;
        end
        else if(kill) begin
            exe_valid <= 1'b0;
            exe_ftq_resp_valid <= 1'b0;
        end
        else begin
            exe_valid <= rrd_valid && !rrd_br_killed;
            exe_ftq_resp_valid <= rrd_valid && !rrd_br_killed && rrd_uop.is_jirl && ftq_resp_valid;
            if(rrd_valid && !rrd_br_killed) begin
                exe_uop <= rrd_uop_updated;
                exe_src1 <= rrd_src1;
                exe_src2 <= rrd_src2;
                exe_imm <= rrd_imm;

                exe_ftq_next_pc <= ftq_resp_next_pc;
                exe_ftq_cfi_match <= ftq_resp_cfi_match;
            end
        end
    end

    assign wakeup_valid = rrd_valid && !rrd_br_killed && (rrd_uop.dst_rtype == RT_FIX);
    assign wakeup.uop = rrd_uop;
    assign wakeup.speculative_mask = '0;
    assign wakeup.rebusy = 1'b0;
    assign wakeup.bypassable = 1'b1;

    logic [31:0]alu_result;
    logic [31:0]op1, op2;
    always_comb begin
        alu_result = '0;

        unique case(exe_uop.op1_sel)
            OP1_SRC1: op1 = exe_src1;
            OP1_ZERO: op1 = '0;
            OP1_PC: op1 = exe_uop.pc;
            default: op1 = exe_src1;
        endcase

        unique case(exe_uop.op2_sel)
            OP2_SRC2: op2 = exe_src2;
            OP2_IMM: op2 = exe_imm;
            OP2_ZERO: op2 = '0;
            OP2_NEXT: op2 = 32'd4;
            default: op2 = exe_src2;
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

    assign res_valid = exe_valid && !exe_br_killed;
    assign res.valid = res_valid;
    assign res.uop = exe_uop;
    assign res.data = alu_result;
    assign res.predicated = 1'b0;
    assign res.fp_flags.valid = 1'b0;
    assign res.fp_flags.bits = '0;

    assign brinfo_valid = exe_valid && (exe_uop.is_br || exe_uop.is_b_bl || exe_uop.is_jirl);
    assign brinfo.uop = exe_uop;

    logic cond_true;
    logic [1:0]resolved_pc_sel;
    always_comb begin
        cond_true = 1'b0;
        resolved_pc_sel = PC_PLUS4;

        unique case(exe_uop.br_type)
            BR_BEQ: cond_true = ($signed(exe_src1) == $signed(exe_src2));
            BR_BNE: cond_true = ($signed(exe_src1) != $signed(exe_src2));
            BR_BGE: cond_true = ($signed(exe_src1) >= $signed(exe_src2));
            BR_BGEU: cond_true = (exe_src1 >= exe_src2);
            BR_BLT: cond_true = ($signed(exe_src1) < $signed(exe_src2));
            BR_BLTU: cond_true = (exe_src1 < exe_src2);
            default: cond_true = 1'b0;
        endcase

        if(exe_uop.is_br && cond_true) resolved_pc_sel = PC_BRANCH;
        if(exe_uop.is_b_bl) resolved_pc_sel = PC_BRANCH;
        if(exe_uop.is_jirl) resolved_pc_sel = PC_JIRL;
    end

    assign jirl_target = exe_src1 + exe_imm;
    assign jirl_mispredict = exe_uop.is_jirl && (!exe_uop.taken || !exe_ftq_resp_valid || !exe_ftq_cfi_match || exe_ftq_next_pc != jirl_target);

    assign actual_taken = resolved_pc_sel != PC_PLUS4;
    assign brinfo.mispredict = (exe_uop.is_br && (exe_uop.taken != cond_true)) || (exe_uop.is_b_bl && !exe_uop.taken) || jirl_mispredict;
    assign brinfo.cfi_type = exe_uop.is_br ? CFI_BR :
                             exe_uop.is_b_bl ? CFI_B_BL :
                             exe_uop.is_jirl ? CFI_JIRL : CFI_X;
    assign brinfo.taken = actual_taken;
    assign brinfo.pc_sel = resolved_pc_sel;
    assign brinfo.jirl_target = jirl_target;
    assign brinfo.target_offset = exe_imm;
endmodule
