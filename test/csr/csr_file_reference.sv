import loom_params::*;
import loom_consts::*;
import loom_types::*;

module csr_file_reference #(
    parameter int CSR_ADDR_WIDTH = 14,
    parameter int ROB_IDX_WIDTH = ROB_ADDR_SZ,
    parameter int NUM_HW_IRQS = 8,
    parameter logic [31:0] CORE_ID = 32'd0,
    parameter logic [31:0] RESET_CRMD = 32'h0000_0008,
    parameter logic [63:0] RESET_STABLE_COUNTER = 64'd0
)(
    input logic clk,
    input logic rst_n,
    input logic csr_req_valid,
    output logic csr_req_ready,
    input logic [ROB_IDX_WIDTH-1:0] csr_req_rob_idx,
    input logic [CSR_ADDR_WIDTH-1:0] csr_req_addr,
    input logic [1:0] csr_cmd,
    input logic [31:0] csr_wdata,
    input logic [31:0] csr_wmask,
    output logic csr_resp_valid,
    input logic csr_resp_ready,
    output logic [ROB_IDX_WIDTH-1:0] csr_resp_rob_idx,
    output logic [31:0] csr_rdata,
    input logic csr_commit_valid,
    input logic [ROB_IDX_WIDTH-1:0] csr_commit_rob_idx,
    input logic csr_flush_pending,
    input logic xcpt_valid,
    input logic [31:0] xcpt_pc,
    input logic [5:0] xcpt_code,
    input logic [8:0] xcpt_esubcode,
    input logic [31:0] xcpt_badvaddr,
    input logic ertn_valid,
    input logic [NUM_HW_IRQS-1:0] hw_irq,
    input logic ipi_irq,
    output logic interrupt_pending,
    output logic [12:0] interrupt_pending_bits,
    output logic [1:0] current_plv,
    output logic current_ie,
    output logic [31:0] xcpt_target,
    output logic [31:0] ertn_target,
    output logic [31:0] crmd_value,
    output logic [31:0] asid_value,
    output logic [31:0] dmw0_value,
    output logic [31:0] dmw1_value,
    output logic [31:0] era_value,
    output logic [31:0] eentry_value,
    output logic [31:0] tlbrentry_value
);
    localparam logic [1:0] CSR_READ = 2'd0;
    localparam logic [5:0] ECODE_PIL = 6'h01;
    localparam logic [5:0] ECODE_PIS = 6'h02;
    localparam logic [5:0] ECODE_PIF = 6'h03;
    localparam logic [5:0] ECODE_PME = 6'h04;
    localparam logic [5:0] ECODE_PPI = 6'h07;
    localparam logic [5:0] ECODE_ADE = 6'h08;
    localparam logic [5:0] ECODE_ALE = 6'h09;
    localparam logic [5:0] ECODE_TLBR = 6'h3f;

    logic [31:0] crmd_q, prmd_q, euen_q, ecfg_q, estat_q;
    logic [31:0] era_q, badv_q, eentry_q;
    logic [31:0] tlbidx_q, tlbehi_q, tlbelo0_q, tlbelo1_q;
    logic [31:0] asid_q, pgdl_q, pgdh_q;
    logic [31:0] save_q [0:3];
    logic [31:0] tid_q, tcfg_q, tval_q, llbctl_q;
    logic [31:0] tlbrentry_q, dmw0_q, dmw1_q;
    logic [63:0] stable_counter_q;
    logic timer_irq_q;
    logic timer_armed_q;

    logic pending_q;
    logic [ROB_IDX_WIDTH-1:0] pending_rob_idx_q;
    logic [CSR_ADDR_WIDTH-1:0] pending_addr_q;
    logic [1:0] pending_cmd_q;
    logic [31:0] pending_wdata_q, pending_wmask_q;
    logic resp_valid_q;
    logic [31:0] resp_data_q;

    logic [31:0] estat_read_value;
    logic [31:0] pending_tcfg_write_value;
    logic commit_match;

    function automatic logic [31:0] write_mask(
        input logic [CSR_ADDR_WIDTH-1:0] addr
    );
        case (addr)
            14'h000: write_mask = 32'h0000_01ff;
            14'h001: write_mask = 32'h0000_0007;
            14'h002: write_mask = 32'h0000_0000;
            14'h004: write_mask = 32'h0000_1bff;
            14'h005: write_mask = 32'h0000_0003;
            14'h00c: write_mask = 32'hffff_ffc0;
            14'h010: write_mask = 32'hbf00_001f;
            14'h011: write_mask = 32'hffff_e000;
            14'h012,
            14'h013: write_mask = 32'h0fff_ff7f;
            14'h018: write_mask = 32'h0000_03ff;
            14'h019,
            14'h01a: write_mask = 32'hffff_f000;
            14'h01b,
            14'h020,
            14'h042,
            14'h044: write_mask = 32'h0000_0000;
            14'h060: write_mask = 32'h0000_0004;
            14'h088: write_mask = 32'hffff_ffc0;
            14'h180,
            14'h181: write_mask = 32'hee00_0039;
            14'h006,
            14'h007,
            14'h030,
            14'h031,
            14'h032,
            14'h033,
            14'h040,
            14'h041: write_mask = 32'hffff_ffff;
            default: write_mask = 32'h0000_0000;
        endcase
    endfunction

    function automatic logic [31:0] merge_write(
        input logic [31:0] old_value,
        input logic [31:0] new_value,
        input logic [31:0] operand_mask,
        input logic [31:0] arch_mask
    );
        logic [31:0] effective_mask;
        begin
            effective_mask = operand_mask & arch_mask;
            merge_write =
                (old_value & ~effective_mask) |
                (new_value & effective_mask);
        end
    endfunction

    always_comb begin
        pending_tcfg_write_value = merge_write(
            tcfg_q,
            pending_wdata_q,
            pending_wmask_q,
            write_mask(pending_addr_q)
        );
    end

    always_comb begin
        estat_read_value = estat_q;
        estat_read_value[9:2] = hw_irq;
        estat_read_value[10] = 1'b0;
        estat_read_value[11] = timer_irq_q;
        estat_read_value[12] = ipi_irq;

        interrupt_pending_bits = estat_read_value[12:0];
        interrupt_pending =
            crmd_q[2] && |(interrupt_pending_bits & ecfg_q[12:0]);
    end

    function automatic logic [31:0] read_csr(
        input logic [CSR_ADDR_WIDTH-1:0] addr
    );
        case (addr)
            14'h000: read_csr = crmd_q;
            14'h001: read_csr = prmd_q;
            14'h002: read_csr = euen_q;
            14'h004: read_csr = ecfg_q;
            14'h005: read_csr = estat_read_value & 32'h7fff_1fff;
            14'h006: read_csr = era_q;
            14'h007: read_csr = badv_q;
            14'h00c: read_csr = eentry_q;
            14'h010: read_csr = tlbidx_q;
            14'h011: read_csr = tlbehi_q;
            14'h012: read_csr = tlbelo0_q;
            14'h013: read_csr = tlbelo1_q;
            14'h018: read_csr = asid_q & 32'h0000_03ff;
            14'h019: read_csr = pgdl_q;
            14'h01a: read_csr = pgdh_q;
            14'h01b: read_csr = badv_q[31] ? pgdh_q : pgdl_q;
            14'h020: read_csr = CORE_ID & 32'h0000_01ff;
            14'h030: read_csr = save_q[0];
            14'h031: read_csr = save_q[1];
            14'h032: read_csr = save_q[2];
            14'h033: read_csr = save_q[3];
            14'h040: read_csr = tid_q;
            14'h041: read_csr = tcfg_q;
            14'h042: read_csr = tval_q;
            14'h044: read_csr = 32'b0;
            14'h060: read_csr = llbctl_q & 32'h0000_0005;
            14'h088: read_csr = tlbrentry_q;
            14'h180: read_csr = dmw0_q;
            14'h181: read_csr = dmw1_q;
            14'h182: read_csr = stable_counter_q[31:0];
            14'h183: read_csr = stable_counter_q[63:32];
            default: read_csr = 32'b0;
        endcase
    endfunction

    assign csr_req_ready = !pending_q;
    assign csr_resp_valid = resp_valid_q;
    assign csr_resp_rob_idx = pending_rob_idx_q;
    assign csr_rdata = resp_data_q;
    assign commit_match =
        pending_q && csr_commit_valid &&
        (csr_commit_rob_idx == pending_rob_idx_q);

    assign current_plv = crmd_q[1:0];
    assign current_ie = crmd_q[2];
    assign xcpt_target =
        (xcpt_valid && xcpt_code == ECODE_TLBR) ?
        tlbrentry_q : eentry_q;
    assign ertn_target = era_q;
    assign crmd_value = crmd_q;
    assign asid_value = asid_q;
    assign dmw0_value = dmw0_q;
    assign dmw1_value = dmw1_q;
    assign era_value = era_q;
    assign eentry_value = eentry_q;
    assign tlbrentry_value = tlbrentry_q;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            crmd_q <= RESET_CRMD;
            prmd_q <= '0;
            euen_q <= '0;
            ecfg_q <= '0;
            estat_q <= '0;
            era_q <= '0;
            badv_q <= '0;
            eentry_q <= '0;
            tlbidx_q <= 32'h8000_0000;
            tlbehi_q <= '0;
            tlbelo0_q <= '0;
            tlbelo1_q <= '0;
            asid_q <= '0;
            pgdl_q <= '0;
            pgdh_q <= '0;
            for (int i = 0; i < 4; i++)
                save_q[i] <= '0;
            tid_q <= CORE_ID;
            tcfg_q <= '0;
            tval_q <= '0;
            llbctl_q <= '0;
            tlbrentry_q <= '0;
            dmw0_q <= '0;
            dmw1_q <= '0;
            stable_counter_q <= RESET_STABLE_COUNTER;
            timer_irq_q <= 1'b0;
            timer_armed_q <= 1'b0;
            pending_q <= 1'b0;
            pending_rob_idx_q <= '0;
            pending_addr_q <= '0;
            pending_cmd_q <= CSR_READ;
            pending_wdata_q <= '0;
            pending_wmask_q <= '0;
            resp_valid_q <= 1'b0;
            resp_data_q <= '0;
        end else begin
            stable_counter_q <= stable_counter_q + 64'd1;

            if (timer_armed_q) begin
                if (tval_q != 0)
                    tval_q <= tval_q - 32'd1;
                else begin
                    timer_irq_q <= 1'b1;
                    if (tcfg_q[1]) begin
                        tval_q <= {tcfg_q[31:2], 2'b00};
                    end else begin
                        timer_armed_q <= 1'b0;
                    end
                end
            end

            if (resp_valid_q && csr_resp_ready)
                resp_valid_q <= 1'b0;

            if (csr_req_valid && csr_req_ready) begin
                pending_q <= 1'b1;
                pending_rob_idx_q <= csr_req_rob_idx;
                pending_addr_q <= csr_req_addr;
                pending_cmd_q <= csr_cmd;
                pending_wdata_q <= csr_wdata;
                pending_wmask_q <= csr_wmask;
                resp_valid_q <= 1'b1;
                resp_data_q <= read_csr(csr_req_addr);
            end

            if (commit_match) begin
                pending_q <= 1'b0;
                resp_valid_q <= 1'b0;

                if (pending_cmd_q != CSR_READ) begin
                    case (pending_addr_q)
                        14'h000:
                            crmd_q <= merge_write(
                                crmd_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h001:
                            prmd_q <= merge_write(
                                prmd_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h002:
                            euen_q <= merge_write(
                                euen_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h004:
                            ecfg_q <= merge_write(
                                ecfg_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h005:
                            estat_q <= merge_write(
                                estat_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h006:
                            era_q <= merge_write(
                                era_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h007:
                            badv_q <= merge_write(
                                badv_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h00c:
                            eentry_q <= merge_write(
                                eentry_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h010:
                            tlbidx_q <= merge_write(
                                tlbidx_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h011:
                            tlbehi_q <= merge_write(
                                tlbehi_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h012:
                            tlbelo0_q <= merge_write(
                                tlbelo0_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h013:
                            tlbelo1_q <= merge_write(
                                tlbelo1_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h018:
                            asid_q <= merge_write(
                                asid_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h019:
                            pgdl_q <= merge_write(
                                pgdl_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h01a:
                            pgdh_q <= merge_write(
                                pgdh_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h030:
                            save_q[0] <= merge_write(
                                save_q[0], pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h031:
                            save_q[1] <= merge_write(
                                save_q[1], pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h032:
                            save_q[2] <= merge_write(
                                save_q[2], pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h033:
                            save_q[3] <= merge_write(
                                save_q[3], pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h040:
                            tid_q <= merge_write(
                                tid_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h041: begin
                            tcfg_q <= pending_tcfg_write_value;
                            timer_armed_q <=
                                pending_tcfg_write_value[0];
                            tval_q <= {
                                pending_tcfg_write_value[31:2],
                                2'b00
                            };
                        end
                        14'h044: begin
                            if (pending_wdata_q[0] &&
                                pending_wmask_q[0])
                                timer_irq_q <= 1'b0;
                        end
                        14'h060:
                            llbctl_q <= merge_write(
                                llbctl_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h088:
                            tlbrentry_q <= merge_write(
                                tlbrentry_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h180:
                            dmw0_q <= merge_write(
                                dmw0_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        14'h181:
                            dmw1_q <= merge_write(
                                dmw1_q, pending_wdata_q,
                                pending_wmask_q, write_mask(pending_addr_q));
                        default: begin end
                    endcase
                end
            end else if (csr_flush_pending) begin
                pending_q <= 1'b0;
                resp_valid_q <= 1'b0;
            end

            if (xcpt_valid) begin
                pending_q <= 1'b0;
                resp_valid_q <= 1'b0;
                prmd_q[2:0] <= crmd_q[2:0];
                crmd_q[2:0] <= 3'b000;
                if (xcpt_code == ECODE_TLBR)
                    crmd_q[4:3] <= 2'b01;
                estat_q[21:16] <= xcpt_code;
                estat_q[30:22] <= xcpt_esubcode;
                era_q <= xcpt_pc;

                if (xcpt_code == ECODE_ADE &&
                    xcpt_esubcode == 0) begin
                    badv_q <= xcpt_pc;
                end else if (xcpt_code == ECODE_ALE) begin
                    badv_q <= xcpt_badvaddr;
                end else if (xcpt_code == ECODE_PIF) begin
                    badv_q <= xcpt_pc;
                    tlbehi_q <= {xcpt_pc[31:13], 13'b0};
                end else if (xcpt_code == ECODE_TLBR ||
                             xcpt_code == ECODE_PIL ||
                             xcpt_code == ECODE_PIS ||
                             xcpt_code == ECODE_PME ||
                             xcpt_code == ECODE_PPI) begin
                    badv_q <= xcpt_badvaddr;
                    tlbehi_q <= {xcpt_badvaddr[31:13], 13'b0};
                end
            end else if (ertn_valid) begin
                pending_q <= 1'b0;
                resp_valid_q <= 1'b0;
                crmd_q[2:0] <= prmd_q[2:0];
                if (estat_q[21:16] == ECODE_TLBR)
                    crmd_q[4:3] <= 2'b10;
                llbctl_q[2] <= 1'b0;
            end
        end
    end
endmodule
