// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_BD.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__75(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__75\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_halt_req 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
               >> 0x1fU)) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                >> 1U)));
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_halt_req = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_halt_req = 0U;
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_halt_req 
                        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                  >> 0x1fU) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                                  >> 1U))));
                }
            }
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__76(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__76\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack_reg__DOT____Vcellinp__dffs__din 
        = ((((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                >> 0x10U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__resumereq)) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_halted)))
            ? ((9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0x10U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_resumeack));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0xdU) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_halt_req))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_halt_req) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                     >> 1U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                   >> 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                 | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 1U) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 0xbU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4 
        = (((((((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_mp_e4)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4)) 
                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4)) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req 
        = (1U & (((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                        >> 3U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req)) 
                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                      >> 0xbU)) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                   >> 0xcU)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty 
        = ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_halt_idle_any) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0x13U)) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                >> 0x12U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req))) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                 >> 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                   >> 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                 & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0x10U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 3U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                      >> 0xcU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt 
        = (1U & ((((((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 0xeU) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                    >> 3U)) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                  >> 4U))) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4))) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4))) 
                   & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                         >> 0x15U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_tlu_flush_noredir_wb))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted 
        = (1U & ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                    >> 0xeU) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty)) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken)) 
                 | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0x11U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted 
        = (1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken)) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req))) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 2U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)))) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xeU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__coll_ff__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__branch_error_bank_conflict_f1) 
            << 9U) | (((((((0x1ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                       >> 6U))) == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__fetch_rd_tag_f1)) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid)) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)) 
                        & ((3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_mp_pkt[2U] 
                                   << 0xaU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_mp_pkt[1U] 
                                               >> 0x16U))) 
                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_rd_addr_f1))) 
                       << 8U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__mp_bank_decoded) 
                                  << 4U) | ((8U & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_mp_pkt[0U] 
                                                   << 3U)) 
                                            | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__dec_tlu_way_wb) 
                                                << 2U) 
                                               | ((2U 
                                                   & ((0x7ffffffeU 
                                                       & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_tlu_flush_leak_one_wb) 
                                                           << 1U) 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                             >> 1U))) 
                                                      | (0xfffffffeU 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__coll_ff__dout) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                 >> 2U)) 
                                                               << 1U))))) 
                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_wb) 
                   | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0) 
                        & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0) 
                              >> 2U))) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                              >> 2U)) 
                                          | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl0) 
                                             >> 1U))) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers)))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns)))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit0_match_ns)
                ? 0U : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt0_wb)
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                         : ((IData)(1U) + vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0)))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt0);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_wb) 
                   | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1) 
                        & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1) 
                              >> 2U))) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                              >> 2U)) 
                                          | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitctl1) 
                                             >> 1U))) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_timers)))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns)))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mit1_match_ns)
                ? 0U : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__wr_mitcnt1_wb)
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb
                         : ((IData)(1U) + vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1)))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timers__DOT__mitcnt1);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
            & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                  >> 0x11U))) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                    >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted)) 
              | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 3U) & (3U == (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                         >> 4U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req) 
                 | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                     >> 0xeU) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
                    & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                          >> 9U))) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mpmc_wb) 
                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb) 
                                       & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                             >> 9U))) 
                                      & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                            >> 0xeU)))) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 3U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted)))) 
                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                       >> 0xeU))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb) 
                                  | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                     >> 3U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)))
                           ? ((((- (IData)((((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 3U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dpc_wb)))) 
                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                   >> 1U)) | ((- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                             >> 3U)))) 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__pwbc_ff__dout)) 
                              | ((- (IData)(((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                 >> 3U)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dpc_capture_npc)))) 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout))
                           : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 3U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                 | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                      >> 4U) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1))) 
                    & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                          >> 0xeU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb)) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                     >> 1U))) ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__enter_debug_halt_req_le)
                                  ? ((0x3f80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                     | (((((0x40U & 
                                            ((- (IData)(
                                                        (1U 
                                                         & ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                               >> 0xbU) 
                                                              & (~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                  >> 7U))) 
                                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb))) 
                                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req)))))) 
                                             << 4U)) 
                                           | (0x30U 
                                              & ((- (IData)(
                                                            (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                              & (~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                  >> 7U))) 
                                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb))))) 
                                                 << 4U))) 
                                          | (0x10U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                                >> 7U) 
                                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb)))))) 
                                                << 4U))) 
                                         | (0x20U & 
                                            ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_for_dscr_cause_wb))) 
                                             << 4U))) 
                                        | (0xfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))
                                  : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_dcsr_wb)
                                      ? ((0x2000U & 
                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                           >> 2U)) 
                                         | ((0x300U 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                >> 2U)) 
                                            | ((0x70U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                               | ((2U 
                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                                                       << 1U) 
                                                      | (0xfffffffeU 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)))) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                        >> 2U))))))
                                      : ((0x3ffcU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                         | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_in_debug_mode) 
                                             << 1U) 
                                            | (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout))))))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode))) 
               & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode)) 
                  | ((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                        >> 1U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout) 
                                  >> 9U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_tlu_i0_valid_e4))) 
                     & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                           >> 0xbU))))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts 
        = (1U & ((((((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                           >> 4U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                        >> 2U))) | 
                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                          & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running)) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_tlu_i0_valid_e4)))) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode)) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                          >> 9U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                      >> 0xcU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout)) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int 
        = ((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                    >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible)) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int 
        = (((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible)) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_stall_int_ff))) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                        >> 1U)))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__timer_int_ready))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__ext_int_ready))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__ce_int_ready))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__block_interrupts)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4 
        = ((((((((((((((0xbU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)))) 
                       | (7U & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int))))) 
                      | (0x1dU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int))))) 
                     | (0x1cU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))))) 
                    | (0x1eU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int))))) 
                   | (2U & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))))) 
                  | (0xbU & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__ecall_e4))))) 
                 | (1U & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4))))) 
                | (3U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_e4) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)))))) 
               | (4U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4) 
                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4))))))) 
              | (5U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4))))))) 
             | (6U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_ma_dc4) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4)))))) 
            | (7U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_acc_dc4) 
                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_st_dc4)))))) 
           & (~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid 
        = ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ce_int)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__exthaltff__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_halt_req_sync_qual) 
            << 9U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_sync_qual) 
                       << 8U) | ((0x80U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                             << 5U) 
                                            & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                               << 7U)) 
                                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                               & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1)) 
                                                  << 7U)) 
                                              & ((~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 3U)) 
                                                 << 7U)))) 
                                 | ((0x40U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                               >> 3U) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                 << 4U))) 
                                    | ((((0x3fffffe0U 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                             >> 2U)) 
                                         | (0xffffffe0U 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout))) 
                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_sync_qual) 
                                           << 5U)) 
                                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_pmu_fw_halt_mode) 
                                           << 4U) | 
                                          (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_halt_req_ns) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_fw_tlu_halted) 
                                               << 2U) 
                                              | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_ready) 
                                                    << 1U) 
                                                   & ((0x7ffffffeU 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                          >> 1U)) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled) 
                                                         << 1U))) 
                                                  | (0xfffffffeU 
                                                     & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer0_int_possible) 
                                                           << 1U) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                         & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid)) 
                                                            << 1U)) 
                                                        & ((~ 
                                                            ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                             >> 3U)) 
                                                           << 1U)))) 
                                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_ready) 
                                                     & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout) 
                                                         >> 2U) 
                                                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer_stalled))) 
                                                    | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__int_timer1_int_possible) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exthaltff__dout)) 
                                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                           >> 3U)))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_path_e4 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed)
            ? 0x40000000U : (0x7fffffffU & ((((((((
                                                   ((((- (IData)(
                                                                 ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4)))) 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_i0_flush_path_e4) 
                                                     | ((- (IData)(
                                                                   (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_mp_e4))) 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_mp_e4)) 
                                                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
                                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4))))) 
                                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_i1_flush_path_e4)) 
                                                    | ((- (IData)(
                                                                  ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                   & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4) 
                                                                        | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i1_rfnpc_dc4) 
                                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt))) 
                                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__fence_i_e4)) 
                                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i_cpu_run_req_d1) 
                                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))))))) 
                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__npc_e4)) 
                                                   | ((- (IData)(
                                                                 ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)))) 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_tlu_i0_pc_e4)) 
                                                  | ((- (IData)(
                                                                ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)))) 
                                                     & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout)) 
                                                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)
                                                        ? 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon_wrapper_0_o_nmi_vec 
                                                        >> 1U)
                                                        : 
                                                       ((1U 
                                                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec)
                                                         ? 
                                                        ((0x7ffffffeU 
                                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec) 
                                                         + 
                                                         (0x3fU 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__exc_cause_e4) 
                                                             << 1U)))
                                                         : 
                                                        (0x7ffffffeU 
                                                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec))))) 
                                                | (0x7ffffffeU 
                                                   & ((- (IData)(
                                                                 ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)) 
                                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4) 
                                                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4)))) 
                                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid))))) 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mtvec))) 
                                               | ((- (IData)(
                                                             (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)) 
                                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_wb))))) 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mepc_ff__dout)) 
                                              | ((- (IData)(
                                                            ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)))) 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dpc_ff__dout)) 
                                             | ((- (IData)(
                                                           ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__sel_npc_wb)))) 
                                                & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__npwbc_ff__dout)) 
                                            | ((- (IData)(
                                                          (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_nmi)) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__wr_mepc_wb)))) 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_wrdata_wb 
                                                  >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__interrupt_valid) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mret_e4)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__synchronous_flush_e4)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__reset_delayed));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__freeff__din 
        = ((0x200U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                      << 1U)) | ((0x100U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                            << 5U)) 
                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3) 
                                     << 7U) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                     >> 7U))) 
                                                << 6U) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__e4_valid) 
                                                   << 5U) 
                                                  | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc3)) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                           >> 2U))) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4) 
                                                            << 2U) 
                                                           | (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_exc_dc4)) 
                                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
                                                                 << 1U) 
                                                                | (0xfffeU 
                                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4) 
                                                                       << 1U) 
                                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                         >> 0x10U)))) 
                                                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & ((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4) 
                                                                          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)) 
                                                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_p_e4[2U] 
                                                                           >> 9U)) 
                                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__inst_acc_e4)) 
                                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4) 
                                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                            >> 0x11U))) 
                                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_i0_rfnpc_dc4))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0xfcU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
              & ((((((((((((((((((((((((((((((((((((((((((((((((((((1U 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec))))) 
                                                                   | (1U 
                                                                      & ((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                            >> 3U)))) 
                                                                  | (1U 
                                                                     & ((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                           >> 4U)))) 
                                                                 | ((- (IData)(
                                                                               (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                    & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                        << 1U) 
                                                                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)))))) 
                                                                | ((- (IData)(
                                                                              (5U 
                                                                               == 
                                                                               (0x3fU 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                   & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                        & (~ 
                                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                            >> 6U))) 
                                                                       << 1U) 
                                                                      | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)))))) 
                                                               | ((- (IData)(
                                                                             (6U 
                                                                              == 
                                                                              (0x3fU 
                                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                  & ((0x7fffffeU 
                                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                          << 1U) 
                                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                            >> 5U))) 
                                                                     | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4)))))) 
                                                              | ((- (IData)(
                                                                            (7U 
                                                                             == 
                                                                             (0x3fU 
                                                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_instr_aligned))) 
                                                             | ((- (IData)(
                                                                           (8U 
                                                                            == 
                                                                            (0x3fU 
                                                                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded))) 
                                                            | ((- (IData)(
                                                                          (0x1dU 
                                                                           == 
                                                                           (0x3fU 
                                                                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_align_stall))) 
                                                           | ((- (IData)(
                                                                         (0x1eU 
                                                                          == 
                                                                          (0x3fU 
                                                                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall))) 
                                                          | ((- (IData)(
                                                                        (9U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                             & (((1U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                 << 1U) 
                                                                | (1U 
                                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                         | ((- (IData)(
                                                                       (0xaU 
                                                                        == 
                                                                        (0x3fU 
                                                                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                >> 1U) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)))) 
                                                        | ((- (IData)(
                                                                      (0xbU 
                                                                       == 
                                                                       (0x3fU 
                                                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                           & (((2U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                               << 1U) 
                                                              | (2U 
                                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                       | ((- (IData)(
                                                                     (0xcU 
                                                                      == 
                                                                      (0x3fU 
                                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                          & (((3U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                              << 1U) 
                                                             | (3U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                      | (((- (IData)(
                                                                     (0xdU 
                                                                      == 
                                                                      (0x3fU 
                                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                          & (((2U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                              << 1U) 
                                                             | (2U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))))) 
                                                     | (((- (IData)(
                                                                    (0xeU 
                                                                     == 
                                                                     (0x3fU 
                                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                         & (((3U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                             << 1U) 
                                                            | (3U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))))) 
                                                    | ((- (IData)(
                                                                  (0xfU 
                                                                   == 
                                                                   (0x3fU 
                                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                       & (((4U 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           << 1U) 
                                                          | (4U 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))))) 
                                                   | ((- (IData)(
                                                                 (0x10U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                      & (5U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                  | ((- (IData)(
                                                                (0x12U 
                                                                 == 
                                                                 (0x3fU 
                                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                     & (6U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                 | ((- (IData)(
                                                               (0x11U 
                                                                == 
                                                                (0x3fU 
                                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                    & (7U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                                | ((- (IData)(
                                                              (0x13U 
                                                               == 
                                                               (0x3fU 
                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                   & (8U 
                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                               | ((- (IData)(
                                                             (0x14U 
                                                              == 
                                                              (0x3fU 
                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                  & (9U 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                              | ((- (IData)(
                                                            (0x15U 
                                                             == 
                                                             (0x3fU 
                                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                 & (0xaU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                             | ((- (IData)(
                                                           (0x16U 
                                                            == 
                                                            (0x3fU 
                                                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                                & (0xbU 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                            | ((- (IData)(
                                                          (0x17U 
                                                           == 
                                                           (0x3fU 
                                                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                               & (0xcU 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))) 
                                           | ((- (IData)(
                                                         (0x18U 
                                                          == 
                                                          (0x3fU 
                                                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                              & ((((0xdU 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                   | (0xeU 
                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                  << 1U) 
                                                 | ((0xdU 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                    | (0xeU 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)))))) 
                                          | ((- (IData)(
                                                        (0x19U 
                                                         == 
                                                         (0x3fU 
                                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                             & ((0xfffffeU 
                                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                     >> 8U) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                       << 1U))) 
                                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))))) 
                                         | ((- (IData)(
                                                       (0x1aU 
                                                        == 
                                                        (0x3fU 
                                                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                            & ((0x1fffffeU 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                      << 1U))) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))))) 
                                        | ((- (IData)(
                                                      (0x1bU 
                                                       == 
                                                       (0x3fU 
                                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                           & ((0x7ffffffeU 
                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                   >> 1U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                     << 1U))) 
                                              | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                  >> 3U) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt))))) 
                                       | ((- (IData)(
                                                     (0x1cU 
                                                      == 
                                                      (0x3fU 
                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_fetch_stall))) 
                                      | ((- (IData)(
                                                    (0x1dU 
                                                     == 
                                                     (0x3fU 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_align_stall))) 
                                     | ((- (IData)(
                                                   (0x1eU 
                                                    == 
                                                    (0x3fU 
                                                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall))) 
                                    | ((- (IData)((0x1fU 
                                                   == 
                                                   (0x3fU 
                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall))) 
                                   | ((- (IData)((0x20U 
                                                  == 
                                                  (0x3fU 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall))) 
                                  | ((- (IData)((0x21U 
                                                 == 
                                                 (0x3fU 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))) 
                                 | ((- (IData)((0x22U 
                                                == 
                                                (0x3fU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_store_stall_any))) 
                                | ((- (IData)((0x23U 
                                               == (0x3fU 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_stall_any))) 
                               | ((- (IData)((0x24U 
                                              == (0x3fU 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_iccm_stall_any))) 
                              | ((- (IData)((0x25U 
                                             == (0x3fU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                 & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4)))) 
                             | ((- (IData)((0x26U == 
                                            (0x3fU 
                                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int)))) 
                            | ((- (IData)((0x27U == 
                                           (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int))) 
                           | ((- (IData)((0x28U == 
                                          (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4))) 
                          | ((- (IData)((0x29U == (0x3fU 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                             & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                 << 1U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))))) 
                         | (1U & ((- (IData)((0x2aU 
                                              == (0x3fU 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                        | ((- (IData)((0x2bU == (0x3fU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_trxn))) 
                       | ((- (IData)((0x2cU == (0x3fU 
                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_misaligned))) 
                      | (1U & ((- (IData)((0x2dU == 
                                           (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                  >> 2U)))) | ((- (IData)(
                                                          (0x2eU 
                                                           == 
                                                           (0x3fU 
                                                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_error))) 
                    | (1U & ((- (IData)((0x2fU == (0x3fU 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                >> 1U)))) | ((- (IData)(
                                                        (0x30U 
                                                         == 
                                                         (0x3fU 
                                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_busy))) 
                  | (1U & ((- (IData)((0x31U == (0x3fU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))))) 
                 | ((- (IData)((0x32U == (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec)))) 
                    & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                       & (0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0xf3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | (((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
               << 2U) & (((((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((4U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                               << 2U)) 
                                                                           | (4U 
                                                                              & (((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 1U)))) 
                                                                          | (4U 
                                                                             & (((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                                << 2U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                >> 2U)))) 
                                                                         | (((- (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                             << 2U) 
                                                                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 3U) 
                                                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 2U)))) 
                                                                        | (((- (IData)(
                                                                                (5U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                            << 2U) 
                                                                           & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 6U))) 
                                                                               << 3U) 
                                                                              | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 2U)))) 
                                                                       | (((- (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                           << 2U) 
                                                                          & ((0x1ffffff8U 
                                                                              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 3U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 3U))) 
                                                                             | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 2U)))) 
                                                                      | (((- (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                                         << 2U)) 
                                                                     | (((- (IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                                        << 2U)) 
                                                                    | (((- (IData)(
                                                                                (0x1dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                                       << 2U)) 
                                                                   | (((- (IData)(
                                                                                (0x1eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                      << 2U)) 
                                                                  | (((- (IData)(
                                                                                (9U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                      << 2U) 
                                                                     & (((1U 
                                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                         << 3U) 
                                                                        | ((1U 
                                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           << 2U)))) 
                                                                 | (0xfffffffcU 
                                                                    & (((- (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                        << 2U) 
                                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                           << 1U) 
                                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                             << 2U))))) 
                                                                | (((- (IData)(
                                                                               (0xbU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                    << 2U) 
                                                                   & (((2U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                       << 3U) 
                                                                      | ((2U 
                                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                         << 2U)))) 
                                                               | (((- (IData)(
                                                                              (0xcU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                   << 2U) 
                                                                  & (((3U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 3U) 
                                                                     | ((3U 
                                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 2U)))) 
                                                              | ((((- (IData)(
                                                                              (0xdU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                   << 2U) 
                                                                  & (((2U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 3U) 
                                                                     | ((2U 
                                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 2U))) 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                    << 2U))) 
                                                             | ((((- (IData)(
                                                                             (0xeU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                  << 2U) 
                                                                 & (((3U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                     << 3U) 
                                                                    | ((3U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                       << 2U))) 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                   << 2U))) 
                                                            | (((- (IData)(
                                                                           (0xfU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 6U))))) 
                                                                << 2U) 
                                                               & (((4U 
                                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                   << 3U) 
                                                                  | ((4U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                     << 2U)))) 
                                                           | (((- (IData)(
                                                                          (0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 6U))))) 
                                                               & (5U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                              << 2U)) 
                                                          | (((- (IData)(
                                                                         (0x12U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 6U))))) 
                                                              & (6U 
                                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                             << 2U)) 
                                                         | (((- (IData)(
                                                                        (0x11U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 6U))))) 
                                                             & (7U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 2U)) 
                                                        | (((- (IData)(
                                                                       (0x13U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 6U))))) 
                                                            & (8U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                           << 2U)) 
                                                       | (((- (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 6U))))) 
                                                           & (9U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                          << 2U)) 
                                                      | (((- (IData)(
                                                                     (0x15U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 6U))))) 
                                                          & (0xaU 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                         << 2U)) 
                                                     | (((- (IData)(
                                                                    (0x16U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 6U))))) 
                                                         & (0xbU 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                        << 2U)) 
                                                    | (((- (IData)(
                                                                   (0x17U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 6U))))) 
                                                        & (0xcU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                       << 2U)) 
                                                   | (((- (IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 6U))))) 
                                                       << 2U) 
                                                      & ((((0xdU 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           | (0xeU 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                          << 3U) 
                                                         | (((0xdU 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                             | (0xeU 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 2U)))) 
                                                  | (((- (IData)(
                                                                 (0x19U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 6U))))) 
                                                      << 2U) 
                                                     & ((0x3fffff8U 
                                                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                             >> 6U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                               << 3U))) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                           << 2U)))) 
                                                 | (((- (IData)(
                                                                (0x1aU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 6U))))) 
                                                     << 2U) 
                                                    & ((0x7fffff8U 
                                                        & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            >> 5U) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                              << 3U))) 
                                                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                          << 2U)))) 
                                                | (((- (IData)(
                                                               (0x1bU 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 6U))))) 
                                                    << 2U) 
                                                   & ((0xfffffff8U 
                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                           << 1U) 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                             << 3U))) 
                                                      | (0x7ffffffcU 
                                                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                             >> 1U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                               << 2U)))))) 
                                               | (((- (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 6U))))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                  << 2U)) 
                                              | (((- (IData)(
                                                             (0x1dU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 6U))))) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                 << 2U)) 
                                             | (((- (IData)(
                                                            (0x1eU 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                 >> 6U))))) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                << 2U)) 
                                            | (((- (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 6U))))) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                               << 2U)) 
                                           | (((- (IData)(
                                                          (0x20U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 6U))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                              << 2U)) 
                                          | (((- (IData)(
                                                         (0x21U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 6U))))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)) 
                                             << 2U)) 
                                         | (((- (IData)(
                                                        (0x22U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 6U))))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_store_stall_any)) 
                                            << 2U)) 
                                        | (((- (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 6U))))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                           << 2U)) 
                                       | (((- (IData)(
                                                      (0x24U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 6U))))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                          << 2U)) | 
                                      (((- (IData)(
                                                   (0x25U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 6U))))) 
                                        & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4))) 
                                       << 2U)) | ((
                                                   (- (IData)(
                                                              (0x26U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 6U))))) 
                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                  << 2U)) 
                                    | (((- (IData)(
                                                   (0x27U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 6U))))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                       << 2U)) | ((
                                                   (- (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 6U))))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                  << 2U)) 
                                  | (((- (IData)((0x29U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 6U))))) 
                                      << 2U) & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                 << 3U) 
                                                | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                   << 2U)))) 
                                 | (4U & (((- (IData)(
                                                      (0x2aU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 6U))))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                          << 2U))) 
                                | (((- (IData)((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 6U))))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                   << 2U)) | (((- (IData)(
                                                          (0x2cU 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 6U))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                              << 2U)) 
                              | (4U & (((- (IData)(
                                                   (0x2dU 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 6U))))) 
                                        << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                             | (((- (IData)((0x2eU 
                                             == (0x3fU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 6U))))) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                << 2U)) | (4U & (((- (IData)(
                                                             (0x2fU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 6U))))) 
                                                  << 2U) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                    << 1U)))) 
                           | (((- (IData)((0x30U == 
                                           (0x3fU & 
                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                             >> 6U))))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                              << 2U)) | (4U & (((- (IData)(
                                                           (0x31U 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 6U))))) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))) 
                                               << 2U))) 
                         | (((- (IData)((0x32U == (0x3fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 6U))))) 
                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                & (0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                            << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0xcfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | (((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
               << 4U) & (((((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((0x10U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                               << 4U)) 
                                                                           | (0x10U 
                                                                              & (((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                                << 4U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                << 1U)))) 
                                                                          | (0x10U 
                                                                             & (((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                                << 4U) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)))) 
                                                                         | (((- (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                             << 4U) 
                                                                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 5U) 
                                                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 4U)))) 
                                                                        | (((- (IData)(
                                                                                (5U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                            << 4U) 
                                                                           & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 6U))) 
                                                                               << 5U) 
                                                                              | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 4U)))) 
                                                                       | (((- (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                           << 4U) 
                                                                          & ((0x7fffffe0U 
                                                                              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 5U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 1U))) 
                                                                             | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 4U)))) 
                                                                      | (((- (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                                         << 4U)) 
                                                                     | (((- (IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                                        << 4U)) 
                                                                    | (((- (IData)(
                                                                                (0x1dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                                       << 4U)) 
                                                                   | (((- (IData)(
                                                                                (0x1eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                      << 4U)) 
                                                                  | (((- (IData)(
                                                                                (9U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                      << 4U) 
                                                                     & (((1U 
                                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                         << 5U) 
                                                                        | ((1U 
                                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           << 4U)))) 
                                                                 | (0xfffffff0U 
                                                                    & (((- (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                        << 4U) 
                                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                           << 3U) 
                                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                             << 4U))))) 
                                                                | (((- (IData)(
                                                                               (0xbU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                    << 4U) 
                                                                   & (((2U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                       << 5U) 
                                                                      | ((2U 
                                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                         << 4U)))) 
                                                               | (((- (IData)(
                                                                              (0xcU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                   << 4U) 
                                                                  & (((3U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 5U) 
                                                                     | ((3U 
                                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 4U)))) 
                                                              | ((((- (IData)(
                                                                              (0xdU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                   << 4U) 
                                                                  & (((2U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 5U) 
                                                                     | ((2U 
                                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 4U))) 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                    << 4U))) 
                                                             | ((((- (IData)(
                                                                             (0xeU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                  << 4U) 
                                                                 & (((3U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                     << 5U) 
                                                                    | ((3U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                       << 4U))) 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                   << 4U))) 
                                                            | (((- (IData)(
                                                                           (0xfU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0xcU))))) 
                                                                << 4U) 
                                                               & (((4U 
                                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                   << 5U) 
                                                                  | ((4U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                     << 4U)))) 
                                                           | (((- (IData)(
                                                                          (0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 0xcU))))) 
                                                               & (5U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                              << 4U)) 
                                                          | (((- (IData)(
                                                                         (0x12U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 0xcU))))) 
                                                              & (6U 
                                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                             << 4U)) 
                                                         | (((- (IData)(
                                                                        (0x11U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 0xcU))))) 
                                                             & (7U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 4U)) 
                                                        | (((- (IData)(
                                                                       (0x13U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 0xcU))))) 
                                                            & (8U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                           << 4U)) 
                                                       | (((- (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 0xcU))))) 
                                                           & (9U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                          << 4U)) 
                                                      | (((- (IData)(
                                                                     (0x15U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 0xcU))))) 
                                                          & (0xaU 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                         << 4U)) 
                                                     | (((- (IData)(
                                                                    (0x16U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 0xcU))))) 
                                                         & (0xbU 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                        << 4U)) 
                                                    | (((- (IData)(
                                                                   (0x17U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 0xcU))))) 
                                                        & (0xcU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                       << 4U)) 
                                                   | (((- (IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 0xcU))))) 
                                                       << 4U) 
                                                      & ((((0xdU 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           | (0xeU 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                          << 5U) 
                                                         | (((0xdU 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                             | (0xeU 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 4U)))) 
                                                  | (((- (IData)(
                                                                 (0x19U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0xcU))))) 
                                                      << 4U) 
                                                     & ((0xfffffe0U 
                                                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                             >> 4U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                               << 5U))) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                           << 4U)))) 
                                                 | (((- (IData)(
                                                                (0x1aU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 0xcU))))) 
                                                     << 4U) 
                                                    & ((0x1fffffe0U 
                                                        & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            >> 3U) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                              << 5U))) 
                                                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                          << 4U)))) 
                                                | (((- (IData)(
                                                               (0x1bU 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0xcU))))) 
                                                    << 4U) 
                                                   & ((0xffffffe0U 
                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                           << 3U) 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                             << 5U))) 
                                                      | (0xfffffff0U 
                                                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                             << 1U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                               << 4U)))))) 
                                               | (((- (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                  << 4U)) 
                                              | (((- (IData)(
                                                             (0x1dU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 0xcU))))) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                 << 4U)) 
                                             | (((- (IData)(
                                                            (0x1eU 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                 >> 0xcU))))) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                << 4U)) 
                                            | (((- (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0xcU))))) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                               << 4U)) 
                                           | (((- (IData)(
                                                          (0x20U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0xcU))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                              << 4U)) 
                                          | (((- (IData)(
                                                         (0x21U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0xcU))))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)) 
                                             << 4U)) 
                                         | (((- (IData)(
                                                        (0x22U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0xcU))))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_store_stall_any)) 
                                            << 4U)) 
                                        | (((- (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0xcU))))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                           << 4U)) 
                                       | (((- (IData)(
                                                      (0x24U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0xcU))))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                          << 4U)) | 
                                      (((- (IData)(
                                                   (0x25U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0xcU))))) 
                                        & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4))) 
                                       << 4U)) | ((
                                                   (- (IData)(
                                                              (0x26U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                  << 4U)) 
                                    | (((- (IData)(
                                                   (0x27U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0xcU))))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                       << 4U)) | ((
                                                   (- (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                  << 4U)) 
                                  | (((- (IData)((0x29U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0xcU))))) 
                                      << 4U) & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                 << 5U) 
                                                | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                   << 4U)))) 
                                 | (0x10U & (((- (IData)(
                                                         (0x2aU 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0xcU))))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                             << 4U))) 
                                | (((- (IData)((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0xcU))))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                   << 4U)) | (((- (IData)(
                                                          (0x2cU 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0xcU))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                              << 4U)) 
                              | (0x10U & (((- (IData)(
                                                      (0x2dU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0xcU))))) 
                                           << 4U) & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                           << 2U)))) 
                             | (((- (IData)((0x2eU 
                                             == (0x3fU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0xcU))))) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                << 4U)) | (0x10U & 
                                           (((- (IData)(
                                                        (0x2fU 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0xcU))))) 
                                             << 4U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               << 3U)))) 
                           | (((- (IData)((0x30U == 
                                           (0x3fU & 
                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                             >> 0xcU))))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                              << 4U)) | (0x10U & ((
                                                   (- (IData)(
                                                              (0x31U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0xcU))))) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))) 
                                                  << 4U))) 
                         | (((- (IData)((0x32U == (0x3fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0xcU))))) 
                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                & (0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                            << 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4 
        = ((0x3fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpmc_inc_e4)) 
           | (((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mgpmc_b))))) 
               << 6U) & (((((((((((((((((((((((((((
                                                   (((((((((((((((((((((((((0x40U 
                                                                            & ((- (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                               << 6U)) 
                                                                           | (0x40U 
                                                                              & (((- (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                                << 6U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                << 3U)))) 
                                                                          | (0x40U 
                                                                             & (((- (IData)(
                                                                                (3U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                                << 6U) 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                                                                << 2U)))) 
                                                                         | (((- (IData)(
                                                                                (4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                             << 6U) 
                                                                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 7U) 
                                                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 6U)))) 
                                                                        | (((- (IData)(
                                                                                (5U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                            << 6U) 
                                                                           & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                & (~ 
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                >> 6U))) 
                                                                               << 7U) 
                                                                              | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_pc4))) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 6U)))) 
                                                                       | (((- (IData)(
                                                                                (6U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                           << 6U) 
                                                                          & ((0xffffff80U 
                                                                              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                                                << 7U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                                                << 1U))) 
                                                                             | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_pc4)) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__illegal_e4))) 
                                                                                << 6U)))) 
                                                                      | (((- (IData)(
                                                                                (7U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_instr_aligned)) 
                                                                         << 6U)) 
                                                                     | (((- (IData)(
                                                                                (8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded)) 
                                                                        << 6U)) 
                                                                    | (((- (IData)(
                                                                                (0x1dU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                                       << 6U)) 
                                                                   | (((- (IData)(
                                                                                (0x1eU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                                      << 6U)) 
                                                                  | (((- (IData)(
                                                                                (9U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                      << 6U) 
                                                                     & (((1U 
                                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                         << 7U) 
                                                                        | ((1U 
                                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                           << 6U)))) 
                                                                 | (0xffffffc0U 
                                                                    & (((- (IData)(
                                                                                (0xaU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                        << 6U) 
                                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                                           << 5U) 
                                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                                             << 6U))))) 
                                                                | (((- (IData)(
                                                                               (0xbU 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                    << 6U) 
                                                                   & (((2U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                       << 7U) 
                                                                      | ((2U 
                                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                         << 6U)))) 
                                                               | (((- (IData)(
                                                                              (0xcU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                   << 6U) 
                                                                  & (((3U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 7U) 
                                                                     | ((3U 
                                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 6U)))) 
                                                              | ((((- (IData)(
                                                                              (0xdU 
                                                                               == 
                                                                               (0x3fU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                   << 6U) 
                                                                  & (((2U 
                                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                      << 7U) 
                                                                     | ((2U 
                                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                        << 6U))) 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                    << 6U))) 
                                                             | ((((- (IData)(
                                                                             (0xeU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                  << 6U) 
                                                                 & (((3U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                     << 7U) 
                                                                    | ((3U 
                                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                       << 6U))) 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4))) 
                                                                   << 6U))) 
                                                            | (((- (IData)(
                                                                           (0xfU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                                >> 0x12U))))) 
                                                                << 6U) 
                                                               & (((4U 
                                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                                   << 7U) 
                                                                  | ((4U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                                     << 6U)))) 
                                                           | (((- (IData)(
                                                                          (0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                               >> 0x12U))))) 
                                                               & (5U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                              << 6U)) 
                                                          | (((- (IData)(
                                                                         (0x12U 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                              >> 0x12U))))) 
                                                              & (6U 
                                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                             << 6U)) 
                                                         | (((- (IData)(
                                                                        (0x11U 
                                                                         == 
                                                                         (0x3fU 
                                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                             >> 0x12U))))) 
                                                             & (7U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 6U)) 
                                                        | (((- (IData)(
                                                                       (0x13U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                            >> 0x12U))))) 
                                                            & (8U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                           << 6U)) 
                                                       | (((- (IData)(
                                                                      (0x14U 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                           >> 0x12U))))) 
                                                           & (9U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                          << 6U)) 
                                                      | (((- (IData)(
                                                                     (0x15U 
                                                                      == 
                                                                      (0x3fU 
                                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                          >> 0x12U))))) 
                                                          & (0xaU 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                         << 6U)) 
                                                     | (((- (IData)(
                                                                    (0x16U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                         >> 0x12U))))) 
                                                         & (0xbU 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                        << 6U)) 
                                                    | (((- (IData)(
                                                                   (0x17U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                        >> 0x12U))))) 
                                                        & (0xcU 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                       << 6U)) 
                                                   | (((- (IData)(
                                                                  (0x18U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                       >> 0x12U))))) 
                                                       << 6U) 
                                                      & ((((0xdU 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual)) 
                                                           | (0xeU 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i1_itype_qual))) 
                                                          << 7U) 
                                                         | (((0xdU 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual)) 
                                                             | (0xeU 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__pmu_i0_itype_qual))) 
                                                            << 6U)))) 
                                                  | (((- (IData)(
                                                                 (0x19U 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                      >> 0x12U))))) 
                                                      << 6U) 
                                                     & ((0x3fffff80U 
                                                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                             >> 2U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                               << 7U))) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_br_misp) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                           << 6U)))) 
                                                 | (((- (IData)(
                                                                (0x1aU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                     >> 0x12U))))) 
                                                     << 6U) 
                                                    & ((0x7fffff80U 
                                                        & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e4[2U] 
                                                            >> 1U) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                              << 7U))) 
                                                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_pmu_i0_br_ataken) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt)) 
                                                          << 6U)))) 
                                                | (((- (IData)(
                                                               (0x1bU 
                                                                == 
                                                                (0x3fU 
                                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                    >> 0x12U))))) 
                                                    << 6U) 
                                                   & ((0xffffff80U 
                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                           << 5U) 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i1_commit_cmt) 
                                                             << 7U))) 
                                                      | (0xffffffc0U 
                                                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_packet_e4 
                                                             << 3U) 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_i0_commit_cmt) 
                                                               << 6U)))))) 
                                               | (((- (IData)(
                                                              (0x1cU 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_fetch_stall)) 
                                                  << 6U)) 
                                              | (((- (IData)(
                                                             (0x1dU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                  >> 0x12U))))) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_pmu_align_stall)) 
                                                 << 6U)) 
                                             | (((- (IData)(
                                                            (0x1eU 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                 >> 0x12U))))) 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall)) 
                                                << 6U)) 
                                            | (((- (IData)(
                                                           (0x1fU 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                >> 0x12U))))) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                                               << 6U)) 
                                           | (((- (IData)(
                                                          (0x20U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x12U))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                                              << 6U)) 
                                          | (((- (IData)(
                                                         (0x21U 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x12U))))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)) 
                                             << 6U)) 
                                         | (((- (IData)(
                                                        (0x22U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x12U))))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_store_stall_any)) 
                                            << 6U)) 
                                        | (((- (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                            >> 0x12U))))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_stall_any)) 
                                           << 6U)) 
                                       | (((- (IData)(
                                                      (0x24U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0x12U))))) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_iccm_stall_any)) 
                                          << 6U)) | 
                                      (((- (IData)(
                                                   (0x25U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0x12U))))) 
                                        & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_exception_valid_e4) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_e4)) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__lsu_exc_valid_e4))) 
                                       << 6U)) | ((
                                                   (- (IData)(
                                                              (0x26U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_timer_int) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer0_int)) 
                                                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_int_timer1_int))) 
                                                  << 6U)) 
                                    | (((- (IData)(
                                                   (0x27U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                        >> 0x12U))))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_ext_int)) 
                                       << 6U)) | ((
                                                   (- (IData)(
                                                              (0x28U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__tlu_flush_lower_e4)) 
                                                  << 6U)) 
                                  | (((- (IData)((0x29U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0x12U))))) 
                                      << 6U) & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_error_e4) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br1_start_error_e4)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i1_e4)) 
                                                 << 7U) 
                                                | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_error_e4) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_tlu_br0_start_error_e4)) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4)) 
                                                   << 6U)))) 
                                 | (0x40U & (((- (IData)(
                                                         (0x2aU 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                              >> 0x12U))))) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout)) 
                                             << 6U))) 
                                | (((- (IData)((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0x12U))))) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_trxn)) 
                                   << 6U)) | (((- (IData)(
                                                          (0x2cU 
                                                           == 
                                                           (0x3fU 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                               >> 0x12U))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_misaligned)) 
                                              << 6U)) 
                              | (0x40U & (((- (IData)(
                                                      (0x2dU 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                           >> 0x12U))))) 
                                           << 6U) & 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                           << 4U)))) 
                             | (((- (IData)((0x2eU 
                                             == (0x3fU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                    >> 0x12U))))) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_error)) 
                                << 6U)) | (0x40U & 
                                           (((- (IData)(
                                                        (0x2fU 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                             >> 0x12U))))) 
                                             << 6U) 
                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_pmu_sigs_ff__dout) 
                                               << 5U)))) 
                           | (((- (IData)((0x30U == 
                                           (0x3fU & 
                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                             >> 0x12U))))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_busy)) 
                              << 6U)) | (0x40U & ((
                                                   (- (IData)(
                                                              (0x31U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                                   >> 0x12U))))) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus))) 
                                                  << 6U))) 
                         | (((- (IData)((0x32U == (0x3fU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mhpme_vec 
                                                      >> 0x12U))))) 
                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mstatus)) 
                                & (0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mip) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mie))))) 
                            << 6U))));
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__77(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__77\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit)) 
           | (((0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U]) 
               == (0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                               >> 8U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_tag_valid)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit)) 
           | (0xfffffffeU & ((((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                             << 0xbU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U] 
                                               >> 0x15U))) 
                               == (0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                               >> 8U))) 
                              << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_tag_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit)) 
           | (0xfffffffcU & ((((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
                                             << 0x16U) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                               >> 0xaU))) 
                               == (0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                               >> 8U))) 
                              << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_tag_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit)) 
           | (0xfffffff8U & ((((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
                                             << 1U) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                               >> 0x1fU))) 
                               == (0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_rw_addr_ff 
                                               >> 8U))) 
                              << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_tag_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in 
        = (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)) 
            << 0x31U) | (((QData)((IData)(((((0U != 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_tag_valid))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)) 
                                            << 0x1fU) 
                                           | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_btb_target_f2))) 
                          << 0x11U) | (QData)((IData)(
                                                      ((0x1ffe0U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                                           << 1U)) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__fghr))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_new_w_debug 
        = (7U & ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_tlu_ic_diag_pkt) 
                        & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                   >> 0x12U)))) ? (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_tlu_ic_diag_pkt 
                                                           >> 0x17U))
                  : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new_q)
                      ? (((((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any)))) 
                            & (3U | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff)))) 
                           | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                                >> 1U)))) 
                              & (1U | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))) 
                          | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                               >> 2U)))) 
                             & (4U | (2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))) 
                         | (2U & ((- (IData)((1U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__replace_way_mb_any) 
                                               >> 3U)))) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status_mb_ff))))
                      : (((((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit)))) 
                            & (3U | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status)))) 
                           | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit) 
                                                >> 1U)))) 
                              & (1U | (4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status))))) 
                          | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit) 
                                               >> 2U)))) 
                             & (4U | (2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status))))) 
                         | (2U & ((- (IData)((1U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit) 
                                               >> 3U)))) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q 
        = (0xfU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__debug_rd_wy_ff__dout))
                    ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT____Vcellout__debug_rd_wy_ff__dout) 
                       >> 1U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2 
        = ((((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit)))) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
           & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2 
        = (((((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit)))) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2 
        = (((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_hit)) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_icache_f2)) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__reset_all_tags))) 
            & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
               | (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_mb_addr_ff)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half_valid_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_first_data) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_first_half_valid) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half_valid_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_second_data) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_second_half_valid) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_first_half_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_first_data)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_data_error)
            : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_first_half) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_second_half_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__write_byp_second_data)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_data_error)
            : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_byp_data_error_second_half) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
            ? ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout) 
                   >> 1U)) & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                               ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))
                               : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__flush_final_f2)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2))))
            : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                    ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))
                    : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2)))
                : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                    ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_reset_data_beat_cnt 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
            ? 0U : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                     ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                         ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final) 
                             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))))
                             ? 2U : 0U) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_miss_under_miss_f2) 
                                            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))))
                                            ? 5U : 0U))
                     : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                         ? (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2) 
                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final))) 
                              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                             ? 3U : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2) 
                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                      ? 0U : (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
                                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final))) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff))
                                               ? 4U
                                               : ((
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)))
                                                   ? 0U
                                                   : 
                                                  (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat))))
                                                    ? 2U
                                                    : 0U)))))
                         : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)))
                             ? 1U : 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_hit_f2 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_hit_f2) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_byp_hit_f2)) 
            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_iccm_f2) 
               & ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                  | (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_fetch_req_f2)) 
              & (~ ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                    | (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_cumulative_err 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_data_error) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_wr_data_comb_err_ff)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_reset_data_beat_cnt)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_new_data_beat_count 
        = (7U & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_data_beat_cnt))) 
                  & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count))) 
                 | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_data_beat_cnt)) 
                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_reset_data_beat_cnt)))))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_data_beat_count))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_state_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb 
        = (((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))) 
             & (~ ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)))) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2)) 
           | ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
              & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__miss_nxtstate))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__faddrf2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xfffffffU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2))) 
                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_hit_f2))
                          ? (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout 
                             >> 3U) : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__faddrf2_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2 
        = (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_hit_f2))) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_hit_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_hit_f2) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__imb_f2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken)
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb)
                ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1)
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_hold_imb)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_uncacheable_f1));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1 
        = ((((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__next_state 
        = ((2U & (((((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout) 
                           >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout)) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__reset_delayed))) 
                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle))) 
                   << 1U) | (0xfffffffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout) 
                                              & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__reset_delayed)) 
                                                 << 1U)) 
                                             & ((~ 
                                                 (((((((2U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                                       & (~ 
                                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_ifu_wr_en_new) 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_last_data_beat)))) 
                                                      | (0U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__dma_stall))) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2))) 
                                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__ran_ff__dout)))) 
                                                << 1U)) 
                                            & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)) 
                                               << 1U))))) 
           | (1U & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)) 
                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_tlu_flush_noredir_wb))) 
                         & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout)))) 
                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fsm_ff__dout) 
                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__goto_idle)))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__reset_delayed))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right 
        = (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
            | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)))) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2))) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2)))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2 
        = ((0xffffff80U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                             << 7U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                       << 1U)) & ((
                                                   ((~ 
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                      >> 2U)) 
                                                    & (~ 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                        >> 1U))) 
                                                   & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                                                  << 7U))) 
           | ((0xffffffc0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                << 6U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                          << 1U)) & 
                              (((~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                    >> 2U)) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                  >> 1U))) 
                               << 6U))) | ((0xffffffe0U 
                                            & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                 << 5U) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                   << 1U)) 
                                               & ((((~ 
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                      >> 2U)) 
                                                    & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                                                   | ((~ 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                        >> 2U)) 
                                                      & (~ 
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                          >> 1U)))) 
                                                  << 5U))) 
                                           | ((0xfffffff0U 
                                               & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                    << 4U) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                      << 1U)) 
                                                  & ((~ 
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                       >> 2U)) 
                                                     << 4U))) 
                                              | ((0xfffffff8U 
                                                  & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                       << 3U) 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                         << 1U)) 
                                                     & ((((~ 
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                            >> 1U)) 
                                                          & (~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout)) 
                                                         | (~ 
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                             >> 2U))) 
                                                        << 3U))) 
                                                 | ((0xfffffffcU 
                                                     & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                          << 2U) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2) 
                                                            << 1U)) 
                                                        & (((~ 
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                              >> 1U)) 
                                                            | (~ 
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                                >> 2U))) 
                                                           << 2U))) 
                                                    | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_inst_mask_f2)) 
                                                         & (((~ vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout) 
                                                             | (~ 
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                                 >> 1U))) 
                                                            | (~ 
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_fetch_addr_f2_ff__dout 
                                                                >> 2U)))) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_req_f2_qual))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__unc_miss_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__fetch_f1_f2_c1_clken)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_ff));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__faddmiss_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final) 
                      | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_hit_f2)) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2))) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout) 
                       >> 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_kill_next_f2)) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1))) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__iccrit_ff__dout)))))
            ? (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_path_final) 
                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout)) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_addr_f1)) 
               | ((- (IData)((1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f2)) 
                                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_f1))) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__miss_sel_flush)))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddmiss_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__faddrf1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__next_state)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_crit_word))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fetch_addr_bf
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf1_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_write_ns 
        = (0xfU & (((((((1U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final) 
                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))) 
                        | (2U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f1)))))) 
                       | (7U & ((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right)))) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                   >> 1U)))) | (3U 
                                                & ((- (IData)(
                                                              ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2)))) 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                      >> 2U)))) 
                     | (1U & ((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3)))) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                 >> 3U)))) | (0xeU 
                                              & ((- (IData)(
                                                            ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)) 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left)))) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout) 
                                                    << 1U)))) 
                   | ((- (IData)((1U & (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)) 
                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right))) 
                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right2))) 
                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_left))) 
                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT__fb_right3)))))) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__fbwrite_ff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr_in 
        = ((((1U & (- (IData)(((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2))))) 
             | (2U & (- (IData)(((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)))))) 
            | ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2))))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr))) 
           & (~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1 
        = (1U & ((((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)) 
                   | (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)))) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val) 
                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0 
        = (1U & ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2 
        = (1U & (((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)) 
                  | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen 
        = ((((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)) 
            << 2U) | ((((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)) 
                       << 1U) | ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__wrptr)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B)) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B))
            ? ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout)) 
               | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f1)) 
                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1)))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1pc))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0) 
                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0)) 
                               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0)) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B)) 
                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B)) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B)) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B))
                           ? (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0))) 
                                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout) 
                                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                   & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout)) 
                               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0))) 
                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1pc)) 
                              | ((- (IData)((1U & (
                                                   ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f0)) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0))) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0)))))) 
                                 & (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B))) 
                                       & ((IData)(1U) 
                                          + vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)) 
                                      | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B))) 
                                         & ((IData)(2U) 
                                            + vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))) 
                                     | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B))) 
                                        & ((IData)(3U) 
                                           + vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout))) 
                                    | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B))) 
                                       & ((IData)(4U) 
                                          + vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout)))))
                           : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f0pcff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2)
            ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f2pcff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val_in 
        = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_fetch_val_f2)) 
            | ((- (IData)((1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__fetch_to_f2)) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1))) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0)))))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val))) 
           & (~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc2);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc1);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc_data_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__misc0);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata2);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata1);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata0);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off_in 
        = (7U & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off) 
                         + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off) 
                             + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2off)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off_in 
        = (7U & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off) 
                         + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off) 
                             + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1off)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off_in 
        = (7U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
                  ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc__DOT____Vcellout__faddrf2_ff__dout
                  : ((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                      ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off) 
                         + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset))
                      : ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))
                          ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off) 
                             + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset))
                          : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0off)))));
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__78(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__78\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_sbaddress0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))
            ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren1))) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg 
                                          + ((((1U 
                                                & (- (IData)(
                                                             (0U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                  >> 0x11U)))))) 
                                               | (2U 
                                                  & (- (IData)(
                                                               (1U 
                                                                == 
                                                                (7U 
                                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                    >> 0x11U))))))) 
                                              | (4U 
                                                 & (- (IData)(
                                                              (2U 
                                                               == 
                                                               (7U 
                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                   >> 0x11U))))))) 
                                             | (8U 
                                                & (- (IData)(
                                                             (3U 
                                                              == 
                                                              (7U 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                                  >> 0x11U))))))))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrolff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren)
            ? ((0xcU & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                 >> 0x20U)) << 2U)) 
               | ((2U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x1eU)) << 1U)) 
                  | (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 3U))))) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_din 
        = ((0xff000000U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                    >> 0x1aU)) << 0x18U)) 
           | (((0x780000U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                      >> 0x15U)) << 0x13U)) 
               | ((((0U == (0xffU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x1aU)))) 
                    & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                               >> 0x14U))) << 0x12U) 
                  | ((((0U == (0xffU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                >> 0x1aU)))) 
                       & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x13U))) << 0x11U) 
                     | (0x10000U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x12U)) 
                                    << 0x10U))))) | 
              (0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_wren)
                           ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                      >> 2U)) : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcommand_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_wren)
                       ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_din 
                          >> 0x10U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_reg__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_BD::_combo__TOP__rvfpgasim__swervolf__79(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_combo__TOP__rvfpgasim__swervolf__79\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 3U) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_halt_req) 
                               | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 0xbU)) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                               >> 0xcU)) 
                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                >> 7U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_resume_req))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff_in 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_req_hold)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2)) 
           & (~ ((((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count)) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2)) 
                  & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
                     >> 0x12U)) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_req_in 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_req_hold)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_sent)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_new_cmd_beat_count 
        = (7U & (((6U & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__uncacheable_miss_in))))) 
                  | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_cmd_beat_cnt))) 
                     & ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count)))) 
                 | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_cmd_beat_cnt)) 
                                      & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_act_miss_f2)))))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_beat_count))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__mpvhalt_ff__din 
        = ((0x400U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                      << 9U)) | ((0x200U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                            << 9U)) 
                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns) 
                                     << 8U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                                << 7U) 
                                               | (((((0x7fffffc0U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__exctype_wb_ff__dout) 
                                                         >> 1U)) 
                                                     | (0x3ffffc0U 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                           >> 6U))) 
                                                    | (0xffffffc0U 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout))) 
                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__internal_dbg_halt_mode) 
                                                       & (~ 
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                           >> 1U))) 
                                                      << 6U)) 
                                                  | ((0x1fffffe0U 
                                                      & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                            >> 3U) 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                              << 2U)) 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                             << 4U)) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__core_empty) 
                                                            << 5U))) 
                                                     | ((0x10U 
                                                         & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns))) 
                                                              & (~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                  >> 1U))) 
                                                             << 4U) 
                                                            | (0xfffffff0U 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                                                                     << 4U))))) 
                                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns) 
                                                            << 3U) 
                                                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                               << 2U) 
                                                              | ((2U 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                     >> 2U)) 
                                                                 | (1U 
                                                                    & ((~ 
                                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                         >> 3U)) 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                                                                          >> 8U)))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__halt_ff__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__halt_taken) 
            << 0x15U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__take_halt) 
                          << 0x14U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_halt_idle_any) 
                                        << 0x13U) | 
                                       (((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)) 
                                         << 0x12U) 
                                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_tlu_halted) 
                                            << 0x11U) 
                                           | ((0x7fff0000U 
                                               & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f) 
                                                    << 0x10U) 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                      >> 1U)) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                     << 0x10U))) 
                                              | ((0x3fff8000U 
                                                  & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                                      << 0xfU) 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                        >> 2U))) 
                                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req_ns) 
                                                     << 0xeU) 
                                                    | ((((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_resume_req_f)) 
                                                         & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_run_state_ns) 
                                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_halt_state_ns))) 
                                                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns) 
                                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mpc_halt_state_ns))))) 
                                                        << 0xdU) 
                                                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4) 
                                                           << 0xcU) 
                                                          | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_tlu_i0_valid_e4) 
                                                                 & (~ 
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                     >> 0x11U))) 
                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__dcsr_ff__dout)) 
                                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__rfpc_i0_e4))) 
                                                              << 0xbU) 
                                                             | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__debug_halt_req) 
                                                                 << 0xaU) 
                                                                | (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))) 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_chain_masked_e4)) 
                                                                     | ((- (IData)(
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_hit_e4) 
                                                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i0_trigger_hit_e4))))) 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__i1_trigger_chain_masked_e4))) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_tlu_wr_pause_wb) 
                                                                       << 5U) 
                                                                      | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state) 
                                                                          << 4U) 
                                                                         | ((8U 
                                                                             & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__trigger_hit_dmode_e4) 
                                                                                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__ebreak_to_debug_mode_e4)) 
                                                                                << 3U) 
                                                                                | (0xfffffff8U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                                & ((~ 
                                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                                                >> 2U)) 
                                                                                << 3U))))) 
                                                                            | ((4U 
                                                                                & (((0x7ffffffcU 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                                >> 1U)) 
                                                                                | (0xfffffffcU 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout)) 
                                                                                & ((~ 
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                                >> 0x11U)) 
                                                                                << 2U))) 
                                                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dcsr_single_step_running) 
                                                                                << 1U) 
                                                                                | (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                                                                >> 1U))))))))))))))))))));
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__80(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__80\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp1680[5];
    // Body
    __Vtemp1680[0U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U]) 
                         | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[5U] 
                                << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U] 
                                             >> 8U)))) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 2U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                               << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                                            >> 0x10U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 3U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                                        >> 0x18U))));
    __Vtemp1680[1U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U]) 
                         | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[6U] 
                                << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[5U] 
                                             >> 8U)))) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 2U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xaU] 
                               << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                                            >> 0x10U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 3U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xeU] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                                        >> 0x18U))));
    __Vtemp1680[2U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U]) 
                         | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[7U] 
                                << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[6U] 
                                             >> 8U)))) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 2U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xbU] 
                               << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xaU] 
                                            >> 0x10U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 3U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xfU] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xeU] 
                                        >> 0x18U))));
    __Vtemp1680[3U] = (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U]) 
                         | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                               >> 1U) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                                << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[7U] 
                                             >> 8U)))) 
                        | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                              >> 2U) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                               << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xbU] 
                                            >> 0x10U)))) 
                       | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                             >> 3U) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                          & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0x10U] 
                              << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xfU] 
                                        >> 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[0U] 
        = __Vtemp1680[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[1U] 
        = __Vtemp1680[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[2U] 
        = __Vtemp1680[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[3U] 
        = __Vtemp1680[3U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[4U] 
        = (0xffU & (((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U]) 
                      | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                            >> 1U) 
                                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
                             << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
                                          >> 8U)))) 
                     | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                           >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                        & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
                            << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
                                         >> 0x10U)))) 
                    | ((- (IData)((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_rd_hit_q) 
                                          >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff))))) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0x10U] 
                          >> 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifu_debug_data_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x3ffffffffULL & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_rd_en_ff)
                              ? ((((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                            >> 4U))))) 
                                     & (((QData)((IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ictag_debug_rd_data 
                                                             >> 0x14U)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0xfffff000U 
                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ictag_debug_rd_data 
                                                               << 0xcU)) 
                                                           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__way_status) 
                                                               << 4U) 
                                                              | (0U 
                                                                 != 
                                                                 (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_tag_valid_unq) 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout)) 
                                                                  & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_debug_rd_en_ff))))))))))) 
                                    | ((- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                              >> 8U))))) 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[0U]))))) 
                                   | ((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                             >> 7U))))) 
                                      & (((QData)((IData)(
                                                          vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[3U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[2U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[1U])) 
                                               >> 2U))))) 
                                  | ((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                            >> 6U))))) 
                                     & (((QData)((IData)(
                                                         vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[4U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[3U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[2U])) 
                                              >> 4U))))) 
                                 | ((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__ifu_debug_sel_ff__dout) 
                                                           >> 5U))))) 
                                    & (((QData)((IData)(
                                                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[4U])) 
                                        << 0x1aU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[3U])) 
                                        >> 6U)))) : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_ic_debug_rd_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_error_f2 
        = ((0xc0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[4U]) 
           | ((0x30U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[3U]) 
              | ((0xcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[2U]) 
                 | (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[1U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U] 
        = ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[0U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U] 
        = ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[2U] 
               << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[1U] 
                            >> 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U] 
        = ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & (IData)((((QData)((IData)(((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[4U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[3U] 
                                           >> 6U)))) 
                       << 0x20U) | (QData)((IData)(
                                                   ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[3U] 
                                                     << 0x1cU) 
                                                    | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[2U] 
                                                       >> 4U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U] 
        = ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__sel_ic_data)))) 
           & (IData)(((((QData)((IData)(((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[4U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[3U] 
                                            >> 6U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[3U] 
                                                      << 0x1cU) 
                                                     | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ic_rd_data[2U] 
                                                        >> 4U))))) 
                      >> 0x20U)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2parity));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1parity));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parityff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_error_f2)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0parity));
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q2[3U];
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q1[3U];
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__qwen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_final_data[3U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__q0[3U];
    }
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__81(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__81\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcommand_regno_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_wren) 
                       | ((((0U == (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                             >> 0x18U))) 
                            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                               >> 0x13U)) & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
                          & (~ (IData)((0U != (7U & 
                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                >> 8U)))))))
                       ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_din
                       : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcommand_regno_reg__dout)));
}
