module srt4_otfc_test_top (
    input  logic              clk,
    input  logic              rst_n,
    input  logic              clear,
    input  logic              step,
    input  logic signed [2:0] quotient_digit,

    output logic [31:0]       quotient,
    output logic [31:0]       quotient_minus_one
);
    srt4_otfc dut (
        .clk,
        .rst_n,
        .clear,
        .step,
        .quotient_digit,
        .quotient,
        .quotient_minus_one
    );
endmodule
