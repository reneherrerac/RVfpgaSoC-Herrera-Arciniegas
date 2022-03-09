// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_axi_mux__pi4.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4::_combo__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrvfpgasim_axi_mux__pi4::_combo__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__5\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp106[3];
    WData/*95:0*/ __Vtemp107[3];
    WData/*95:0*/ __Vtemp110[3];
    WData/*95:0*/ __Vtemp111[3];
    WData/*95:0*/ __Vtemp114[3];
    WData/*95:0*/ __Vtemp115[3];
    WData/*95:0*/ __Vtemp127[3];
    WData/*95:0*/ __Vtemp128[3];
    WData/*95:0*/ __Vtemp131[3];
    WData/*95:0*/ __Vtemp132[3];
    WData/*95:0*/ __Vtemp135[3];
    WData/*95:0*/ __Vtemp136[3];
    // Body
    this->__PVT__gen_mux__DOT__slv_r_readies = ((6U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_r_readies)) 
                                                | (1U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0U]));
    this->__PVT__gen_mux__DOT__slv_b_readies = ((6U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_b_readies)) 
                                                | (1U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[2U] 
                                                      >> 4U)));
    this->__PVT__gen_mux__DOT__slv_r_readies = ((5U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_r_readies)) 
                                                | (2U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[6U] 
                                                      >> 0x18U)));
    this->__PVT__gen_mux__DOT__slv_b_readies = ((5U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_b_readies)) 
                                                | (2U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[8U] 
                                                      >> 0x1cU)));
    this->__PVT__gen_mux__DOT__slv_r_readies = ((3U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_r_readies)) 
                                                | (4U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
                                                      >> 0x10U)));
    this->__PVT__gen_mux__DOT__slv_b_readies = ((3U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_b_readies)) 
                                                | (4U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
                                                      >> 0x14U)));
    __Vtemp106[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[1U] 
                       << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0U] 
                                    >> 2U));
    __Vtemp106[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[2U] 
                       << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[1U] 
                                    >> 2U));
    __Vtemp106[2U] = (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[3U] 
                             << 0x1eU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[2U] 
                                          >> 2U)));
    VL_EXTEND_WW(68,66, __Vtemp107, __Vtemp106);
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp107[0U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp107[1U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp107[2U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[2U] 
                             << 0x1eU)));
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[2U] 
                 >> 2U));
    __Vtemp110[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[7U] 
                       << 5U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[6U] 
                                 >> 0x1bU));
    __Vtemp110[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[8U] 
                       << 5U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[7U] 
                                 >> 0x1bU));
    __Vtemp110[2U] = (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[9U] 
                             << 5U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[8U] 
                                       >> 0x1bU)));
    VL_EXTEND_WW(68,66, __Vtemp111, __Vtemp110);
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp111[0U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp111[1U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp111[2U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[8U] 
                             << 5U)));
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0x3fffffffU & (4U | (3U & ((0x3fffffe0U 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[9U] 
                                          << 5U)) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[8U] 
                                       >> 0x1bU)))));
    __Vtemp114[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xeU] 
                       << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
                                   >> 0x14U));
    __Vtemp114[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
                       << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xeU] 
                                   >> 0x14U));
    __Vtemp114[2U] = (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x10U] 
                             << 0xcU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
                                         >> 0x14U)));
    VL_EXTEND_WW(68,66, __Vtemp115, __Vtemp114);
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp115[0U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp115[1U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp115[2U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
                             << 0xcU)));
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0x3fffffffU & (8U | (3U & ((0x3ffff000U 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x10U] 
                                          << 0xcU)) 
                                      | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
                                         >> 0x14U)))));
    this->__PVT__gen_mux__DOT__slv_w_valids = ((6U 
                                                & (IData)(this->__PVT__gen_mux__DOT__slv_w_valids)) 
                                               | (1U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[2U] 
                                                     >> 5U)));
    this->__PVT__gen_mux__DOT__slv_w_valids = ((5U 
                                                & (IData)(this->__PVT__gen_mux__DOT__slv_w_valids)) 
                                               | (2U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[8U] 
                                                     >> 0x1dU)));
    this->__PVT__gen_mux__DOT__slv_w_valids = ((3U 
                                                & (IData)(this->__PVT__gen_mux__DOT__slv_w_valids)) 
                                               | (4U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
                                                     >> 0x15U)));
    this->__PVT__gen_mux__DOT__slv_w_chans[0U] = ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[3U] 
                                                   << 0x1aU) 
                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[2U] 
                                                     >> 6U));
    this->__PVT__gen_mux__DOT__slv_w_chans[1U] = ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[4U] 
                                                   << 0x1aU) 
                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[3U] 
                                                     >> 6U));
    this->__PVT__gen_mux__DOT__slv_w_chans[2U] = ((0xfffffc00U 
                                                   & this->__PVT__gen_mux__DOT__slv_w_chans[2U]) 
                                                  | (0x3ffU 
                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[5U] 
                                                         << 0x1aU) 
                                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[4U] 
                                                           >> 6U))));
    this->__PVT__gen_mux__DOT__slv_w_chans[2U] = ((0x3ffU 
                                                   & this->__PVT__gen_mux__DOT__slv_w_chans[2U]) 
                                                  | (0xfffffc00U 
                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[9U] 
                                                         << 0xbU) 
                                                        | (0x400U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[8U] 
                                                              >> 0x15U)))));
    this->__PVT__gen_mux__DOT__slv_w_chans[3U] = ((0x3ffU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[9U] 
                                                      >> 0x15U)) 
                                                  | (0xfffffc00U 
                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xaU] 
                                                         << 0xbU) 
                                                        | (0x400U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[9U] 
                                                              >> 0x15U)))));
    this->__PVT__gen_mux__DOT__slv_w_chans[4U] = ((0xfff00000U 
                                                   & this->__PVT__gen_mux__DOT__slv_w_chans[4U]) 
                                                  | ((0x3ffU 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xaU] 
                                                         >> 0x15U)) 
                                                     | (0xffc00U 
                                                        & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xbU] 
                                                            << 0xbU) 
                                                           | (0x400U 
                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xaU] 
                                                                 >> 0x15U))))));
    this->__PVT__gen_mux__DOT__slv_w_chans[4U] = ((0xfffffU 
                                                   & this->__PVT__gen_mux__DOT__slv_w_chans[4U]) 
                                                  | (0xfff00000U 
                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x10U] 
                                                         << 0x1cU) 
                                                        | (0xff00000U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xfU] 
                                                              >> 4U)))));
    this->__PVT__gen_mux__DOT__slv_w_chans[5U] = ((0xfffffU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x10U] 
                                                      >> 4U)) 
                                                  | (0xfff00000U 
                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x11U] 
                                                         << 0x1cU) 
                                                        | (0xff00000U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x10U] 
                                                              >> 4U)))));
    this->__PVT__gen_mux__DOT__slv_w_chans[6U] = ((0xfffffU 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x11U] 
                                                      >> 4U)) 
                                                  | (0x3ff00000U 
                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x12U] 
                                                         << 0x1cU) 
                                                        | (0xff00000U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x11U] 
                                                              >> 4U)))));
    __Vtemp127[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[5U] 
                       << 0xfU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[4U] 
                                   >> 0x11U));
    __Vtemp127[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[6U] 
                       << 0xfU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[5U] 
                                   >> 0x11U));
    __Vtemp127[2U] = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[7U] 
                                << 0xfU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[6U] 
                                            >> 0x11U)));
    VL_EXTEND_WW(74,72, __Vtemp128, __Vtemp127);
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp128[0U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp128[1U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp128[2U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xf0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[7U] 
                        << 0xfU) | (0x7ff0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[6U] 
                                               >> 0x11U)))));
    __Vtemp131[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xcU] 
                       << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xbU] 
                                    >> 0xaU));
    __Vtemp131[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
                       << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xcU] 
                                    >> 0xaU));
    __Vtemp131[2U] = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xeU] 
                                << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
                                             >> 0xaU)));
    VL_EXTEND_WW(74,72, __Vtemp132, __Vtemp131);
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp132[0U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp132[1U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp132[2U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffff0U & (0x100U | (0xf0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xeU] 
                                                 << 0x16U) 
                                                | (0x3ffff0U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
                                                      >> 0xaU)))))));
    __Vtemp135[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x13U] 
                       << 0x1dU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x12U] 
                                    >> 3U));
    __Vtemp135[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
                       << 0x1dU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x13U] 
                                    >> 3U));
    __Vtemp135[2U] = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x15U] 
                                << 0x1dU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
                                             >> 3U)));
    VL_EXTEND_WW(74,72, __Vtemp136, __Vtemp135);
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp136[0U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp136[1U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp136[2U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffff0U & (0x200U | (0xf0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x15U] 
                                                 << 0x1dU) 
                                                | (0x1ffffff0U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
                                                      >> 3U)))))));
    this->__PVT__gen_mux__DOT__slv_ar_valids = ((6U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_ar_valids)) 
                                                | (1U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0U] 
                                                      >> 1U)));
    this->__PVT__gen_mux__DOT__slv_ar_valids = ((5U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_ar_valids)) 
                                                | (2U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[6U] 
                                                      >> 0x19U)));
    this->__PVT__gen_mux__DOT__slv_ar_valids = ((3U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_ar_valids)) 
                                                | (4U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xdU] 
                                                      >> 0x11U)));
    this->__PVT__gen_mux__DOT__slv_aw_valids = ((6U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_aw_valids)) 
                                                | (1U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[4U] 
                                                      >> 0x10U)));
    this->__PVT__gen_mux__DOT__slv_aw_valids = ((5U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_aw_valids)) 
                                                | (2U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0xbU] 
                                                      >> 8U)));
    this->__PVT__gen_mux__DOT__slv_aw_valids = ((3U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_aw_valids)) 
                                                | (4U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x12U]));
    this->__PVT__gen_mux__DOT__slv_ar_chans[0U] = this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    this->__PVT__gen_mux__DOT__slv_ar_chans[1U] = this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    this->__PVT__gen_mux__DOT__slv_ar_chans[2U] = (
                                                   (0xfffffff0U 
                                                    & this->__PVT__gen_mux__DOT__slv_ar_chans[2U]) 
                                                   | this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    this->__PVT__gen_mux__DOT__slv_ar_chans[2U] = (
                                                   (0xfU 
                                                    & this->__PVT__gen_mux__DOT__slv_ar_chans[2U]) 
                                                   | (0xfffffff0U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                                                         << 4U)));
    this->__PVT__gen_mux__DOT__slv_ar_chans[3U] = (
                                                   (0xfU 
                                                    & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                                                       >> 0x1cU)) 
                                                   | (0xfffffff0U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                                         << 4U)));
    this->__PVT__gen_mux__DOT__slv_ar_chans[4U] = (
                                                   (0xffffff00U 
                                                    & this->__PVT__gen_mux__DOT__slv_ar_chans[4U]) 
                                                   | ((0xfU 
                                                       & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                                          >> 0x1cU)) 
                                                      | (0xfffffff0U 
                                                         & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                                            << 4U))));
    this->__PVT__gen_mux__DOT__slv_ar_chans[4U] = (
                                                   (0xffU 
                                                    & this->__PVT__gen_mux__DOT__slv_ar_chans[4U]) 
                                                   | (0xffffff00U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                                                         << 8U)));
    this->__PVT__gen_mux__DOT__slv_ar_chans[5U] = (
                                                   (0xffU 
                                                    & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                                                       >> 0x18U)) 
                                                   | (0xffffff00U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                                         << 8U)));
    this->__PVT__gen_mux__DOT__slv_ar_chans[6U] = (
                                                   (0xffU 
                                                    & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                                       >> 0x18U)) 
                                                   | (0xffffff00U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                                         << 8U)));
    this->__PVT__gen_mux__DOT__slv_aw_chans[0U] = this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U];
    this->__PVT__gen_mux__DOT__slv_aw_chans[1U] = this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U];
    this->__PVT__gen_mux__DOT__slv_aw_chans[2U] = (
                                                   (0xfffffc00U 
                                                    & this->__PVT__gen_mux__DOT__slv_aw_chans[2U]) 
                                                   | this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]);
    this->__PVT__gen_mux__DOT__slv_aw_chans[2U] = (
                                                   (0x3ffU 
                                                    & this->__PVT__gen_mux__DOT__slv_aw_chans[2U]) 
                                                   | (0xfffffc00U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                                                         << 0xaU)));
    this->__PVT__gen_mux__DOT__slv_aw_chans[3U] = (
                                                   (0x3ffU 
                                                    & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                                                       >> 0x16U)) 
                                                   | (0xfffffc00U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                                         << 0xaU)));
    this->__PVT__gen_mux__DOT__slv_aw_chans[4U] = (
                                                   (0xfff00000U 
                                                    & this->__PVT__gen_mux__DOT__slv_aw_chans[4U]) 
                                                   | ((0x3ffU 
                                                       & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                                          >> 0x16U)) 
                                                      | (0xfffffc00U 
                                                         & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                                            << 0xaU))));
    this->__PVT__gen_mux__DOT__slv_aw_chans[4U] = (
                                                   (0xfffffU 
                                                    & this->__PVT__gen_mux__DOT__slv_aw_chans[4U]) 
                                                   | (0xfff00000U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                                                         << 0x14U)));
    this->__PVT__gen_mux__DOT__slv_aw_chans[5U] = (
                                                   (0xfffffU 
                                                    & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                                                       >> 0xcU)) 
                                                   | (0xfff00000U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                                         << 0x14U)));
    this->__PVT__gen_mux__DOT__slv_aw_chans[6U] = (
                                                   (0xfffffU 
                                                    & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                                       >> 0xcU)) 
                                                   | (0xfff00000U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                                         << 0x14U)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4::_sequent__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__7(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrvfpgasim_axi_mux__pi4::_sequent__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__7\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0)
            ? (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n)
            : 0U);
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) {
        if (this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
    } else {
        this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) {
        if (this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) {
            this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] 
                = this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U];
            this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] 
                = this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U];
            this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] 
                = this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U];
        }
    } else {
        this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U] = 0U;
        this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U] = 0U;
        this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U] = 0U;
    }
    this->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0)
            ? (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n)
            : 0U);
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) {
        if ((1U & (~ (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock)))) {
            this->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q 
                = this->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n;
        }
    } else {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) {
        this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q 
            = this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
        this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
            = this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d;
    } else {
        this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q = 0U;
        this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) {
        if (((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
    } else {
        this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) {
        if (((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
    } else {
        this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
    }
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) 
           & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
              & (~ (IData)(this->__PVT__gen_mux__DOT__ar_ready))));
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q 
            = this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n;
        this->__PVT__gen_mux__DOT__lock_aw_valid_q 
            = (((IData)(this->__PVT__gen_mux__DOT__load_aw_lock)
                 ? (IData)(this->__PVT__gen_mux__DOT__lock_aw_valid_d)
                 : (IData)(this->__PVT__gen_mux__DOT__lock_aw_valid_q)) 
               & 1U);
    } else {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q = 0U;
        this->__PVT__gen_mux__DOT__lock_aw_valid_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) {
        if (((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) 
             | (IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain))) {
            this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q 
                = this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill;
        }
    } else {
        this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) {
        if (((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill) 
             | (IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain))) {
            this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q 
                = this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill;
        }
    } else {
        this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q = 0U;
    }
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) 
           & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
              & (~ (IData)(this->__PVT__gen_mux__DOT__aw_ready))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0)
            ? (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)
            : 0U);
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) {
        if (this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
            this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
            this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0xfU & this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
        }
    } else {
        this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) {
        if (this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill) {
            this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] 
                = this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U];
            this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] 
                = this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U];
            this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] 
                = (0x3ffU & this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]);
        }
    } else {
        this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U] = 0U;
        this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U] = 0U;
        this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U] = 0U;
    }
    this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o 
        = ((0xbU >= (0xfU & ((IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q) 
                             << 1U))) ? (3U & ((IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q) 
                                               >> (0xfU 
                                                   & ((IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q) 
                                                      << 1U))))
            : 0U);
    this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__PVT__gen_mux__DOT__ar_ready = (1U & ((~ (IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                 | (~ (IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain 
        = ((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
           & (~ (IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)));
    this->__PVT__gen_mux__DOT__mst_aw_ready = (1U & 
                                               ((~ (IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q)) 
                                                | (~ (IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (IData)(this->__PVT__gen_mux__DOT__ar_ready));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4::_sequent__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__9(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrvfpgasim_axi_mux__pi4::_sequent__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__9\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_mux__DOT__slv_b_valids = ((0x100000U 
                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U])
                                                ? (7U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                                           << 0xeU) 
                                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                                             >> 0x12U)))))
                                                : 0U);
    this->__PVT__gen_mux__DOT__slv_r_valids = ((0x400U 
                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U])
                                                ? (7U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                                           << 0x18U) 
                                                          | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                                             >> 8U)))))
                                                : 0U);
    this->__PVT__slv_resps_o[2U] = ((0xfffe01ffU & 
                                     this->__PVT__slv_resps_o[2U]) 
                                    | (0xfffffe00U 
                                       & ((0x10000U 
                                           & ((IData)(this->__PVT__gen_mux__DOT__slv_b_valids) 
                                              << 0x10U)) 
                                          | (0xfe00U 
                                             & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                                 << 0x1eU) 
                                                | (0x3ffffe00U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                                      >> 2U)))))));
    this->__PVT__slv_resps_o[4U] = ((0x1fffffffU & 
                                     this->__PVT__slv_resps_o[4U]) 
                                    | (0xe0000000U 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                          << 0x12U)));
    this->__PVT__slv_resps_o[5U] = ((0xffffffe0U & 
                                     this->__PVT__slv_resps_o[5U]) 
                                    | (0x1fffffffU 
                                       & ((0x10U & 
                                           ((IData)(this->__PVT__gen_mux__DOT__slv_b_valids) 
                                            << 3U)) 
                                          | (0xfU & 
                                             ((0x1ffc0000U 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                                  << 0x12U)) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                                 >> 0xeU))))));
    this->__PVT__slv_resps_o[7U] = ((0xe01ffffU & this->__PVT__slv_resps_o[7U]) 
                                    | (0xfffe0000U 
                                       & ((0x1000000U 
                                           & ((IData)(this->__PVT__gen_mux__DOT__slv_b_valids) 
                                              << 0x16U)) 
                                          | (0xfe0000U 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                                << 6U)))));
    this->__PVT__slv_resps_o[0U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[0U];
    this->__PVT__slv_resps_o[1U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[1U];
    this->__PVT__slv_resps_o[2U] = ((0xfffffe00U & 
                                     this->__PVT__slv_resps_o[2U]) 
                                    | ((0x100U & ((IData)(this->__PVT__gen_mux__DOT__slv_r_valids) 
                                                  << 8U)) 
                                       | (0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U])));
    this->__PVT__slv_resps_o[2U] = ((0xfffffU & this->__PVT__slv_resps_o[2U]) 
                                    | (0xfff00000U 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[0U] 
                                          << 0x14U)));
    this->__PVT__slv_resps_o[3U] = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[0U] 
                                                 >> 0xcU)) 
                                    | (0xfff00000U 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[1U] 
                                          << 0x14U)));
    this->__PVT__slv_resps_o[4U] = ((0xe0000000U & 
                                     this->__PVT__slv_resps_o[4U]) 
                                    | ((0xfffffU & 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[1U] 
                                         >> 0xcU)) 
                                       | (0xfff00000U 
                                          & ((0x10000000U 
                                              & ((IData)(this->__PVT__gen_mux__DOT__slv_r_valids) 
                                                 << 0x1bU)) 
                                             | (0xff00000U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                                   << 0x14U))))));
    this->__PVT__slv_resps_o[5U] = ((0xffU & this->__PVT__slv_resps_o[5U]) 
                                    | (0xffffff00U 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[0U] 
                                          << 8U)));
    this->__PVT__slv_resps_o[6U] = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[0U] 
                                              >> 0x18U)) 
                                    | (0xffffff00U 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[1U] 
                                          << 8U)));
    this->__PVT__slv_resps_o[7U] = ((0xffe0000U & this->__PVT__slv_resps_o[7U]) 
                                    | ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[1U] 
                                                 >> 0x18U)) 
                                       | (0xffffff00U 
                                          & ((0x10000U 
                                              & ((IData)(this->__PVT__gen_mux__DOT__slv_r_valids) 
                                                 << 0xeU)) 
                                             | (0xff00U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                                   << 8U))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4::_combo__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__11(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrvfpgasim_axi_mux__pi4::_combo__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__11\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp192[3];
    WData/*95:0*/ __Vtemp198[3];
    // Body
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(this->__PVT__gen_mux__DOT__slv_ar_valids));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(this->__PVT__gen_mux__DOT__slv_aw_valids));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xffU & this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U]) 
           | (0xffffff00U & this->__PVT__gen_mux__DOT__slv_ar_chans[4U]));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xffU & this->__PVT__gen_mux__DOT__slv_ar_chans[5U]) 
           | (0xffffff00U & this->__PVT__gen_mux__DOT__slv_ar_chans[5U]));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((0xffU & this->__PVT__gen_mux__DOT__slv_ar_chans[6U]) 
           | (0xf00U & this->__PVT__gen_mux__DOT__slv_ar_chans[6U]));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xfffffU & this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U]) 
           | (0xfff00000U & this->__PVT__gen_mux__DOT__slv_aw_chans[4U]));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xfffffU & this->__PVT__gen_mux__DOT__slv_aw_chans[5U]) 
           | (0xfff00000U & this->__PVT__gen_mux__DOT__slv_aw_chans[5U]));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((0xfffffU & this->__PVT__gen_mux__DOT__slv_aw_chans[6U]) 
           | (0x3ff00000U & this->__PVT__gen_mux__DOT__slv_aw_chans[6U]));
    this->__PVT__gen_mux__DOT__mst_w_valid = 0U;
    if ((0U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        this->__PVT__gen_mux__DOT__mst_w_valid = ((2U 
                                                   >= (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                  & ((IData)(this->__PVT__gen_mux__DOT__slv_w_valids) 
                                                     >> (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)));
    }
    if ((0xddU >= (0xffU & ((IData)(0x4aU) * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))) {
        this->__PVT__gen_mux__DOT__mst_w_chan[0U] = 
            (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
               ? 0U : (this->__PVT__gen_mux__DOT__slv_w_chans[
                       ((IData)(1U) + (7U & (((IData)(0x4aU) 
                                              * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                             >> 5U)))] 
                       << ((IData)(0x20U) - (0x1fU 
                                             & ((IData)(0x4aU) 
                                                * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
             | (this->__PVT__gen_mux__DOT__slv_w_chans[
                (7U & (((IData)(0x4aU) * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                       >> 5U))] >> (0x1fU & ((IData)(0x4aU) 
                                             * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        this->__PVT__gen_mux__DOT__mst_w_chan[1U] = 
            (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
               ? 0U : (this->__PVT__gen_mux__DOT__slv_w_chans[
                       ((IData)(2U) + (7U & (((IData)(0x4aU) 
                                              * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                             >> 5U)))] 
                       << ((IData)(0x20U) - (0x1fU 
                                             & ((IData)(0x4aU) 
                                                * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
             | (this->__PVT__gen_mux__DOT__slv_w_chans[
                ((IData)(1U) + (7U & (((IData)(0x4aU) 
                                       * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                      >> 5U)))] >> 
                (0x1fU & ((IData)(0x4aU) * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        this->__PVT__gen_mux__DOT__mst_w_chan[2U] = 
            (0x3ffU & (((0U == (0x1fU & ((IData)(0x4aU) 
                                         * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                         ? 0U : (this->__PVT__gen_mux__DOT__slv_w_chans[
                                 ((IData)(3U) + (7U 
                                                 & (((IData)(0x4aU) 
                                                     * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                    >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & ((IData)(0x4aU) 
                                                 * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
                       | (this->__PVT__gen_mux__DOT__slv_w_chans[
                          ((IData)(2U) + (7U & (((IData)(0x4aU) 
                                                 * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                >> 5U)))] 
                          >> (0x1fU & ((IData)(0x4aU) 
                                       * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))));
    } else {
        this->__PVT__gen_mux__DOT__mst_w_chan[0U] = 0U;
        this->__PVT__gen_mux__DOT__mst_w_chan[1U] = 0U;
        this->__PVT__gen_mux__DOT__mst_w_chan[2U] = 0U;
    }
    this->__PVT__gen_mux__DOT__slv_ar_readies = ((3U 
                                                  & (IData)(this->__PVT__gen_mux__DOT__slv_ar_readies)) 
                                                 | (4U 
                                                    & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (4U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (1U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (0xfffffffeU & (((1U <= (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (0xfffffffcU & (((2U <= (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 2U) & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffeU & (((1U > (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffcU & (((2U > (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 2U) & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (1U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (0xfffffffeU & (((1U <= (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (0xfffffffcU & (((2U <= (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 2U) & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffeU & (((1U > (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffcU & (((2U > (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 2U) & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (4U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)));
    this->__PVT__mst_req_o[0U] = ((0xfffffffcU & (((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                    ? 
                                                   this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                                    : 
                                                   this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                                  << 2U)) 
                                  | ((((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                       | (IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                      << 1U) | ((2U 
                                                 >= 
                                                 (3U 
                                                  & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                                      << 0x18U) 
                                                     | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                                        >> 8U)))) 
                                                & ((IData)(this->__PVT__gen_mux__DOT__slv_r_readies) 
                                                   >> 
                                                   (3U 
                                                    & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                                        << 0x18U) 
                                                       | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                                          >> 8U)))))));
    this->__PVT__mst_req_o[1U] = ((3U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                           : this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                         >> 0x1eU)) 
                                  | (0xfffffffcU & 
                                     (((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                        : this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                      << 2U)));
    this->__PVT__mst_req_o[2U] = ((0xffffff00U & (this->__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                                  << 8U)) 
                                  | ((0xffffff80U & 
                                      ((IData)(this->__PVT__gen_mux__DOT__mst_w_valid) 
                                       << 7U)) | ((0xffffffc0U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                                             << 0xeU) 
                                                            | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                                               >> 0x12U)))) 
                                                       & ((IData)(this->__PVT__gen_mux__DOT__slv_b_readies) 
                                                          >> 
                                                          (3U 
                                                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                                               << 0xeU) 
                                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                                                 >> 0x12U))))) 
                                                      << 6U)) 
                                                  | ((3U 
                                                      & (((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                           ? 
                                                          this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                           : 
                                                          this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                         >> 0x1eU)) 
                                                     | (0xfffffffcU 
                                                        & (((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                             ? 
                                                            this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                             : 
                                                            this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                           << 2U))))));
    this->__PVT__mst_req_o[3U] = ((0xffU & (this->__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                            >> 0x18U)) 
                                  | (0xffffff00U & 
                                     (this->__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                      << 8U)));
    this->__PVT__mst_req_o[4U] = ((0xfff80000U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                    ? 
                                                   this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                                    : 
                                                   this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                                  << 0x13U)) 
                                  | ((0xfffc0000U & 
                                      (((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                        | (IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                       << 0x12U)) | 
                                     ((0xffU & (this->__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                                >> 0x18U)) 
                                      | (0xffffff00U 
                                         & (this->__PVT__gen_mux__DOT__mst_w_chan[2U] 
                                            << 8U)))));
    this->__PVT__mst_req_o[5U] = ((0x7ffffU & (((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                 ? 
                                                this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                                 : 
                                                this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                               >> 0xdU)) 
                                  | (0xfff80000U & 
                                     (((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                        : this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                      << 0x13U)));
    this->__PVT__mst_req_o[6U] = ((0x7ffffU & (((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                 ? 
                                                this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                 : 
                                                this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                               >> 0xdU)) 
                                  | (0xfff80000U & 
                                     (((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                        : this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                      << 0x13U)));
    this->__PVT__gen_mux__DOT__w_fifo_pop = 0U;
    if ((0U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        this->__PVT__gen_mux__DOT__w_fifo_pop = (((
                                                   (2U 
                                                    >= (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                   & ((IData)(this->__PVT__gen_mux__DOT__slv_w_valids) 
                                                      >> (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                                     >> 0x15U)) 
                                                 & (this->__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                                    >> 1U));
    }
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                               >> 2U))));
    this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
           & (IData)(this->__PVT__gen_mux__DOT__ar_ready));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1 
        = (1U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1));
    this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1) 
              << 1U));
    this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1) 
              << 2U));
    this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1 
        = (1U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1));
    this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1) 
              << 1U));
    this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1) 
              << 2U));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x33U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = ((0xfU & this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]) 
           | (0xfffffff0U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                               ? ((this->__PVT__gen_mux__DOT__slv_ar_chans[3U] 
                                   << 0x1cU) | (this->__PVT__gen_mux__DOT__slv_ar_chans[2U] 
                                                >> 4U))
                               : this->__PVT__gen_mux__DOT__slv_ar_chans[0U]) 
                             << 4U)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((0xfU & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((this->__PVT__gen_mux__DOT__slv_ar_chans[3U] 
                          << 0x1cU) | (this->__PVT__gen_mux__DOT__slv_ar_chans[2U] 
                                       >> 4U)) : this->__PVT__gen_mux__DOT__slv_ar_chans[0U]) 
                    >> 0x1cU)) | (0xfffffff0U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((this->__PVT__gen_mux__DOT__slv_ar_chans[4U] 
                                                    << 0x1cU) 
                                                   | (this->__PVT__gen_mux__DOT__slv_ar_chans[3U] 
                                                      >> 4U))
                                                   : 
                                                  this->__PVT__gen_mux__DOT__slv_ar_chans[1U]) 
                                                 << 4U)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xffffff00U & this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U]) 
           | ((0xfU & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                         ? ((this->__PVT__gen_mux__DOT__slv_ar_chans[4U] 
                             << 0x1cU) | (this->__PVT__gen_mux__DOT__slv_ar_chans[3U] 
                                          >> 4U)) : 
                        this->__PVT__gen_mux__DOT__slv_ar_chans[1U]) 
                       >> 0x1cU)) | (0xf0U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                ? (
                                                   (this->__PVT__gen_mux__DOT__slv_ar_chans[5U] 
                                                    << 0x1cU) 
                                                   | (this->__PVT__gen_mux__DOT__slv_ar_chans[4U] 
                                                      >> 4U))
                                                : this->__PVT__gen_mux__DOT__slv_ar_chans[2U]) 
                                              << 4U))));
    this->__PVT__gen_mux__DOT__slv_ar_readies = ((6U 
                                                  & (IData)(this->__PVT__gen_mux__DOT__slv_ar_readies)) 
                                                 | (1U 
                                                    & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                        >> 1U) 
                                                       & (~ (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))));
    this->__PVT__gen_mux__DOT__slv_ar_readies = ((5U 
                                                  & (IData)(this->__PVT__gen_mux__DOT__slv_ar_readies)) 
                                                 | (0xfffffffeU 
                                                    & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                          << 1U))));
    this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1 
        = (1U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1));
    this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1) 
              << 1U));
    this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1) 
              << 2U));
    this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1 
        = (1U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1));
    this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1) 
              << 1U));
    this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1) 
              << 2U));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x33U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = ((0x3ffU & this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]) 
           | (0xfffffc00U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                               ? ((this->__PVT__gen_mux__DOT__slv_aw_chans[3U] 
                                   << 0x16U) | (this->__PVT__gen_mux__DOT__slv_aw_chans[2U] 
                                                >> 0xaU))
                               : this->__PVT__gen_mux__DOT__slv_aw_chans[0U]) 
                             << 0xaU)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((0x3ffU & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((this->__PVT__gen_mux__DOT__slv_aw_chans[3U] 
                            << 0x16U) | (this->__PVT__gen_mux__DOT__slv_aw_chans[2U] 
                                         >> 0xaU)) : 
                       this->__PVT__gen_mux__DOT__slv_aw_chans[0U]) 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                     ? 
                                                    ((this->__PVT__gen_mux__DOT__slv_aw_chans[4U] 
                                                      << 0x16U) 
                                                     | (this->__PVT__gen_mux__DOT__slv_aw_chans[3U] 
                                                        >> 0xaU))
                                                     : 
                                                    this->__PVT__gen_mux__DOT__slv_aw_chans[1U]) 
                                                   << 0xaU)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xfff00000U & this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U]) 
           | ((0x3ffU & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((this->__PVT__gen_mux__DOT__slv_aw_chans[4U] 
                               << 0x16U) | (this->__PVT__gen_mux__DOT__slv_aw_chans[3U] 
                                            >> 0xaU))
                           : this->__PVT__gen_mux__DOT__slv_aw_chans[1U]) 
                         >> 0x16U)) | (0xffc00U & (
                                                   ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                     ? 
                                                    ((this->__PVT__gen_mux__DOT__slv_aw_chans[5U] 
                                                      << 0x16U) 
                                                     | (this->__PVT__gen_mux__DOT__slv_aw_chans[4U] 
                                                        >> 0xaU))
                                                     : 
                                                    this->__PVT__gen_mux__DOT__slv_aw_chans[2U]) 
                                                   << 0xaU))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                               >> 2U))));
    this->__PVT__gen_mux__DOT__lock_aw_valid_d = this->__PVT__gen_mux__DOT__lock_aw_valid_q;
    if (this->__PVT__gen_mux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_mux__DOT__mst_aw_ready) {
            this->__PVT__gen_mux__DOT__lock_aw_valid_d = 0U;
        }
    } else {
        if (((6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
            if ((1U & (~ (IData)(this->__PVT__gen_mux__DOT__mst_aw_ready)))) {
                this->__PVT__gen_mux__DOT__lock_aw_valid_d = 1U;
            }
        }
    }
    this->__PVT__gen_mux__DOT__load_aw_lock = 0U;
    if (this->__PVT__gen_mux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_mux__DOT__mst_aw_ready) {
            this->__PVT__gen_mux__DOT__load_aw_lock = 1U;
        }
    } else {
        if (((6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
            if ((1U & (~ (IData)(this->__PVT__gen_mux__DOT__mst_aw_ready)))) {
                this->__PVT__gen_mux__DOT__load_aw_lock = 1U;
            }
        }
    }
    this->__PVT__gen_mux__DOT__mst_aw_valid = 0U;
    if (this->__PVT__gen_mux__DOT__lock_aw_valid_q) {
        this->__PVT__gen_mux__DOT__mst_aw_valid = 1U;
    } else {
        if (((6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
            this->__PVT__gen_mux__DOT__mst_aw_valid = 1U;
        }
    }
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    this->__PVT__gen_mux__DOT__w_fifo_push = 0U;
    if ((1U & (~ (IData)(this->__PVT__gen_mux__DOT__lock_aw_valid_q)))) {
        if (((6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
            this->__PVT__gen_mux__DOT__w_fifo_push = 1U;
        }
    }
    this->__PVT__gen_mux__DOT__aw_ready = 0U;
    if (this->__PVT__gen_mux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_mux__DOT__mst_aw_ready) {
            this->__PVT__gen_mux__DOT__aw_ready = 1U;
        }
    } else {
        if (((6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
            if (this->__PVT__gen_mux__DOT__mst_aw_ready) {
                this->__PVT__gen_mux__DOT__aw_ready = 1U;
            }
        }
    }
    this->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = this->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((5U == (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (7U & ((IData)(1U) + (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                     & (~ (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
               & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xdU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xbU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (4U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0xcU & (((1U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                        ? (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)
                        : ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut) 
                           >> 2U)) << 2U)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0xcU & (((1U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                        ? (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)
                        : ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut) 
                           >> 2U)) << 2U)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xdU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xbU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (4U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x3cU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                                                >> 2U))));
    if (this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        __Vtemp192[1U] = ((this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                           << 0x18U) | (this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                        >> 8U));
        __Vtemp192[2U] = (0xfU & (this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                  >> 8U));
        this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0x18U) | (this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                             >> 8U));
    } else {
        __Vtemp192[1U] = ((this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                           << 0x1cU) | (this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                        >> 4U));
        __Vtemp192[2U] = (0xfU & ((this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                   << 0x1cU) | (this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                >> 4U)));
        this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                << 0x1cU) | (this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                             >> 4U));
    }
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp192[1U];
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = ((0xfffffff0U & this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]) 
           | __Vtemp192[2U]);
    this->__PVT__slv_resps_o[2U] = ((0xfffbffffU & 
                                     this->__PVT__slv_resps_o[2U]) 
                                    | (0x40000U & ((IData)(this->__PVT__gen_mux__DOT__slv_ar_readies) 
                                                   << 0x12U)));
    this->__PVT__slv_resps_o[5U] = ((0xffffffbfU & 
                                     this->__PVT__slv_resps_o[5U]) 
                                    | (0x40U & ((IData)(this->__PVT__gen_mux__DOT__slv_ar_readies) 
                                                << 5U)));
    this->__PVT__slv_resps_o[7U] = ((0xbffffffU & this->__PVT__slv_resps_o[7U]) 
                                    | (0x4000000U & 
                                       ((IData)(this->__PVT__gen_mux__DOT__slv_ar_readies) 
                                        << 0x18U)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xdU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xbU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (4U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0xcU & (((1U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                        ? (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)
                        : ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut) 
                           >> 2U)) << 2U)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0xcU & (((1U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                        ? (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)
                        : ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut) 
                           >> 2U)) << 2U)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xdU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xbU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (4U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)));
    this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(this->__PVT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(this->__PVT__gen_mux__DOT__mst_aw_ready));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x3cU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                                                >> 2U))));
    if (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        __Vtemp198[1U] = ((this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                           << 0xcU) | (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                       >> 0x14U));
        __Vtemp198[2U] = (0x3ffU & (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                    >> 0x14U));
        this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0xcU) | (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                            >> 0x14U));
    } else {
        __Vtemp198[1U] = ((this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                           << 0x16U) | (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                        >> 0xaU));
        __Vtemp198[2U] = (0x3ffU & ((this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                     << 0x16U) | (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                  >> 0xaU)));
        this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                << 0x16U) | (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                             >> 0xaU));
    }
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp198[1U];
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = ((0xfffffc00U & this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]) 
           | __Vtemp198[2U]);
    this->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
    }
    this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((5U == (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))
                ? 0U : (7U & ((IData)(1U) + (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))));
    }
    this->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
        = this->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->gen_mux__DOT__i_w_fifo__DOT____Vlvbound1 
            = (3U & ((this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                      << 0x18U) | (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                   >> 8U)));
        if ((0xbU >= (0xfU & ((IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q) 
                              << 1U)))) {
            this->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(3U) << (0xfU & ((IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                                << 1U)))) 
                    & (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n)) 
                   | ((IData)(this->gen_mux__DOT__i_w_fifo__DOT____Vlvbound1) 
                      << (0xfU & ((IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                  << 1U))));
        }
    }
    this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
        = this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__gen_mux__DOT__w_fifo_push) 
           & (IData)(this->__PVT__gen_mux__DOT__w_fifo_pop)) 
          & (6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (IData)(this->__PVT__gen_mux__DOT__aw_ready));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes) 
                               >> 2U))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes) 
                               >> 2U))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(this->__PVT__gen_mux__DOT__ar_ready) 
                  & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes) 
                               >> 2U))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes) 
                               >> 2U))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(this->__PVT__gen_mux__DOT__aw_ready) 
                  & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                     & (~ (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
               & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    this->__PVT__gen_mux__DOT__slv_aw_readies = ((3U 
                                                  & (IData)(this->__PVT__gen_mux__DOT__slv_aw_readies)) 
                                                 | (4U 
                                                    & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)));
    this->__PVT__gen_mux__DOT__slv_aw_readies = ((6U 
                                                  & (IData)(this->__PVT__gen_mux__DOT__slv_aw_readies)) 
                                                 | (1U 
                                                    & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                        >> 1U) 
                                                       & (~ (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))));
    this->__PVT__gen_mux__DOT__slv_aw_readies = ((5U 
                                                  & (IData)(this->__PVT__gen_mux__DOT__slv_aw_readies)) 
                                                 | (0xfffffffeU 
                                                    & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                          << 1U))));
    this->__PVT__slv_resps_o[2U] = ((0xfff7ffffU & 
                                     this->__PVT__slv_resps_o[2U]) 
                                    | (0x80000U & ((IData)(this->__PVT__gen_mux__DOT__slv_aw_readies) 
                                                   << 0x13U)));
    this->__PVT__slv_resps_o[5U] = ((0xffffff7fU & 
                                     this->__PVT__slv_resps_o[5U]) 
                                    | (0x80U & ((IData)(this->__PVT__gen_mux__DOT__slv_aw_readies) 
                                                << 6U)));
    this->__PVT__slv_resps_o[7U] = ((0x7ffffffU & this->__PVT__slv_resps_o[7U]) 
                                    | (0x8000000U & 
                                       ((IData)(this->__PVT__gen_mux__DOT__slv_aw_readies) 
                                        << 0x19U)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4::_sequent__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__13(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrvfpgasim_axi_mux__pi4::_sequent__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux__13\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                 >> 0x17U)));
    this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
              >> 0x17U));
    this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                 >> 0x16U)));
    this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
              >> 0x16U));
    this->__PVT__gen_mux__DOT__slv_w_readies = 0U;
    if ((0U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        this->__Vlvbound1 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                   >> 0x15U));
        if ((2U >= (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) {
            this->__PVT__gen_mux__DOT__slv_w_readies 
                = (((~ ((IData)(1U) << (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                    & (IData)(this->__PVT__gen_mux__DOT__slv_w_readies)) 
                   | ((IData)(this->__Vlvbound1) << (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)));
        }
    }
    this->__PVT__slv_resps_o[2U] = ((0xfffdffffU & 
                                     this->__PVT__slv_resps_o[2U]) 
                                    | (0x20000U & ((IData)(this->__PVT__gen_mux__DOT__slv_w_readies) 
                                                   << 0x11U)));
    this->__PVT__slv_resps_o[5U] = ((0xffffffdfU & 
                                     this->__PVT__slv_resps_o[5U]) 
                                    | (0x20U & ((IData)(this->__PVT__gen_mux__DOT__slv_w_readies) 
                                                << 4U)));
    this->__PVT__slv_resps_o[7U] = ((0xdffffffU & this->__PVT__slv_resps_o[7U]) 
                                    | (0x2000000U & 
                                       ((IData)(this->__PVT__gen_mux__DOT__slv_w_readies) 
                                        << 0x17U)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4::_combo__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__6(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrvfpgasim_axi_mux__pi4::_combo__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__6\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp317[3];
    WData/*95:0*/ __Vtemp318[3];
    WData/*95:0*/ __Vtemp321[3];
    WData/*95:0*/ __Vtemp322[3];
    WData/*95:0*/ __Vtemp325[3];
    WData/*95:0*/ __Vtemp326[3];
    WData/*95:0*/ __Vtemp338[3];
    WData/*95:0*/ __Vtemp339[3];
    WData/*95:0*/ __Vtemp342[3];
    WData/*95:0*/ __Vtemp343[3];
    WData/*95:0*/ __Vtemp346[3];
    WData/*95:0*/ __Vtemp347[3];
    // Body
    this->__PVT__gen_mux__DOT__slv_r_readies = ((6U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_r_readies)) 
                                                | (1U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
                                                      >> 0xbU)));
    this->__PVT__gen_mux__DOT__slv_b_readies = ((6U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_b_readies)) 
                                                | (1U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
                                                      >> 0xfU)));
    this->__PVT__gen_mux__DOT__slv_r_readies = ((5U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_r_readies)) 
                                                | (2U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
                                                      >> 3U)));
    this->__PVT__gen_mux__DOT__slv_b_readies = ((5U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_b_readies)) 
                                                | (2U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
                                                      >> 7U)));
    this->__PVT__gen_mux__DOT__slv_r_readies = ((3U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_r_readies)) 
                                                | (4U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
                                                      >> 0x1bU)));
    this->__PVT__gen_mux__DOT__slv_b_readies = ((3U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_b_readies)) 
                                                | (4U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x24U] 
                                                      << 1U)));
    __Vtemp317[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x15U] 
                       << 0x13U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
                                    >> 0xdU));
    __Vtemp317[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
                       << 0x13U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x15U] 
                                    >> 0xdU));
    __Vtemp317[2U] = (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x17U] 
                             << 0x13U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
                                          >> 0xdU)));
    VL_EXTEND_WW(68,66, __Vtemp318, __Vtemp317);
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp318[0U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp318[1U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp318[2U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
                             << 0x13U)));
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (3U & ((0x3ff80000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x17U] 
                                 << 0x13U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
                                               >> 0xdU)));
    __Vtemp321[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1cU] 
                       << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
                                    >> 6U));
    __Vtemp321[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
                       << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1cU] 
                                    >> 6U));
    __Vtemp321[2U] = (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1eU] 
                             << 0x1aU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
                                          >> 6U)));
    VL_EXTEND_WW(68,66, __Vtemp322, __Vtemp321);
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp322[0U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp322[1U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp322[2U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
                             << 0x1aU)));
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0x3fffffffU & (4U | (3U & ((0x3c000000U 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1eU] 
                                          << 0x1aU)) 
                                      | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
                                         >> 6U)))));
    __Vtemp325[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x22U] 
                       << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
                                 >> 0x1fU));
    __Vtemp325[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x23U] 
                       << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x22U] 
                                 >> 0x1fU));
    __Vtemp325[2U] = (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x24U] 
                             << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x23U] 
                                       >> 0x1fU)));
    VL_EXTEND_WW(68,66, __Vtemp326, __Vtemp325);
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
        = __Vtemp326[0U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = __Vtemp326[1U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = __Vtemp326[2U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
        = ((0x3fffffffU & this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U]) 
           | (0xc0000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x23U] 
                             << 1U)));
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
        = (0x3fffffffU & (8U | (3U & ((0x3ffffffeU 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x24U] 
                                          << 1U)) | 
                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x23U] 
                                       >> 0x1fU)))));
    this->__PVT__gen_mux__DOT__slv_w_valids = ((6U 
                                                & (IData)(this->__PVT__gen_mux__DOT__slv_w_valids)) 
                                               | (1U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
                                                     >> 0x10U)));
    this->__PVT__gen_mux__DOT__slv_w_valids = ((5U 
                                                & (IData)(this->__PVT__gen_mux__DOT__slv_w_valids)) 
                                               | (2U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1dU] 
                                                     >> 8U)));
    this->__PVT__gen_mux__DOT__slv_w_valids = ((3U 
                                                & (IData)(this->__PVT__gen_mux__DOT__slv_w_valids)) 
                                               | (4U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x24U]));
    this->__PVT__gen_mux__DOT__slv_w_chans[0U] = ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x17U] 
                                                   << 0xfU) 
                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x16U] 
                                                     >> 0x11U));
    this->__PVT__gen_mux__DOT__slv_w_chans[1U] = ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x18U] 
                                                   << 0xfU) 
                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x17U] 
                                                     >> 0x11U));
    this->__PVT__gen_mux__DOT__slv_w_chans[2U] = ((0xfffffc00U 
                                                   & this->__PVT__gen_mux__DOT__slv_w_chans[2U]) 
                                                  | (0x3ffU 
                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x19U] 
                                                         << 0xfU) 
                                                        | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x18U] 
                                                           >> 0x11U))));
    this->__PVT__gen_mux__DOT__slv_w_chans[2U] = ((0x3ffU 
                                                   & this->__PVT__gen_mux__DOT__slv_w_chans[2U]) 
                                                  | (0xfffffc00U 
                                                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1dU]));
    this->__PVT__gen_mux__DOT__slv_w_chans[3U] = ((0x3ffU 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1eU]) 
                                                  | (0xfffffc00U 
                                                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1eU]));
    this->__PVT__gen_mux__DOT__slv_w_chans[4U] = ((0xfff00000U 
                                                   & this->__PVT__gen_mux__DOT__slv_w_chans[4U]) 
                                                  | ((0x3ffU 
                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1fU]) 
                                                     | (0xffc00U 
                                                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1fU])));
    this->__PVT__gen_mux__DOT__slv_w_chans[4U] = ((0xfffffU 
                                                   & this->__PVT__gen_mux__DOT__slv_w_chans[4U]) 
                                                  | (0xfff00000U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x24U] 
                                                        << 0x11U)));
    this->__PVT__gen_mux__DOT__slv_w_chans[5U] = ((0xfffffU 
                                                   & ((0xe0000U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x25U] 
                                                          << 0x11U)) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x24U] 
                                                         >> 0xfU))) 
                                                  | (0xfff00000U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x25U] 
                                                        << 0x11U)));
    this->__PVT__gen_mux__DOT__slv_w_chans[6U] = ((0xfffffU 
                                                   & ((0xe0000U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x26U] 
                                                          << 0x11U)) 
                                                      | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x25U] 
                                                         >> 0xfU))) 
                                                  | (0x3ff00000U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x26U] 
                                                        << 0x11U)));
    __Vtemp338[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x19U] 
                       << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x18U] 
                                 >> 0x1cU));
    __Vtemp338[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1aU] 
                       << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x19U] 
                                 >> 0x1cU));
    __Vtemp338[2U] = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
                                << 4U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1aU] 
                                          >> 0x1cU)));
    VL_EXTEND_WW(74,72, __Vtemp339, __Vtemp338);
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp339[0U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp339[1U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp339[2U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xf0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
                       << 4U)));
    __Vtemp342[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x20U] 
                       << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1fU] 
                                   >> 0x15U));
    __Vtemp342[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
                       << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x20U] 
                                   >> 0x15U));
    __Vtemp342[2U] = (0xffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x22U] 
                                << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
                                            >> 0x15U)));
    VL_EXTEND_WW(74,72, __Vtemp343, __Vtemp342);
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp343[0U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp343[1U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp343[2U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffff0U & (0x100U | (0xf0U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x22U] 
                                                 << 0xbU) 
                                                | (0x7f0U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
                                                      >> 0x15U)))))));
    __Vtemp346[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x27U] 
                       << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x26U] 
                                    >> 0xeU));
    __Vtemp346[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x28U] 
                       << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x27U] 
                                    >> 0xeU));
    __Vtemp346[2U] = (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x28U] 
                               >> 0xeU));
    VL_EXTEND_WW(74,72, __Vtemp347, __Vtemp346);
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
        = __Vtemp347[0U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
        = __Vtemp347[1U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = __Vtemp347[2U];
    this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
        = ((0xfU & this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]) 
           | (0xfffffff0U & (0x200U | (0xf0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x28U] 
                                                >> 0xeU)))));
    this->__PVT__gen_mux__DOT__slv_ar_valids = ((6U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_ar_valids)) 
                                                | (1U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x14U] 
                                                      >> 0xcU)));
    this->__PVT__gen_mux__DOT__slv_ar_valids = ((5U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_ar_valids)) 
                                                | (2U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1bU] 
                                                      >> 4U)));
    this->__PVT__gen_mux__DOT__slv_ar_valids = ((3U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_ar_valids)) 
                                                | (4U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x21U] 
                                                      >> 0x1cU)));
    this->__PVT__gen_mux__DOT__slv_aw_valids = ((6U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_aw_valids)) 
                                                | (1U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x18U] 
                                                      >> 0x1bU)));
    this->__PVT__gen_mux__DOT__slv_aw_valids = ((5U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_aw_valids)) 
                                                | (2U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x1fU] 
                                                      >> 0x13U)));
    this->__PVT__gen_mux__DOT__slv_aw_valids = ((3U 
                                                 & (IData)(this->__PVT__gen_mux__DOT__slv_aw_valids)) 
                                                | (4U 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_reqs[0x26U] 
                                                      >> 0xbU)));
    this->__PVT__gen_mux__DOT__slv_ar_chans[0U] = this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[0U];
    this->__PVT__gen_mux__DOT__slv_ar_chans[1U] = this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[1U];
    this->__PVT__gen_mux__DOT__slv_ar_chans[2U] = (
                                                   (0xfffffff0U 
                                                    & this->__PVT__gen_mux__DOT__slv_ar_chans[2U]) 
                                                   | this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_ar_chans_o[2U]);
    this->__PVT__gen_mux__DOT__slv_ar_chans[2U] = (
                                                   (0xfU 
                                                    & this->__PVT__gen_mux__DOT__slv_ar_chans[2U]) 
                                                   | (0xfffffff0U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                                                         << 4U)));
    this->__PVT__gen_mux__DOT__slv_ar_chans[3U] = (
                                                   (0xfU 
                                                    & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                                                       >> 0x1cU)) 
                                                   | (0xfffffff0U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                                         << 4U)));
    this->__PVT__gen_mux__DOT__slv_ar_chans[4U] = (
                                                   (0xffffff00U 
                                                    & this->__PVT__gen_mux__DOT__slv_ar_chans[4U]) 
                                                   | ((0xfU 
                                                       & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                                          >> 0x1cU)) 
                                                      | (0xfffffff0U 
                                                         & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                                            << 4U))));
    this->__PVT__gen_mux__DOT__slv_ar_chans[4U] = (
                                                   (0xffU 
                                                    & this->__PVT__gen_mux__DOT__slv_ar_chans[4U]) 
                                                   | (0xffffff00U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                                                         << 8U)));
    this->__PVT__gen_mux__DOT__slv_ar_chans[5U] = (
                                                   (0xffU 
                                                    & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[0U] 
                                                       >> 0x18U)) 
                                                   | (0xffffff00U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                                         << 8U)));
    this->__PVT__gen_mux__DOT__slv_ar_chans[6U] = (
                                                   (0xffU 
                                                    & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[1U] 
                                                       >> 0x18U)) 
                                                   | (0xffffff00U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_ar_chans_o[2U] 
                                                         << 8U)));
    this->__PVT__gen_mux__DOT__slv_aw_chans[0U] = this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[0U];
    this->__PVT__gen_mux__DOT__slv_aw_chans[1U] = this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[1U];
    this->__PVT__gen_mux__DOT__slv_aw_chans[2U] = (
                                                   (0xfffffc00U 
                                                    & this->__PVT__gen_mux__DOT__slv_aw_chans[2U]) 
                                                   | this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__0__KET____DOT__i_id_prepend__mst_aw_chans_o[2U]);
    this->__PVT__gen_mux__DOT__slv_aw_chans[2U] = (
                                                   (0x3ffU 
                                                    & this->__PVT__gen_mux__DOT__slv_aw_chans[2U]) 
                                                   | (0xfffffc00U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                                                         << 0xaU)));
    this->__PVT__gen_mux__DOT__slv_aw_chans[3U] = (
                                                   (0x3ffU 
                                                    & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                                                       >> 0x16U)) 
                                                   | (0xfffffc00U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                                         << 0xaU)));
    this->__PVT__gen_mux__DOT__slv_aw_chans[4U] = (
                                                   (0xfff00000U 
                                                    & this->__PVT__gen_mux__DOT__slv_aw_chans[4U]) 
                                                   | ((0x3ffU 
                                                       & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                                          >> 0x16U)) 
                                                      | (0xfffffc00U 
                                                         & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__1__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                                            << 0xaU))));
    this->__PVT__gen_mux__DOT__slv_aw_chans[4U] = (
                                                   (0xfffffU 
                                                    & this->__PVT__gen_mux__DOT__slv_aw_chans[4U]) 
                                                   | (0xfff00000U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                                                         << 0x14U)));
    this->__PVT__gen_mux__DOT__slv_aw_chans[5U] = (
                                                   (0xfffffU 
                                                    & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[0U] 
                                                       >> 0xcU)) 
                                                   | (0xfff00000U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                                         << 0x14U)));
    this->__PVT__gen_mux__DOT__slv_aw_chans[6U] = (
                                                   (0xfffffU 
                                                    & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[1U] 
                                                       >> 0xcU)) 
                                                   | (0xfff00000U 
                                                      & (this->__Vcellout__gen_mux__DOT__gen_id_prepend__BRA__2__KET____DOT__i_id_prepend__mst_aw_chans_o[2U] 
                                                         << 0x14U)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4::_sequent__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__10(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrvfpgasim_axi_mux__pi4::_sequent__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__10\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_mux__DOT__slv_b_valids = ((0x1000U 
                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U])
                                                ? (7U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
                                                          >> 0xaU))))
                                                : 0U);
    this->__PVT__gen_mux__DOT__slv_r_valids = ((4U 
                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U])
                                                ? (7U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U])))
                                                : 0U);
    this->__PVT__slv_resps_o[2U] = ((0xfffe01ffU & 
                                     this->__PVT__slv_resps_o[2U]) 
                                    | (0xfffffe00U 
                                       & ((0x10000U 
                                           & ((IData)(this->__PVT__gen_mux__DOT__slv_b_valids) 
                                              << 0x10U)) 
                                          | (0xfe00U 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
                                                << 6U)))));
    this->__PVT__slv_resps_o[4U] = ((0x1fffffffU & 
                                     this->__PVT__slv_resps_o[4U]) 
                                    | (0xe0000000U 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
                                          << 0x1aU)));
    this->__PVT__slv_resps_o[5U] = ((0xffffffe0U & 
                                     this->__PVT__slv_resps_o[5U]) 
                                    | (0x1fffffffU 
                                       & ((0x10U & 
                                           ((IData)(this->__PVT__gen_mux__DOT__slv_b_valids) 
                                            << 3U)) 
                                          | (0xfU & 
                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
                                              >> 6U)))));
    this->__PVT__slv_resps_o[7U] = ((0xe01ffffU & this->__PVT__slv_resps_o[7U]) 
                                    | (0xfffe0000U 
                                       & ((0x1000000U 
                                           & ((IData)(this->__PVT__gen_mux__DOT__slv_b_valids) 
                                              << 0x16U)) 
                                          | (0xfe0000U 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
                                                << 0xeU)))));
    this->__PVT__slv_resps_o[0U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                     << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                               >> 0x18U));
    this->__PVT__slv_resps_o[1U] = ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[4U] 
                                     << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                               >> 0x18U));
    this->__PVT__slv_resps_o[2U] = ((0xfffffe00U & 
                                     this->__PVT__slv_resps_o[2U]) 
                                    | ((0x100U & ((IData)(this->__PVT__gen_mux__DOT__slv_r_valids) 
                                                  << 8U)) 
                                       | (0xffU & (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[4U] 
                                                      >> 0x18U)))));
    this->__PVT__slv_resps_o[2U] = ((0xfffffU & this->__PVT__slv_resps_o[2U]) 
                                    | (0xfff00000U 
                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                           << 0x1cU) 
                                          | (0xff00000U 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                                >> 4U)))));
    this->__PVT__slv_resps_o[3U] = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                                 >> 4U)) 
                                    | (0xfff00000U 
                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[4U] 
                                           << 0x1cU) 
                                          | (0xff00000U 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                                >> 4U)))));
    this->__PVT__slv_resps_o[4U] = ((0xe0000000U & 
                                     this->__PVT__slv_resps_o[4U]) 
                                    | ((0xfffffU & 
                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[4U] 
                                         >> 4U)) | 
                                       (0xfff00000U 
                                        & ((0x10000000U 
                                            & ((IData)(this->__PVT__gen_mux__DOT__slv_r_valids) 
                                               << 0x1bU)) 
                                           | (0xff00000U 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
                                                  << 0x1cU) 
                                                 | (0xff00000U 
                                                    & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[4U] 
                                                       >> 4U))))))));
    this->__PVT__slv_resps_o[5U] = ((0xffU & this->__PVT__slv_resps_o[5U]) 
                                    | (0xffffff00U 
                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                           << 0x10U) 
                                          | (0xff00U 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[2U] 
                                                >> 0x10U)))));
    this->__PVT__slv_resps_o[6U] = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                              >> 0x10U)) 
                                    | (0xffffff00U 
                                       & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[4U] 
                                           << 0x10U) 
                                          | (0xff00U 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[3U] 
                                                >> 0x10U)))));
    this->__PVT__slv_resps_o[7U] = ((0xffe0000U & this->__PVT__slv_resps_o[7U]) 
                                    | ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[4U] 
                                                 >> 0x10U)) 
                                       | (0xffffff00U 
                                          & ((0x10000U 
                                              & ((IData)(this->__PVT__gen_mux__DOT__slv_r_valids) 
                                                 << 0xeU)) 
                                             | (0xff00U 
                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
                                                    << 0x10U) 
                                                   | (0xff00U 
                                                      & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[4U] 
                                                         >> 0x10U))))))));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4::_combo__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__12(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrvfpgasim_axi_mux__pi4::_combo__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__12\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp396[3];
    WData/*95:0*/ __Vtemp402[3];
    // Body
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(this->__PVT__gen_mux__DOT__slv_ar_valids));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(this->__PVT__gen_mux__DOT__slv_aw_valids));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xffU & this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U]) 
           | (0xffffff00U & this->__PVT__gen_mux__DOT__slv_ar_chans[4U]));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xffU & this->__PVT__gen_mux__DOT__slv_ar_chans[5U]) 
           | (0xffffff00U & this->__PVT__gen_mux__DOT__slv_ar_chans[5U]));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((0xffU & this->__PVT__gen_mux__DOT__slv_ar_chans[6U]) 
           | (0xf00U & this->__PVT__gen_mux__DOT__slv_ar_chans[6U]));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xfffffU & this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U]) 
           | (0xfff00000U & this->__PVT__gen_mux__DOT__slv_aw_chans[4U]));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = ((0xfffffU & this->__PVT__gen_mux__DOT__slv_aw_chans[5U]) 
           | (0xfff00000U & this->__PVT__gen_mux__DOT__slv_aw_chans[5U]));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = ((0xfffffU & this->__PVT__gen_mux__DOT__slv_aw_chans[6U]) 
           | (0x3ff00000U & this->__PVT__gen_mux__DOT__slv_aw_chans[6U]));
    this->__PVT__gen_mux__DOT__mst_w_valid = 0U;
    if ((0U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        this->__PVT__gen_mux__DOT__mst_w_valid = ((2U 
                                                   >= (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                  & ((IData)(this->__PVT__gen_mux__DOT__slv_w_valids) 
                                                     >> (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)));
    }
    if ((0xddU >= (0xffU & ((IData)(0x4aU) * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))) {
        this->__PVT__gen_mux__DOT__mst_w_chan[0U] = 
            (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
               ? 0U : (this->__PVT__gen_mux__DOT__slv_w_chans[
                       ((IData)(1U) + (7U & (((IData)(0x4aU) 
                                              * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                             >> 5U)))] 
                       << ((IData)(0x20U) - (0x1fU 
                                             & ((IData)(0x4aU) 
                                                * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
             | (this->__PVT__gen_mux__DOT__slv_w_chans[
                (7U & (((IData)(0x4aU) * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                       >> 5U))] >> (0x1fU & ((IData)(0x4aU) 
                                             * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        this->__PVT__gen_mux__DOT__mst_w_chan[1U] = 
            (((0U == (0x1fU & ((IData)(0x4aU) * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
               ? 0U : (this->__PVT__gen_mux__DOT__slv_w_chans[
                       ((IData)(2U) + (7U & (((IData)(0x4aU) 
                                              * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                             >> 5U)))] 
                       << ((IData)(0x20U) - (0x1fU 
                                             & ((IData)(0x4aU) 
                                                * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
             | (this->__PVT__gen_mux__DOT__slv_w_chans[
                ((IData)(1U) + (7U & (((IData)(0x4aU) 
                                       * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                      >> 5U)))] >> 
                (0x1fU & ((IData)(0x4aU) * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))));
        this->__PVT__gen_mux__DOT__mst_w_chan[2U] = 
            (0x3ffU & (((0U == (0x1fU & ((IData)(0x4aU) 
                                         * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))
                         ? 0U : (this->__PVT__gen_mux__DOT__slv_w_chans[
                                 ((IData)(3U) + (7U 
                                                 & (((IData)(0x4aU) 
                                                     * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                    >> 5U)))] 
                                 << ((IData)(0x20U) 
                                     - (0x1fU & ((IData)(0x4aU) 
                                                 * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)))))) 
                       | (this->__PVT__gen_mux__DOT__slv_w_chans[
                          ((IData)(2U) + (7U & (((IData)(0x4aU) 
                                                 * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                >> 5U)))] 
                          >> (0x1fU & ((IData)(0x4aU) 
                                       * (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))))));
    } else {
        this->__PVT__gen_mux__DOT__mst_w_chan[0U] = 0U;
        this->__PVT__gen_mux__DOT__mst_w_chan[1U] = 0U;
        this->__PVT__gen_mux__DOT__mst_w_chan[2U] = 0U;
    }
    this->__PVT__gen_mux__DOT__slv_ar_readies = ((3U 
                                                  & (IData)(this->__PVT__gen_mux__DOT__slv_ar_readies)) 
                                                 | (4U 
                                                    & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (4U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (1U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (0xfffffffeU & (((1U <= (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (0xfffffffcU & (((2U <= (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 2U) & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffeU & (((1U > (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffcU & (((2U > (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 2U) & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (1U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (0xfffffffeU & (((1U <= (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask)) 
           | (0xfffffffcU & (((2U <= (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 2U) & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffeU & (((1U > (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 1U) & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask)) 
           | (0xfffffffcU & (((2U > (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                              << 2U) & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (4U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_d)));
    this->__PVT__mst_req_o[0U] = ((0xfffffffcU & (((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                    ? 
                                                   this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                                    : 
                                                   this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                                  << 2U)) 
                                  | ((((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                       | (IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                      << 1U) | ((2U 
                                                 >= 
                                                 (3U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U])) 
                                                & ((IData)(this->__PVT__gen_mux__DOT__slv_r_readies) 
                                                   >> 
                                                   (3U 
                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U])))));
    this->__PVT__mst_req_o[1U] = ((3U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                           ? this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                           : this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                         >> 0x1eU)) 
                                  | (0xfffffffcU & 
                                     (((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                        : this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                      << 2U)));
    this->__PVT__mst_req_o[2U] = ((0xffffff00U & (this->__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                                  << 8U)) 
                                  | ((0xffffff80U & 
                                      ((IData)(this->__PVT__gen_mux__DOT__mst_w_valid) 
                                       << 7U)) | ((0xffffffc0U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
                                                            >> 0xaU))) 
                                                       & ((IData)(this->__PVT__gen_mux__DOT__slv_b_readies) 
                                                          >> 
                                                          (3U 
                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
                                                              >> 0xaU)))) 
                                                      << 6U)) 
                                                  | ((3U 
                                                      & (((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                           ? 
                                                          this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                           : 
                                                          this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                                         >> 0x1eU)) 
                                                     | (0xfffffffcU 
                                                        & (((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                             ? 
                                                            this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                                             : 
                                                            this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                                           << 2U))))));
    this->__PVT__mst_req_o[3U] = ((0xffU & (this->__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                            >> 0x18U)) 
                                  | (0xffffff00U & 
                                     (this->__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                      << 8U)));
    this->__PVT__mst_req_o[4U] = ((0xfff80000U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                    ? 
                                                   this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                                    : 
                                                   this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                                  << 0x13U)) 
                                  | ((0xfffc0000U & 
                                      (((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_full_q) 
                                        | (IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)) 
                                       << 0x12U)) | 
                                     ((0xffU & (this->__PVT__gen_mux__DOT__mst_w_chan[1U] 
                                                >> 0x18U)) 
                                      | (0xffffff00U 
                                         & (this->__PVT__gen_mux__DOT__mst_w_chan[2U] 
                                            << 8U)))));
    this->__PVT__mst_req_o[5U] = ((0x7ffffU & (((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                 ? 
                                                this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[0U]
                                                 : 
                                                this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[0U]) 
                                               >> 0xdU)) 
                                  | (0xfff80000U & 
                                     (((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                        : this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                      << 0x13U)));
    this->__PVT__mst_req_o[6U] = ((0x7ffffU & (((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                                 ? 
                                                this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[1U]
                                                 : 
                                                this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[1U]) 
                                               >> 0xdU)) 
                                  | (0xfff80000U & 
                                     (((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q)
                                        ? this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_data_q[2U]
                                        : this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_data_q[2U]) 
                                      << 0x13U)));
    this->__PVT__gen_mux__DOT__w_fifo_pop = 0U;
    if ((0U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        this->__PVT__gen_mux__DOT__w_fifo_pop = (((
                                                   (2U 
                                                    >= (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)) 
                                                   & ((IData)(this->__PVT__gen_mux__DOT__slv_w_valids) 
                                                      >> (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
                                                     >> 0xdU)) 
                                                 & (this->__PVT__gen_mux__DOT__mst_w_chan[0U] 
                                                    >> 1U));
    }
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                               >> 2U))));
    this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
           & (IData)(this->__PVT__gen_mux__DOT__ar_ready));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1 
        = (1U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1));
    this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1) 
              << 1U));
    this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1) 
              << 2U));
    this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1 
        = (1U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1));
    this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1) 
              << 1U));
    this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1) 
              << 2U));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x33U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = ((0xfU & this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]) 
           | (0xfffffff0U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                               ? ((this->__PVT__gen_mux__DOT__slv_ar_chans[3U] 
                                   << 0x1cU) | (this->__PVT__gen_mux__DOT__slv_ar_chans[2U] 
                                                >> 4U))
                               : this->__PVT__gen_mux__DOT__slv_ar_chans[0U]) 
                             << 4U)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((0xfU & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((this->__PVT__gen_mux__DOT__slv_ar_chans[3U] 
                          << 0x1cU) | (this->__PVT__gen_mux__DOT__slv_ar_chans[2U] 
                                       >> 4U)) : this->__PVT__gen_mux__DOT__slv_ar_chans[0U]) 
                    >> 0x1cU)) | (0xfffffff0U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                   ? 
                                                  ((this->__PVT__gen_mux__DOT__slv_ar_chans[4U] 
                                                    << 0x1cU) 
                                                   | (this->__PVT__gen_mux__DOT__slv_ar_chans[3U] 
                                                      >> 4U))
                                                   : 
                                                  this->__PVT__gen_mux__DOT__slv_ar_chans[1U]) 
                                                 << 4U)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xffffff00U & this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U]) 
           | ((0xfU & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                         ? ((this->__PVT__gen_mux__DOT__slv_ar_chans[4U] 
                             << 0x1cU) | (this->__PVT__gen_mux__DOT__slv_ar_chans[3U] 
                                          >> 4U)) : 
                        this->__PVT__gen_mux__DOT__slv_ar_chans[1U]) 
                       >> 0x1cU)) | (0xf0U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                ? (
                                                   (this->__PVT__gen_mux__DOT__slv_ar_chans[5U] 
                                                    << 0x1cU) 
                                                   | (this->__PVT__gen_mux__DOT__slv_ar_chans[4U] 
                                                      >> 4U))
                                                : this->__PVT__gen_mux__DOT__slv_ar_chans[2U]) 
                                              << 4U))));
    this->__PVT__gen_mux__DOT__slv_ar_readies = ((6U 
                                                  & (IData)(this->__PVT__gen_mux__DOT__slv_ar_readies)) 
                                                 | (1U 
                                                    & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                        >> 1U) 
                                                       & (~ (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))));
    this->__PVT__gen_mux__DOT__slv_ar_readies = ((5U 
                                                  & (IData)(this->__PVT__gen_mux__DOT__slv_ar_readies)) 
                                                 | (0xfffffffeU 
                                                    & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                          << 1U))));
    this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1 
        = (1U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1));
    this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1) 
              << 1U));
    this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound1) 
              << 2U));
    this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1 
        = (1U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1));
    this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 1U));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1) 
              << 1U));
    this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1 
        = (1U & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask) 
                 >> 2U));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(this->gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____Vlvbound1) 
              << 2U));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x33U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
              << 2U));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = ((0x3ffU & this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]) 
           | (0xfffffc00U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                               ? ((this->__PVT__gen_mux__DOT__slv_aw_chans[3U] 
                                   << 0x16U) | (this->__PVT__gen_mux__DOT__slv_aw_chans[2U] 
                                                >> 0xaU))
                               : this->__PVT__gen_mux__DOT__slv_aw_chans[0U]) 
                             << 0xaU)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = ((0x3ffU & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((this->__PVT__gen_mux__DOT__slv_aw_chans[3U] 
                            << 0x16U) | (this->__PVT__gen_mux__DOT__slv_aw_chans[2U] 
                                         >> 0xaU)) : 
                       this->__PVT__gen_mux__DOT__slv_aw_chans[0U]) 
                      >> 0x16U)) | (0xfffffc00U & (
                                                   ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                     ? 
                                                    ((this->__PVT__gen_mux__DOT__slv_aw_chans[4U] 
                                                      << 0x16U) 
                                                     | (this->__PVT__gen_mux__DOT__slv_aw_chans[3U] 
                                                        >> 0xaU))
                                                     : 
                                                    this->__PVT__gen_mux__DOT__slv_aw_chans[1U]) 
                                                   << 0xaU)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = ((0xfff00000U & this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U]) 
           | ((0x3ffU & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((this->__PVT__gen_mux__DOT__slv_aw_chans[4U] 
                               << 0x16U) | (this->__PVT__gen_mux__DOT__slv_aw_chans[3U] 
                                            >> 0xaU))
                           : this->__PVT__gen_mux__DOT__slv_aw_chans[1U]) 
                         >> 0x16U)) | (0xffc00U & (
                                                   ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                                     ? 
                                                    ((this->__PVT__gen_mux__DOT__slv_aw_chans[5U] 
                                                      << 0x16U) 
                                                     | (this->__PVT__gen_mux__DOT__slv_aw_chans[4U] 
                                                        >> 0xaU))
                                                     : 
                                                    this->__PVT__gen_mux__DOT__slv_aw_chans[2U]) 
                                                   << 0xaU))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                               >> 2U))));
    this->__PVT__gen_mux__DOT__lock_aw_valid_d = this->__PVT__gen_mux__DOT__lock_aw_valid_q;
    if (this->__PVT__gen_mux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_mux__DOT__mst_aw_ready) {
            this->__PVT__gen_mux__DOT__lock_aw_valid_d = 0U;
        }
    } else {
        if (((6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
            if ((1U & (~ (IData)(this->__PVT__gen_mux__DOT__mst_aw_ready)))) {
                this->__PVT__gen_mux__DOT__lock_aw_valid_d = 1U;
            }
        }
    }
    this->__PVT__gen_mux__DOT__load_aw_lock = 0U;
    if (this->__PVT__gen_mux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_mux__DOT__mst_aw_ready) {
            this->__PVT__gen_mux__DOT__load_aw_lock = 1U;
        }
    } else {
        if (((6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
            if ((1U & (~ (IData)(this->__PVT__gen_mux__DOT__mst_aw_ready)))) {
                this->__PVT__gen_mux__DOT__load_aw_lock = 1U;
            }
        }
    }
    this->__PVT__gen_mux__DOT__mst_aw_valid = 0U;
    if (this->__PVT__gen_mux__DOT__lock_aw_valid_q) {
        this->__PVT__gen_mux__DOT__mst_aw_valid = 1U;
    } else {
        if (((6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
            this->__PVT__gen_mux__DOT__mst_aw_valid = 1U;
        }
    }
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 2U) & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    this->__PVT__gen_mux__DOT__w_fifo_push = 0U;
    if ((1U & (~ (IData)(this->__PVT__gen_mux__DOT__lock_aw_valid_q)))) {
        if (((6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
            this->__PVT__gen_mux__DOT__w_fifo_push = 1U;
        }
    }
    this->__PVT__gen_mux__DOT__aw_ready = 0U;
    if (this->__PVT__gen_mux__DOT__lock_aw_valid_q) {
        if (this->__PVT__gen_mux__DOT__mst_aw_ready) {
            this->__PVT__gen_mux__DOT__aw_ready = 1U;
        }
    } else {
        if (((6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)) 
             & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))) {
            if (this->__PVT__gen_mux__DOT__mst_aw_ready) {
                this->__PVT__gen_mux__DOT__aw_ready = 1U;
            }
        }
    }
    this->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
        = this->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q;
    if (((IData)(this->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n 
            = ((5U == (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_n))
                ? 0U : (7U & ((IData)(1U) + (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__read_pointer_q))));
    }
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                     & (~ (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
               & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xdU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xbU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (4U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0xcU & (((1U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                        ? (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)
                        : ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut) 
                           >> 2U)) << 2U)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0xcU & (((1U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                        ? (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)
                        : ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut) 
                           >> 2U)) << 2U)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xdU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xbU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (4U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x3cU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                                                >> 2U))));
    if (this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        __Vtemp396[1U] = ((this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                           << 0x18U) | (this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                        >> 8U));
        __Vtemp396[2U] = (0xfU & (this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                  >> 8U));
        this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0x18U) | (this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                             >> 8U));
    } else {
        __Vtemp396[1U] = ((this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                           << 0x1cU) | (this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                        >> 4U));
        __Vtemp396[2U] = (0xfU & ((this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                   << 0x1cU) | (this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                >> 4U)));
        this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                << 0x1cU) | (this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                             >> 4U));
    }
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp396[1U];
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = ((0xfffffff0U & this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]) 
           | __Vtemp396[2U]);
    this->__PVT__slv_resps_o[2U] = ((0xfffbffffU & 
                                     this->__PVT__slv_resps_o[2U]) 
                                    | (0x40000U & ((IData)(this->__PVT__gen_mux__DOT__slv_ar_readies) 
                                                   << 0x12U)));
    this->__PVT__slv_resps_o[5U] = ((0xffffffbfU & 
                                     this->__PVT__slv_resps_o[5U]) 
                                    | (0x40U & ((IData)(this->__PVT__gen_mux__DOT__slv_ar_readies) 
                                                << 5U)));
    this->__PVT__slv_resps_o[7U] = ((0xbffffffU & this->__PVT__slv_resps_o[7U]) 
                                    | (0x4000000U & 
                                       ((IData)(this->__PVT__gen_mux__DOT__slv_ar_readies) 
                                        << 0x18U)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xdU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xbU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (4U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (0xcU & (((1U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp))
                        ? (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut)
                        : ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_lut) 
                           >> 2U)) << 2U)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (0xcU & (((1U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp))
                        ? (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut)
                        : ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_lut) 
                           >> 2U)) << 2U)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xdU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp) 
                     << 1U) | (0xfffffffeU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xbU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (4U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp)));
    this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(this->__PVT__gen_mux__DOT__mst_aw_valid) 
           & (IData)(this->__PVT__gen_mux__DOT__mst_aw_ready));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes 
        = ((0x3cU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes)) 
           | ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
               ? (2U | (1U & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                              >> 4U))) : (1U & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__index_nodes) 
                                                >> 2U))));
    if (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        __Vtemp402[1U] = ((this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                           << 0xcU) | (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                       >> 0x14U));
        __Vtemp402[2U] = (0x3ffU & (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                    >> 0x14U));
        this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 0xcU) | (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                            >> 0x14U));
    } else {
        __Vtemp402[1U] = ((this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                           << 0x16U) | (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                        >> 0xaU));
        __Vtemp402[2U] = (0x3ffU & ((this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                     << 0x16U) | (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                  >> 0xaU)));
        this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = ((this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                << 0x16U) | (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                             >> 0xaU));
    }
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp402[1U];
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = ((0xfffffc00U & this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U]) 
           | __Vtemp402[2U]);
    this->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 1U;
    if (((IData)(this->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__gate_clock = 0U;
    }
    this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
        = this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q;
    if (((IData)(this->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_n 
            = ((5U == (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))
                ? 0U : (7U & ((IData)(1U) + (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q))));
    }
    this->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
        = this->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_q;
    if (((IData)(this->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->gen_mux__DOT__i_w_fifo__DOT____Vlvbound1 
            = (3U & ((this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                      << 0x18U) | (this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                   >> 8U)));
        if ((0xbU >= (0xfU & ((IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q) 
                              << 1U)))) {
            this->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n 
                = (((~ ((IData)(3U) << (0xfU & ((IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                                << 1U)))) 
                    & (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__mem_n)) 
                   | ((IData)(this->gen_mux__DOT__i_w_fifo__DOT____Vlvbound1) 
                      << (0xfU & ((IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__write_pointer_q) 
                                  << 1U))));
        }
    }
    this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
        = this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    if (((IData)(this->__PVT__gen_mux__DOT__w_fifo_push) 
         & (6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(1U) + (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(this->__PVT__gen_mux__DOT__w_fifo_pop) 
         & (0U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = (0xfU & ((IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q) 
                       - (IData)(1U)));
    }
    if (((((IData)(this->__PVT__gen_mux__DOT__w_fifo_push) 
           & (IData)(this->__PVT__gen_mux__DOT__w_fifo_pop)) 
          & (6U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q)))) {
        this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_n 
            = this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q;
    }
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((6U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (IData)(this->__PVT__gen_mux__DOT__aw_ready));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes) 
                               >> 2U))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes) 
                               >> 2U))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(this->__PVT__gen_mux__DOT__ar_ready) 
                  & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(this->__PVT__gen_mux__DOT__i_ar_arbiter__DOT__gen_arbiter__DOT__rr_q)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes) 
                               >> 2U))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((0xeU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (1U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes) 
                     >> 1U) | ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes) 
                               >> 2U))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((0xfcU & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (3U & ((2U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                     ? ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                        >> 2U) : ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                  >> 4U))));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (3U & (((IData)(this->__PVT__gen_mux__DOT__aw_ready) 
                  & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__rr_q)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((5U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (2U & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                     & (~ (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))) 
                    << 1U)));
    this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes 
        = ((3U & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)) 
           | (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
               & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
              << 2U));
    this->__PVT__gen_mux__DOT__slv_aw_readies = ((3U 
                                                  & (IData)(this->__PVT__gen_mux__DOT__slv_aw_readies)) 
                                                 | (4U 
                                                    & (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes)));
    this->__PVT__gen_mux__DOT__slv_aw_readies = ((6U 
                                                  & (IData)(this->__PVT__gen_mux__DOT__slv_aw_readies)) 
                                                 | (1U 
                                                    & (((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                        >> 1U) 
                                                       & (~ (IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)))));
    this->__PVT__gen_mux__DOT__slv_aw_readies = ((5U 
                                                  & (IData)(this->__PVT__gen_mux__DOT__slv_aw_readies)) 
                                                 | (0xfffffffeU 
                                                    & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gnt_nodes) 
                                                       & ((IData)(this->__PVT__gen_mux__DOT__i_aw_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) 
                                                          << 1U))));
    this->__PVT__slv_resps_o[2U] = ((0xfff7ffffU & 
                                     this->__PVT__slv_resps_o[2U]) 
                                    | (0x80000U & ((IData)(this->__PVT__gen_mux__DOT__slv_aw_readies) 
                                                   << 0x13U)));
    this->__PVT__slv_resps_o[5U] = ((0xffffff7fU & 
                                     this->__PVT__slv_resps_o[5U]) 
                                    | (0x80U & ((IData)(this->__PVT__gen_mux__DOT__slv_aw_readies) 
                                                << 6U)));
    this->__PVT__slv_resps_o[7U] = ((0x7ffffffU & this->__PVT__slv_resps_o[7U]) 
                                    | (0x8000000U & 
                                       ((IData)(this->__PVT__gen_mux__DOT__slv_aw_readies) 
                                        << 0x19U)));
}

