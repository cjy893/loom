import loom_params::*;
import loom_consts::*;
import loom_types::*;

module dispatch #(
    parameter int CORE_WIDTH=2
)(
    input logic [CORE_WIDTH-1:0] rn2_mask,
    input uop_t [CORE_WIDTH-1:0] rn2_uops,

    input logic iq_mem_ready,
    input logic iq_alu_ready,
    input logic iq_unq_ready,

    output logic [CORE_WIDTH-1:0] iq_mem_dis_valid,
    output uop_t [CORE_WIDTH-1:0] iq_mem_dis_uop,
    output logic [CORE_WIDTH-1:0] iq_alu_dis_valid,
    output uop_t [CORE_WIDTH-1:0] iq_alu_dis_uop,
    output logic [CORE_WIDTH-1:0] iq_unq_dis_valid,
    output uop_t [CORE_WIDTH-1:0] iq_unq_dis_uop,

    output logic dis_ready,
    output logic [CORE_WIDTH-1:0] dis_fire,
    output uop_t [CORE_WIDTH-1:0] dis_uops
);

    logic [CORE_WIDTH-1:0] iq_ready;
    always_comb begin
        iq_ready = '0;
        for(int w = 0; w < CORE_WIDTH; w++) begin
            if(rn2_mask[w]) begin
                unique case(rn2_uops[w].iq_type)
                    IQ_MEM: iq_ready[w] = iq_mem_ready;
                    IQ_ALU: iq_ready[w] = iq_alu_ready;
                    IQ_UNQ: iq_ready[w] = iq_unq_ready;
                    default: iq_ready[w] = 1'b0;
                endcase
            end
        end
    end

    logic block;
    always_comb begin
        block = 1'b0;
        dis_fire = '0;
        for(int w = 0; w < CORE_WIDTH; w++) begin
            if(rn2_mask[w] && iq_ready[w] && !block) dis_fire[w] = 1'b1;
            else if(rn2_mask[w]) block = 1'b1;
        end
    end

    assign dis_ready = !block;
    assign dis_uops = rn2_uops;

    int mem_slot, alu_slot, unq_slot;
    always_comb begin
        iq_mem_dis_valid = '0; iq_mem_dis_uop = '0;
        iq_alu_dis_valid = '0; iq_alu_dis_uop = '0;
        iq_unq_dis_valid = '0; iq_unq_dis_uop = '0;

        mem_slot = 0;
        alu_slot = 0;
        unq_slot = 0;

        for(int w = 0; w < CORE_WIDTH; w++) begin
            if(dis_fire[w]) begin
                unique case(rn2_uops[w].iq_type)
                    IQ_MEM: begin
                        iq_mem_dis_valid[mem_slot] = 1'b1;
                        iq_mem_dis_uop[mem_slot] = rn2_uops[w];
                        mem_slot++;
                    end
                    IQ_ALU: begin
                        iq_alu_dis_valid[alu_slot] = 1'b1;
                        iq_alu_dis_uop[alu_slot] = rn2_uops[w];
                        alu_slot++;
                    end
                    IQ_UNQ: begin
                        iq_unq_dis_valid[unq_slot] = 1'b1;
                        iq_unq_dis_uop[unq_slot] = rn2_uops[w];
                        unq_slot++;
                    end
                    default:;
                endcase
            end
        end
    end
endmodule