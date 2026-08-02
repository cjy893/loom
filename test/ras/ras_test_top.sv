import loom_params::*;
import loom_consts::*;
import loom_types::*;

module ras_test_top (
    input logic clk,
    input logic rst_n,

    input  logic write_valid,
    input  logic [RAS_IDX_SZ-1:0] write_idx,
    input  logic [31:0] write_addr,

    input  logic [RAS_IDX_SZ-1:0] read_idx,
    output logic [31:0] read_addr,

    input  logic repair_valid,
    input  logic [RAS_IDX_SZ-1:0] repair_idx,
    input  logic [31:0] repair_addr
);
    ras #(.NUM_ENTRIES(RAS_ENTRIES)) dut (
        .clk, .rst_n,
        .write_valid, .write_idx, .write_addr,
        .read_idx,    .read_addr,
        .repair_valid, .repair_idx, .repair_addr
    );
endmodule
