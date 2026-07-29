module srt4_preprocess_test_top (
    input  logic [31:0] dividend,
    input  logic [31:0] divisor,

    output logic        divisor_is_zero,
    output logic [35:0] initial_partial_remainder,
    output logic [35:0] aligned_divisor,
    output logic [4:0]  iteration_count,
    output logic [5:0]  recovery_shift
);
    srt4_preprocess dut (
        .dividend,
        .divisor,
        .divisor_is_zero,
        .initial_partial_remainder,
        .aligned_divisor,
        .iteration_count,
        .recovery_shift
    );
endmodule
