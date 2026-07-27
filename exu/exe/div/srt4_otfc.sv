module srt4_otfc(
    input logic clk,
    input logic rst_n,

    input logic clear,
    input logic step,
    input logic signed [2:0] quotient_digit,

    output logic [31:0] quotient,
    output logic [31:0] quotient_minus_one
);
    logic [31:0] quotient_next;
    logic [31:0] quotient_minus_one_next;

    always_comb begin
        quotient_next = quotient;
        quotient_minus_one_next = quotient_minus_one;

        case(quotient_digit)
            3'sd2: begin
                quotient_next = {quotient[29:0], 2'b10};
                quotient_minus_one_next = {quotient[29:0], 2'b01};
            end
            3'sd1: begin
                quotient_next = {quotient[29:0], 2'b01};
                quotient_minus_one_next = {quotient[29:0], 2'b00};
            end
            3'sd0: begin
                quotient_next = {quotient[29:0], 2'b00};
                quotient_minus_one_next = {quotient_minus_one[29:0], 2'b11};
            end
            -3'sd1: begin
                quotient_next = {quotient_minus_one[29:0], 2'b11};
                quotient_minus_one_next = {quotient_minus_one[29:0], 2'b10};
            end
            -3'sd2: begin
                quotient_next = {quotient_minus_one[29:0], 2'b10};
                quotient_minus_one_next = {quotient_minus_one[29:0], 2'b01};
            end
            default: begin
                quotient_next = quotient;
                quotient_minus_one_next = quotient_minus_one;
            end
        endcase
    end

    always_ff @(posedge clk or negedge rst_n) begin
        if(!rst_n) begin
            quotient <= 32'b0;
            quotient_minus_one <= 32'hffffffff;
        end else if(clear) begin
            quotient <= 32'b0;
            quotient_minus_one <= 32'hffffffff;
        end else if(step) begin
            quotient <= quotient_next;
            quotient_minus_one <= quotient_minus_one_next;
        end
    end
endmodule