import loom_params::*;
import loom_consts::*;
import loom_types::*;

module dispatch #(
    parameter int CORE_WIDTH=2
)(
    input logic [CORE_WIDTH-1:0] rn2_mask,
    input uop_t [CORE_WIDTH-1:0] rn2_uops,
    input logic dispatch_enable,
    input logic [CORE_WIDTH-1:0] lane_ready,
    input logic [CORE_WIDTH-1:0][3:0] rn2_iq_type,
    input logic [CORE_WIDTH-1:0] rn2_exception,

    input logic [CORE_WIDTH-1:0] iq_mem_ready,
    input logic [CORE_WIDTH-1:0] iq_alu_ready,
    input logic [CORE_WIDTH-1:0] iq_unq_ready,

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
    logic block;
    int mem_need, alu_need, unq_need;
    always_comb begin
        block = !dispatch_enable;
        dis_fire = '0;

        mem_need = 0;
        alu_need = 0;
        unq_need = 0;
        for(int w = 0; w < CORE_WIDTH; w++) begin
            if(rn2_mask[w] && !block) begin
                if(rn2_exception[w]) begin
                    dis_fire[w] = 1'b1;
                end else if(!lane_ready[w]) begin
                    block = 1'b1;
                end else begin
                    unique case(rn2_iq_type[w])
                        IQ_MEM: begin
                            if(iq_mem_ready[mem_need]) begin
                                dis_fire[w] = 1'b1;
                                mem_need++;
                            end else begin
                                block = 1'b1;
                            end
                        end
                        IQ_ALU: begin
                            if(iq_alu_ready[alu_need]) begin
                                dis_fire[w] = 1'b1;
                                alu_need++;
                            end else begin
                                block = 1'b1;
                            end
                        end
                        IQ_UNQ: begin
                            if(iq_unq_ready[unq_need]) begin
                                dis_fire[w] = 1'b1;
                                unq_need++;
                            end else begin
                                block = 1'b1;
                            end
                        end
                        default: block = 1'b1;
                    endcase
                end
            end
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
            if(dis_fire[w] && !rn2_exception[w]) begin
                unique case(rn2_iq_type[w])
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
