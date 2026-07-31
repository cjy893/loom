import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_top #(
    parameter logic [31:0] RESET_PC = 32'h1c00_0000,
    parameter logic [31:0] CORE_ID = 32'd0,
    parameter int FETCH_WIDTH = 4,
    parameter int CORE_WIDTH = 2,
    parameter int FETCH_BUFFER_ENTRIES = 16,
    parameter bit ENABLE_SINGLE_DEBUG_COMMIT = 1'b1
)(
    input logic aclk,
    input logic aresetn,
    input logic [7:0] intrpt,

    output logic [3:0]  arid,
    output logic [31:0] araddr,
    output logic [3:0]  arlen,
    output logic [2:0]  arsize,
    output logic [1:0]  arburst,
    output logic [1:0]  arlock,
    output logic [3:0]  arcache,
    output logic [2:0]  arprot,
    output logic        arvalid,
    input  logic        arready,

    input  logic [3:0]  rid,
    input  logic [31:0] rdata,
    input  logic [1:0]  rresp,
    input  logic        rlast,
    input  logic        rvalid,
    output logic        rready,

    output logic [3:0]  awid,
    output logic [31:0] awaddr,
    output logic [3:0]  awlen,
    output logic [2:0]  awsize,
    output logic [1:0]  awburst,
    output logic [1:0]  awlock,
    output logic [3:0]  awcache,
    output logic [2:0]  awprot,
    output logic        awvalid,
    input  logic        awready,

    output logic [3:0]  wid,
    output logic [31:0] wdata,
    output logic [3:0]  wstrb,
    output logic        wlast,
    output logic        wvalid,
    input  logic        wready,

    input  logic [3:0]  bid,
    input  logic [1:0]  bresp,
    input  logic        bvalid,
    output logic        bready,

    input  logic        break_point,
    input  logic        infor_flag,
    input  logic [4:0]  reg_num,
    output logic        ws_valid,
    output logic [31:0] rf_rdata,

    output logic [31:0] debug0_wb_pc,
    output logic [3:0]  debug0_wb_rf_wen,
    output logic [4:0]  debug0_wb_rf_wnum,
    output logic [31:0] debug0_wb_rf_wdata
);
    localparam logic [3:0] AXI_ID_IFU = 4'd0;
    localparam logic [3:0] AXI_ID_LSU = 4'd1;
    localparam int FETCH_BEAT_BITS =
        (FETCH_WIDTH > 1) ? $clog2(FETCH_WIDTH) : 1;

    logic [FETCH_WIDTH-1:0]       ifu_fetch_valid;
    logic [FETCH_WIDTH-1:0][31:0] ifu_fetch_insts;
    logic [FETCH_WIDTH-1:0][31:0] ifu_fetch_pcs;
    logic                         ifu_fetch_ready;
    logic                         imem_req_valid;
    logic                         imem_req_ready;
    logic [31:0]                  imem_req_addr;
    logic                         imem_resp_valid;
    logic                         imem_resp_ready;
    logic [FETCH_WIDTH-1:0][31:0] imem_resp_insts;

    logic [CORE_WIDTH-1:0]       buffer_deq_valid;
    logic [CORE_WIDTH-1:0][31:0] buffer_deq_insts;
    logic [CORE_WIDTH-1:0][31:0] buffer_deq_pcs;
    logic                        buffer_deq_ready;

    logic                         core_redirect_valid;
    logic [31:0]                  core_redirect_pc;
    logic                         dmem_req_valid;
    logic                         dmem_req_ready;
    logic                         dmem_req_is_store;
    logic [31:0]                  dmem_req_addr;
    logic [31:0]                  dmem_req_data;
    logic [3:0]                   dmem_req_mask;
    logic [1:0]                   dmem_req_size;
    logic [LSU_ADDR_SZ+1:0]       dmem_req_idx;
    uop_t                         dmem_req_uop;
    logic                         dmem_resp_valid;
    logic                         dmem_resp_is_store;
    logic [31:0]                  dmem_resp_data;
    logic [LSU_ADDR_SZ+1:0]       dmem_resp_idx;
    commit_signal_t               core_commit;

    logic                         ifu_xlate_req_valid;
    logic                         ifu_xlate_req_ready;
    logic [31:0]                  ifu_xlate_req_vaddr;

    logic                         ifu_xlate_resp_valid;
    logic                         ifu_xlate_resp_ready;
    logic [31:0]                  ifu_xlate_resp_vaddr;
    logic [31:0]                  ifu_xlate_resp_paddr;
    logic [1:0]                   ifu_xlate_resp_mat;
    logic                         ifu_xlate_resp_cacheable;
    logic                         ifu_xlate_resp_xcpt_valid;
    logic [5:0]                   ifu_xlate_resp_xcpt_code;

    logic [1:0]                   imem_req_mat;
    logic                         imem_req_cacheable;

    logic [FETCH_WIDTH-1:0]       ifu_fetch_xcpt_valid;
    logic [FETCH_WIDTH-1:0][5:0]  ifu_fetch_xcpt_code;

    logic [CORE_WIDTH-1:0]        buffer_deq_xcpt_valid;
    logic [CORE_WIDTH-1:0][5:0]   buffer_deq_xcpt_code;

    ifu #(
        .FETCH_WIDTH(FETCH_WIDTH),
        .RESET_PC(RESET_PC)
    ) ifu_inst (
        .clk(aclk),
        .rst_n(aresetn),
        .redirect_valid(core_redirect_valid),
        .redirect_pc(core_redirect_pc),
        .xlate_req_valid       (ifu_xlate_req_valid),
        .xlate_req_ready       (ifu_xlate_req_ready),
        .xlate_req_vaddr       (ifu_xlate_req_vaddr),

        .xlate_resp_valid      (ifu_xlate_resp_valid),
        .xlate_resp_ready      (ifu_xlate_resp_ready),
        .xlate_resp_vaddr      (ifu_xlate_resp_vaddr),
        .xlate_resp_paddr      (ifu_xlate_resp_paddr),
        .xlate_resp_mat        (ifu_xlate_resp_mat),
        .xlate_resp_cacheable  (ifu_xlate_resp_cacheable),
        .xlate_resp_xcpt_valid (ifu_xlate_resp_xcpt_valid),
        .xlate_resp_xcpt_code  (ifu_xlate_resp_xcpt_code),

        .imem_req_mat          (imem_req_mat),
        .imem_req_cacheable    (imem_req_cacheable),

        .fetch_xcpt_valid      (ifu_fetch_xcpt_valid),
        .fetch_xcpt_code       (ifu_fetch_xcpt_code),
        .imem_req_valid,
        .imem_req_ready,
        .imem_req_addr,
        .imem_resp_valid,
        .imem_resp_ready,
        .imem_resp_insts,
        .fetch_valid(ifu_fetch_valid),
        .fetch_insts(ifu_fetch_insts),
        .fetch_pc(ifu_fetch_pcs),
        .fetch_ready(ifu_fetch_ready)
    );

    fetcher_buffer #(
        .FETCH_WIDTH(FETCH_WIDTH),
        .CORE_WIDTH(CORE_WIDTH),
        .NUM_ENTRIES(FETCH_BUFFER_ENTRIES)
    ) fetch_buffer_inst (
        .clk(aclk),
        .rst_n(aresetn),
        .flush(core_redirect_valid),
        .enq_valid(ifu_fetch_valid),
        .enq_xcpt_valid (ifu_fetch_xcpt_valid),
        .enq_xcpt_code  (ifu_fetch_xcpt_code),
        .deq_xcpt_valid (buffer_deq_xcpt_valid),
        .deq_xcpt_code  (buffer_deq_xcpt_code),
        .enq_pcs(ifu_fetch_pcs),
        .enq_insts(ifu_fetch_insts),
        .enq_ready(ifu_fetch_ready),
        .deq_valid(buffer_deq_valid),
        .deq_pcs(buffer_deq_pcs),
        .deq_insts(buffer_deq_insts),
        .deq_ready(buffer_deq_ready)
    );

    loom_core #(
        .RESET_PC(RESET_PC),
        .USE_EXTERNAL_FE_PCS(1'b1),
        .CORE_WIDTH(CORE_WIDTH),
        .FETCH_WIDTH(CORE_WIDTH),
        .CORE_ID(CORE_ID),
        .ENABLE_SINGLE_DEBUG_COMMIT(1'b0)
    ) core_inst (
        .clk(aclk),
        .rst_n(aresetn),
        .fe_valid(buffer_deq_valid),
        .fe_insts(buffer_deq_insts),
        .fe_pcs(buffer_deq_pcs),
        .fe_ready(buffer_deq_ready),
        .fe_redirect_valid(core_redirect_valid),
        .fe_redirect_pc(core_redirect_pc),
        .fe_xcpt_valid (buffer_deq_xcpt_valid),
        .fe_xcpt_code  (buffer_deq_xcpt_code),
        .ifu_xlate_req_valid       (ifu_xlate_req_valid),
        .ifu_xlate_req_ready       (ifu_xlate_req_ready),
        .ifu_xlate_req_vaddr       (ifu_xlate_req_vaddr),

        .ifu_xlate_resp_valid      (ifu_xlate_resp_valid),
        .ifu_xlate_resp_ready      (ifu_xlate_resp_ready),
        .ifu_xlate_resp_vaddr      (ifu_xlate_resp_vaddr),
        .ifu_xlate_resp_paddr      (ifu_xlate_resp_paddr),
        .ifu_xlate_resp_mat        (ifu_xlate_resp_mat),
        .ifu_xlate_resp_cacheable  (ifu_xlate_resp_cacheable),
        .ifu_xlate_resp_xcpt_valid (ifu_xlate_resp_xcpt_valid),
        .ifu_xlate_resp_xcpt_code  (ifu_xlate_resp_xcpt_code),
        .ifu_xlate_resp_badvaddr   (),
        .dmem_req_valid,
        .dmem_req_ready,
        .dmem_req_is_store,
        .dmem_req_addr,
        .dmem_req_data,
        .dmem_req_mask,
        .dmem_req_size,
        .dmem_req_idx,
        .dmem_req_uop,
        .dmem_resp_valid,
        .dmem_resp_is_store,
        .dmem_resp_data,
        .dmem_resp_idx,
        .hw_irq(intrpt),
        .ipi_irq(1'b0),
        .csr_req_valid(),
        .csr_addr(),
        .csr_cmd(),
        .csr_wdata(),
        .csr_wmask(),
        .commit(core_commit),
        .rob_empty(),
        .debug_pc(),
        .commit_valid_dbg(),
        .commit_valids_dbg(),
        .commit_ldst_dbg(),
        .rf_wr_en_dbg(),
        .rf_wr_pdst_dbg(),
        .rf_wr_ldst_dbg(),
        .rf_wr_data_dbg(),
        .alu_src1_dbg(),
        .alu_imm_dbg(),
        .alu_imm_packed_dbg(),
        .alu_imm_sel_dbg(),
        .rob_ready_dbg(),
        .ren_stalls_dbg(),
        .rn2_mask_dbg(),
        .dis_fire_dbg(),
        .dis_unique_dbg(),
        .alu_iss_valid_dbg(),
        .alu_res_valid_dbg(),
        .rob_wb_valid_dbg()
    );

    typedef enum logic [1:0] {
        RD_IDLE,
        RD_ADDR,
        RD_DATA,
        RD_IFU_RESP
    } read_state_t;

    read_state_t read_state_q;
    logic read_is_data_q;
    logic [31:0] read_addr_q;
    logic [LSU_ADDR_SZ+1:0] read_dmem_idx_q;
    logic [FETCH_BEAT_BITS-1:0] read_beat_q;
    logic [FETCH_WIDTH-1:0][31:0] imem_resp_insts_q;
    logic prefer_data_q;

    typedef enum logic [1:0] {
        WR_IDLE,
        WR_SEND,
        WR_RESP
    } write_state_t;

    write_state_t write_state_q;
    logic [31:0] write_addr_q;
    logic [31:0] write_data_q;
    logic [3:0] write_mask_q;
    logic [LSU_ADDR_SZ+1:0] write_dmem_idx_q;
    logic write_addr_done_q;
    logic write_data_done_q;
    logic dmem_outstanding_q;

    logic load_request_accept;
    logic store_request_accept;
    logic load_response_fire;
    logic store_response_fire;
    logic write_addr_complete;
    logic write_data_complete;

    assign arid = read_is_data_q ? AXI_ID_LSU : AXI_ID_IFU;
    assign araddr = read_is_data_q
        ? {read_addr_q[31:2], 2'b00}
        : read_addr_q;
    assign arlen = read_is_data_q
        ? 4'd0
        : 4'(FETCH_WIDTH - 1);
    assign arsize = 3'b010;
    assign arburst = 2'b01;
    assign arlock = 2'b00;
    assign arcache = 4'b0000;
    assign arprot = 3'b000;
    assign arvalid = read_state_q == RD_ADDR;
    assign rready = read_state_q == RD_DATA;

    assign load_request_accept =
        read_state_q == RD_ADDR &&
        read_is_data_q &&
        arready;

    always_ff @(posedge aclk or negedge aresetn) begin
        if (!aresetn) begin
            read_state_q <= RD_IDLE;
            read_is_data_q <= 1'b0;
            read_addr_q <= '0;
            read_dmem_idx_q <= '0;
            read_beat_q <= '0;
            imem_resp_insts_q <= '0;
            prefer_data_q <= 1'b1;
        end else begin
            case (read_state_q)
                RD_IDLE: begin
                    if (!dmem_outstanding_q &&
                        dmem_req_valid &&
                        !dmem_req_is_store &&
                        (prefer_data_q || !imem_req_valid)) begin
                        read_is_data_q <= 1'b1;
                        read_addr_q <= dmem_req_addr;
                        read_dmem_idx_q <= dmem_req_idx;
                        read_state_q <= RD_ADDR;
                    end else if (imem_req_valid && imem_req_ready) begin
                        read_is_data_q <= 1'b0;
                        read_addr_q <= imem_req_addr;
                        read_beat_q <= '0;
                        imem_resp_insts_q <= '0;
                        read_state_q <= RD_ADDR;
                    end else if (!dmem_outstanding_q &&
                                 dmem_req_valid &&
                                 !dmem_req_is_store) begin
                        read_is_data_q <= 1'b1;
                        read_addr_q <= dmem_req_addr;
                        read_dmem_idx_q <= dmem_req_idx;
                        read_state_q <= RD_ADDR;
                    end
                end

                RD_ADDR: begin
                    if (arvalid && arready) begin
                        read_beat_q <= '0;
                        prefer_data_q <= !read_is_data_q;
                        read_state_q <= RD_DATA;
                    end
                end

                RD_DATA: begin
                    if (rvalid && rready) begin
                        if (read_is_data_q) begin
                            read_state_q <= RD_IDLE;
                        end else begin
                            imem_resp_insts_q[read_beat_q] <= rdata;
                            if (rlast ||
                                read_beat_q ==
                                    FETCH_BEAT_BITS'(FETCH_WIDTH - 1)) begin
                                read_state_q <= RD_IFU_RESP;
                            end else begin
                                read_beat_q <= read_beat_q + 1'b1;
                            end
                        end
                    end
                end

                RD_IFU_RESP: begin
                    if (imem_resp_valid && imem_resp_ready)
                        read_state_q <= RD_IDLE;
                end

                default: read_state_q <= RD_IDLE;
            endcase
        end
    end

    assign imem_req_ready = read_state_q == RD_IDLE && !(!dmem_outstanding_q && dmem_req_valid && !dmem_req_is_store && (prefer_data_q || !imem_req_valid));
    assign imem_resp_valid = read_state_q == RD_IFU_RESP;
    assign imem_resp_insts = imem_resp_insts_q;

    assign awid = AXI_ID_LSU;
    assign awaddr = {write_addr_q[31:2], 2'b00};
    assign awlen = 4'd0;
    assign awsize = 3'b010;
    assign awburst = 2'b01;
    assign awlock = 2'b00;
    assign awcache = 4'b0000;
    assign awprot = 3'b000;
    assign awvalid =
        write_state_q == WR_SEND && !write_addr_done_q;

    assign wid = AXI_ID_LSU;
    assign wdata = write_data_q;
    assign wstrb = write_mask_q;
    assign wlast = 1'b1;
    assign wvalid =
        write_state_q == WR_SEND && !write_data_done_q;
    assign bready = write_state_q == WR_RESP;

    assign write_addr_complete =
        write_addr_done_q || (awvalid && awready);
    assign write_data_complete =
        write_data_done_q || (wvalid && wready);
    assign store_request_accept =
        write_state_q == WR_SEND &&
        write_addr_complete &&
        write_data_complete;

    always_ff @(posedge aclk or negedge aresetn) begin
        if (!aresetn) begin
            write_state_q <= WR_IDLE;
            write_addr_q <= '0;
            write_data_q <= '0;
            write_mask_q <= '0;
            write_dmem_idx_q <= '0;
            write_addr_done_q <= 1'b0;
            write_data_done_q <= 1'b0;
        end else begin
            case (write_state_q)
                WR_IDLE: begin
                    if (!dmem_outstanding_q &&
                        dmem_req_valid &&
                        dmem_req_is_store) begin
                        write_addr_q <= dmem_req_addr;
                        write_data_q <= dmem_req_data;
                        write_mask_q <= dmem_req_mask;
                        write_dmem_idx_q <= dmem_req_idx;
                        write_addr_done_q <= 1'b0;
                        write_data_done_q <= 1'b0;
                        write_state_q <= WR_SEND;
                    end
                end

                WR_SEND: begin
                    if (awvalid && awready)
                        write_addr_done_q <= 1'b1;
                    if (wvalid && wready)
                        write_data_done_q <= 1'b1;

                    if (store_request_accept)
                        write_state_q <= WR_RESP;
                end

                WR_RESP: begin
                    if (bvalid && bready)
                        write_state_q <= WR_IDLE;
                end

                default: write_state_q <= WR_IDLE;
            endcase
        end
    end

    assign dmem_req_ready = dmem_req_is_store
        ? store_request_accept
        : load_request_accept;

    assign load_response_fire =
        read_state_q == RD_DATA &&
        read_is_data_q &&
        rvalid &&
        rready;
    assign store_response_fire =
        write_state_q == WR_RESP &&
        bvalid &&
        bready;

    always_ff @(posedge aclk or negedge aresetn) begin
        if (!aresetn) begin
            dmem_outstanding_q <= 1'b0;
        end else if (load_response_fire || store_response_fire) begin
            dmem_outstanding_q <= 1'b0;
        end else if (load_request_accept || store_request_accept) begin
            dmem_outstanding_q <= 1'b1;
        end
    end

    always_comb begin
        dmem_resp_valid = 1'b0;
        dmem_resp_is_store = 1'b0;
        dmem_resp_data = '0;
        dmem_resp_idx = '0;

        if (load_response_fire) begin
            dmem_resp_valid = 1'b1;
            dmem_resp_data = rdata;
            dmem_resp_idx = read_dmem_idx_q;
        end else if (store_response_fire) begin
            dmem_resp_valid = 1'b1;
            dmem_resp_is_store = 1'b1;
            dmem_resp_idx = write_dmem_idx_q;
        end
    end

    always_comb begin
        int debug_lane;
        logic debug_write_valid;

        debug_lane = 0;
        debug_write_valid = 1'b0;

        for (int lane = 0; lane < CORE_WIDTH; lane++) begin
            if (!debug_write_valid &&
                core_commit.arch_valids[lane] &&
                core_commit.uops[lane].dst_rtype == RT_FIX &&
                core_commit.uops[lane].ldst != 5'd0) begin
                debug_lane = lane;
                debug_write_valid = 1'b1;
            end
        end

        ws_valid = |core_commit.arch_valids;
        rf_rdata = '0;
        debug0_wb_pc = debug_write_valid
            ? core_commit.uops[debug_lane].pc[31:0]
            : '0;
        debug0_wb_rf_wen = debug_write_valid ? 4'b1111 : 4'b0000;
        debug0_wb_rf_wnum = debug_write_valid
            ? core_commit.uops[debug_lane].ldst
            : '0;
        debug0_wb_rf_wdata = debug_write_valid
            ? core_commit.debug_wdata[debug_lane*32 +: 32]
            : '0;
    end
endmodule
