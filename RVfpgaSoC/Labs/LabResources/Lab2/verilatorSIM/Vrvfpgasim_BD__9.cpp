// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrvfpgasim.h for the primary calling header

#include "Vrvfpgasim_BD.h"
#include "Vrvfpgasim__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__60(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__60\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1530[3];
    WData/*95:0*/ __Vtemp1562[3];
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_debug_fence_d) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg 
              >> 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_debug_fence_d) 
           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_rs1_d 
        = ((((- (IData)((1U & (~ (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass))))))) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_debug_wdata_rs1_d)
                 ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg
                 : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i0_rs1_d)) 
            | (0xfffffffeU & ((- (IData)((1U & ((~ (IData)(
                                                           (0U 
                                                            != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                           >> 0x2aU)))))) 
                              & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                          >> 1U)) << 1U)))) 
           | ((- (IData)((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_rs1_bypass_data_d));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_postsync 
        = (1U & ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                            >> 0xdU)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__postsync) 
                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                    & (0x7c2U == (0xfffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                            >> 0x14U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_presync 
        = (1U & (((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 0xeU)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__presync) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__any_csr_d)) 
                                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d)))) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_raw)) 
                 | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_fence_pending 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                  & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 3U))) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_presync) 
           & ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                             >> 5U))) ? ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                          >> 0x18U) 
                                         | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                             >> 0x18U) 
                                            | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                                >> 0x18U) 
                                               | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                      | vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U])) 
                                                  >> 1U))))
               : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4) 
                  | ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                      >> 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U] 
                                   >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_block_d 
        = (1U & ((((((((((((((((((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall) 
                                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_jal)) 
                                      | (((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_trigger_match_d)) 
                                          | (((IData)(
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                       >> 0x1cU)) 
                                              | (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x17U))) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d))) 
                                         & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                    >> 0x29U)))) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_presync)) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_postsync)) 
                                   | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                              >> 0xeU))) 
                                  | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 0xdU))) 
                                 | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                             >> 0x20U)) 
                                    | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                               >> 0x23U)))) 
                                | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                           >> 0x21U))) 
                               | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                          >> 0x22U))) 
                              | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 0x13U))) 
                             | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                        >> 0x10U))) 
                            | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                       >> 0x13U))) 
                           | (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                      >> 0x10U))) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_nonblock_load_stall)) 
                         | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                     >> 0x28U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_store_stall_any) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_stall_any)))) 
                        | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                  >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1)) 
                             | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                       >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e2)) 
                                  & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 0x29U)))) 
                                 & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                               >> 0x28U)))) 
                                & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                              >> 9U))))) 
                            | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                    >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1)) 
                               & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 0x28U))))) 
                           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                    >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e2)) 
                               & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 0x28U)))) 
                              & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                            >> 9U)))))) 
                       | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                               >> 3U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1_e2)) 
                          | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_not_alu_eff) 
                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                 >> 3U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1_e2)))) 
                      | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_depend_i0_d) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__non_block_case_d))) 
                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__store_data_bypass_i0_e2_c2)))) 
                     | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                 >> 0x27U)) & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                       >> 0x27U)))) 
                    | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                >> 9U)) & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                   >> 9U)))) 
                   | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                               >> 0x29U)) & ((7U <= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any)) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_stall_any)))) 
                  | ((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                   >> 0x31U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                  >> 1U)) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_match_e1_e3)) 
                     | (((((~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                       >> 0x31U))) 
                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                              >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_match_e1_e3)) 
                         & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                       >> 0x28U)))) 
                        & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                              >> 7U))))) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                            >> 0xaU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_block_d 
        = (1U & (((((((((((((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                       >> 0x13U)) & 
                              (((((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[0U] 
                                   | vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U]) 
                                  | vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U]) 
                                 | vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U]) 
                                | vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U]) 
                               >> 0x1fU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__pause_state)) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i0_stall)) 
                           | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                              >> 0xeU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stall)) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__presync_stall)) 
                        | (((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                     >> 3U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence)) 
                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__lsu_idle)))) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_nonblock_load_stall)) 
                      | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1)) 
                           | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                     >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e2)) 
                                & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x29U)))) 
                               & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x28U)))) 
                              & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                            >> 9U))))) 
                          | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                  >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1)) 
                             & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 0x28U))))) 
                         | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                  >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e2)) 
                             & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                           >> 0x28U)))) 
                            & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 9U)))))) 
                     | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                             >> 3U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e2)) 
                        | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_not_alu_eff) 
                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                               >> 3U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e2)))) 
                    | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                >> 0x28U)) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_store_stall_any) 
                                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_stall_any)))) 
                   | ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                               >> 0x29U)) & ((7U <= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_any)) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_stall_any)))) 
                  | ((((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                  >> 0x31U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depend_i0_d)) 
                        & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                      >> 0x31U)))) 
                       | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                     >> 0x31U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depend_i0_d)) 
                           & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 0x31U)))) 
                          & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                        >> 0x28U))))) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d)) 
                     & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                           >> 7U)))) | (((((~ (IData)(
                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                       >> 0x31U))) 
                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                              >> 1U)) 
                                          & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_match_e1_e3)) 
                                         | ((((~ (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                          >> 0x31U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                 >> 1U)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_match_e1_e3)) 
                                            & (~ (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                          >> 0x28U))))) 
                                        & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                              >> 7U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_block_d))) 
                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                         >> 2U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__flush_final_e3))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i0_stall_in 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i0_stall) 
              & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                    >> 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__shift_illegal 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_pmu_decode_stall 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
            << 5U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg0ff__dout) 
                       << 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg1ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_lockout_any_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_lockout)
            : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__shift_illegal) 
                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_lockout)) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__flush_final_e3))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_any_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__shift_illegal) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__illegal_lockout))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)))
            ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_illegal_inst))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_illegal_inst);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0cg0ff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0cg0ff__dout)
                  : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                     >> 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb1_data_en 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_data_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                  >> 2U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_data_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                  >> 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_ctl_en 
        = (1U & ((0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_data_en 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                   >> 3U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_data_en 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                   >> 4U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_data_en 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                   >> 5U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_ctl_en 
        = (1U & (((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                                >> 2U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                            >> 7U)) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_ctl_en 
        = (1U & (((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                                >> 3U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                            >> 7U)) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_ctl_en 
        = (1U & ((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                               >> 1U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                           >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en 
        = (1U & (((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_pipe_en) 
                                >> 4U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                            >> 7U)) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dt 
        = ((0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dt) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
               << 0x19U) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_icaf_d) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                             << 0x18U) | ((((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                                     >> 0x24U)) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                           << 0x17U) 
                                          | ((((IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                                        >> 0x21U)) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                              << 0x16U) 
                                             | ((((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                                           >> 0x22U)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                                 << 0x15U) 
                                                | ((((IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                              >> 2U)) 
                                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__debug_fence_i)) 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                                   << 0x14U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xc3ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xfc000000U & ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                        >> 9U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                              << 0x1dU) | ((((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                      >> 0x29U)) 
                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                            << 0x1cU) 
                                           | ((((IData)(
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x28U)) 
                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                               << 0x1bU) 
                                              | (((IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                           >> 5U)) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                                 << 0x1aU))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xff7fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xff800000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                             << 0x17U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xfcffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xff000000U & (((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                         >> 0x2dU)) 
                                & (0U != (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r)))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                              << 0x19U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                                           << 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U] 
        = ((0x7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U]) 
           | (0xfff80000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d)) 
                              << 0x1fU) | (0x7ff80000U 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                              >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xfffffffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0x7ffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                          | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write_only_d) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d)) 
                             >> 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_predict_p_d[1U] 
        = ((0xfff1ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_predict_p_d[1U]) 
           | (0xfffe0000U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_brp_valid) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                              << 0x13U) | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_error) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall))) 
                                            << 0x12U) 
                                           | (0x3ffe0000U 
                                              & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U] 
                                                   >> 2U) 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
                                                     << 0x11U)) 
                                                 & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__leak1_i1_stall)) 
                                                    << 0x11U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_alu_decode_d 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
            & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                       >> 0x31U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_div_decode_d 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
           & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                      >> 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_csr_ren_d 
        = ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                    >> 0x13U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dc 
        = ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                      >> 9U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
            << 3U) | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                 >> 0x29U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                       << 2U) | (((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 0x31U)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                  << 1U) | (((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                      >> 0x31U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_secondary_d))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                 >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp)) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_block_d))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)));
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb1_data_en) 
         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__div_wen_wb))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_wb;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0wbpcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_wb1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0wb1pcff__dout;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3_final;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e3pcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e4;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e4pcff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbresultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_data_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e4_final
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_raw);
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_data_en) 
         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_div_finish))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_tlu_i0_pc_e4;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_div_finish)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__div_inst
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e4);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0wbpcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0wbinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_wb;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_ctl_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__wbnbloadff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_dc4;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__wbnbloadff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_wb;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_wbc_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wbc_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_wbc_ff__dout;
    }
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_wb_ctl_en) 
          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_div_finish)) 
         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__div_wen_wb))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e4d_in[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__wbff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__wbff__dout[2U];
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_result_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e2pcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e3pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e3pcff__dout;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_i0_result_e1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e2brpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1brpcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_result_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e2brpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2brpcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e2pcff__dout;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_d;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_data_e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((QData)((IData)((0x1fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                          >> 0xfU)))) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_rddata_d)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0e1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_e1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__csr_data_e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csr_data_e1ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_data_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_data_en) 
            << 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_data_en) 
                       << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_data_en)));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_ctl_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e2t_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e2d_in[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e3ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U];
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_ctl_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e2loadff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1loadff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e1t_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e1d_in[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e2loadff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__depend_load_same_cycle_e2));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e2ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e2c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e2c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U];
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_ctl_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e4nbloadff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_nonblock_load_valid_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3t_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e3d_in[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4c_ff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
                ? 0U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e3c_ff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4c_ff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
                ? 0U : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e3c_ff__dout));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e4nbloadff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__nonblock_load_valid_dc4;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e4ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e4ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e4ff__dout[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e4c_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4c_ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e4c_ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en) 
            << 3U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e2_ctl_en) 
                       << 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e3_ctl_en) 
                                  << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e4_ctl_en))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_predict_p_d[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_predict_p_d[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_predict_p_d[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[2U] 
        = ((0x37fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[2U]) 
           | (0x80U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                >> 1U)) << 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U] 
        = ((0xff3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U]) 
           | (0xc00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_predict_p_d[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U] 
        = ((0xffcfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U]) 
           | (0x300000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_predict_p_d[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__validff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__valid_ff)
            : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_alu_decode_d) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_div_decode_d) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__divpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                      >> 1U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__divtriggerff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_trigger_match_d;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__divwbaddrff__DOT____Vcellinp__dffs__din 
            = (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0r));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__divinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_inst_d;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__divpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__divpcff__dout);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__divtriggerff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__div_trigger;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__divwbaddrff__DOT____Vcellinp__dffs__din 
            = (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__div_waddr_wb));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__divinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__div_inst;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__csrmiscff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__csrmiscff__dout)
            : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_csr_ren_d) 
                << 4U) | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                     >> 0x12U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                           << 3U) | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 0x11U)) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                      << 2U) | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_csr_write) 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d)) 
                                                 << 1U) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                              >> 0xfU))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) {
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 9U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 1U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x29U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 2U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x28U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 3U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 1U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 4U;
        }
        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_csr_ren_d) 
             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 5U;
        }
        if (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_csr_ren_d)) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 6U;
        }
        if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_csr_ren_d) 
             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_csr_wen_unq_d))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 7U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0xcU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 8U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0xbU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 9U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 3U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xaU;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 2U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xbU;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0xaU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xcU;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x1cU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xdU;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                           >> 0x17U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype = 0xeU;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1c_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dc)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0_e1c_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_ap 
        = ((0x7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_ap) 
           | (0x80000U & (((0xfff80000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dc) 
                                           << 0x12U)) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dc) 
                              << 0x13U)) | ((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                     >> 0x31U)) 
                                            << 0x13U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__postsync_stallff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__ps_stall)
            : ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                 & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_jal) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_postsync)) 
                    | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal)))) 
                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_jal))) 
               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__ps_stall) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__prior_inflight_e1e4)) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__div_wen_wb)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e1loadff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en)
            ? ((0x7ffffffeU & ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                   >> 1U) & (((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                              | (2U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                             << 1U)) 
                                 | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                     >> 1U) & (((1U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                                | (2U 
                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                               << 1U))) 
                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                                   << 1U)) | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                 >> 1U) 
                                                & (((1U 
                                                     == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                                                    | (2U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                                   << 1U)) 
                                               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                   >> 1U) 
                                                  & (((1U 
                                                       == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                                                      | (2U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                     << 1U))) 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                                 << 1U)))) 
               | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_depend_i0_d) 
                   & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                              >> 0x29U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1loadff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dt 
        = ((0x3f00fffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dt) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_trigger_match_d) 
                & (- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_div_decode_d)))))) 
               << 0x10U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_trigger_match_d) 
                             & (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)))) 
                            << 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U] 
        = ((0xfffbffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U]) 
           | (0xfffc0000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_secondary_d) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
                             << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U] 
        = ((0xfffffff9U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U]) 
           | (0xfffffffeU & (((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 0x2dU)) 
                                & (0U != (0x1fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1r)))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
                              << 2U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                        << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_nonblock_load_freeze_dc2 
        = (1U & ((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                       >> 2U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)) 
                                 | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d)))) 
                     | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                         >> 2U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d)) 
                                   | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))))) 
                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d)) 
                   | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                         >> 2U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)) 
                                   | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d)))) 
                       | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                           >> 2U) & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d)) 
                                     | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))))) 
                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d))) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1loadff__dout) 
                     >> 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__depend_load_same_cycle_e2)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 0U;
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) {
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 9U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 1U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x29U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 2U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x28U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 3U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 1U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 4U;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x1cU)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 0xdU;
        }
        if ((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                           >> 0x17U)))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype = 0xeU;
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_predict_p_d[1U] 
        = ((0xfff1ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_predict_p_d[1U]) 
           | (0xfffe0000U & ((0xfff80000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U] 
                                              << 0x10U) 
                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                                << 0x13U))) 
                             | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_br_error) 
                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
                                 << 0x12U) | (0x3ffe0000U 
                                              & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U] 
                                                  >> 2U) 
                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                                    << 0x11U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_alu_decode_d 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
            & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                       >> 0x31U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_secondary_d)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__div_p 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
              & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 5U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 5U)))) 
            << 2U) | ((2U & (((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 5U)))
                               ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 0x1dU))
                               : (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                          >> 0x1dU))) 
                             << 1U)) | (1U & ((1U & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 5U)))
                                               ? (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                          >> 4U))
                                               : (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                          >> 4U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dc 
        = ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                      >> 9U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
            << 3U) | ((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                 >> 0x29U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
                       << 2U) | (((((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 0x31U)) 
                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_secondary_d)) 
                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)) 
                                  << 1U) | (((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                      >> 0x31U)) 
                                             & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_secondary_d))) 
                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__mul_p 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
              & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                         >> 9U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                     & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                >> 9U)))) 
            << 5U) | ((0x10U & (((1U & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                >> 9U)))
                                  ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 8U))
                                  : (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 8U))) 
                                << 4U)) | ((8U & ((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 9U)))
                                                    ? (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                               >> 7U))
                                                    : (IData)(
                                                              (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                               >> 7U))) 
                                                  << 3U)) 
                                           | ((4U & 
                                               (((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 9U)))
                                                  ? (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                             >> 6U))
                                                  : (IData)(
                                                            (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                             >> 6U))) 
                                                << 2U)) 
                                              | ((0x7ffffffeU 
                                                  & (((((((IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                   >> 9U)) 
                                                          & (3U 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                                         << 1U) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                           >> 1U)) 
                                                       | ((((IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                     >> 9U)) 
                                                            & (4U 
                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_depth_d))) 
                                                           << 1U) 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1_class_d) 
                                                             >> 1U))) 
                                                      | (((((~ (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                        >> 9U))) 
                                                            & (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                       >> 9U))) 
                                                           & (3U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                                          << 1U) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                            >> 1U))) 
                                                     | (((((~ (IData)(
                                                                      (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                       >> 9U))) 
                                                           & (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                      >> 9U))) 
                                                          & (4U 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_depth_d))) 
                                                         << 1U) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1_class_d) 
                                                           >> 1U)))) 
                                                 | ((((((IData)(
                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                 >> 9U)) 
                                                        & (3U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                          >> 2U)) 
                                                      | (((IData)(
                                                                  (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                   >> 9U)) 
                                                          & (4U 
                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_depth_d))) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2_class_d) 
                                                            >> 2U))) 
                                                     | ((((~ (IData)(
                                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                      >> 9U))) 
                                                          & (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                     >> 9U))) 
                                                         & (3U 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                           >> 2U))) 
                                                    | ((((~ (IData)(
                                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                     >> 9U))) 
                                                         & (IData)(
                                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                    >> 9U))) 
                                                        & (4U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_depth_d))) 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2_class_d) 
                                                          >> 2U))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_pmu_instr_decoded 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
            << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
            << 5U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout) 
                       << 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg1ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p 
        = ((0x7fffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x27U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d) 
                                         & (IData)(
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                    >> 0x27U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)));
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_data_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__csr_rs1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_data_en))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_csr_ren_d)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_rs1_d
                : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_csr_rs1_e1)
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_csr_rs1_e1);
    __Vtemp1530[0U] = ((0xfffff000U & ((IData)((((QData)((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (3U 
                                                                    & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                          >> 0x15U))))
                                                                   ? 
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x16U)))) 
                                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                   | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x15U)))) 
                                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                   : 
                                                                  ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U] 
                                                                    << 0x14U) 
                                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                      >> 0xcU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (3U 
                                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                         << 0xdU) 
                                                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                           >> 0x13U))))
                                                                    ? 
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x14U)))) 
                                                                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                    | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U)))) 
                                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                    : 
                                                                   ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                     << 0x14U) 
                                                                    | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U] 
                                                                       >> 0xcU))))))) 
                                       << 0xcU)) | 
                       (0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U]));
    __Vtemp1530[1U] = ((0xfffU & ((IData)((((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                   << 0xbU) 
                                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                     >> 0x15U))))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                              >> 0x16U)))) 
                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x15U)))) 
                                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                              : 
                                                             ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U] 
                                                               << 0x14U) 
                                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                 >> 0xcU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                    << 0xdU) 
                                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                      >> 0x13U))))
                                                               ? 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                               >> 0x14U)))) 
                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                               | ((- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U)))) 
                                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                               : 
                                                              ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                << 0x14U) 
                                                               | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U] 
                                                                  >> 0xcU))))))) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                                << 0xbU) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x15U))))
                                                                                ? 
                                                                               (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x16U)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                                | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x15U)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                                : 
                                                                               ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U] 
                                                                                << 0x14U) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                                >> 0xcU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                                << 0xdU) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U))))
                                                                                 ? 
                                                                                (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x14U)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                                | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                                 : 
                                                                                ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                                << 0x14U) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U] 
                                                                                >> 0xcU)))))) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    __Vtemp1530[2U] = (0xfffU & ((IData)(((((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                   << 0xbU) 
                                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                     >> 0x15U))))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                              >> 0x16U)))) 
                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x15U)))) 
                                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                              : 
                                                             ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[2U] 
                                                               << 0x14U) 
                                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                 >> 0xcU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[2U] 
                                                                    << 0xdU) 
                                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                      >> 0x13U))))
                                                               ? 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                               >> 0x14U)))) 
                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                               | ((- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                >> 0x13U)))) 
                                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                               : 
                                                              ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[1U] 
                                                                << 0x14U) 
                                                               | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e2_ff__dout[0U] 
                                                                  >> 0xcU)))))) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_data_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = __Vtemp1530[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = __Vtemp1530[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = __Vtemp1530[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x7fffffffU & ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en))
                           ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0 
                                      >> 1U)) : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__pcff__dout));
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_p_e1[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[2U];
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e2_ff__dout[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_ap_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e2_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_ap_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e2_ff__dout
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e3_ff__dout);
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e3_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i0e3pcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[0U]);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e4_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__pcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__brimmff__dout));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en) 
             >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_alu_decode_d))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_rs2_d
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__b_ff);
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
                ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
                ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
                ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_pp_e3_ff__dout[2U]);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT____Vcellout__predictpacketff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_upper_flush_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en))
            ? ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__exu_i0_flush_path_e1 
                << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__exu_i0_flush_upper_e1))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_upper_flush_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en))
            ? (((QData)((IData)((0x7fffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout 
                                                >> 1U)))) 
                << 0x20U) | (QData)((IData)(((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__pred_correct_npc_e2 
                                              << 1U) 
                                             | (1U 
                                                & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e2_ff__dout)))))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e3_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_upper_flush_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en))
            ? (((QData)((IData)((0x7fffffffU & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e3_ff__dout 
                                                        >> 0x20U))))) 
                << 0x20U) | (QData)((IData)(((0xfffffffeU 
                                              & ((IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e3_ff__dout 
                                                          >> 1U)) 
                                                 << 1U)) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e3_ff__dout) 
                                                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))))))))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_upper_flush_e4_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en) 
             >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_alu_decode_d))
            ? ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_csr_ren_d))))) 
               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_rs1_d)
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__a_ff);
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_sec_decode_e3))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0U != (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                << 0x11U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                             >> 0xfU))))
                ? (((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                        >> 0x12U)))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_result_e4_eff) 
                     | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                          >> 0x11U)))) 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_result_e4_eff)) 
                    | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                         >> 0x10U)))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff)) 
                   | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                        >> 0xfU)))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                : ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[2U] 
                    << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[1U] 
                                 >> 0xcU)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0U != (0xfU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[2U] 
                                << 0x15U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                             >> 0xbU))))
                ? (((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                        >> 0xeU)))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_result_e4_eff) 
                     | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                          >> 0xdU)))) 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_result_e4_eff)) 
                    | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                         >> 0xcU)))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff)) 
                   | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                        >> 0xbU)))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                : ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[1U] 
                    << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e3_ff__dout[0U] 
                                 >> 0xcU)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__a_ff;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e4__DOT__b_ff;
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_predict_newp_d[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_ap_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_ap;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__predictpacketff__dout[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_ap_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_ap_e1_ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_br_immed_d 
        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_ap 
                   >> 2U) & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                        >> 0x17U)))))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset)
            : ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0) 
                      << 1U)) | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0)))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dd[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__dec_nonblock_load_freeze_dc3ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc3_clken)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_nonblock_load_freeze_dc2)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__dec_nonblock_load_freeze_dc3));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freezeff__DOT__din_new 
        = ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ld_freeze_rst)) 
           & (((((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__is_sideeffects_dc2) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_nonblock_load_freeze_dc2)) 
                    | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                       >> 5U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_busreq_dc2)) 
                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                     >> 0xeU)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__flush_dc2_up))) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_full_hit_dc2))) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__ld_freeze_dc3)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dt 
        = ((0x3fff000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dt) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_itype) 
               << 8U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_itype) 
                          << 4U) | ((8U & ((((IData)(
                                                     (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                      >> 0x1cU)) 
                                             | (IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                        >> 0x17U))) 
                                            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_predict_br))) 
                                           << 3U)) 
                                    | (4U & ((((IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                        >> 0x1cU)) 
                                               | (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                          >> 0x17U))) 
                                              & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_predict_br))) 
                                             << 2U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_predict_p_d[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_predict_p_d[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_predict_p_d[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[2U] 
        = ((0x37fU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[2U]) 
           | (0x80U & ((IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                >> 1U)) << 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U] 
        = ((0xff3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U]) 
           | (0xc00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_predict_p_d[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U] 
        = ((0xffcfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U]) 
           | (0x300000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_predict_p_d[1U]));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__validff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__valid_ff;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__e1ghrdecff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__e1ghrdecff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__validff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_alu_decode_d) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_flush_final)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__e1ghrdecff__DOT____Vcellinp__dffs__din 
            = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_alu_decode_d) 
                << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_alu_decode_d));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__mff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__div_p))
            ? (((QData)((IData)((1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__div_p) 
                                           >> 1U)) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_rs2_d 
                                          >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_rs2_d)))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__m_ff);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_in 
        = (1U & (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__div_p) 
                    >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state)) 
                  & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_div_finish))) 
                 & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__flush_lower_ff))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__miscf__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__div_p))
            ? ((8U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_rs1_d 
                      >> 0x1cU)) | ((4U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_rs2_d 
                                           >> 0x1dU)) 
                                    | ((((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__div_p) 
                                             >> 1U)) 
                                         & (0U != vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_rs2_d)) 
                                        << 1U) | (1U 
                                                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__div_p)))))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__miscf__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__div_p) 
                    >> 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state) 
                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__shortq_enable))) 
                              & (0x21U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__count)))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__rem_correct)))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_in
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_ff);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__qff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x1ffffffffULL & ((1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__div_p) 
                                     >> 2U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state) 
                                               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__shortq_enable)))))
                              ? ((((- (QData)((IData)(
                                                      (1U 
                                                       & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state)))))) 
                                   & (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_rs1_d))) 
                                  | ((- (QData)((IData)(
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state) 
                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_valid_e1) 
                                                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                                               >> 4U)))))) 
                                     & ((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__dividend_eff)) 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_in 
                                                                                >> 0x20U))))))) 
                                        << (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__shortq_shift_ff)))) 
                                 | ((- (QData)((IData)(
                                                       ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__run_state) 
                                                        & (~ 
                                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_valid_e1) 
                                                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT____Vcellout__i_shortq_ff__dout) 
                                                               >> 4U))))))) 
                                    & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff)) 
                                        << 1U) | (QData)((IData)(
                                                                 (1U 
                                                                  & (~ (IData)(
                                                                               (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__a_in 
                                                                                >> 0x20U)))))))))
                              : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__div_e1__DOT__q_ff));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1c_ff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dc)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1_e1c_ff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_ap 
        = ((0x7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_ap) 
           | (0x80000U & (((0xfff80000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dc) 
                                           << 0x12U)) 
                           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dc) 
                              << 0x13U)) | ((IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                     >> 0x31U)) 
                                            << 0x13U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e1_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__valid_e1)
                  : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__mul_p) 
                     >> 5U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e1_clken 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__mul_p) 
                   >> 5U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 6U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1cg0ff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
                  ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1cg0ff__dout)
                  : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                     >> 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wb1_data_en 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4_data_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                  >> 2U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wb_data_en 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                  >> 1U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1_data_en 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                   >> 5U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2_data_en 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                   >> 4U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3_data_en 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                   >> 3U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                             >> 7U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_ctl_en 
        = ((8U & ((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                                  >> 4U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                              >> 7U)) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))) 
                  << 3U)) | ((4U & ((((0U != (3U & 
                                              ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                                               >> 3U))) 
                                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                         >> 7U)) & 
                                     (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))) 
                                    << 2U)) | ((2U 
                                                & ((((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                                                          >> 2U))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                                        >> 7U)) 
                                                    & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_pipe_en) 
                                                          >> 1U))) 
                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                                        >> 7U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_free_c1_clken 
        = (1U & ((((((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p 
                        | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1) 
                       | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2) 
                      | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3) 
                     | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc4) 
                    | vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5) 
                   | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_bus_buffer_empty_any))) 
                  | (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_numvld_any))) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_dccm_valid) 
               >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
           & (~ (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p 
                   | (6U < (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__stbuf__DOT__stbuf_specvld_any))) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)) 
                 | (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                      & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc1 
                            >> 0xbU))) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                          & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc2 
                                                >> 0xbU)))) 
                    | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                       & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc3 
                             >> 0xbU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift2) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift2) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
              >> 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval 
        = (((7U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift1))) 
                   & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                      >> 1U))) | (3U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift2))) 
                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
                                           >> 2U)))) 
           | ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i0_decode_d))))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_ctl_en))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_br_immed_d)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_alu_e1__DOT____Vcellout__brimmff__dout));
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_data_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((0xfffff000U & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_rs1_d)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_rs2_d)))) 
                               << 0xcU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i0_br_immed_d));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((0xfffU & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_rs1_d)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_rs2_d)))) 
                          >> 0x14U)) | (0xfffff000U 
                                        & ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_rs1_d)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_rs2_d))) 
                                                    >> 0x20U)) 
                                           << 0xcU)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (0xfffU & ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_rs1_d)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_rs2_d))) 
                                  >> 0x20U)) >> 0x14U));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i0_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i0_src_e1_ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__trap_e1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_ctl_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__dt
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__trap_e1ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__e1brpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_e1_data_en)
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__dec_i1_decode_d)
                ? ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_ap)
                    ? ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1) 
                              << 1U)) | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1))))
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_br_offset))
                : ((4U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_ap)
                    ? ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0) 
                              << 1U)) | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0))))
                    : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_br_offset)))
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1brpcff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_br_immed_d 
        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_ap 
                   >> 2U) & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                        >> 0x17U)))))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_br_offset)
            : ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1) 
                      << 1U)) | (1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1)))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__mul_c1_e1_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__mul_p) 
                     >> 4U));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__mul_p) 
                     >> 3U));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__mul_p) 
                     >> 2U));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__ld_rs1_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__mul_p) 
                     >> 1U));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__ld_rs2_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__mul_p));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((- (IData)((1U & ((~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                    & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                               >> 9U)))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i0_rs1_d) 
                 | ((- (IData)((1U & (((~ (IData)((0U 
                                                   != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
                                       & (~ (IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                     >> 9U)))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                 >> 9U)))))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i1_rs1_d)) 
                | ((- (IData)(((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 9U))))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_rs1_bypass_data_d)) 
               | ((- (IData)((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)) 
                               & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 9U)))) 
                              & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 9U))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_rs1_bypass_data_d));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((- (IData)((1U & ((~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
                                    & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                               >> 9U)))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i0_rs2_d) 
                 | ((- (IData)((1U & (((~ (IData)((0U 
                                                   != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)))) 
                                       & (~ (IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                     >> 9U)))) 
                                      & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                 >> 9U)))))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i1_rs2_d)) 
                | ((- (IData)(((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)) 
                               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                          >> 9U))))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_rs2_bypass_data_d)) 
               | ((- (IData)((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)) 
                               & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                             >> 9U)))) 
                              & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                         >> 9U))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_rs2_bypass_data_d));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs1_sign_e1));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__rs2_sign_e1));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__low_e1));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__ld_rs1_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__load_mul_rs1_bypass_e1));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__ld_rs2_byp_e1_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__load_mul_rs2_bypass_e1));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__a_ff_e1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__mul_e1__DOT__b_ff_e1;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wb1_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_wb;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1wbpcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wb1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_wb1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wb1pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1wb1pcff__dout;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e4_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e3_final;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e3pcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e4;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e4pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_wb_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbresultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e4_final;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e4;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e4pcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbresultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_raw;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbinstff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_wb;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1wbpcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1wbpcff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e1instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1_data_en)
            ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e1);
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_i1_result_e1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e2pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e2pcff__dout;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3_data_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e2pcff__dout;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3resultff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_e3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3instff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_inst_e3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1e3pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e3pcff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_data_en 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e1_data_en) 
            << 2U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e2_data_en) 
                       << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_e3_data_en)));
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1 
                                      >> 1U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_newp_d[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__pcff__dout);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__predictpacketff__dout[2U];
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_predict_p_e1[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_pp_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[2U];
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e2_ff__dout[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_pp_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_ap_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_ctl_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_ap
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_ap_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_ctl_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e1_ff__dout
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e2_ff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_ap_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_ctl_en))
            ? vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e2_ff__dout
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e3_ff__dout);
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e3_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__i1e3pcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[0U]);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_ap_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_ap_e4_ff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__pcff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__pcff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__brimmff__dout));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_ctl_en))
            ? (IData)((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout 
                       >> 1U)) : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e3_ff__dout);
    if ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_ctl_en) 
          >> 3U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_alu_decode_d))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_rs1_d;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_rs2_d;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__a_ff;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__b_ff;
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_ctl_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
                ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[0U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
                ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[1U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)
                ? 0U : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_pp_e3_ff__dout[2U]);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0x80000000U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e3_ff__dout 
                               & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3)) 
                                  << 0x1fU))) | (0x7fffffffU 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e3_ff__dout));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__predictpacketff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT____Vcellout__predictpacketff__dout[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e4_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e4_ff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_upper_flush_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_ctl_en))
            ? (((QData)((IData)(((0x80000000U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e1ff__dout[1U] 
                                                 << 0x1eU)) 
                                 | (0x7fffffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__any_jal)
                                                    ? 
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__aout 
                                                    >> 1U)
                                                    : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__pcout))))) 
                << 1U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__exu_i1_flush_upper_e1)))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_upper_flush_e2_ff__dout);
    if (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_ctl_en) 
         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_sec_decode_e3))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0U != (0x7fU & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[1U] 
                                 << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                              >> 7U))))
                ? ((((((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                           >> 0xdU)))) 
                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3) 
                        | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                             >> 0xcU)))) 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_mul_result_e3)) 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                            >> 0xbU)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_result_dc3)) 
                      | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                           >> 0xaU)))) 
                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_result_e4_eff)) 
                     | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                          >> 9U)))) 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_result_e4_eff)) 
                    | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                         >> 8U)))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff)) 
                   | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                        >> 7U)))) & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                : ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[2U] 
                    << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[1U] 
                                 >> 0xcU)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((0U != (0x7fU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U]))
                ? ((((((((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                           >> 6U)))) 
                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_e3) 
                        | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                             >> 5U)))) 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu_mul_result_e3)) 
                       | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                            >> 4U)))) 
                          & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_result_dc3)) 
                      | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                           >> 3U)))) 
                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_result_e4_eff)) 
                     | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                          >> 2U)))) 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_result_e4_eff)) 
                    | ((- (IData)((1U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U] 
                                         >> 1U)))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff)) 
                   | ((- (IData)((1U & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e3ff__dout[0U]))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                : ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[1U] 
                    << 0x14U) | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[0U] 
                                 >> 0xcU)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__aff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__a_ff;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__bff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e4__DOT__b_ff;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_dff__DOT____Vcellinp__dffs__din 
        = (3U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req) 
                  | ((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                                   >> (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                             << 1U))))) 
                     & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done) 
                           >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)))))
                  ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__nack_count_dff__DOT____Vcellinp__dffs__din 
        = (7U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req)
                  ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count) 
                      >= (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                                >> 0x10U))) ? ((- (IData)(
                                                          (1U 
                                                           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req))))) 
                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count))
                      : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_mem_req) 
                          & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req)))
                          ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count))
                          : 0U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_nack_count)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc1_clken 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req)) 
                 | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                    >> 4U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req) 
               & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_mem_write))) 
              & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_mem_write))) 
               & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_mem_write))) 
               & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req) 
                & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_mem_write))) 
               & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d 
        = ((0x7fffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken 
        = (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | ((((0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error))) 
                | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_mem_write))) 
               & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                 & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                               >> 2U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_mem_write))) 
                & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                  & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                               >> 4U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_mem_write))) 
                & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                  & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en)) 
           | (((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                               >> 6U))) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req) 
                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_mem_write))) 
                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr))) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                  & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))) 
              << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
             >> 2U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
                          >> 3U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
             >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
                          >> 2U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
             >> 1U) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
                          >> 2U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
                  >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
            & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval) 
                  >> 1U))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1 
        = ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_val));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT__brimmff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_ctl_en))
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_br_immed_d)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_alu_e1__DOT____Vcellout__brimmff__dout));
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_data_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e2_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U];
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_data_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((0xfffff000U & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_rs1_d)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_rs2_d)))) 
                               << 0xcU)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_br_immed_d));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((0xfffU & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_rs1_d)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_rs2_d)))) 
                          >> 0x14U)) | (0xfffff000U 
                                        & ((IData)(
                                                   ((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_rs1_d)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_rs2_d))) 
                                                    >> 0x20U)) 
                                           << 0xcU)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (0xfffU & ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_rs1_d)) 
                                    << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_rs2_d))) 
                                  >> 0x20U)) >> 0x14U));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e1_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e1_ff__dout[2U];
    }
    __Vtemp1562[0U] = ((0xfffff000U & ((IData)((((QData)((IData)(
                                                                 ((0U 
                                                                   != 
                                                                   (3U 
                                                                    & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                        << 0x10U) 
                                                                       | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                          >> 0x10U))))
                                                                   ? 
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x11U)))) 
                                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                   | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x10U)))) 
                                                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                   : 
                                                                  ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U] 
                                                                    << 0x14U) 
                                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                      >> 0xcU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((0U 
                                                                    != 
                                                                    (3U 
                                                                     & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                         << 0x12U) 
                                                                        | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                           >> 0xeU))))
                                                                    ? 
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xfU)))) 
                                                                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                    | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU)))) 
                                                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                    : 
                                                                   ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                     << 0x14U) 
                                                                    | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U] 
                                                                       >> 0xcU))))))) 
                                       << 0xcU)) | 
                       (0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U]));
    __Vtemp1562[1U] = ((0xfffU & ((IData)((((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                   << 0x10U) 
                                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                     >> 0x10U))))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                              >> 0x11U)))) 
                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x10U)))) 
                                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                              : 
                                                             ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U] 
                                                               << 0x14U) 
                                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                 >> 0xcU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                    << 0x12U) 
                                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                      >> 0xeU))))
                                                               ? 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                               >> 0xfU)))) 
                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                               | ((- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU)))) 
                                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                               : 
                                                              ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                << 0x14U) 
                                                               | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U] 
                                                                  >> 0xcU))))))) 
                                  >> 0x14U)) | (0xfffff000U 
                                                & ((IData)(
                                                           ((((QData)((IData)(
                                                                              ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                << 0x10U) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x10U))))
                                                                                ? 
                                                                               (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x11U)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                                | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x10U)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                                : 
                                                                               ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U] 
                                                                                << 0x14U) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                                >> 0xcU))))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               ((0U 
                                                                                != 
                                                                                (3U 
                                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                                << 0x12U) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU))))
                                                                                 ? 
                                                                                (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xfU)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                                                | ((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU)))) 
                                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                                                 : 
                                                                                ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                                << 0x14U) 
                                                                                | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U] 
                                                                                >> 0xcU)))))) 
                                                            >> 0x20U)) 
                                                   << 0xcU)));
    __Vtemp1562[2U] = (0xfffU & ((IData)(((((QData)((IData)(
                                                            ((0U 
                                                              != 
                                                              (3U 
                                                               & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                   << 0x10U) 
                                                                  | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                     >> 0x10U))))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                              >> 0x11U)))) 
                                                               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                              | ((- (IData)(
                                                                            (1U 
                                                                             & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0x10U)))) 
                                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                              : 
                                                             ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[2U] 
                                                               << 0x14U) 
                                                              | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                 >> 0xcU))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((0U 
                                                               != 
                                                               (3U 
                                                                & ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[1U] 
                                                                    << 0x12U) 
                                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                      >> 0xeU))))
                                                               ? 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                               >> 0xfU)))) 
                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_result_wb_eff) 
                                                               | ((- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT____Vcellout__e2ff__dout[0U] 
                                                                                >> 0xeU)))) 
                                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb_eff))
                                                               : 
                                                              ((vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[1U] 
                                                                << 0x14U) 
                                                               | (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e2_ff__dout[0U] 
                                                                  >> 0xcU)))))) 
                                          >> 0x20U)) 
                                 >> 0x14U));
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec_i1_data_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = __Vtemp1562[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = __Vtemp1562[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = __Vtemp1562[2U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT__i1_src_e3_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__exu__DOT____Vcellout__i1_src_e3_ff__dout[2U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__sddc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_c1_dc1_clken) 
                    & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p 
                        >> 0xdU) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_mem_write))) 
                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                      >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))))
            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req)
                ? ((((0U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                      << 6U))) ? 0ULL
                      : ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                         ((IData)(2U) 
                                          + (6U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                   << 1U)))])) 
                         << ((IData)(0x40U) - (0x1fU 
                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                  << 6U))))) 
                    | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                        ((IData)(1U) 
                                         + (6U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                  << 1U)))])) 
                        << ((0U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                             << 6U)))
                             ? 0x20U : ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                            << 6U))))) 
                       | ((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data[
                                          (6U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                                 << 1U))])) 
                          >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr) 
                                       << 6U))))) >> 
                   (0x38U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_mem_addr 
                             << 3U))) : (QData)((IData)(
                                                        (((((- (IData)(
                                                                       (1U 
                                                                        & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)))) 
                                                                           & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x27U)))))) 
                                                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i0_rs2_d) 
                                                           | ((- (IData)(
                                                                         (1U 
                                                                          & (((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)))) 
                                                                              & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x27U)))) 
                                                                             & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                                >> 0x27U)))))) 
                                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i1_rs2_d)) 
                                                          | ((- (IData)(
                                                                        ((0U 
                                                                          != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs2bypass)) 
                                                                         & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x27U))))) 
                                                             & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_rs2_bypass_data_d)) 
                                                         | ((- (IData)(
                                                                       (((0U 
                                                                          != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs2bypass)) 
                                                                         & (~ (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                                >> 0x27U)))) 
                                                                        & (IData)(
                                                                                (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                                >> 0x27U))))) 
                                                            & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_rs2_bypass_data_d)))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__store_data_dc1);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_rpend_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_rpend_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_rpend_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_rpend_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_pend_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_rpend_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__dma_pkt_d
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in 
        = ((0x7fffeU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in) 
           | (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu_p 
                     & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__flush_dc2_up))) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offsetff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & ((((((- (IData)((1U & ((IData)(
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                        >> 0x27U)) 
                                               & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                          >> 0x29U)))))) 
                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                >> 0x14U)) | ((- (IData)(
                                                         (1U 
                                                          & (((~ (IData)(
                                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                                          >> 0x27U))) 
                                                              & (IData)(
                                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                         >> 0x27U))) 
                                                             & (IData)(
                                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                                        >> 0x29U)))))) 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                                 >> 0x14U))) 
                           | ((- (IData)((1U & ((IData)(
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x27U)) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                           >> 0x28U)))))) 
                              & ((0xfe0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                            >> 0x14U)) 
                                 | (0x1fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0 
                                             >> 7U))))) 
                          | ((- (IData)((1U & (((~ (IData)(
                                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                            >> 0x27U))) 
                                                & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                           >> 0x27U))) 
                                               & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                          >> 0x28U)))))) 
                             & ((0xfe0U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                           >> 0x14U)) 
                                | (0x1fU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1 
                                            >> 7U))))) 
                         & (~ (- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req))))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dccm_req)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_mem_addr
                : (((((- (IData)((1U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)))) 
                                        & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                   >> 0x27U)))))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i0_rs1_d) 
                     | ((- (IData)((1U & (((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)))) 
                                           & (~ (IData)(
                                                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                         >> 0x27U)))) 
                                          & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                                     >> 0x27U)))))) 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__gpr_i1_rs1_d)) 
                    | ((- (IData)(((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_rs1bypass)) 
                                   & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                              >> 0x27U))))) 
                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_rs1_bypass_data_d)) 
                   | ((- (IData)((((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_rs1bypass)) 
                                   & (~ (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                                                 >> 0x27U)))) 
                                  & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i1_dp 
                                             >> 0x27U))))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_rs1_bypass_data_d)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offsetff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xfffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__offset_dc1));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__rs1_dc1_raw;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc1_clken 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clken_q)) 
                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                     >> 4U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__lsu_freeze_dc3))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_done_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_done_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_done_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (0x3ffffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken)
                        ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in 
                           >> 1U) : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_dc1ff__dout));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c2_dc1_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_dc1_in);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_freeze_c1_dc1_clken;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_legal_decode_d) 
               & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_dp 
                          >> 0x27U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT__lsu_pkt_vlddc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_lsc_ctl__DOT____Vcellout__lsu_pkt_vlddc1ff__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clkenff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__clkdomain__DOT__lsu_freeze_c1_dc1_clken_q;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc1ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_i0_valid_dc1;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_done_bus_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_done_bus_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_done_bus_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_done_bus_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_done_bus_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_done_bus_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_done_bus_dff__dout))));
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__61(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__61\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg) 
           | ((2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrolff__dout) 
                     << 1U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__resumereq 
        = (((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
             >> 0x1eU) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                             >> 0x1fU))) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren_Q));
}

