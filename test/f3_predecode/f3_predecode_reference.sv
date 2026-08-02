import loom_params::*;
import loom_consts::*;
import loom_types::*;

module f3_predecode (
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
    logic [5:0] op_31_26;
    logic [4:0] rd;
    logic [4:0] rj;
    logic signed [31:0] branch_offset;
    logic signed [31:0] jump_offset;

    assign op_31_26 = inst[31:26];
    assign rd = inst[4:0];
    assign rj = inst[9:5];
    assign branch_offset = $signed(
        {{14{inst[25]}}, inst[25:10], 2'b00}
    );
    assign jump_offset = $signed(
        {{4{inst[9]}}, inst[9:0], inst[25:10], 2'b00}
    );

    always_comb begin
        cfi_type = CFI_X;
        is_call = 1'b0;
        is_ret = 1'b0;
        direct_target_valid = 1'b0;
        direct_target = '0;
        return_addr = pc + 32'd4;
        npc_plus4 = 1'b1;

        unique case (op_31_26)
            6'b010011: begin
                cfi_type = CFI_JIRL;
                is_call = rd == 5'd1;
                is_ret = rj == 5'd1 && rd == 5'd0;
            end
            6'b010100: begin
                cfi_type = CFI_B_BL;
                direct_target_valid = 1'b1;
                direct_target = pc + jump_offset;
            end
            6'b010101: begin
                cfi_type = CFI_B_BL;
                is_call = 1'b1;
                direct_target_valid = 1'b1;
                direct_target = pc + jump_offset;
            end
            6'b010110,
            6'b010111,
            6'b011000,
            6'b011001,
            6'b011010,
            6'b011011: begin
                cfi_type = CFI_BR;
                direct_target_valid = 1'b1;
                direct_target = pc + branch_offset;
            end
            default: begin
            end
        endcase
    end
endmodule
