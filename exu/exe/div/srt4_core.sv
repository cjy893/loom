module srt4_core(
    input logic clk,
    input logic rst_n,

    input logic req_valid,
    output logic req_ready,
    input logic [31:0] req_dividend,
    input logic [31:0] req_divisor,

    input logic kill,

    output logic resp_valid,
    input logic resp_ready,
    output logic [31:0] resp_quotient,
    output logic [31:0] resp_remainder
);
    typedef enum logic [1:0] { 
        S_IDLE,
        S_ITERATE,
        S_FINALIZE,
        S_RESPONSE
    } state_t;

    state_t state;

    logic        pre_divisor_is_zero;
    logic [35:0] pre_partial;
    logic [35:0] pre_divisor;
    logic [4:0]  pre_iterations;
    logic [5:0]  pre_recovery_shift;

    logic signed [35:0] partial_q;
    logic        [35:0] divisor_q;
    logic [4:0] iteration_count_q;
    logic [4:0] iteration_index_q;
    logic [5:0] recovery_shift_q;

    logic signed [6:0] partial_index;
    logic        [3:0] divisor_index;
    logic signed [2:0] quotient_digit;

    logic signed [35:0] divisor_signed;
    logic signed [35:0] divisor_twice;
    logic signed [35:0] partial_after_digit;
    logic signed [35:0] partial_corrected;

    logic [31:0] otfc_quotient;
    logic [31:0] otfc_quotient_minus_one;
    logic        otfc_clear;
    logic        otfc_step;

    logic [31:0] quotient_corrected;
    logic [31:0] remainder_corrected;
    logic [64:0] remainder_shifted;

    logic [31:0] quotient_result_q;
    logic [31:0] remainder_result_q;

    logic req_fire;
    logic resp_fire;

    assign req_ready = (state == S_IDLE) && !kill;
    assign resp_valid = (state == S_RESPONSE) && !kill;
    assign req_fire = req_valid && req_ready;
    assign resp_fire = resp_valid && resp_ready;

    assign resp_quotient = quotient_result_q;
    assign resp_remainder = remainder_result_q;

    srt4_preprocess preprocess_i (
        .dividend(req_dividend),
        .divisor(req_divisor),
        .divisor_is_zero(pre_divisor_is_zero),
        .initial_partial_remainder(pre_partial),
        .aligned_divisor(pre_divisor),
        .iteration_count(pre_iterations),
        .recovery_shift(pre_recovery_shift)
    );

    assign partial_index = partial_q[35:29];
    assign divisor_index = divisor_q[32:29];

    srt4_qselect qselect_i (
        .partial_remainder_index(partial_index),
        .divisor_index,
        .quotient_digit
    );

    assign otfc_clear = req_fire || resp_fire || kill;
    assign otfc_step = (state == S_ITERATE) && !kill;

    srt4_otfc otfc_i (
        .clk,
        .rst_n,
        .clear(otfc_clear),
        .step(otfc_step),
        .quotient_digit,
        .quotient(otfc_quotient),
        .quotient_minus_one(otfc_quotient_minus_one)
    );

    assign divisor_signed = $signed(divisor_q);
    assign divisor_twice = divisor_signed <<< 1;

    always_comb begin
        partial_after_digit = partial_q;

        case(quotient_digit)
            3'sd2: partial_after_digit = partial_q - divisor_twice;
            3'sd1: partial_after_digit = partial_q - divisor_signed;
            3'sd0: partial_after_digit = partial_q;
            -3'sd1: partial_after_digit = partial_q + divisor_signed;
            -3'sd2: partial_after_digit = partial_q + divisor_twice;
            default: partial_after_digit = partial_q;
        endcase
    end

    always_comb begin
        partial_corrected = partial_q;
        quotient_corrected = otfc_quotient;

        if(partial_q[35]) begin
            partial_corrected = partial_q + divisor_signed;
            quotient_corrected = otfc_quotient_minus_one;
        end

        remainder_shifted = {29'b0, partial_corrected} << recovery_shift_q;
        remainder_corrected = remainder_shifted[64:33];
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            state <= S_IDLE;
            partial_q <= '0;
            divisor_q <= '0;
            iteration_count_q <= '0;
            iteration_index_q <= '0;
            recovery_shift_q <= '0;
            quotient_result_q <= '0;
            remainder_result_q <= '0;
        end else if(kill) begin
            state <= S_IDLE;
            partial_q <= '0;
            divisor_q <= '0;
            iteration_count_q <= '0;
            iteration_index_q <= '0;
            recovery_shift_q <= '0;
            quotient_result_q <= '0;
            remainder_result_q <= '0;
        end else begin
            case(state)
                S_IDLE: begin
                    if(req_fire) begin
                        iteration_index_q <= 5'd0;

                        if(pre_divisor_is_zero) begin
                            state <= S_RESPONSE;
                            quotient_result_q <= 32'hffffffff;
                            remainder_result_q <= req_dividend;
                        end else if(req_dividend == '0) begin
                            state <= S_RESPONSE;
                            quotient_result_q <= 32'b0;
                            remainder_result_q <= 32'b0;
                        end else begin
                            state <= S_ITERATE;
                            partial_q <= $signed(pre_partial);
                            divisor_q <= pre_divisor;
                            iteration_count_q <= pre_iterations;
                            recovery_shift_q <= pre_recovery_shift;
                            quotient_result_q <= '0;
                            remainder_result_q <= '0;
                        end
                    end
                end

                S_ITERATE: begin
                    if(iteration_index_q + 5'd1 == iteration_count_q) begin
                        partial_q <= partial_after_digit;
                        state <= S_FINALIZE;
                    end else begin
                        partial_q <= partial_after_digit <<< 2;
                        iteration_index_q <= iteration_index_q + 5'd1;
                    end
                end

                S_FINALIZE: begin
                    quotient_result_q <= quotient_corrected;
                    remainder_result_q <= remainder_corrected;
                    state <= S_RESPONSE;
                end

                S_RESPONSE: begin
                    if(resp_fire) begin
                        state <= S_IDLE;
                    end
                end
                default: begin
                    state <= S_IDLE;
                end
            endcase
        end
    end
endmodule