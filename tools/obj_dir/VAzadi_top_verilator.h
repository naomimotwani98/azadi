// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VAZADI_TOP_VERILATOR_H_
#define _VAZADI_TOP_VERILATOR_H_  // guard

#include "verilated_heavy.h"
#include "verilated_threads.h"
#include "VAzadi_top_verilator__Dpi.h"

//==========

class VAzadi_top_verilator__Syms;
class VAzadi_top_verilator_VerilatedFst;
class VAzadi_top_verilator_gpio_reg_pkg;
class VAzadi_top_verilator_rv_plic_reg_pkg;
class VAzadi_top_verilator_tlul_socket_m1__pi5;
class VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5;


//----------

VL_MODULE(VAzadi_top_verilator) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VAzadi_top_verilator_gpio_reg_pkg* __PVT__gpio_reg_pkg;
    VAzadi_top_verilator_rv_plic_reg_pkg* __PVT__rv_plic_reg_pkg;
    VAzadi_top_verilator_tlul_socket_m1__pi5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__ICCM;
    VAzadi_top_verilator_tlul_socket_m1__pi5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DCCM;
    VAzadi_top_verilator_tlul_socket_m1__pi5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM;
    VAzadi_top_verilator_tlul_socket_m1__pi5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_0;
    VAzadi_top_verilator_tlul_socket_m1__pi5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_1;
    VAzadi_top_verilator_tlul_socket_m1__pi5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_2;
    VAzadi_top_verilator_tlul_socket_m1__pi5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3;
    VAzadi_top_verilator_tlul_socket_m1__pi5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_4;
    VAzadi_top_verilator_tlul_socket_m1__pi5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__PLIC;
    VAzadi_top_verilator_tlul_socket_m1__pi5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__u_hostfifo;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__u_hostfifo;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__u_hostfifo;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__0__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__1__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__2__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__3__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__4__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__5__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__6__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__7__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__8__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__9__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__10__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__11__KET____DOT__fifo_d;
    VAzadi_top_verilator_tlul_fifo_sync__RCz5_RDz5* __PVT__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__gen_dfifo__BRA__12__KET____DOT__fifo_d;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    // Begin mtask footprint all: 1 2 3 4 5 6 7 8 9 13 15 16 18 20 21 
    VL_IN8(clock,0,0);
    // Begin mtask footprint all: 1 7 9 15 16 20 21 
    VL_IN8(reset_ni,0,0);
    // Begin mtask footprint all: 12 
    VL_OUT(gpio_o,19,0);
    // Begin mtask footprint all: 14 
    VL_OUT(rvfi_rs3_rdata,31,0);
    VL_OUT(rvfi_pc_rdata,31,0);
    // Begin mtask footprint all: 17 
    VL_OUT64(rvfi_order,63,0);
    VL_OUT(rvfi_insn,31,0);
    VL_OUT(rvfi_rs1_rdata,31,0);
    VL_OUT(rvfi_rs2_rdata,31,0);
    VL_OUT(rvfi_rd_wdata,31,0);
    VL_OUT(rvfi_mem_addr,31,0);
    VL_OUT(rvfi_mem_rdata,31,0);
    VL_OUT8(rvfi_trap,0,0);
    VL_OUT8(rvfi_halt,0,0);
    VL_OUT8(rvfi_intr,0,0);
    VL_OUT8(rvfi_ixl,1,0);
    VL_OUT8(rvfi_rs1_addr,4,0);
    VL_OUT8(rvfi_rs2_addr,4,0);
    VL_OUT8(rvfi_rd_addr,4,0);
    VL_OUT8(rvfi_mem_rmask,3,0);
    VL_OUT8(rvfi_mem_wmask,3,0);
    // Begin mtask footprint all: 18 
    VL_OUT(rvfi_pc_wdata,31,0);
    VL_OUT8(rvfi_valid,0,0);
    VL_OUT8(rvfi_rs3_addr,4,0);
    // Begin mtask footprint all: 23 
    VL_OUT(rvfi_mem_wdata,31,0);
    VL_OUT8(rvfi_mode,1,0);
    // Begin mtask footprint all: 1 2 3 5 11 13 35 
    VL_IN(gpio_i,19,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 7 8 17 18 23 36 43 49 62 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_q;
        // Begin mtask footprint all: 8 17 18 36 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_q;
        // Begin mtask footprint all: 8 16 18 36 43 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_instr_type_q;
        // Begin mtask footprint all: 8 36 43 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_i;
        // Begin mtask footprint all: 8 36 43 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_in_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_in_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_executing;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_q;
        // Begin mtask footprint all: 8 43 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_done;
        // Begin mtask footprint all: 8 41 43 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_csr_insn_id;
        // Begin mtask footprint all: 43 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_op_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_req_done;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_instr_ret_wb;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_branch;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_load;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_store;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_multdiv;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multicycle_done;
        // Begin mtask footprint all: 43 49 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ready_wb;
        // Begin mtask footprint all: 41 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wreq;
        // Begin mtask footprint all: 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_spec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_mem;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_branch;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_jump;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_alu;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_done;
        // Begin mtask footprint all: 31 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 3 39 
        WData/*377:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[12];
        // Begin mtask footprint all: 3 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_d2h[13];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_14__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_15__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_16__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_17__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_18__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_19__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_20__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_21__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio22__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio23__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio24__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio25__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_15__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_16__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_19__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_20__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_21__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_22__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_threshold0__DOT__qe;
        // Begin mtask footprint all: 3 7 37 38 
        QData/*62:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree;
        // Begin mtask footprint all: 37 38 39 40 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__2__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__3__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__0__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__1__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__2__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__3__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__4__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__5__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__6__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__7__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__8__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__9__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__10__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__11__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__12__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__13__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__14__KET____DOT__gen_nodes__DOT__sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__gen_tree__BRA__4__KET____DOT__gen_level__BRA__15__KET____DOT__gen_nodes__DOT__sel;
        // Begin mtask footprint all: 7 37 40 
        WData/*188:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6];
        // Begin mtask footprint all: 7 34 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__threshold[1];
        // Begin mtask footprint all: 34 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__complete_id[1];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__le;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_qs;
        // Begin mtask footprint all: 29 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_2[2][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_5[2][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_6[2][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_10[2][3];
        // Begin mtask footprint all: 28 29 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_7[2][3];
        // Begin mtask footprint all: 51 58 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_1[2];
        // Begin mtask footprint all: 58 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_i[4];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_p;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__hfifo_reqready;
        // Begin mtask footprint all: 27 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wmask_int;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__unnamedblk1__DOT__i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 27 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_2[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_5[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_10[2];
        // Begin mtask footprint all: 28 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_6[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_7[2];
        // Begin mtask footprint all: 25 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_3;
        // Begin mtask footprint all: 25 30 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_11[2][3];
        // Begin mtask footprint all: 25 57 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__hold_all_requests;
        // Begin mtask footprint all: 8 25 57 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__dev_select_outstanding;
        // Begin mtask footprint all: 48 50 52 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_i[3][3];
        // Begin mtask footprint all: 48 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__ifu_to_xbar[3];
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_1;
        // Begin mtask footprint all: 24 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmstatus;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractcs;
    };
    struct {
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartinfo_aligned;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sberror_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sberror;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__autoexecdata_idx;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_dmi_busy;
        // Begin mtask footprint all: 24 59 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbaddress_write_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbdata_read_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbdata_write_valid;
        // Begin mtask footprint all: 57 59 61 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_dbg;
        // Begin mtask footprint all: 57 59 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_i;
        // Begin mtask footprint all: 57 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_p;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__hfifo_reqready;
        // Begin mtask footprint all: 23 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_d_ex[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_d[2];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[2];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d;
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d;
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal;
        // Begin mtask footprint all: 12 23 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result;
        // Begin mtask footprint all: 12 23 43 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result;
        // Begin mtask footprint all: 12 43 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
        // Begin mtask footprint all: 8 43 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req;
        // Begin mtask footprint all: 8 43 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_we_ex;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_we_raw;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_ns;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_count_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_valid_d;
        // Begin mtask footprint all: 8 19 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_we;
        // Begin mtask footprint all: 8 19 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_addr_incr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_write_wb;
        // Begin mtask footprint all: 8 19 41 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_req;
        // Begin mtask footprint all: 8 19 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
        // Begin mtask footprint all: 8 19 22 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_id;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_last_q;
        // Begin mtask footprint all: 8 16 19 22 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_is_compressed_id;
        // Begin mtask footprint all: 8 16 17 19 22 49 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_id;
        // Begin mtask footprint all: 16 17 22 
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_c_id;
        // Begin mtask footprint all: 17 22 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_wb;
        // Begin mtask footprint all: 8 17 22 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_pc_q;
        // Begin mtask footprint all: 8 17 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_access;
        // Begin mtask footprint all: 17 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr;
        // Begin mtask footprint all: 17 43 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_valid;
        // Begin mtask footprint all: 17 22 43 49 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_op;
        // Begin mtask footprint all: 14 17 22 23 43 49 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q;
        // Begin mtask footprint all: 14 17 23 43 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q;
        // Begin mtask footprint all: 14 17 23 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs2_data_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q;
        // Begin mtask footprint all: 14 17 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_order[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_insn[2];
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_trap[2];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_halt[2];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_intr[2];
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_ixl[2];
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_addr[2];
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_addr[2];
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rmask[2];
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs1_addr_d;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs1_addr_q;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs2_addr_d;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs2_addr_q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d;
        // Begin mtask footprint all: 14 17 22 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err_plus2;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
        // Begin mtask footprint all: 14 17 45 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rd_wdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_mem_rdata_q;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rd_addr_q;
        // Begin mtask footprint all: 17 45 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[2];
        // Begin mtask footprint all: 17 41 42 45 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we;
        // Begin mtask footprint all: 41 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_we_lsu;
        // Begin mtask footprint all: 45 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_rdata_ext;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rd_we_wb;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_we;
        // Begin mtask footprint all: 10 45 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rf_wdata_wb;
        // Begin mtask footprint all: 20 22 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_q;
        // Begin mtask footprint all: 20 24 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage[4];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum0;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum1;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum2;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__haltsum3;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__data_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__data_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__selected_hart;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__state_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__state_q;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__address_d;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__address_q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_d;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__error_q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 1 20 24 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_wptr__DOT__intq;
        // Begin mtask footprint all: 1 20 
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_req;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        // Begin mtask footprint all: 1 22 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_rsp;
        // Begin mtask footprint all: 1 4 22 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__accept_t_req;
        // Begin mtask footprint all: 22 57 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_i[11];
        // Begin mtask footprint all: 22 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[16];
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[16];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent[32];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_mtval;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__exception_pc;
        // Begin mtask footprint all: 22 36 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_i;
        // Begin mtask footprint all: 22 30 36 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_o[3];
        // Begin mtask footprint all: 1 30 35 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_o[14][3];
        // Begin mtask footprint all: 1 30 
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_req_pending;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 1 24 
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_d;
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dr_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__resp_queue_data;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__dtmcs_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__jtag_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__havereset_d_aligned;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_gray;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_incr_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__full_wclk;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_wptr__DOT__intq;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__sync_rptr__DOT__intq;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr_gray;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__full_wclk;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__sync_rptr__DOT__intq;
        // Begin mtask footprint all: 1 16 24 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_q;
        // Begin mtask footprint all: 1 16 24 56 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_q;
        // Begin mtask footprint all: 1 16 24 53 55 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_q;
        // Begin mtask footprint all: 1 24 55 56 59 61 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__i_fifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__empty;
        // Begin mtask footprint all: 1 24 53 55 56 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmdbusy;
        // Begin mtask footprint all: 1 24 53 56 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_q;
        // Begin mtask footprint all: 1 24 53 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_q;
        // Begin mtask footprint all: 1 9 24 53 
        WData/*255:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_q[8];
        // Begin mtask footprint all: 24 53 
        WData/*511:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__abstract_cmd[16];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__clear_resumeack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resume;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__go;
        // Begin mtask footprint all: 16 24 53 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_q;
        // Begin mtask footprint all: 16 24 53 56 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_q;
        // Begin mtask footprint all: 24 53 56 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__unsupported_command;
        // Begin mtask footprint all: 1 20 24 53 56 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_q;
        // Begin mtask footprint all: 20 24 53 56 
        IData/*19:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__hartsel;
        // Begin mtask footprint all: 20 53 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__resumereq;
        // Begin mtask footprint all: 20 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_9[2];
        // Begin mtask footprint all: 20 58 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_req;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__accept_t_rsp;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_req_pending;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 20 36 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_i[11];
        // Begin mtask footprint all: 20 23 36 53 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__haltreq;
        // Begin mtask footprint all: 15 22 23 45 62 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
        // Begin mtask footprint all: 14 15 22 44 45 62 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        // Begin mtask footprint all: 14 15 45 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_mem_rdata_d;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rd_addr_d;
        // Begin mtask footprint all: 14 45 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rd_wdata_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_en;
        // Begin mtask footprint all: 14 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_rdata[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_rdata[2];
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_d;
        // Begin mtask footprint all: 14 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_insn_id;
        // Begin mtask footprint all: 14 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__gnt_or_pmp_err;
        // Begin mtask footprint all: 14 48 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_addr;
        // Begin mtask footprint all: 14 18 48 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__stored_addr_q;
        // Begin mtask footprint all: 18 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_req_int;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_rev;
        // Begin mtask footprint all: 18 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn;
        // Begin mtask footprint all: 7 18 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err;
        // Begin mtask footprint all: 7 18 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rdata_o;
        IData/*25:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__rvalid_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_q;
        // Begin mtask footprint all: 18 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 18 62 
        IData/*30:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_raw;
        // Begin mtask footprint all: 17 62 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__entry_en;
        // Begin mtask footprint all: 17 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_addr[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_wdata[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rdata[2];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid;
        // Begin mtask footprint all: 17 60 
        WData/*95:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[3];
        // Begin mtask footprint all: 17 58 60 
        WData/*95:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[3];
        // Begin mtask footprint all: 8 17 58 60 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_rdata;
        // Begin mtask footprint all: 58 60 62 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqifu;
        // Begin mtask footprint all: 58 62 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        // Begin mtask footprint all: 14 58 62 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__instr_or_pmp_err;
        // Begin mtask footprint all: 14 17 58 62 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__err_q;
        // Begin mtask footprint all: 8 14 17 18 22 58 62 
        IData/*30:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q;
        // Begin mtask footprint all: 14 17 18 48 58 60 62 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_q;
        // Begin mtask footprint all: 14 62 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_d;
        // Begin mtask footprint all: 14 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_en;
        // Begin mtask footprint all: 14 47 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_en;
        // Begin mtask footprint all: 14 41 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_d;
        // Begin mtask footprint all: 14 44 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_en;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_en;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__cpuctrl_we;
        // Begin mtask footprint all: 14 22 
        IData/*17:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtval_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__depc_d;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_d;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_en;
        // Begin mtask footprint all: 14 22 23 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
        // Begin mtask footprint all: 22 23 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter[32];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_if;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_id;
        // Begin mtask footprint all: 22 23 44 47 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_restore_mret_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_restore_dret_id;
        // Begin mtask footprint all: 15 18 22 23 44 47 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
        // Begin mtask footprint all: 22 23 44 45 46 47 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_save_cause;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__debug_csr_save;
        // Begin mtask footprint all: 17 22 43 44 45 46 47 
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_addr;
        // Begin mtask footprint all: 41 44 45 46 47 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int;
        // Begin mtask footprint all: 8 14 15 16 41 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_id_done;
        // Begin mtask footprint all: 8 14 15 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal;
        // Begin mtask footprint all: 14 15 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_valid_d[2];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_done_wb;
        // Begin mtask footprint all: 14 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal;
        // Begin mtask footprint all: 14 23 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mode[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mstack_d;
        // Begin mtask footprint all: 14 15 23 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs2_data_d;
        // Begin mtask footprint all: 15 23 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wdata[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs1_data_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_mem_wdata_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_mem_addr_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 15 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__iccm_cntrl_data;
        SData/*13:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_q;
        SData/*13:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__addr_d;
        SData/*15:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__uart_rx_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_cs;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__ctrl_fsm_ns;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q0;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q1;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q2;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__rx_byte_q3;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__we_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__reset_d;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data_R;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Data;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index;
    };
    struct {
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_Byte;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Rx_DV;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main;
        // Begin mtask footprint all: 15 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_ack;
        // Begin mtask footprint all: 15 62 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rvalid_or_pmp_err;
        // Begin mtask footprint all: 15 47 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_mtvec_init;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_en;
        // Begin mtask footprint all: 15 47 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_d;
        // Begin mtask footprint all: 15 60 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_n;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_n;
        // Begin mtask footprint all: 15 46 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_en;
        // Begin mtask footprint all: 15 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d;
        // Begin mtask footprint all: 15 41 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_set_trap_pc_d;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_n;
        // Begin mtask footprint all: 15 17 41 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_set_trap_pc_q;
        // Begin mtask footprint all: 15 17 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_rdata[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_rdata[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_addr[2];
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wmask[2];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_intr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_q;
        // Begin mtask footprint all: 15 17 23 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_rs1_data_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_mem_wdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_mem_addr_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
        // Begin mtask footprint all: 17 23 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum;
        // Begin mtask footprint all: 8 17 23 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_signed_mode;
        // Begin mtask footprint all: 8 17 19 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_wdata_wb_q;
        // Begin mtask footprint all: 8 12 16 17 19 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_type;
        // Begin mtask footprint all: 8 12 16 17 19 23 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__instr_first_cycle;
        // Begin mtask footprint all: 8 17 18 23 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_a;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_ren_b;
        // Begin mtask footprint all: 8 17 23 43 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_operator;
        // Begin mtask footprint all: 8 17 19 23 43 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q;
        // Begin mtask footprint all: 17 19 23 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_sel;
        // Begin mtask footprint all: 23 43 62 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id;
        // Begin mtask footprint all: 14 23 62 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
        // Begin mtask footprint all: 14 23 44 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q;
        // Begin mtask footprint all: 23 44 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__debug_cause;
        // Begin mtask footprint all: 10 42 
        IData/*30:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec;
        // Begin mtask footprint all: 18 27 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm_to_xbar;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 18 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__outstanding_load_wb;
        // Begin mtask footprint all: 18 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_valid[2];
        // Begin mtask footprint all: 18 43 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mult_en_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__div_en_dec;
        // Begin mtask footprint all: 18 36 43 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__stall_ld_hz;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__multdiv_en_dec;
        // Begin mtask footprint all: 36 43 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__outstanding_memory_access;
        // Begin mtask footprint all: 15 36 43 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_load_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_store_err;
        // Begin mtask footprint all: 8 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set_dec;
        // Begin mtask footprint all: 7 8 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_fetch_err;
        // Begin mtask footprint all: 7 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_run;
        // Begin mtask footprint all: 7 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__branch_set_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d;
        // Begin mtask footprint all: 7 27 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__wdata_int;
        SData/*11:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__addr_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__req_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__we_i;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_we;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__tlul_error;
        // Begin mtask footprint all: 7 15 27 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 15 27 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__d_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 15 44 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_d;
        // Begin mtask footprint all: 15 36 
        QData/*50:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        // Begin mtask footprint all: 15 36 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_q;
        // Begin mtask footprint all: 15 36 43 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_q;
        // Begin mtask footprint all: 15 36 41 43 45 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_to_brqlsu;
        // Begin mtask footprint all: 36 43 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__lsu_resp_valid;
        // Begin mtask footprint all: 8 36 41 43 45 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
        // Begin mtask footprint all: 8 15 36 41 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_we_q;
        // Begin mtask footprint all: 8 15 45 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q;
        // Begin mtask footprint all: 8 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__addr_update;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__handle_misaligned_d;
        // Begin mtask footprint all: 8 26 
        WData/*87:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__storage[3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__empty;
        // Begin mtask footprint all: 8 26 36 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__dev_select_outstanding;
        // Begin mtask footprint all: 26 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__hold_all_requests;
        // Begin mtask footprint all: 26 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__device_sel_2;
        // Begin mtask footprint all: 17 49 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn;
        // Begin mtask footprint all: 49 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_all;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__csr_pipe_flush;
        // Begin mtask footprint all: 23 49 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode;
        // Begin mtask footprint all: 49 60 62 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__stall;
        // Begin mtask footprint all: 18 49 60 62 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_in_ready;
        // Begin mtask footprint all: 49 62 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_incr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id;
        // Begin mtask footprint all: 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_jump;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__perf_tbranch;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__csr_pipe_flush;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if;
        // Begin mtask footprint all: 16 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch;
        // Begin mtask footprint all: 16 19 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__instr_rdata_alu_id;
        // Begin mtask footprint all: 16 19 41 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_q;
        // Begin mtask footprint all: 16 41 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__data_interface__DOT__genblk1__DOT__source_d;
        // Begin mtask footprint all: 10 16 
        WData/*991:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg_q[31];
        // Begin mtask footprint all: 10 19 
        WData/*1023:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[32];
        // Begin mtask footprint all: 19 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_imd_val_q[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[2];
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b;
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_a_mux_sel;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be;
        // Begin mtask footprint all: 15 21 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        // Begin mtask footprint all: 15 21 52 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 21 52 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__xbar_to_dbgrom;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__error_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
    };
    struct {
        // Begin mtask footprint all: 21 50 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__drsp_fifo_o;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrequest;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__mask;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__winner;
        // Begin mtask footprint all: 21 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_3[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_4[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hrsp_fifo_i[3];
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rom_rdata;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_mux;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i;
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__rvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__d_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hgrant;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hfifo_rspvalid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__ppc_out;
        // Begin mtask footprint all: 21 53 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_d;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 21 58 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h1_dv_o[3];
        // Begin mtask footprint all: 12 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__irq_id_o[1];
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__cc_id[1];
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext;
        // Begin mtask footprint all: 12 22 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_cause;
        // Begin mtask footprint all: 12 18 22 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio;
        // Begin mtask footprint all: 12 15 18 22 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
        // Begin mtask footprint all: 18 22 
        IData/*17:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mip;
        // Begin mtask footprint all: 12 14 18 22 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q;
        // Begin mtask footprint all: 14 18 22 
        IData/*17:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q;
        // Begin mtask footprint all: 12 14 18 22 43 44 49 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_q;
        // Begin mtask footprint all: 14 18 22 23 44 49 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
        // Begin mtask footprint all: 15 18 22 23 36 44 60 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
        // Begin mtask footprint all: 12 15 17 18 22 23 36 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q;
        // Begin mtask footprint all: 7 12 17 18 22 23 36 49 60 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
        // Begin mtask footprint all: 12 15 17 18 22 23 36 44 46 47 49 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
        // Begin mtask footprint all: 12 18 22 23 36 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio;
        // Begin mtask footprint all: 12 18 23 36 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug;
        // Begin mtask footprint all: 12 18 23 36 49 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn;
        // Begin mtask footprint all: 12 18 23 60 
        IData/*17:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__irqs;
        // Begin mtask footprint all: 12 18 41 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__exc_pc_mux_id;
        // Begin mtask footprint all: 12 41 47 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_mux_id;
        // Begin mtask footprint all: 12 41 48 62 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_addr_n;
        // Begin mtask footprint all: 46 62 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounterh_we;
    };
    struct {
        // Begin mtask footprint all: 62 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_upd;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_upd;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we;
        // Begin mtask footprint all: 9 15 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        // Begin mtask footprint all: 9 15 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 9 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_rsp;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 8 9 43 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__accept_t_req;
        // Begin mtask footprint all: 8 18 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ebrk_insn;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__mret_insn_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__dret_insn_dec;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__ecall_insn_dec;
        // Begin mtask footprint all: 8 18 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn;
        // Begin mtask footprint all: 8 18 19 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_a_wb_match;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__rf_rd_b_wb_match;
        // Begin mtask footprint all: 18 19 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__mult_sel_ex;
        // Begin mtask footprint all: 18 19 23 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__div_sel_ex;
        // Begin mtask footprint all: 19 23 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_b_fwd;
        // Begin mtask footprint all: 8 19 23 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_rdata_a_fwd;
        // Begin mtask footprint all: 8 22 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int;
        // Begin mtask footprint all: 8 62 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_valid_id_d;
        // Begin mtask footprint all: 8 23 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__result_ex;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ctrl_busy;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 8 12 19 23 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_adder_result_ext;
        // Begin mtask footprint all: 12 19 23 
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operator;
        // Begin mtask footprint all: 12 17 19 23 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_b;
        // Begin mtask footprint all: 12 19 22 23 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__alu_operand_a;
        // Begin mtask footprint all: 9 19 23 25 26 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__lsu_to_xbar[3];
        // Begin mtask footprint all: 9 25 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dm_to_xbar[3];
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding;
        // Begin mtask footprint all: 9 20 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_source;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_size;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_req_pending;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 9 20 26 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_u_o[11][3];
        // Begin mtask footprint all: 9 16 20 24 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q;
        // Begin mtask footprint all: 9 16 24 59 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_q;
        // Begin mtask footprint all: 9 16 24 59 61 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_q;
        // Begin mtask footprint all: 9 16 24 61 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_q;
        // Begin mtask footprint all: 9 24 59 61 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_q;
        // Begin mtask footprint all: 9 24 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__command_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__abstractauto_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbcs_d;
        WData/*255:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__progbuf_d[8];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmd_valid_d;
        // Begin mtask footprint all: 9 22 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_source;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_size;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_req_pending;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 9 22 25 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_u_o[11][3];
        // Begin mtask footprint all: 9 25 57 59 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__tl_t_o[3];
        // Begin mtask footprint all: 8 9 59 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_req;
        // Begin mtask footprint all: 9 59 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbdata_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__state_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__accept_t_rsp;
        // Begin mtask footprint all: 9 26 
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding;
        // Begin mtask footprint all: 9 26 36 43 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_o[3];
        // Begin mtask footprint all: 9 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__rspfifo__DOT__gen_normal_fifo__DOT__empty;
        // Begin mtask footprint all: 9 55 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__data_d;
        // Begin mtask footprint all: 55 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__data_bits;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__data_valid;
        // Begin mtask footprint all: 8 15 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__core_busy_q;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT__reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        // Begin mtask footprint all: 15 45 
        IData/*23:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_update;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__pmp_err_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_err_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_d;
        // Begin mtask footprint all: 15 16 45 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_type_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_sign_ext_q;
        // Begin mtask footprint all: 15 17 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_rvfi_wb_stage__DOT__rvfi_instr_new_wb_q;
        // Begin mtask footprint all: 14 15 17 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_intr_d;
        // Begin mtask footprint all: 8 16 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__illegal_c_insn_id;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_sign_ext;
        // Begin mtask footprint all: 8 16 45 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update;
        // Begin mtask footprint all: 8 16 42 45 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_waddr_wb_q;
        // Begin mtask footprint all: 8 16 60 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_decompressed;
        // Begin mtask footprint all: 16 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__illegal_c_insn;
        // Begin mtask footprint all: 36 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wb_exception;
        // Begin mtask footprint all: 36 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_11[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__tl_t_p;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_us_d2h;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__hfifo_reqready;
        // Begin mtask footprint all: 32 36 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__hfifo_reqready;
        // Begin mtask footprint all: 36 41 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_or_pmp_err;
        // Begin mtask footprint all: 36 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set_spec;
        // Begin mtask footprint all: 36 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__jump_set;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__gen_stall_mem__DOT__instr_kill;
        // Begin mtask footprint all: 7 36 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req_branch;
        // Begin mtask footprint all: 7 22 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__fetch_enable_q;
        // Begin mtask footprint all: 7 12 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_state__DOT__qe;
        // Begin mtask footprint all: 7 21 
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rmask;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rdata_tlword;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__word_enable32_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__fwd_rom_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__rspfifo_wvalid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 7 15 18 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        // Begin mtask footprint all: 15 18 
        WData/*65:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rmask;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rdata_tlword;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__rspfifo_wvalid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    };
    struct {
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        // Begin mtask footprint all: 15 18 47 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__discard_req_q;
        // Begin mtask footprint all: 15 18 41 58 62 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_pmp_err_q;
        // Begin mtask footprint all: 15 18 60 62 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__branch_discard_q;
        // Begin mtask footprint all: 8 15 18 41 48 60 62 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__rdata_outstanding_q;
        // Begin mtask footprint all: 8 14 18 36 41 47 48 60 62 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pc_set;
        // Begin mtask footprint all: 8 14 41 48 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req;
        // Begin mtask footprint all: 8 41 45 48 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__pmp_req_err[2];
        // Begin mtask footprint all: 14 41 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_new_req;
        // Begin mtask footprint all: 14 18 41 48 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__fetch_addr_q;
        // Begin mtask footprint all: 14 18 41 47 48 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__gen_ifu_prefetch_buffer__DOT__ifu_prefetch_buffer_i__DOT__valid_req_q;
        // Begin mtask footprint all: 14 18 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_addr[2];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_wdata[2];
        // Begin mtask footprint all: 6 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__d;
        // Begin mtask footprint all: 6 13 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_22_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_23_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio0_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio1_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio2_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio5_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio21_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_1_we;
        // Begin mtask footprint all: 2 6 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio6_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio8_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio10_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio11_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_2_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_3_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_4_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_30_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_31_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__msip0_we;
        // Begin mtask footprint all: 2 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio6__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio8__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio9__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio10__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio11__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_2__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_3__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_4__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_6__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_8__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_9__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_10__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_11__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_12__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_13__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_14__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_17__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_18__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_28__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_29__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_30__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_31__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_msip0__DOT__qe;
        // Begin mtask footprint all: 2 4 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio9_we;
        // Begin mtask footprint all: 4 13 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_1_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_2_we;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_3_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_6_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_7_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_8_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_9_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_10_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_24_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_25_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_26_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_27_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_28_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_29_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_31_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio3_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio4_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio15_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio16_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio18_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio19_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio20_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio26_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio27_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio28_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio29_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio30_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio31_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_0_we;
        // Begin mtask footprint all: 5 13 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_11_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_30_we;
        // Begin mtask footprint all: 5 13 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__q;
        // Begin mtask footprint all: 5 11 13 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 5 11 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__filter_q;
        // Begin mtask footprint all: 2 5 11 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 2 11 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__filter_q;
    };
    struct {
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__filter_q;
        // Begin mtask footprint all: 2 11 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__1__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__2__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__3__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__7__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__8__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__9__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__10__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__17__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__18__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__19__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__20__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__23__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__24__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__25__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__26__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__27__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__28__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__29__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__30__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__31__KET____DOT__filter__DOT__stored_value_q;
        // Begin mtask footprint all: 2 11 13 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 11 13 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__diff_ctr_q;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__6__KET____DOT__filter__DOT__filter_q;
        // Begin mtask footprint all: 5 11 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__4__KET____DOT__filter__DOT__stored_value_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__5__KET____DOT__filter__DOT__stored_value_q;
        // Begin mtask footprint all: 5 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__sm1_s1n_8[2];
        // Begin mtask footprint all: 5 20 25 29 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_i[10][3];
        // Begin mtask footprint all: 5 20 26 29 30 52 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_i[10][3];
        // Begin mtask footprint all: 7 15 52 53 55 56 
        IData/*29:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__addr_w;
        // Begin mtask footprint all: 15 21 52 53 55 56 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__req;
        // Begin mtask footprint all: 21 52 53 55 56 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__we;
        // Begin mtask footprint all: 52 53 55 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wdata_int;
        // Begin mtask footprint all: 52 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_4[2][3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__wmask_int;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__unnamedblk1__DOT__i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 5 13 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_12_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_13_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_26_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_27_we;
        // Begin mtask footprint all: 13 31 34 37 
        WData/*171:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__reg2hw[6];
        // Begin mtask footprint all: 21 33 36 51 54 57 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h3_dv_o[10];
        // Begin mtask footprint all: 21 33 36 54 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__h2_dv_o[10];
        // Begin mtask footprint all: 33 36 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_t_p;
        // Begin mtask footprint all: 4 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__error;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__reqsz;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rspop;
        // Begin mtask footprint all: 4 31 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__tl_reg_d2h;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_re;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        // Begin mtask footprint all: 4 31 34 35 
        QData/*37:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__addr_hit;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__wr_err;
        // Begin mtask footprint all: 12 34 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__claim_id[1];
        // Begin mtask footprint all: 1 12 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__q;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__q;
        // Begin mtask footprint all: 1 3 12 34 
        WData/*69:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__hw2reg[3];
        // Begin mtask footprint all: 3 12 34 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_gpio;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__src_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__q;
        // Begin mtask footprint all: 3 4 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio22_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio23_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio24_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio25_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__threshold0_we;
        // Begin mtask footprint all: 4 34 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__reg_rdata_next;
        // Begin mtask footprint all: 4 30 33 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__dev_select_outstanding;
        // Begin mtask footprint all: 3 30 32 33 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__tl_u_i[14];
        // Begin mtask footprint all: 30 32 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__hold_all_requests;
        // Begin mtask footprint all: 30 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__dev_sel_s1n_14;
        // Begin mtask footprint all: 2 13 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__we;
        // Begin mtask footprint all: 13 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_1__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_2__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_3__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_6__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_7__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_8__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_9__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_10__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_11__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_12__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_13__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_22__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_23__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_24__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_25__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_26__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_27__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_28__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_29__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_30__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_31__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio1__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio2__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio3__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio4__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio5__DOT__qe;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio7__DOT__wd;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio15__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio16__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio18__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio19__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio20__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio21__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio26__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio27__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio28__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio29__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio30__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio31__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_1__DOT__qe;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_26__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_27__DOT__qe;
        // Begin mtask footprint all: 1 11 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__filter_q;
        // Begin mtask footprint all: 1 2 11 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__0__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 2 3 11 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_d;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_d;
        // Begin mtask footprint all: 3 11 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__11__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__12__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__13__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__14__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__15__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__16__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__21__KET____DOT__filter__DOT__filter_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__diff_ctr_q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__gen_filter__BRA__22__KET____DOT__filter__DOT__filter_q;
        // Begin mtask footprint all: 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_addr[4];
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__csr_pmp_cfg[4];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[4];
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[4];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer0_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer2_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer3_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_timer4_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart0_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_uart1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi0_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_spi2_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_pwm_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c0_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_i2c1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can0_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_can1_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_adc_i;
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_qspi_i;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__gpio_intr;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__bfp_mask_rev;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__iccm__DOT__wdata;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__scanmode_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__scanmode_i;
        // Begin mtask footprint all: 56 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__a_abstractcs;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror_valid;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__cmderror;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__exception;
        // Begin mtask footprint all: 9 56 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__cmderr_d;
        // Begin mtask footprint all: 9 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__we;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be;
    };
    struct {
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_sba__DOT__be_idx;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_1__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_2__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_5__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_6__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_7__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_8__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_9__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_10__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_11__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_12__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_13__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_14__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_15__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_16__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_17__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_18__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_19__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_20__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_21__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_22__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_23__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_24__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_25__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_26__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_27__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_28__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_29__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_30__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_31__DOT__qe;
        // Begin mtask footprint all: 9 61 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__sbaddr_d;
        // Begin mtask footprint all: 61 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__sbaddress_sba_csrs;
        // Begin mtask footprint all: 50 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__hreq_fifo_o[3][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__tl_flash_ctrl_o[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dreq_fifo_i[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__0__KET____DOT__hreq_fifo_i[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__1__KET____DOT__hreq_fifo_i[3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_host_fifo__BRA__2__KET____DOT__hreq_fifo_i[3];
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__dfifo_rspready;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__masked_req;
        // Begin mtask footprint all: 20 50 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_3[3][3];
        // Begin mtask footprint all: 20 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_9[2][3];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dmi_rsp;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped0;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped1;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_reshaped2;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat1;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat2;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__halted_flat3;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx0;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx1;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__hartsel_idx2;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_source;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_size;
        // Begin mtask footprint all: 20 48 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_1[2][3];
        IData/*16:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding;
        // Begin mtask footprint all: 20 48 58 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_u_o[4][3];
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__dev_select_outstanding;
        // Begin mtask footprint all: 48 58 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__tl_t_o[3];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__hold_all_requests;
        // Begin mtask footprint all: 48 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__instr_req;
        // Begin mtask footprint all: 7 48 60 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_q;
    };
    struct {
        // Begin mtask footprint all: 7 60 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__intr_interface__DOT__genblk1__DOT__source_d;
        // Begin mtask footprint all: 7 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem[4096];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__iccm__DOT__iccm__DOT__mem[4096];
        WData/*65:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__storage[3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__tlul_data;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rmask;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rdata_tlword;
        IData/*25:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__instr_valid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__rspfifo_wvalid;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_valid;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        SData/*9:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__storage;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_empty;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__empty;
        // Begin mtask footprint all: 7 53 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        // Begin mtask footprint all: 7 62 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__fetch_err;
        // Begin mtask footprint all: 7 54 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__iccm_to_xbar;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__req_i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__tlul_error;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__d_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__full;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__full;
        // Begin mtask footprint all: 54 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__s1n_sm1_8[2][3];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wmask_int;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__wdata_int;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__unnamedblk1__DOT__i;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__we_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 37 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ie[1];
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__prio[32];
        // Begin mtask footprint all: 3 12 37 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ip;
        // Begin mtask footprint all: 3 12 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_en_q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__ia;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_enable__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_rising__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_falling__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_lvlhigh__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_ctrl_en_lvllow__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_ctrl_en_input_filter__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_4__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_le_le_5__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio12__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio13__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio14__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_prio17__DOT__qe;
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__irq_id_q;
    };
    struct {
        // Begin mtask footprint all: 3 12 35 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__q;
        // Begin mtask footprint all: 1 3 12 35 
        WData/*245:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__hw2reg[8];
        // Begin mtask footprint all: 1 3 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_falling_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvlhigh_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_lvllow_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__ctrl_en_input_filter_we;
        // Begin mtask footprint all: 1 3 5 35 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__tl_s1n_14_ds_h2d[13][3];
        // Begin mtask footprint all: 3 5 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_ctrl_en_rising_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_16_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_17_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_18_we;
        // Begin mtask footprint all: 3 5 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_14_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_15_we;
        // Begin mtask footprint all: 3 34 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__claim;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__complete;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_gateway__DOT__set;
        // Begin mtask footprint all: 3 6 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_15_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_16_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_19_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_20_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_21_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_22_we;
        // Begin mtask footprint all: 3 6 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_19_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_20_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_21_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio12_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio13_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio14_we;
        // Begin mtask footprint all: 3 35 
        WData/*458:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__reg2hw[15];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__tl_reg_d2h;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_rdata_next;
        SData/*14:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__addr_hit;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__reg_re;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__wr_err;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_enable_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__a_ack;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__err_internal;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__rd_req;
        // Begin mtask footprint all: 3 4 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_4_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__le_le_5_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__prio17_we;
        // Begin mtask footprint all: 1 35 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_intr_state__DOT__wr_data;
        // Begin mtask footprint all: 1 7 35 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__intr_state_we;
        // Begin mtask footprint all: 1 
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage[4];
        QData/*63:0*/ Azadi_top_verilator__DOT__u_jtagdpi__DOT__ctx;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_tck;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_tdi;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_tms;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_trst_n;
        CData/*0:0*/ Azadi_top_verilator__DOT__cio_jtag_srst_n;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__jtag_rsp;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__testmode_i;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_q;
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_sync_combi;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr_gray_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_sync_combi;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr_gray_sync;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_opcode;
        CData/*7:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_source;
    };
    struct {
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_size;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_5__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_7__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_23__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_24__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ie0_e_25__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n;
        // Begin mtask footprint all: 1 5 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_5_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_23_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_24_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_25_we;
        // Begin mtask footprint all: 2 5 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_6_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_9_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_10_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_11_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_12_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_13_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_14_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_17_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_18_we;
        // Begin mtask footprint all: 2 6 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_8_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_28_we;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_29_we;
        // Begin mtask footprint all: 1 6 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__ie0_e_7_we;
        // Begin mtask footprint all: 1 53 
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_d_aligned;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__resuming_d_aligned;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__state_d;
        // Begin mtask footprint all: 53 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__going;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__halted_aligned;
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_mem__DOT__rdata;
        // Begin mtask footprint all: 35 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__intr_hw__DOT__new_event;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__wr_req;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk;
        // Begin mtask footprint all: 8 35 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_d;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__data_in_q;
        // Begin mtask footprint all: 8 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__imd_val_q_ex[2];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q[2];
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__icache_inval;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__data_req_out;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__rf_wdata_sel;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
        CData/*6:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT__u_data_in__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_0__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_3__DOT__qe;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT__u_ip_p_4__DOT__qe;
        // Begin mtask footprint all: 8 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__id_fsm_d;
        // Begin mtask footprint all: 8 17 49 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__wb_compressed_q;
        // Begin mtask footprint all: 8 17 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__wfi_insn_dec;
        CData/*1:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__wb_stage_i__DOT__g_writeback_stage__DOT__rf_we_wb_q;
        // Begin mtask footprint all: 8 14 17 
        CData/*3:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_mem_mask_int;
        // Begin mtask footprint all: 7 8 14 15 16 17 62 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__if_stage_i__DOT__instr_new_id_d;
        // Begin mtask footprint all: 7 8 9 14 15 16 17 18 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk;
        // Begin mtask footprint all: 1 2 3 4 5 6 7 8 9 10 13 14 15 16 18 20 21 22 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        // Begin mtask footprint all: 1 24 55 56 59 61 
        QData/*40:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT____Vcellout__i_cdc_req__rdata_o;
        // Begin mtask footprint all: 1 
        QData/*40:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0;
        IData/*16:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__num_req_outstanding;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__dap__tdo_oe_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__dap__td_o;
        CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__42__Vfuncout;
        CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__42__grayval;
        CData/*1:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__42__dec_tmp;
        CData/*1:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__gray2dec__42__dec_tmp_sub;
        CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__48__Vfuncout;
        CData/*2:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__48__grayval;
        CData/*1:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__48__dec_tmp;
        CData/*1:0*/ __Vfunc_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__gray2dec__48__dec_tmp_sub;
        CData/*4:0*/ __Vtableidx7;
        CData/*4:0*/ __Vtableidx8;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_rptr;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__fifo_wptr;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_rptr;
        CData/*1:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__storage__v0;
        CData/*0:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 7 
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT____Vlvbound1;
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT____Vlvbound1;
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT____Vlvbound1;
        SData/*11:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v0;
        SData/*11:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v1;
        SData/*11:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v2;
        SData/*11:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v3;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT____Vlvbound1;
        CData/*4:0*/ __Vdlyvlsb__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v0;
        CData/*7:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v0;
        CData/*4:0*/ __Vdlyvlsb__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v1;
        CData/*7:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v1;
        CData/*4:0*/ __Vdlyvlsb__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v2;
        CData/*7:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v2;
        CData/*4:0*/ __Vdlyvlsb__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v3;
        CData/*7:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v3;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__dccm__DOT__mem__v3;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__inst_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        // Begin mtask footprint all: 7 21 
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        // Begin mtask footprint all: 21 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__FLASH_CTRL__tl_h_o[3];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__DEBUG_ROM__tl_h_o[2];
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT____Vlvbound1;
        CData/*2:0*/ __Vtableidx9;
        // Begin mtask footprint all: 5 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_3__tl_h_o[2];
        // Begin mtask footprint all: 12 
        CData/*5:0*/ __Vtableidx3;
        CData/*7:0*/ __Vtableidx4;
        CData/*5:0*/ __Vtableidx5;
        // Begin mtask footprint all: 3 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellinp__u_s1n_14__tl_d_i[13];
        // Begin mtask footprint all: 3 12 
        IData/*31:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_q;
        IData/*31:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__cio_gpio_en_q;
        IData/*31:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__ip;
        // Begin mtask footprint all: 3 12 35 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_enable__q;
        // Begin mtask footprint all: 5 12 35 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_rising__q;
        // Begin mtask footprint all: 1 12 35 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_state__q;
    };
    struct {
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_falling__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvlhigh__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_intr_ctrl_en_lvllow__q;
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__GPIO__DOT__u_reg__DOT____Vcellout__u_ctrl_en_input_filter__q;
        // Begin mtask footprint all: 1 30 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT____Vcellout__err_resp__tl_h_o;
        // Begin mtask footprint all: 4 30 32 
        WData/*87:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT__u_s1n_14__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
        // Begin mtask footprint all: 30 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__XBAR_PERI__tl_h_i[2][3];
        // Begin mtask footprint all: 1 20 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i;
        // Begin mtask footprint all: 1 20 24 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        // Begin mtask footprint all: 20 24 
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__fifo_wptr;
        // Begin mtask footprint all: 24 
        IData/*31:0*/ __Vfunc_load__16__Vfuncout;
        IData/*31:0*/ __Vfunc_float_load__19__Vfuncout;
        IData/*31:0*/ __Vfunc_load__20__Vfuncout;
        IData/*31:0*/ __Vfunc_load__22__Vfuncout;
        IData/*31:0*/ __Vfunc_csrw__23__Vfuncout;
        IData/*31:0*/ __Vfunc_store__29__Vfuncout;
        IData/*31:0*/ __Vfunc_float_store__31__Vfuncout;
        IData/*31:0*/ __Vfunc_store__32__Vfuncout;
        IData/*31:0*/ __Vfunc_csrr__34__Vfuncout;
        IData/*31:0*/ __Vfunc_store__35__Vfuncout;
        SData/*11:0*/ __Vfunc_csrw__23__csr;
        SData/*11:0*/ __Vfunc_csrr__34__csr;
        CData/*2:0*/ __Vfunc_load__16__size;
        CData/*2:0*/ __Vfunc_float_load__19__size;
        CData/*4:0*/ __Vfunc_float_load__19__dest;
        CData/*2:0*/ __Vfunc_load__20__size;
        CData/*4:0*/ __Vfunc_load__20__dest;
        CData/*2:0*/ __Vfunc_load__22__size;
        CData/*2:0*/ __Vfunc_store__29__size;
        CData/*2:0*/ __Vfunc_float_store__31__size;
        CData/*4:0*/ __Vfunc_float_store__31__src;
        CData/*2:0*/ __Vfunc_store__32__size;
        CData/*4:0*/ __Vfunc_store__32__src;
        CData/*2:0*/ __Vfunc_store__35__size;
        // Begin mtask footprint all: 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_addr_o[4];
        CData/*5:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__cs_registers_i__csr_pmp_cfg_o[4];
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__alu_i__imd_val_d_o[2];
        CData/*0:0*/ __Vm_traceActivity[152];
        QData/*62:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__is_tree;
        CData/*0:0*/ __VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq;
        CData/*0:0*/ __VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq;
        CData/*0:0*/ __Vclklast__TOP__clock;
        CData/*0:0*/ __Vclklast__TOP__reset_ni;
        CData/*0:0*/ __Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__clk;
        CData/*0:0*/ __Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__tck_i;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        CData/*0:0*/ __Vclklast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tck_n;
        CData/*0:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_req;
        CData/*0:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellinp__dap__trst_ni;
        CData/*2:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*0:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__reset_manager__DOT__rst_fq;
        WData/*377:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__id_tree[12];
        WData/*188:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__gen_target__BRA__0__KET____DOT__u_target__DOT__max_tree[6];
        CData/*1:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__DEBUG_ROM__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*1:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__TIMER_3__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__arb_req;
        CData/*1:0*/ __Vchglast__TOP__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__XBAR_PERI__dfifo_rspready;
        // Begin mtask footprint all: 58 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_1__tl_d_i[3];
        // Begin mtask footprint all: 6 13 31 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_msip0__q;
        // Begin mtask footprint all: 6 13 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_0__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_19__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_20__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_21__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_22__q;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_23__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio0__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio1__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio2__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio5__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio6__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio8__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio10__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio11__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio12__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio13__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio14__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio21__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_1__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_2__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_3__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_4__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_7__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_8__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_15__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_16__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_19__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_20__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_21__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_22__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_28__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_29__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_30__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_31__q;
        // Begin mtask footprint all: 13 34 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio7__q;
        // Begin mtask footprint all: 5 13 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_11__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_12__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_13__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_14__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_15__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_16__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_17__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_18__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_30__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_5__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_6__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_9__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_10__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_11__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_12__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_13__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_14__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_17__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_18__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_23__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_24__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_25__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_27__q;
        // Begin mtask footprint all: 4 13 34 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_1__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_2__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_3__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_4__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_5__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_6__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_7__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_8__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_9__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_10__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_24__q;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_25__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_26__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_27__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_28__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_29__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_le_le_31__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio3__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio4__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio15__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio16__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio17__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio18__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio19__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio20__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio22__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio23__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio24__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio25__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio26__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio27__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio28__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio29__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio30__q;
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio31__q;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_ie0_e_0__q;
        // Begin mtask footprint all: 4 13 31 34 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_threshold0__q;
        // Begin mtask footprint all: 4 13 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT__u_reg__DOT____Vcellout__u_prio9__q;
        // Begin mtask footprint all: 55 
        QData/*63:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT____Vcellout__i_dm_mem__data_o;
        // Begin mtask footprint all: 57 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_3__tl_d_i[10];
        // Begin mtask footprint all: 52 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__DEBUG_ROM__tl_h_i[2][3];
        // Begin mtask footprint all: 54 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_3__tl_h_i[2][3];
        // Begin mtask footprint all: 50 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__FLASH_CTRL__tl_h_i[3][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellinp__gen_arb_ppc__DOT__u_reqarb__data_i[3][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT____Vcellout__gen_arb_ppc__DOT__u_reqarb__data_o[3];
        // Begin mtask footprint all: 51 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__ICCM__tl_h_o[2];
        // Begin mtask footprint all: 37 
        CData/*2:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__intr_controller__DOT____Vcellinp__gen_target__BRA__0__KET____DOT__u_target__prio_i[32];
        // Begin mtask footprint all: 42 
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vlvbound1;
        // Begin mtask footprint all: 29 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__DCCM__tl_h_i[2][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_0__tl_h_i[2][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_1__tl_h_i[2][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__PLIC__tl_h_i[2][3];
        // Begin mtask footprint all: 35 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__periph_switch__DOT____Vcellout__u_s1n_14__tl_d_o[13][3];
        // Begin mtask footprint all: 27 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__DCCM__tl_h_o[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_0__tl_h_o[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__PLIC__tl_h_o[2];
        // Begin mtask footprint all: 28 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_1__tl_h_o[2];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_2__tl_h_o[2];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_2__tl_h_i[2][3];
        // Begin mtask footprint all: 25 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_3__tl_d_o[10][3];
        // Begin mtask footprint all: 8 25 57 
        WData/*87:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
        // Begin mtask footprint all: 8 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[2];
        QData/*33:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0;
        QData/*33:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__imd_val_q__v3;
        // Begin mtask footprint all: 8 26 
        WData/*87:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
        // Begin mtask footprint all: 8 26 36 
        WData/*87:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellout__reqfifo__rdata_o[3];
        // Begin mtask footprint all: 26 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_2__tl_d_o[10][3];
        // Begin mtask footprint all: 20 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__TIMER_4__tl_h_o[2];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__TIMER_4__tl_h_i[2][3];
        QData/*33:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0;
        IData/*16:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__num_req_outstanding;
    };
    struct {
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound1;
        CData/*0:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT____Vlvbound2;
        CData/*1:0*/ __Vdlyvdim0__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__storage__v0;
        CData/*0:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 20 58 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT____Vcellout__err_resp__tl_h_o;
        // Begin mtask footprint all: 20 48 58 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_1__DOT__fifo_h__DOT____Vcellinp__reqfifo__wdata_i[3];
        // Begin mtask footprint all: 48 
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__host_1__tl_d_o[3][3];
        WData/*85:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__ICCM__tl_h_i[2][3];
        // Begin mtask footprint all: 19 
        IData/*31:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[2];
        CData/*5:0*/ __Vtableidx2;
        CData/*4:0*/ __Vtableidx6;
        // Begin mtask footprint all: 8 19 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__ex_block_i__imd_val_q_i[2];
        // Begin mtask footprint all: 8 23 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[2];
        // Begin mtask footprint all: 23 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT____Vcellout__ex_block_i__imd_val_d_o[2];
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[2];
        // Begin mtask footprint all: 18 
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_rspfifo__rdata_o;
        CData/*5:0*/ __Vtableidx1;
        // Begin mtask footprint all: 16 18 
        CData/*4:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_addr__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_addr__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_addr__v1;
        // Begin mtask footprint all: 16 17 
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_insn__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_insn__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_insn__v1;
        // Begin mtask footprint all: 15 
        QData/*32:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT____Vlvbound1;
        SData/*15:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Clock_Count;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT____Vlvbound1;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_sramreqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__u_dut__DOT__byte_count;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_SM_Main;
        CData/*2:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__programmer__DOT__r_Bit_Index;
        // Begin mtask footprint all: 15 17 
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_addr__v0;
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_rdata__v0;
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_rdata__v0;
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rdata__v0;
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rdata__v2;
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_rdata__v2;
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_rdata__v2;
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_addr__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_addr__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_addr__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_rdata__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_rdata__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_rdata__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_rdata__v1;
        CData/*4:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_addr__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_addr__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_addr__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rdata__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rdata__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rdata__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rdata__v3;
        CData/*3:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wmask__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wmask__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wmask__v3;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_rdata__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_rdata__v3;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_rdata__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_rdata__v3;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_addr__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_addr__v3;
        CData/*4:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_addr__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_addr__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_addr__v3;
    };
    struct {
        // Begin mtask footprint all: 15 18 
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        CData/*4:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT____Vcellout__u_sramreqfifo__rdata_o;
        CData/*0:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_valid__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_valid__v0;
        CData/*0:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_valid__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_valid__v1;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_reqfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        CData/*1:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__dccm__DOT__data_mem__DOT__u_rspfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        // Begin mtask footprint all: 15 21 
        SData/*12:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__tl_adapter_device_mem__DOT____Vcellout__u_reqfifo__rdata_o;
        // Begin mtask footprint all: 15 23 
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wdata__v0;
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wdata__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wdata__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wdata__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wdata__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wdata__v3;
        // Begin mtask footprint all: 15 36 
        QData/*50:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__fifo_h__DOT____Vcellinp__rspfifo__wdata_i;
        // Begin mtask footprint all: 36 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellinp__host_2__tl_d_i[10];
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT____Vcellout__XBAR_PERI__tl_h_o[2];
        // Begin mtask footprint all: 9 
        IData/*16:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__num_req_outstanding;
        IData/*16:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__num_req_outstanding;
        // Begin mtask footprint all: 9 22 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT____Vcellout__err_resp__tl_h_o;
        CData/*0:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_3__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 9 20 
        QData/*51:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT____Vcellout__err_resp__tl_h_o;
        CData/*0:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__host_2__DOT__err_resp__DOT__err_rsp_pending;
        // Begin mtask footprint all: 9 16 20 
        IData/*31:0*/ __Vdly__Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__i_dm_csrs__DOT__dmcontrol_q;
        // Begin mtask footprint all: 9 14 23 
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mode__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mode__v1;
        // Begin mtask footprint all: 14 23 
        CData/*1:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mode__v0;
        CData/*1:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mode__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mode__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mode__v3;
        // Begin mtask footprint all: 14 
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_rdata__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_rdata__v3;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_rdata__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_rdata__v3;
        // Begin mtask footprint all: 14 17 
        QData/*63:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_order__v0;
        QData/*63:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_order__v2;
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_wdata__v0;
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_insn__v2;
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_wdata__v2;
        CData/*4:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_addr__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_addr__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_addr__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_ixl__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_ixl__v1;
        CData/*4:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_addr__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_addr__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_addr__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_halt__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_halt__v1;
        CData/*0:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_trap__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_trap__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_trap__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_order__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_order__v1;
        CData/*0:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_intr__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_intr__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_intr__v1;
        CData/*3:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rmask__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rmask__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rmask__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_wdata__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_wdata__v1;
        CData/*4:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_addr__v2;
    };
    struct {
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_addr__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs1_addr__v3;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_insn__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_insn__v3;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_order__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_order__v3;
        CData/*0:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_intr__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_intr__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_intr__v3;
        CData/*0:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_trap__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_trap__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_trap__v3;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_wdata__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rd_wdata__v3;
        CData/*0:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_halt__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_halt__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_halt__v3;
        CData/*4:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_addr__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_addr__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs2_addr__v3;
        CData/*1:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_ixl__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_ixl__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_ixl__v3;
        CData/*3:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rmask__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rmask__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_rmask__v3;
        // Begin mtask footprint all: 14 18 
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_wdata__v2;
        CData/*4:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_addr__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_addr__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_addr__v3;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_wdata__v2;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_wdata__v3;
        // Begin mtask footprint all: 8 14 
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_rdata__v0;
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_rdata__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_rdata__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_rdata__v1;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_rdata__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_rs3_rdata__v1;
        // Begin mtask footprint all: 8 18 
        IData/*31:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_wdata__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_wdata__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_pc_wdata__v1;
        // Begin mtask footprint all: 8 17 
        CData/*3:0*/ __Vdlyvval__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wmask__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wmask__v0;
        CData/*0:0*/ __Vdlyvset__Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__rvfi_stage_mem_wmask__v1;
        // Begin mtask footprint all: 8 17 19 23 
        QData/*33:0*/ Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[2];
    };
    // Begin mtask footprint all: 19 
    static CData/*0:0*/ __Vtable2_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate[64];
    static CData/*3:0*/ __Vtable6_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__load_store_unit_i__DOT__data_be[32];
    // Begin mtask footprint all: 21 
    static CData/*1:0*/ __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__idx_o[8];
    static IData/*31:0*/ __Vtable9_Azadi_top_verilator__DOT__top_verilator__DOT__main_swith__DOT__FLASH_CTRL__DOT__gen_arb_ppc__DOT__u_reqarb__DOT__gen_normal_case__DOT__unnamedblk3__DOT__i[8];
    // Begin mtask footprint all: 12 
    static CData/*0:0*/ __Vtable3_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed[64];
    static CData/*0:0*/ __Vtable4_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result[256];
    static CData/*0:0*/ __Vtable5_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left[64];
    // Begin mtask footprint all: 18 
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio[64];
    static CData/*0:0*/ __Vtable1_Azadi_top_verilator__DOT__top_verilator__DOT__u_top__DOT__u_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio[64];
    // Begin mtask footprint all: 1 
    static CData/*0:0*/ __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dmi_access[32];
    static CData/*0:0*/ __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__dtmcs_select[32];
    static CData/*0:0*/ __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__idcode_select[32];
    static CData/*0:0*/ __Vtable7_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__bypass_select[32];
    static CData/*0:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__test_logic_reset[32];
    static CData/*0:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__capture_dr[32];
    static CData/*0:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__shift_dr[32];
    static CData/*0:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__update_dr[32];
    static CData/*0:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__capture_ir[32];
    static CData/*0:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__shift_ir[32];
    static CData/*0:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__update_ir[32];
    static CData/*3:0*/ __Vtable8_Azadi_top_verilator__DOT__top_verilator__DOT__debug_module__DOT__dap__DOT__i_dmi_jtag_tap__DOT__tap_state_d[32];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VAzadi_top_verilator__Syms* __VlSymsp;  // Symbol table
  private:
    VlMTaskVertex __Vm_mt_4;
    VlMTaskVertex __Vm_mt_5;
    VlMTaskVertex __Vm_mt_6;
    VlMTaskVertex __Vm_mt_9;
    VlMTaskVertex __Vm_mt_10;
    VlMTaskVertex __Vm_mt_13;
    VlMTaskVertex __Vm_mt_14;
    VlMTaskVertex __Vm_mt_15;
    VlMTaskVertex __Vm_mt_19;
    VlMTaskVertex __Vm_mt_25;
    VlMTaskVertex __Vm_mt_26;
    VlMTaskVertex __Vm_mt_29;
    VlMTaskVertex __Vm_mt_31;
    VlMTaskVertex __Vm_mt_1;
    VlMTaskVertex __Vm_mt_2;
    VlMTaskVertex __Vm_mt_3;
    VlMTaskVertex __Vm_mt_11;
    VlMTaskVertex __Vm_mt_18;
    VlMTaskVertex __Vm_mt_21;
    VlMTaskVertex __Vm_mt_27;
    VlMTaskVertex __Vm_mt_28;
    VlMTaskVertex __Vm_mt_30;
    VlMTaskVertex __Vm_mt_32;
    VlMTaskVertex __Vm_mt_12;
    VlMTaskVertex __Vm_mt_20;
    VlMTaskVertex __Vm_mt_23;
    VlMTaskVertex __Vm_mt_33;
    VlMTaskVertex __Vm_mt_34;
    VlMTaskVertex __Vm_mt_35;
    VlMTaskVertex __Vm_mt_37;
    VlMTaskVertex __Vm_mt_38;
    VlMTaskVertex __Vm_mt_40;
    VlMTaskVertex __Vm_mt_43;
    VlMTaskVertex __Vm_mt_48;
    VlMTaskVertex __Vm_mt_49;
    VlMTaskVertex __Vm_mt_50;
    VlMTaskVertex __Vm_mt_52;
    VlMTaskVertex __Vm_mt_53;
    VlMTaskVertex __Vm_mt_54;
    VlMTaskVertex __Vm_mt_55;
    VlMTaskVertex __Vm_mt_56;
    VlMTaskVertex __Vm_mt_58;
    VlMTaskVertex __Vm_mt_22;
    VlMTaskVertex __Vm_mt_41;
    VlMTaskVertex __Vm_mt_42;
    VlMTaskVertex __Vm_mt_44;
    VlMTaskVertex __Vm_mt_45;
    VlMTaskVertex __Vm_mt_46;
    VlMTaskVertex __Vm_mt_47;
    VlMTaskVertex __Vm_mt_60;
    VlMTaskVertex __Vm_mt_61;
    VlMTaskVertex __Vm_mt_62;
    VlMTaskVertex __Vm_mt_final;
    VlThreadPool* __Vm_threadPoolp;
    bool __Vm_even_cycle;
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VAzadi_top_verilator);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VAzadi_top_verilator(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VAzadi_top_verilator();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    void __Vconfigure(VAzadi_top_verilator__Syms* symsp, bool first);
    void __Vdpiimwrap_Azadi_top_verilator__DOT__u_jtagdpi__DOT__jtagdpi_close_TOP(QData/*63:0*/ ctx);
    void __Vdpiimwrap_Azadi_top_verilator__DOT__u_jtagdpi__DOT__jtagdpi_create_TOP(std::string name, IData/*31:0*/ listen_port, QData/*63:0*/ (&jtagdpi_create__Vfuncrtn));
    void __Vdpiimwrap_Azadi_top_verilator__DOT__u_jtagdpi__DOT__jtagdpi_tick_TOP(QData/*63:0*/ ctx, CData/*0:0*/ (&tck), CData/*0:0*/ (&tms), CData/*0:0*/ (&tdi), CData/*0:0*/ (&trst_n), CData/*0:0*/ (&srst_n), CData/*0:0*/ tdo);
  private:
    static QData _change_request(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static QData _change_request_1(VAzadi_top_verilator__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__145(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__146(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__147(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__148(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__149(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__207(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__211(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__213(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__215(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__241(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__248(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__250(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__252(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__254(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__256(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__257(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__258(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__259(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__297(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__303(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__319(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__320(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__321(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__322(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__323(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__324(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__325(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__327(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__328(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__329(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__330(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__331(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__332(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__333(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__334(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__335(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__336(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__343(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__344(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__345(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__346(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__347(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__348(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__349(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__350(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__351(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__352(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__353(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__62(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__64(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__87(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _combo__TOP__90(VAzadi_top_verilator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VAzadi_top_verilator__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _final_TOP(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__138(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__140(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__142(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__144(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__170(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__181(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__222(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__225(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__262(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__271(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__299(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__301(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__302(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__304(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__309(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__312(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__314(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__316(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__318(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__341(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__342(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__100(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__101(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__103(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__104(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__105(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__106(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__107(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__108(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__110(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__111(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__112(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__113(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__115(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__117(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__118(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__119(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__120(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__121(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__122(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__124(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__126(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__127(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__128(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__130(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__132(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__133(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__134(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__135(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__136(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__137(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__139(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__141(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__143(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__150(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__152(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__153(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__154(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__155(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__156(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__157(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__158(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__159(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__160(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__161(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__162(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__163(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__165(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__167(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__168(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__169(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__171(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__172(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__173(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__175(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__176(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__177(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__179(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__180(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__182(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__183(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__184(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__185(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__186(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__188(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__189(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__190(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__193(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__194(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__196(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__197(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__198(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__201(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__202(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__203(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__204(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__205(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__206(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__209(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__210(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__212(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__217(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__219(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__221(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__223(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__224(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__226(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__229(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__230(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__231(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__232(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__233(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__234(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__238(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__239(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__240(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__246(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__247(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__249(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__251(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__253(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__255(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__260(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__261(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__263(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__264(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__265(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__266(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__268(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__270(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__272(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__273(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__274(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__275(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__276(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__277(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__278(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__279(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__282(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__283(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__284(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__285(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__286(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__288(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__290(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__291(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__294(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__295(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__296(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__298(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__300(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__305(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__308(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__310(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__313(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__315(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__317(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__337(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__339(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__61(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__63(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__66(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__68(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__69(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__71(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__72(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__73(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__76(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__77(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__79(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__82(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__83(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__84(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__86(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__88(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__89(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__92(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__93(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__94(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__95(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__97(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__98(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _settle__TOP__10(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__11(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__12(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__13(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__14(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__15(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__16(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__17(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__18(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__19(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__20(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__21(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__22(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__23(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__24(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__25(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__26(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__27(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__28(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__29(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__3(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__30(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__31(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__32(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__33(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__34(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__35(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__36(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__37(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__38(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__39(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__4(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__40(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__41(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__42(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__43(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__44(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__45(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__46(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__47(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__48(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__49(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__5(VAzadi_top_verilator__Syms* __restrict vlSymsp);
    static void _settle__TOP__50(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__51(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__52(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__53(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__54(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__55(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__56(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__57(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__58(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__6(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__7(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__8(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__9(VAzadi_top_verilator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedFst* tracep);
    static void traceChgSub1(void* userp, VerilatedFst* tracep);
    static void traceChgSub2(void* userp, VerilatedFst* tracep);
    static void traceChgTop0(void* userp, VerilatedFst* tracep);
    static void traceCleanup(void* userp, VerilatedFst* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceFullSub1(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceFullSub2(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceFullSub3(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub1(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub2(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitSub3(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedFst* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedFst* tracep) VL_ATTR_COLD;
    static void __Vmtask__16(bool even_cycle, void* symtab);
    static void __Vmtask__5(bool even_cycle, void* symtab);
    static void __Vmtask__9(bool even_cycle, void* symtab);
    static void __Vmtask__10(bool even_cycle, void* symtab);
    static void __Vmtask__final(bool even_cycle, void* symtab);
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
