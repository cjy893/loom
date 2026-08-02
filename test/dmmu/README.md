# DMMU control contract

This suite defines the control contract between the LSU, the shared LA32 TLB,
and the combinational `addr_trans` translation rules.

`dmmu` accepts at most one request at a time. It snapshots the request virtual
address, access type, and all relevant CSR state. Direct-address and DMW
requests bypass the TLB. A mapped paging request emits exactly one TLB lookup
pulse and waits for its response. The translated response remains stable until
consumed. `flush` cancels a request or response in every state.

The production interface is:

```systemverilog
module dmmu #(
    parameter int ASID_WIDTH = 10,
    parameter int TAG_WIDTH  = 6
) (
    input  logic                  clk,
    input  logic                  rst_n,
    input  logic                  flush,

    input  logic                  req_valid,
    output logic                  req_ready,
    input  logic [31:0]           req_vaddr,
    input  logic [1:0]            req_access,
    input  logic [TAG_WIDTH-1:0]  req_tag,

    input  logic [31:0]           csr_crmd,
    input  logic [31:0]           csr_asid,
    input  logic [31:0]           csr_dmw0,
    input  logic [31:0]           csr_dmw1,

    output logic                  tlb_req_valid,
    output logic [31:0]           tlb_req_vaddr,
    output logic [ASID_WIDTH-1:0] tlb_req_asid,
    input  logic                  tlb_resp_valid,
    input  logic                  tlb_found,
    input  logic [5:0]            tlb_ps,
    input  logic [19:0]           tlb_ppn,
    input  logic                  tlb_v,
    input  logic                  tlb_d,
    input  logic [1:0]            tlb_mat,
    input  logic [1:0]            tlb_plv,

    output logic                  resp_valid,
    input  logic                  resp_ready,
    output logic [31:0]           resp_vaddr,
    output logic [1:0]            resp_access,
    output logic [TAG_WIDTH-1:0]  resp_tag,
    output logic [31:0]           resp_paddr,
    output logic [1:0]            resp_mat,
    output logic                  resp_cacheable,
    output logic                  resp_xcpt_valid,
    output logic [5:0]            resp_xcpt_code,
    output logic [31:0]           resp_badvaddr
);
```

`TAG_WIDTH=6` matches the current 16-entry LDQ/STQ tag format: four slot bits
plus two generation bits. `req_access` must be `ACCESS_LOAD` or
`ACCESS_STORE`. The CSR fields used by the contract are `CRMD.PLV[1:0]`,
`DA[3]`, `PG[4]`, `DATM[8:7]`, `ASID.ASID[ASID_WIDTH-1:0]`, and the
architectural DMW0/DMW1 fields.

Coverage includes:

- direct-address load/store translation and `DATM`;
- DMW0/DMW1 translation and DMW0 priority;
- mapped 4KB and 4MB TLB translations;
- load/store `TLBR`, `PIL`, `PIS`, `PPI`, and store-only `PME`;
- exception priority and a clean load through a non-dirty page;
- exactly one lookup pulse per mapped request;
- request tag, access type, and CSR snapshot behavior;
- response stability under backpressure;
- flush before lookup, while waiting, with a returning lookup, and while a
  response is held;
- sequential alternating load/store requests with tag reuse and without
  stale-response leakage.

Validate the test harness against the test-only reference controller:

```sh
./test/dmmu/run.sh --reference
```

The default run requires a completed `mmu/dmmu.sv`:

```sh
./test/dmmu/run.sh
```

This suite must not be added to `test/run_all.sh` until the production module
exists and passes the candidate run.
