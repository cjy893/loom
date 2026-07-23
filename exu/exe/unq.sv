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

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) state <= S_IDLE;
        else if(kill) state <= S_IDLE;
        else state <= next_state;
    end

    always_comb begin
        next_state = state;
        case(state)
            S_IDLE: begin
                if(iss_valid && !kill) begin
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

    always_ff @(posedge clk) begin
        if(iss_valid && state == S_IDLE) begin
            pipe_uop <= iss_uop;
            pipe_rs1 <= rs1_data;
            pipe_rs2 <= rs2_data;
        end
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) busy_cnt <= '0;
        else if(state == S_IDLE && iss_valid) busy_cnt <= '0;
        else if(state == S_MUL || state == S_DIV) busy_cnt <= busy_cnt + 1;
    end

    assign busy_done = (state == S_MUL && busy_cnt == IMUL_LATENCY - 1) || (state == S_DIV && busy_cnt >= 5'd5);

    assign csr_req_valid = (state == S_IDLE && iss_valid && iss_uop.fu_code[FC_CSR]);
    assign csr_addr = iss_uop.imm_packed[13:0];
    assign csr_cmd = iss_uop.csr_cmd;
    assign csr_wdata = rs1_data;
    assign csr_wmask = (iss_uop.csr_cmd == CSR_XCHG) ? rs2_data : 32'hffffffff;

    logic [63:0] mul_result_64;
    logic [31:0] mul_result;

    always_comb begin
        mul_result_64 = $signed(pipe_rs1) * $signed(pipe_rs2);
        unique case(pipe_uop.fcn_op)
            default: mul_result = mul_result_64[31:0];
        endcase
    end

    logic [31:0] div_result;

    always_comb begin
        div_result = '0;
        unique case(pipe_uop.fcn_op)
            default: div_result = $signed(pipe_rs1) / $signed(pipe_rs2);
        endcase
    end

    assign res_valid = (state == S_CSR) || (state == S_MUL && busy_done) || (state == S_DIV && busy_done);
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

    assign iss_ready = state == S_IDLE;
endmodule