VL_INLINE_OPT void Vrvfpgasim_BD::_sequent__TOP__rvfpgasim__swervolf__62(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_sequent__TOP__rvfpgasim__swervolf__62\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*223:0*/ __Vtemp1569[7];
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__Vtableidx1 
        = (0xfU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon_wrapper_0__DOT__syscon__DOT__SegDispl_Ctr__DOT__digits_concat 
                   >> (0x1cU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon_wrapper_0__DOT__syscon__DOT__SegDispl_Ctr__DOT__counter20__DOT__i_counter__DOT__counter_q 
                                >> 0xfU))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon_wrapper_0_Digits_Bits 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vtable1___PVT__syscon_wrapper_0_Digits_Bits
        [vlSymsp->TOP__rvfpgasim__swervolf.__Vtableidx1];
    __Vtemp1569[0U] = 0U;
    __Vtemp1569[1U] = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0_wb_dat_o;
    __Vtemp1569[2U] = 0U;
    __Vtemp1569[3U] = 0U;
    __Vtemp1569[4U] = 0U;
    __Vtemp1569[5U] = (IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom_wrapper_0__bootrom__ram.__PVT__dout)) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon_wrapper_0_o_wb_rdt))));
    __Vtemp1569[6U] = (IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom_wrapper_0__bootrom__ram.__PVT__dout)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon_wrapper_0_o_wb_rdt))) 
                               >> 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_s2m_io_dat 
        = ((0xdfU >= (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                               << 5U))) ? (((0U == 
                                             (0x1fU 
                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                 << 5U)))
                                             ? 0U : 
                                            (__Vtemp1569[
                                             ((IData)(1U) 
                                              + (7U 
                                                 & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)))] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                     << 5U))))) 
                                           | (__Vtemp1569[
                                              (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel))] 
                                              >> (0x1fU 
                                                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel) 
                                                     << 5U))))
            : 0U);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_s2m_io_ack 
        = ((6U >= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
           & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf__bootrom_wrapper_0__bootrom.__PVT__o_wb_ack) 
                << 6U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__syscon_wrapper_0_o_wb_ack) 
                           << 5U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0_wb_ack_o) 
                                     << 1U))) >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_s2m_io_err 
        = (((6U >= (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel)) 
            & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_rom_err_i) 
                 << 6U) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0_wb_err_o) 
                           << 1U)) >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_intercon0__DOT__wb_mux_io__DOT__slave_sel))) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_intercon0__DOT__wb_mux_io__DOT__wbm_err));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0_wb_inta_o 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) 
           & ((0U != vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_ints) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_ctrl)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_ints 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio_wrapper_0__DOT__gpio__DOT__rgpio_ints;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_ctrl 
        = vlSymsp->TOP__rvfpgasim__swervolf.__Vdly__gpio_wrapper_0__DOT__gpio__DOT__rgpio_ctrl;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_adr))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__wb_dat 
            = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_adr))
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_in
                : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_adr))
                    ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_in
                    : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_nec
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_eclk)));
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_adr))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_adr))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_adr))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__wb_dat 
                        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_ints;
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__wb_dat 
                        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__wb_dat) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_ctrl));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__wb_dat 
                        = (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__wb_dat);
                }
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__wb_dat 
                    = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_aux
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_ptrig);
            }
        } else {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__wb_dat 
                = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_adr))
                    ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_inte
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_oe)
                    : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__wb_adr))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_out
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__gpio_wrapper_0__DOT__gpio__DOT__rgpio_in));
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__63(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__63\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1570[3];
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1 
        = ((((8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
             & (2U == (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                >> 0x18U)))) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                >> 0x13U)) 
           & (~ (IData)((0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                      >> 8U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_read_pend 
        = ((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                 >> 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid 
        = ((((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
             & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                   >> 0x10U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_dma_bubble 
        = (((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (~ (IData)((0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                       >> 8U)))))) 
           | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid 
        = (((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
               >> 0x10U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid 
        = (((6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
               >> 0x10U)) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_arvalid 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid) 
           | (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_awvalid 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
           | ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
              | (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid))
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg)) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg)))
            : (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata1_reg)) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata0_reg))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_wvalid 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid) 
           | ((4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
              | (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))));
    if (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_awvalid) 
           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_wvalid)) 
          | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_arvalid)) 
         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_read_pend))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size 
            = (7U & (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                           >> 0x14U)));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data1_reg;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size 
            = (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                     >> 0x11U));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
        = ((0xfff7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU]) 
           | (0xfff80000U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_arvalid) 
                             << 0x13U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x12U] 
        = ((0xfffffffbU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x12U]) 
           | (0xfffffffcU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_awvalid) 
                             << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
        = ((0xff3fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU]) 
           | (0xffc00000U & (0x400000U | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_wvalid) 
                                          << 0x17U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x12U] 
        = ((0xffffc3ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x12U]) 
           | (0x3c00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                         >> 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
        = ((0xfe1fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU]) 
           | (0x1e00000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                            >> 7U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x12U] 
        = ((0x3ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x12U]) 
           | (0xfffc0000U & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                       << 0x15U) | (QData)((IData)(
                                                                   (0x178U 
                                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                       << 0xaU)))))) 
                             << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x13U] 
        = ((0x3ffffU & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                  << 0x15U) | (QData)((IData)(
                                                              (0x178U 
                                                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                  << 0xaU)))))) 
                        >> 0xeU)) | (0xfffc0000U & 
                                     ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                                 << 0x15U) 
                                                | (QData)((IData)(
                                                                  (0x178U 
                                                                   | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                      << 0xaU))))) 
                                               >> 0x20U)) 
                                      << 0x12U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x14U] 
        = (0x3ffffU & ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                  << 0x15U) | (QData)((IData)(
                                                              (0x178U 
                                                               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                  << 0xaU))))) 
                                >> 0x20U)) >> 0xeU));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
        = ((0x1fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU]) 
           | (0xe0000000U & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                       << 0x15U) | (QData)((IData)(
                                                                   (0x100U 
                                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                       << 0xaU)))))) 
                             << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xeU] 
        = ((0x1fffffffU & ((IData)((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                     << 0x15U) | (QData)((IData)(
                                                                 (0x100U 
                                                                  | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                     << 0xaU)))))) 
                           >> 3U)) | (0xe0000000U & 
                                      ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(
                                                                   (0x100U 
                                                                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                       << 0xaU))))) 
                                                >> 0x20U)) 
                                       << 0x1dU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
        = ((0xffc00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU]) 
           | (0x1fffffffU & ((IData)(((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)) 
                                        << 0x15U) | (QData)((IData)(
                                                                    (0x100U 
                                                                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size) 
                                                                        << 0xaU))))) 
                                      >> 0x20U)) >> 3U)));
    __Vtemp1570[0U] = (1U | ((0xfffffe00U & ((IData)(
                                                     (((((- (QData)((IData)(
                                                                            (0U 
                                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                         & (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                << 0x30U) 
                                                               | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                   << 0x28U) 
                                                                  | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                      << 0x20U) 
                                                                     | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                         << 0x18U) 
                                                                        | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                            << 0x10U) 
                                                                           | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                               << 8U) 
                                                                              | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                                        | ((- (QData)((IData)(
                                                                              (1U 
                                                                               == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                           & (((QData)((IData)(
                                                                               (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                  << 0x20U) 
                                                                 | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                     << 0x10U) 
                                                                    | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))))))) 
                                                       | ((- (QData)((IData)(
                                                                             (2U 
                                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                          & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))) 
                                                      | ((- (QData)((IData)(
                                                                            (3U 
                                                                             == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                         & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))) 
                                             << 9U)) 
                             | (0x1feU & ((((((- (IData)(
                                                         (0U 
                                                          == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr))) 
                                             | ((- (IData)(
                                                           (1U 
                                                            == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                                & ((IData)(3U) 
                                                   << 
                                                   (6U 
                                                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)))) 
                                            | ((- (IData)(
                                                          (2U 
                                                           == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size)))) 
                                               & ((IData)(0xfU) 
                                                  << 
                                                  (4U 
                                                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr)))) 
                                           | (- (IData)(
                                                        (3U 
                                                         == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                          << 1U))));
    __Vtemp1570[1U] = ((0x1ffU & ((IData)((((((- (QData)((IData)(
                                                                 (0U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                              & (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                           << 0x20U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                              << 0x18U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                 << 0x10U) 
                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                    << 8U) 
                                                                   | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                             | ((- (QData)((IData)(
                                                                   (1U 
                                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                & (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                       << 0x20U) 
                                                      | (((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           (0xffffU 
                                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))))))) 
                                            | ((- (QData)((IData)(
                                                                  (2U 
                                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                               & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))) 
                                           | ((- (QData)((IData)(
                                                                 (3U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))) 
                                  >> 0x17U)) | (0xfffffe00U 
                                                & ((IData)(
                                                           ((((((- (QData)((IData)(
                                                                                (0U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                                & (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                    << 0x38U) 
                                                                   | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                       << 0x30U) 
                                                                      | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                          << 0x28U) 
                                                                         | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                             << 0x20U) 
                                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                                << 0x18U) 
                                                                               | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                                << 0x10U) 
                                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                                               | ((- (QData)((IData)(
                                                                                (1U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                                  & (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                      << 0x30U) 
                                                                     | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                         << 0x20U) 
                                                                        | (((QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                            << 0x10U) 
                                                                           | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))))))) 
                                                              | ((- (QData)((IData)(
                                                                                (2U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                                 & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))) 
                                                             | ((- (QData)((IData)(
                                                                                (3U 
                                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                            >> 0x20U)) 
                                                   << 9U)));
    __Vtemp1570[2U] = (0x1ffU & ((IData)(((((((- (QData)((IData)(
                                                                 (0U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                              & (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                           << 0x20U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                              << 0x18U) 
                                                             | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                 << 0x10U) 
                                                                | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                                    << 8U) 
                                                                   | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))))))))))) 
                                             | ((- (QData)((IData)(
                                                                   (1U 
                                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                & (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                       << 0x20U) 
                                                      | (((QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)))) 
                                                          << 0x10U) 
                                                         | (QData)((IData)(
                                                                           (0xffffU 
                                                                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))))))) 
                                            | ((- (QData)((IData)(
                                                                  (2U 
                                                                   == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                               & (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata))))) 
                                           | ((- (QData)((IData)(
                                                                 (3U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_wrdata)) 
                                          >> 0x20U)) 
                                 >> 0x17U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
        = ((0x1ffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU]) 
           | (0xfe000000U & (__Vtemp1570[0U] << 0x19U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x10U] 
        = ((0x1ffffffU & (__Vtemp1570[0U] >> 7U)) | 
           (0xfe000000U & (__Vtemp1570[1U] << 0x19U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x11U] 
        = ((0x1ffffffU & (__Vtemp1570[1U] >> 7U)) | 
           (0xfe000000U & (__Vtemp1570[2U] << 0x19U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x12U] 
        = ((0xfffffffcU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x12U]) 
           | (0x1ffffffU & (__Vtemp1570[2U] >> 7U)));
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__64(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__64\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__lsu_freeze_dc3_q) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rd_data_lo 
            = (0x7fffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_lo_q);
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rd_data_hi 
            = (0x7fffffffffULL & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hi_q);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_loff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_lo_q;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rd_data_lo 
            = (0x7fffffffffULL & ((0x137U >= (0x1ffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (0xfU 
                                                                    & (((IData)(0x27U) 
                                                                        * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))))) 
                                      | (((QData)((IData)(
                                                          vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                          ((IData)(1U) 
                                                           + 
                                                           (0xfU 
                                                            & (((IData)(0x27U) 
                                                                * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)) 
                                                               >> 5U)))])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))
                                               ? 0x20U
                                               : ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)))))) 
                                         | ((QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                            (0xfU 
                                                             & (((IData)(0x27U) 
                                                                 * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout)) 
                                                                >> 5U))])) 
                                            >> (0x1fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_lo_ff__dout))))))
                                   : 0ULL));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rd_data_hi 
            = (0x7fffffffffULL & ((0x137U >= (0x1ffU 
                                              & ((IData)(0x27U) 
                                                 * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                   ? (((0U == (0x1fU 
                                               & ((IData)(0x27U) 
                                                  * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                        ? 0ULL : ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                                  ((IData)(2U) 
                                                                   + 
                                                                   (0xfU 
                                                                    & (((IData)(0x27U) 
                                                                        * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                       >> 5U)))])) 
                                                  << 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x27U) 
                                                       * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                      | (((QData)((IData)(
                                                          vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                          ((IData)(1U) 
                                                           + 
                                                           (0xfU 
                                                            & (((IData)(0x27U) 
                                                                * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                               >> 5U)))])) 
                                          << ((0U == 
                                               (0x1fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))
                                               ? 0x20U
                                               : ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x27U) 
                                                      * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)))))) 
                                         | ((QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_bank_dout[
                                                            (0xfU 
                                                             & (((IData)(0x27U) 
                                                                 * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout)) 
                                                                >> 5U))])) 
                                            >> (0x1fU 
                                                & ((IData)(0x27U) 
                                                   * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT____Vcellout__rd_addr_hi_ff__dout))))))
                                   : 0ULL));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_loff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rd_data_lo;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_dccm_c1_dc3_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rd_data_lo);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rd_data_lo 
                                >> 0x20U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_data_lo_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_lo_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_lo_dc3));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hiff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__lsu_freeze_dc3_q)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__Gen_dccm_enable__DOT__dccm__DOT__dccm_rd_data_hi_q
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rd_data_hi);
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_dccm_c1_dc3_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rd_data_hi);
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__dccm_rd_data_hi 
                                >> 0x20U)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_data_hi_dc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_ctl__DOT__Gen_dccm_enable__DOT__dccm_data_ecc_hi_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (0x7fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__dccm_data_ecc_hi_dc3));
    }
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__65(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__65\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0U] 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0U] 
           & (IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[1U] 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[1U] 
           & ((0xfffffffcU & ((IData)((0x3ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                >> 1U))))))) 
                              << 2U)) | (IData)(((0x3ffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                 >> 0x20U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[2U] 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[2U] 
           & ((0xfffffff0U & ((IData)((0x3ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                >> 2U))))))) 
                              << 4U)) | ((3U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                >> 0x1eU)) 
                                         | (0xfffffffcU 
                                            & ((IData)(
                                                       ((0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U)))))) 
                                                        >> 0x20U)) 
                                               << 2U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[3U] 
        = (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[3U] 
           & ((0xffffffc0U & ((IData)((0x3ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                >> 3U))))))) 
                              << 6U)) | ((0xfU & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                  >> 0x1cU)) 
                                         | (0xfffffff0U 
                                            & ((IData)(
                                                       ((0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U)))))) 
                                                        >> 0x20U)) 
                                               << 4U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U]) 
           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
              & ((0x3fU & ((IData)((0x3ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                             >> 3U))))))) 
                           >> 0x1aU)) | (0xffffffc0U 
                                         & ((IData)(
                                                    ((0x3ffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                               >> 3U)))))) 
                                                     >> 0x20U)) 
                                            << 6U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U] 
        = ((0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U]) 
           | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[4U] 
                             & ((IData)((0x3ffffffffULL 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                                << 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
                     & ((IData)((0x3ffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                        >> 0x18U))) | (0xffffff00U 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[5U] 
                                          & ((0xfffffc00U 
                                              & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                 << 0xaU)) 
                                             | ((IData)(
                                                        ((0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                         >> 0x20U)) 
                                                << 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
                     & ((0xffU & ((IData)((0x3ffffffffULL 
                                           & (- (QData)((IData)(
                                                                (1U 
                                                                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                    >> 1U))))))) 
                                  >> 0x16U)) | ((IData)(
                                                        ((0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                         >> 0x20U)) 
                                                >> 0x18U)))) 
           | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[6U] 
                             & ((0xfffff000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                << 0xcU)) 
                                | ((0x300U & ((IData)(
                                                      (0x3ffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                              >> 0x16U)) 
                                   | (0xfffffc00U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 1U)))))) 
                                                >> 0x20U)) 
                                       << 0xaU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
                     & (((IData)((0x3ffffffffULL & 
                                  (- (QData)((IData)(
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                         >> 2U))))))) 
                         >> 0x14U) | ((IData)(((0x3ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                         >> 1U)))))) 
                                               >> 0x20U)) 
                                      >> 0x16U)))) 
           | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[7U] 
                             & ((0xffffc000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                                << 0xeU)) 
                                | ((0xf00U & ((IData)(
                                                      (0x3ffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                              >> 0x14U)) 
                                   | (0xfffff000U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 2U)))))) 
                                                >> 0x20U)) 
                                       << 0xcU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
        = ((0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U]) 
           | ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
                        & (((IData)((0x3ffffffffULL 
                                     & (- (QData)((IData)(
                                                          (1U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                              >> 3U))))))) 
                            >> 0x12U) | ((IData)(((0x3ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                            >> 2U)))))) 
                                                  >> 0x20U)) 
                                         >> 0x14U)))) 
              | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
                                & ((0x3f00U & ((IData)(
                                                       (0x3ffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                               >> 0x12U)) 
                                   | (0xffffc000U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 3U)))))) 
                                                >> 0x20U)) 
                                       << 0xeU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U]) 
           | (0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[8U] 
                             & ((IData)((0x3ffffffffULL 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                                << 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
        = ((0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U] 
                       & ((IData)((0x3ffffffffULL & 
                                   (- (QData)((IData)(
                                                      (1U 
                                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                          >> 0x10U))) | (0xffff0000U 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[9U] 
                                            & ((0xfffc0000U 
                                                & ((IData)(
                                                           (0x3ffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                   << 0x12U)) 
                                               | ((IData)(
                                                          ((0x3ffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
        = ((0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU] 
                       & ((0xffffU & ((IData)((0x3ffffffffULL 
                                               & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                        >> 1U))))))) 
                                      >> 0xeU)) | ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                            >> 0x20U)) 
                                                   >> 0x10U)))) 
           | (0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xaU] 
                             & ((0xfff00000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                << 0x14U)) 
                                | ((0x30000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                >> 0xeU)) 
                                   | (0xfffc0000U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 1U)))))) 
                                                >> 0x20U)) 
                                       << 0x12U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
        = ((0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU] 
                       & (((IData)((0x3ffffffffULL 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                             >> 2U))))))) 
                           >> 0xcU) | ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 1U)))))) 
                                                >> 0x20U)) 
                                       >> 0xeU)))) 
           | (0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xbU] 
                             & ((0xffc00000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                                << 0x16U)) 
                                | ((0xf0000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                >> 0xcU)) 
                                   | (0xfff00000U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 2U)))))) 
                                                >> 0x20U)) 
                                       << 0x14U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
        = ((0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU]) 
           | ((0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
                          & (((IData)((0x3ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                >> 3U))))))) 
                              >> 0xaU) | ((IData)((
                                                   (0x3ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                             >> 2U)))))) 
                                                   >> 0x20U)) 
                                          >> 0xcU)))) 
              | (0xffff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
                                & ((0x3f0000U & ((IData)(
                                                         (0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                                 >> 0xaU)) 
                                   | (0xffc00000U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 3U)))))) 
                                                >> 0x20U)) 
                                       << 0x16U)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU]) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xcU] 
                             & ((IData)((0x3ffffffffULL 
                                         & (- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                                << 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
        = ((0xffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU] 
                         & ((IData)((0x3ffffffffULL 
                                     & (- (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff))))))) 
                            >> 8U))) | (0xff000000U 
                                        & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xdU] 
                                           & ((0xfc000000U 
                                               & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                  << 0x1aU)) 
                                              | ((IData)(
                                                         ((0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                                          >> 0x20U)) 
                                                 << 0x18U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
        = ((0xffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU] 
                         & ((0xffffffU & ((IData)((0x3ffffffffULL 
                                                   & (- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                            >> 1U))))))) 
                                          >> 6U)) | 
                            ((IData)(((0x3ffffffffULL 
                                       & (- (QData)((IData)(
                                                            (1U 
                                                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff)))))) 
                                      >> 0x20U)) >> 8U)))) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xeU] 
                             & ((0xf0000000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                << 0x1cU)) 
                                | ((0x3000000U & ((IData)(
                                                          (0x3ffffffffULL 
                                                           & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 1U))))))) 
                                                  >> 6U)) 
                                   | (0xfc000000U & 
                                      ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 1U)))))) 
                                                >> 0x20U)) 
                                       << 0x1aU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
        = ((0xffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU] 
                         & (((IData)((0x3ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                               >> 2U))))))) 
                             >> 4U) | ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 1U)))))) 
                                                >> 0x20U)) 
                                       >> 6U)))) | 
           (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0xfU] 
                           & ((0xc0000000U & ((IData)(
                                                      (0x3ffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                              << 0x1eU)) 
                              | ((0xf000000U & ((IData)(
                                                        (0x3ffffffffULL 
                                                         & (- (QData)((IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U))))))) 
                                                >> 4U)) 
                                 | (0xf0000000U & ((IData)(
                                                           ((0x3ffffffffULL 
                                                             & (- (QData)((IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 2U)))))) 
                                                            >> 0x20U)) 
                                                   << 0x1cU)))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0x10U] 
        = ((0xffffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0x10U] 
                         & (((IData)((0x3ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                               >> 3U))))))) 
                             >> 2U) | ((IData)(((0x3ffffffffULL 
                                                 & (- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                          >> 2U)))))) 
                                                >> 0x20U)) 
                                       >> 4U)))) | 
           (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout[0x10U] 
                           & ((0x3f000000U & ((IData)(
                                                      (0x3ffffffffULL 
                                                       & (- (QData)((IData)(
                                                                            (1U 
                                                                             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U))))))) 
                                              >> 2U)) 
                              | (0xc0000000U & ((IData)(
                                                        ((0x3ffffffffULL 
                                                          & (- (QData)((IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_bank_read_ff) 
                                                                                >> 3U)))))) 
                                                         >> 0x20U)) 
                                                << 0x1eU))))));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U];
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[3U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[3U];
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U]) 
           | (0xffU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                        : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U])));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U] 
        = ((0xffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[4U]) 
           | (0xffffff00U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                               : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
                                   << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U] 
                                                >> 8U))) 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[5U] 
        = ((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                       ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                       : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
                           << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[4U] 
                                        >> 8U))) >> 0x18U)) 
           | (0xffffff00U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                               : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
                                   << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
                                                >> 8U))) 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[6U] 
        = ((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                       ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                       : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
                           << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[5U] 
                                        >> 8U))) >> 0x18U)) 
           | (0xffffff00U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                               : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
                                   << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
                                                >> 8U))) 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[7U] 
        = ((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                       ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                       : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
                           << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[6U] 
                                        >> 8U))) >> 0x18U)) 
           | (0xffffff00U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                               : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                                   << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
                                                >> 8U))) 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
        = ((0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U]) 
           | ((0xffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                          ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                          : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                              << 0x18U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[7U] 
                                           >> 8U))) 
                        >> 0x18U)) | (0xff00U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                   ? 
                                                  vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                                                   : 
                                                  ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                                                      >> 8U))) 
                                                 << 8U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[8U]) 
           | (0xffff0000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                               : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                                   << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                                                >> 0x10U))) 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[9U] 
        = ((0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                         : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                             << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[8U] 
                                          >> 0x10U))) 
                       >> 0x10U)) | (0xffff0000U & 
                                     (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                                        : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                                              >> 0x10U))) 
                                      << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xaU] 
        = ((0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                         : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
                             << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[9U] 
                                          >> 0x10U))) 
                       >> 0x10U)) | (0xffff0000U & 
                                     (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                                        : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
                                              >> 0x10U))) 
                                      << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xbU] 
        = ((0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                         : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
                             << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xaU] 
                                          >> 0x10U))) 
                       >> 0x10U)) | (0xffff0000U & 
                                     (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                                        : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                                            << 0x10U) 
                                           | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
                                              >> 0x10U))) 
                                      << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
        = ((0xff000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU]) 
           | ((0xffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                            : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                                << 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xbU] 
                                             >> 0x10U))) 
                          >> 0x10U)) | (0xff0000U & 
                                        (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                           ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                                               << 0x10U) 
                                              | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                                                 >> 0x10U))) 
                                         << 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xcU]) 
           | (0xff000000U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                               ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                               : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                                   << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                                             >> 0x18U))) 
                             << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xdU] 
        = ((0xffffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                           ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[0U]
                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xcU] 
                                         >> 0x18U))) 
                         >> 8U)) | (0xff000000U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                     ? 
                                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                                                     : 
                                                    ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xeU] 
        = ((0xffffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                           ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[1U]
                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xdU] 
                                         >> 0x18U))) 
                         >> 8U)) | (0xff000000U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                     ? 
                                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                                                     : 
                                                    ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0xfU] 
        = ((0xffffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                           ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[2U]
                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xeU] 
                                         >> 0x18U))) 
                         >> 8U)) | (0xff000000U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                     ? 
                                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                                                     : 
                                                    ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0x10U] 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
                                                        >> 0x18U))) 
                                                   << 0x18U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way_with_premux[0x10U] 
        = ((0xffffffU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                           ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[3U]
                           : ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0x10U] 
                               << 8U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0xfU] 
                                         >> 0x18U))) 
                         >> 8U)) | (0xff000000U & (
                                                   ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ic_crit_wd_rdy_ff)
                                                     ? 
                                                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__ic_premux_data_ext[4U]
                                                     : 
                                                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_data_inst__DOT__wb_dout_way[0x10U] 
                                                     >> 0x18U)) 
                                                   << 0x18U)));
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__66(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__66\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__ictag_debug_rd_data 
        = (0x1fffffU & (((((- (IData)((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff)))) 
                           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]) 
                          | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff) 
                                               >> 1U)))) 
                             & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                 << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U] 
                                             >> 0x15U)))) 
                         | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff) 
                                              >> 2U)))) 
                            & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U] 
                                << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                             >> 0xaU)))) 
                        | ((- (IData)((1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_debug_rd_way_en_ff) 
                                             >> 3U)))) 
                           & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U] 
                               << 1U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U] 
                                         >> 0x1fU)))));
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__67(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__67\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U] 
        = ((0xfff00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U]) 
           | (0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U] 
        = ((0xffefffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U]) 
           | (0x100000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U] 
        = ((0x1fffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U]) 
           | (0xffe00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[0U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
        = ((0xfffffe00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U]) 
           | (0x1ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
        = ((0xfffffdffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U]) 
           | (0x200U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
        = ((0xc00003ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U]) 
           | (0x3ffffc00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
        = ((0xbfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U]) 
           | (0x40000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
        = ((0x7fffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U]) 
           | (0x80000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[1U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
        = ((0x80000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U]) 
           | (0x7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
        = ((0x7ffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U]) 
           | (0x80000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_data_raw[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr)) 
           | (1U & (VL_REDXOR_32((0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U])) 
                    ^ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U] 
                       >> 0x14U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr)) 
           | (2U & ((VL_REDXOR_32((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                                << 0xbU) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[0U] 
                                                  >> 0x15U)))) 
                     << 1U) ^ (0xfffffeU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                            >> 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr)) 
           | (4U & ((VL_REDXOR_32((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
                                                << 0x16U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                                  >> 0xaU)))) 
                     << 2U) ^ (0xcU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                       >> 0x1cU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__ic_tag_way_perr)) 
           | (8U & ((VL_REDXOR_32((0xfffffU & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
                                                << 1U) 
                                               | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[1U] 
                                                  >> 0x1fU)))) 
                     << 3U) ^ (0xfff8U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__mem__DOT__icm__DOT__ic_tag_inst__DOT__w_tout[2U] 
                                          >> 0x10U)))));
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__68(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__68\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__core_dbg_cmd_done) 
            & (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                 >> 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid 
        = (((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout)) 
            & (~ (((0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                 >> 8U))) | ((0U == 
                                              (0xffU 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                  >> 0x18U))) 
                                             & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                   >> 0x11U)))) 
                  | ((2U == (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                      >> 0x18U))) & 
                     (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abmem_addr_core_local)))))) 
           & ((~ (((0U != ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid_en) 
                           | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_valid))) 
                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid)) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_slv_sent_q))) 
              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_dma_bubble)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[6U] 
                        << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[5U] 
                                    >> 0x15U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (1U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[6U] 
                           << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[5U] 
                                       >> 0x15U))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[6U] 
                            << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[5U] 
                                        >> 0x15U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (2U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[6U] 
                        << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[5U] 
                                    >> 0x15U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[6U] 
                           << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[5U] 
                                       >> 0x15U))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[6U] 
                            << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[5U] 
                                        >> 0x15U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_valid = 1U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules = 0U;
    if ((0x8000000U > vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[1U])) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (1U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
    }
    if (((0x80000000U <= vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[1U]) 
         & (0x80004000U > vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[1U]))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (2U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid = 0U;
    if ((0x8000000U > vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[1U])) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid = 1U;
    }
    if (((0x80000000U <= vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[1U]) 
         & (0x80004000U > vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[1U]))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_valid = 1U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
                        << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xcU] 
                                     >> 0xeU)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (1U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
                           << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xcU] 
                                        >> 0xeU))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
                            << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xcU] 
                                         >> 0xeU))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (2U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
                        << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xcU] 
                                     >> 0xeU)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
                           << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xcU] 
                                        >> 0xeU))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
                            << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xcU] 
                                         >> 0xeU))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_valid = 1U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[8U] 
                        << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[7U] 
                                  >> 0x19U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (1U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[8U] 
                           << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[7U] 
                                     >> 0x19U))) & 
         (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[8U] 
                          << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[7U] 
                                    >> 0x19U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (2U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[8U] 
                        << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[7U] 
                                  >> 0x19U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[8U] 
                           << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[7U] 
                                     >> 0x19U))) & 
         (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[8U] 
                          << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[7U] 
                                    >> 0x19U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_valid = 1U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x14U] 
                        << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x13U] 
                                     >> 7U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (1U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x14U] 
                           << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x13U] 
                                        >> 7U))) & 
         (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x14U] 
                          << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x13U] 
                                       >> 7U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules 
            = (2U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__DOT__matched_rules));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x14U] 
                        << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x13U] 
                                     >> 7U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x14U] 
                           << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x13U] 
                                        >> 7U))) & 
         (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x14U] 
                          << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x13U] 
                                       >> 7U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_valid = 1U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
                        << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xeU] 
                                    >> 0x12U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (1U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
                           << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xeU] 
                                       >> 0x12U))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
                            << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xeU] 
                                        >> 0x12U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules 
            = (2U | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__DOT__matched_rules));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
                        << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xeU] 
                                    >> 0x12U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
                           << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xeU] 
                                       >> 0x12U))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
                            << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xeU] 
                                        >> 0x12U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_valid = 1U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error = 1U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[6U] 
                        << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[5U] 
                                    >> 0x15U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error = 0U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[6U] 
                           << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[5U] 
                                       >> 0x15U))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[6U] 
                            << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[5U] 
                                        >> 0x15U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_aw_error = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[6U] 
                        << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[5U] 
                                    >> 0x15U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[6U] 
                           << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[5U] 
                                       >> 0x15U))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[6U] 
                            << 0xbU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[5U] 
                                        >> 0x15U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error = 1U;
    if ((0x8000000U > vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[1U])) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error = 0U;
    }
    if (((0x80000000U <= vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[1U]) 
         & (0x80004000U > vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[1U]))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__dec_ar_error = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    if ((0x8000000U > vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[1U])) {
        vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o = 1U;
    }
    if (((0x80000000U <= vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[1U]) 
         & (0x80004000U > vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[1U]))) {
        vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error = 1U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
                        << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xcU] 
                                     >> 0xeU)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error = 0U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
                           << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xcU] 
                                        >> 0xeU))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
                            << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xcU] 
                                         >> 0xeU))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_aw_error = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
                        << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xcU] 
                                     >> 0xeU)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
                           << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xcU] 
                                        >> 0xeU))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xdU] 
                            << 0x12U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xcU] 
                                         >> 0xeU))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error = 1U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[8U] 
                        << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[7U] 
                                  >> 0x19U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error = 0U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[8U] 
                           << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[7U] 
                                     >> 0x19U))) & 
         (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[8U] 
                          << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[7U] 
                                    >> 0x19U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__dec_ar_error = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[8U] 
                        << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[7U] 
                                  >> 0x19U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[8U] 
                           << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[7U] 
                                     >> 0x19U))) & 
         (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[8U] 
                          << 7U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[7U] 
                                    >> 0x19U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error = 1U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x14U] 
                        << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x13U] 
                                     >> 7U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error = 0U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x14U] 
                           << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x13U] 
                                        >> 7U))) & 
         (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x14U] 
                          << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x13U] 
                                       >> 7U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_aw_error = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x14U] 
                        << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x13U] 
                                     >> 7U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x14U] 
                           << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x13U] 
                                        >> 7U))) & 
         (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x14U] 
                          << 0x19U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0x13U] 
                                       >> 7U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_aw_decode__idx_o = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error = 1U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
                        << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xeU] 
                                    >> 0x12U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error = 0U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
                           << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xeU] 
                                       >> 0x12U))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
                            << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xeU] 
                                        >> 0x12U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__dec_ar_error = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    if ((0x8000000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
                        << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xeU] 
                                    >> 0x12U)))) {
        vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o = 1U;
    }
    if (((0x80000000U <= ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
                           << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xeU] 
                                       >> 0x12U))) 
         & (0x80004000U > ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xfU] 
                            << 0xeU) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__masters_req[0xeU] 
                                        >> 0x12U))))) {
        vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT____Vcellout__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_ar_decode__idx_o = 0U;
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in 
            = (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                     >> 0x14U));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in 
            = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                     >> 0x10U));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid 
            = ((2U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_type)) 
               & 1U);
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size;
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel));
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid = 0U;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
               | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid) 
                  & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_type) 
                     >> 1U))) & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                << 1U) | (0xfffffffeU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid) 
                                          << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_type)))) 
              & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                 << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                << 2U) | (0xfffffffcU & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid) 
                                          << 2U) & 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_type) 
                                          << 1U)))) 
              & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                 << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                << 3U) | (0xfffffff8U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid) 
                                          << 3U) & 
                                         ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_type) 
                                          << 2U)))) 
              & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                 << 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_addr
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                 >> 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
              >> 0x10U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen)) 
           | ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval)) 
              & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val) 
                 | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0 
        = ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ibval)) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_val) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr_dff__DOT____Vcellinp__dffs__din 
        = (3U & ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                  ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
               >> 1U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
               >> 2U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_iccm_valid_dff__DOT____Vcellinp__dffs__din 
        = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
               >> 3U)) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_iccm_valid_dff__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_valid_dff__dout))));
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_tag;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_sz_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_write_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_posted_write_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_dbg_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_tag_dff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_valid_dff__dout))));
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_tag;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_sz_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_write_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_posted_write_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_dbg_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_tag_dff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_valid_dff__dout))));
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_tag;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_sz_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_write_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_posted_write_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_dbg_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_tag_dff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_valid_dff__dout))));
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_sz_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_write_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_posted_write_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_tag;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_sz_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_write_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_posted_write_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_posted_write_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_dbg_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_tag_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_tag_dff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en) 
                    | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)) 
                       & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (2U & ((0xfffffffeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
                    | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)) 
                        & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                       << 1U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (4U & ((0xfffffffcU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
                    | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)) 
                        & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                       << 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
           | (8U & ((0xfffffff8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en)) 
                    | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)) 
                        & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                       << 3U))));
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = ((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                       >> 0x10U))) 
               | (0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                           >> 0xfU))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_addr_dff__dout;
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = ((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                       >> 0x10U))) 
               | (0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                           >> 0xfU))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_addr_dff__dout;
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = ((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                       >> 0x10U))) 
               | (0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                           >> 0xfU))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_addr_dff__dout;
    }
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = ((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                       >> 0x10U))) 
               | (0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                           >> 0xfU))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in;
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_dccm_valid_dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_dccm_valid_dff__dout;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_addr_dff__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid) 
            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_type))) 
           & ((~ ((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                          >> 0x10U))) 
                  | (0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                              >> 0xfU))))) 
              | ((0x1e018U == (0x1ffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                           >> 0xfU))) 
                 & (2U != (3U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                 >> 0x14U))))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
           & (0xf004U != (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                     >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write) 
           & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_type)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write) 
           & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_type)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibvalid 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibval) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i0_wen)) 
           | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__i1_wen) 
              << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3)) 
            << 3U) | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2) 
                         | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2)) 
                        | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2)) 
                       << 2U) | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1) 
                                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1)) 
                                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1)) 
                                  << 1U) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0) 
                                             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0)) 
                                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error))) 
           & (((((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size)) 
                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr 
                    | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                       & (3U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteen) 
                                       >> (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))))))) 
                | ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size)) 
                   & ((0U != (3U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr)) 
                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                         & (0xfU != (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteen) 
                                             >> (7U 
                                                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr)))))))) 
               | ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size)) 
                  & ((0U != (7U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr)) 
                     | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                        & (0xffU != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_byteen)))))) 
              | (((0xf004U == (0xffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr_in 
                                          >> 0x10U))) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel)) 
                 & (~ ((2U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size))) 
                       | (3U == (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_size))))))));
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__cinst3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                           & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                          | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_i1_cinst))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__pc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
               | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_brp[0U]) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_brp[0U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_brp[1U]) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_brp[1U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_brp[2U]) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_brp[2U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk9__DOT__ib3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib3))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_i0_instr) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib3))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_i1_instr));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__cinst3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst3));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__pc3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc3;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk9__DOT__ib3ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib3;
    }
    if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                           | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1))) 
                          | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst2))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1)) 
               | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc2));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_brp[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[0U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[0U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_brp[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[1U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_brp[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[2U]));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst0));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc0;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp0[2U];
    }
    if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__cinst2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                           | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_i1_cinst))) 
                          | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst3))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__pc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata)) 
               | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc3));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_brp[0U]) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_brp[0U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[0U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_brp[1U]) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_brp[1U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[1U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_brp[2U]) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_brp[2U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[2U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk9__DOT__ib2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib2))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_i0_instr) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib2))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_i1_instr)) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib2))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib3));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk3__DOT__cinst2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst2));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk5__DOT__pc2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc2;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk7__DOT__bp2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__genblk9__DOT__ib2ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib2;
    }
    if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__aln__DOT__aligndata)) 
                            | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_i1_cinst))) 
                           | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                              & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst2))) 
                          | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst3))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i0_pcdata) 
                 | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ifu_i1_pcdata)) 
                | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc2)) 
               | ((- (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc3));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_brp[0U]) 
                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_brp[0U])) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[0U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[0U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_brp[1U]) 
                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_brp[1U])) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[1U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[1U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i0_brp[2U]) 
                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__i1_brp[2U])) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp2[2U])) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp3[2U]));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_i0_instr) 
                 | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i1_ib1))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_i1_instr)) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib1))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib2)) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib3_ib1))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib3));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = (0xffffU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__cinst1));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__pc1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[0U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[0U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[1U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[1U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din[2U] 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__bp1[2U];
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ibwrite))
            ? ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__write_i0_ib0))) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_valid)
                     ? (((((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                       & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_type))))) 
                           & (0x6033U | (0xf8000U & 
                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_addr 
                                          << 0xfU)))) 
                          | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_gpr))) 
                             & (0x6033U | (0xf80U & 
                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_addr 
                                            << 7U))))) 
                         | ((- (IData)(((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_read) 
                                        & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_type))))) 
                            & (0x2073U | (0xfff00000U 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_addr 
                                             << 0x14U))))) 
                        | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__debug_write_csr))) 
                           & (0x1073U | (0xfff00000U 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_addr 
                                            << 0x14U)))))
                     : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu_i0_instr)) 
                | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib1_ib0))) 
                   & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib1)) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__shift_ib2_ib0))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib2))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__instbuff__DOT__ib0);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                 & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid) 
                    & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_type) 
                       >> 1U)) & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                  >> 0x10U))) & (0U 
                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr))) 
              | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                 & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                  & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                 << 1U) | (0x1fffeU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid) 
                                         << 1U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_type)) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                          >> 0xfU)))) 
               & ((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                  << 1U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                              & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                             << 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                  & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                 << 2U) | (0x3fffcU & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid) 
                                         << 2U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_type) 
                                                   << 1U)) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                          >> 0xeU)))) 
               & ((2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                  << 2U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                              & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                             << 2U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en)) 
           | ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_valid) 
                  & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_sel) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
                 << 3U) | (0x7fff8U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid) 
                                         << 3U) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_type) 
                                                   << 2U)) 
                                       & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                          >> 0xdU)))) 
               & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__WrPtr)) 
                  << 3U)) | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                              & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3))) 
                             << 3U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0xfcU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
               & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
               ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
               : (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                   << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0xf3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
                : (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                    << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
              << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0xcfU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
                : (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                    << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
              << 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in 
        = ((0x3fU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)) 
           | ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_double_ecc_error_dc3)
                : (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_address_error) 
                      | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error)) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_cmd_error_in)) 
                    << 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_alignment_error))) 
              << 6U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en)) 
           | (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en)) 
           | (2U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en)) 
           | (4U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en)) 
           | (8U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_valid))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset))))) 
                 & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                     ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in)
                     : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 1U))))) & 
                 ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 2U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 2U))))) & 
                 ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 4U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_error_dff__DOT__din_new 
        = (3U & ((- (IData)((1U & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                                      >> 3U))))) & 
                 ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en))
                   ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                      >> 6U) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en 
        = ((0xeU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en)) 
           | (((0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in))) 
               & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en)) 
              | (0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en 
        = ((0xdU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en)) 
           | ((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                              >> 2U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                                          >> 1U)) | 
               (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                             >> 2U)))) << 1U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en 
        = ((0xbU & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en)) 
           | ((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                              >> 4U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                                          >> 2U)) | 
               (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                             >> 4U)))) << 2U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en 
        = ((7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en)) 
           | ((((0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                              >> 6U))) & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                                          >> 3U)) | 
               (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error) 
                             >> 6U)))) << 3U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[0U] 
        = (IData)((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                    & (0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in))))
                    ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                        ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                        : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[0U])))
                    : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rdata
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid)
                            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[1U] 
        = (IData)(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     & (0U != (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in))))
                     ? ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                         ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                         : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[0U])))
                     : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rdata
                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid)
                             ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                             : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))) 
                   >> 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[2U] 
        = (IData)(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     >> 1U) & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                            >> 2U))))
                    ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                        ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                        : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[1U])))
                    : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rdata
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid)
                            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[3U] 
        = (IData)((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                      >> 1U) & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                             >> 2U))))
                     ? ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                         ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                         : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[1U])))
                     : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rdata
                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid)
                             ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                             : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))) 
                   >> 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[4U] 
        = (IData)(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     >> 2U) & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                            >> 4U))))
                    ? ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                        ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                        : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[2U])))
                    : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rdata
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid)
                            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[5U] 
        = (IData)((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                      >> 2U) & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                             >> 4U))))
                     ? ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                         ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                         : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[2U])))
                     : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rdata
                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid)
                             ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                             : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))) 
                   >> 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[6U] 
        = (IData)(((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                     >> 3U) & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                            >> 6U))))
                    ? ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                        ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                        : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[3U])))
                    : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                        & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                        ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rdata
                        : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid)
                            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[7U] 
        = (IData)((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_en) 
                      >> 3U) & (0U != (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_in) 
                                             >> 6U))))
                     ? ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_cmd_en))
                         ? (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__axi_mstr_addr))
                         : (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_addr[3U])))
                     : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rvalid) 
                         & (3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__RdPtr_Q3)))
                         ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dccm_dma_rdata
                         : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid)
                             ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_wrdata)))
                             : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__wrbuf_data))) 
                   >> 0x20U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_bus_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_bus_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_bus_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_bus_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_bus_valid_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_error_bus_dff__DOT__din_new 
        = (1U & ((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset)) 
                 & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_error_bus_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_error_bus_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 1U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en) 
                                 >> 1U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_error_bus_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_error_bus_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 2U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en) 
                                 >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_error_bus_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_error_bus_dff__DOT__din_new 
        = (1U & ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_reset) 
                     >> 3U)) & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_error_bus_en) 
                                 >> 3U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_error_bus_dff__dout))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__0__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[1U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[0U])))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__0__KET____DOT__fifo_data_dff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__1__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[3U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[2U])))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__1__KET____DOT__fifo_data_dff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__2__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[5U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[4U])))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__2__KET____DOT__fifo_data_dff__dout);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__GenFifo__BRA__3__KET____DOT__fifo_data_dff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_en))
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[7U])) 
                << 0x20U) | (QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__fifo_data_in[6U])))
            : vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT____Vcellout__GenFifo__BRA__3__KET____DOT__fifo_data_dff__dout);
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__69(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__69\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset_reg__DOT__din_new 
        = ((~ ((((0x10U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x22U)))) 
                 & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                            >> 0x1eU))) & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
               & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))) 
           & (((((0x10U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                             >> 0x22U)))) 
                 & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                            >> 3U))) & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
               & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_havereset)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_wren 
        = ((((0x38U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))) 
             & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_abstractauto_reg__DOT____Vcellinp__dffs__din 
        = (3U & (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                    & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                   & (0x18U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                 >> 0x22U))))) 
                  & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                        >> 0xcU))) ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                              >> 2U))
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractauto_reg)));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_wren) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__dffs__din 
            = (1U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 0x16U)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__dffs__din 
            = ((0x10U & ((IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                  >> 0x15U)) << 4U)) 
               | ((8U & ((~ (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                     >> 0x14U))) << 3U)) 
                  | (7U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 0x11U)))));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sbreadonaddr_reg__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbreadonaddr_reg__dout));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_misc_reg__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_misc_reg__dout;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusyerror_reg__DOT____Vcellinp__dffs__din 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_wren) 
                   & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                              >> 0x18U))) | (((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
                                             & (((0x39U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))) 
                                                 | (0x3cU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                >> 0x22U))))) 
                                                | (0x3dU 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                               >> 0x22U)))))))
                  ? (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_wren) 
                        & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                   >> 0x18U)))) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusyerror_reg__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__70(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__70\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 0U;
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 2U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din = 2U;
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)
                            ? 3U : 4U);
                }
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din 
                    = (7U & ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                              ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)
                                  ? 3U : 4U) : ((~ (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0xeU))) 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                   >> 0xcU))));
            }
        }
    }
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__71(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__71\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0x3dU == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0x39U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren 
        = (((0x10U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U)))) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
           & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_wren 
        = (((0x17U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U)))) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)) 
           & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0 
        = (((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
            & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
           & (0x3cU == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                         >> 0x22U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_dmactive_ff__DOT____Vcellinp__dffs__din 
        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_wren)
                  ? (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                             >> 2U)) : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dmcontrol_dmactive_ff__dout)));
}

