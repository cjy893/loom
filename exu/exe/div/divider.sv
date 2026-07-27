module divider(
    input logic clk,
    input logic rst_n,

    input logic req_valid,
    output logic req_ready,
    input logic req_signed,
    input logic req_remainder,
    input logic [31:0] req_dividend,
    input logic [31:0] req_divisor,

    input logic kill,

    output logic resp_valid,
    input logic resp_ready,
    output logic [31:0] resp_data
);

    logic [31:0] dividend_abs;
    logic [31:0] divisor_abs;

    assign dividend_abs = (req_signed && req_dividend[31]) ? ~req_dividend + 32'd1 : req_dividend;
    assign divisor_abs  = (req_signed && req_divisor[31])  ? ~req_divisor  + 32'd1 : req_divisor;

    logic        core_resp_valid;
    logic        core_resp_ready;
    logic [31:0] core_quotient;
    logic [31:0] core_remainder;

    srt4_core srt4_core_i (
        .clk,
        .rst_n,
        .req_valid(req_valid),
        .req_ready(req_ready),
        .req_dividend(dividend_abs),
        .req_divisor(divisor_abs),
        .kill(kill),
        .resp_valid(core_resp_valid),
        .resp_ready(core_resp_ready),
        .resp_quotient(core_quotient),
        .resp_remainder(core_remainder)
    );

    logic quotient_negate_q;
    logic remainder_negate_q;
    logic select_remainder_q;
    logic divisor_zero_q;

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            quotient_negate_q  <= 1'b0;
            remainder_negate_q <= 1'b0;
            select_remainder_q <= 1'b0;
            divisor_zero_q     <= 1'b0;
        end else if(req_valid && req_ready) begin
            quotient_negate_q  <= req_signed && (req_dividend[31] ^ req_divisor[31]);
            remainder_negate_q <= req_signed && req_dividend[31];
            select_remainder_q <= req_remainder;
            divisor_zero_q     <= (req_divisor == 32'b0);
        end
    end

    logic [31:0] quotient_fixed;
    logic [31:0] remainder_fixed;

    assign quotient_fixed  = divisor_zero_q ? 32'hffffffff :
                             (quotient_negate_q ? ~core_quotient + 32'd1 : core_quotient);
    assign remainder_fixed = remainder_negate_q ? ~core_remainder + 32'd1 : core_remainder;

    assign resp_valid = core_resp_valid;
    assign core_resp_ready = resp_ready;
    assign resp_data = select_remainder_q ? remainder_fixed : quotient_fixed;

endmodule
