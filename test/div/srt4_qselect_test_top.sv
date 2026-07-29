module srt4_qselect_test_top (
    input  logic signed [6:0] partial_remainder_index,
    input  logic        [3:0] divisor_index,
    output logic signed [2:0] quotient_digit
);
    srt4_qselect dut (
        .partial_remainder_index,
        .divisor_index,
        .quotient_digit
    );
endmodule
