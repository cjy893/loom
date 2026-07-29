module divider_test_top (
    input  logic        clk,
    input  logic        rst_n,

    input  logic        req_valid,
    output logic        req_ready,
    input  logic        req_signed,
    input  logic        req_remainder,
    input  logic [31:0] req_dividend,
    input  logic [31:0] req_divisor,

    input  logic        kill,

    output logic        resp_valid,
    input  logic        resp_ready,
    output logic [31:0] resp_data
);
`ifdef DIVIDER_USE_REFERENCE
    divider_reference dut (
`else
    divider dut (
`endif
        .clk,
        .rst_n,
        .req_valid,
        .req_ready,
        .req_signed,
        .req_remainder,
        .req_dividend,
        .req_divisor,
        .kill,
        .resp_valid,
        .resp_ready,
        .resp_data
    );
endmodule