VL_INLINE_OPT void Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__72(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_multiclk__TOP__rvfpgasim__swervolf__72\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0 
        = (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
             & (5U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U))))) 
            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                 >> 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0 
        = (((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
              & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
             & (4U == (0x7fU & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                        >> 0x22U))))) 
            & (2U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                 >> 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_data1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))
            ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data1_reg_wren1))) 
                                       & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_cmd_next_addr))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data1_reg);
}

VL_INLINE_OPT void Vrvfpgasim_BD::_combo__TOP__rvfpgasim__swervolf__73(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_combo__TOP__rvfpgasim__swervolf__73\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail 
        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                  >> 1U) | (~ (IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_dm_rst_l 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) 
           & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__core_rst_l 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__Vcellinp__swervolf__rst_0) 
           & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                 >> 1U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[2U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[3U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[4U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[5U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[6U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[7U] 
        = ((0xf0000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[7U]) 
           | vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__0__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U]);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[7U] 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[7U]) 
           | (0xf0000000U & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U] 
                             << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[8U] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[0U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[9U] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[1U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xaU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[2U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xbU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[3U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xcU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[4U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xdU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[5U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xeU] 
        = ((0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[6U] 
                          >> 4U)) | (0xf0000000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                                      << 0x1cU)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xfU] 
        = (0xfffffffU & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_mst_port_mux__BRA__1__KET____DOT__i_axi_mux.__PVT__slv_resps_o[7U] 
                         >> 4U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
        = ((0xffffc0ffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_reg) 
           | ((0x3000U & ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail))) 
                          << 0xcU)) | ((0xc00U & ((- (IData)(
                                                             (1U 
                                                              & (~ 
                                                                 ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_unavail) 
                                                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_halted)))))) 
                                                  << 0xaU)) 
                                       | (0x300U & 
                                          ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_halted))) 
                                           << 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[2U] 
        = ((0xfff00000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[2U]) 
           | (0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[2U]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[2U] 
        = ((0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[2U]) 
           | (0xfff00000U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[8U] 
                              << 0x18U) | (0xf00000U 
                                           & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[7U] 
                                              >> 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[3U] 
        = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[8U] 
                        >> 8U)) | (0xfff00000U & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[9U] 
                                                   << 0x18U) 
                                                  | (0xf00000U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[8U] 
                                                        >> 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[4U] 
        = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[9U] 
                        >> 8U)) | (0xfff00000U & ((
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xaU] 
                                                   << 0x18U) 
                                                  | (0xf00000U 
                                                     & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[9U] 
                                                        >> 8U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[5U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[5U]) 
           | (0xffU & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xaU] 
                       >> 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[7U] 
        = ((0xfffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[7U]) 
           | (0xf0000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[2U] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[8U] 
        = ((0xfffffffU & ((0xfffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[3U] 
                                         << 8U)) | 
                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[2U] 
                           >> 0x18U))) | (0xf0000000U 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[3U] 
                                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[9U] 
        = ((0xfffffffU & ((0xfffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[4U] 
                                         << 8U)) | 
                          (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[3U] 
                           >> 0x18U))) | (0xf0000000U 
                                          & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[4U] 
                                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0xaU] 
        = ((0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0xaU]) 
           | (0xffffU & ((0xfffff00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[5U] 
                                        << 8U)) | (
                                                   vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[4U] 
                                                   >> 0x18U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0xaU] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0xaU]) 
           | (0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xaU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0xbU] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xbU]) 
           | (0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xbU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0xcU] 
        = ((0xffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xcU]) 
           | (0xffff0000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xcU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0xdU] 
        = ((0xfffffff0U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0xdU]) 
           | (0xfU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xdU]));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0xfU] 
        = ((0xffffffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0xfU]) 
           | (0xff000000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[5U] 
                             << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0x10U] 
        = ((0xffffffU & ((0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[6U] 
                                       << 0x10U)) | 
                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[5U] 
                          >> 0x10U))) | (0xff000000U 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[6U] 
                                            << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0x11U] 
        = ((0xffffffU & ((0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[7U] 
                                       << 0x10U)) | 
                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[6U] 
                          >> 0x10U))) | (0xff000000U 
                                         & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[7U] 
                                            << 0x10U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0x12U] 
        = ((0xfffff000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0x12U]) 
           | (0xfffU & ((0xff0000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[8U] 
                                      << 0x10U)) | 
                        (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[7U] 
                         >> 0x10U))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0x12U] 
        = ((0xfffU & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0x12U]) 
           | (0xfffff000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xdU] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0x13U] 
        = ((0xfffU & ((0xf00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                                 << 8U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xdU] 
                                            >> 0x18U))) 
           | (0xfffff000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__slv_resps[0x14U] 
        = ((0xfffU & ((0xf00U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xfU] 
                                 << 8U)) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xeU] 
                                            >> 0x18U))) 
           | (0xfffff000U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__mst_resps[0xfU] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmi_reg_rdata_din 
        = (((((((((((((- (IData)((4U == (0x7fU & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U)))))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg) 
                     | ((- (IData)((5U == (0x7fU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                        & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data1_reg)) 
                    | (0x2fffffffU & ((- (IData)((0x10U 
                                                  == 
                                                  (0x7fU 
                                                   & (IData)(
                                                             (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                              >> 0x22U)))))) 
                                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg))) 
                   | ((- (IData)((0x11U == (0x7fU & (IData)(
                                                            (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                             >> 0x22U)))))) 
                      & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_reg)) 
                  | ((- (IData)((0x16U == (0x7fU & (IData)(
                                                           (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                            >> 0x22U)))))) 
                     & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_reg)) 
                 | ((- (IData)((0x17U == (0x7fU & (IData)(
                                                          (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                           >> 0x22U)))))) 
                    & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg)) 
                | ((- (IData)((0x18U == (0x7fU & (IData)(
                                                         (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                          >> 0x22U)))))) 
                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractauto_reg))) 
               | ((- (IData)((0x40U == (0x7fU & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x22U)))))) 
                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__haltsum0_reg)) 
              | ((- (IData)((0x38U == (0x7fU & (IData)(
                                                       (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                        >> 0x22U)))))) 
                 & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg)) 
             | ((- (IData)((0x39U == (0x7fU & (IData)(
                                                      (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                       >> 0x22U)))))) 
                & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbaddress0_reg)) 
            | ((- (IData)((0x3cU == (0x7fU & (IData)(
                                                     (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                      >> 0x22U)))))) 
               & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata0_reg)) 
           | ((- (IData)((0x3dU == (0x7fU & (IData)(
                                                    (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                     >> 0x22U)))))) 
              & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata1_reg));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmi_rddata_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en)
            ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmi_reg_rdata_din
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_dmi_reg_rdata);
}

