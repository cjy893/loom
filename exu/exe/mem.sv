import loom_params::*;
import loom_consts::*;
import loom_types::*;

module mem #(
    parameter int HAS_AGEN = 1,
    parameter int HAS_DGEN = 1
)(
    input logic clk,
    input logic rst_n,

    input logic iss_valid,
    input uop_t iss_uop,

    input logic [31:0] src1_data,
    input logic [31:0] src2_data,
    input logic [31:0] imm_data,

    output logic agen_valid,
    output logic [31:0] agen_addr,
    output uop_t agen_uop,

    output logic dgen_valid,
    output logic [31:0] dgen_data,
    output uop_t dgen_uop,

    output exception_t xcpt,

    input br_update_info_t brupdate,
    input kill
);
    logic iss_br_killed;
    uop_t iss_uop_updated;

    logic rrd_valid, rrd_br_killed;
    uop_t rrd_uop, rrd_uop_updated;
    logic [31:0] rrd_src1, rrd_src2, rrd_imm;

    logic exe_valid, exe_br_killed;
    uop_t exe_uop;
    logic [31:0] exe_src1, exe_src2, exe_imm;

    always_comb begin
        iss_br_killed = brupdate.b2.mispredict && |(iss_uop.br_mask & brupdate.b1.mispredict_mask);
        rrd_br_killed = brupdate.b2.mispredict && |(rrd_uop.br_mask & brupdate.b1.mispredict_mask);
        exe_br_killed = brupdate.b2.mispredict && |(exe_uop.br_mask & brupdate.b1.mispredict_mask);

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
        if(!rst_n) exe_valid <= 1'b0;
        else if(kill) exe_valid <= 1'b0;
        else begin
            exe_valid <= rrd_valid && !rrd_br_killed;
            if(rrd_valid && !rrd_br_killed) begin
                exe_uop <= rrd_uop_updated;
                exe_src1 <= rrd_src1;
                exe_src2 <= rrd_src2;
                exe_imm <= rrd_imm;
            end
        end
    end

    logic [31:0]eff_addr;
    assign eff_addr = exe_src1 + exe_imm;

    if(HAS_AGEN) begin: gen_agen
        assign agen_valid = exe_agen_valid && !xcpt.valid;
        assign agen_addr = eff_addr;
        assign agen_uop = exe_uop;
    end else begin
        assign agen_valid = 1'b0;
        assign agen_addr = '0;
        assign agen_uop = '0;
    end

    if(HAS_DGEN) begin: gen_dgen
        assign dgen_valid = exe_valid && !exe_br_killed && exe_uop.fu_code[FC_DGEN] && !xcpt.valid;
        assign dgen_data = exe_src2;
        assign dgen_uop = exe_uop;
    end else begin
        assign dgen_valid = 1'b0;
        assign dgen_data = '0;
        assign dgen_uop = '0;
    end

    logic exe_agen_valid;
    logic addr_misaligned;

    assign exe_agen_valid = exe_valid && !exe_br_killed && exe_uop.fu_code[FC_AGEN];

    always_comb begin
        unique case(exe_uop.mem_size)
            2'd1: addr_misaligned = eff_addr[0];
            2'd2: addr_misaligned = |eff_addr[1:0];
            default: addr_misaligned = 1'b0;
        endcase
    end

    always_comb begin
        xcpt = '0;

        if(HAS_AGEN && exe_agen_valid && addr_misaligned) begin
            xcpt.valid = 1'b1;
            xcpt.uop = exe_uop;
            xcpt.uop.br_mask = exe_uop.br_mask & ~brupdate.b1.resolve_mask;
            xcpt.cause = ECODE_ALE;
            xcpt.badvaddr = eff_addr;
        end
    end
endmodule