// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_BD.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vrvfpgasim_BD::_sequent__TOP__rvfpgasim__swervolf__22(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_sequent__TOP__rvfpgasim__swervolf__22\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1aU)))) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U])) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[0U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[0U] 
                                              >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                        >> 6U)) == (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((0x7fffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                              >> 5U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                        << 1U))) | 
              (((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                       >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                         >> 1U))) << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                            >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                            >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                   << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xcU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                     << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                  >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                             >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                       >> 6U)))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x12U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xeU)))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                         << 0x1aU) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                           >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           << 0x1aU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                             >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x14U)))) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             << 0x1aU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                              >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U]) 
                  == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                            >> 0x1aU)))) << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               << 0x1aU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                 >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 << 0x1aU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 6U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[1U] 
                                           >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                        >> 0xcU)) == (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((0x1ffffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                             >> 0xbU) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                         << 1U))) | 
              (((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                       >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 1U))) 
               << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                               << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                            >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                               << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                            >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                   << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x12U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                     << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                  >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                       << 0x14U) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                       >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xeU)))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         << 0x14U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                           >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                              >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           << 0x14U) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                             >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U]) 
                  == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                            >> 0x14U)))) << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             << 0x14U) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                               >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 6U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1aU)))) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                 >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                           >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 << 0x14U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                   >> 0xcU)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[2U] 
                                             >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
              | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                        >> 0x12U)) == (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((0x7ffeU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                           >> 0x11U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask) 
                                        << 1U))) | 
              (((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                       >> 0x13U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                            >> 1U))) 
               << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((3U == (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                               << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x14U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 2U)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((7U == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                               << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                           >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x15U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 3U)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfU == (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                   << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x16U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 4U)))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x17U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 5U)))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fU == (0x3fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x18U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 6U)))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fU == (0x7fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x19U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 7U)))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffU == (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                     << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1aU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 8U)))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffU == (0x1ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1bU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 9U)))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffU == (0x3ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1cU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xaU)))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffU == (0x7ffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1dU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xbU)))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffU == (0xfffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1eU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xcU)))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffU == (0x1fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                         >> 0x1fU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0xdU)))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffU == (0x3fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U]) 
                  == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                            >> 0xeU)))) << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffU == (0x7fffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 1U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0xfU)))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffU == (0xffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                         >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 2U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x10U)))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffU == (0x1ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 3U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x11U)))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffU == (0x3ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 4U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x12U)))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffU == (0x7ffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 5U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x13U)))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffU == (0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                           << 0xeU) 
                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                             >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 6U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x14U)))) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffU == (0x1fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 7U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x15U)))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffU == (0x3fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 8U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x16U)))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffU == (0x7fffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 9U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                           >> 0x17U)))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xffffffU == (0xffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                             << 0xeU) 
                                            | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                               >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xaU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x18U)))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1ffffffU == (0x1ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xbU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x19U)))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3ffffffU == (0x3ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xcU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1aU)))) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7ffffffU == (0x7ffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xdU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1bU)))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0xfffffffU == (0xfffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                               << 0xeU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                 >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xeU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1cU)))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x1fffffffU == (0x1fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0xfU)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                             >> 0x1dU)))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x3fffffffU == (0x3fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0x10U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0x1eU)))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec) 
           | ((((0x7fffffffU == (0x7fffffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                 << 0xeU) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                   >> 0x12U)))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__masken_or_fullmask)) 
               | ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                         >> 0x11U)) == (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_match_data[3U] 
                                              >> 0x1fU)))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifc_fetch_req_f2) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__exu_mp_valid))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellinp__btb_lru_ff__din)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__btb_lru_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_access_fault_f2 
        = (0xffU & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_region_acc_fault_f2))) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_bus_acc_fault_f2)) 
                    & (- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__first_offset 
        = ((0x7ffffffcU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B) 
                            << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                      >> 1U))) | ((
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0_shift_6B) 
                                                    << 1U) 
                                                   | (0xfffffffeU 
                                                      & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B) 
                                                           << 1U) 
                                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)) 
                                                         | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B) 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B)) 
                                                              << 1U) 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)) 
                                                            & ((~ 
                                                                ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                                 >> 2U)) 
                                                               << 1U))))) 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0_shift_6B) 
                                                     | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_2B) 
                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)) 
                                                        | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_4B) 
                                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_6B)) 
                                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_8B)) 
                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)) 
                                                           & (~ 
                                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val) 
                                                               >> 1U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__consume_fb0 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f0val)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1pc 
        = (0x7fffffffU & (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B))) 
                             & ((IData)(1U) + vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)) 
                            | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B))) 
                               & ((IData)(2U) + vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout))) 
                           | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B))) 
                              & ((IData)(3U) + vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout))) 
                          | ((- (IData)((1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B)) 
                                                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B))) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B)))))) 
                             & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT____Vcellout__f1pcff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__second_offset 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B)) 
            << 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val 
        = ((((0x7fU & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B))) 
                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val) 
                          >> 1U))) | (0x3fU & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B))) 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val) 
                                                  >> 2U)))) 
            | (0x1fU & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B))) 
                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val) 
                           >> 3U)))) | ((- (IData)(
                                                   (1U 
                                                    & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_2B)) 
                                                        & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_4B))) 
                                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1_shift_6B)))))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[0U] 
        = ((0x80000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[0U]) 
           | (0x7fffffffU & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_push))) 
                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_rs_call_target_f2) 
                             | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rs_pop))) 
                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[1U] 
                                    << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[0U] 
                                              >> 0x1fU))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_btb_target_f2 
        = (0x7fffffffU & ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_sel_data_f2) 
                                       >> 1U)))) ? 
                          vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_out[0U]
                           : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__bp_btb_target_adder_f2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_rs1_d 
        = ((((- (IData)((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass))))))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i1_rs1_d) 
            | (0xfffffffeU & ((- (IData)((1U & ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                           >> 0x2aU)))))) 
                              & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                          >> 1U)) << 1U)))) 
           | ((- (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_rs1_bypass_data_d));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_rs2_d 
        = ((((- (IData)((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass))))))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i1_rs2_d) 
            | ((- (IData)((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass))))))) 
               & (((((- (IData)((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 0x2eU))))) 
                     & ((0xfffff000U & ((- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                                       >> 0x1fU)))) 
                                        << 0xcU)) | 
                        (0xfffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                   >> 0x14U)))) | (0x1fU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                             >> 0x2cU))))) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                                         >> 0x14U)))) 
                   | ((- (IData)((1U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                 >> 0x17U)) 
                                        & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                   >> 0x2bU)))))) 
                      & ((0xfff00000U & ((- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                                        >> 0x1fU)))) 
                                         << 0x14U)) 
                         | ((0xff000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1) 
                            | ((0x800U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                          >> 9U)) | 
                               (0x7feU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                          >> 0x14U))))))) 
                  | (0xfffff000U & ((- (IData)((1U 
                                                & ((~ (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                               >> 0x17U))) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                              >> 0x2bU)))))) 
                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1))))) 
           | ((- (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_rs2_bypass_data_d));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_secondary_d 
        = ((((((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                          >> 0x31U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                         >> 2U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                   >> 3U))) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1_e2)) 
               | (((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                            >> 0x31U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                           >> 2U) | 
                                          ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                           >> 3U))) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1_e2))) 
              | (((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x31U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                         >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1_e3))) 
             | (((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                          >> 0x31U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                        >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1_e3))) 
            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__non_block_case_d) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_depend_i0_d))) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass 
        = ((((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d)) 
            << 9U) | ((((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d)) 
                       << 8U) | ((((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d)) 
                                  << 7U) | ((((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d)) 
                                             << 6U) 
                                            | ((((5U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                                 << 5U) 
                                                & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                     << 5U) 
                                                    | (0xffffffe0U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                          << 3U))) 
                                                   | (0xffffffe0U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                         << 2U)))) 
                                               | ((((6U 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                                    << 4U) 
                                                   & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                        << 4U) 
                                                       | (0xfffffff0U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                             << 2U))) 
                                                      | (0xfffffff0U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                            << 1U)))) 
                                                  | ((((7U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                                       << 3U) 
                                                      & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                            << 3U) 
                                                           | (0xfffffff8U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                                 << 1U))) 
                                                          | (0xfffffff8U 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d))) 
                                                         | (0xfffffff8U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                               << 2U)))) 
                                                     | ((((8U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                                          << 2U) 
                                                         & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                               << 2U) 
                                                              | (0xfffffffcU 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d))) 
                                                             | (0x7ffffffcU 
                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                                   >> 1U))) 
                                                            | (0xfffffffcU 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                                  << 1U)))) 
                                                        | ((((9U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                                             << 1U) 
                                                            & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                                  << 1U) 
                                                                 | (0x7ffffffeU 
                                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                                       >> 1U))) 
                                                                | (0x3ffffffeU 
                                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                                      >> 2U))) 
                                                               | (0xfffffffeU 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d)))) 
                                                           | ((0xaU 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                                              & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                                      >> 2U)) 
                                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                                     >> 3U)) 
                                                                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                                    >> 1U))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p 
        = ((0x7fdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p) 
           | (0xfffffe00U & ((((((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                            >> 0x29U)) 
                                   | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x28U))) 
                                  & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                 << 9U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                           << 7U)) 
                               | (((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x29U)) 
                                     | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x28U))) 
                                    & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                   << 9U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                             << 7U))) 
                              | (((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x27U))) 
                                    & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 0x29U)) 
                                       | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                  >> 0x28U)))) 
                                   & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                  << 9U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                            << 7U))) 
                             | (((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                               >> 0x27U))) 
                                   & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 0x29U)) 
                                      | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                 >> 0x28U)))) 
                                  & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                 << 9U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                           << 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1 
        = ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
           | (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e2 
        = ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
           | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xff87ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xfff80000U & (((0xffc00000U & ((((IData)(
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x31U)) 
                                                & (5U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                               << 0x16U) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                 << 0x15U))) 
                              | (0xffe00000U & ((((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                           >> 0x31U)) 
                                                  & (6U 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                                 << 0x15U) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                   << 0x14U)))) 
                             | ((0xfff00000U & ((((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                           >> 0x31U)) 
                                                  & (5U 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                 << 0x14U) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                   << 0x13U))) 
                                | (0xfff80000U & ((
                                                   ((IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 0x31U)) 
                                                    & (6U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                   << 0x13U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                     << 0x12U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xfff807ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xfffff800U & (((0xfffc0000U & ((((IData)(
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x31U)) 
                                                & (1U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                               << 0x12U) 
                                              & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                   << 0x11U) 
                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                     << 0x10U)) 
                                                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                    << 0xfU)))) 
                              | ((0xfffe0000U & ((((IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                            >> 0x31U)) 
                                                   & (2U 
                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                                  << 0x11U) 
                                                 & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                      << 0x10U) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                        << 0xfU)) 
                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                       << 0xeU)))) 
                                 | ((0xffff0000U & 
                                     ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 0x31U)) 
                                        & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                       << 0x10U) & 
                                      ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                         << 0xfU) | 
                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                         << 0xeU)) 
                                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                          << 0xdU)))) 
                                    | (0xffff8000U 
                                       & ((((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                     >> 0x31U)) 
                                            & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                           << 0xfU) 
                                          & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                               << 0xeU) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                 << 0xdU)) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                << 0xcU))))))) 
                             | ((0xffffc000U & ((((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                           >> 0x31U)) 
                                                  & (1U 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                 << 0xeU) 
                                                & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                     << 0xdU) 
                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                       << 0xcU)) 
                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                      << 0xbU)))) 
                                | ((0xffffe000U & (
                                                   (((IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                              >> 0x31U)) 
                                                     & (2U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                    << 0xdU) 
                                                   & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                        << 0xcU) 
                                                       | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                          << 0xbU)) 
                                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                         << 0xaU)))) 
                                   | ((0xfffff000U 
                                       & ((((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                     >> 0x31U)) 
                                            & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                           << 0xcU) 
                                          & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                               << 0xbU) 
                                              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                 << 0xaU)) 
                                             | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                << 9U)))) 
                                      | (0xfffff800U 
                                         & ((((IData)(
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                       >> 0x31U)) 
                                              & (4U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                             << 0xbU) 
                                            & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                 << 0xaU) 
                                                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                   << 9U)) 
                                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                  << 8U))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass 
        = ((((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d)) 
            << 9U) | ((((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d)) 
                       << 8U) | ((((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d)) 
                                  << 7U) | ((((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d)) 
                                             << 6U) 
                                            | ((((5U 
                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                                 << 5U) 
                                                & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                     << 5U) 
                                                    | (0xffffffe0U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                          << 3U))) 
                                                   | (0xffffffe0U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                         << 2U)))) 
                                               | ((((6U 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                                    << 4U) 
                                                   & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                        << 4U) 
                                                       | (0xfffffff0U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                             << 2U))) 
                                                      | (0xfffffff0U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                            << 1U)))) 
                                                  | ((((7U 
                                                        == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                                       << 3U) 
                                                      & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                            << 3U) 
                                                           | (0xfffffff8U 
                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                                 << 1U))) 
                                                          | (0xfffffff8U 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d))) 
                                                         | (0xfffffff8U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                               << 2U)))) 
                                                     | ((((8U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                                          << 2U) 
                                                         & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                               << 2U) 
                                                              | (0xfffffffcU 
                                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d))) 
                                                             | (0x7ffffffcU 
                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                                   >> 1U))) 
                                                            | (0xfffffffcU 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                                  << 1U)))) 
                                                        | ((((9U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                                             << 1U) 
                                                            & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                                  << 1U) 
                                                                 | (0x7ffffffeU 
                                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                                       >> 1U))) 
                                                                | (0x3ffffffeU 
                                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                                      >> 2U))) 
                                                               | (0xfffffffeU 
                                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d)))) 
                                                           | ((0xaU 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                                              & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                                      >> 2U)) 
                                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                                     >> 3U)) 
                                                                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                                    >> 1U))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1 
        = ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
           | (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e2 
        = ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
           | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rden) 
              & ((0U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                               >> 2U))) | (0U == (7U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                     >> 2U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rden) 
               & ((1U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                >> 2U))) | (1U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                      >> 2U))))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rden) 
               & ((2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                >> 2U))) | (2U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                      >> 2U))))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rden) 
               & ((3U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                >> 2U))) | (3U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                      >> 2U))))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rden) 
               & ((4U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                >> 2U))) | (4U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                      >> 2U))))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rden) 
               & ((5U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                >> 2U))) | (5U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                      >> 2U))))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rden) 
               & ((6U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                >> 2U))) | (6U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                      >> 2U))))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__rden_bank)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rden) 
               & ((7U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_end_addr_dc1 
                                >> 2U))) | (7U == (7U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__full_addr_dc1 
                                                      >> 2U))))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__picm_wren 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf_addr_in_pic_any));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtrff__DOT____Vcellinp__dffs__din 
        = (7U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any))
                  ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
              & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
               & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
               & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
               & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
               & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
               & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
               & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf_reqvld_flushed_any)) 
               & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__RdPtr))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_wren 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_stbuf_commit_any) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf_addr_in_pic_any)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data 
        = (((((0xffU & ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_unsign) 
                                    & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_sz))))) 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn)) 
              | (0xffffU & ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_unsign) 
                                        & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_sz))))) 
                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn))) 
             | ((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_unsign)) 
                            & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_sz))))) 
                & ((0xffffff00U & ((- (IData)((1U & 
                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn 
                                                >> 7U)))) 
                                   << 8U)) | (0xffU 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn)))) 
            | ((- (IData)(((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_unsign)) 
                           & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_sz))))) 
               & ((0xffff0000U & ((- (IData)((1U & 
                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn 
                                               >> 0xfU)))) 
                                  << 0x10U)) | (0xffffU 
                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn)))) 
           | ((- (IData)((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_sz)))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_data_unalgn));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write)))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write) 
                                         >> 1U)))) 
                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                           << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                        >> 0xaU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write) 
                                         >> 2U)))) 
                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                           << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                       >> 0x14U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write) 
                                         >> 3U)))) 
                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                           << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                     >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write) 
                                         >> 4U)))) 
                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                           << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                        >> 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write) 
                                         >> 5U)))) 
                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                           << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                       >> 0x12U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write) 
                                         >> 6U)))) 
                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                           << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0x1cU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr 
        = (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr) 
                    | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write) 
                                         >> 7U)))) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                          >> 6U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_valid 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_lo) 
           & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_dual)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_valid_hi)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_error 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_lo) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_dual) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_nonblock_load_data_error_hi)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | ((((~ (IData)((0U != (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))) 
               & (2U == (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | (((((~ (IData)((0U != (0xffU & ((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                      >> 8U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec) 
                       >> 1U))) & (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 3U)))) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 1U))) << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | (((((~ (IData)((0U != (0xffU & ((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                      >> 0x10U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec) 
                       >> 2U))) & (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 6U)))) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 2U))) << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | (((((~ (IData)((0U != (0xffU & ((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                      >> 0x18U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec) 
                       >> 3U))) & (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 9U)))) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 3U))) << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | (((((~ (IData)((0U != (0xffU & ((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                      >> 0x20U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec) 
                       >> 4U))) & (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 0xcU)))) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 4U))) << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | (((((~ (IData)((0U != (0xffU & ((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                      >> 0x28U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec) 
                       >> 5U))) & (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 0xfU)))) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 5U))) << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | (((((~ (IData)((0U != (0xffU & ((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                      >> 0x30U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec) 
                       >> 6U))) & (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 0x12U)))) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 6U))) << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec)) 
           | (((((~ (IData)((0U != (0xffU & ((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                                      >> 0x38U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))))))) 
                 & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec) 
                       >> 7U))) & (2U == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                >> 0x15U)))) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                     >> 7U))) << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Dec_value 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Enc_value 
        = ((6U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Enc_value)) 
           | (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Dec_value) 
                       >> 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Dec_value) 
                                 >> 3U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Dec_value) 
                                            >> 5U)) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Dec_value) 
                       >> 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Enc_value 
        = ((5U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Enc_value)) 
           | (2U & ((((0x7ffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Dec_value) 
                                      >> 1U)) | (0x3ffffffeU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Dec_value) 
                                                    >> 2U))) 
                     | (0x7fffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Dec_value) 
                                      >> 5U))) | (0x3fffffeU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Dec_value) 
                                                     >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Enc_value 
        = ((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Enc_value)) 
           | (4U & ((((0x3ffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Dec_value) 
                                      >> 2U)) | (0x1ffffffcU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Dec_value) 
                                                    >> 3U))) 
                     | (0xffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Dec_value) 
                                      >> 4U))) | (0x7fffffcU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Dec_value) 
                                                     >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Vfuncout 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Enc_value;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__13__Vfuncout;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                     & (~ (IData)((0U != (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger))))))) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                     & (~ (IData)((0U != (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger))))))) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (2U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                     & ((~ (IData)((0U != (0xffU & 
                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                            & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                       >> 8U))))))) 
                        << 1U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
                                   << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (2U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                     & ((~ (IData)((0U != (0xffU & 
                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                            & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                       >> 8U))))))) 
                        << 1U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
                                   << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (4U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                     & ((~ (IData)((0U != (0xffU & 
                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                            & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                       >> 0x10U))))))) 
                        << 2U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
                                   << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (4U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                     & ((~ (IData)((0U != (0xffU & 
                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                            & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                       >> 0x10U))))))) 
                        << 2U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
                                   << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (8U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                     & ((~ (IData)((0U != (0xffU & 
                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                            & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                       >> 0x18U))))))) 
                        << 3U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
                                   << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (8U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                     & ((~ (IData)((0U != (0xffU & 
                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                            & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                       >> 0x18U))))))) 
                        << 3U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
                                   << 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x10U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                        & ((~ (IData)((0U != (0xffU 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x20U))))))) 
                           << 4U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
                                      << 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x10U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                        & ((~ (IData)((0U != (0xffU 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x20U))))))) 
                           << 4U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
                                      << 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x20U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                        & ((~ (IData)((0U != (0xffU 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x28U))))))) 
                           << 5U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
                                      << 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x20U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                        & ((~ (IData)((0U != (0xffU 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x28U))))))) 
                           << 5U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
                                      << 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x40U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                        & ((~ (IData)((0U != (0xffU 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x30U))))))) 
                           << 6U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
                                      << 6U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x40U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                        & ((~ (IData)((0U != (0xffU 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x30U))))))) 
                           << 6U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
                                      << 6U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x80U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                        & ((~ (IData)((0U != (0xffU 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x38U))))))) 
                           << 7U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)) 
                                      << 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x80U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                        & ((~ (IData)((0U != (0xffU 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x38U))))))) 
                           << 7U)) & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)) 
                                      << 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x100U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                         & ((~ (IData)((0U != (0xffU 
                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                   >> 8U) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                            << 8U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                           >> 1U)) 
                                       << 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x100U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                         & ((~ (IData)((0U != (0xffU 
                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                   >> 8U) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                            << 8U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                           >> 1U)) 
                                       << 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x200U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                         & ((~ (IData)((0U != (0xffU 
                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                   >> 8U) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                             >> 8U))))))) 
                            << 9U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                           >> 1U)) 
                                       << 9U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x200U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                         & ((~ (IData)((0U != (0xffU 
                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                   >> 8U) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                             >> 8U))))))) 
                            << 9U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                           >> 1U)) 
                                       << 9U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x400U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                         & ((~ (IData)((0U != (0xffU 
                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                   >> 8U) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                             >> 0x10U))))))) 
                            << 0xaU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                             >> 1U)) 
                                         << 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x400U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                         & ((~ (IData)((0U != (0xffU 
                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                   >> 8U) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                             >> 0x10U))))))) 
                            << 0xaU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                             >> 1U)) 
                                         << 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x800U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                         & ((~ (IData)((0U != (0xffU 
                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                   >> 8U) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                             >> 0x18U))))))) 
                            << 0xbU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                             >> 1U)) 
                                         << 0xbU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x800U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                         & ((~ (IData)((0U != (0xffU 
                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                   >> 8U) 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                             >> 0x18U))))))) 
                            << 0xbU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                             >> 1U)) 
                                         << 0xbU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x1000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                          & ((~ (IData)((0U != (0xffU 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                    >> 8U) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                              >> 0x20U))))))) 
                             << 0xcU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 1U)) 
                                          << 0xcU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x1000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                          & ((~ (IData)((0U != (0xffU 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                    >> 8U) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                              >> 0x20U))))))) 
                             << 0xcU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 1U)) 
                                          << 0xcU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x2000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                          & ((~ (IData)((0U != (0xffU 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                    >> 8U) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                              >> 0x28U))))))) 
                             << 0xdU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 1U)) 
                                          << 0xdU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x2000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                          & ((~ (IData)((0U != (0xffU 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                    >> 8U) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                              >> 0x28U))))))) 
                             << 0xdU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 1U)) 
                                          << 0xdU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x4000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                          & ((~ (IData)((0U != (0xffU 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                    >> 8U) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                              >> 0x30U))))))) 
                             << 0xeU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 1U)) 
                                          << 0xeU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x4000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                          & ((~ (IData)((0U != (0xffU 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                    >> 8U) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                              >> 0x30U))))))) 
                             << 0xeU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 1U)) 
                                          << 0xeU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x8000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                          & ((~ (IData)((0U != (0xffU 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                    >> 8U) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                              >> 0x38U))))))) 
                             << 0xfU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 1U)) 
                                          << 0xfU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x8000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                          & ((~ (IData)((0U != (0xffU 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                    >> 8U) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                              >> 0x38U))))))) 
                             << 0xfU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 1U)) 
                                          << 0xfU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x10000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                           & ((~ (IData)((0U != (0xffU 
                                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                     >> 0x10U) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                              << 0x10U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                >> 2U)) 
                                            << 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x10000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                           & ((~ (IData)((0U != (0xffU 
                                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                     >> 0x10U) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                              << 0x10U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                >> 2U)) 
                                            << 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x20000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                           & ((~ (IData)((0U != (0xffU 
                                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                     >> 0x10U) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                               >> 8U))))))) 
                              << 0x11U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                >> 2U)) 
                                            << 0x11U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x20000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                           & ((~ (IData)((0U != (0xffU 
                                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                     >> 0x10U) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                               >> 8U))))))) 
                              << 0x11U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                >> 2U)) 
                                            << 0x11U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x40000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                           & ((~ (IData)((0U != (0xffU 
                                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                     >> 0x10U) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                               >> 0x10U))))))) 
                              << 0x12U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                >> 2U)) 
                                            << 0x12U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x40000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                           & ((~ (IData)((0U != (0xffU 
                                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                     >> 0x10U) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                               >> 0x10U))))))) 
                              << 0x12U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                >> 2U)) 
                                            << 0x12U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x80000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                           & ((~ (IData)((0U != (0xffU 
                                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                     >> 0x10U) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                               >> 0x18U))))))) 
                              << 0x13U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                >> 2U)) 
                                            << 0x13U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x80000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                           & ((~ (IData)((0U != (0xffU 
                                                 & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                     >> 0x10U) 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                               >> 0x18U))))))) 
                              << 0x13U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                >> 2U)) 
                                            << 0x13U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x100000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                            & ((~ (IData)((0U != (0xffU 
                                                  & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                      >> 0x10U) 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                                >> 0x20U))))))) 
                               << 0x14U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                 >> 2U)) 
                                             << 0x14U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x100000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                            & ((~ (IData)((0U != (0xffU 
                                                  & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                      >> 0x10U) 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                                >> 0x20U))))))) 
                               << 0x14U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                 >> 2U)) 
                                             << 0x14U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x200000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                            & ((~ (IData)((0U != (0xffU 
                                                  & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                      >> 0x10U) 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                                >> 0x28U))))))) 
                               << 0x15U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                 >> 2U)) 
                                             << 0x15U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x200000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                            & ((~ (IData)((0U != (0xffU 
                                                  & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                      >> 0x10U) 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                                >> 0x28U))))))) 
                               << 0x15U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                 >> 2U)) 
                                             << 0x15U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x400000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                            & ((~ (IData)((0U != (0xffU 
                                                  & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                      >> 0x10U) 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                                >> 0x30U))))))) 
                               << 0x16U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                 >> 2U)) 
                                             << 0x16U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xffbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x400000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                            & ((~ (IData)((0U != (0xffU 
                                                  & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                      >> 0x10U) 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                                >> 0x30U))))))) 
                               << 0x16U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                 >> 2U)) 
                                             << 0x16U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x800000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                            & ((~ (IData)((0U != (0xffU 
                                                  & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                      >> 0x10U) 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                                >> 0x38U))))))) 
                               << 0x17U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                 >> 2U)) 
                                             << 0x17U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x800000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                            & ((~ (IData)((0U != (0xffU 
                                                  & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                      >> 0x10U) 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                                >> 0x38U))))))) 
                               << 0x17U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                 >> 2U)) 
                                             << 0x17U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x1000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                             & ((~ (IData)((0U != (0xffU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                       >> 0x18U) 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                                << 0x18U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                  >> 3U)) 
                                              << 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfeffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x1000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                             & ((~ (IData)((0U != (0xffU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                       >> 0x18U) 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger)))))) 
                                << 0x18U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                  >> 3U)) 
                                              << 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x2000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                             & ((~ (IData)((0U != (0xffU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                       >> 0x18U) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                                 >> 8U))))))) 
                                << 0x19U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                  >> 3U)) 
                                              << 0x19U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfdffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x2000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                             & ((~ (IData)((0U != (0xffU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                       >> 0x18U) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                                 >> 8U))))))) 
                                << 0x19U)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                  >> 3U)) 
                                              << 0x19U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x4000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                             & ((~ (IData)((0U != (0xffU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                       >> 0x18U) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                                 >> 0x10U))))))) 
                                << 0x1aU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                  >> 3U)) 
                                              << 0x1aU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x4000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                             & ((~ (IData)((0U != (0xffU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                       >> 0x18U) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                                 >> 0x10U))))))) 
                                << 0x1aU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                  >> 3U)) 
                                              << 0x1aU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x8000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                             & ((~ (IData)((0U != (0xffU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                       >> 0x18U) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                                 >> 0x18U))))))) 
                                << 0x1bU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                  >> 3U)) 
                                              << 0x1bU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xf7ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x8000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                             & ((~ (IData)((0U != (0xffU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                       >> 0x18U) 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                                 >> 0x18U))))))) 
                                << 0x1bU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                  >> 3U)) 
                                              << 0x1bU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x10000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                              & ((~ (IData)((0U != 
                                             (0xffU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                  >> 0x18U) 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x20U))))))) 
                                 << 0x1cU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                   >> 3U)) 
                                               << 0x1cU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x10000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                              & ((~ (IData)((0U != 
                                             (0xffU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                  >> 0x18U) 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x20U))))))) 
                                 << 0x1cU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                   >> 3U)) 
                                               << 0x1cU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x20000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                              & ((~ (IData)((0U != 
                                             (0xffU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                  >> 0x18U) 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x28U))))))) 
                                 << 0x1dU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                   >> 3U)) 
                                               << 0x1dU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xdfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x20000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                              & ((~ (IData)((0U != 
                                             (0xffU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                  >> 0x18U) 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x28U))))))) 
                                 << 0x1dU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                   >> 3U)) 
                                               << 0x1dU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x40000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                              & ((~ (IData)((0U != 
                                             (0xffU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                  >> 0x18U) 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x30U))))))) 
                                 << 0x1eU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                   >> 3U)) 
                                               << 0x1eU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x40000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                              & ((~ (IData)((0U != 
                                             (0xffU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                  >> 0x18U) 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x30U))))))) 
                                 << 0x1eU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                   >> 3U)) 
                                               << 0x1eU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo) 
           | (0x80000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                              & ((~ (IData)((0U != 
                                             (0xffU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_lo 
                                                  >> 0x18U) 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x38U))))))) 
                                 << 0x1fU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                   >> 3U)) 
                                               << 0x1fU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi) 
           | (0x80000000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                              & ((~ (IData)((0U != 
                                             (0xffU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvec_hi 
                                                  >> 0x18U) 
                                                 & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_younger 
                                                            >> 0x38U))))))) 
                                 << 0x1fU)) & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                   >> 3U)) 
                                               << 0x1fU))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[0U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[1U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[2U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[3U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[4U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[5U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[6U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_data_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_datain[7U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_dataff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_fn_dc2 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_fn_dc2) 
           | (0xffU & ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)))
                        ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi 
                           | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo)
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_dc2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_fn_dc2 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_fn_dc2) 
           | (0xff00U & (((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)))
                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi 
                               | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo) 
                              >> 8U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_dc2 
                                        >> 8U)) << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_fn_dc2 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_fn_dc2) 
           | (0xff0000U & (((4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)))
                             ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi 
                                 | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo) 
                                >> 0x10U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_dc2 
                                             >> 0x10U)) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_fn_dc2 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_fn_dc2) 
           | (0xff000000U & (((8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_hi) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_hi_lo)))
                               ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_hi 
                                   | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_lo) 
                                  >> 0x18U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_dc2 
                                               >> 0x18U)) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_fn_dc2 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_fn_dc2) 
           | (0xffU & ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)))
                        ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi 
                           | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo)
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_dc2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_fn_dc2 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_fn_dc2) 
           | (0xff00U & (((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)))
                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi 
                               | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo) 
                              >> 8U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_dc2 
                                        >> 8U)) << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_fn_dc2 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_fn_dc2) 
           | (0xff0000U & (((4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)))
                             ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi 
                                 | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo) 
                                >> 0x10U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_dc2 
                                             >> 0x10U)) 
                           << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_fn_dc2 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_fn_dc2) 
           | (0xff000000U & (((8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_hi) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwdbyteen_lo_lo)))
                               ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_hi 
                                   | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_lo) 
                                  >> 0x18U) : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_dc2 
                                               >> 0x18U)) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3 
        = ((0xffffffffffffff00ULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3)
                                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3
                                            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_corr_dout_dc3)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3 
        = ((0xffffffffffff00ffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
                                                    >> 8U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                >> 8U)
                                             : (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_corr_dout_dc3 
                                                        >> 8U))))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3 
        = ((0xffffffffff00ffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
                                                    >> 0x10U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                >> 0x10U)
                                             : (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_corr_dout_dc3 
                                                        >> 0x10U))))))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3 
        = ((0xffffffff00ffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
                                                    >> 0x18U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                >> 0x18U)
                                             : (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_corr_dout_dc3 
                                                        >> 0x18U))))))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3 
        = ((0xffffff00ffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3) 
           | ((QData)((IData)((0xffU & ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
                                                    >> 0x20U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                             ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3
                                             : (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_corr_dout_dc3 
                                                        >> 0x20U))))))) 
              << 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3 
        = ((0xffff00ffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3) 
           | ((QData)((IData)((0xffU & ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
                                                    >> 0x28U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                >> 8U)
                                             : (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_corr_dout_dc3 
                                                        >> 0x28U))))))) 
              << 0x28U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3 
        = ((0xff00ffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3) 
           | ((QData)((IData)((0xffU & ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
                                                    >> 0x30U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                >> 0x10U)
                                             : (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_corr_dout_dc3 
                                                        >> 0x30U))))))) 
              << 0x30U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3 
        = ((0xffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3) 
           | ((QData)((IData)((0xffU & ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwdbyteen_dc3))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__stbuf_fwddata_dc3 
                                                    >> 0x38U))
                                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__addr_in_pic_dc3)
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__picm_rd_data_lo_dc3 
                                                >> 0x18U)
                                             : (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__dccm_corr_dout_dc3 
                                                        >> 0x38U))))))) 
              << 0x38U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match)) 
           | (0xffffffffU == vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__0__KET____DOT__trigger_match__DOT__matchvec));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match)) 
           | ((IData)((0xffffffffU == vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__1__KET____DOT__trigger_match__DOT__matchvec)) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match)) 
           | ((IData)((0xffffffffU == vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__2__KET____DOT__trigger_match__DOT__matchvec)) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match)) 
           | ((IData)((0xffffffffU == vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__genblk1__BRA__3__KET____DOT__trigger_match__DOT__matchvec)) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__brdata_in 
        = (((QData)((IData)(((0x40000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_access_fault_f2) 
                                             << 0x17U)) 
                             | ((0x20000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                                << 0x16U)) 
                                | ((0x10000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__bht_dataoutf__dout) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                         << 0x14U) 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3o_rd_data_f2 
                                           << 0x17U))) 
                                      | ((0x4000000U 
                                          & ((0xfc000000U 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_expanded_f2) 
                                                 << 0x13U)) 
                                             | (0x4000000U 
                                                & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2)) 
                                                    << 0x13U) 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                     >> 3U)))) 
                                                      << 0x19U))))) 
                                         | ((0x2000000U 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_valid_f2) 
                                                << 0x12U)) 
                                            | ((0x1000000U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__pret_raw) 
                                                   << 0x11U)) 
                                               | ((0x400000U 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_access_fault_f2) 
                                                      << 0x10U)) 
                                                  | ((0x200000U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                                         << 0xfU)) 
                                                     | ((0x100000U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__bht_dataoutf__dout) 
                                                            << 0x12U)) 
                                                        | ((0x80000U 
                                                            & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                                << 0xdU) 
                                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank3e_rd_data_f2 
                                                                  << 0xfU))) 
                                                           | ((0x40000U 
                                                               & ((0xfffc0000U 
                                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_expanded_f2) 
                                                                      << 0xcU)) 
                                                                  | (0xc0000U 
                                                                     & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2)) 
                                                                         << 0xcU) 
                                                                        & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                                >> 3U)))) 
                                                                           << 0x12U))))) 
                                                              | ((0x20000U 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_valid_f2) 
                                                                     << 0xbU)) 
                                                                 | ((0x10000U 
                                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__pret_raw) 
                                                                        << 0xaU)) 
                                                                    | ((0x4000U 
                                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_access_fault_f2) 
                                                                           << 9U)) 
                                                                       | ((0x2000U 
                                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                                                              << 8U)) 
                                                                          | ((0x1000U 
                                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__bht_dataoutf__dout) 
                                                                                << 8U)) 
                                                                             | ((0x800U 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                                                << 6U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2o_rd_data_f2 
                                                                                << 7U))) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_expanded_f2) 
                                                                                << 5U) 
                                                                                | (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2)) 
                                                                                << 5U) 
                                                                                & ((0x1800U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                                >> 3U)))) 
                                                                                << 0xbU)) 
                                                                                | (0x400U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                                >> 2U)))) 
                                                                                << 9U)))))) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_valid_f2) 
                                                                                << 4U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__pret_raw) 
                                                                                << 3U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_access_fault_f2) 
                                                                                << 2U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                                                                << 1U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__bht_dataoutf__dout) 
                                                                                >> 2U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank2e_rd_data_f2) 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_expanded_f2) 
                                                                                >> 2U) 
                                                                                | (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2)) 
                                                                                >> 2U) 
                                                                                & ((0x30U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                                >> 3U)))) 
                                                                                << 4U)) 
                                                                                | (0xcU 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                                >> 2U)))) 
                                                                                << 2U)))))) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_valid_f2) 
                                                                                >> 3U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__pret_raw) 
                                                                                >> 4U))))))))))))))))))))))))))))))) 
            << 0x20U) | (QData)((IData)(((0x40000000U 
                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_access_fault_f2) 
                                             << 0x1bU)) 
                                         | ((0x20000000U 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                                << 0x1aU)) 
                                            | ((0x10000000U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__bht_dataoutf__dout) 
                                                   << 0x14U)) 
                                               | ((0x8000000U 
                                                   & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                       << 0x18U) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1o_rd_data_f2 
                                                         << 0x17U))) 
                                                  | ((0x4000000U 
                                                      & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_expanded_f2) 
                                                          << 0x17U) 
                                                         | (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2)) 
                                                             << 0x17U) 
                                                            & ((0x60000000U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                                >> 3U)))) 
                                                                   << 0x1dU)) 
                                                               | ((0x18000000U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                                >> 2U)))) 
                                                                      << 0x1bU)) 
                                                                  | (0x4000000U 
                                                                     & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                                >> 1U)))) 
                                                                        << 0x19U))))))) 
                                                     | ((0x2000000U 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_valid_f2) 
                                                            << 0x16U)) 
                                                        | ((0x1000000U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__pret_raw) 
                                                               << 0x15U)) 
                                                           | ((0x400000U 
                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_access_fault_f2) 
                                                                  << 0x14U)) 
                                                              | ((0x200000U 
                                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                                                     << 0x13U)) 
                                                                 | ((0x100000U 
                                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__bht_dataoutf__dout) 
                                                                        << 0xaU)) 
                                                                    | ((0x80000U 
                                                                        & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                                            << 0x11U) 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank1e_rd_data_f2 
                                                                              << 0xfU))) 
                                                                       | ((0x40000U 
                                                                           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_expanded_f2) 
                                                                               << 0x10U) 
                                                                              | (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2)) 
                                                                                << 0x10U) 
                                                                                & ((0xc00000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                                >> 3U)))) 
                                                                                << 0x16U)) 
                                                                                | ((0x300000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                                >> 2U)))) 
                                                                                << 0x14U)) 
                                                                                | (0xc0000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                                >> 1U)))) 
                                                                                << 0x12U))))))) 
                                                                          | ((0x20000U 
                                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_valid_f2) 
                                                                                << 0xfU)) 
                                                                             | ((0x10000U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__pret_raw) 
                                                                                << 0xeU)) 
                                                                                | ((0x4000U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_access_fault_f2) 
                                                                                << 0xdU)) 
                                                                                | ((0x2000U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                                                                << 0xcU)) 
                                                                                | ((0x1000U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__bht_dataoutf__dout)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                                                << 0xaU) 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0o_rd_data_f2 
                                                                                << 7U))) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_expanded_f2) 
                                                                                << 9U) 
                                                                                | (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2)) 
                                                                                << 9U) 
                                                                                & ((0x18000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                                >> 3U)))) 
                                                                                << 0xfU)) 
                                                                                | ((0x6000U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                                >> 2U)))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1800U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2) 
                                                                                >> 1U)))) 
                                                                                << 0xbU)) 
                                                                                | (0x400U 
                                                                                & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2)))) 
                                                                                << 9U)))))))) 
                                                                                | ((0x200U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_valid_f2) 
                                                                                << 8U)) 
                                                                                | ((0x100U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__pret_raw) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ic_access_fault_f2) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__hist1_raw) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__bht_dataoutf__dout) 
                                                                                >> 0xaU)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2) 
                                                                                << 3U) 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_bank0e_rd_data_f2 
                                                                                >> 1U))) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__tag_match_way1_expanded_f2) 
                                                                                | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__wayhit_f2)) 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__btb_lru_rd_f2))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_bp_valid_f2) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__pret_raw))))))))))))))))))))))))))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f1_f0 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f1 
        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__shift_f2_f0 
        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf0val)) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f2val)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__consume_fb1 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__sf1val)) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__f1val)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__retstack__BRA__0__KET____DOT__rets_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable))
                           ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[0U]
                           : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__0__KET____DOT__rets_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__retstack__BRA__1__KET____DOT__rets_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable))
                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[1U] 
                               << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[0U] 
                                         >> 0x1fU))
                           : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__1__KET____DOT__rets_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__retstack__BRA__2__KET____DOT__rets_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable))
                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[1U] 
                                         >> 0x1eU))
                           : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__2__KET____DOT__rets_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__retstack__BRA__3__KET____DOT__rets_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rsenable))
                           ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[3U] 
                               << 3U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT__rets_in[2U] 
                                         >> 0x1dU))
                           : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__bp__DOT____Vcellout__retstack__BRA__3__KET____DOT__rets_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_rs1_bypass_data_d 
        = (((((((((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                      >> 9U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_i1_result_e1) 
                   | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                        >> 8U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_i0_result_e1)) 
                  | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                       >> 7U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e2)) 
                 | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                      >> 6U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_result_e2)) 
                | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                     >> 5U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e3_final)) 
               | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                    >> 4U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3_final)) 
              | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                   >> 3U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_final)) 
             | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                  >> 2U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_final)) 
            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass) 
                                 >> 1U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e3 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e2)) 
           | ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
              | (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_rs2_bypass_data_d 
        = (((((((((((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                      >> 9U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_i1_result_e1) 
                   | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                        >> 8U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_i0_result_e1)) 
                  | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                       >> 7U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e2)) 
                 | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                      >> 6U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_result_e2)) 
                | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                     >> 5U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e3_final)) 
               | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                    >> 4U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3_final)) 
              | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                   >> 3U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_final)) 
             | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                  >> 2U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_final)) 
            | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass) 
                                 >> 1U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e2));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e3 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e2)) 
           | ((5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
              | (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_data_vldff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_data_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_drain_vldff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_drain_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__0__KET____DOT__stbuf_flush_vldff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__0__KET____DOT__stbuf_flush_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_data_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_data_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_drain_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_drain_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__1__KET____DOT__stbuf_flush_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__1__KET____DOT__stbuf_flush_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_data_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_data_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_drain_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_drain_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__2__KET____DOT__stbuf_flush_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__2__KET____DOT__stbuf_flush_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_data_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_data_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_drain_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_drain_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__3__KET____DOT__stbuf_flush_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__3__KET____DOT__stbuf_flush_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_data_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 4U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                 >> 4U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_data_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_drain_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 4U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en) 
                                 >> 4U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_drain_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__4__KET____DOT__stbuf_flush_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 4U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en) 
                                 >> 4U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__4__KET____DOT__stbuf_flush_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_data_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 5U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                 >> 5U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_data_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_drain_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 5U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en) 
                                 >> 5U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_drain_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__5__KET____DOT__stbuf_flush_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 5U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en) 
                                 >> 5U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__5__KET____DOT__stbuf_flush_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_data_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 6U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                 >> 6U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_data_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_drain_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 6U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en) 
                                 >> 6U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_drain_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__6__KET____DOT__stbuf_flush_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 6U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en) 
                                 >> 6U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__6__KET____DOT__stbuf_flush_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_data_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 7U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_wr_en) 
                                 >> 7U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_data_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_drain_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 7U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_drain_en) 
                                 >> 7U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_drain_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__GenStBuf__BRA__7__KET____DOT__stbuf_flush_vldff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_reset) 
                     >> 7U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_flush_en) 
                                 >> 7U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT____Vcellout__GenStBuf__BRA__7__KET____DOT__stbuf_flush_vldff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_valid) 
            & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_write))) 
           & (~ ((((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                              << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                        >> 0x1eU))) 
                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb)) 
                 | (((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                             >> 6U))) 
                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_imprecise_error_store_any) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_error)) 
           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_dccm_errorff__dout) 
                 >> 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_pmu_bus_error 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__ld_bus_error_dc3) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_error)) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_imprecise_error_store_any));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_valid) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_error));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected 
        = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_dccm_errorff__dout) 
               >> 1U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_error) 
                          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_imprecise_error_store_any)));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Dec_value 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec;
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Enc_value 
        = ((6U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Enc_value)) 
           | (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Dec_value) 
                       >> 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Dec_value) 
                                 >> 3U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Dec_value) 
                                            >> 5U)) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Dec_value) 
                       >> 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Enc_value 
        = ((5U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Enc_value)) 
           | (2U & ((((0x7ffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Dec_value) 
                                      >> 1U)) | (0x3ffffffeU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Dec_value) 
                                                    >> 2U))) 
                     | (0x7fffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Dec_value) 
                                      >> 5U))) | (0x3fffffeU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Dec_value) 
                                                     >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Enc_value 
        = ((3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Enc_value)) 
           | (4U & ((((0x3ffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Dec_value) 
                                      >> 2U)) | (0x1ffffffcU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Dec_value) 
                                                    >> 3U))) 
                     | (0xffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Dec_value) 
                                      >> 4U))) | (0x7fffffcU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Dec_value) 
                                                     >> 5U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Vfuncout 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Enc_value;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vfunc_f_Enc8to3__14__Vfuncout;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffffffffeULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | (IData)((IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age) 
                              & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffffffffdULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 1U)) & (1U 
                                                   != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffffffffbULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 2U)) & (2U 
                                                   != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffffffff7ULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 3U)) & (3U 
                                                   != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffffffffefULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 4U)) & (4U 
                                                   != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffffffffdfULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 5U)) & (5U 
                                                   != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffffffffbfULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 6U)) & (6U 
                                                   != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffffffff7fULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 7U)) & (7U 
                                                   != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffffffeffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 8U)) & (0U 
                                                   != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffffffdffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 9U)) & (1U 
                                                   != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffffffbffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0xaU)) & 
                               (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffffff7ffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0xbU)) & 
                               (3U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffffffefffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0xcU)) & 
                               (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffffffdfffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0xdU)) & 
                               (5U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffffffbfffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0xeU)) & 
                               (6U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffffff7fffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0xfU)) & 
                               (7U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffffeffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x10U)) 
                               & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffffdffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x11U)) 
                               & (1U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffffbffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x12U)) 
                               & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffff7ffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x13U)) 
                               & (3U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffffefffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x14U)) 
                               & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffffdfffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x15U)) 
                               & (5U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffffbfffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x16U)) 
                               & (6U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffff7fffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x17U)) 
                               & (7U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffeffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x18U)) 
                               & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffdffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x19U)) 
                               & (1U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffffbffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x1aU)) 
                               & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffff7ffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x1bU)) 
                               & (3U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffefffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x1cU)) 
                               & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffdfffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x1dU)) 
                               & (5U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffffbfffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x1eU)) 
                               & (6U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffff7fffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x1fU)) 
                               & (7U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x1fU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffeffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x20U)) 
                               & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffdffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x21U)) 
                               & (1U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x21U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffffbffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x22U)) 
                               & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x22U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffff7ffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x23U)) 
                               & (3U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x23U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffefffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x24U)) 
                               & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x24U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffdfffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x25U)) 
                               & (5U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x25U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffffbfffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x26U)) 
                               & (6U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x26U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffff7fffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x27U)) 
                               & (7U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x27U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffeffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x28U)) 
                               & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x28U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffdffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x29U)) 
                               & (1U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x29U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffffbffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x2aU)) 
                               & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x2aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffff7ffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x2bU)) 
                               & (3U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x2bU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffefffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x2cU)) 
                               & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x2cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffdfffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x2dU)) 
                               & (5U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x2dU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffffbfffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x2eU)) 
                               & (6U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x2eU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffff7fffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x2fU)) 
                               & (7U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x2fU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffeffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x30U)) 
                               & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x30U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffdffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x31U)) 
                               & (1U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x31U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfffbffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x32U)) 
                               & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x32U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfff7ffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x33U)) 
                               & (3U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x33U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffefffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x34U)) 
                               & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x34U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffdfffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x35U)) 
                               & (5U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x35U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xffbfffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x36U)) 
                               & (6U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x36U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xff7fffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x37U)) 
                               & (7U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x37U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfeffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x38U)) 
                               & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x38U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfdffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x39U)) 
                               & (1U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x39U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xfbffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x3aU)) 
                               & (2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x3aU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xf7ffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x3bU)) 
                               & (3U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x3bU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xefffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x3cU)) 
                               & (4U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x3cU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xdfffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x3dU)) 
                               & (5U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x3dU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0xbfffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x3eU)) 
                               & (6U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x3eU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp 
        = ((0x7fffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age_temp) 
           | ((QData)((IData)(((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_age 
                                        >> 0x3fU)) 
                               & (7U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
              << 0x3fU));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in 
            = ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5)
                ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5) 
                   << 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ldst_byteen_lo_dc5));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
            = ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5)
                ? ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5)) 
                   << 0x20U) : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__store_data_lo_dc5)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in 
            = ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (7U & (((IData)(2U) + ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                             << 5U)) 
                             >> 5U))] >> (0x1fU & ((IData)(2U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                    << 5U)))))
                ? (0xf0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                             >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                          << 2U))) 
                            << 4U)) : (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                                               >> (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                      << 2U)))));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
            = ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (7U & (((IData)(2U) + ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                             << 5U)) 
                             >> 5U))] >> (0x1fU & ((IData)(2U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                    << 5U)))))
                ? ((QData)((IData)((((0U == (0x1fU 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                << 5U)))
                                      ? 0U : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                              ((IData)(1U) 
                                               + (7U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                      << 5U))))) 
                                    | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                       (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))] 
                                       >> (0x1fU & 
                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                            << 5U)))))) 
                   << 0x20U) : (QData)((IData)((((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                      << 5U)))
                                                  ? 0U
                                                  : 
                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                       << 5U))))) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                                   (7U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                       << 5U)))))));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc3))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_busreq_dc4))) 
              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc5))) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_valid))) 
            & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any))) 
           & ((0x3fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc2 
                              >> 2U)) != (0x3fffffffU 
                                          & (((0U == 
                                               (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                    << 5U))))
                                               ? 0U
                                               : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & (((IData)(2U) 
                                                        + 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                         << 5U)) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                        << 5U)))))) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                (7U 
                                                 & (((IData)(2U) 
                                                     + 
                                                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                      << 5U)) 
                                                    >> 5U))] 
                                                >> 
                                                (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                                     << 5U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = (((0xff000000U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                              >> 3U)))) 
                            << 0x18U)) | ((0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                             >> 2U)))) 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                                >> 1U)))) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo)))))))) 
           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                               >> 8U)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                 >> 0x10U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                   >> 0x18U)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                            >> 1U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                               >> 9U)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                 >> 0x11U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                   >> 0x19U)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                            >> 2U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                               >> 0xaU)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                 >> 0x12U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                   >> 0x1aU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                            >> 3U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                               >> 0xbU)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                 >> 0x13U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                   >> 0x1bU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                            >> 4U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                               >> 0xcU)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                 >> 0x14U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                   >> 0x1cU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                            >> 5U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                               >> 0xdU)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                 >> 0x15U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                   >> 0x1dU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                            >> 6U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                               >> 0xeU)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                 >> 0x16U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                   >> 0x1eU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                            >> 7U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                               >> 0xfU)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                 >> 0x17U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                                   >> 0x1fU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo)) 
           | (1U & ((0U != (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo)) 
           | (2U & (((0U != (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                      >> 8U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                                                  >> 1U)) 
                    << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo)) 
           | (4U & (((0U != (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                      >> 0x10U))) | 
                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                      >> 2U)) << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo)) 
           | (8U & (((0U != (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_lo 
                                      >> 0x18U))) | 
                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_lo) 
                      >> 3U)) << 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = (((0xff000000U & ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                              >> 3U)))) 
                            << 0x18U)) | ((0xff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                             >> 2U)))) 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                                >> 1U)))) 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi)))))))) 
           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_data);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                               >> 8U)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                 >> 0x10U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                   >> 0x18U)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[0U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                            >> 1U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                               >> 9U)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                 >> 0x11U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                   >> 0x19U)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[1U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                            >> 2U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                               >> 0xaU)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                 >> 0x12U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                   >> 0x1aU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[2U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                            >> 3U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                               >> 0xbU)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                 >> 0x13U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                   >> 0x1bU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[3U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                            >> 4U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                               >> 0xcU)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                 >> 0x14U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                   >> 0x1cU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[4U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                            >> 5U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                               >> 0xdU)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                 >> 0x15U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                   >> 0x1dU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[5U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                            >> 6U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                               >> 0xeU)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                 >> 0x16U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                   >> 0x1eU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[6U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                            >> 7U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffff00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                         | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                               >> 0xfU)))) 
                             << 8U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xff00ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                           | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                 >> 0x17U)))) 
                               << 0x10U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                             | (((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                                   >> 0x1fU)))) 
                                 << 0x18U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[7U]))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi)) 
           | (1U & ((0U != (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi)) 
           | (2U & (((0U != (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                      >> 8U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                                                  >> 1U)) 
                    << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi)) 
           | (4U & (((0U != (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                      >> 0x10U))) | 
                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                      >> 2U)) << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi)) 
           | (8U & (((0U != (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_hitvecfn_hi 
                                      >> 0x18U))) | 
                     ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_byte_ibuf_hit_hi) 
                      >> 3U)) << 3U)));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc3_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_dc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_fn_dc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_dc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_fn_dc2;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_hi_dc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_hi_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_fwddata_lo_dc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf_fwddata_lo_dc3;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_ld_datafn_corr_dc3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__addr_external_dc3)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_read_data_dc3
            : (IData)(((0x3fU >= (0x18U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3 
                                           << 3U)))
                        ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3 
                           >> (0x18U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3 
                                        << 3U))) : 0ULL)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rdata 
        = ((0x8000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3
            : (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3)) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__lsu_rdata_corr_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_trigger_match_dc3 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_trigger_match_dc3)) 
           | (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                      & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                            >> 0xbU))) & (((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                            >> 3U) 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                              >> 0xdU)) 
                                          | (((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                               >> 2U) 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                 >> 0xeU)) 
                                             & (~ (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[1U] 
                                                   >> 5U))))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_trigger_match_dc3 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_trigger_match_dc3)) 
           | (2U & ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                       & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                             >> 0xbU))) << 1U) & ((0xffffeU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                       >> 8U) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                         >> 0xcU))) 
                                                  | (0x7fffeU 
                                                     & (((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                          >> 7U) 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                            >> 0xdU)) 
                                                        & ((~ 
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[2U] 
                                                             >> 0xbU)) 
                                                           << 1U))))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_trigger_match_dc3 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_trigger_match_dc3)) 
           | (4U & ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                       & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                             >> 0xbU))) << 2U) & ((0x7fffcU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                       >> 0xdU) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                         >> 0xbU))) 
                                                  | (0xffffcU 
                                                     & (((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3) 
                                                         >> 0xcU) 
                                                        & ((~ 
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[3U] 
                                                             >> 0x11U)) 
                                                           << 2U))))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_trigger_match_dc3 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_trigger_match_dc3)) 
           | (8U & ((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                       & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                             >> 0xbU))) << 3U) & ((0x3ff8U 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                       >> 0x12U) 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                         >> 0xaU))) 
                                                  | (0x7ff8U 
                                                     & (((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                          >> 0x11U) 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                                                            >> 0xbU)) 
                                                        & ((~ 
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT____Vcellout__tlu__trigger_pkt_any[4U] 
                                                             >> 0x17U)) 
                                                           << 3U))))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__trigger__DOT__lsu_trigger_data_match))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__consume_fb0) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__consume_fb1))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__consume_fb0) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__consume_fb1)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_rs1_d 
        = (((((- (IData)((1U & ((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 5U)))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i0_rs1_d) 
             | ((- (IData)((1U & (((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
                                   & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 5U)))) 
                                  & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 5U)))))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i1_rs1_d)) 
            | ((- (IData)(((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)) 
                           & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                      >> 5U))))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_rs1_bypass_data_d)) 
           | ((- (IData)((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)) 
                           & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 5U)))) 
                          & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                     >> 5U))))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_rs1_bypass_data_d));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_rs2_d 
        = (((((- (IData)((1U & ((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
                                & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 5U)))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i0_rs2_d) 
             | ((- (IData)((1U & (((~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)))) 
                                   & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 5U)))) 
                                  & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 5U)))))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i1_rs2_d)) 
            | ((- (IData)(((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)) 
                           & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                      >> 5U))))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_rs2_bypass_data_d)) 
           | ((- (IData)((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)) 
                           & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 5U)))) 
                          & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                     >> 5U))))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_rs2_bypass_data_d));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_rs2_d 
        = ((((- (IData)((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass))))))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i0_rs2_d) 
            | ((- (IData)((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass))))))) 
               & (((- (IData)((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x13U))))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_rddata_d) 
                  | ((- (IData)((1U & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                  >> 0x13U)))))) 
                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_immed_d)))) 
           | ((- (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_rs2_bypass_data_d));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d 
        = (((((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 0x31U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                        >> 2U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                  >> 3U))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e2)) 
              | (((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x31U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                          >> 2U) | 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                          >> 3U))) 
                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e2))) 
             | (((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x31U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                        >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e3))) 
            | (((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 0x31U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                       >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e3))) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                 >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[1U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[2U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[3U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[4U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[5U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[6U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[7U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[8U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[9U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xaU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xbU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xcU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xdU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xeU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xfU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x10U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x11U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x12U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x13U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x14U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x15U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x16U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x17U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x18U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x19U] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU] = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (1U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (1U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v))) 
             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v))) 
               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (2U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (2U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffffdU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 1U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 1U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 1U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (3U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (3U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 2U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 2U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 2U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (4U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (4U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffff7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 3U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 3U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 3U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[3U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (5U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (5U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 4U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 4U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 4U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[4U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (6U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (6U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 5U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 5U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 5U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[5U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (7U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (7U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 6U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 6U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 6U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[6U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (8U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (8U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 7U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 7U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 7U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[7U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (9U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                         >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (9U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                               << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 8U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 8U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 8U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[8U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0xaU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0xaU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                              >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xaU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 9U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 9U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 9U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 9U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[9U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0xbU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0xbU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                              >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xbU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffffbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xaU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xaU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xaU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xaU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xaU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0xcU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0xcU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                              >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xcU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffff7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xbU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xbU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xbU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xbU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xbU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0xdU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0xdU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                              >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xdU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffefffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xcU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xcU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xcU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xcU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xcU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0xeU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0xeU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                              >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xeU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffdfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xdU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xdU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xdU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xdU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xdU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0xfU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                           >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0xfU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                 << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                              >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0xfU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fffbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xeU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xeU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xeU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xeU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x10U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x10U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x10U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fff7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0xfU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0xfU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0xfU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0xfU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xfU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x11U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x11U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x11U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x10U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x10U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x10U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x10U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x12U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x12U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x12U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffdffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x11U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x11U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x11U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x11U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x11U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x13U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x13U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x13U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x12U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x12U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x12U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x12U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x12U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x14U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7ff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x14U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7ff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x14U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7ff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x13U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x13U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x13U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x13U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x13U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x15U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x15U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x15U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x14U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x14U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x14U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x14U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x14U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x16U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x16U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x16U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fdfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x15U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x15U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x15U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x15U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x15U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x17U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7fbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x17U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7fbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x17U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7fbfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x16U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x16U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x16U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x16U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x16U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x18U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7f7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x18U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7f7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x18U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7f7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x17U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x17U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x17U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x17U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x19U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7effffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x19U == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7effffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x19U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7effffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x18U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x18U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x18U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x18U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1aU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7dffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x1aU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7dffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1aU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7dffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x19U));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x19U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x19U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x19U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x19U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1bU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x7bffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x1bU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x7bffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1bU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x7bffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1aU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1aU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1aU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1aU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1cU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x77ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x1cU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x77ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1cU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x77ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1bU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1bU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1bU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1bU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1dU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x6fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x1dU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x6fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1dU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x6fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1cU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1cU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1cU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1cU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1eU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x5fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x1eU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x5fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1eU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x5fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1dU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1dU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1dU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1dU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_wen_wb) 
           & (0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 2U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                            >> 0x1eU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound1) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_wen_wb) 
           & (0x1fU == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                  << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                               >> 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound2) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_wen) 
           & (0x1fU == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_nonblock_load_waddr)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
        = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound3) 
              << 0x1eU));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4 
        = ((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
                               >> 0x1eU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb) 
            | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v 
                                 >> 0x1eU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw)) 
           | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v 
                                >> 0x1eU)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU] 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vlvbound4;
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac_en)
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_error)
                ? (((0U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                     << 5U))) ? 0U : 
                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                     ((IData)(1U) + (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_tag)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                            << 5U))))) 
                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_tag))] 
                      >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                   << 5U)))) : (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
                                                      << 5U)))
                                                  ? 0U
                                                  : 
                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                  ((IData)(1U) 
                                                   + 
                                                   (7U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
                                                       << 5U))))) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                                                   (7U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_imprecise_error_store_tag) 
                                                       << 5U)))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__lsu_dccm_errorff__din 
        = ((2U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mdseac_en) 
                   << 1U) | (0xfffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__lsu_dccm_errorff__dout) 
                                            & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dec_csr_wen_wb_mod) 
                                                   & (0xbc0U 
                                                      == 
                                                      (0xfffU 
                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                           << 0xdU) 
                                                          | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U] 
                                                             >> 0x13U)))))) 
                                               << 1U))))) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_single_ecc_error_dc5) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5) 
                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                    >> 0xbU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                  == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                             << 0x1bU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                          >> 5U))))) 
              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                 >> 9U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0x3ffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                              == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                         << 0x11U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                           >> 0xfU))))) 
                          << 1U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                    >> 0x12U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0x1cU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                            == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                       << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                 >> 0x19U))))) 
                        << 2U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                  >> 0x1bU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0xffffff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                 == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                            << 0x1dU) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                              >> 3U))))) 
                             << 3U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0x7fff0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                               == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                          << 0x13U) 
                                         | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                            >> 0xdU))))) 
                           << 4U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0xdU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0x3e0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 9U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                  >> 0x17U))))) 
                         << 5U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                   >> 0x16U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0xffffffc0U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                  == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                            >> 1U)))) 
                              << 6U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                        << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
           | (0xffff80U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_tag) 
                                == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                          >> 0xbU)))) 
                            << 7U) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                      >> 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                    >> 5U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                 >> 3U))) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected)) 
                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                     >> 2U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                  >> 1U)))));
    if ((1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
               (7U & (((IData)(2U) + ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                      << 5U)) >> 5U))] 
               >> (0x1fU & ((IData)(2U) + ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                           << 5U)))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
            = ((QData)((IData)((((0U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                  << 5U)))
                                  ? 0U : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                          ((IData)(1U) 
                                           + (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                    << 5U))))) 
                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                   (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))] 
                                   >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                << 5U)))))) 
               << 0x20U);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
            = (0xf0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                         >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                      << 2U))) << 4U));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
            = (QData)((IData)((((0U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                 << 5U)))
                                 ? 0U : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                         ((IData)(1U) 
                                          + (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))] 
                                         << ((IData)(0x20U) 
                                             - (0x1fU 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                                   << 5U))))) 
                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_data[
                                  (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))] 
                                  >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                               << 5U))))));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in 
            = (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_byteen 
                       >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1) 
                                    << 2U))));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en 
        = (((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                  != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)) 
                 & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))) 
                & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec))) 
               & (2U == ((0x17U >= (0x1fU & ((IData)(3U) 
                                             * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))
                          ? (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                   >> (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))))
                          : 0U))) & (2U == ((0x17U 
                                             >= (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1))))
                                             ? (7U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1)))))
                                             : 0U))) 
             & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                   >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                  >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
           & ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                    >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                   >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
               & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dualhi) 
                     >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw) 
                 >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffffffff00ULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo))
                                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo
                                        : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo))
                                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo
                                            : ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo))
                                                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo
                                                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffffff00ffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo))
                                         ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
                                            >> 8U) : 
                                        ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo))
                                          ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
                                             >> 8U)
                                          : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo))
                                              ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
                                                 >> 8U)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                                 >> 8U))))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffffff00ffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo))
                                         ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
                                            >> 0x10U)
                                         : ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo))
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
                                                >> 0x10U)
                                             : ((4U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo))
                                                 ? 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
                                                 >> 0x10U)
                                                 : 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                                 >> 0x10U))))))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo 
        = ((0xffffffff00ffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_lo) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo))
                                         ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_lo 
                                            >> 0x18U)
                                         : ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo))
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_lo 
                                                >> 0x18U)
                                             : ((8U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo))
                                                 ? 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_lo 
                                                 >> 0x18U)
                                                 : 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_lo 
                                                 >> 0x18U))))))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (2U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (4U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo)) 
           | (8U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_lo) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_lo)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_lo)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_lo)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_lo)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_lo)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_lo))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffffffff00ULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | (IData)((IData)((0xffU & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi))
                                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi
                                        : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi))
                                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi
                                            : ((1U 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi))
                                                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi
                                                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffffff00ffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi))
                                         ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
                                            >> 8U) : 
                                        ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi))
                                          ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
                                             >> 8U)
                                          : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi))
                                              ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
                                                 >> 8U)
                                              : (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                                 >> 8U))))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffffff00ffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi))
                                         ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
                                            >> 0x10U)
                                         : ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi))
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
                                                >> 0x10U)
                                             : ((4U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi))
                                                 ? 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
                                                 >> 0x10U)
                                                 : 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                                 >> 0x10U))))))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi 
        = ((0xffffffff00ffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_hi) 
           | ((QData)((IData)((0xffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi))
                                         ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc3pipe_hi 
                                            >> 0x18U)
                                         : ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi))
                                             ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc4pipe_hi 
                                                >> 0x18U)
                                             : ((8U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi))
                                                 ? 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_dc5pipe_hi 
                                                 >> 0x18U)
                                                 : 
                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_fwddata_buf_hi 
                                                 >> 0x18U))))))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (1U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (2U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (4U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi)) 
           | (8U & (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_lo_hi) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc3hit_hi_hi)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_lo_hi)) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc4hit_hi_hi)) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_lo_hi)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_dc5hit_hi_hi)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_buf_hi))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in 
        = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e3ff__dout;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in 
        = ((0x3f0ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in) 
           | (0xf0000U & ((((- (IData)((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                               >> 0x1cU) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                 >> 0x1bU))))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_trigger_match_dc3)) 
                           << 0x10U) | (0xffff0000U 
                                        & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e3ff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in 
        = ((0x3ff0fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in) 
           | (0xf000U & (((~ (- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__flushff__dout) 
                                               >> 1U))))) 
                          << 0xcU) & ((((- (IData)(
                                                   (1U 
                                                    & (~ 
                                                       ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                         >> 0x1cU) 
                                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                           >> 0x1bU)))))) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_trigger_match_dc3)) 
                                       << 0xcU) | (0xfffff000U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e3ff__dout)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in 
        = ((0x3fffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in) 
           | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                    & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                         >> 0x11U) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3) 
                       | ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                           >> 0x10U) & (0U != (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc3)))))));
    if ((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                  >> 2U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr_in 
        = ((((((1U & (- (IData)(((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1))))) 
               | (2U & (- (IData)(((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)))))) 
              | (2U & (- (IData)(((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2)))))) 
             | (1U & (- (IData)(((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr)) 
                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2)))))) 
            | ((- (IData)((1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume1)) 
                                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__ifu_fb_consume2)))))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__rdptr))) 
           & (~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2 
        = (((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                       >> 0x31U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d))) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_d)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_d))) 
           & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                      >> 0x28U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en 
        = (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w0v 
             | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w1v) 
            | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__w2v) 
           & (- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_id))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = (0xfffffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x200U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0xfffffeffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0xffffff1fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xffffffe0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 5U)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0xffffffe0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                           & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                         << 2U) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                              == (0x1fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]))) 
                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                             >> 8U))) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                                          & ((0x1fU 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                  << 0x1aU) 
                                                 | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                    >> 6U))) 
                                             == (0x1fU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]))) 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                            >> 8U))))
                ? (0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U])
                : ((0xfffffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
                   | (0x3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U])));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                        << 0x1bU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                     >> 5U))))) & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                   >> 9U))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x100U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = (0xfff003ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x80000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0xfffc7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xffff8000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 0xfU)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0xffff83ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xfffffc00U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 << 0xaU)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 1U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                    << 0x16U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                      >> 0xaU))))) 
                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                     >> 0x12U))) | 
                      (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                        & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                      << 0x1aU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 6U))) 
                           == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                         << 0x16U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                           >> 0xaU))))) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                          >> 0x12U)))) ? (0xfff7ffffU 
                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U])
                : ((0xfff003ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
                   | (0xffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U])));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                        << 0x11U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                     >> 0xfU))))) & 
         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
          >> 0x13U))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x40000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = (0xc00fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x20000000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0xefffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0xf1ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xfe000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 0x19U)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0xfe0fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xfff00000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 << 0x14U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                    << 0xcU) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                      >> 0x14U))))) 
                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                     >> 0x1cU))) | 
                      (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                        & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                      << 0x1aU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 6U))) 
                           == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                         << 0xcU) | 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                         >> 0x14U))))) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                          >> 0x1cU)))) ? (0xdfffffffU 
                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U])
                : ((0xc00fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
                   | (0x3ff00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U])));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                        << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                  >> 0x19U))))) & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                   >> 0x1dU))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = (0x10000000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
        = (0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
        = (0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x80U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0xffffffbfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xffffffc7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xfffffff8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 3U)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
            = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
               | (0xc0000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 << 0x1eU)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xfffffff8U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0x3fffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 >> 2U)));
    } else {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                     >> 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                >> 0x1eU))) 
                                   == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                   >> 0x1eU))))) 
                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                  >> 6U))) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                                               & ((0x1fU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                       << 0x1aU) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                         >> 6U))) 
                                                  == 
                                                  (0x1fU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U] 
                                                         >> 0x1eU))))) 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                 >> 6U))))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
                = (0xffffff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U] 
                = ((0x3fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[0U]) 
                   | (0xc0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[0U]));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
                = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
                   | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U]));
        }
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                        << 0x1dU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 3U))))) & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                   >> 7U))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x40U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
        = (0xfffc00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    if ((0x10U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x20000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0xfffeffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xffff1fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xffffe000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 0xdU)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xffffe0ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xffffff00U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 << 8U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 4U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                      >> 8U))))) 
                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0x10U))) | 
                      (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                        & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                      << 0x1aU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 6U))) 
                           == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         << 0x18U) 
                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                           >> 8U))))) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                          >> 0x10U)))) ? (0xfffdffffU 
                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U])
                : ((0xfffc00ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
                   | (0x3ff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U])));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                        << 0x13U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0xdU))))) & 
         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
          >> 0x11U))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x10000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
        = (0xf003ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    if ((0x20U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x8000000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0xfbffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xfc7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xff800000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 0x17U)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xff83ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xfffc0000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 << 0x12U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 5U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                    << 0xeU) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                      >> 0x12U))))) 
                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                     >> 0x1aU))) | 
                      (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                        & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                      << 0x1aU) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 6U))) 
                           == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                         << 0xeU) | 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                         >> 0x12U))))) 
                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                          >> 0x1aU)))) ? (0xf7ffffffU 
                                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U])
                : ((0xf003ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
                   | (0xffc0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U])));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                        << 9U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                  >> 0x17U))))) & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                   >> 0x1bU))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = (0x4000000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
        = (0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
        = (0xffc0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
    if ((0x40U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0x20U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0xffefU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = ((0xfff1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
               | (0xfffffffeU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 1U)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
            = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
               | (0xf0000000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 << 0x1cU)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = ((0xfffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
               | (0xfffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                >> 4U)));
    } else {
        if ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                     >> 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                              << 2U) 
                                             | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                >> 0x1eU))) 
                                   == (0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                 << 4U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                   >> 0x1cU))))) 
                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                  >> 4U))) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                                               & ((0x1fU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                       << 0x1aU) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                         >> 6U))) 
                                                  == 
                                                  (0x1fU 
                                                   & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                       << 4U) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U] 
                                                         >> 0x1cU))))) 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                 >> 4U))))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
                = (0xffdfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U] 
                = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[1U]) 
                   | (0xf0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[1U]));
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
                = ((0xffc0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
                   | (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U]));
        }
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                       >> 1U)))) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                    >> 5U))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0x10U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
        = (0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
    if ((0x80U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_wen))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0x8000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0xbfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = ((0xc7ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
               | (0xfffff800U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc3) 
                                 << 0xbU)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = ((0xf83fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
               | (0xffffffc0U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_rd) 
                                 << 6U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = ((1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_inv_reset_val) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_data_reset_val)) 
                        >> 7U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wen_wb) 
                                   & ((0x1fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                 << 2U) 
                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                   >> 0x1eU))) 
                                      == (0x1fU & (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                   >> 6U)))) 
                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                     >> 0xeU))) | (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wen_wb) 
                                                    & ((0x1fU 
                                                        & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U] 
                                                            << 0x1aU) 
                                                           | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                                              >> 6U))) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                           >> 6U)))) 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                                      >> 0xeU))))
                ? (0x7fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U])
                : ((0x3fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]) 
                   | (0xffc0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U])));
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb) 
          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5) 
             == (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                       >> 0xbU)))) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam[2U] 
                                      >> 0xfU))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U] 
            = (0x4000U | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__cam_in[2U]);
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellinp__nmi_ff__din 
        = ((8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__syncro_ff__dout) 
                  >> 2U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_int_detected) 
                              << 2U) | ((2U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_data_error)) 
                                                 & (~ 
                                                    (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                                      >> 2U) 
                                                     & (~ 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                         >> 1U))))) 
                                                << 1U) 
                                               | (0xfffffffeU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                                     & ((~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                          >> 1U)) 
                                                        << 1U))))) 
                                        | (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__nmi_lsu_detected) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_imprecise_error_store_any)) 
                                                  & (~ 
                                                     (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                                       >> 2U) 
                                                      & (~ 
                                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                          >> 1U))))) 
                                                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__nmi_ff__dout) 
                                                    & (~ 
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__excinfo_wb_ff__dout) 
                                                        >> 1U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xfbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 2U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xf7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                    | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                        << 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xefU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x10U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 4U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xdfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x20U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 5U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0xbfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x40U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 6U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in 
        = ((0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in)) 
           | (0x80U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen0_in) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                           << 7U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffffff00ULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | (IData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in))
                                        ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in)
                                        : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffff00ffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 1U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 8U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 8U)))))) 
              << 8U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffff00ffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 2U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x10U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x10U)))))) 
              << 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffff00ffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 3U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x18U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x18U)))))) 
              << 0x18U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffff00ffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 4U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x20U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x20U)))))) 
              << 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffff00ffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 5U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x28U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x28U)))))) 
              << 0x28U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xff00ffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 6U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x30U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x30U)))))) 
              << 0x30U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in 
        = ((0xffffffffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in) 
           | ((QData)((IData)((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en) 
                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen1_in) 
                                            >> 7U))
                                         ? (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data1_in 
                                                    >> 0x38U))
                                         : (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data0_in 
                                                    >> 0x38U)))))) 
              << 0x38U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
                 | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 1U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 2U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_lo) 
               >> 3U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 3U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
                 | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                       >> 4U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 1U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 5U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 2U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 6U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2) 
           & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_byte_hit_hi) 
               >> 3U) | (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ldst_byteen_ext_dc2) 
                            >> 7U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p 
        = ((0x7ff7fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2) 
              << 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p 
        = ((0x7fbffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p) 
           | (0xfffffc00U & ((((((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                            >> 0x28U)) 
                                   & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                  << 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                              << 8U)) 
                                | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x28U)) 
                                     & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                    << 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                << 8U))) 
                               | (((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 0x27U))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 0x28U))) 
                                    & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                   << 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                               << 8U))) 
                              | (((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x27U))) 
                                    & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 0x28U))) 
                                   & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                  << 0xaU) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                              << 8U))) 
                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)) 
                                << 0xaU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p 
        = ((0x7feffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p) 
           | (0xffffff00U & ((((((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                            >> 0x28U)) 
                                   & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                  << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                            << 6U)) 
                                | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x28U)) 
                                     & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                    << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                              << 6U))) 
                               | (((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 0x27U))) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 0x28U))) 
                                    & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                   << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                             << 6U))) 
                              | (((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x27U))) 
                                    & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 0x28U))) 
                                   & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                  << 8U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                            << 6U))) 
                             & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)) 
                                << 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p 
        = ((0x7ff81U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p) 
           | ((((0xffffffc0U & ((((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x27U))) 
                                    & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 0x28U))) 
                                   & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                  << 6U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                            << 5U)) 
                                | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x28U)) 
                                     & (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                    << 6U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                              << 5U)))) 
                | (0xffffffe0U & ((((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                  >> 0x27U))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                 >> 0x28U))) 
                                     & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                    << 5U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                              << 4U)) 
                                  | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x28U)) 
                                       & (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                      << 5U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                << 4U))))) 
               & ((~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                  << 5U)) | ((((0xfffffff0U & (((((
                                                   (~ (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x27U))) 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                              >> 0x28U))) 
                                                  & (3U 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                 << 4U) 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                   << 3U)) 
                                               | ((((IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 0x28U)) 
                                                    & (3U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                   << 4U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                     << 3U)))) 
                               | (0xfffffff8U & (((
                                                   (((~ (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                 >> 0x27U))) 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                >> 0x28U))) 
                                                    & (4U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                   << 3U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                     << 2U)) 
                                                 | ((((IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x28U)) 
                                                      & (4U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                     << 3U) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                       << 2U))))) 
                              & ((~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                                 << 3U)) | (((0xfffffffcU 
                                              & ((((((~ (IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                 >> 0x27U))) 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                >> 0x28U))) 
                                                    & (1U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                   << 2U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                     << 1U)) 
                                                 | ((((IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 0x28U)) 
                                                      & (1U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                     << 2U) 
                                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                       << 1U)))) 
                                             | (0xfffffffeU 
                                                & ((((((~ (IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                   >> 0x27U))) 
                                                       & (IData)(
                                                                 (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                  >> 0x28U))) 
                                                      & (2U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                     << 1U) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d)) 
                                                   | ((((IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                 >> 0x28U)) 
                                                        & (2U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                       << 1U) 
                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d))))) 
                                            & ((~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                                               << 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__1__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__1__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__2__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[1U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__2__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__3__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[2U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__3__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__4__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[3U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__4__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__5__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[4U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__5__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__6__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[5U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__6__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__7__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[6U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__7__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__8__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x80U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[7U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__8__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__9__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x100U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[8U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__9__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__10__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x200U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[9U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__10__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__11__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x400U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xaU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__11__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__12__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x800U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xbU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__12__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__13__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x1000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xcU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__13__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__14__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x2000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xdU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__14__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__15__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x4000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xeU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__15__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__16__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x8000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0xfU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__16__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__17__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x10U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__17__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__18__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x11U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__18__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__19__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x12U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__19__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__20__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x80000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x13U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__20__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__21__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x100000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x14U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__21__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__22__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x200000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x15U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__22__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__23__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x400000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x16U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__23__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__24__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x800000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x17U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__24__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__25__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x1000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x18U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__25__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__26__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x2000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x19U]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__26__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__27__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x4000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1aU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__27__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__28__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x8000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1bU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__28__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__29__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1cU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__29__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x20000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1dU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__30__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x40000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_bank_wr_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT__gpr_in[0x1eU]
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__arf__DOT____Vcellout__gpr_banks__BRA__0__KET____DOT__gpr__BRA__31__KET____DOT__gprff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc2 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_lo_dc2) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_hi_dc2)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2)) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
               >> 0xeU)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc2)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__lsu_full_hit_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc3_clken)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc2)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc3));
}
