import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_top #(
    parameter logic [31:0] RESET_PC = 32'h1c00_0000,
    parameter logic [31:0] CORE_ID = 32'd0,
    parameter int FETCH_WIDTH = 4,
    parameter int ALU_WIDTH = 3,
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
    localparam int ICACHE_MEM_LEN_WIDTH = 4;
    localparam int DCACHE_MEM_LEN_WIDTH = 4;

    logic [FETCH_WIDTH-1:0]       ifu_fetch_valid;
    logic [FETCH_WIDTH-1:0][31:0] ifu_fetch_insts;
    logic [FETCH_WIDTH-1:0][31:0] ifu_fetch_pcs;
    logic [FETCH_WIDTH-1:0][FTQ_ADDR_SZ-1:0] ifu_fetch_ftq_idx;
    logic [FETCH_WIDTH-1:0]       ifu_fetch_predicted_taken;
    logic [FETCH_WIDTH-1:0][31:0] ifu_fetch_predicted_npc;
    logic [CORE_WIDTH-1:0][31:0]  buffer_deq_predicted_npc;
    logic                         ifu_fetch_ready;
    logic                         imem_req_valid;
    logic                         imem_req_ready;
    logic [31:0]                  imem_req_addr;
    logic                         imem_resp_valid;
    logic                         imem_resp_ready;
    logic [FETCH_WIDTH-1:0][31:0] imem_resp_insts;

    logic [ALU_WIDTH-1:0] ftq_exec_query_valid;
    logic [ALU_WIDTH-1:0][FTQ_ADDR_SZ-1:0] ftq_exec_query_idx;
    logic [ALU_WIDTH-1:0][31:0] ftq_exec_query_pc;
    logic [ALU_WIDTH-1:0] ftq_exec_query_resp_valid;
    logic [ALU_WIDTH-1:0][31:0] ftq_exec_query_next_pc;
    logic [ALU_WIDTH-1:0] ftq_exec_query_cfi_match;

    logic                              icache_mem_req_valid;
    logic                              icache_mem_req_ready;
    logic [31:0]                       icache_mem_req_addr;
    logic [ICACHE_MEM_LEN_WIDTH-1:0]   icache_mem_req_len;
    logic                              icache_mem_resp_valid;
    logic                              icache_mem_resp_ready;
    logic [31:0]                       icache_mem_resp_data;
    logic                              icache_mem_resp_last;

    logic dcache_mem_read_req_valid, dcache_mem_read_req_ready;
    logic [31:0] dcache_mem_read_req_addr;
    logic [DCACHE_MEM_LEN_WIDTH-1:0] dcache_mem_read_req_len;
    logic dcache_mem_read_resp_valid, dcache_mem_read_resp_ready;
    logic [31:0] dcache_mem_read_resp_data;
    logic dcache_mem_read_resp_last;

    logic dcache_mem_write_req_valid, dcache_mem_write_req_ready;
    logic [31:0] dcache_mem_write_req_addr;
    logic [DCACHE_MEM_LEN_WIDTH-1:0] dcache_mem_write_req_len;
    logic dcache_mem_write_data_valid, dcache_mem_write_data_ready;
    logic [31:0] dcache_mem_write_data;
    logic [3:0] dcache_mem_write_mask;
    logic dcache_mem_write_data_last;
    logic dcache_mem_write_resp_valid, dcache_mem_write_resp_ready;

    logic        icache_maint_valid;
    logic        icache_maint_ready;
    logic [1:0]  icache_maint_mode;
    logic [31:0] icache_maint_vaddr;
    logic [31:0] icache_maint_paddr;
    logic        icache_maint_done;

    logic        dcache_maint_valid;
    logic        dcache_maint_ready;
    logic [1:0]  dcache_maint_op;
    logic [1:0]  dcache_maint_mode;
    logic [31:0] dcache_maint_vaddr;
    logic [31:0] dcache_maint_paddr;
    logic        dcache_maint_done;

    logic [CORE_WIDTH-1:0]       buffer_deq_valid;
    logic [CORE_WIDTH-1:0][31:0] buffer_deq_insts;
    logic [CORE_WIDTH-1:0][31:0] buffer_deq_pcs;
    logic                        buffer_deq_ready;
    logic [CORE_WIDTH-1:0][FTQ_ADDR_SZ-1:0] buffer_deq_ftq_idx;
    logic [CORE_WIDTH-1:0] buffer_deq_predicted_taken;

    logic                         core_redirect_valid;
    logic                         core_frontend_flush_valid;
    logic [31:0]                  core_redirect_pc;
    logic [FTQ_ADDR_SZ-1:0]       core_redirect_ftq_idx;
    logic                         core_redirect_taken;
    logic [$clog2(ICACHE_BLOCK_BYTES)-1:0] core_redirect_pc_lob;
    logic [2:0]                   core_redirect_cfi_type;
    logic                         ftq_commit_valid;
    logic [FTQ_ADDR_SZ-1:0]       ftq_commit_idx;
    logic                         dmem_req_valid;
    logic                         dmem_req_ready;
    logic                         dmem_req_is_store;
    logic                         dmem_req_cacheable;
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

    always_comb begin
        ftq_commit_valid = 1'b0;
        ftq_commit_idx = '0;

        for (int lane = 0; lane < CORE_WIDTH; lane++) begin
            if (core_commit.valids[lane]) begin
                ftq_commit_valid = 1'b1;
                ftq_commit_idx = core_commit.uops[lane].ftq_idx;
            end
        end
    end

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
        .EXEC_QUERY_WIDTH(ALU_WIDTH),
        .RESET_PC(RESET_PC)
    ) ifu_inst (
        .clk(aclk),
        .rst_n(aresetn),
        .redirect_valid(core_redirect_valid),
        .redirect_pc(core_redirect_pc),
        .flush_valid(core_frontend_flush_valid),
        .branch_redirect_ftq_idx(core_redirect_ftq_idx),
        .branch_redirect_taken(core_redirect_taken),
        .branch_redirect_pc_lob(core_redirect_pc_lob),
        .branch_redirect_cfi_type(core_redirect_cfi_type),
        .ftq_commit_valid,
        .ftq_commit_idx,
        .exec_query_valid     (ftq_exec_query_valid),
        .exec_query_idx       (ftq_exec_query_idx),
        .exec_query_pc        (ftq_exec_query_pc),
        .exec_query_resp_valid(ftq_exec_query_resp_valid),
        .exec_query_next_pc   (ftq_exec_query_next_pc),
        .exec_query_cfi_match (ftq_exec_query_cfi_match),
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
        .fetch_ftq_idx(ifu_fetch_ftq_idx),
        .fetch_predicted_taken(ifu_fetch_predicted_taken),
        .fetch_ready(ifu_fetch_ready),
        .fetch_predicted_npc(ifu_fetch_predicted_npc)
    );

    icache #(
        .FETCH_WIDTH   (FETCH_WIDTH),
        .NUM_SETS      (ICACHE_NSETS),
        .LINE_BYTES    (ICACHE_BLOCK_BYTES),
        .MEM_LEN_WIDTH (ICACHE_MEM_LEN_WIDTH)
    ) icache_inst (
        .clk               (aclk),
        .rst_n             (aresetn),
        .req_valid         (imem_req_valid),
        .req_ready         (imem_req_ready),
        .req_paddr         (imem_req_addr),
        .req_cacheable     (imem_req_cacheable),
        .resp_valid        (imem_resp_valid),
        .resp_ready        (imem_resp_ready),
        .resp_insts        (imem_resp_insts),
        .maint_valid       (icache_maint_valid),
        .maint_ready       (icache_maint_ready),
        .maint_mode        (icache_maint_mode),
        .maint_all         (1'b0),
        .maint_vaddr       (icache_maint_vaddr),
        .maint_paddr       (icache_maint_paddr),
        .maint_done        (icache_maint_done),
        .mem_req_valid     (icache_mem_req_valid),
        .mem_req_ready     (icache_mem_req_ready),
        .mem_req_addr      (icache_mem_req_addr),
        .mem_req_len       (icache_mem_req_len),
        .mem_resp_valid    (icache_mem_resp_valid),
        .mem_resp_ready    (icache_mem_resp_ready),
        .mem_resp_data     (icache_mem_resp_data),
        .mem_resp_last     (icache_mem_resp_last)
    );

    dcache #(
        .ADDR_WIDTH    (32),
        .TAG_WIDTH     (LSU_ADDR_SZ + 2),
        .NUM_SETS      (64),
        .NUM_WAYS      (2),
        .LINE_BYTES    (32),
        .MEM_DATA_WIDTH(32),
        .MEM_LEN_WIDTH (DCACHE_MEM_LEN_WIDTH)
    ) dcache_inst (
        .clk          (aclk),
        .rst_n        (aresetn),

        .req_valid    (dmem_req_valid),
        .req_ready    (dmem_req_ready),
        .req_paddr    (dmem_req_addr),
        .req_cacheable(dmem_req_cacheable),
        .req_is_store (dmem_req_is_store),
        .req_wdata    (dmem_req_data),
        .req_wmask    (dmem_req_mask),
        .req_tag      (dmem_req_idx),

        .resp_valid   (dmem_resp_valid),
        .resp_ready   (1'b1),
        .resp_is_store(dmem_resp_is_store),
        .resp_rdata   (dmem_resp_data),
        .resp_tag     (dmem_resp_idx),

        .maint_valid  (dcache_maint_valid),
        .maint_ready  (dcache_maint_ready),
        .maint_op     (dcache_maint_op),
        .maint_mode   (dcache_maint_mode),
        .maint_all    (1'b0),
        .maint_vaddr  (dcache_maint_vaddr),
        .maint_paddr  (dcache_maint_paddr),
        .maint_done   (dcache_maint_done),

        .mem_read_req_valid  (dcache_mem_read_req_valid),
        .mem_read_req_ready  (dcache_mem_read_req_ready),
        .mem_read_req_addr   (dcache_mem_read_req_addr),
        .mem_read_req_len    (dcache_mem_read_req_len),
        .mem_read_resp_valid (dcache_mem_read_resp_valid),
        .mem_read_resp_ready (dcache_mem_read_resp_ready),
        .mem_read_resp_data  (dcache_mem_read_resp_data),
        .mem_read_resp_last  (dcache_mem_read_resp_last),

        .mem_write_req_valid (dcache_mem_write_req_valid),
        .mem_write_req_ready (dcache_mem_write_req_ready),
        .mem_write_req_addr  (dcache_mem_write_req_addr),
        .mem_write_req_len   (dcache_mem_write_req_len),
        .mem_write_data_valid(dcache_mem_write_data_valid),
        .mem_write_data_ready(dcache_mem_write_data_ready),
        .mem_write_data      (dcache_mem_write_data),
        .mem_write_mask      (dcache_mem_write_mask),
        .mem_write_data_last (dcache_mem_write_data_last),
        .mem_write_resp_valid(dcache_mem_write_resp_valid),
        .mem_write_resp_ready(dcache_mem_write_resp_ready)
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
        .enq_ftq_idx(ifu_fetch_ftq_idx),
        .enq_predicted_taken(ifu_fetch_predicted_taken),
        .deq_ftq_idx(buffer_deq_ftq_idx),
        .deq_predicted_taken(buffer_deq_predicted_taken),
        .enq_predicted_npc(ifu_fetch_predicted_npc),
        .deq_predicted_npc(buffer_deq_predicted_npc),
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
        .ALU_WIDTH(ALU_WIDTH),
        .CORE_ID(CORE_ID),
        .ENABLE_SINGLE_DEBUG_COMMIT(1'b0)
    ) core_inst (
        .clk(aclk),
        .rst_n(aresetn),
        .fe_valid(buffer_deq_valid),
        .fe_insts(buffer_deq_insts),
        .fe_pcs(buffer_deq_pcs),
        .fe_ftq_idx(buffer_deq_ftq_idx),
        .fe_predicted_taken(buffer_deq_predicted_taken),
        .fe_predicted_npc(buffer_deq_predicted_npc),
        .fe_ready(buffer_deq_ready),
        .fe_redirect_valid(core_redirect_valid),
        .fe_redirect_pc(core_redirect_pc),
        .fe_flush_valid(core_frontend_flush_valid),
        .fe_redirect_ftq_idx(core_redirect_ftq_idx),
        .fe_redirect_taken(core_redirect_taken),
        .fe_redirect_pc_lob(core_redirect_pc_lob),
        .fe_redirect_cfi_type(core_redirect_cfi_type),
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
        .ftq_exec_query_valid,
        .ftq_exec_query_idx,
        .ftq_exec_query_pc,
        .ftq_exec_query_resp_valid,
        .ftq_exec_query_next_pc,
        .ftq_exec_query_cfi_match,
        .dmem_req_valid,
        .dmem_req_ready,
        .dmem_req_is_store,
        .dmem_req_cacheable,
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
        .icache_maint_valid,
        .icache_maint_ready,
        .icache_maint_mode,
        .icache_maint_vaddr,
        .icache_maint_paddr,
        .icache_maint_done,
        .dcache_maint_valid,
        .dcache_maint_ready,
        .dcache_maint_op,
        .dcache_maint_mode,
        .dcache_maint_vaddr,
        .dcache_maint_paddr,
        .dcache_maint_done,
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
        RD_DATA
    } read_state_t;

    read_state_t read_state_q;
    logic read_is_data_q;
    logic [31:0] read_addr_q;
    logic [ICACHE_MEM_LEN_WIDTH-1:0] read_len_q;
    logic prefer_data_q;

    typedef enum logic [1:0] {
        WR_IDLE,
        WR_ADDR,
        WR_DATA,
        WR_RESP
    } write_state_t;

    write_state_t write_state_q;
    logic [DCACHE_MEM_LEN_WIDTH-1:0] write_len_q;
    logic [31:0] write_addr_q;

    logic grant_dcache_read;

  assign grant_dcache_read = read_state_q == RD_IDLE &&
        dcache_mem_read_req_valid &&
        (prefer_data_q || !icache_mem_req_valid);

    assign dcache_mem_read_req_ready = grant_dcache_read;
    assign icache_mem_req_ready = read_state_q == RD_IDLE && !grant_dcache_read;

    assign arid    = read_is_data_q ? AXI_ID_LSU : AXI_ID_IFU;
    assign araddr  = read_addr_q;
    assign arlen   = read_len_q;
    assign arsize  = 3'b010;
    assign arburst = 2'b01;
    assign arlock  = 2'b00;
    assign arcache = 4'b0000;
    assign arprot  = 3'b000;
    assign arvalid = read_state_q == RD_ADDR;

    assign dcache_mem_read_resp_valid = read_state_q == RD_DATA && read_is_data_q && rvalid;
    assign icache_mem_resp_valid = read_state_q == RD_DATA && !read_is_data_q && rvalid;

    assign dcache_mem_read_resp_data = rdata;
    assign dcache_mem_read_resp_last = rlast;
    assign icache_mem_resp_data = rdata;
    assign icache_mem_resp_last = rlast;

    assign rready = read_state_q == RD_DATA ? (read_is_data_q ? dcache_mem_read_resp_ready : icache_mem_resp_ready) : 1'b0;

    always_ff @(posedge aclk or negedge aresetn) begin
        if (!aresetn) begin
            read_state_q <= RD_IDLE;
            read_is_data_q <= 1'b0;
            read_addr_q <= '0;
            read_len_q <= '0;
            prefer_data_q <= 1'b1;
        end else begin
            case (read_state_q)
                RD_IDLE: begin
                    if (dcache_mem_read_req_valid && dcache_mem_read_req_ready) begin
                        read_is_data_q <= 1'b1;
                        read_addr_q    <= dcache_mem_read_req_addr;
                        read_len_q     <= dcache_mem_read_req_len;
                        prefer_data_q  <= 1'b0;
                        read_state_q   <= RD_ADDR;
                    end else if (icache_mem_req_valid && icache_mem_req_ready) begin
                        read_is_data_q <= 1'b0;
                        read_addr_q    <= icache_mem_req_addr;
                        read_len_q     <= icache_mem_req_len;
                        prefer_data_q  <= 1'b1;
                        read_state_q   <= RD_ADDR;
                    end
                end
                RD_ADDR: if (arvalid && arready) read_state_q <= RD_DATA;
                RD_DATA: if (rvalid && rready && rlast) read_state_q <= RD_IDLE;
                default: read_state_q <= RD_IDLE;
            endcase
        end
    end


    assign dcache_mem_write_req_ready = write_state_q == WR_IDLE;

    assign awid = AXI_ID_LSU;
    assign awaddr = write_addr_q;
    assign awlen = write_len_q;
    assign awsize = 3'b010;
    assign awburst = 2'b01;
    assign awlock = 2'b00;
    assign awcache = 4'b0000;
    assign awprot = 3'b000;
    assign awvalid = write_state_q == WR_ADDR;

    assign wid = AXI_ID_LSU;
    assign wdata = dcache_mem_write_data;
    assign wstrb = dcache_mem_write_mask;
    assign wlast = dcache_mem_write_data_last;
    assign wvalid = write_state_q == WR_DATA && dcache_mem_write_data_valid;
    assign dcache_mem_write_data_ready = write_state_q == WR_DATA && wready;

    assign dcache_mem_write_resp_valid = write_state_q == WR_RESP && bvalid;
    assign bready = write_state_q == WR_RESP && dcache_mem_write_resp_ready;

    always_ff @(posedge aclk or negedge aresetn) begin
        if (!aresetn) begin
            write_state_q <= WR_IDLE;
            write_addr_q <= '0;
            write_len_q   <= '0;
        end else begin
            case (write_state_q)
                WR_IDLE:
                    if (dcache_mem_write_req_valid && dcache_mem_write_req_ready) begin
                        write_addr_q  <= dcache_mem_write_req_addr;
                        write_len_q   <= dcache_mem_write_req_len;
                        write_state_q <= WR_ADDR;
                    end
                WR_ADDR: if (awvalid && awready) write_state_q <= WR_DATA;
                WR_DATA: if (wvalid && wready && wlast) write_state_q <= WR_RESP;
                WR_RESP: if (dcache_mem_write_resp_valid && dcache_mem_write_resp_ready) write_state_q <= WR_IDLE;
                default: write_state_q <= WR_IDLE;
            endcase
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