VL_INLINE_OPT void Vrvfpgasim_BD::_combo__TOP__rvfpgasim__swervolf__74(Vrvfpgasim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vrvfpgasim_BD::_combo__TOP__rvfpgasim__swervolf__74\n"); );
    Vrvfpgasim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[0U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U];
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[1U] 
        = vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U];
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
        = ((0xfff00000U & vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U]) 
           | vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__0__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U]);
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
        = ((0xfffffU & vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U]) 
           | (0xfff00000U & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                             << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U] 
        = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                      << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U] 
        = ((0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                        >> 0xcU)) | (0xfff00000U & 
                                     (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                      << 0x14U)));
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
        = ((0xffffff00U & vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U]) 
           | (0xfffffU & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__1__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                          >> 0xcU)));
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
        = ((0xffU & vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U]) 
           | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                             << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[0U] 
                     >> 0x18U)) | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                                                  << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
        = ((0xffU & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[1U] 
                     >> 0x18U)) | (0xffffff00U & (vlSymsp->TOP__rvfpgasim__swervolf__intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT__axi_xbar__DOT__gen_slv_port_demux__BRA__2__KET____DOT__i_axi_demux.__PVT__slv_resp_o[2U] 
                                                  << 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_ff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((0x10000000U & vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U])
            ? (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[4U])) 
                << 0x28U) | (((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[3U])) 
                              << 8U) | ((QData)((IData)(
                                                        vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U])) 
                                        >> 0x18U)))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__lsu_axi_rdata_q);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_nxtstate 
        = ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
            ? ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                ? 0U : ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                         ? 0U : ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                  ? 0U : 9U))) : ((4U 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 9U
                                                     : 8U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 8U
                                                     : 
                                                    ((1U 
                                                      & ((vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                                          >> 0x1bU) 
                                                         & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                                            >> 0x19U)))
                                                      ? 8U
                                                      : 
                                                     ((0x8000000U 
                                                       & vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])
                                                       ? 6U
                                                       : 5U))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 7U
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                                                         | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                            >> 0x13U)))
                                                      ? 9U
                                                      : 4U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                                                         | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                            >> 0x13U)))
                                                      ? 9U
                                                      : 3U)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0)
                                                      ? 2U
                                                      : 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_inc_cmd_beat_cnt 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
               >> 0x12U)) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__bus_clken 
        = (1U & ((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_awvalid) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_wvalid)) 
                    | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_arvalid)) 
                   | (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                      >> 0x18U)) | (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                    >> 0x10U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mcgc) 
                                                  >> 8U)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_sent 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__ifc_axi_ic_req_ff2) 
            & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[2U] 
               >> 0x12U)) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata 
        = ((((0xffULL & ((- (QData)((IData)((0U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                         & ((0x3fU >= (0x38U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                << 3U)))
                             ? ((((QData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                  << 0x34U) | (((QData)((IData)(
                                                                vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                                  >> 0xcU))) 
                                >> (0x38U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                             << 3U)))
                             : 0ULL))) | (0xffffULL 
                                          & ((- (QData)((IData)(
                                                                (1U 
                                                                 == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                             & ((0x3fU 
                                                 >= 
                                                 (0x30U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                     << 3U)))
                                                 ? 
                                                ((((QData)((IData)(
                                                                   vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                                   << 0x34U) 
                                                  | (((QData)((IData)(
                                                                      vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                                      << 0x14U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                                        >> 0xcU))) 
                                                 >> 
                                                 (0x30U 
                                                  & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                     << 3U)))
                                                 : 0ULL)))) 
            | (0xffffffffULL & ((- (QData)((IData)(
                                                   (2U 
                                                    == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                & ((0x3fU >= (0x20U 
                                              & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                                 << 3U)))
                                    ? ((((QData)((IData)(
                                                         vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                            << 0x14U) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                              >> 0xcU))) 
                                       >> (0x20U & 
                                           (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_addr 
                                            << 3U)))
                                    : 0ULL)))) | ((- (QData)((IData)(
                                                                     (3U 
                                                                      == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_size))))) 
                                                  & (((QData)((IData)(
                                                                      vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U])) 
                                                      << 0x34U) 
                                                     | (((QData)((IData)(
                                                                         vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U])) 
                                                         << 0x14U) 
                                                        | ((QData)((IData)(
                                                                           vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U])) 
                                                           >> 0xcU)))));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_lsu_axi_awvalid) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
              >> 7U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_lsu_axi_wvalid) 
           & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
              >> 5U));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren = 0U;
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en = 1U;
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren = 1U;
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                 >> 0x18U));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                              >> 0x13U));
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = (1U & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                 >> 0x10U));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                              >> 0xbU));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_wvalid) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                              >> 0x19U));
                }
            } else {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                    = ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))
                        ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_awvalid) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                              >> 0x1bU)) : (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_awvalid) 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                                >> 0x1bU)) 
                                            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_wvalid) 
                                               & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                                  >> 0x19U))));
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_arvalid) 
                           & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                              >> 0x1aU));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)) 
                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = (1U & (((~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_pending)) 
                                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned)) 
                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_unaligned) 
                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                    >> 0x13U)));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en 
                        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0) 
                             | ((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                  & (~ (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en))) 
                                 & (0x3cU == (0x7fU 
                                              & (IData)(
                                                        (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                         >> 0x22U))))) 
                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                   >> 0xfU))) | ((((IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_reg_en) 
                                                   & (IData)(vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_dmi_jtag_to_core_sync__DOT__c_wr_en)) 
                                                  & (0x39U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                                 >> 0x22U))))) 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                    >> 0x14U))) 
                           & (~ (IData)((0U != (7U 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_reg 
                                                   >> 0xcU))))));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren 
                        = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en;
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_wren) 
                           & (0U != (7U & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                                                   >> 0xeU)))));
                }
            }
        }
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en 
        = (((((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp) 
                & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_commit_dc5)) 
               | ((((2U == ((0x17U >= (0x1fU & ((IData)(3U) 
                                                * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))
                             ? (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_state 
                                      >> (0x1fU & ((IData)(3U) 
                                                   * (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))))
                             : 0U)) & (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0Dec))) 
                   & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_cmd_state_bus_en) 
                         >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
                  & ((((~ ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_dual) 
                             & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_samedw)) 
                            >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)) 
                           & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                 >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))))) 
                       | (0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1Dec))) 
                      | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge) 
                         >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))) 
                     | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en)))) 
              & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write)
                   ? (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
                       | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done))
                       ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done)
                           ? (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                              >> 5U) : (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                        >> 7U)) : (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                    >> 7U) 
                                                   & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                      >> 5U)))
                   : (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                      >> 6U)) | (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)))) 
             & (~ ((((((1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_wrcmd_any)) 
                       & (1U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any))) 
                      & (7U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer))) 
                     & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__mfdc 
                           >> 2U))) & (~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_nomerge) 
                                          >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))) 
                   & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_force_wr_en))))) 
            & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_sideeffect_pend))) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_addr_match_pending)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_resume_req = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2 = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en = 0U;
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en = 0U;
    if ((8U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
            vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_resume_req = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 0U;
                vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_resume_req = 0U;
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate = 0U;
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                  >> 0x11U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                               >> 1U)));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                            ? 0U : 2U);
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en = 1U;
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren = 1U;
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en = 1U;
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en = 1U;
                }
            }
        }
    } else {
        if ((4U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                  >> 0x10U) | (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                               >> 0x18U)));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                            ? 0U : 8U);
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error 
                        = (1U & (((vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                   >> 0x10U) & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                                >> 0xbU)) 
                                 | ((vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                     >> 0x18U) & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                                  >> 0x13U))));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2 
                        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                            & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                  >> 0x10U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_sb_bus_error)));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en 
                        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_awvalid) 
                            & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                               >> 0x1bU)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_arvalid) 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                                >> 0x1aU)));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en 
                        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_wvalid) 
                            & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                               >> 0x19U)) | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_sb_axi_arvalid) 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                                                >> 0x1aU)));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                            ? 0U : 7U);
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done) 
                            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en)) 
                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done) 
                              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en)));
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                            ? 0U : ((0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                  >> 8U)))
                                     ? 8U : 6U));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & (((~ ((((((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
                                          | (4U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                         | (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                        | (6U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                       | (7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout))) 
                                      | (8U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)))) 
                                  | (0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                  >> 8U)))) 
                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                    >> 1U)));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                            ? 0U : 8U);
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__core_dbg_cmd_done) 
                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                    >> 1U)));
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                            ? 0U : (((0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                   >> 8U))) 
                                     | ((0U == (0xffU 
                                                & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                   >> 0x18U))) 
                                        & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                              >> 0x11U))))
                                     ? 8U : 4U));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_cmd_valid) 
                                   | (0U != (7U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_reg 
                                                   >> 8U)))) 
                                  | ((0U == (0xffU 
                                             & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                >> 0x18U))) 
                                     & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                           >> 0x11U)))) 
                                 | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                    >> 1U)));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                   >> 9U) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                                >> 1U))))
                            ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__resumereq)
                                ? 9U : (((2U == (0xffU 
                                                 & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__command_reg 
                                                    >> 0x18U))) 
                                         & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abmem_addr_core_local)))
                                         ? 5U : 3U))
                            : ((0x80000000U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                                ? 1U : 0U));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & (((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                     >> 9U) & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__resumereq)) 
                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__execute_command)) 
                                  | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                     >> 1U)) | (~ (
                                                   (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                                    >> 9U) 
                                                   | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                           & ((3U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)) 
                              | (5U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate))));
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_resume_req 
                        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en) 
                           & (9U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)));
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout))) {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((2U & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg)
                            ? 0U : 2U);
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                  >> 9U) | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                            >> 1U)));
                } else {
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate 
                        = ((1U & ((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                   >> 9U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)))
                            ? 2U : 1U);
                    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en 
                        = (1U & (((((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                     >> 0x1fU) & (~ 
                                                  ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                                                   >> 3U))) 
                                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmstatus_reg 
                                      >> 9U)) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout)) 
                                 & (~ (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmcontrol_reg 
                                       >> 1U))));
                }
            }
        }
    }
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__bus_clken) {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__axi_bresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[7U] 
                     >> 0x12U));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__axi_rresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & ((vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[6U] 
                      << 0x16U) | (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                                   >> 0xaU)));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__axi_bresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_bresp_q));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__axi_rresp_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_axi_rresp_q));
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_new_rd_addr_count 
        = (7U & ((0U != (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__miss_state_ff__dout))
                  ? ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_cmd_sent)
                      ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count))
                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT__axi_rd_addr_count))
                  : (6U & (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__ifu__DOT__mem_ctl__DOT____Vcellout__imb_f2_ff__dout 
                           >> 2U))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_wren)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sbbusy_din)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_sbbusy_reg__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_nxtstate)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_error_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_din)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sbcs_error_reg__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1 
        = (((7U == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__sb_state_reg__dout)) 
            & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_state_en)) 
           & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbcs_sberror_wren)));
    if (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer_in = 0U;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_mergeff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge_en;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_in;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__WrPtr0_dc5)
                : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                      ? (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                         >> 0xdU) : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_write) 
                                     >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT____Vcellinp__dffs__din 
            = (1U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                      ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__is_sideeffects_dc5)
                      : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sideeffect) 
                         >> (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT____Vcellinp__dffs__din 
            = (3U & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                      ? ((2U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                >> 0xfU)) | (1U & (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_pkt_dc5 
                                                   >> 0x11U)))
                      : ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_sz) 
                         >> (0xfU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                     << 1U)))));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__ibuf_buf_byp)
                ? vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__lsu_addr_dc5
                : (((0U == (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                     << 5U))) ? 0U : 
                    (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                     ((IData)(1U) + (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                            << 5U))))) 
                   | (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_addr[
                      (7U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0))] 
                      >> (0x1fU & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__CmdPtr0) 
                                   << 5U)))));
    } else {
        vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer_in 
            = (7U & (((0U < (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__buf_numvld_cmd_any)) 
                      & (7U > (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)))
                      ? ((IData)(1U) + (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer))
                      : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_timer)));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag1;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_mergeff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_merge;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteenff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_byteen;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_dataff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0ff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_tag0;
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_writeff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_write));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffectff__DOT____Vcellinp__dffs__din 
            = (1U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sideeffect));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_szff__DOT____Vcellinp__dffs__din 
            = (3U & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_sz));
        vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addrff__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
            = vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_addr;
    }
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst 
        = (((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent)) 
             & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done) 
                | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent))) 
            | ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0_lsu_axi_arvalid) 
               & (vlSymsp->TOP__rvfpgasim__swervolf.intcon_wrapper_bd_0__DOT__axi_intercon3__DOT__axi_intercon2__DOT____Vcellout__axi_xbar__slv_ports_resp_o[5U] 
                  >> 6U))) & (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en)));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_state_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_nxtstate)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dbg_state_reg__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dmabstractcs_busy_reg__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_wren)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__abstractcs_busy_din)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT____Vcellout__dmabstractcs_busy_reg__dout));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_doneff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done_in)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_cmd_done));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_doneff__DOT____Vcellinp__dffs__din 
        = ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_en)
            ? (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done_in)
            : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_abmem_data_done));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_data0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0) 
             | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1)) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2))
            ? ((((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg_wren0))) 
                 & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                            >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg_wren1))) 
                                        & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_dbg_cmd_done)
                                            ? (((0xffU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                    & ((0x1fU 
                                                        >= 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                         << 3U))
                                                        ? 
                                                       (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                        >> 
                                                        ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                         << 3U))
                                                        : 0U))) 
                                                | (0xffffU 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                      & ((0x1fU 
                                                          >= 
                                                          (0x10U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                              << 3U)))
                                                          ? 
                                                         (vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata 
                                                          >> 
                                                          (0x10U 
                                                           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_addr) 
                                                              << 3U)))
                                                          : 0U)))) 
                                               | ((- (IData)(
                                                             (2U 
                                                              == (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_sz)))) 
                                                  & vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dma_ctrl__DOT__dma_dbg_mem_rddata))
                                            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__decode__DOT__i0_result_wb))) 
               | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg_wren2))) 
                  & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata)))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__data0_reg);
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT__dbg_run_state_ns 
        = (1U & ((((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__mpvhalt_ff__dout) 
                   >> 2U) | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg_resume_req)) 
                 & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__freeff__dout) 
                     >> 3U) & (~ (vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dec__DOT__tlu__DOT____Vcellout__halt_ff__dout 
                                  >> 1U)))));
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_sbdata0_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata)))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata0_reg);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__dbg_sbdata1_reg__DOT__genblock__DOT__dff__DOT____Vcellinp__dffs__din 
        = (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0) 
            | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))
            ? (((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata1_reg_wren0))) 
                & (IData)((vlSymsp->TOP__rvfpgasim.__PVT__dmi_wrapper__DOT__i_jtag_tap__DOT__dr 
                           >> 2U))) | ((- (IData)((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata0_reg_wren1))) 
                                       & (IData)((vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sb_bus_rdata 
                                                  >> 0x20U))))
            : vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__dbg__DOT__sbdata1_reg);
    vlSymsp->TOP__rvfpgasim__swervolf.swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid_ff__DOT__dffs__DOT____Vcellinp__dffs__din 
        = (1U & (((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
                  | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))
                  ? (~ (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))
                  : (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_valid)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done_in 
        = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_cmd_done) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wcmd_sent)));
    vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done_in 
        = ((~ ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_wr_en) 
               | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_rst))) 
           & ((IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__obuf_data_done) 
              | (IData)(vlSymsp->TOP__rvfpgasim__swervolf.__PVT__swerv_wrapper_verilog_0__DOT__swerv_eh1_2__DOT__swerv__DOT__lsu__DOT__bus_intf__DOT__bus_buffer__DOT__bus_wdata_sent)));
}
