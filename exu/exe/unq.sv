import loom_params::*;
import loom_consts::*;
import loom_types::*;

module unq(
    input logic clk,
    input logic rst_n,

    input logic iss_valid,
    input uop_t iss_uop,
    output logic iss_ready,

    input logic [31:0] src1_data,
    input logic [31:0] src2_data,

    output logic csr_req_valid,
    output logic [13:0] csr_addr,
    output logic [1:0] csr_cmd,
    output logic [31:0] csr_wdata,
    output logic [31:0] csr_wmask,
    input logic [31:0] csr_rdata,

    input logic [63:0] counter_value,
    input logic [31:0] counter_id_value,

    output logic res_valid,
    output exe_unit_resp_t res,

    input br_update_info_t brupdate,
    input logic kill
);

    typedef enum logic [2:0] { 
        S_IDLE,
        S_CSR,
        S_MUL,
        S_DIV,
        S_CNT,
        S_ERTN
    } state_t;

    state_t state, next_state;
    uop_t pipe_uop;
    logic [31:0] pipe_src1, pipe_src2;

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

    assign issue_fire = iss_ready && iss_valid && !iss_br_killed;

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
                    else if(iss_uop.is_rdcnt) next_state = S_CNT;
                    else if(iss_uop.is_ertn) next_state = S_ERTN;
                end
            end
            S_CSR: next_state = S_IDLE;
            S_MUL: if(busy_done) next_state = S_IDLE;
            S_DIV: if(busy_done) next_state = S_IDLE;
            S_CNT: next_state = S_IDLE;
            S_ERTN: next_state = S_IDLE;
            default: next_state = S_IDLE;
        endcase
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            pipe_uop <= '0;
            pipe_src1 <= '0;
            pipe_src2 <= '0;
        end else if(kill || pipe_br_killed) begin
            pipe_uop <= '0;
            pipe_src1 <= '0;
            pipe_src2 <= '0;
        end else if(issue_fire) begin
            pipe_uop <= iss_uop_updated;
            pipe_src1 <= src1_data;
            pipe_src2 <= src2_data;
        end else if(state != S_IDLE) begin
            pipe_uop.br_mask <= pipe_uop.br_mask & ~brupdate.b1.resolve_mask;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) busy_cnt <= '0;
        else if(kill || pipe_br_killed) busy_cnt <= '0;
        else if(issue_fire) busy_cnt <= '0;
        else if(state == S_MUL) busy_cnt <= busy_cnt + 1;
        else busy_cnt <= '0;
    end

    assign busy_done = (state == S_MUL && busy_cnt == IMUL_LATENCY - 1) || (state == S_DIV && div_resp_valid);

    assign csr_req_valid = issue_fire && iss_uop.fu_code[FC_CSR];
    assign csr_addr = (iss_uop.csr_cmd == CSR_CPUCFG) ? (src1_data[13:0] + iss_uop.imm_packed[13:0]) :iss_uop.imm_packed[13:0];
    assign csr_cmd = iss_uop.csr_cmd;
    assign csr_wdata = src1_data;
    assign csr_wmask = (iss_uop.csr_cmd == CSR_XCHG) ? src2_data : 32'hffffffff;

    logic signed [63:0] mul_signed_op1, mul_signed_op2;
    logic signed [63:0] mul_signed_result;
    logic [63:0] mul_unsigned_result;
    logic [31:0] mul_result;

    always_comb begin
        mul_signed_op1 = {{32{pipe_src1[31]}}, pipe_src1};
        mul_signed_op2 = {{32{pipe_src2[31]}}, pipe_src2};
        mul_signed_result = mul_signed_op1 * mul_signed_op2;
        mul_unsigned_result = {32'b0, pipe_src1} * {32'b0, pipe_src2};

        unique case(pipe_uop.fcn_op)
            MULDIV_MUL_W:   mul_result = mul_signed_result[31:0];
            MULDIV_MULH_W:  mul_result = mul_signed_result[63:32];
            MULDIV_MULH_WU: mul_result = mul_unsigned_result[63:32];
            default:        mul_result = '0;
        endcase
    end

    logic div_resp_valid;
    logic div_resp_ready;
    logic [31:0] div_resp_data;
    logic div_req_valid;
    logic div_req_ready;
    logic div_req_signed;
    logic div_req_remainder;


    divider divider_i(
        .clk, .rst_n,
        .req_valid(div_req_valid),
        .req_ready(div_req_ready),
        .req_signed(div_req_signed),
        .req_remainder(div_req_remainder),
        .req_dividend(pipe_src1),
        .req_divisor(pipe_src2),
        .kill(kill || pipe_br_killed),
        .resp_valid(div_resp_valid),
        .resp_ready(div_resp_ready),
        .resp_data(div_resp_data)
    );

    assign div_req_valid = (state == S_DIV);
    assign div_req_signed = (pipe_uop.fcn_op == MULDIV_DIV_W || pipe_uop.fcn_op == MULDIV_MOD_W);
    assign div_req_remainder = (pipe_uop.fcn_op == MULDIV_MOD_W || pipe_uop.fcn_op == MULDIV_MOD_WU);
    assign div_resp_ready = (state == S_DIV);

    assign res_valid = !kill && !pipe_br_killed &&
                        ((state == S_CSR) || (state == S_MUL && busy_done) || (state == S_DIV && busy_done) || (state == S_CNT) || (state == S_ERTN));
    assign res.valid = res_valid;
    assign res.uop = pipe_uop;
    assign res.predicated = 1'b0;
    assign res.fp_flags.valid = 1'b0;
    assign res.fp_flags.bits = '0;

    always_comb begin
        res.data = '0;
        case(state)
            S_CSR: res.data = csr_rdata;
            S_MUL: res.data = mul_result;
            S_DIV: res.data = div_resp_data;
            S_CNT: begin
                case(pipe_uop.fcn_op)
                    CNT_LOW: res.data = counter_value[31:0];
                    CNT_HIGH: res.data = counter_value[63:32];
                    CNT_ID: res.data = counter_id_value;
                    default: res.data = 32'b0;
                endcase
            end
            default: res.data = '0;
        endcase
    end

    assign iss_ready = (state == S_IDLE) && !kill;
endmodule
