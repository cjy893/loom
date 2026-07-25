import loom_params::*;
import loom_consts::*;
import loom_types::*;

module unq(
    input logic clk,
    input logic rst_n,

    input logic iss_valid,
    input uop_t iss_uop,
    output logic iss_ready,

    input logic [31:0] rs1_data,
    input logic [31:0] rs2_data,

    output logic csr_req_valid,
    output logic [13:0] csr_addr,
    output logic [1:0] csr_cmd,
    output logic [31:0] csr_wdata,
    output logic [31:0] csr_wmask,
    input logic [31:0] csr_rdata,

    output logic res_valid,
    output exe_unit_resp_t res,

    input br_update_info_t brupdate,
    input logic kill
);

    typedef enum logic [1:0] { 
        S_IDLE,
        S_CSR,
        S_MUL,
        S_DIV
    } state_t;

    state_t state, next_state;
    uop_t pipe_uop;
    logic [31:0] pipe_rs1, pipe_rs2;

    logic [4:0] busy_cnt;
    logic busy_done;

    logic iss_br_killed;
    logic pipe_br_killed;
    logic issue_fire;
    uop_t iss_uop_updated;

    always_comb begin
        iss_br_killed = brupdate.b2.mispredict && |(iss_uop.br_mask & brupdate.b1.mispredict_mask);
        pipe_br_killed = (state != S_IDLE) && brupdate.b2.mispredict && |(pipe_uop.br_mask & brupdate.b1.mispredict_mask);

        iss_uop_updated = iss_uop;
        iss_uop_updated.br_mask = iss_uop.br_mask & ~brupdate.b1.resolve_mask;
    end

    assign issue_fire = (state == S_IDLE) && iss_valid && !iss_br_killed && !kill;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) state <= S_IDLE;
        else if(kill || pipe_br_killed) state <= S_IDLE;
        else state <= next_state;
    end

    always_comb begin
        next_state = state;
        case(state)
            S_IDLE: begin
                if(issue_fire) begin
                    if(iss_uop.fu_code[FC_CSR]) next_state = S_CSR;
                    else if(iss_uop.fu_code[FC_MUL]) next_state = S_MUL;
                    else if(iss_uop.fu_code[FC_DIV]) next_state = S_DIV;
                end
            end
            S_CSR: next_state = S_IDLE;
            S_MUL: if(busy_done) next_state = S_IDLE;
            S_DIV: if(busy_done) next_state = S_IDLE;
        endcase
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            pipe_uop <= '0;
            pipe_rs1 <= '0;
            pipe_rs2 <= '0;
        end else if(kill || pipe_br_killed) begin
            pipe_uop <= '0;
            pipe_rs1 <= '0;
            pipe_rs2 <= '0;
        end else if(issue_fire) begin
            pipe_uop <= iss_uop_updated;
            pipe_rs1 <= rs1_data;
            pipe_rs2 <= rs2_data;
        end else if(state != S_IDLE) begin
            pipe_uop.br_mask <= pipe_uop.br_mask & ~brupdate.b1.resolve_mask;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) busy_cnt <= '0;
        else if(kill || pipe_br_killed) busy_cnt <= '0;
        else if(issue_fire) busy_cnt <= '0;
        else if(state == S_MUL || state == S_DIV) busy_cnt <= busy_cnt + 1;
        else busy_cnt <= '0;
    end

    assign busy_done = (state == S_MUL && busy_cnt == IMUL_LATENCY - 1) || (state == S_DIV && busy_cnt >= 5'd5);

    assign csr_req_valid = issue_fire && iss_uop.fu_code[FC_CSR];
    assign csr_addr = iss_uop.imm_packed[13:0];
    assign csr_cmd = iss_uop.csr_cmd;
    assign csr_wdata = rs1_data;
    assign csr_wmask = (iss_uop.csr_cmd == CSR_XCHG) ? rs2_data : 32'hffffffff;

    logic signed [63:0] mul_signed_op1, mul_signed_op2;
    logic signed [63:0] mul_signed_result;
    logic [63:0] mul_unsigned_result;
    logic [31:0] mul_result;

    always_comb begin
        mul_signed_op1 = {{32{pipe_rs1[31]}}, pipe_rs1};
        mul_signed_op2 = {{32{pipe_rs2[31]}}, pipe_rs2};
        mul_signed_result = mul_signed_op1 * mul_signed_op2;
        mul_unsigned_result = {32'b0, pipe_rs1} * {32'b0, pipe_rs2};

        unique case(pipe_uop.fcn_op)
            MULDIV_MUL_W:   mul_result = mul_signed_result[31:0];
            MULDIV_MULH_W:  mul_result = mul_signed_result[63:32];
            MULDIV_MULH_WU: mul_result = mul_unsigned_result[63:32];
            default:        mul_result = '0;
        endcase
    end

    logic [31:0] div_signed_quotient;
    logic [31:0] div_signed_remainder;
    logic [31:0] div_unsigned_quotient;
    logic [31:0] div_unsigned_remainder;
    logic [31:0] div_result;

    always_comb begin
        if(pipe_rs2 == '0) begin
            // The ISA permits any result and no exception for a zero divisor.
            div_signed_quotient = '1;
            div_unsigned_quotient = '1;
            div_signed_remainder = pipe_rs1;
            div_unsigned_remainder = pipe_rs1;
        end else begin
            if(pipe_rs1 == 32'h80000000 && pipe_rs2 == 32'hffffffff) begin
                div_signed_quotient = 32'h80000000;
                div_signed_remainder = '0;
            end else begin
                div_signed_quotient =
                    $signed(pipe_rs1) / $signed(pipe_rs2);
                div_signed_remainder =
                    $signed(pipe_rs1) % $signed(pipe_rs2);
            end

            div_unsigned_quotient = pipe_rs1 / pipe_rs2;
            div_unsigned_remainder = pipe_rs1 % pipe_rs2;
        end

        unique case(pipe_uop.fcn_op)
            MULDIV_DIV_W:  div_result = div_signed_quotient;
            MULDIV_DIV_WU: div_result = div_unsigned_quotient;
            MULDIV_MOD_W:  div_result = div_signed_remainder;
            MULDIV_MOD_WU: div_result = div_unsigned_remainder;
            default:       div_result = '0;
        endcase
    end

    assign res_valid = !kill && !pipe_br_killed && ((state == S_CSR) || (state == S_MUL && busy_done) || (state == S_DIV && busy_done));
    assign res.valid = res_valid;
    assign res.uop = pipe_uop;
    assign res.predicated = 1'b0;
    assign res.fflags.valid = 1'b0;
    assign res.fflags.bits = '0;

    always_comb begin
        res.data = '0;
        case(state)
            S_CSR: res.data = csr_rdata;
            S_MUL: res.data = mul_result;
            S_DIV: res.data = div_result;
            default: res.data = '0;
        endcase
    end

    assign iss_ready = (state == S_IDLE) && !kill;
endmodule
