import loom_params::*;
import loom_consts::*;
import loom_types::*;

module f3_predecode_test_top (
    input  logic [31:0] inst,
    input  logic [31:0] pc,

    output logic [2:0]  cfi_type,
    output logic        is_call,
    output logic        is_ret,
    output logic        direct_target_valid,
    output logic [31:0] direct_target,
    output logic [31:0] return_addr,
    output logic        npc_plus4
);
    f3_predecode dut (
        .inst,
        .pc,
        .cfi_type,
        .is_call,
        .is_ret,
        .direct_target_valid,
        .direct_target,
        .return_addr,
        .npc_plus4
    );
endmodule