VL_INLINE_OPT void Vrvfpgasim_axi_mux__pi4::_sequent__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__14(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                  Vrvfpgasim_axi_mux__pi4::_sequent__TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux__14\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
                 >> 0xfU)));
    this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(this->__PVT__gen_mux__DOT__i_aw_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
              >> 0xfU));
    this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_fill 
        = ((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__a_drain) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
                 >> 0xeU)));
    this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(this->__PVT__gen_mux__DOT__i_ar_spill_reg__DOT__gen_spill_reg__DOT__b_full_q) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
              >> 0xeU));
    this->__PVT__gen_mux__DOT__slv_w_readies = 0U;
    if ((0U != (IData)(this->__PVT__gen_mux__DOT__i_w_fifo__DOT__status_cnt_q))) {
        this->__Vlvbound1 = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__slaves_resp[5U] 
                                   >> 0xdU));
        if ((2U >= (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) {
            this->__PVT__gen_mux__DOT__slv_w_readies 
                = (((~ ((IData)(1U) << (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o))) 
                    & (IData)(this->__PVT__gen_mux__DOT__slv_w_readies)) 
                   | ((IData)(this->__Vlvbound1) << (IData)(this->__Vcellout__gen_mux__DOT__i_w_fifo__data_o)));
        }
    }
    this->__PVT__slv_resps_o[2U] = ((0xfffdffffU & 
                                     this->__PVT__slv_resps_o[2U]) 
                                    | (0x20000U & ((IData)(this->__PVT__gen_mux__DOT__slv_w_readies) 
                                                   << 0x11U)));
    this->__PVT__slv_resps_o[5U] = ((0xffffffdfU & 
                                     this->__PVT__slv_resps_o[5U]) 
                                    | (0x20U & ((IData)(this->__PVT__gen_mux__DOT__slv_w_readies) 
                                                << 4U)));
    this->__PVT__slv_resps_o[7U] = ((0xdffffffU & this->__PVT__slv_resps_o[7U]) 
                                    | (0x2000000U & 
                                       ((IData)(this->__PVT__gen_mux__DOT__slv_w_readies) 
                                        << 0x17U)));
}
