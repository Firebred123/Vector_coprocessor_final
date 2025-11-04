// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_top_with_cache__Syms.h"


void Vsoc_top_with_cache___024root__traceInitSub0(Vsoc_top_with_cache___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsoc_top_with_cache___024root__traceInitTop(Vsoc_top_with_cache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsoc_top_with_cache___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vsoc_top_with_cache___024root__traceInitSub1(Vsoc_top_with_cache___024root* vlSelf, VerilatedVcd* tracep, int scopet, const char* scopep) VL_ATTR_COLD;
void Vsoc_top_with_cache___024root__traceInitSub2(Vsoc_top_with_cache___024root* vlSelf, VerilatedVcd* tracep, int scopet, const char* scopep) VL_ATTR_COLD;
void Vsoc_top_with_cache___024root__traceInitSub3(Vsoc_top_with_cache___024root* vlSelf, VerilatedVcd* tracep, int scopet, const char* scopep) VL_ATTR_COLD;

void Vsoc_top_with_cache___024root__traceInitSub0(Vsoc_top_with_cache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1656,"clk_i", false,-1);
        tracep->declBit(c+1657,"rst_ni", false,-1);
        tracep->declBit(c+1656,"soc_top_with_cache clk_i", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache rst_ni", false,-1);
        tracep->declBus(c+1675,"soc_top_with_cache MEM_SIZE", false,-1, 31,0);
        tracep->declBus(c+1676,"soc_top_with_cache MEM_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+3,"soc_top_with_cache instr_req", false,-1);
        tracep->declBit(c+667,"soc_top_with_cache instr_gnt", false,-1);
        tracep->declBit(c+668,"soc_top_with_cache instr_rvalid", false,-1);
        tracep->declBus(c+4,"soc_top_with_cache instr_addr", false,-1, 31,0);
        tracep->declBus(c+669,"soc_top_with_cache instr_rdata", false,-1, 31,0);
        tracep->declBit(c+5,"soc_top_with_cache data_req", false,-1);
        tracep->declBit(c+670,"soc_top_with_cache data_gnt", false,-1);
        tracep->declBit(c+671,"soc_top_with_cache data_rvalid", false,-1);
        tracep->declBit(c+6,"soc_top_with_cache data_we", false,-1);
        tracep->declBus(c+7,"soc_top_with_cache data_be", false,-1, 3,0);
        tracep->declBus(c+8,"soc_top_with_cache data_addr", false,-1, 31,0);
        tracep->declBus(c+9,"soc_top_with_cache data_wdata", false,-1, 31,0);
        tracep->declBus(c+672,"soc_top_with_cache data_rdata", false,-1, 31,0);
        tracep->declBit(c+673,"soc_top_with_cache vpu_mem_valid", false,-1);
        tracep->declBit(c+674,"soc_top_with_cache vpu_mem_ready", false,-1);
        tracep->declArray(c+862,"soc_top_with_cache vpu_mem_req", false,-1, 81,0);
        tracep->declBit(c+675,"soc_top_with_cache vpu_mem_result_valid", false,-1);
        tracep->declQuad(c+676,"soc_top_with_cache vpu_mem_result", false,-1, 37,0);
        tracep->declBus(c+678,"soc_top_with_cache cycle_count", false,-1, 31,0);
        tracep->declBus(c+679,"soc_top_with_cache instructions_executed", false,-1, 31,0);
        tracep->declBus(c+680,"soc_top_with_cache prev_pc", false,-1, 31,0);
        tracep->declBus(c+681,"soc_top_with_cache pc_stuck_counter", false,-1, 7,0);
        tracep->declBit(c+682,"soc_top_with_cache program_done", false,-1);
        tracep->declBus(c+1,"soc_top_with_cache unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+683,"soc_top_with_cache unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+684,"soc_top_with_cache unnamedblk3 i", false,-1, 31,0);
        tracep->declBus(c+685,"soc_top_with_cache unnamedblk4 i", false,-1, 31,0);
        tracep->declBus(c+1677,"soc_top_with_cache cpu LIB", false,-1, 31,0);
        tracep->declBit(c+1678,"soc_top_with_cache cpu RV32", false,-1);
        tracep->declBus(c+1679,"soc_top_with_cache cpu A_EXT", false,-1, 1,0);
        tracep->declBus(c+1680,"soc_top_with_cache cpu B_EXT", false,-1, 1,0);
        tracep->declBus(c+1681,"soc_top_with_cache cpu M_EXT", false,-1, 1,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu DEBUG", false,-1);
        tracep->declBus(c+1683,"soc_top_with_cache cpu DM_REGION_START", false,-1, 31,0);
        tracep->declBus(c+1684,"soc_top_with_cache cpu DM_REGION_END", false,-1, 31,0);
        tracep->declBus(c+1685,"soc_top_with_cache cpu DBG_NUM_TRIGGERS", false,-1, 31,0);
        tracep->declBus(c+1686,"soc_top_with_cache cpu PMA_NUM_REGIONS", false,-1, 31,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu PMA_CFG(-1)", false,-1, 67,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu PMA_CFG(0)", false,-1, 67,0);
        tracep->declBit(c+1690,"soc_top_with_cache cpu CLIC", false,-1);
        tracep->declBus(c+1691,"soc_top_with_cache cpu CLIC_ID_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu X_EXT", false,-1);
        tracep->declBus(c+1692,"soc_top_with_cache cpu X_NUM_RS", false,-1, 31,0);
        tracep->declBus(c+1693,"soc_top_with_cache cpu X_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu X_MEM_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu X_RFR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu X_RFW_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu X_MISA", false,-1, 31,0);
        tracep->declBus(c+1696,"soc_top_with_cache cpu X_ECS_XS", false,-1, 1,0);
        tracep->declBus(c+1697,"soc_top_with_cache cpu NUM_MHPMCOUNTERS", false,-1, 31,0);
        tracep->declBit(c+1656,"soc_top_with_cache cpu clk_i", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu rst_ni", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu scan_cg_en_i", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu boot_addr_i", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu dm_exception_addr_i", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu dm_halt_addr_i", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu mhartid_i", false,-1, 31,0);
        tracep->declBus(c+1699,"soc_top_with_cache cpu mimpid_patch_i", false,-1, 3,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu mtvec_addr_i", false,-1, 31,0);
        tracep->declBit(c+3,"soc_top_with_cache cpu instr_req_o", false,-1);
        tracep->declBit(c+667,"soc_top_with_cache cpu instr_gnt_i", false,-1);
        tracep->declBit(c+668,"soc_top_with_cache cpu instr_rvalid_i", false,-1);
        tracep->declBus(c+4,"soc_top_with_cache cpu instr_addr_o", false,-1, 31,0);
        tracep->declBus(c+10,"soc_top_with_cache cpu instr_memtype_o", false,-1, 1,0);
        tracep->declBus(c+11,"soc_top_with_cache cpu instr_prot_o", false,-1, 2,0);
        tracep->declBit(c+12,"soc_top_with_cache cpu instr_dbg_o", false,-1);
        tracep->declBus(c+669,"soc_top_with_cache cpu instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu instr_err_i", false,-1);
        tracep->declBit(c+5,"soc_top_with_cache cpu data_req_o", false,-1);
        tracep->declBit(c+670,"soc_top_with_cache cpu data_gnt_i", false,-1);
        tracep->declBit(c+671,"soc_top_with_cache cpu data_rvalid_i", false,-1);
        tracep->declBus(c+8,"soc_top_with_cache cpu data_addr_o", false,-1, 31,0);
        tracep->declBus(c+7,"soc_top_with_cache cpu data_be_o", false,-1, 3,0);
        tracep->declBit(c+6,"soc_top_with_cache cpu data_we_o", false,-1);
        tracep->declBus(c+9,"soc_top_with_cache cpu data_wdata_o", false,-1, 31,0);
        tracep->declBus(c+13,"soc_top_with_cache cpu data_memtype_o", false,-1, 1,0);
        tracep->declBus(c+14,"soc_top_with_cache cpu data_prot_o", false,-1, 2,0);
        tracep->declBit(c+15,"soc_top_with_cache cpu data_dbg_o", false,-1);
        tracep->declBus(c+16,"soc_top_with_cache cpu data_atop_o", false,-1, 5,0);
        tracep->declBus(c+672,"soc_top_with_cache cpu data_rdata_i", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu data_err_i", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu data_exokay_i", false,-1);
        tracep->declQuad(c+1017,"soc_top_with_cache cpu mcycle_o", false,-1, 63,0);
        tracep->declQuad(c+1701,"soc_top_with_cache cpu time_i", false,-1, 63,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu irq_i", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu wu_wfe_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu clic_irq_i", false,-1);
        tracep->declBus(c+1703,"soc_top_with_cache cpu clic_irq_id_i", false,-1, 4,0);
        tracep->declBus(c+1704,"soc_top_with_cache cpu clic_irq_level_i", false,-1, 7,0);
        tracep->declBus(c+1696,"soc_top_with_cache cpu clic_irq_priv_i", false,-1, 1,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu clic_irq_shv_i", false,-1);
        tracep->declBit(c+1019,"soc_top_with_cache cpu fencei_flush_req_o", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu fencei_flush_ack_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu debug_req_i", false,-1);
        tracep->declBit(c+537,"soc_top_with_cache cpu debug_havereset_o", false,-1);
        tracep->declBit(c+538,"soc_top_with_cache cpu debug_running_o", false,-1);
        tracep->declBit(c+539,"soc_top_with_cache cpu debug_halted_o", false,-1);
        tracep->declBit(c+540,"soc_top_with_cache cpu debug_pc_valid_o", false,-1);
        tracep->declBus(c+1020,"soc_top_with_cache cpu debug_pc_o", false,-1, 31,0);
        tracep->declBit(c+1700,"soc_top_with_cache cpu fetch_enable_i", false,-1);
        tracep->declBit(c+1658,"soc_top_with_cache cpu core_sleep_o", false,-1);
        tracep->declBus(c+1692,"soc_top_with_cache cpu REGFILE_NUM_READ_PORTS", false,-1, 31,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu ZC_EXT", false,-1);
        tracep->declBus(c+1705,"soc_top_with_cache cpu MTVT_LSB", false,-1, 31,0);
        tracep->declBus(c+1706,"soc_top_with_cache cpu MTVT_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu clk", false,-1);
        tracep->declBit(c+686,"soc_top_with_cache cpu fetch_enable", false,-1);
        tracep->declBus(c+1021,"soc_top_with_cache cpu pc_if", false,-1, 31,0);
        tracep->declBit(c+1022,"soc_top_with_cache cpu ptr_in_if", false,-1);
        tracep->declBus(c+18,"soc_top_with_cache cpu priv_lvl_if", false,-1, 1,0);
        tracep->declBus(c+19,"soc_top_with_cache cpu jump_target_id", false,-1, 31,0);
        tracep->declBus(c+1023,"soc_top_with_cache cpu branch_target_ex", false,-1, 31,0);
        tracep->declBit(c+1024,"soc_top_with_cache cpu branch_decision_ex", false,-1);
        tracep->declBit(c+541,"soc_top_with_cache cpu if_busy", false,-1);
        tracep->declBit(c+20,"soc_top_with_cache cpu lsu_busy", false,-1);
        tracep->declBit(c+1025,"soc_top_with_cache cpu lsu_bus_busy", false,-1);
        tracep->declBit(c+1026,"soc_top_with_cache cpu lsu_interruptible", false,-1);
        tracep->declArray(c+1027,"soc_top_with_cache cpu id_ex_pipe", false,-1, 352,0);
        tracep->declArray(c+1039,"soc_top_with_cache cpu ex_wb_pipe", false,-1, 247,0);
        tracep->declArray(c+1047,"soc_top_with_cache cpu if_id_pipe", false,-1, 190,0);
        tracep->declBus(c+542,"soc_top_with_cache cpu ctrl_byp", false,-1, 17,0);
        tracep->declArray(c+543,"soc_top_with_cache cpu ctrl_fsm", false,-1, 200,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu debug_req_gated", false,-1);
        tracep->declBit(c+550,"soc_top_with_cache cpu rf_we_wb", false,-1);
        tracep->declBus(c+1053,"soc_top_with_cache cpu rf_waddr_wb", false,-1, 4,0);
        tracep->declBus(c+21,"soc_top_with_cache cpu rf_wdata_wb", false,-1, 31,0);
        tracep->declBus(c+22,"soc_top_with_cache cpu rf_wdata_ex", false,-1, 31,0);
        tracep->declBit(c+23,"soc_top_with_cache cpu last_op_if", false,-1);
        tracep->declBit(c+24,"soc_top_with_cache cpu last_op_id", false,-1);
        tracep->declBit(c+25,"soc_top_with_cache cpu last_op_ex", false,-1);
        tracep->declBit(c+1054,"soc_top_with_cache cpu last_op_wb", false,-1);
        tracep->declBit(c+26,"soc_top_with_cache cpu abort_op_if", false,-1);
        tracep->declBit(c+27,"soc_top_with_cache cpu abort_op_id", false,-1);
        tracep->declBit(c+28,"soc_top_with_cache cpu abort_op_wb", false,-1);
        tracep->declBit(c+1055,"soc_top_with_cache cpu first_op_id", false,-1);
        tracep->declBus(c+29,"soc_top_with_cache cpu rf_re_id", false,-1, 1,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1056+i*1,"soc_top_with_cache cpu rf_raddr_id", true,(i+0), 4,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1058+i*1,"soc_top_with_cache cpu rf_rdata_id", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1060+i*1,"soc_top_with_cache cpu rf_waddr", true,(i+0), 4,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+30+i*1,"soc_top_with_cache cpu rf_wdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+31+i*1,"soc_top_with_cache cpu rf_we", true,(i+0));}}
        tracep->declBus(c+1061,"soc_top_with_cache cpu mtvec_addr", false,-1, 24,0);
        tracep->declBus(c+1062,"soc_top_with_cache cpu mtvec_mode", false,-1, 1,0);
        tracep->declBus(c+1063,"soc_top_with_cache cpu jvt_addr", false,-1, 25,0);
        tracep->declBus(c+1064,"soc_top_with_cache cpu jvt_mode", false,-1, 5,0);
        tracep->declBus(c+1707,"soc_top_with_cache cpu mtvt_addr", false,-1, 24,0);
        tracep->declBus(c+1704,"soc_top_with_cache cpu mintthresh_th", false,-1, 7,0);
        tracep->declBus(c+1708,"soc_top_with_cache cpu mintstatus", false,-1, 31,0);
        tracep->declBus(c+1065,"soc_top_with_cache cpu mcause", false,-1, 31,0);
        tracep->declBus(c+32,"soc_top_with_cache cpu csr_rdata", false,-1, 31,0);
        tracep->declBit(c+1066,"soc_top_with_cache cpu csr_counter_read", false,-1);
        tracep->declBit(c+1067,"soc_top_with_cache cpu csr_wr_in_wb_flush", false,-1);
        tracep->declBit(c+33,"soc_top_with_cache cpu csr_irq_enable_write", false,-1);
        tracep->declBus(c+1709,"soc_top_with_cache cpu priv_lvl_lsu", false,-1, 1,0);
        tracep->declBus(c+1710,"soc_top_with_cache cpu priv_lvl_if_ctrl", false,-1, 2,0);
        tracep->declBus(c+1711,"soc_top_with_cache cpu priv_lvl", false,-1, 1,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu csr_mnxti_read", false,-1);
        tracep->declBus(c+1068,"soc_top_with_cache cpu csr_hz", false,-1, 27,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu csr_clic_pa_valid", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu csr_clic_pa", false,-1, 31,0);
        tracep->declBit(c+34,"soc_top_with_cache cpu lsu_split_ex", false,-1);
        tracep->declBit(c+1069,"soc_top_with_cache cpu lsu_first_op_ex", false,-1);
        tracep->declBit(c+35,"soc_top_with_cache cpu lsu_last_op_ex", false,-1);
        tracep->declBus(c+1712,"soc_top_with_cache cpu lsu_atomic_ex", false,-1, 1,0);
        tracep->declBus(c+36,"soc_top_with_cache cpu lsu_mpu_status_wb", false,-1, 1,0);
        tracep->declBus(c+37,"soc_top_with_cache cpu lsu_wpt_match_wb", false,-1, 31,0);
        tracep->declBus(c+38,"soc_top_with_cache cpu lsu_align_status_wb", false,-1, 1,0);
        tracep->declBus(c+39,"soc_top_with_cache cpu lsu_rdata_wb", false,-1, 31,0);
        tracep->declBus(c+40,"soc_top_with_cache cpu lsu_err_wb", false,-1, 1,0);
        tracep->declBus(c+1712,"soc_top_with_cache cpu lsu_atomic_wb", false,-1, 1,0);
        tracep->declBit(c+551,"soc_top_with_cache cpu lsu_valid_0", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu lsu_ready_ex", false,-1);
        tracep->declBit(c+42,"soc_top_with_cache cpu lsu_valid_ex", false,-1);
        tracep->declBit(c+43,"soc_top_with_cache cpu lsu_ready_0", false,-1);
        tracep->declBit(c+44,"soc_top_with_cache cpu lsu_valid_1", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu lsu_ready_wb", false,-1);
        tracep->declBit(c+1070,"soc_top_with_cache cpu lsu_valid_wb", false,-1);
        tracep->declBit(c+552,"soc_top_with_cache cpu lsu_ready_1", false,-1);
        tracep->declBus(c+45,"soc_top_with_cache cpu lsu_addr_ex", false,-1, 31,0);
        tracep->declBit(c+46,"soc_top_with_cache cpu lsu_we_ex", false,-1);
        tracep->declBus(c+47,"soc_top_with_cache cpu lsu_be_ex", false,-1, 3,0);
        tracep->declBit(c+553,"soc_top_with_cache cpu data_stall_wb", false,-1);
        tracep->declBus(c+48,"soc_top_with_cache cpu wpt_match_wb", false,-1, 31,0);
        tracep->declBus(c+49,"soc_top_with_cache cpu mpu_status_wb", false,-1, 1,0);
        tracep->declBus(c+50,"soc_top_with_cache cpu align_status_wb", false,-1, 1,0);
        tracep->declBit(c+51,"soc_top_with_cache cpu id_ready", false,-1);
        tracep->declBit(c+52,"soc_top_with_cache cpu ex_ready", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu wb_ready", false,-1);
        tracep->declBit(c+53,"soc_top_with_cache cpu if_valid", false,-1);
        tracep->declBit(c+54,"soc_top_with_cache cpu id_valid", false,-1);
        tracep->declBit(c+55,"soc_top_with_cache cpu ex_valid", false,-1);
        tracep->declBit(c+56,"soc_top_with_cache cpu wb_valid", false,-1);
        tracep->declBus(c+1071,"soc_top_with_cache cpu mstatus", false,-1, 31,0);
        tracep->declBus(c+1072,"soc_top_with_cache cpu mepc", false,-1, 31,0);
        tracep->declBus(c+1073,"soc_top_with_cache cpu dpc", false,-1, 31,0);
        tracep->declBus(c+1074,"soc_top_with_cache cpu mie", false,-1, 31,0);
        tracep->declBus(c+1075,"soc_top_with_cache cpu mip", false,-1, 31,0);
        tracep->declBit(c+57,"soc_top_with_cache cpu csr_mtvec_init_if", false,-1);
        tracep->declBus(c+58,"soc_top_with_cache cpu dcsr", false,-1, 31,0);
        tracep->declBus(c+59,"soc_top_with_cache cpu trigger_match_if", false,-1, 31,0);
        tracep->declBus(c+60,"soc_top_with_cache cpu trigger_match_ex", false,-1, 31,0);
        tracep->declBit(c+554,"soc_top_with_cache cpu etrigger_wb", false,-1);
        tracep->declBit(c+61,"soc_top_with_cache cpu alu_jmp_id", false,-1);
        tracep->declBit(c+62,"soc_top_with_cache cpu alu_jmpr_id", false,-1);
        tracep->declBit(c+63,"soc_top_with_cache cpu alu_en_id", false,-1);
        tracep->declBit(c+64,"soc_top_with_cache cpu sys_en_id", false,-1);
        tracep->declBit(c+65,"soc_top_with_cache cpu sys_mret_insn_id", false,-1);
        tracep->declBit(c+66,"soc_top_with_cache cpu csr_en_raw_id", false,-1);
        tracep->declBit(c+67,"soc_top_with_cache cpu csr_illegal", false,-1);
        tracep->declBit(c+68,"soc_top_with_cache cpu xif_csr_error_ex", false,-1);
        tracep->declBit(c+1076,"soc_top_with_cache cpu irq_req_ctrl", false,-1);
        tracep->declBus(c+1077,"soc_top_with_cache cpu irq_id_ctrl", false,-1, 9,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu irq_wu_ctrl", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu irq_clic_shv", false,-1);
        tracep->declBus(c+1704,"soc_top_with_cache cpu irq_clic_level", false,-1, 7,0);
        tracep->declBus(c+1696,"soc_top_with_cache cpu irq_clic_priv", false,-1, 1,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu mnxti_irq_pending", false,-1);
        tracep->declBus(c+1703,"soc_top_with_cache cpu mnxti_irq_id", false,-1, 4,0);
        tracep->declBus(c+1704,"soc_top_with_cache cpu mnxti_irq_level", false,-1, 7,0);
        tracep->declBit(c+555,"soc_top_with_cache cpu irq_ack", false,-1);
        tracep->declBus(c+556,"soc_top_with_cache cpu irq_id", false,-1, 9,0);
        tracep->declBus(c+557,"soc_top_with_cache cpu irq_level", false,-1, 7,0);
        tracep->declBus(c+558,"soc_top_with_cache cpu irq_priv", false,-1, 1,0);
        tracep->declBit(c+559,"soc_top_with_cache cpu irq_shv", false,-1);
        tracep->declBit(c+560,"soc_top_with_cache cpu dbg_ack", false,-1);
        tracep->declBit(c+561,"soc_top_with_cache cpu xif_offloading_id", false,-1);
        tracep->declBit(c+562,"soc_top_with_cache cpu unused_signals", false,-1);
        tracep->declBus(c+1677,"soc_top_with_cache cpu sleep_unit_i LIB", false,-1, 31,0);
        tracep->declBit(c+1656,"soc_top_with_cache cpu sleep_unit_i clk_ungated_i", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu sleep_unit_i rst_n", false,-1);
        tracep->declBit(c+17,"soc_top_with_cache cpu sleep_unit_i clk_gated_o", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu sleep_unit_i scan_cg_en_i", false,-1);
        tracep->declBit(c+1658,"soc_top_with_cache cpu sleep_unit_i core_sleep_o", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu sleep_unit_i fetch_enable_i", false,-1);
        tracep->declBit(c+686,"soc_top_with_cache cpu sleep_unit_i fetch_enable_o", false,-1);
        tracep->declBit(c+541,"soc_top_with_cache cpu sleep_unit_i if_busy_i", false,-1);
        tracep->declBit(c+20,"soc_top_with_cache cpu sleep_unit_i lsu_busy_i", false,-1);
        tracep->declArray(c+543,"soc_top_with_cache cpu sleep_unit_i ctrl_fsm_i", false,-1, 200,0);
        tracep->declBit(c+686,"soc_top_with_cache cpu sleep_unit_i fetch_enable_q", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu sleep_unit_i fetch_enable_d", false,-1);
        tracep->declBit(c+687,"soc_top_with_cache cpu sleep_unit_i core_busy_q", false,-1);
        tracep->declBit(c+563,"soc_top_with_cache cpu sleep_unit_i core_busy_d", false,-1);
        tracep->declBit(c+1659,"soc_top_with_cache cpu sleep_unit_i clock_en", false,-1);
        tracep->declBus(c+1677,"soc_top_with_cache cpu sleep_unit_i core_clock_gate_i LIB", false,-1, 31,0);
        tracep->declBit(c+1656,"soc_top_with_cache cpu sleep_unit_i core_clock_gate_i clk_i", false,-1);
        tracep->declBit(c+1659,"soc_top_with_cache cpu sleep_unit_i core_clock_gate_i en_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu sleep_unit_i core_clock_gate_i scan_cg_en_i", false,-1);
        tracep->declBit(c+17,"soc_top_with_cache cpu sleep_unit_i core_clock_gate_i clk_o", false,-1);
        tracep->declBit(c+69,"soc_top_with_cache cpu sleep_unit_i core_clock_gate_i clk_en", false,-1);
        tracep->declBit(c+1713,"soc_top_with_cache cpu if_stage_i RV32", false,-1);
        tracep->declBus(c+1714,"soc_top_with_cache cpu if_stage_i A_EXT", false,-1, 1,0);
        tracep->declBus(c+1715,"soc_top_with_cache cpu if_stage_i B_EXT", false,-1, 1,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu if_stage_i X_EXT", false,-1);
        tracep->declBus(c+1693,"soc_top_with_cache cpu if_stage_i X_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1686,"soc_top_with_cache cpu if_stage_i PMA_NUM_REGIONS", false,-1, 31,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu if_stage_i PMA_CFG(-1)", false,-1, 67,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu if_stage_i PMA_CFG(0)", false,-1, 67,0);
        tracep->declBus(c+1706,"soc_top_with_cache cpu if_stage_i MTVT_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1690,"soc_top_with_cache cpu if_stage_i CLIC", false,-1);
        tracep->declBus(c+1691,"soc_top_with_cache cpu if_stage_i CLIC_ID_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu if_stage_i ZC_EXT", false,-1);
        tracep->declBus(c+1716,"soc_top_with_cache cpu if_stage_i M_EXT", false,-1, 1,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu if_stage_i DEBUG", false,-1);
        tracep->declBus(c+1683,"soc_top_with_cache cpu if_stage_i DM_REGION_START", false,-1, 31,0);
        tracep->declBus(c+1684,"soc_top_with_cache cpu if_stage_i DM_REGION_END", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu if_stage_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu if_stage_i rst_n", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu if_stage_i boot_addr_i", false,-1, 31,0);
        tracep->declBus(c+1023,"soc_top_with_cache cpu if_stage_i branch_target_ex_i", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu if_stage_i dm_exception_addr_i", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu if_stage_i dm_halt_addr_i", false,-1, 31,0);
        tracep->declBus(c+1073,"soc_top_with_cache cpu if_stage_i dpc_i", false,-1, 31,0);
        tracep->declBus(c+19,"soc_top_with_cache cpu if_stage_i jump_target_id_i", false,-1, 31,0);
        tracep->declBus(c+1072,"soc_top_with_cache cpu if_stage_i mepc_i", false,-1, 31,0);
        tracep->declBus(c+1061,"soc_top_with_cache cpu if_stage_i mtvec_addr_i", false,-1, 24,0);
        tracep->declBus(c+1064,"soc_top_with_cache cpu if_stage_i jvt_mode_i", false,-1, 5,0);
        tracep->declBus(c+1707,"soc_top_with_cache cpu if_stage_i mtvt_addr_i", false,-1, 24,0);
        tracep->declArray(c+543,"soc_top_with_cache cpu if_stage_i ctrl_fsm_i", false,-1, 200,0);
        tracep->declBus(c+59,"soc_top_with_cache cpu if_stage_i trigger_match_i", false,-1, 31,0);
        tracep->declArray(c+1047,"soc_top_with_cache cpu if_stage_i if_id_pipe_o", false,-1, 190,0);
        tracep->declBus(c+1021,"soc_top_with_cache cpu if_stage_i pc_if_o", false,-1, 31,0);
        tracep->declBit(c+57,"soc_top_with_cache cpu if_stage_i csr_mtvec_init_o", false,-1);
        tracep->declBit(c+541,"soc_top_with_cache cpu if_stage_i if_busy_o", false,-1);
        tracep->declBit(c+1022,"soc_top_with_cache cpu if_stage_i ptr_in_if_o", false,-1);
        tracep->declBus(c+18,"soc_top_with_cache cpu if_stage_i priv_lvl_if_o", false,-1, 1,0);
        tracep->declBit(c+23,"soc_top_with_cache cpu if_stage_i last_op_o", false,-1);
        tracep->declBit(c+26,"soc_top_with_cache cpu if_stage_i abort_op_o", false,-1);
        tracep->declBit(c+53,"soc_top_with_cache cpu if_stage_i if_valid_o", false,-1);
        tracep->declBit(c+51,"soc_top_with_cache cpu if_stage_i id_ready_i", false,-1);
        tracep->declBus(c+1710,"soc_top_with_cache cpu if_stage_i priv_lvl_ctrl_i", false,-1, 2,0);
        tracep->declBit(c+561,"soc_top_with_cache cpu if_stage_i xif_offloading_id_i", false,-1);
        tracep->declBus(c+1717,"soc_top_with_cache cpu if_stage_i ALBUF_DEPTH", false,-1, 31,0);
        tracep->declBus(c+1692,"soc_top_with_cache cpu if_stage_i ALBUF_CNT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1691,"soc_top_with_cache cpu if_stage_i CLIC_MUX_WIDTH", false,-1, 31,0);
        tracep->declBit(c+70,"soc_top_with_cache cpu if_stage_i if_ready", false,-1);
        tracep->declBit(c+541,"soc_top_with_cache cpu if_stage_i prefetch_busy", false,-1);
        tracep->declBus(c+71,"soc_top_with_cache cpu if_stage_i branch_addr_n", false,-1, 31,0);
        tracep->declBit(c+72,"soc_top_with_cache cpu if_stage_i prefetch_valid", false,-1);
        tracep->declBit(c+70,"soc_top_with_cache cpu if_stage_i prefetch_ready", false,-1);
        tracep->declQuad(c+73,"soc_top_with_cache cpu if_stage_i prefetch_instr", false,-1, 34,0);
        tracep->declBus(c+18,"soc_top_with_cache cpu if_stage_i prefetch_priv_lvl", false,-1, 1,0);
        tracep->declBit(c+1078,"soc_top_with_cache cpu if_stage_i prefetch_is_clic_ptr", false,-1);
        tracep->declBit(c+1079,"soc_top_with_cache cpu if_stage_i prefetch_is_mret_ptr", false,-1);
        tracep->declBit(c+1080,"soc_top_with_cache cpu if_stage_i prefetch_is_tbljmp_ptr", false,-1);
        tracep->declBit(c+75,"soc_top_with_cache cpu if_stage_i illegal_c_insn", false,-1);
        tracep->declQuad(c+76,"soc_top_with_cache cpu if_stage_i instr_decompressed", false,-1, 34,0);
        tracep->declBit(c+78,"soc_top_with_cache cpu if_stage_i instr_compressed", false,-1);
        tracep->declBit(c+79,"soc_top_with_cache cpu if_stage_i prefetch_resp_valid", false,-1);
        tracep->declBit(c+80,"soc_top_with_cache cpu if_stage_i prefetch_trans_valid", false,-1);
        tracep->declBit(c+81,"soc_top_with_cache cpu if_stage_i prefetch_trans_ready", false,-1);
        tracep->declBus(c+82,"soc_top_with_cache cpu if_stage_i prefetch_trans_addr", false,-1, 31,0);
        tracep->declQuad(c+1660,"soc_top_with_cache cpu if_stage_i prefetch_inst_resp", false,-1, 34,0);
        tracep->declBit(c+83,"soc_top_with_cache cpu if_stage_i prefetch_one_txn_pend_n", false,-1);
        tracep->declBus(c+1081,"soc_top_with_cache cpu if_stage_i prefetch_outstnd_cnt_q", false,-1, 1,0);
        tracep->declBit(c+668,"soc_top_with_cache cpu if_stage_i bus_resp_valid", false,-1);
        tracep->declQuad(c+688,"soc_top_with_cache cpu if_stage_i bus_resp", false,-1, 32,0);
        tracep->declBit(c+84,"soc_top_with_cache cpu if_stage_i bus_trans_valid", false,-1);
        tracep->declBit(c+1082,"soc_top_with_cache cpu if_stage_i bus_trans_ready", false,-1);
        tracep->declQuad(c+85,"soc_top_with_cache cpu if_stage_i bus_trans", false,-1, 37,0);
        tracep->declQuad(c+87,"soc_top_with_cache cpu if_stage_i core_trans", false,-1, 37,0);
        tracep->declBit(c+53,"soc_top_with_cache cpu if_stage_i instr_valid", false,-1);
        tracep->declBus(c+564,"soc_top_with_cache cpu if_stage_i xif_id", false,-1, 3,0);
        tracep->declBit(c+51,"soc_top_with_cache cpu if_stage_i predec_ready", false,-1);
        tracep->declBit(c+89,"soc_top_with_cache cpu if_stage_i seq_valid", false,-1);
        tracep->declBit(c+565,"soc_top_with_cache cpu if_stage_i seq_ready", false,-1);
        tracep->declBit(c+72,"soc_top_with_cache cpu if_stage_i seq_instr_valid", false,-1);
        tracep->declBit(c+1083,"soc_top_with_cache cpu if_stage_i seq_first", false,-1);
        tracep->declBit(c+90,"soc_top_with_cache cpu if_stage_i seq_last", false,-1);
        tracep->declQuad(c+91,"soc_top_with_cache cpu if_stage_i seq_instr", false,-1, 34,0);
        tracep->declBit(c+93,"soc_top_with_cache cpu if_stage_i seq_tbljmp", false,-1);
        tracep->declBit(c+94,"soc_top_with_cache cpu if_stage_i seq_pushpop", false,-1);
        tracep->declBit(c+566,"soc_top_with_cache cpu if_stage_i first_op", false,-1);
        tracep->declBit(c+1084,"soc_top_with_cache cpu if_stage_i unused_signals", false,-1);
        tracep->declBus(c+1085,"soc_top_with_cache cpu if_stage_i instr_meta_n", false,-1, 4,0);
        tracep->declBit(c+1690,"soc_top_with_cache cpu if_stage_i prefetch_unit_i CLIC", false,-1);
        tracep->declBus(c+1717,"soc_top_with_cache cpu if_stage_i prefetch_unit_i ALBUF_DEPTH", false,-1, 31,0);
        tracep->declBus(c+1692,"soc_top_with_cache cpu if_stage_i prefetch_unit_i ALBUF_CNT_WIDTH", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu if_stage_i prefetch_unit_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu if_stage_i prefetch_unit_i rst_n", false,-1);
        tracep->declArray(c+543,"soc_top_with_cache cpu if_stage_i prefetch_unit_i ctrl_fsm_i", false,-1, 200,0);
        tracep->declBus(c+1710,"soc_top_with_cache cpu if_stage_i prefetch_unit_i priv_lvl_ctrl_i", false,-1, 2,0);
        tracep->declBus(c+95,"soc_top_with_cache cpu if_stage_i prefetch_unit_i branch_addr_i", false,-1, 31,0);
        tracep->declBit(c+70,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetch_ready_i", false,-1);
        tracep->declBit(c+72,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetch_valid_o", false,-1);
        tracep->declQuad(c+73,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetch_instr_o", false,-1, 34,0);
        tracep->declBus(c+1021,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetch_addr_o", false,-1, 31,0);
        tracep->declBus(c+18,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetch_priv_lvl_o", false,-1, 1,0);
        tracep->declBit(c+1078,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetch_is_clic_ptr_o", false,-1);
        tracep->declBit(c+1079,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetch_is_mret_ptr_o", false,-1);
        tracep->declBit(c+1080,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetch_is_tbljmp_ptr_o", false,-1);
        tracep->declBit(c+80,"soc_top_with_cache cpu if_stage_i prefetch_unit_i trans_valid_o", false,-1);
        tracep->declBit(c+81,"soc_top_with_cache cpu if_stage_i prefetch_unit_i trans_ready_i", false,-1);
        tracep->declBus(c+82,"soc_top_with_cache cpu if_stage_i prefetch_unit_i trans_addr_o", false,-1, 31,0);
        tracep->declBit(c+79,"soc_top_with_cache cpu if_stage_i prefetch_unit_i resp_valid_i", false,-1);
        tracep->declQuad(c+1660,"soc_top_with_cache cpu if_stage_i prefetch_unit_i resp_i", false,-1, 34,0);
        tracep->declBit(c+83,"soc_top_with_cache cpu if_stage_i prefetch_unit_i one_txn_pend_n", false,-1);
        tracep->declBus(c+1081,"soc_top_with_cache cpu if_stage_i prefetch_unit_i outstnd_cnt_q_o", false,-1, 1,0);
        tracep->declBit(c+541,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetch_busy_o", false,-1);
        tracep->declBit(c+80,"soc_top_with_cache cpu if_stage_i prefetch_unit_i fetch_valid", false,-1);
        tracep->declBit(c+96,"soc_top_with_cache cpu if_stage_i prefetch_unit_i fetch_ready", false,-1);
        tracep->declBit(c+567,"soc_top_with_cache cpu if_stage_i prefetch_unit_i fetch_branch", false,-1);
        tracep->declBus(c+95,"soc_top_with_cache cpu if_stage_i prefetch_unit_i fetch_branch_addr", false,-1, 31,0);
        tracep->declBit(c+97,"soc_top_with_cache cpu if_stage_i prefetch_unit_i fetch_ptr_access", false,-1);
        tracep->declBit(c+98,"soc_top_with_cache cpu if_stage_i prefetch_unit_i fetch_ptr_resp", false,-1);
        tracep->declBus(c+1086,"soc_top_with_cache cpu if_stage_i prefetch_unit_i fetch_priv_lvl_access", false,-1, 1,0);
        tracep->declBus(c+18,"soc_top_with_cache cpu if_stage_i prefetch_unit_i fetch_priv_lvl_resp", false,-1, 1,0);
        tracep->declBit(c+1690,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i CLIC", false,-1);
        tracep->declBit(c+17,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i rst_n", false,-1);
        tracep->declBit(c+567,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i fetch_branch_i", false,-1);
        tracep->declBus(c+95,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i fetch_branch_addr_i", false,-1, 31,0);
        tracep->declBit(c+80,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i fetch_valid_i", false,-1);
        tracep->declBit(c+96,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i fetch_ready_o", false,-1);
        tracep->declBit(c+97,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i fetch_ptr_access_i", false,-1);
        tracep->declBit(c+98,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i fetch_ptr_access_o", false,-1);
        tracep->declBus(c+1086,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i fetch_priv_lvl_access_i", false,-1, 1,0);
        tracep->declBus(c+18,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i fetch_priv_lvl_access_o", false,-1, 1,0);
        tracep->declBit(c+80,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i trans_valid_o", false,-1);
        tracep->declBit(c+81,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i trans_ready_i", false,-1);
        tracep->declBus(c+82,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i trans_addr_o", false,-1, 31,0);
        tracep->declBit(c+1087,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i state_q", false,-1);
        tracep->declBit(c+99,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i next_state", false,-1);
        tracep->declBus(c+1088,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i trans_addr_q", false,-1, 31,0);
        tracep->declBus(c+1089,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i trans_addr_incr", false,-1, 31,0);
        tracep->declBit(c+1090,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i trans_ptr_access_q", false,-1);
        tracep->declBus(c+1091,"soc_top_with_cache cpu if_stage_i prefetch_unit_i prefetcher_i trans_priv_lvl_q", false,-1, 1,0);
        tracep->declBus(c+1717,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i ALBUF_DEPTH", false,-1, 31,0);
        tracep->declBus(c+1692,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i ALBUF_CNT_WIDTH", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i rst_n", false,-1);
        tracep->declArray(c+543,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i ctrl_fsm_i", false,-1, 200,0);
        tracep->declBus(c+1710,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i priv_lvl_ctrl_i", false,-1, 2,0);
        tracep->declBus(c+95,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i branch_addr_i", false,-1, 31,0);
        tracep->declBit(c+541,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i prefetch_busy_o", false,-1);
        tracep->declBit(c+83,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i one_txn_pend_n", false,-1);
        tracep->declBit(c+80,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i fetch_valid_o", false,-1);
        tracep->declBit(c+96,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i fetch_ready_i", false,-1);
        tracep->declBit(c+567,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i fetch_branch_o", false,-1);
        tracep->declBus(c+95,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i fetch_branch_addr_o", false,-1, 31,0);
        tracep->declBit(c+97,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i fetch_ptr_access_o", false,-1);
        tracep->declBit(c+98,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i fetch_ptr_access_i", false,-1);
        tracep->declBus(c+1086,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i fetch_priv_lvl_o", false,-1, 1,0);
        tracep->declBus(c+18,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i fetch_priv_lvl_i", false,-1, 1,0);
        tracep->declBit(c+79,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i resp_valid_i", false,-1);
        tracep->declQuad(c+1660,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i resp_i", false,-1, 34,0);
        tracep->declBit(c+72,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i instr_valid_o", false,-1);
        tracep->declBit(c+70,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i instr_ready_i", false,-1);
        tracep->declQuad(c+73,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i instr_instr_o", false,-1, 34,0);
        tracep->declBus(c+1021,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i instr_addr_o", false,-1, 31,0);
        tracep->declBus(c+18,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i instr_priv_lvl_o", false,-1, 1,0);
        tracep->declBit(c+1078,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i instr_is_clic_ptr_o", false,-1);
        tracep->declBit(c+1079,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i instr_is_mret_ptr_o", false,-1);
        tracep->declBit(c+1080,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i instr_is_tbljmp_ptr_o", false,-1);
        tracep->declBus(c+1081,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i outstnd_cnt_q_o", false,-1, 1,0);
        tracep->declBus(c+568,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i instr_cnt_n", false,-1, 2,0);
        tracep->declBus(c+1092,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i instr_cnt_q", false,-1, 2,0);
        tracep->declBus(c+100,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i outstanding_cnt_n", false,-1, 1,0);
        tracep->declBus(c+1081,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i outstanding_cnt_q", false,-1, 1,0);
        tracep->declBit(c+101,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i outstanding_count_up", false,-1);
        tracep->declBit(c+79,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i outstanding_count_down", false,-1);
        tracep->declBus(c+102,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i n_incoming_ins", false,-1, 1,0);
        tracep->declBit(c+1093,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i pop_q", false,-1);
        tracep->declBus(c+102,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i n_pushed_ins", false,-1, 1,0);
        tracep->declBit(c+103,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i aligned_n", false,-1);
        tracep->declBit(c+1094,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i aligned_q", false,-1);
        tracep->declBit(c+104,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i complete_n", false,-1);
        tracep->declBit(c+1095,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i complete_q", false,-1);
        tracep->declBus(c+105,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i n_flush_n", false,-1, 1,0);
        tracep->declBus(c+1096,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i n_flush_q", false,-1, 1,0);
        tracep->declBus(c+106,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i n_flush_branch", false,-1, 1,0);
        tracep->declBit(c+107,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i bus_err_unaligned", false,-1);
        tracep->declBit(c+1662,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i bus_err", false,-1);
        tracep->declBus(c+108,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i mpu_status_unaligned", false,-1, 1,0);
        tracep->declBus(c+1663,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i mpu_status", false,-1, 1,0);
        tracep->declBit(c+109,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i resp_valid_gated", false,-1);
        tracep->declBus(c+1097,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i instr_priv_lvl_q", false,-1, 1,0);
        tracep->declBit(c+1078,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i is_clic_ptr_q", false,-1);
        tracep->declBit(c+1079,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i is_mret_ptr_q", false,-1);
        tracep->declBit(c+1080,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i is_tbljmp_ptr_q", false,-1);
        tracep->declBit(c+1098,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i ptr_fetch_accepted_q", false,-1);
        tracep->declArray(c+1099,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i resp_q", false,-1, 104,0);
        tracep->declBus(c+110,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i valid_n", false,-1, 2,0);
        tracep->declBus(c+111,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i valid_int", false,-1, 2,0);
        tracep->declBus(c+1103,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i valid_q", false,-1, 2,0);
        tracep->declQuad(c+112,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i resp_n", false,-1, 34,0);
        tracep->declBus(c+1104,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i rptr", false,-1, 1,0);
        tracep->declBus(c+114,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i rptr_n", false,-1, 1,0);
        tracep->declBus(c+1105,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i rptr2", false,-1, 1,0);
        tracep->declBus(c+1106,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i wptr", false,-1, 1,0);
        tracep->declBus(c+115,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i wptr_n", false,-1, 1,0);
        tracep->declBus(c+116,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i addr_n", false,-1, 31,0);
        tracep->declBus(c+1021,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i addr_q", false,-1, 31,0);
        tracep->declBus(c+1107,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i addr_incr", false,-1, 31,0);
        tracep->declBus(c+117,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i instr", false,-1, 31,0);
        tracep->declBus(c+1664,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i instr_unaligned", false,-1, 31,0);
        tracep->declBit(c+118,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i valid", false,-1);
        tracep->declBit(c+569,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i valid_unaligned_uncompressed", false,-1);
        tracep->declBit(c+119,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i aligned_is_compressed", false,-1);
        tracep->declBit(c+120,"soc_top_with_cache cpu if_stage_i prefetch_unit_i alignment_buffer_i unaligned_is_compressed", false,-1);
        tracep->declBit(c+1682,"soc_top_with_cache cpu if_stage_i mpu_i IF_STAGE", false,-1);
        tracep->declBus(c+1718,"soc_top_with_cache cpu if_stage_i mpu_i A_EXT", false,-1, 1,0);
        tracep->declBus(c+1686,"soc_top_with_cache cpu if_stage_i mpu_i PMA_NUM_REGIONS", false,-1, 31,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu if_stage_i mpu_i PMA_CFG(-1)", false,-1, 67,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu if_stage_i mpu_i PMA_CFG(0)", false,-1, 67,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu if_stage_i mpu_i DEBUG", false,-1);
        tracep->declBus(c+1683,"soc_top_with_cache cpu if_stage_i mpu_i DM_REGION_START", false,-1, 31,0);
        tracep->declBus(c+1684,"soc_top_with_cache cpu if_stage_i mpu_i DM_REGION_END", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu if_stage_i mpu_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu if_stage_i mpu_i rst_n", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu if_stage_i mpu_i atomic_access_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu if_stage_i mpu_i misaligned_access_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu if_stage_i mpu_i modified_access_i", false,-1);
        tracep->declBit(c+1082,"soc_top_with_cache cpu if_stage_i mpu_i bus_trans_ready_i", false,-1);
        tracep->declBit(c+84,"soc_top_with_cache cpu if_stage_i mpu_i bus_trans_valid_o", false,-1);
        tracep->declQuad(c+85,"soc_top_with_cache cpu if_stage_i mpu_i bus_trans_o", false,-1, 37,0);
        tracep->declBit(c+668,"soc_top_with_cache cpu if_stage_i mpu_i bus_resp_valid_i", false,-1);
        tracep->declQuad(c+688,"soc_top_with_cache cpu if_stage_i mpu_i bus_resp_i", false,-1, 32,0);
        tracep->declBit(c+80,"soc_top_with_cache cpu if_stage_i mpu_i core_trans_valid_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu if_stage_i mpu_i core_trans_pushpop_i", false,-1);
        tracep->declBit(c+81,"soc_top_with_cache cpu if_stage_i mpu_i core_trans_ready_o", false,-1);
        tracep->declQuad(c+87,"soc_top_with_cache cpu if_stage_i mpu_i core_trans_i", false,-1, 37,0);
        tracep->declBit(c+79,"soc_top_with_cache cpu if_stage_i mpu_i core_resp_valid_o", false,-1);
        tracep->declQuad(c+1660,"soc_top_with_cache cpu if_stage_i mpu_i core_resp_o", false,-1, 34,0);
        tracep->declBit(c+83,"soc_top_with_cache cpu if_stage_i mpu_i core_one_txn_pend_n", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu if_stage_i mpu_i core_mpu_err_wait_i", false,-1);
        tracep->declBit(c+121,"soc_top_with_cache cpu if_stage_i mpu_i core_mpu_err_o", false,-1);
        tracep->declBit(c+121,"soc_top_with_cache cpu if_stage_i mpu_i pma_err", false,-1);
        tracep->declBit(c+121,"soc_top_with_cache cpu if_stage_i mpu_i mpu_err", false,-1);
        tracep->declBit(c+122,"soc_top_with_cache cpu if_stage_i mpu_i mpu_block_core", false,-1);
        tracep->declBit(c+123,"soc_top_with_cache cpu if_stage_i mpu_i mpu_block_bus", false,-1);
        tracep->declBit(c+124,"soc_top_with_cache cpu if_stage_i mpu_i mpu_err_trans_valid", false,-1);
        tracep->declBit(c+125,"soc_top_with_cache cpu if_stage_i mpu_i mpu_err_trans_ready", false,-1);
        tracep->declBus(c+126,"soc_top_with_cache cpu if_stage_i mpu_i mpu_status", false,-1, 1,0);
        tracep->declBus(c+1108,"soc_top_with_cache cpu if_stage_i mpu_i state_q", false,-1, 2,0);
        tracep->declBus(c+127,"soc_top_with_cache cpu if_stage_i mpu_i state_n", false,-1, 2,0);
        tracep->declBit(c+128,"soc_top_with_cache cpu if_stage_i mpu_i bus_trans_cacheable", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu if_stage_i mpu_i bus_trans_bufferable", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu if_stage_i mpu_i core_trans_we", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu if_stage_i mpu_i instr_fetch_access", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu if_stage_i mpu_i load_access", false,-1);
        tracep->declBit(c+129,"soc_top_with_cache cpu if_stage_i mpu_i core_trans_debug_region", false,-1);
        tracep->declBus(c+1719,"soc_top_with_cache cpu if_stage_i mpu_i pma_i A_EXT", false,-1, 1,0);
        tracep->declBus(c+1686,"soc_top_with_cache cpu if_stage_i mpu_i pma_i PMA_NUM_REGIONS", false,-1, 31,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu if_stage_i mpu_i pma_i PMA_CFG(-1)", false,-1, 67,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu if_stage_i mpu_i pma_i PMA_CFG(0)", false,-1, 67,0);
        tracep->declBus(c+130,"soc_top_with_cache cpu if_stage_i mpu_i pma_i trans_addr_i", false,-1, 31,0);
        tracep->declBit(c+129,"soc_top_with_cache cpu if_stage_i mpu_i pma_i trans_debug_region_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu if_stage_i mpu_i pma_i trans_pushpop_i", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu if_stage_i mpu_i pma_i instr_fetch_access_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu if_stage_i mpu_i pma_i atomic_access_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu if_stage_i mpu_i pma_i misaligned_access_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu if_stage_i mpu_i pma_i modified_access_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu if_stage_i mpu_i pma_i load_access_i", false,-1);
        tracep->declBit(c+121,"soc_top_with_cache cpu if_stage_i mpu_i pma_i pma_err_o", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu if_stage_i mpu_i pma_i pma_bufferable_o", false,-1);
        tracep->declBit(c+128,"soc_top_with_cache cpu if_stage_i mpu_i pma_i pma_cacheable_o", false,-1);
        tracep->declArray(c+1720,"soc_top_with_cache cpu if_stage_i mpu_i pma_i PMA_DBG", false,-1, 67,0);
        tracep->declArray(c+131,"soc_top_with_cache cpu if_stage_i mpu_i pma_i pma_cfg", false,-1, 67,0);
        tracep->declBus(c+134,"soc_top_with_cache cpu if_stage_i mpu_i pma_i word_addr", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu if_stage_i mpu_i pma_i pma_cfg_atomic", false,-1);
        tracep->declBit(c+17,"soc_top_with_cache cpu if_stage_i instruction_obi_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu if_stage_i instruction_obi_i rst_n", false,-1);
        tracep->declBit(c+84,"soc_top_with_cache cpu if_stage_i instruction_obi_i trans_valid_i", false,-1);
        tracep->declBit(c+1082,"soc_top_with_cache cpu if_stage_i instruction_obi_i trans_ready_o", false,-1);
        tracep->declQuad(c+85,"soc_top_with_cache cpu if_stage_i instruction_obi_i trans_i", false,-1, 37,0);
        tracep->declBit(c+668,"soc_top_with_cache cpu if_stage_i instruction_obi_i resp_valid_o", false,-1);
        tracep->declQuad(c+688,"soc_top_with_cache cpu if_stage_i instruction_obi_i resp_o", false,-1, 32,0);
        tracep->declBit(c+1109,"soc_top_with_cache cpu if_stage_i instruction_obi_i state_q", false,-1);
        tracep->declBit(c+135,"soc_top_with_cache cpu if_stage_i instruction_obi_i next_state", false,-1);
        tracep->declQuad(c+1110,"soc_top_with_cache cpu if_stage_i instruction_obi_i obi_a_req_q", false,-1, 37,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu if_stage_i compressed_decoder_i ZC_EXT", false,-1);
        tracep->declBus(c+1723,"soc_top_with_cache cpu if_stage_i compressed_decoder_i B_EXT", false,-1, 1,0);
        tracep->declBus(c+1724,"soc_top_with_cache cpu if_stage_i compressed_decoder_i M_EXT", false,-1, 1,0);
        tracep->declQuad(c+73,"soc_top_with_cache cpu if_stage_i compressed_decoder_i instr_i", false,-1, 34,0);
        tracep->declBit(c+1022,"soc_top_with_cache cpu if_stage_i compressed_decoder_i instr_is_ptr_i", false,-1);
        tracep->declQuad(c+76,"soc_top_with_cache cpu if_stage_i compressed_decoder_i instr_o", false,-1, 34,0);
        tracep->declBit(c+78,"soc_top_with_cache cpu if_stage_i compressed_decoder_i is_compressed_o", false,-1);
        tracep->declBit(c+75,"soc_top_with_cache cpu if_stage_i compressed_decoder_i illegal_instr_o", false,-1);
        tracep->declBus(c+136,"soc_top_with_cache cpu if_stage_i compressed_decoder_i instr", false,-1, 31,0);
        tracep->declBit(c+1725,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i RV32", false,-1);
        tracep->declBit(c+17,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i rst_n", false,-1);
        tracep->declBus(c+1064,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i jvt_mode_i", false,-1, 5,0);
        tracep->declQuad(c+73,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i instr_i", false,-1, 34,0);
        tracep->declBit(c+1078,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i instr_is_clic_ptr_i", false,-1);
        tracep->declBit(c+1079,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i instr_is_mret_ptr_i", false,-1);
        tracep->declBit(c+1080,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i instr_is_tbljmp_ptr_i", false,-1);
        tracep->declBit(c+72,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i valid_i", false,-1);
        tracep->declBit(c+51,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i ready_i", false,-1);
        tracep->declBit(c+570,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i halt_i", false,-1);
        tracep->declBit(c+571,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i kill_i", false,-1);
        tracep->declQuad(c+91,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i instr_o", false,-1, 34,0);
        tracep->declBit(c+89,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i valid_o", false,-1);
        tracep->declBit(c+565,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i ready_o", false,-1);
        tracep->declBit(c+1083,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i seq_first_o", false,-1);
        tracep->declBit(c+90,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i seq_last_o", false,-1);
        tracep->declBit(c+93,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i seq_tbljmp_o", false,-1);
        tracep->declBit(c+94,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i seq_pushpop_o", false,-1);
        tracep->declBus(c+1112,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i instr_cnt_q", false,-1, 3,0);
        tracep->declQuad(c+137,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i decode", false,-1, 44,0);
        tracep->declBus(c+139,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i seq_instr", false,-1, 3,0);
        tracep->declBus(c+136,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i instr", false,-1, 31,0);
        tracep->declBus(c+140,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i rlist", false,-1, 3,0);
        tracep->declBit(c+141,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i seq_load", false,-1);
        tracep->declBit(c+142,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i seq_store", false,-1);
        tracep->declBit(c+143,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i seq_move_a2s", false,-1);
        tracep->declBit(c+144,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i seq_move_s2a", false,-1);
        tracep->declBus(c+145,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i seq_state_n", false,-1, 3,0);
        tracep->declBus(c+1113,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i seq_state_q", false,-1, 3,0);
        tracep->declBit(c+1114,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i seq_first_fsm", false,-1);
        tracep->declBit(c+146,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i seq_last_fsm", false,-1);
        tracep->declBit(c+1022,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i instr_is_pointer", false,-1);
        tracep->declBit(c+147,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i ready_fsm", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i dmove_legal_dest_s2a", false,-1);
        tracep->declBit(c+148,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i dmove_legal_dest_a2s", false,-1);
        tracep->declBit(c+149,"soc_top_with_cache cpu if_stage_i gen_seq sequencer_i pushpop_legal_rlist", false,-1);
        tracep->declBit(c+1726,"soc_top_with_cache cpu id_stage_i RV32", false,-1);
        tracep->declBus(c+1727,"soc_top_with_cache cpu id_stage_i A_EXT", false,-1, 1,0);
        tracep->declBus(c+1728,"soc_top_with_cache cpu id_stage_i B_EXT", false,-1, 1,0);
        tracep->declBus(c+1729,"soc_top_with_cache cpu id_stage_i M_EXT", false,-1, 1,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu id_stage_i X_EXT", false,-1);
        tracep->declBus(c+1692,"soc_top_with_cache cpu id_stage_i REGFILE_NUM_READ_PORTS", false,-1, 31,0);
        tracep->declBit(c+1690,"soc_top_with_cache cpu id_stage_i CLIC", false,-1);
        tracep->declBit(c+17,"soc_top_with_cache cpu id_stage_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu id_stage_i rst_n", false,-1);
        tracep->declBus(c+19,"soc_top_with_cache cpu id_stage_i jmp_target_o", false,-1, 31,0);
        tracep->declArray(c+1047,"soc_top_with_cache cpu id_stage_i if_id_pipe_i", false,-1, 190,0);
        tracep->declArray(c+1027,"soc_top_with_cache cpu id_stage_i id_ex_pipe_o", false,-1, 352,0);
        tracep->declArray(c+1039,"soc_top_with_cache cpu id_stage_i ex_wb_pipe_i", false,-1, 247,0);
        tracep->declBus(c+542,"soc_top_with_cache cpu id_stage_i ctrl_byp_i", false,-1, 17,0);
        tracep->declArray(c+543,"soc_top_with_cache cpu id_stage_i ctrl_fsm_i", false,-1, 200,0);
        tracep->declBus(c+1065,"soc_top_with_cache cpu id_stage_i mcause_i", false,-1, 31,0);
        tracep->declBus(c+1063,"soc_top_with_cache cpu id_stage_i jvt_addr_i", false,-1, 25,0);
        tracep->declBus(c+21,"soc_top_with_cache cpu id_stage_i rf_wdata_wb_i", false,-1, 31,0);
        tracep->declBus(c+22,"soc_top_with_cache cpu id_stage_i rf_wdata_ex_i", false,-1, 31,0);
        tracep->declBit(c+61,"soc_top_with_cache cpu id_stage_i alu_jmp_o", false,-1);
        tracep->declBit(c+62,"soc_top_with_cache cpu id_stage_i alu_jmpr_o", false,-1);
        tracep->declBit(c+65,"soc_top_with_cache cpu id_stage_i sys_mret_insn_o", false,-1);
        tracep->declBit(c+66,"soc_top_with_cache cpu id_stage_i csr_en_raw_o", false,-1);
        tracep->declBit(c+63,"soc_top_with_cache cpu id_stage_i alu_en_o", false,-1);
        tracep->declBit(c+64,"soc_top_with_cache cpu id_stage_i sys_en_o", false,-1);
        tracep->declBit(c+1055,"soc_top_with_cache cpu id_stage_i first_op_o", false,-1);
        tracep->declBit(c+24,"soc_top_with_cache cpu id_stage_i last_op_o", false,-1);
        tracep->declBit(c+27,"soc_top_with_cache cpu id_stage_i abort_op_o", false,-1);
        tracep->declBus(c+29,"soc_top_with_cache cpu id_stage_i rf_re_o", false,-1, 1,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1115+i*1,"soc_top_with_cache cpu id_stage_i rf_raddr_o", true,(i+0), 4,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1117+i*1,"soc_top_with_cache cpu id_stage_i rf_rdata_i", true,(i+0), 31,0);}}
        tracep->declBit(c+51,"soc_top_with_cache cpu id_stage_i id_ready_o", false,-1);
        tracep->declBit(c+54,"soc_top_with_cache cpu id_stage_i id_valid_o", false,-1);
        tracep->declBit(c+52,"soc_top_with_cache cpu id_stage_i ex_ready_i", false,-1);
        tracep->declBit(c+561,"soc_top_with_cache cpu id_stage_i xif_offloading_o", false,-1);
        tracep->declBus(c+1730,"soc_top_with_cache cpu id_stage_i REG_S1_MSB", false,-1, 31,0);
        tracep->declBus(c+1731,"soc_top_with_cache cpu id_stage_i REG_S1_LSB", false,-1, 31,0);
        tracep->declBus(c+1732,"soc_top_with_cache cpu id_stage_i REG_S2_MSB", false,-1, 31,0);
        tracep->declBus(c+1733,"soc_top_with_cache cpu id_stage_i REG_S2_LSB", false,-1, 31,0);
        tracep->declBus(c+1734,"soc_top_with_cache cpu id_stage_i REG_S3_MSB", false,-1, 31,0);
        tracep->declBus(c+1735,"soc_top_with_cache cpu id_stage_i REG_S3_LSB", false,-1, 31,0);
        tracep->declBus(c+1736,"soc_top_with_cache cpu id_stage_i REG_D_MSB", false,-1, 31,0);
        tracep->declBus(c+1737,"soc_top_with_cache cpu id_stage_i REG_D_LSB", false,-1, 31,0);
        tracep->declBus(c+1119,"soc_top_with_cache cpu id_stage_i instr", false,-1, 31,0);
        tracep->declBus(c+150,"soc_top_with_cache cpu id_stage_i rf_re", false,-1, 1,0);
        tracep->declBit(c+151,"soc_top_with_cache cpu id_stage_i rf_we", false,-1);
        tracep->declBit(c+572,"soc_top_with_cache cpu id_stage_i rf_we_dec", false,-1);
        tracep->declBus(c+1120,"soc_top_with_cache cpu id_stage_i rf_waddr", false,-1, 4,0);
        tracep->declBus(c+1696,"soc_top_with_cache cpu id_stage_i rf_illegal_raddr", false,-1, 1,0);
        tracep->declBit(c+63,"soc_top_with_cache cpu id_stage_i alu_en", false,-1);
        tracep->declBit(c+152,"soc_top_with_cache cpu id_stage_i alu_bch", false,-1);
        tracep->declBit(c+61,"soc_top_with_cache cpu id_stage_i alu_jmp", false,-1);
        tracep->declBit(c+62,"soc_top_with_cache cpu id_stage_i alu_jmpr", false,-1);
        tracep->declBus(c+153,"soc_top_with_cache cpu id_stage_i alu_operator", false,-1, 5,0);
        tracep->declBit(c+154,"soc_top_with_cache cpu id_stage_i mul_en", false,-1);
        tracep->declBus(c+1121,"soc_top_with_cache cpu id_stage_i mul_operator", false,-1, 0,0);
        tracep->declBus(c+1122,"soc_top_with_cache cpu id_stage_i mul_signed_mode", false,-1, 1,0);
        tracep->declBit(c+155,"soc_top_with_cache cpu id_stage_i div_en", false,-1);
        tracep->declBus(c+1123,"soc_top_with_cache cpu id_stage_i div_operator", false,-1, 1,0);
        tracep->declBit(c+156,"soc_top_with_cache cpu id_stage_i lsu_en", false,-1);
        tracep->declBit(c+157,"soc_top_with_cache cpu id_stage_i lsu_we", false,-1);
        tracep->declBus(c+158,"soc_top_with_cache cpu id_stage_i lsu_size", false,-1, 1,0);
        tracep->declBit(c+159,"soc_top_with_cache cpu id_stage_i lsu_sext", false,-1);
        tracep->declBus(c+1738,"soc_top_with_cache cpu id_stage_i lsu_atop", false,-1, 5,0);
        tracep->declBit(c+160,"soc_top_with_cache cpu id_stage_i csr_en", false,-1);
        tracep->declBit(c+66,"soc_top_with_cache cpu id_stage_i csr_en_raw", false,-1);
        tracep->declBus(c+161,"soc_top_with_cache cpu id_stage_i csr_op", false,-1, 1,0);
        tracep->declBit(c+64,"soc_top_with_cache cpu id_stage_i sys_en", false,-1);
        tracep->declBit(c+162,"soc_top_with_cache cpu id_stage_i sys_fence_insn", false,-1);
        tracep->declBit(c+163,"soc_top_with_cache cpu id_stage_i sys_fencei_insn", false,-1);
        tracep->declBit(c+164,"soc_top_with_cache cpu id_stage_i sys_ecall_insn", false,-1);
        tracep->declBit(c+165,"soc_top_with_cache cpu id_stage_i sys_ebrk_insn", false,-1);
        tracep->declBit(c+65,"soc_top_with_cache cpu id_stage_i sys_mret_insn", false,-1);
        tracep->declBit(c+166,"soc_top_with_cache cpu id_stage_i sys_dret_insn", false,-1);
        tracep->declBit(c+167,"soc_top_with_cache cpu id_stage_i sys_wfi_insn", false,-1);
        tracep->declBit(c+168,"soc_top_with_cache cpu id_stage_i sys_wfe_insn", false,-1);
        tracep->declBus(c+573,"soc_top_with_cache cpu id_stage_i operand_a", false,-1, 31,0);
        tracep->declBus(c+574,"soc_top_with_cache cpu id_stage_i operand_b", false,-1, 31,0);
        tracep->declBus(c+169,"soc_top_with_cache cpu id_stage_i operand_c", false,-1, 31,0);
        tracep->declBus(c+170,"soc_top_with_cache cpu id_stage_i operand_a_fw", false,-1, 31,0);
        tracep->declBus(c+171,"soc_top_with_cache cpu id_stage_i operand_b_fw", false,-1, 31,0);
        tracep->declBus(c+575,"soc_top_with_cache cpu id_stage_i jalr_fw", false,-1, 31,0);
        tracep->declBus(c+172,"soc_top_with_cache cpu id_stage_i alu_op_a_mux_sel", false,-1, 1,0);
        tracep->declBus(c+173,"soc_top_with_cache cpu id_stage_i alu_op_b_mux_sel", false,-1, 1,0);
        tracep->declBus(c+174,"soc_top_with_cache cpu id_stage_i op_c_mux_sel", false,-1, 1,0);
        tracep->declBit(c+175,"soc_top_with_cache cpu id_stage_i imm_a_mux_sel", false,-1);
        tracep->declBus(c+176,"soc_top_with_cache cpu id_stage_i imm_b_mux_sel", false,-1, 1,0);
        tracep->declBus(c+177,"soc_top_with_cache cpu id_stage_i bch_jmp_mux_sel", false,-1, 1,0);
        tracep->declBus(c+576,"soc_top_with_cache cpu id_stage_i imm_a", false,-1, 31,0);
        tracep->declBus(c+577,"soc_top_with_cache cpu id_stage_i imm_b", false,-1, 31,0);
        tracep->declBus(c+1124,"soc_top_with_cache cpu id_stage_i imm_i_type", false,-1, 31,0);
        tracep->declBus(c+1125,"soc_top_with_cache cpu id_stage_i imm_s_type", false,-1, 31,0);
        tracep->declBus(c+1126,"soc_top_with_cache cpu id_stage_i imm_sb_type", false,-1, 31,0);
        tracep->declBus(c+1127,"soc_top_with_cache cpu id_stage_i imm_u_type", false,-1, 31,0);
        tracep->declBus(c+1128,"soc_top_with_cache cpu id_stage_i imm_uj_type", false,-1, 31,0);
        tracep->declBus(c+1129,"soc_top_with_cache cpu id_stage_i imm_z_type", false,-1, 31,0);
        tracep->declBus(c+19,"soc_top_with_cache cpu id_stage_i bch_target", false,-1, 31,0);
        tracep->declBit(c+178,"soc_top_with_cache cpu id_stage_i illegal_insn", false,-1);
        tracep->declBit(c+179,"soc_top_with_cache cpu id_stage_i instr_valid", false,-1);
        tracep->declBit(c+180,"soc_top_with_cache cpu id_stage_i xif_en", false,-1);
        tracep->declBit(c+181,"soc_top_with_cache cpu id_stage_i xif_waiting", false,-1);
        tracep->declBit(c+182,"soc_top_with_cache cpu id_stage_i xif_insn_accept", false,-1);
        tracep->declBit(c+183,"soc_top_with_cache cpu id_stage_i xif_insn_reject", false,-1);
        tracep->declBit(c+184,"soc_top_with_cache cpu id_stage_i xif_we", false,-1);
        tracep->declBit(c+185,"soc_top_with_cache cpu id_stage_i xif_exception", false,-1);
        tracep->declBit(c+186,"soc_top_with_cache cpu id_stage_i xif_dualwrite", false,-1);
        tracep->declBit(c+187,"soc_top_with_cache cpu id_stage_i xif_loadstore", false,-1);
        tracep->declBit(c+1130,"soc_top_with_cache cpu id_stage_i tbljmp_first", false,-1);
        tracep->declBus(c+1131,"soc_top_with_cache cpu id_stage_i jvt_index", false,-1, 7,0);
        tracep->declBit(c+1132,"soc_top_with_cache cpu id_stage_i x_ext xif_accepted_q", false,-1);
        tracep->declBit(c+1133,"soc_top_with_cache cpu id_stage_i x_ext xif_rejected_q", false,-1);
        tracep->declBus(c+1739,"soc_top_with_cache cpu id_stage_i x_ext unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+177,"soc_top_with_cache cpu id_stage_i cv32e40x_pc_target_i bch_jmp_mux_sel_i", false,-1, 1,0);
        tracep->declBus(c+1134,"soc_top_with_cache cpu id_stage_i cv32e40x_pc_target_i pc_id_i", false,-1, 31,0);
        tracep->declBus(c+1128,"soc_top_with_cache cpu id_stage_i cv32e40x_pc_target_i imm_uj_type_i", false,-1, 31,0);
        tracep->declBus(c+1126,"soc_top_with_cache cpu id_stage_i cv32e40x_pc_target_i imm_sb_type_i", false,-1, 31,0);
        tracep->declBus(c+1124,"soc_top_with_cache cpu id_stage_i cv32e40x_pc_target_i imm_i_type_i", false,-1, 31,0);
        tracep->declBus(c+575,"soc_top_with_cache cpu id_stage_i cv32e40x_pc_target_i jalr_fw_i", false,-1, 31,0);
        tracep->declBus(c+1063,"soc_top_with_cache cpu id_stage_i cv32e40x_pc_target_i jvt_addr_i", false,-1, 25,0);
        tracep->declBus(c+1131,"soc_top_with_cache cpu id_stage_i cv32e40x_pc_target_i jvt_index_i", false,-1, 7,0);
        tracep->declBus(c+19,"soc_top_with_cache cpu id_stage_i cv32e40x_pc_target_i bch_target_o", false,-1, 31,0);
        tracep->declBus(c+19,"soc_top_with_cache cpu id_stage_i cv32e40x_pc_target_i jmp_target_o", false,-1, 31,0);
        tracep->declBus(c+19,"soc_top_with_cache cpu id_stage_i cv32e40x_pc_target_i pc_target", false,-1, 31,0);
        tracep->declBit(c+1740,"soc_top_with_cache cpu id_stage_i decoder_i RV32", false,-1);
        tracep->declBus(c+1692,"soc_top_with_cache cpu id_stage_i decoder_i REGFILE_NUM_READ_PORTS", false,-1, 31,0);
        tracep->declBus(c+1741,"soc_top_with_cache cpu id_stage_i decoder_i A_EXT", false,-1, 1,0);
        tracep->declBus(c+1742,"soc_top_with_cache cpu id_stage_i decoder_i B_EXT", false,-1, 1,0);
        tracep->declBus(c+1743,"soc_top_with_cache cpu id_stage_i decoder_i M_EXT", false,-1, 1,0);
        tracep->declBit(c+1690,"soc_top_with_cache cpu id_stage_i decoder_i CLIC", false,-1);
        tracep->declBit(c+578,"soc_top_with_cache cpu id_stage_i decoder_i deassert_we_i", false,-1);
        tracep->declBit(c+64,"soc_top_with_cache cpu id_stage_i decoder_i sys_en_o", false,-1);
        tracep->declBit(c+178,"soc_top_with_cache cpu id_stage_i decoder_i illegal_insn_o", false,-1);
        tracep->declBit(c+165,"soc_top_with_cache cpu id_stage_i decoder_i sys_ebrk_insn_o", false,-1);
        tracep->declBit(c+65,"soc_top_with_cache cpu id_stage_i decoder_i sys_mret_insn_o", false,-1);
        tracep->declBit(c+166,"soc_top_with_cache cpu id_stage_i decoder_i sys_dret_insn_o", false,-1);
        tracep->declBit(c+164,"soc_top_with_cache cpu id_stage_i decoder_i sys_ecall_insn_o", false,-1);
        tracep->declBit(c+167,"soc_top_with_cache cpu id_stage_i decoder_i sys_wfi_insn_o", false,-1);
        tracep->declBit(c+168,"soc_top_with_cache cpu id_stage_i decoder_i sys_wfe_insn_o", false,-1);
        tracep->declBit(c+162,"soc_top_with_cache cpu id_stage_i decoder_i sys_fence_insn_o", false,-1);
        tracep->declBit(c+163,"soc_top_with_cache cpu id_stage_i decoder_i sys_fencei_insn_o", false,-1);
        tracep->declArray(c+1047,"soc_top_with_cache cpu id_stage_i decoder_i if_id_pipe_i", false,-1, 190,0);
        tracep->declBit(c+63,"soc_top_with_cache cpu id_stage_i decoder_i alu_en_o", false,-1);
        tracep->declBit(c+152,"soc_top_with_cache cpu id_stage_i decoder_i alu_bch_o", false,-1);
        tracep->declBit(c+61,"soc_top_with_cache cpu id_stage_i decoder_i alu_jmp_o", false,-1);
        tracep->declBit(c+62,"soc_top_with_cache cpu id_stage_i decoder_i alu_jmpr_o", false,-1);
        tracep->declBus(c+153,"soc_top_with_cache cpu id_stage_i decoder_i alu_operator_o", false,-1, 5,0);
        tracep->declBus(c+172,"soc_top_with_cache cpu id_stage_i decoder_i alu_op_a_mux_sel_o", false,-1, 1,0);
        tracep->declBus(c+173,"soc_top_with_cache cpu id_stage_i decoder_i alu_op_b_mux_sel_o", false,-1, 1,0);
        tracep->declBus(c+1121,"soc_top_with_cache cpu id_stage_i decoder_i mul_operator_o", false,-1, 0,0);
        tracep->declBit(c+154,"soc_top_with_cache cpu id_stage_i decoder_i mul_en_o", false,-1);
        tracep->declBus(c+1122,"soc_top_with_cache cpu id_stage_i decoder_i mul_signed_mode_o", false,-1, 1,0);
        tracep->declBus(c+1123,"soc_top_with_cache cpu id_stage_i decoder_i div_operator_o", false,-1, 1,0);
        tracep->declBit(c+155,"soc_top_with_cache cpu id_stage_i decoder_i div_en_o", false,-1);
        tracep->declBit(c+160,"soc_top_with_cache cpu id_stage_i decoder_i csr_en_o", false,-1);
        tracep->declBit(c+66,"soc_top_with_cache cpu id_stage_i decoder_i csr_en_raw_o", false,-1);
        tracep->declBus(c+161,"soc_top_with_cache cpu id_stage_i decoder_i csr_op_o", false,-1, 1,0);
        tracep->declBit(c+156,"soc_top_with_cache cpu id_stage_i decoder_i lsu_en_o", false,-1);
        tracep->declBit(c+157,"soc_top_with_cache cpu id_stage_i decoder_i lsu_we_o", false,-1);
        tracep->declBus(c+158,"soc_top_with_cache cpu id_stage_i decoder_i lsu_size_o", false,-1, 1,0);
        tracep->declBit(c+159,"soc_top_with_cache cpu id_stage_i decoder_i lsu_sext_o", false,-1);
        tracep->declBus(c+1738,"soc_top_with_cache cpu id_stage_i decoder_i lsu_atop_o", false,-1, 5,0);
        tracep->declBit(c+572,"soc_top_with_cache cpu id_stage_i decoder_i rf_we_o", false,-1);
        tracep->declBus(c+150,"soc_top_with_cache cpu id_stage_i decoder_i rf_re_o", false,-1, 1,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1135+i*1,"soc_top_with_cache cpu id_stage_i decoder_i rf_raddr_i", true,(i+0), 4,0);}}
        tracep->declBus(c+1120,"soc_top_with_cache cpu id_stage_i decoder_i rf_waddr_i", false,-1, 4,0);
        tracep->declBus(c+1696,"soc_top_with_cache cpu id_stage_i decoder_i rf_illegal_raddr_o", false,-1, 1,0);
        tracep->declBus(c+174,"soc_top_with_cache cpu id_stage_i decoder_i op_c_mux_sel_o", false,-1, 1,0);
        tracep->declBit(c+175,"soc_top_with_cache cpu id_stage_i decoder_i imm_a_mux_sel_o", false,-1);
        tracep->declBus(c+176,"soc_top_with_cache cpu id_stage_i decoder_i imm_b_mux_sel_o", false,-1, 1,0);
        tracep->declBus(c+177,"soc_top_with_cache cpu id_stage_i decoder_i bch_jmp_mux_sel_o", false,-1, 1,0);
        tracep->declArray(c+543,"soc_top_with_cache cpu id_stage_i decoder_i ctrl_fsm_i", false,-1, 200,0);
        tracep->declBit(c+1130,"soc_top_with_cache cpu id_stage_i decoder_i tbljmp_first_i", false,-1);
        tracep->declBit(c+188,"soc_top_with_cache cpu id_stage_i decoder_i rf_we", false,-1);
        tracep->declBit(c+189,"soc_top_with_cache cpu id_stage_i decoder_i lsu_en", false,-1);
        tracep->declBit(c+66,"soc_top_with_cache cpu id_stage_i decoder_i csr_en", false,-1);
        tracep->declBit(c+190,"soc_top_with_cache cpu id_stage_i decoder_i alu_en", false,-1);
        tracep->declBit(c+1137,"soc_top_with_cache cpu id_stage_i decoder_i mul_en", false,-1);
        tracep->declBit(c+1138,"soc_top_with_cache cpu id_stage_i decoder_i div_en", false,-1);
        tracep->declBit(c+191,"soc_top_with_cache cpu id_stage_i decoder_i sys_en", false,-1);
        tracep->declBus(c+1119,"soc_top_with_cache cpu id_stage_i decoder_i instr_rdata", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu id_stage_i decoder_i dec_i_rf_illegal_addr", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu id_stage_i decoder_i dec_a_rf_illegal_addr", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu id_stage_i decoder_i dec_b_rf_illegal_addr", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu id_stage_i decoder_i dec_m_rf_illegal_addr", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu id_stage_i decoder_i rf_illegal_waddr", false,-1);
        tracep->declQuad(c+192,"soc_top_with_cache cpu id_stage_i decoder_i decoder_i_ctrl", false,-1, 54,0);
        tracep->declQuad(c+194,"soc_top_with_cache cpu id_stage_i decoder_i decoder_i_ctrl_int", false,-1, 54,0);
        tracep->declQuad(c+1139,"soc_top_with_cache cpu id_stage_i decoder_i decoder_m_ctrl", false,-1, 54,0);
        tracep->declQuad(c+1141,"soc_top_with_cache cpu id_stage_i decoder_i decoder_m_ctrl_int", false,-1, 54,0);
        tracep->declQuad(c+1744,"soc_top_with_cache cpu id_stage_i decoder_i decoder_a_ctrl", false,-1, 54,0);
        tracep->declQuad(c+1746,"soc_top_with_cache cpu id_stage_i decoder_i decoder_a_ctrl_int", false,-1, 54,0);
        tracep->declQuad(c+1744,"soc_top_with_cache cpu id_stage_i decoder_i decoder_b_ctrl", false,-1, 54,0);
        tracep->declQuad(c+1748,"soc_top_with_cache cpu id_stage_i decoder_i decoder_b_ctrl_int", false,-1, 54,0);
        tracep->declQuad(c+196,"soc_top_with_cache cpu id_stage_i decoder_i decoder_ctrl_mux", false,-1, 54,0);
        tracep->declBit(c+1690,"soc_top_with_cache cpu id_stage_i decoder_i i_decoder_i CLIC", false,-1);
        tracep->declBus(c+1119,"soc_top_with_cache cpu id_stage_i decoder_i i_decoder_i instr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+1143,"soc_top_with_cache cpu id_stage_i decoder_i i_decoder_i tbljmp_i", false,-1);
        tracep->declArray(c+543,"soc_top_with_cache cpu id_stage_i decoder_i i_decoder_i ctrl_fsm_i", false,-1, 200,0);
        tracep->declQuad(c+194,"soc_top_with_cache cpu id_stage_i decoder_i i_decoder_i decoder_ctrl_o", false,-1, 54,0);
        tracep->declBus(c+1750,"soc_top_with_cache cpu id_stage_i decoder_i i_decoder_i CUSTOM_EXT", false,-1, 31,0);
        tracep->declBus(c+1751,"soc_top_with_cache cpu id_stage_i decoder_i m_decoder m_decoder_i M_EXT", false,-1, 1,0);
        tracep->declBus(c+1119,"soc_top_with_cache cpu id_stage_i decoder_i m_decoder m_decoder_i instr_rdata_i", false,-1, 31,0);
        tracep->declQuad(c+1141,"soc_top_with_cache cpu id_stage_i decoder_i m_decoder m_decoder_i decoder_ctrl_o", false,-1, 54,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu ex_stage_i X_EXT", false,-1);
        tracep->declBus(c+1752,"soc_top_with_cache cpu ex_stage_i B_EXT", false,-1, 1,0);
        tracep->declBus(c+1753,"soc_top_with_cache cpu ex_stage_i M_EXT", false,-1, 1,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu ex_stage_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu ex_stage_i rst_n", false,-1);
        tracep->declArray(c+1027,"soc_top_with_cache cpu ex_stage_i id_ex_pipe_i", false,-1, 352,0);
        tracep->declBus(c+32,"soc_top_with_cache cpu ex_stage_i csr_rdata_i", false,-1, 31,0);
        tracep->declBit(c+67,"soc_top_with_cache cpu ex_stage_i csr_illegal_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu ex_stage_i csr_mnxti_read_i", false,-1);
        tracep->declBus(c+1068,"soc_top_with_cache cpu ex_stage_i csr_hz_i", false,-1, 27,0);
        tracep->declArray(c+1039,"soc_top_with_cache cpu ex_stage_i ex_wb_pipe_o", false,-1, 247,0);
        tracep->declArray(c+543,"soc_top_with_cache cpu ex_stage_i ctrl_fsm_i", false,-1, 200,0);
        tracep->declBus(c+22,"soc_top_with_cache cpu ex_stage_i rf_wdata_o", false,-1, 31,0);
        tracep->declBit(c+1024,"soc_top_with_cache cpu ex_stage_i branch_decision_o", false,-1);
        tracep->declBus(c+1023,"soc_top_with_cache cpu ex_stage_i branch_target_o", false,-1, 31,0);
        tracep->declBit(c+68,"soc_top_with_cache cpu ex_stage_i xif_csr_error_o", false,-1);
        tracep->declBit(c+551,"soc_top_with_cache cpu ex_stage_i lsu_valid_i", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu ex_stage_i lsu_ready_o", false,-1);
        tracep->declBit(c+42,"soc_top_with_cache cpu ex_stage_i lsu_valid_o", false,-1);
        tracep->declBit(c+43,"soc_top_with_cache cpu ex_stage_i lsu_ready_i", false,-1);
        tracep->declBit(c+34,"soc_top_with_cache cpu ex_stage_i lsu_split_i", false,-1);
        tracep->declBit(c+35,"soc_top_with_cache cpu ex_stage_i lsu_last_op_i", false,-1);
        tracep->declBit(c+1069,"soc_top_with_cache cpu ex_stage_i lsu_first_op_i", false,-1);
        tracep->declBit(c+52,"soc_top_with_cache cpu ex_stage_i ex_ready_o", false,-1);
        tracep->declBit(c+55,"soc_top_with_cache cpu ex_stage_i ex_valid_o", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu ex_stage_i wb_ready_i", false,-1);
        tracep->declBit(c+25,"soc_top_with_cache cpu ex_stage_i last_op_o", false,-1);
        tracep->declBit(c+198,"soc_top_with_cache cpu ex_stage_i instr_valid", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu ex_stage_i alu_ready", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu ex_stage_i alu_valid", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu ex_stage_i csr_ready", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu ex_stage_i csr_valid", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu ex_stage_i sys_ready", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu ex_stage_i sys_valid", false,-1);
        tracep->declBit(c+199,"soc_top_with_cache cpu ex_stage_i mul_ready", false,-1);
        tracep->declBit(c+200,"soc_top_with_cache cpu ex_stage_i mul_valid", false,-1);
        tracep->declBit(c+201,"soc_top_with_cache cpu ex_stage_i div_ready", false,-1);
        tracep->declBit(c+202,"soc_top_with_cache cpu ex_stage_i div_valid", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu ex_stage_i xif_ready", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu ex_stage_i xif_valid", false,-1);
        tracep->declBus(c+203,"soc_top_with_cache cpu ex_stage_i alu_result", false,-1, 31,0);
        tracep->declBit(c+1024,"soc_top_with_cache cpu ex_stage_i alu_cmp_result", false,-1);
        tracep->declBus(c+204,"soc_top_with_cache cpu ex_stage_i mul_result", false,-1, 31,0);
        tracep->declBus(c+1144,"soc_top_with_cache cpu ex_stage_i div_result", false,-1, 31,0);
        tracep->declBit(c+42,"soc_top_with_cache cpu ex_stage_i lsu_en_gated", false,-1);
        tracep->declBit(c+1145,"soc_top_with_cache cpu ex_stage_i div_en", false,-1);
        tracep->declBit(c+1145,"soc_top_with_cache cpu ex_stage_i div_clz_en", false,-1);
        tracep->declBus(c+1146,"soc_top_with_cache cpu ex_stage_i div_clz_data_rev", false,-1, 31,0);
        tracep->declBus(c+205,"soc_top_with_cache cpu ex_stage_i div_clz_result", false,-1, 5,0);
        tracep->declBit(c+1145,"soc_top_with_cache cpu ex_stage_i div_shift_en", false,-1);
        tracep->declBus(c+205,"soc_top_with_cache cpu ex_stage_i div_shift_amt", false,-1, 5,0);
        tracep->declBus(c+206,"soc_top_with_cache cpu ex_stage_i div_op_b_shifted", false,-1, 31,0);
        tracep->declBit(c+1147,"soc_top_with_cache cpu ex_stage_i mul_en", false,-1);
        tracep->declBit(c+1148,"soc_top_with_cache cpu ex_stage_i forced_nop", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu ex_stage_i forced_nop_valid", false,-1);
        tracep->declBit(c+1149,"soc_top_with_cache cpu ex_stage_i first_op", false,-1);
        tracep->declBit(c+207,"soc_top_with_cache cpu ex_stage_i csr_is_illegal", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu ex_stage_i clic_ptr_valid", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu ex_stage_i mret_ptr_valid", false,-1);
        tracep->declBus(c+1754,"soc_top_with_cache cpu ex_stage_i alu_i B_EXT", false,-1, 1,0);
        tracep->declBus(c+1150,"soc_top_with_cache cpu ex_stage_i alu_i operator_i", false,-1, 5,0);
        tracep->declBus(c+1151,"soc_top_with_cache cpu ex_stage_i alu_i operand_a_i", false,-1, 31,0);
        tracep->declBus(c+1152,"soc_top_with_cache cpu ex_stage_i alu_i operand_b_i", false,-1, 31,0);
        tracep->declBus(c+1153,"soc_top_with_cache cpu ex_stage_i alu_i muldiv_operand_b_i", false,-1, 31,0);
        tracep->declBus(c+203,"soc_top_with_cache cpu ex_stage_i alu_i result_o", false,-1, 31,0);
        tracep->declBit(c+1024,"soc_top_with_cache cpu ex_stage_i alu_i cmp_result_o", false,-1);
        tracep->declBit(c+1145,"soc_top_with_cache cpu ex_stage_i alu_i div_clz_en_i", false,-1);
        tracep->declBus(c+1146,"soc_top_with_cache cpu ex_stage_i alu_i div_clz_data_rev_i", false,-1, 31,0);
        tracep->declBus(c+205,"soc_top_with_cache cpu ex_stage_i alu_i div_clz_result_o", false,-1, 5,0);
        tracep->declBit(c+1145,"soc_top_with_cache cpu ex_stage_i alu_i div_shift_en_i", false,-1);
        tracep->declBus(c+205,"soc_top_with_cache cpu ex_stage_i alu_i div_shift_amt_i", false,-1, 5,0);
        tracep->declBus(c+206,"soc_top_with_cache cpu ex_stage_i alu_i div_op_b_shifted_o", false,-1, 31,0);
        tracep->declBus(c+1755,"soc_top_with_cache cpu ex_stage_i alu_i RV32B_ZBS", false,-1, 0,0);
        tracep->declBus(c+1154,"soc_top_with_cache cpu ex_stage_i alu_i operand_a_rev", false,-1, 31,0);
        tracep->declBus(c+1155,"soc_top_with_cache cpu ex_stage_i alu_i operand_b_rev", false,-1, 31,0);
        tracep->declQuad(c+1156,"soc_top_with_cache cpu ex_stage_i alu_i adder_in_a", false,-1, 32,0);
        tracep->declQuad(c+1158,"soc_top_with_cache cpu ex_stage_i alu_i adder_in_b", false,-1, 32,0);
        tracep->declBus(c+1160,"soc_top_with_cache cpu ex_stage_i alu_i adder_result", false,-1, 31,0);
        tracep->declQuad(c+1161,"soc_top_with_cache cpu ex_stage_i alu_i adder_result_expanded", false,-1, 33,0);
        tracep->declBit(c+1163,"soc_top_with_cache cpu ex_stage_i alu_i adder_subtract", false,-1);
        tracep->declBus(c+208,"soc_top_with_cache cpu ex_stage_i alu_i shifter_shamt", false,-1, 5,0);
        tracep->declBit(c+1164,"soc_top_with_cache cpu ex_stage_i alu_i shifter_rshift", false,-1);
        tracep->declBus(c+1165,"soc_top_with_cache cpu ex_stage_i alu_i shifter_aa", false,-1, 31,0);
        tracep->declBus(c+1166,"soc_top_with_cache cpu ex_stage_i alu_i shifter_bb", false,-1, 31,0);
        tracep->declQuad(c+209,"soc_top_with_cache cpu ex_stage_i alu_i shifter_tmp", false,-1, 63,0);
        tracep->declBus(c+206,"soc_top_with_cache cpu ex_stage_i alu_i shifter_result", false,-1, 31,0);
        tracep->declBus(c+1167,"soc_top_with_cache cpu ex_stage_i alu_i result_shnadd", false,-1, 31,0);
        tracep->declBit(c+1168,"soc_top_with_cache cpu ex_stage_i alu_i is_equal", false,-1);
        tracep->declBit(c+1169,"soc_top_with_cache cpu ex_stage_i alu_i is_greater", false,-1);
        tracep->declBit(c+1163,"soc_top_with_cache cpu ex_stage_i alu_i is_signed", false,-1);
        tracep->declBus(c+1170,"soc_top_with_cache cpu ex_stage_i alu_i min_minu_result", false,-1, 31,0);
        tracep->declBus(c+1171,"soc_top_with_cache cpu ex_stage_i alu_i max_maxu_result", false,-1, 31,0);
        tracep->declBus(c+1172,"soc_top_with_cache cpu ex_stage_i alu_i clz_data_in", false,-1, 31,0);
        tracep->declBus(c+579,"soc_top_with_cache cpu ex_stage_i alu_i ff1_result", false,-1, 4,0);
        tracep->declBit(c+580,"soc_top_with_cache cpu ex_stage_i alu_i ff_no_one", false,-1);
        tracep->declBus(c+581,"soc_top_with_cache cpu ex_stage_i alu_i cpop_result_o", false,-1, 5,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu ex_stage_i alu_i clmul_result", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu ex_stage_i alu_i clmulr_result", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu ex_stage_i alu_i clmulh_result", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu ex_stage_i alu_i ff_one_i LEN", false,-1, 31,0);
        tracep->declBus(c+1172,"soc_top_with_cache cpu ex_stage_i alu_i ff_one_i in_i", false,-1, 31,0);
        tracep->declBus(c+579,"soc_top_with_cache cpu ex_stage_i alu_i ff_one_i first_one_o", false,-1, 4,0);
        tracep->declBit(c+580,"soc_top_with_cache cpu ex_stage_i alu_i ff_one_i no_ones_o", false,-1);
        tracep->declBus(c+1756,"soc_top_with_cache cpu ex_stage_i alu_i ff_one_i NUM_LEVELS", false,-1, 31,0);
        tracep->declArray(c+1757,"soc_top_with_cache cpu ex_stage_i alu_i ff_one_i index_lut", false,-1, 159,0);
        tracep->declBus(c+582,"soc_top_with_cache cpu ex_stage_i alu_i ff_one_i sel_nodes", false,-1, 31,0);
        tracep->declArray(c+583,"soc_top_with_cache cpu ex_stage_i alu_i ff_one_i index_nodes", false,-1, 159,0);
        tracep->declBus(c+1151,"soc_top_with_cache cpu ex_stage_i alu_i alu_b_cpop_i operand_i", false,-1, 31,0);
        tracep->declBus(c+581,"soc_top_with_cache cpu ex_stage_i alu_i alu_b_cpop_i result_o", false,-1, 5,0);
        tracep->declArray(c+588,"soc_top_with_cache cpu ex_stage_i alu_i alu_b_cpop_i sum", false,-1, 191,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu ex_stage_i div div_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu ex_stage_i div div_i rst_n", false,-1);
        tracep->declBus(c+1173,"soc_top_with_cache cpu ex_stage_i div div_i operator_i", false,-1, 1,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu ex_stage_i div div_i data_ind_timing_i", false,-1);
        tracep->declBus(c+1174,"soc_top_with_cache cpu ex_stage_i div div_i op_a_i", false,-1, 31,0);
        tracep->declBus(c+1153,"soc_top_with_cache cpu ex_stage_i div div_i op_b_i", false,-1, 31,0);
        tracep->declBit(c+1145,"soc_top_with_cache cpu ex_stage_i div div_i alu_clz_en_o", false,-1);
        tracep->declBus(c+1146,"soc_top_with_cache cpu ex_stage_i div div_i alu_clz_data_rev_o", false,-1, 31,0);
        tracep->declBus(c+205,"soc_top_with_cache cpu ex_stage_i div div_i alu_clz_result_i", false,-1, 5,0);
        tracep->declBit(c+1145,"soc_top_with_cache cpu ex_stage_i div div_i alu_shift_en_o", false,-1);
        tracep->declBus(c+205,"soc_top_with_cache cpu ex_stage_i div div_i alu_shift_amt_o", false,-1, 5,0);
        tracep->declBus(c+206,"soc_top_with_cache cpu ex_stage_i div div_i alu_op_b_shifted_i", false,-1, 31,0);
        tracep->declBit(c+594,"soc_top_with_cache cpu ex_stage_i div div_i halt_i", false,-1);
        tracep->declBit(c+595,"soc_top_with_cache cpu ex_stage_i div div_i kill_i", false,-1);
        tracep->declBit(c+1145,"soc_top_with_cache cpu ex_stage_i div div_i valid_i", false,-1);
        tracep->declBit(c+201,"soc_top_with_cache cpu ex_stage_i div div_i ready_o", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu ex_stage_i div div_i ready_i", false,-1);
        tracep->declBit(c+202,"soc_top_with_cache cpu ex_stage_i div div_i valid_o", false,-1);
        tracep->declBus(c+1144,"soc_top_with_cache cpu ex_stage_i div div_i result_o", false,-1, 31,0);
        tracep->declBus(c+1175,"soc_top_with_cache cpu ex_stage_i div div_i alu_clz_data", false,-1, 31,0);
        tracep->declBus(c+1176,"soc_top_with_cache cpu ex_stage_i div div_i quotient_q", false,-1, 31,0);
        tracep->declBus(c+596,"soc_top_with_cache cpu ex_stage_i div div_i quotient_d", false,-1, 31,0);
        tracep->declBus(c+1177,"soc_top_with_cache cpu ex_stage_i div div_i remainder_q", false,-1, 31,0);
        tracep->declBus(c+597,"soc_top_with_cache cpu ex_stage_i div div_i remainder_d", false,-1, 31,0);
        tracep->declBus(c+1178,"soc_top_with_cache cpu ex_stage_i div div_i divisor_q", false,-1, 31,0);
        tracep->declBus(c+598,"soc_top_with_cache cpu ex_stage_i div div_i divisor_d", false,-1, 31,0);
        tracep->declBit(c+599,"soc_top_with_cache cpu ex_stage_i div div_i div_rem_d", false,-1);
        tracep->declBit(c+1179,"soc_top_with_cache cpu ex_stage_i div div_i div_rem_q", false,-1);
        tracep->declBit(c+600,"soc_top_with_cache cpu ex_stage_i div div_i comp_inv_d", false,-1);
        tracep->declBit(c+1180,"soc_top_with_cache cpu ex_stage_i div div_i comp_inv_q", false,-1);
        tracep->declBit(c+601,"soc_top_with_cache cpu ex_stage_i div div_i res_inv_d", false,-1);
        tracep->declBit(c+1181,"soc_top_with_cache cpu ex_stage_i div div_i res_inv_q", false,-1);
        tracep->declBus(c+211,"soc_top_with_cache cpu ex_stage_i div div_i add_a_mux", false,-1, 31,0);
        tracep->declBus(c+602,"soc_top_with_cache cpu ex_stage_i div div_i add_out", false,-1, 31,0);
        tracep->declBus(c+212,"soc_top_with_cache cpu ex_stage_i div div_i add_b_mux", false,-1, 31,0);
        tracep->declBus(c+603,"soc_top_with_cache cpu ex_stage_i div div_i divisor_mux", false,-1, 31,0);
        tracep->declBus(c+1182,"soc_top_with_cache cpu ex_stage_i div div_i res_mux", false,-1, 31,0);
        tracep->declQuad(c+1183,"soc_top_with_cache cpu ex_stage_i div div_i op_b_alt", false,-1, 32,0);
        tracep->declBus(c+1185,"soc_top_with_cache cpu ex_stage_i div div_i cnt_q", false,-1, 5,0);
        tracep->declBus(c+213,"soc_top_with_cache cpu ex_stage_i div div_i cnt_d", false,-1, 5,0);
        tracep->declBus(c+214,"soc_top_with_cache cpu ex_stage_i div div_i cnt_d_dummy", false,-1, 5,0);
        tracep->declBit(c+1186,"soc_top_with_cache cpu ex_stage_i div div_i cnt_q_is_zero", false,-1);
        tracep->declBit(c+215,"soc_top_with_cache cpu ex_stage_i div div_i init_dummy_cnt", false,-1);
        tracep->declBit(c+216,"soc_top_with_cache cpu ex_stage_i div div_i remainder_en", false,-1);
        tracep->declBit(c+217,"soc_top_with_cache cpu ex_stage_i div div_i divisor_en", false,-1);
        tracep->declBit(c+218,"soc_top_with_cache cpu ex_stage_i div div_i quotient_en", false,-1);
        tracep->declBit(c+1187,"soc_top_with_cache cpu ex_stage_i div div_i comp_out", false,-1);
        tracep->declBit(c+604,"soc_top_with_cache cpu ex_stage_i div div_i init_remainder_pos", false,-1);
        tracep->declBit(c+219,"soc_top_with_cache cpu ex_stage_i div div_i init_en", false,-1);
        tracep->declBus(c+220,"soc_top_with_cache cpu ex_stage_i div div_i next_state", false,-1, 1,0);
        tracep->declBus(c+1188,"soc_top_with_cache cpu ex_stage_i div div_i state", false,-1, 1,0);
        tracep->declBit(c+1189,"soc_top_with_cache cpu ex_stage_i div div_i div_signed", false,-1);
        tracep->declBit(c+1190,"soc_top_with_cache cpu ex_stage_i div div_i div_rem", false,-1);
        tracep->declBit(c+1191,"soc_top_with_cache cpu ex_stage_i div div_i op_b_is_neg", false,-1);
        tracep->declBit(c+1192,"soc_top_with_cache cpu ex_stage_i div div_i op_b_is_zero", false,-1);
        tracep->declBit(c+17,"soc_top_with_cache cpu ex_stage_i mul mult_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu ex_stage_i mul mult_i rst_n", false,-1);
        tracep->declBit(c+1147,"soc_top_with_cache cpu ex_stage_i mul mult_i valid_i", false,-1);
        tracep->declBus(c+1193,"soc_top_with_cache cpu ex_stage_i mul mult_i operator_i", false,-1, 0,0);
        tracep->declBus(c+1194,"soc_top_with_cache cpu ex_stage_i mul mult_i signed_mode_i", false,-1, 1,0);
        tracep->declBus(c+1174,"soc_top_with_cache cpu ex_stage_i mul mult_i op_a_i", false,-1, 31,0);
        tracep->declBus(c+1153,"soc_top_with_cache cpu ex_stage_i mul mult_i op_b_i", false,-1, 31,0);
        tracep->declBus(c+204,"soc_top_with_cache cpu ex_stage_i mul mult_i result_o", false,-1, 31,0);
        tracep->declBit(c+594,"soc_top_with_cache cpu ex_stage_i mul mult_i halt_i", false,-1);
        tracep->declBit(c+595,"soc_top_with_cache cpu ex_stage_i mul mult_i kill_i", false,-1);
        tracep->declBit(c+199,"soc_top_with_cache cpu ex_stage_i mul mult_i ready_o", false,-1);
        tracep->declBit(c+200,"soc_top_with_cache cpu ex_stage_i mul mult_i valid_o", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu ex_stage_i mul mult_i ready_i", false,-1);
        tracep->declBus(c+605,"soc_top_with_cache cpu ex_stage_i mul mult_i op_a", false,-1, 31,0);
        tracep->declBus(c+606,"soc_top_with_cache cpu ex_stage_i mul mult_i op_b", false,-1, 31,0);
        tracep->declQuad(c+607,"soc_top_with_cache cpu ex_stage_i mul mult_i int_result", false,-1, 33,0);
        tracep->declBit(c+221,"soc_top_with_cache cpu ex_stage_i mul mult_i mulh_shift", false,-1);
        tracep->declBus(c+1195,"soc_top_with_cache cpu ex_stage_i mul mult_i mulh_state", false,-1, 1,0);
        tracep->declBus(c+222,"soc_top_with_cache cpu ex_stage_i mul mult_i mulh_state_next", false,-1, 1,0);
        tracep->declBus(c+1196,"soc_top_with_cache cpu ex_stage_i mul mult_i mulh_al", false,-1, 16,0);
        tracep->declBus(c+1197,"soc_top_with_cache cpu ex_stage_i mul mult_i mulh_bl", false,-1, 16,0);
        tracep->declBus(c+1198,"soc_top_with_cache cpu ex_stage_i mul mult_i mulh_ah", false,-1, 16,0);
        tracep->declBus(c+1199,"soc_top_with_cache cpu ex_stage_i mul mult_i mulh_bh", false,-1, 16,0);
        tracep->declBus(c+223,"soc_top_with_cache cpu ex_stage_i mul mult_i mulh_a", false,-1, 16,0);
        tracep->declBus(c+224,"soc_top_with_cache cpu ex_stage_i mul mult_i mulh_b", false,-1, 16,0);
        tracep->declQuad(c+1200,"soc_top_with_cache cpu ex_stage_i mul mult_i mulh_acc", false,-1, 32,0);
        tracep->declQuad(c+225,"soc_top_with_cache cpu ex_stage_i mul mult_i mulh_acc_next", false,-1, 32,0);
        tracep->declQuad(c+227,"soc_top_with_cache cpu ex_stage_i mul mult_i mulh_acc_res", false,-1, 32,0);
        tracep->declQuad(c+229,"soc_top_with_cache cpu ex_stage_i mul mult_i result", false,-1, 33,0);
        tracep->declQuad(c+231,"soc_top_with_cache cpu ex_stage_i mul mult_i result_shifted", false,-1, 33,0);
        tracep->declBus(c+1762,"soc_top_with_cache cpu load_store_unit_i A_EXT", false,-1, 1,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu load_store_unit_i X_EXT", false,-1);
        tracep->declBus(c+1693,"soc_top_with_cache cpu load_store_unit_i X_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1686,"soc_top_with_cache cpu load_store_unit_i PMA_NUM_REGIONS", false,-1, 31,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu load_store_unit_i PMA_CFG(-1)", false,-1, 67,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu load_store_unit_i PMA_CFG(0)", false,-1, 67,0);
        tracep->declBus(c+1685,"soc_top_with_cache cpu load_store_unit_i DBG_NUM_TRIGGERS", false,-1, 31,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu load_store_unit_i DEBUG", false,-1);
        tracep->declBus(c+1683,"soc_top_with_cache cpu load_store_unit_i DM_REGION_START", false,-1, 31,0);
        tracep->declBus(c+1684,"soc_top_with_cache cpu load_store_unit_i DM_REGION_END", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu load_store_unit_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu load_store_unit_i rst_n", false,-1);
        tracep->declArray(c+543,"soc_top_with_cache cpu load_store_unit_i ctrl_fsm_i", false,-1, 200,0);
        tracep->declArray(c+1027,"soc_top_with_cache cpu load_store_unit_i id_ex_pipe_i", false,-1, 352,0);
        tracep->declBit(c+20,"soc_top_with_cache cpu load_store_unit_i busy_o", false,-1);
        tracep->declBit(c+1025,"soc_top_with_cache cpu load_store_unit_i bus_busy_o", false,-1);
        tracep->declBit(c+1026,"soc_top_with_cache cpu load_store_unit_i interruptible_o", false,-1);
        tracep->declBus(c+60,"soc_top_with_cache cpu load_store_unit_i trigger_match_0_i", false,-1, 31,0);
        tracep->declBit(c+34,"soc_top_with_cache cpu load_store_unit_i lsu_split_0_o", false,-1);
        tracep->declBit(c+1069,"soc_top_with_cache cpu load_store_unit_i lsu_first_op_0_o", false,-1);
        tracep->declBit(c+35,"soc_top_with_cache cpu load_store_unit_i lsu_last_op_0_o", false,-1);
        tracep->declBus(c+1712,"soc_top_with_cache cpu load_store_unit_i lsu_atomic_0_o", false,-1, 1,0);
        tracep->declBus(c+45,"soc_top_with_cache cpu load_store_unit_i lsu_addr_o", false,-1, 31,0);
        tracep->declBit(c+46,"soc_top_with_cache cpu load_store_unit_i lsu_we_o", false,-1);
        tracep->declBus(c+47,"soc_top_with_cache cpu load_store_unit_i lsu_be_o", false,-1, 3,0);
        tracep->declBus(c+40,"soc_top_with_cache cpu load_store_unit_i lsu_err_1_o", false,-1, 1,0);
        tracep->declBus(c+39,"soc_top_with_cache cpu load_store_unit_i lsu_rdata_1_o", false,-1, 31,0);
        tracep->declBus(c+36,"soc_top_with_cache cpu load_store_unit_i lsu_mpu_status_1_o", false,-1, 1,0);
        tracep->declBus(c+37,"soc_top_with_cache cpu load_store_unit_i lsu_wpt_match_1_o", false,-1, 31,0);
        tracep->declBus(c+38,"soc_top_with_cache cpu load_store_unit_i lsu_align_status_1_o", false,-1, 1,0);
        tracep->declBus(c+1712,"soc_top_with_cache cpu load_store_unit_i lsu_atomic_1_o", false,-1, 1,0);
        tracep->declBus(c+1709,"soc_top_with_cache cpu load_store_unit_i priv_lvl_lsu_i", false,-1, 1,0);
        tracep->declBit(c+42,"soc_top_with_cache cpu load_store_unit_i valid_0_i", false,-1);
        tracep->declBit(c+43,"soc_top_with_cache cpu load_store_unit_i ready_0_o", false,-1);
        tracep->declBit(c+551,"soc_top_with_cache cpu load_store_unit_i valid_0_o", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu load_store_unit_i ready_0_i", false,-1);
        tracep->declBit(c+1070,"soc_top_with_cache cpu load_store_unit_i valid_1_i", false,-1);
        tracep->declBit(c+552,"soc_top_with_cache cpu load_store_unit_i ready_1_o", false,-1);
        tracep->declBit(c+44,"soc_top_with_cache cpu load_store_unit_i valid_1_o", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu load_store_unit_i ready_1_i", false,-1);
        tracep->declBus(c+1739,"soc_top_with_cache cpu load_store_unit_i DEPTH", false,-1, 31,0);
        tracep->declArray(c+233,"soc_top_with_cache cpu load_store_unit_i trans", false,-1, 76,0);
        tracep->declBit(c+236,"soc_top_with_cache cpu load_store_unit_i trans_valid", false,-1);
        tracep->declBit(c+237,"soc_top_with_cache cpu load_store_unit_i trans_ready", false,-1);
        tracep->declBit(c+236,"soc_top_with_cache cpu load_store_unit_i wpt_trans_valid", false,-1);
        tracep->declBit(c+237,"soc_top_with_cache cpu load_store_unit_i wpt_trans_ready", false,-1);
        tracep->declBit(c+1202,"soc_top_with_cache cpu load_store_unit_i wpt_trans_pushpop", false,-1);
        tracep->declArray(c+238,"soc_top_with_cache cpu load_store_unit_i wpt_trans", false,-1, 80,0);
        tracep->declBit(c+241,"soc_top_with_cache cpu load_store_unit_i alcheck_trans_valid", false,-1);
        tracep->declBit(c+242,"soc_top_with_cache cpu load_store_unit_i alcheck_trans_ready", false,-1);
        tracep->declArray(c+243,"soc_top_with_cache cpu load_store_unit_i alcheck_trans", false,-1, 80,0);
        tracep->declBit(c+246,"soc_top_with_cache cpu load_store_unit_i mpu_trans_valid", false,-1);
        tracep->declBit(c+247,"soc_top_with_cache cpu load_store_unit_i mpu_trans_ready", false,-1);
        tracep->declBit(c+1202,"soc_top_with_cache cpu load_store_unit_i mpu_trans_pushpop", false,-1);
        tracep->declBit(c+248,"soc_top_with_cache cpu load_store_unit_i mpu_trans_atomic", false,-1);
        tracep->declArray(c+238,"soc_top_with_cache cpu load_store_unit_i mpu_trans", false,-1, 80,0);
        tracep->declBit(c+249,"soc_top_with_cache cpu load_store_unit_i resp_valid", false,-1);
        tracep->declBus(c+250,"soc_top_with_cache cpu load_store_unit_i resp_rdata", false,-1, 31,0);
        tracep->declArray(c+251,"soc_top_with_cache cpu load_store_unit_i resp", false,-1, 70,0);
        tracep->declBit(c+249,"soc_top_with_cache cpu load_store_unit_i wpt_resp_valid", false,-1);
        tracep->declBus(c+250,"soc_top_with_cache cpu load_store_unit_i wpt_resp_rdata", false,-1, 31,0);
        tracep->declArray(c+251,"soc_top_with_cache cpu load_store_unit_i wpt_resp", false,-1, 70,0);
        tracep->declBit(c+1665,"soc_top_with_cache cpu load_store_unit_i alcheck_resp_valid", false,-1);
        tracep->declArray(c+254,"soc_top_with_cache cpu load_store_unit_i alcheck_resp", false,-1, 70,0);
        tracep->declBit(c+1666,"soc_top_with_cache cpu load_store_unit_i mpu_resp_valid", false,-1);
        tracep->declArray(c+257,"soc_top_with_cache cpu load_store_unit_i mpu_resp", false,-1, 70,0);
        tracep->declBit(c+260,"soc_top_with_cache cpu load_store_unit_i buffer_trans_valid", false,-1);
        tracep->declBit(c+261,"soc_top_with_cache cpu load_store_unit_i buffer_trans_ready", false,-1);
        tracep->declArray(c+243,"soc_top_with_cache cpu load_store_unit_i buffer_trans", false,-1, 80,0);
        tracep->declBit(c+262,"soc_top_with_cache cpu load_store_unit_i filter_trans_valid", false,-1);
        tracep->declBit(c+263,"soc_top_with_cache cpu load_store_unit_i filter_trans_ready", false,-1);
        tracep->declArray(c+243,"soc_top_with_cache cpu load_store_unit_i filter_trans", false,-1, 80,0);
        tracep->declBit(c+1667,"soc_top_with_cache cpu load_store_unit_i filter_resp_valid", false,-1);
        tracep->declQuad(c+1668,"soc_top_with_cache cpu load_store_unit_i filter_resp", false,-1, 34,0);
        tracep->declBit(c+5,"soc_top_with_cache cpu load_store_unit_i bus_trans_valid", false,-1);
        tracep->declBit(c+670,"soc_top_with_cache cpu load_store_unit_i bus_trans_ready", false,-1);
        tracep->declArray(c+264,"soc_top_with_cache cpu load_store_unit_i bus_trans", false,-1, 80,0);
        tracep->declBit(c+671,"soc_top_with_cache cpu load_store_unit_i bus_resp_valid", false,-1);
        tracep->declQuad(c+690,"soc_top_with_cache cpu load_store_unit_i bus_resp", false,-1, 34,0);
        tracep->declBus(c+1203,"soc_top_with_cache cpu load_store_unit_i cnt_q", false,-1, 1,0);
        tracep->declBus(c+267,"soc_top_with_cache cpu load_store_unit_i next_cnt", false,-1, 1,0);
        tracep->declBit(c+268,"soc_top_with_cache cpu load_store_unit_i count_up", false,-1);
        tracep->declBit(c+249,"soc_top_with_cache cpu load_store_unit_i count_down", false,-1);
        tracep->declBit(c+269,"soc_top_with_cache cpu load_store_unit_i cnt_is_one_next", false,-1);
        tracep->declBit(c+270,"soc_top_with_cache cpu load_store_unit_i ctrl_update", false,-1);
        tracep->declBus(c+1204,"soc_top_with_cache cpu load_store_unit_i lsu_size_q", false,-1, 1,0);
        tracep->declBit(c+1205,"soc_top_with_cache cpu load_store_unit_i lsu_sext_q", false,-1);
        tracep->declBit(c+1206,"soc_top_with_cache cpu load_store_unit_i lsu_we_q", false,-1);
        tracep->declBus(c+1207,"soc_top_with_cache cpu load_store_unit_i rdata_offset_q", false,-1, 1,0);
        tracep->declBit(c+1208,"soc_top_with_cache cpu load_store_unit_i last_q", false,-1);
        tracep->declBus(c+47,"soc_top_with_cache cpu load_store_unit_i be", false,-1, 3,0);
        tracep->declBus(c+271,"soc_top_with_cache cpu load_store_unit_i wdata", false,-1, 31,0);
        tracep->declBit(c+1209,"soc_top_with_cache cpu load_store_unit_i split_q", false,-1);
        tracep->declBit(c+272,"soc_top_with_cache cpu load_store_unit_i nonsplit_misaligned_halfword", false,-1);
        tracep->declBit(c+273,"soc_top_with_cache cpu load_store_unit_i misaligned_access", false,-1);
        tracep->declBit(c+609,"soc_top_with_cache cpu load_store_unit_i modified_access", false,-1);
        tracep->declBit(c+610,"soc_top_with_cache cpu load_store_unit_i filter_resp_busy", false,-1);
        tracep->declBus(c+1210,"soc_top_with_cache cpu load_store_unit_i rdata_q", false,-1, 31,0);
        tracep->declBit(c+274,"soc_top_with_cache cpu load_store_unit_i done_0", false,-1);
        tracep->declBit(c+1211,"soc_top_with_cache cpu load_store_unit_i trans_valid_q", false,-1);
        tracep->declBit(c+1763,"soc_top_with_cache cpu load_store_unit_i xif_req", false,-1);
        tracep->declBit(c+275,"soc_top_with_cache cpu load_store_unit_i xif_mpu_err", false,-1);
        tracep->declBus(c+60,"soc_top_with_cache cpu load_store_unit_i xif_wpt_match", false,-1, 31,0);
        tracep->declBit(c+552,"soc_top_with_cache cpu load_store_unit_i xif_ready_1", false,-1);
        tracep->declBit(c+1212,"soc_top_with_cache cpu load_store_unit_i xif_res_q", false,-1);
        tracep->declBus(c+1213,"soc_top_with_cache cpu load_store_unit_i xif_id_q", false,-1, 3,0);
        tracep->declBit(c+276,"soc_top_with_cache cpu load_store_unit_i align_check_en", false,-1);
        tracep->declBit(c+1764,"soc_top_with_cache cpu load_store_unit_i consumer_resp_wait", false,-1);
        tracep->declBus(c+39,"soc_top_with_cache cpu load_store_unit_i rdata_ext", false,-1, 31,0);
        tracep->declQuad(c+611,"soc_top_with_cache cpu load_store_unit_i rdata_full", false,-1, 63,0);
        tracep->declQuad(c+277,"soc_top_with_cache cpu load_store_unit_i rdata_aligned", false,-1, 63,0);
        tracep->declBit(c+1214,"soc_top_with_cache cpu load_store_unit_i rdata_is_split", false,-1);
        tracep->declBit(c+1690,"soc_top_with_cache cpu load_store_unit_i mpu_i IF_STAGE", false,-1);
        tracep->declBus(c+1765,"soc_top_with_cache cpu load_store_unit_i mpu_i A_EXT", false,-1, 1,0);
        tracep->declBus(c+1686,"soc_top_with_cache cpu load_store_unit_i mpu_i PMA_NUM_REGIONS", false,-1, 31,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu load_store_unit_i mpu_i PMA_CFG(-1)", false,-1, 67,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu load_store_unit_i mpu_i PMA_CFG(0)", false,-1, 67,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu load_store_unit_i mpu_i DEBUG", false,-1);
        tracep->declBus(c+1683,"soc_top_with_cache cpu load_store_unit_i mpu_i DM_REGION_START", false,-1, 31,0);
        tracep->declBus(c+1684,"soc_top_with_cache cpu load_store_unit_i mpu_i DM_REGION_END", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu load_store_unit_i mpu_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu load_store_unit_i mpu_i rst_n", false,-1);
        tracep->declBit(c+248,"soc_top_with_cache cpu load_store_unit_i mpu_i atomic_access_i", false,-1);
        tracep->declBit(c+273,"soc_top_with_cache cpu load_store_unit_i mpu_i misaligned_access_i", false,-1);
        tracep->declBit(c+609,"soc_top_with_cache cpu load_store_unit_i mpu_i modified_access_i", false,-1);
        tracep->declBit(c+242,"soc_top_with_cache cpu load_store_unit_i mpu_i bus_trans_ready_i", false,-1);
        tracep->declBit(c+241,"soc_top_with_cache cpu load_store_unit_i mpu_i bus_trans_valid_o", false,-1);
        tracep->declArray(c+243,"soc_top_with_cache cpu load_store_unit_i mpu_i bus_trans_o", false,-1, 80,0);
        tracep->declBit(c+1665,"soc_top_with_cache cpu load_store_unit_i mpu_i bus_resp_valid_i", false,-1);
        tracep->declArray(c+254,"soc_top_with_cache cpu load_store_unit_i mpu_i bus_resp_i", false,-1, 70,0);
        tracep->declBit(c+246,"soc_top_with_cache cpu load_store_unit_i mpu_i core_trans_valid_i", false,-1);
        tracep->declBit(c+1202,"soc_top_with_cache cpu load_store_unit_i mpu_i core_trans_pushpop_i", false,-1);
        tracep->declBit(c+247,"soc_top_with_cache cpu load_store_unit_i mpu_i core_trans_ready_o", false,-1);
        tracep->declArray(c+238,"soc_top_with_cache cpu load_store_unit_i mpu_i core_trans_i", false,-1, 80,0);
        tracep->declBit(c+1666,"soc_top_with_cache cpu load_store_unit_i mpu_i core_resp_valid_o", false,-1);
        tracep->declArray(c+257,"soc_top_with_cache cpu load_store_unit_i mpu_i core_resp_o", false,-1, 70,0);
        tracep->declBit(c+269,"soc_top_with_cache cpu load_store_unit_i mpu_i core_one_txn_pend_n", false,-1);
        tracep->declBit(c+1764,"soc_top_with_cache cpu load_store_unit_i mpu_i core_mpu_err_wait_i", false,-1);
        tracep->declBit(c+275,"soc_top_with_cache cpu load_store_unit_i mpu_i core_mpu_err_o", false,-1);
        tracep->declBit(c+275,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_err", false,-1);
        tracep->declBit(c+275,"soc_top_with_cache cpu load_store_unit_i mpu_i mpu_err", false,-1);
        tracep->declBit(c+279,"soc_top_with_cache cpu load_store_unit_i mpu_i mpu_block_core", false,-1);
        tracep->declBit(c+280,"soc_top_with_cache cpu load_store_unit_i mpu_i mpu_block_bus", false,-1);
        tracep->declBit(c+281,"soc_top_with_cache cpu load_store_unit_i mpu_i mpu_err_trans_valid", false,-1);
        tracep->declBit(c+282,"soc_top_with_cache cpu load_store_unit_i mpu_i mpu_err_trans_ready", false,-1);
        tracep->declBus(c+283,"soc_top_with_cache cpu load_store_unit_i mpu_i mpu_status", false,-1, 1,0);
        tracep->declBus(c+1215,"soc_top_with_cache cpu load_store_unit_i mpu_i state_q", false,-1, 2,0);
        tracep->declBus(c+284,"soc_top_with_cache cpu load_store_unit_i mpu_i state_n", false,-1, 2,0);
        tracep->declBit(c+285,"soc_top_with_cache cpu load_store_unit_i mpu_i bus_trans_cacheable", false,-1);
        tracep->declBit(c+286,"soc_top_with_cache cpu load_store_unit_i mpu_i bus_trans_bufferable", false,-1);
        tracep->declBit(c+46,"soc_top_with_cache cpu load_store_unit_i mpu_i core_trans_we", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu load_store_unit_i mpu_i instr_fetch_access", false,-1);
        tracep->declBit(c+287,"soc_top_with_cache cpu load_store_unit_i mpu_i load_access", false,-1);
        tracep->declBit(c+288,"soc_top_with_cache cpu load_store_unit_i mpu_i core_trans_debug_region", false,-1);
        tracep->declBus(c+1719,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i A_EXT", false,-1, 1,0);
        tracep->declBus(c+1686,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i PMA_NUM_REGIONS", false,-1, 31,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i PMA_CFG(-1)", false,-1, 67,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i PMA_CFG(0)", false,-1, 67,0);
        tracep->declBus(c+45,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i trans_addr_i", false,-1, 31,0);
        tracep->declBit(c+288,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i trans_debug_region_i", false,-1);
        tracep->declBit(c+1202,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i trans_pushpop_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i instr_fetch_access_i", false,-1);
        tracep->declBit(c+248,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i atomic_access_i", false,-1);
        tracep->declBit(c+273,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i misaligned_access_i", false,-1);
        tracep->declBit(c+609,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i modified_access_i", false,-1);
        tracep->declBit(c+287,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i load_access_i", false,-1);
        tracep->declBit(c+275,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i pma_err_o", false,-1);
        tracep->declBit(c+286,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i pma_bufferable_o", false,-1);
        tracep->declBit(c+285,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i pma_cacheable_o", false,-1);
        tracep->declArray(c+1720,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i PMA_DBG", false,-1, 67,0);
        tracep->declArray(c+289,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i pma_cfg", false,-1, 67,0);
        tracep->declBus(c+292,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i word_addr", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu load_store_unit_i mpu_i pma_i pma_cfg_atomic", false,-1);
        tracep->declBit(c+1690,"soc_top_with_cache cpu load_store_unit_i align_check_i IF_STAGE", false,-1);
        tracep->declBit(c+17,"soc_top_with_cache cpu load_store_unit_i align_check_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu load_store_unit_i align_check_i rst_n", false,-1);
        tracep->declBit(c+276,"soc_top_with_cache cpu load_store_unit_i align_check_i align_check_en_i", false,-1);
        tracep->declBit(c+273,"soc_top_with_cache cpu load_store_unit_i align_check_i misaligned_access_i", false,-1);
        tracep->declBit(c+263,"soc_top_with_cache cpu load_store_unit_i align_check_i bus_trans_ready_i", false,-1);
        tracep->declBit(c+262,"soc_top_with_cache cpu load_store_unit_i align_check_i bus_trans_valid_o", false,-1);
        tracep->declArray(c+243,"soc_top_with_cache cpu load_store_unit_i align_check_i bus_trans_o", false,-1, 80,0);
        tracep->declBit(c+1667,"soc_top_with_cache cpu load_store_unit_i align_check_i bus_resp_valid_i", false,-1);
        tracep->declQuad(c+1668,"soc_top_with_cache cpu load_store_unit_i align_check_i bus_resp_i", false,-1, 34,0);
        tracep->declBit(c+241,"soc_top_with_cache cpu load_store_unit_i align_check_i core_trans_valid_i", false,-1);
        tracep->declBit(c+242,"soc_top_with_cache cpu load_store_unit_i align_check_i core_trans_ready_o", false,-1);
        tracep->declArray(c+243,"soc_top_with_cache cpu load_store_unit_i align_check_i core_trans_i", false,-1, 80,0);
        tracep->declBit(c+1665,"soc_top_with_cache cpu load_store_unit_i align_check_i core_resp_valid_o", false,-1);
        tracep->declArray(c+254,"soc_top_with_cache cpu load_store_unit_i align_check_i core_resp_o", false,-1, 70,0);
        tracep->declBit(c+269,"soc_top_with_cache cpu load_store_unit_i align_check_i core_one_txn_pend_n", false,-1);
        tracep->declBit(c+1764,"soc_top_with_cache cpu load_store_unit_i align_check_i core_align_err_wait_i", false,-1);
        tracep->declBit(c+293,"soc_top_with_cache cpu load_store_unit_i align_check_i core_align_err_o", false,-1);
        tracep->declBit(c+294,"soc_top_with_cache cpu load_store_unit_i align_check_i align_block_core", false,-1);
        tracep->declBit(c+295,"soc_top_with_cache cpu load_store_unit_i align_check_i align_block_bus", false,-1);
        tracep->declBit(c+296,"soc_top_with_cache cpu load_store_unit_i align_check_i align_trans_valid", false,-1);
        tracep->declBit(c+297,"soc_top_with_cache cpu load_store_unit_i align_check_i align_trans_ready", false,-1);
        tracep->declBit(c+293,"soc_top_with_cache cpu load_store_unit_i align_check_i align_err", false,-1);
        tracep->declBit(c+298,"soc_top_with_cache cpu load_store_unit_i align_check_i core_trans_we", false,-1);
        tracep->declBus(c+299,"soc_top_with_cache cpu load_store_unit_i align_check_i align_status", false,-1, 1,0);
        tracep->declBus(c+1216,"soc_top_with_cache cpu load_store_unit_i align_check_i state_q", false,-1, 2,0);
        tracep->declBus(c+300,"soc_top_with_cache cpu load_store_unit_i align_check_i state_n", false,-1, 2,0);
        tracep->declBus(c+1692,"soc_top_with_cache cpu load_store_unit_i response_filter_i DEPTH", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu load_store_unit_i response_filter_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu load_store_unit_i response_filter_i rst_n", false,-1);
        tracep->declBit(c+262,"soc_top_with_cache cpu load_store_unit_i response_filter_i valid_i", false,-1);
        tracep->declArray(c+243,"soc_top_with_cache cpu load_store_unit_i response_filter_i trans_i", false,-1, 80,0);
        tracep->declBit(c+261,"soc_top_with_cache cpu load_store_unit_i response_filter_i ready_i", false,-1);
        tracep->declBit(c+671,"soc_top_with_cache cpu load_store_unit_i response_filter_i resp_valid_i", false,-1);
        tracep->declQuad(c+690,"soc_top_with_cache cpu load_store_unit_i response_filter_i resp_i", false,-1, 34,0);
        tracep->declBit(c+260,"soc_top_with_cache cpu load_store_unit_i response_filter_i valid_o", false,-1);
        tracep->declArray(c+243,"soc_top_with_cache cpu load_store_unit_i response_filter_i trans_o", false,-1, 80,0);
        tracep->declBit(c+263,"soc_top_with_cache cpu load_store_unit_i response_filter_i ready_o", false,-1);
        tracep->declBit(c+610,"soc_top_with_cache cpu load_store_unit_i response_filter_i busy_o", false,-1);
        tracep->declBit(c+1025,"soc_top_with_cache cpu load_store_unit_i response_filter_i bus_busy_o", false,-1);
        tracep->declBit(c+1667,"soc_top_with_cache cpu load_store_unit_i response_filter_i resp_valid_o", false,-1);
        tracep->declQuad(c+1668,"soc_top_with_cache cpu load_store_unit_i response_filter_i resp_o", false,-1, 34,0);
        tracep->declBus(c+1739,"soc_top_with_cache cpu load_store_unit_i response_filter_i CNT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1217,"soc_top_with_cache cpu load_store_unit_i response_filter_i bus_cnt_q", false,-1, 1,0);
        tracep->declBus(c+301,"soc_top_with_cache cpu load_store_unit_i response_filter_i bus_next_cnt", false,-1, 1,0);
        tracep->declBit(c+302,"soc_top_with_cache cpu load_store_unit_i response_filter_i bus_count_up", false,-1);
        tracep->declBit(c+671,"soc_top_with_cache cpu load_store_unit_i response_filter_i bus_count_down", false,-1);
        tracep->declBus(c+1218,"soc_top_with_cache cpu load_store_unit_i response_filter_i core_cnt_q", false,-1, 1,0);
        tracep->declBus(c+303,"soc_top_with_cache cpu load_store_unit_i response_filter_i core_next_cnt", false,-1, 1,0);
        tracep->declBit(c+304,"soc_top_with_cache cpu load_store_unit_i response_filter_i core_count_up", false,-1);
        tracep->declBit(c+1667,"soc_top_with_cache cpu load_store_unit_i response_filter_i core_count_down", false,-1);
        tracep->declBit(c+304,"soc_top_with_cache cpu load_store_unit_i response_filter_i core_trans_accepted", false,-1);
        tracep->declBit(c+302,"soc_top_with_cache cpu load_store_unit_i response_filter_i bus_trans_accepted", false,-1);
        tracep->declBit(c+1219,"soc_top_with_cache cpu load_store_unit_i response_filter_i bus_resp_is_bufferable", false,-1);
        tracep->declBit(c+1220,"soc_top_with_cache cpu load_store_unit_i response_filter_i core_resp_is_bufferable", false,-1);
        tracep->declBus(c+1221,"soc_top_with_cache cpu load_store_unit_i response_filter_i outstanding_q", false,-1, 5,0);
        tracep->declBus(c+305,"soc_top_with_cache cpu load_store_unit_i response_filter_i outstanding_next", false,-1, 5,0);
        tracep->declBus(c+1686,"soc_top_with_cache cpu load_store_unit_i write_buffer_i PMA_NUM_REGIONS", false,-1, 31,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu load_store_unit_i write_buffer_i PMA_CFG(-1)", false,-1, 67,0);
        tracep->declArray(c+1687,"soc_top_with_cache cpu load_store_unit_i write_buffer_i PMA_CFG(0)", false,-1, 67,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu load_store_unit_i write_buffer_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu load_store_unit_i write_buffer_i rst_n", false,-1);
        tracep->declBit(c+260,"soc_top_with_cache cpu load_store_unit_i write_buffer_i valid_i", false,-1);
        tracep->declArray(c+243,"soc_top_with_cache cpu load_store_unit_i write_buffer_i trans_i", false,-1, 80,0);
        tracep->declBit(c+670,"soc_top_with_cache cpu load_store_unit_i write_buffer_i ready_i", false,-1);
        tracep->declBit(c+5,"soc_top_with_cache cpu load_store_unit_i write_buffer_i valid_o", false,-1);
        tracep->declArray(c+264,"soc_top_with_cache cpu load_store_unit_i write_buffer_i trans_o", false,-1, 80,0);
        tracep->declBit(c+261,"soc_top_with_cache cpu load_store_unit_i write_buffer_i ready_o", false,-1);
        tracep->declBit(c+1222,"soc_top_with_cache cpu load_store_unit_i write_buffer_i state", false,-1);
        tracep->declBit(c+306,"soc_top_with_cache cpu load_store_unit_i write_buffer_i next_state", false,-1);
        tracep->declArray(c+1223,"soc_top_with_cache cpu load_store_unit_i write_buffer_i trans_q", false,-1, 80,0);
        tracep->declBit(c+307,"soc_top_with_cache cpu load_store_unit_i write_buffer_i push", false,-1);
        tracep->declBit(c+308,"soc_top_with_cache cpu load_store_unit_i write_buffer_i bufferable", false,-1);
        tracep->declBit(c+17,"soc_top_with_cache cpu load_store_unit_i data_obi_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu load_store_unit_i data_obi_i rst_n", false,-1);
        tracep->declBit(c+5,"soc_top_with_cache cpu load_store_unit_i data_obi_i trans_valid_i", false,-1);
        tracep->declBit(c+670,"soc_top_with_cache cpu load_store_unit_i data_obi_i trans_ready_o", false,-1);
        tracep->declArray(c+264,"soc_top_with_cache cpu load_store_unit_i data_obi_i trans_i", false,-1, 80,0);
        tracep->declBit(c+671,"soc_top_with_cache cpu load_store_unit_i data_obi_i resp_valid_o", false,-1);
        tracep->declQuad(c+690,"soc_top_with_cache cpu load_store_unit_i data_obi_i resp_o", false,-1, 34,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i rst_n", false,-1);
        tracep->declBus(c+60,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i trigger_match_i", false,-1, 31,0);
        tracep->declBit(c+247,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i mpu_trans_ready_i", false,-1);
        tracep->declBit(c+246,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i mpu_trans_valid_o", false,-1);
        tracep->declBit(c+1202,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i mpu_trans_pushpop_o", false,-1);
        tracep->declArray(c+238,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i mpu_trans_o", false,-1, 80,0);
        tracep->declBit(c+1666,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i mpu_resp_valid_i", false,-1);
        tracep->declArray(c+257,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i mpu_resp_i", false,-1, 70,0);
        tracep->declBit(c+236,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i core_trans_valid_i", false,-1);
        tracep->declBit(c+237,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i core_trans_ready_o", false,-1);
        tracep->declBit(c+1202,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i core_trans_pushpop_i", false,-1);
        tracep->declArray(c+238,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i core_trans_i", false,-1, 80,0);
        tracep->declBit(c+249,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i core_resp_valid_o", false,-1);
        tracep->declArray(c+251,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i core_resp_o", false,-1, 70,0);
        tracep->declBit(c+269,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i core_one_txn_pend_n", false,-1);
        tracep->declBit(c+1764,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i core_wpt_wait_i", false,-1);
        tracep->declBus(c+60,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i core_wpt_match_o", false,-1, 31,0);
        tracep->declBit(c+1226,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i wpt_block_core", false,-1);
        tracep->declBit(c+309,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i wpt_block_bus", false,-1);
        tracep->declBit(c+1227,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i wpt_trans_valid", false,-1);
        tracep->declBit(c+310,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i wpt_trans_ready", false,-1);
        tracep->declBus(c+1228,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i wpt_match", false,-1, 31,0);
        tracep->declBus(c+1229,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i state_q", false,-1, 1,0);
        tracep->declBus(c+311,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i state_n", false,-1, 1,0);
        tracep->declBus(c+312,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i wpt_match_n", false,-1, 31,0);
        tracep->declBus(c+1230,"soc_top_with_cache cpu load_store_unit_i gen_wpt wpt_i wpt_match_q", false,-1, 31,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu wb_stage_i DEBUG", false,-1);
        tracep->declBit(c+17,"soc_top_with_cache cpu wb_stage_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu wb_stage_i rst_n", false,-1);
        tracep->declArray(c+1039,"soc_top_with_cache cpu wb_stage_i ex_wb_pipe_i", false,-1, 247,0);
        tracep->declArray(c+543,"soc_top_with_cache cpu wb_stage_i ctrl_fsm_i", false,-1, 200,0);
        tracep->declBus(c+39,"soc_top_with_cache cpu wb_stage_i lsu_rdata_i", false,-1, 31,0);
        tracep->declBus(c+36,"soc_top_with_cache cpu wb_stage_i lsu_mpu_status_i", false,-1, 1,0);
        tracep->declBus(c+37,"soc_top_with_cache cpu wb_stage_i lsu_wpt_match_i", false,-1, 31,0);
        tracep->declBus(c+38,"soc_top_with_cache cpu wb_stage_i lsu_align_status_i", false,-1, 1,0);
        tracep->declBit(c+550,"soc_top_with_cache cpu wb_stage_i rf_we_wb_o", false,-1);
        tracep->declBus(c+1053,"soc_top_with_cache cpu wb_stage_i rf_waddr_wb_o", false,-1, 4,0);
        tracep->declBus(c+21,"soc_top_with_cache cpu wb_stage_i rf_wdata_wb_o", false,-1, 31,0);
        tracep->declBit(c+44,"soc_top_with_cache cpu wb_stage_i lsu_valid_i", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu wb_stage_i lsu_ready_o", false,-1);
        tracep->declBit(c+1070,"soc_top_with_cache cpu wb_stage_i lsu_valid_o", false,-1);
        tracep->declBit(c+552,"soc_top_with_cache cpu wb_stage_i lsu_ready_i", false,-1);
        tracep->declBit(c+553,"soc_top_with_cache cpu wb_stage_i data_stall_o", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu wb_stage_i wb_ready_o", false,-1);
        tracep->declBit(c+56,"soc_top_with_cache cpu wb_stage_i wb_valid_o", false,-1);
        tracep->declBus(c+48,"soc_top_with_cache cpu wb_stage_i wpt_match_wb_o", false,-1, 31,0);
        tracep->declBus(c+49,"soc_top_with_cache cpu wb_stage_i mpu_status_wb_o", false,-1, 1,0);
        tracep->declBus(c+50,"soc_top_with_cache cpu wb_stage_i align_status_wb_o", false,-1, 1,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu wb_stage_i clic_pa_i", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu wb_stage_i clic_pa_valid_i", false,-1);
        tracep->declBit(c+1054,"soc_top_with_cache cpu wb_stage_i last_op_o", false,-1);
        tracep->declBit(c+28,"soc_top_with_cache cpu wb_stage_i abort_op_o", false,-1);
        tracep->declBit(c+313,"soc_top_with_cache cpu wb_stage_i instr_valid", false,-1);
        tracep->declBit(c+56,"soc_top_with_cache cpu wb_stage_i wb_valid", false,-1);
        tracep->declBit(c+314,"soc_top_with_cache cpu wb_stage_i lsu_exception", false,-1);
        tracep->declBit(c+315,"soc_top_with_cache cpu wb_stage_i xif_waiting", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu wb_stage_i xif_exception", false,-1);
        tracep->declBus(c+1231,"soc_top_with_cache cpu wb_stage_i lsu_mpu_status_q", false,-1, 1,0);
        tracep->declBus(c+1232,"soc_top_with_cache cpu wb_stage_i lsu_wpt_match_q", false,-1, 31,0);
        tracep->declBus(c+1233,"soc_top_with_cache cpu wb_stage_i lsu_align_status_q", false,-1, 1,0);
        tracep->declBit(c+1234,"soc_top_with_cache cpu wb_stage_i lsu_valid_q", false,-1);
        tracep->declBus(c+49,"soc_top_with_cache cpu wb_stage_i lsu_mpu_status", false,-1, 1,0);
        tracep->declBus(c+48,"soc_top_with_cache cpu wb_stage_i lsu_wpt_match", false,-1, 31,0);
        tracep->declBus(c+50,"soc_top_with_cache cpu wb_stage_i lsu_align_status", false,-1, 1,0);
        tracep->declBit(c+316,"soc_top_with_cache cpu wb_stage_i lsu_valid", false,-1);
        tracep->declBit(c+1766,"soc_top_with_cache cpu cs_registers_i RV32", false,-1);
        tracep->declBus(c+1767,"soc_top_with_cache cpu cs_registers_i A_EXT", false,-1, 1,0);
        tracep->declBus(c+1768,"soc_top_with_cache cpu cs_registers_i M_EXT", false,-1, 1,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu cs_registers_i X_EXT", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i X_MISA", false,-1, 31,0);
        tracep->declBus(c+1696,"soc_top_with_cache cpu cs_registers_i X_ECS_XS", false,-1, 1,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu cs_registers_i ZC_EXT", false,-1);
        tracep->declBit(c+1690,"soc_top_with_cache cpu cs_registers_i CLIC", false,-1);
        tracep->declBus(c+1691,"soc_top_with_cache cpu cs_registers_i CLIC_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1697,"soc_top_with_cache cpu cs_registers_i NUM_MHPMCOUNTERS", false,-1, 31,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu cs_registers_i DEBUG", false,-1);
        tracep->declBus(c+1685,"soc_top_with_cache cpu cs_registers_i DBG_NUM_TRIGGERS", false,-1, 31,0);
        tracep->declBus(c+1706,"soc_top_with_cache cpu cs_registers_i MTVT_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i rst_n", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mhartid_i", false,-1, 31,0);
        tracep->declBus(c+1699,"soc_top_with_cache cpu cs_registers_i mimpid_patch_i", false,-1, 3,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mtvec_addr_i", false,-1, 31,0);
        tracep->declBit(c+57,"soc_top_with_cache cpu cs_registers_i csr_mtvec_init_i", false,-1);
        tracep->declBus(c+58,"soc_top_with_cache cpu cs_registers_i dcsr_o", false,-1, 31,0);
        tracep->declBus(c+1073,"soc_top_with_cache cpu cs_registers_i dpc_o", false,-1, 31,0);
        tracep->declBus(c+1063,"soc_top_with_cache cpu cs_registers_i jvt_addr_o", false,-1, 25,0);
        tracep->declBus(c+1064,"soc_top_with_cache cpu cs_registers_i jvt_mode_o", false,-1, 5,0);
        tracep->declBus(c+1065,"soc_top_with_cache cpu cs_registers_i mcause_o", false,-1, 31,0);
        tracep->declQuad(c+1017,"soc_top_with_cache cpu cs_registers_i mcycle_o", false,-1, 63,0);
        tracep->declBus(c+1072,"soc_top_with_cache cpu cs_registers_i mepc_o", false,-1, 31,0);
        tracep->declBus(c+1074,"soc_top_with_cache cpu cs_registers_i mie_o", false,-1, 31,0);
        tracep->declBus(c+1708,"soc_top_with_cache cpu cs_registers_i mintstatus_o", false,-1, 31,0);
        tracep->declBus(c+1704,"soc_top_with_cache cpu cs_registers_i mintthresh_th_o", false,-1, 7,0);
        tracep->declBus(c+1071,"soc_top_with_cache cpu cs_registers_i mstatus_o", false,-1, 31,0);
        tracep->declBus(c+1061,"soc_top_with_cache cpu cs_registers_i mtvec_addr_o", false,-1, 24,0);
        tracep->declBus(c+1062,"soc_top_with_cache cpu cs_registers_i mtvec_mode_o", false,-1, 1,0);
        tracep->declBus(c+1707,"soc_top_with_cache cpu cs_registers_i mtvt_addr_o", false,-1, 24,0);
        tracep->declBus(c+1711,"soc_top_with_cache cpu cs_registers_i priv_lvl_o", false,-1, 1,0);
        tracep->declBus(c+1710,"soc_top_with_cache cpu cs_registers_i priv_lvl_if_ctrl_o", false,-1, 2,0);
        tracep->declBus(c+1709,"soc_top_with_cache cpu cs_registers_i priv_lvl_lsu_o", false,-1, 1,0);
        tracep->declArray(c+1027,"soc_top_with_cache cpu cs_registers_i id_ex_pipe_i", false,-1, 352,0);
        tracep->declBit(c+67,"soc_top_with_cache cpu cs_registers_i csr_illegal_o", false,-1);
        tracep->declArray(c+1039,"soc_top_with_cache cpu cs_registers_i ex_wb_pipe_i", false,-1, 247,0);
        tracep->declArray(c+543,"soc_top_with_cache cpu cs_registers_i ctrl_fsm_i", false,-1, 200,0);
        tracep->declBit(c+1066,"soc_top_with_cache cpu cs_registers_i csr_counter_read_o", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i csr_mnxti_read_o", false,-1);
        tracep->declBus(c+1068,"soc_top_with_cache cpu cs_registers_i csr_hz_o", false,-1, 27,0);
        tracep->declBus(c+32,"soc_top_with_cache cpu cs_registers_i csr_rdata_o", false,-1, 31,0);
        tracep->declBus(c+1075,"soc_top_with_cache cpu cs_registers_i mip_i", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i mnxti_irq_pending_i", false,-1);
        tracep->declBus(c+1703,"soc_top_with_cache cpu cs_registers_i mnxti_irq_id_i", false,-1, 4,0);
        tracep->declBus(c+1704,"soc_top_with_cache cpu cs_registers_i mnxti_irq_level_i", false,-1, 7,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i clic_pa_valid_o", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i clic_pa_o", false,-1, 31,0);
        tracep->declBit(c+33,"soc_top_with_cache cpu cs_registers_i csr_irq_enable_write_o", false,-1);
        tracep->declQuad(c+1701,"soc_top_with_cache cpu cs_registers_i time_i", false,-1, 63,0);
        tracep->declBit(c+1067,"soc_top_with_cache cpu cs_registers_i csr_wr_in_wb_flush_o", false,-1);
        tracep->declBus(c+1021,"soc_top_with_cache cpu cs_registers_i pc_if_i", false,-1, 31,0);
        tracep->declBit(c+1022,"soc_top_with_cache cpu cs_registers_i ptr_in_if_i", false,-1);
        tracep->declBus(c+18,"soc_top_with_cache cpu cs_registers_i priv_lvl_if_i", false,-1, 1,0);
        tracep->declBus(c+59,"soc_top_with_cache cpu cs_registers_i trigger_match_if_o", false,-1, 31,0);
        tracep->declBus(c+60,"soc_top_with_cache cpu cs_registers_i trigger_match_ex_o", false,-1, 31,0);
        tracep->declBit(c+554,"soc_top_with_cache cpu cs_registers_i etrigger_wb_o", false,-1);
        tracep->declBit(c+42,"soc_top_with_cache cpu cs_registers_i lsu_valid_ex_i", false,-1);
        tracep->declBus(c+45,"soc_top_with_cache cpu cs_registers_i lsu_addr_ex_i", false,-1, 31,0);
        tracep->declBit(c+46,"soc_top_with_cache cpu cs_registers_i lsu_we_ex_i", false,-1);
        tracep->declBus(c+47,"soc_top_with_cache cpu cs_registers_i lsu_be_ex_i", false,-1, 3,0);
        tracep->declBus(c+1712,"soc_top_with_cache cpu cs_registers_i lsu_atomic_ex_i", false,-1, 1,0);
        tracep->declBus(c+1769,"soc_top_with_cache cpu cs_registers_i CORE_MISA", false,-1, 31,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu cs_registers_i ZIHPM", false,-1);
        tracep->declBit(c+1682,"soc_top_with_cache cpu cs_registers_i ZICNTR", false,-1);
        tracep->declBus(c+1769,"soc_top_with_cache cpu cs_registers_i MISA_VALUE", false,-1, 31,0);
        tracep->declBus(c+1770,"soc_top_with_cache cpu cs_registers_i CSR_MTVT_MASK", false,-1, 31,0);
        tracep->declBus(c+317,"soc_top_with_cache cpu cs_registers_i csr_wdata_int", false,-1, 31,0);
        tracep->declBus(c+32,"soc_top_with_cache cpu cs_registers_i csr_rdata_int", false,-1, 31,0);
        tracep->declBit(c+318,"soc_top_with_cache cpu cs_registers_i csr_we_int", false,-1);
        tracep->declBus(c+1235,"soc_top_with_cache cpu cs_registers_i csr_op", false,-1, 1,0);
        tracep->declBus(c+1236,"soc_top_with_cache cpu cs_registers_i csr_waddr", false,-1, 11,0);
        tracep->declBus(c+1237,"soc_top_with_cache cpu cs_registers_i csr_raddr", false,-1, 11,0);
        tracep->declBus(c+1238,"soc_top_with_cache cpu cs_registers_i csr_wdata", false,-1, 31,0);
        tracep->declBit(c+319,"soc_top_with_cache cpu cs_registers_i csr_en_gated", false,-1);
        tracep->declBit(c+320,"soc_top_with_cache cpu cs_registers_i illegal_csr_read", false,-1);
        tracep->declBit(c+1239,"soc_top_with_cache cpu cs_registers_i illegal_csr_write", false,-1);
        tracep->declBit(c+613,"soc_top_with_cache cpu cs_registers_i instr_valid", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu cs_registers_i unused_signals", false,-1);
        tracep->declBus(c+1072,"soc_top_with_cache cpu cs_registers_i mepc_q", false,-1, 31,0);
        tracep->declBus(c+321,"soc_top_with_cache cpu cs_registers_i mepc_n", false,-1, 31,0);
        tracep->declBus(c+1072,"soc_top_with_cache cpu cs_registers_i mepc_rdata", false,-1, 31,0);
        tracep->declBit(c+322,"soc_top_with_cache cpu cs_registers_i mepc_we", false,-1);
        tracep->declBus(c+1240,"soc_top_with_cache cpu cs_registers_i tselect_rdata", false,-1, 31,0);
        tracep->declBit(c+323,"soc_top_with_cache cpu cs_registers_i tselect_we", false,-1);
        tracep->declBus(c+1241,"soc_top_with_cache cpu cs_registers_i tdata1_rdata", false,-1, 31,0);
        tracep->declBit(c+324,"soc_top_with_cache cpu cs_registers_i tdata1_we", false,-1);
        tracep->declBus(c+1242,"soc_top_with_cache cpu cs_registers_i tdata2_rdata", false,-1, 31,0);
        tracep->declBit(c+325,"soc_top_with_cache cpu cs_registers_i tdata2_we", false,-1);
        tracep->declBus(c+1771,"soc_top_with_cache cpu cs_registers_i tinfo_rdata", false,-1, 31,0);
        tracep->declBit(c+326,"soc_top_with_cache cpu cs_registers_i tinfo_we", false,-1);
        tracep->declBus(c+1243,"soc_top_with_cache cpu cs_registers_i dcsr_q", false,-1, 31,0);
        tracep->declBus(c+327,"soc_top_with_cache cpu cs_registers_i dcsr_n", false,-1, 31,0);
        tracep->declBus(c+58,"soc_top_with_cache cpu cs_registers_i dcsr_rdata", false,-1, 31,0);
        tracep->declBit(c+328,"soc_top_with_cache cpu cs_registers_i dcsr_we", false,-1);
        tracep->declBus(c+1073,"soc_top_with_cache cpu cs_registers_i dpc_q", false,-1, 31,0);
        tracep->declBus(c+329,"soc_top_with_cache cpu cs_registers_i dpc_n", false,-1, 31,0);
        tracep->declBus(c+1073,"soc_top_with_cache cpu cs_registers_i dpc_rdata", false,-1, 31,0);
        tracep->declBit(c+330,"soc_top_with_cache cpu cs_registers_i dpc_we", false,-1);
        tracep->declBus(c+1244,"soc_top_with_cache cpu cs_registers_i dscratch0_q", false,-1, 31,0);
        tracep->declBus(c+331,"soc_top_with_cache cpu cs_registers_i dscratch0_n", false,-1, 31,0);
        tracep->declBus(c+1244,"soc_top_with_cache cpu cs_registers_i dscratch0_rdata", false,-1, 31,0);
        tracep->declBit(c+332,"soc_top_with_cache cpu cs_registers_i dscratch0_we", false,-1);
        tracep->declBus(c+1245,"soc_top_with_cache cpu cs_registers_i dscratch1_q", false,-1, 31,0);
        tracep->declBus(c+333,"soc_top_with_cache cpu cs_registers_i dscratch1_n", false,-1, 31,0);
        tracep->declBus(c+1245,"soc_top_with_cache cpu cs_registers_i dscratch1_rdata", false,-1, 31,0);
        tracep->declBit(c+334,"soc_top_with_cache cpu cs_registers_i dscratch1_we", false,-1);
        tracep->declBus(c+1246,"soc_top_with_cache cpu cs_registers_i mscratch_q", false,-1, 31,0);
        tracep->declBus(c+335,"soc_top_with_cache cpu cs_registers_i mscratch_n", false,-1, 31,0);
        tracep->declBus(c+1246,"soc_top_with_cache cpu cs_registers_i mscratch_rdata", false,-1, 31,0);
        tracep->declBit(c+336,"soc_top_with_cache cpu cs_registers_i mscratch_we", false,-1);
        tracep->declBus(c+1247,"soc_top_with_cache cpu cs_registers_i jvt_q", false,-1, 31,0);
        tracep->declBus(c+337,"soc_top_with_cache cpu cs_registers_i jvt_n", false,-1, 31,0);
        tracep->declBus(c+1247,"soc_top_with_cache cpu cs_registers_i jvt_rdata", false,-1, 31,0);
        tracep->declBit(c+338,"soc_top_with_cache cpu cs_registers_i jvt_we", false,-1);
        tracep->declBus(c+1071,"soc_top_with_cache cpu cs_registers_i mstatus_q", false,-1, 31,0);
        tracep->declBus(c+339,"soc_top_with_cache cpu cs_registers_i mstatus_n", false,-1, 31,0);
        tracep->declBus(c+1071,"soc_top_with_cache cpu cs_registers_i mstatus_rdata", false,-1, 31,0);
        tracep->declBit(c+340,"soc_top_with_cache cpu cs_registers_i mstatus_we", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mstatush_n", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mstatush_rdata", false,-1, 31,0);
        tracep->declBit(c+341,"soc_top_with_cache cpu cs_registers_i mstatush_we", false,-1);
        tracep->declBus(c+1769,"soc_top_with_cache cpu cs_registers_i misa_n", false,-1, 31,0);
        tracep->declBus(c+1769,"soc_top_with_cache cpu cs_registers_i misa_rdata", false,-1, 31,0);
        tracep->declBit(c+342,"soc_top_with_cache cpu cs_registers_i misa_we", false,-1);
        tracep->declBus(c+1065,"soc_top_with_cache cpu cs_registers_i mcause_q", false,-1, 31,0);
        tracep->declBus(c+343,"soc_top_with_cache cpu cs_registers_i mcause_n", false,-1, 31,0);
        tracep->declBus(c+1065,"soc_top_with_cache cpu cs_registers_i mcause_rdata", false,-1, 31,0);
        tracep->declBit(c+344,"soc_top_with_cache cpu cs_registers_i mcause_we", false,-1);
        tracep->declBus(c+1248,"soc_top_with_cache cpu cs_registers_i mtvec_q", false,-1, 31,0);
        tracep->declBus(c+345,"soc_top_with_cache cpu cs_registers_i mtvec_n", false,-1, 31,0);
        tracep->declBus(c+1248,"soc_top_with_cache cpu cs_registers_i mtvec_rdata", false,-1, 31,0);
        tracep->declBit(c+346,"soc_top_with_cache cpu cs_registers_i mtvec_we", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mtvt_q", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mtvt_n", false,-1, 31,0);
        tracep->declBus(c+1772,"soc_top_with_cache cpu cs_registers_i mtvt_rdata", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i mtvt_we", false,-1);
        tracep->declBus(c+339,"soc_top_with_cache cpu cs_registers_i mnxti_n", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mnxti_rdata", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i mnxti_we", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mintstatus_q", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mintstatus_n", false,-1, 31,0);
        tracep->declBus(c+1773,"soc_top_with_cache cpu cs_registers_i mintstatus_rdata", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i mintstatus_we", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mintthresh_q", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mintthresh_n", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mintthresh_rdata", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i mintthresh_we", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mscratchcswl_n", false,-1, 31,0);
        tracep->declBus(c+1249,"soc_top_with_cache cpu cs_registers_i mscratchcswl_rdata", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i mscratchcswl_we", false,-1);
        tracep->declBus(c+1075,"soc_top_with_cache cpu cs_registers_i mip_n", false,-1, 31,0);
        tracep->declBus(c+1075,"soc_top_with_cache cpu cs_registers_i mip_rdata", false,-1, 31,0);
        tracep->declBit(c+347,"soc_top_with_cache cpu cs_registers_i mip_we", false,-1);
        tracep->declBus(c+1074,"soc_top_with_cache cpu cs_registers_i mie_q", false,-1, 31,0);
        tracep->declBus(c+348,"soc_top_with_cache cpu cs_registers_i mie_n", false,-1, 31,0);
        tracep->declBus(c+1074,"soc_top_with_cache cpu cs_registers_i mie_rdata", false,-1, 31,0);
        tracep->declBit(c+349,"soc_top_with_cache cpu cs_registers_i mie_we", false,-1);
        tracep->declBus(c+1774,"soc_top_with_cache cpu cs_registers_i mvendorid_n", false,-1, 31,0);
        tracep->declBus(c+1774,"soc_top_with_cache cpu cs_registers_i mvendorid_rdata", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i mvendorid_we", false,-1);
        tracep->declBus(c+1775,"soc_top_with_cache cpu cs_registers_i marchid_n", false,-1, 31,0);
        tracep->declBus(c+1775,"soc_top_with_cache cpu cs_registers_i marchid_rdata", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i marchid_we", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mimpid_n", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mimpid_rdata", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i mimpid_we", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mhartid_n", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mhartid_rdata", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i mhartid_we", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mconfigptr_n", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mconfigptr_rdata", false,-1, 31,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i mconfigptr_we", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mtval_n", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache cpu cs_registers_i mtval_rdata", false,-1, 31,0);
        tracep->declBit(c+350,"soc_top_with_cache cpu cs_registers_i mtval_we", false,-1);
        tracep->declBus(c+351,"soc_top_with_cache cpu cs_registers_i priv_lvl_n", false,-1, 1,0);
        tracep->declBus(c+1709,"soc_top_with_cache cpu cs_registers_i priv_lvl_q", false,-1, 1,0);
        tracep->declBus(c+1776,"soc_top_with_cache cpu cs_registers_i priv_lvl_rdata", false,-1, 1,0);
        tracep->declBit(c+352,"soc_top_with_cache cpu cs_registers_i priv_lvl_we", false,-1);
        tracep->declBit(c+1250,"soc_top_with_cache cpu cs_registers_i csr_wr_in_wb", false,-1);
        tracep->declBit(c+1067,"soc_top_with_cache cpu cs_registers_i jvt_wr_in_wb", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i mcause_alias_we", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu cs_registers_i mstatus_alias_we", false,-1);
        tracep->declArray(c+1251,"soc_top_with_cache cpu cs_registers_i mhpmcounter_q", false,-1, 2047,0);
        tracep->declArray(c+353,"soc_top_with_cache cpu cs_registers_i mhpmcounter_n", false,-1, 2047,0);
        tracep->declArray(c+1315,"soc_top_with_cache cpu cs_registers_i mhpmcounter_rdata", false,-1, 2047,0);
        tracep->declQuad(c+417,"soc_top_with_cache cpu cs_registers_i mhpmcounter_we", false,-1, 63,0);
        tracep->declArray(c+1379,"soc_top_with_cache cpu cs_registers_i mhpmevent_q", false,-1, 1023,0);
        tracep->declArray(c+419,"soc_top_with_cache cpu cs_registers_i mhpmevent_n", false,-1, 1023,0);
        tracep->declArray(c+1411,"soc_top_with_cache cpu cs_registers_i mhpmevent_rdata", false,-1, 1023,0);
        tracep->declBus(c+1443,"soc_top_with_cache cpu cs_registers_i mcountinhibit_q", false,-1, 31,0);
        tracep->declBus(c+451,"soc_top_with_cache cpu cs_registers_i mcountinhibit_n", false,-1, 31,0);
        tracep->declBus(c+1443,"soc_top_with_cache cpu cs_registers_i mcountinhibit_rdata", false,-1, 31,0);
        tracep->declBus(c+614,"soc_top_with_cache cpu cs_registers_i hpm_events", false,-1, 15,0);
        tracep->declArray(c+1444,"soc_top_with_cache cpu cs_registers_i mhpmcounter_increment", false,-1, 2047,0);
        tracep->declBus(c+452,"soc_top_with_cache cpu cs_registers_i mhpmcounter_write_lower", false,-1, 31,0);
        tracep->declBus(c+453,"soc_top_with_cache cpu cs_registers_i mhpmcounter_write_upper", false,-1, 31,0);
        tracep->declBus(c+454,"soc_top_with_cache cpu cs_registers_i mhpmcounter_write_increment", false,-1, 31,0);
        tracep->declBit(c+1508,"soc_top_with_cache cpu cs_registers_i mscratchcswl_in_wb", false,-1);
        tracep->declBit(c+1509,"soc_top_with_cache cpu cs_registers_i mnxti_in_wb", false,-1);
        tracep->declBus(c+1703,"soc_top_with_cache cpu cs_registers_i mnxti_irq_id", false,-1, 4,0);
        tracep->declBus(c+1777,"soc_top_with_cache cpu cs_registers_i HPM_EVENT_FLOP", false,-1, 15,0);
        tracep->declBus(c+1778,"soc_top_with_cache cpu cs_registers_i MHPMCOUNTERS_MASK", false,-1, 28,0);
        tracep->declBus(c+1779,"soc_top_with_cache cpu cs_registers_i MCOUNTINHIBIT_MASK", false,-1, 31,0);
        tracep->declBus(c+455,"soc_top_with_cache cpu cs_registers_i hpm_events_raw", false,-1, 15,0);
        tracep->declBit(c+456,"soc_top_with_cache cpu cs_registers_i all_counters_disabled", false,-1);
        tracep->declBit(c+457,"soc_top_with_cache cpu cs_registers_i debug_stopcount", false,-1);
        tracep->declBit(c+615,"soc_top_with_cache cpu cs_registers_i mcountinhibit_we", false,-1);
        tracep->declBit(c+458,"soc_top_with_cache cpu cs_registers_i mhpmevent_we", false,-1);
        tracep->declBit(c+616,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[0] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+617,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[1] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+618,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[2] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+619,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[4] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+620,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[5] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+621,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[6] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+622,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[7] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+623,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[8] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+624,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[9] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+625,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[10] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+626,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[11] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+627,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[12] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+628,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[13] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+629,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[14] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+630,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[15] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+631,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[16] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+632,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[17] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+633,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[18] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+634,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[19] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+635,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[20] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+636,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[21] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+637,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[22] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+638,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[23] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+639,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[24] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+640,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[25] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+641,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[26] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+642,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[27] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+643,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[28] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+644,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[29] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+645,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[30] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBit(c+646,"soc_top_with_cache cpu cs_registers_i gen_mhpmevent[31] gen_non_implemented_mhpmevent unused_mhpmevent_signals", false,-1);
        tracep->declBus(c+1694,"soc_top_with_cache cpu cs_registers_i jvt_csr_i WIDTH", false,-1, 31,0);
        tracep->declBus(c+1780,"soc_top_with_cache cpu cs_registers_i jvt_csr_i RESETVALUE", false,-1, 31,0);
        tracep->declBus(c+1781,"soc_top_with_cache cpu cs_registers_i jvt_csr_i MASK", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i jvt_csr_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i jvt_csr_i rst_n", false,-1);
        tracep->declBus(c+337,"soc_top_with_cache cpu cs_registers_i jvt_csr_i wr_data_i", false,-1, 31,0);
        tracep->declBit(c+338,"soc_top_with_cache cpu cs_registers_i jvt_csr_i wr_en_i", false,-1);
        tracep->declBus(c+1247,"soc_top_with_cache cpu cs_registers_i jvt_csr_i rd_data_o", false,-1, 31,0);
        tracep->declBus(c+1247,"soc_top_with_cache cpu cs_registers_i jvt_csr_i rdata_q", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu cs_registers_i mepc_csr_i WIDTH", false,-1, 31,0);
        tracep->declBus(c+1780,"soc_top_with_cache cpu cs_registers_i mepc_csr_i RESETVALUE", false,-1, 31,0);
        tracep->declBus(c+1782,"soc_top_with_cache cpu cs_registers_i mepc_csr_i MASK", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i mepc_csr_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i mepc_csr_i rst_n", false,-1);
        tracep->declBus(c+321,"soc_top_with_cache cpu cs_registers_i mepc_csr_i wr_data_i", false,-1, 31,0);
        tracep->declBit(c+322,"soc_top_with_cache cpu cs_registers_i mepc_csr_i wr_en_i", false,-1);
        tracep->declBus(c+1072,"soc_top_with_cache cpu cs_registers_i mepc_csr_i rd_data_o", false,-1, 31,0);
        tracep->declBus(c+1072,"soc_top_with_cache cpu cs_registers_i mepc_csr_i rdata_q", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu cs_registers_i mscratch_csr_i WIDTH", false,-1, 31,0);
        tracep->declBus(c+1780,"soc_top_with_cache cpu cs_registers_i mscratch_csr_i RESETVALUE", false,-1, 31,0);
        tracep->declBus(c+1783,"soc_top_with_cache cpu cs_registers_i mscratch_csr_i MASK", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i mscratch_csr_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i mscratch_csr_i rst_n", false,-1);
        tracep->declBus(c+335,"soc_top_with_cache cpu cs_registers_i mscratch_csr_i wr_data_i", false,-1, 31,0);
        tracep->declBit(c+336,"soc_top_with_cache cpu cs_registers_i mscratch_csr_i wr_en_i", false,-1);
        tracep->declBus(c+1246,"soc_top_with_cache cpu cs_registers_i mscratch_csr_i rd_data_o", false,-1, 31,0);
        tracep->declBus(c+1246,"soc_top_with_cache cpu cs_registers_i mscratch_csr_i rdata_q", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu cs_registers_i mstatus_csr_i WIDTH", false,-1, 31,0);
        tracep->declBus(c+1784,"soc_top_with_cache cpu cs_registers_i mstatus_csr_i RESETVALUE", false,-1, 31,0);
        tracep->declBus(c+1785,"soc_top_with_cache cpu cs_registers_i mstatus_csr_i MASK", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i mstatus_csr_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i mstatus_csr_i rst_n", false,-1);
        tracep->declBus(c+339,"soc_top_with_cache cpu cs_registers_i mstatus_csr_i wr_data_i", false,-1, 31,0);
        tracep->declBit(c+340,"soc_top_with_cache cpu cs_registers_i mstatus_csr_i wr_en_i", false,-1);
        tracep->declBus(c+1071,"soc_top_with_cache cpu cs_registers_i mstatus_csr_i rd_data_o", false,-1, 31,0);
        tracep->declBus(c+1071,"soc_top_with_cache cpu cs_registers_i mstatus_csr_i rdata_q", false,-1, 31,0);
        tracep->declBus(c+1685,"soc_top_with_cache cpu cs_registers_i debug_triggers_i DBG_NUM_TRIGGERS", false,-1, 31,0);
        tracep->declBus(c+1786,"soc_top_with_cache cpu cs_registers_i debug_triggers_i A_EXT", false,-1, 1,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i debug_triggers_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i debug_triggers_i rst_n", false,-1);
        tracep->declBus(c+317,"soc_top_with_cache cpu cs_registers_i debug_triggers_i csr_wdata_i", false,-1, 31,0);
        tracep->declBit(c+323,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tselect_we_i", false,-1);
        tracep->declBit(c+324,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tdata1_we_i", false,-1);
        tracep->declBit(c+325,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tdata2_we_i", false,-1);
        tracep->declBit(c+326,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tinfo_we_i", false,-1);
        tracep->declBus(c+1240,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tselect_rdata_o", false,-1, 31,0);
        tracep->declBus(c+1241,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tdata1_rdata_o", false,-1, 31,0);
        tracep->declBus(c+1242,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tdata2_rdata_o", false,-1, 31,0);
        tracep->declBus(c+1771,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tinfo_rdata_o", false,-1, 31,0);
        tracep->declBus(c+1021,"soc_top_with_cache cpu cs_registers_i debug_triggers_i pc_if_i", false,-1, 31,0);
        tracep->declBit(c+1022,"soc_top_with_cache cpu cs_registers_i debug_triggers_i ptr_in_if_i", false,-1);
        tracep->declBus(c+18,"soc_top_with_cache cpu cs_registers_i debug_triggers_i priv_lvl_if_i", false,-1, 1,0);
        tracep->declBit(c+42,"soc_top_with_cache cpu cs_registers_i debug_triggers_i lsu_valid_ex_i", false,-1);
        tracep->declBus(c+45,"soc_top_with_cache cpu cs_registers_i debug_triggers_i lsu_addr_ex_i", false,-1, 31,0);
        tracep->declBit(c+46,"soc_top_with_cache cpu cs_registers_i debug_triggers_i lsu_we_ex_i", false,-1);
        tracep->declBus(c+47,"soc_top_with_cache cpu cs_registers_i debug_triggers_i lsu_be_ex_i", false,-1, 3,0);
        tracep->declBus(c+1510,"soc_top_with_cache cpu cs_registers_i debug_triggers_i priv_lvl_ex_i", false,-1, 1,0);
        tracep->declBus(c+1712,"soc_top_with_cache cpu cs_registers_i debug_triggers_i lsu_atomic_ex_i", false,-1, 1,0);
        tracep->declBus(c+1511,"soc_top_with_cache cpu cs_registers_i debug_triggers_i priv_lvl_wb_i", false,-1, 1,0);
        tracep->declArray(c+543,"soc_top_with_cache cpu cs_registers_i debug_triggers_i ctrl_fsm_i", false,-1, 200,0);
        tracep->declBus(c+59,"soc_top_with_cache cpu cs_registers_i debug_triggers_i trigger_match_if_o", false,-1, 31,0);
        tracep->declBus(c+60,"soc_top_with_cache cpu cs_registers_i debug_triggers_i trigger_match_ex_o", false,-1, 31,0);
        tracep->declBit(c+554,"soc_top_with_cache cpu cs_registers_i debug_triggers_i etrigger_wb_o", false,-1);
        tracep->declBus(c+1787,"soc_top_with_cache cpu cs_registers_i debug_triggers_i ETRIGGER_TDATA2_MASK", false,-1, 31,0);
        tracep->declBus(c+459,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tselect_n", false,-1, 31,0);
        tracep->declBus(c+460,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tdata2_n", false,-1, 31,0);
        tracep->declBus(c+1771,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tinfo_n", false,-1, 31,0);
        tracep->declBus(c+461,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tdata1_n_r", false,-1, 31,0);
        tracep->declBus(c+462,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tdata2_n_r", false,-1, 31,0);
        tracep->declBit(c+463,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tdata1_we_r", false,-1);
        tracep->declBit(c+464,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tdata2_we_r", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu cs_registers_i debug_triggers_i unused_signals", false,-1);
        tracep->declBit(c+1788,"soc_top_with_cache cpu cs_registers_i debug_triggers_i tdata1_n", false,-1);
        tracep->declBus(c+465,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tdata1_we_int", false,-1, 0,0);
        tracep->declBus(c+466,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tdata1_we_hit", false,-1, 0,0);
        tracep->declBus(c+467,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tdata2_we_int", false,-1, 0,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+468+i*1,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tdata1_n", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1512+i*1,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tdata1_q", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1513+i*1,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tdata2_q", true,(i+0), 31,0);}}
        tracep->declBus(c+1240,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tselect_q", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1514+i*1,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tdata1_rdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1515+i*1,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tdata2_rdata", true,(i+0), 31,0);}}
        tracep->declBus(c+469,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers trigger_match_if", false,-1, 0,0);
        tracep->declBus(c+470,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers trigger_match_ex", false,-1, 0,0);
        tracep->declBus(c+554,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers etrigger_wb", false,-1, 0,0);
        tracep->declBus(c+1516,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers if_addr_match", false,-1, 0,0);
        tracep->declBus(c+647,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers lsu_addr_match_en", false,-1, 0,0);
        tracep->declBus(c+648,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers lsu_addr_match", false,-1, 0,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+471+i*1,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers lsu_byte_addr_match", true,(i+0), 3,0);}}
        tracep->declBus(c+649,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers priv_lvl_match_en_if", false,-1, 0,0);
        tracep->declBus(c+1517,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers priv_lvl_match_en_ex", false,-1, 0,0);
        tracep->declBus(c+1518,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers priv_lvl_match_en_wb", false,-1, 0,0);
        tracep->declBus(c+472,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers lsu_addr_low_lsb", false,-1, 1,0);
        tracep->declBus(c+473,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers lsu_addr_high_lsb", false,-1, 1,0);
        tracep->declBus(c+474,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers lsu_addr_low", false,-1, 31,0);
        tracep->declBus(c+475,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers lsu_addr_high", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+476+i*1,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers exception_match", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+477+i*1,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers mcontrol6_hit_resolved", true,(i+0), 1,0);}}
        tracep->declBus(c+478,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers unnamedblk1 b", false,-1, 31,0);
        tracep->declBus(c+479,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers unnamedblk2 b", false,-1, 31,0);
        tracep->declBus(c+1789,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] unnamedblk3 b", false,-1, 31,0);
        tracep->declBus(c+1790,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] unnamedblk4 i", false,-1, 31,0);
        tracep->declBus(c+1697,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers unnamedblk5 i", false,-1, 31,0);
        tracep->declBus(c+1697,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers unnamedblk6 i", false,-1, 31,0);
        tracep->declBus(c+480,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers unnamedblk7 i", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata1_csr_i WIDTH", false,-1, 31,0);
        tracep->declBus(c+1791,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata1_csr_i RESETVALUE", false,-1, 31,0);
        tracep->declBus(c+1783,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata1_csr_i MASK", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata1_csr_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata1_csr_i rst_n", false,-1);
        tracep->declBus(c+481,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata1_csr_i wr_data_i", false,-1, 31,0);
        tracep->declBit(c+465,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata1_csr_i wr_en_i", false,-1);
        tracep->declBus(c+1519,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata1_csr_i rd_data_o", false,-1, 31,0);
        tracep->declBus(c+1519,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata1_csr_i rdata_q", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata2_csr_i WIDTH", false,-1, 31,0);
        tracep->declBus(c+1780,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata2_csr_i RESETVALUE", false,-1, 31,0);
        tracep->declBus(c+1783,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata2_csr_i MASK", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata2_csr_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata2_csr_i rst_n", false,-1);
        tracep->declBus(c+460,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata2_csr_i wr_data_i", false,-1, 31,0);
        tracep->declBit(c+467,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata2_csr_i wr_en_i", false,-1);
        tracep->declBus(c+1520,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata2_csr_i rd_data_o", false,-1, 31,0);
        tracep->declBus(c+1520,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tmatch_csr[0] tdata2_csr_i rdata_q", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tselect_csr_i WIDTH", false,-1, 31,0);
        tracep->declBus(c+1780,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tselect_csr_i RESETVALUE", false,-1, 31,0);
        tracep->declBus(c+1783,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tselect_csr_i MASK", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tselect_csr_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tselect_csr_i rst_n", false,-1);
        tracep->declBus(c+459,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tselect_csr_i wr_data_i", false,-1, 31,0);
        tracep->declBit(c+323,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tselect_csr_i wr_en_i", false,-1);
        tracep->declBus(c+1240,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tselect_csr_i rd_data_o", false,-1, 31,0);
        tracep->declBus(c+1240,"soc_top_with_cache cpu cs_registers_i debug_triggers_i gen_triggers tselect_csr_i rdata_q", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch0_csr_i WIDTH", false,-1, 31,0);
        tracep->declBus(c+1780,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch0_csr_i RESETVALUE", false,-1, 31,0);
        tracep->declBus(c+1783,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch0_csr_i MASK", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch0_csr_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch0_csr_i rst_n", false,-1);
        tracep->declBus(c+331,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch0_csr_i wr_data_i", false,-1, 31,0);
        tracep->declBit(c+332,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch0_csr_i wr_en_i", false,-1);
        tracep->declBus(c+1244,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch0_csr_i rd_data_o", false,-1, 31,0);
        tracep->declBus(c+1244,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch0_csr_i rdata_q", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch1_csr_i WIDTH", false,-1, 31,0);
        tracep->declBus(c+1780,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch1_csr_i RESETVALUE", false,-1, 31,0);
        tracep->declBus(c+1783,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch1_csr_i MASK", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch1_csr_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch1_csr_i rst_n", false,-1);
        tracep->declBus(c+333,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch1_csr_i wr_data_i", false,-1, 31,0);
        tracep->declBit(c+334,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch1_csr_i wr_en_i", false,-1);
        tracep->declBus(c+1245,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch1_csr_i rd_data_o", false,-1, 31,0);
        tracep->declBus(c+1245,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dscratch1_csr_i rdata_q", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dcsr_csr_i WIDTH", false,-1, 31,0);
        tracep->declBus(c+1792,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dcsr_csr_i RESETVALUE", false,-1, 31,0);
        tracep->declBus(c+1793,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dcsr_csr_i MASK", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dcsr_csr_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dcsr_csr_i rst_n", false,-1);
        tracep->declBus(c+327,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dcsr_csr_i wr_data_i", false,-1, 31,0);
        tracep->declBit(c+328,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dcsr_csr_i wr_en_i", false,-1);
        tracep->declBus(c+1243,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dcsr_csr_i rd_data_o", false,-1, 31,0);
        tracep->declBus(c+1243,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dcsr_csr_i rdata_q", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dpc_csr_i WIDTH", false,-1, 31,0);
        tracep->declBus(c+1780,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dpc_csr_i RESETVALUE", false,-1, 31,0);
        tracep->declBus(c+1782,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dpc_csr_i MASK", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dpc_csr_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dpc_csr_i rst_n", false,-1);
        tracep->declBus(c+329,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dpc_csr_i wr_data_i", false,-1, 31,0);
        tracep->declBit(c+330,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dpc_csr_i wr_en_i", false,-1);
        tracep->declBus(c+1073,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dpc_csr_i rd_data_o", false,-1, 31,0);
        tracep->declBus(c+1073,"soc_top_with_cache cpu cs_registers_i gen_debug_csr dpc_csr_i rdata_q", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mcause_csr_i WIDTH", false,-1, 31,0);
        tracep->declBus(c+1780,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mcause_csr_i RESETVALUE", false,-1, 31,0);
        tracep->declBus(c+1794,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mcause_csr_i MASK", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mcause_csr_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mcause_csr_i rst_n", false,-1);
        tracep->declBus(c+343,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mcause_csr_i wr_data_i", false,-1, 31,0);
        tracep->declBit(c+344,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mcause_csr_i wr_en_i", false,-1);
        tracep->declBus(c+1065,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mcause_csr_i rd_data_o", false,-1, 31,0);
        tracep->declBus(c+1065,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mcause_csr_i rdata_q", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mtvec_csr_i WIDTH", false,-1, 31,0);
        tracep->declBus(c+1795,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mtvec_csr_i RESETVALUE", false,-1, 31,0);
        tracep->declBus(c+1796,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mtvec_csr_i MASK", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mtvec_csr_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mtvec_csr_i rst_n", false,-1);
        tracep->declBus(c+345,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mtvec_csr_i wr_data_i", false,-1, 31,0);
        tracep->declBit(c+346,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mtvec_csr_i wr_en_i", false,-1);
        tracep->declBus(c+1248,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mtvec_csr_i rd_data_o", false,-1, 31,0);
        tracep->declBus(c+1248,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mtvec_csr_i rdata_q", false,-1, 31,0);
        tracep->declBus(c+1694,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mie_csr_i WIDTH", false,-1, 31,0);
        tracep->declBus(c+1780,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mie_csr_i RESETVALUE", false,-1, 31,0);
        tracep->declBus(c+1797,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mie_csr_i MASK", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mie_csr_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mie_csr_i rst_n", false,-1);
        tracep->declBus(c+348,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mie_csr_i wr_data_i", false,-1, 31,0);
        tracep->declBit(c+349,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mie_csr_i wr_en_i", false,-1);
        tracep->declBus(c+1074,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mie_csr_i rd_data_o", false,-1, 31,0);
        tracep->declBus(c+1074,"soc_top_with_cache cpu cs_registers_i basic_mode_csrs mie_csr_i rdata_q", false,-1, 31,0);
        tracep->declBit(c+1682,"soc_top_with_cache cpu controller_i X_EXT", false,-1);
        tracep->declBus(c+1798,"soc_top_with_cache cpu controller_i A_EXT", false,-1, 1,0);
        tracep->declBus(c+1692,"soc_top_with_cache cpu controller_i REGFILE_NUM_READ_PORTS", false,-1, 31,0);
        tracep->declBit(c+1690,"soc_top_with_cache cpu controller_i CLIC", false,-1);
        tracep->declBus(c+1691,"soc_top_with_cache cpu controller_i CLIC_ID_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1799,"soc_top_with_cache cpu controller_i RV32", false,-1);
        tracep->declBit(c+1682,"soc_top_with_cache cpu controller_i DEBUG", false,-1);
        tracep->declBit(c+17,"soc_top_with_cache cpu controller_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu controller_i rst_n", false,-1);
        tracep->declBit(c+686,"soc_top_with_cache cpu controller_i fetch_enable_i", false,-1);
        tracep->declBit(c+53,"soc_top_with_cache cpu controller_i if_valid_i", false,-1);
        tracep->declBus(c+1021,"soc_top_with_cache cpu controller_i pc_if_i", false,-1, 31,0);
        tracep->declBit(c+23,"soc_top_with_cache cpu controller_i last_op_if_i", false,-1);
        tracep->declBit(c+26,"soc_top_with_cache cpu controller_i abort_op_if_i", false,-1);
        tracep->declArray(c+1047,"soc_top_with_cache cpu controller_i if_id_pipe_i", false,-1, 190,0);
        tracep->declBit(c+61,"soc_top_with_cache cpu controller_i alu_jmp_id_i", false,-1);
        tracep->declBit(c+62,"soc_top_with_cache cpu controller_i alu_jmpr_id_i", false,-1);
        tracep->declBit(c+63,"soc_top_with_cache cpu controller_i alu_en_id_i", false,-1);
        tracep->declBit(c+64,"soc_top_with_cache cpu controller_i sys_en_id_i", false,-1);
        tracep->declBit(c+65,"soc_top_with_cache cpu controller_i sys_mret_id_i", false,-1);
        tracep->declBit(c+66,"soc_top_with_cache cpu controller_i csr_en_raw_id_i", false,-1);
        tracep->declBit(c+1055,"soc_top_with_cache cpu controller_i first_op_id_i", false,-1);
        tracep->declBit(c+24,"soc_top_with_cache cpu controller_i last_op_id_i", false,-1);
        tracep->declBit(c+27,"soc_top_with_cache cpu controller_i abort_op_id_i", false,-1);
        tracep->declArray(c+1027,"soc_top_with_cache cpu controller_i id_ex_pipe_i", false,-1, 352,0);
        tracep->declArray(c+1039,"soc_top_with_cache cpu controller_i ex_wb_pipe_i", false,-1, 247,0);
        tracep->declBus(c+49,"soc_top_with_cache cpu controller_i mpu_status_wb_i", false,-1, 1,0);
        tracep->declBus(c+48,"soc_top_with_cache cpu controller_i wpt_match_wb_i", false,-1, 31,0);
        tracep->declBus(c+50,"soc_top_with_cache cpu controller_i align_status_wb_i", false,-1, 1,0);
        tracep->declBit(c+25,"soc_top_with_cache cpu controller_i last_op_ex_i", false,-1);
        tracep->declBit(c+1054,"soc_top_with_cache cpu controller_i last_op_wb_i", false,-1);
        tracep->declBit(c+28,"soc_top_with_cache cpu controller_i abort_op_wb_i", false,-1);
        tracep->declBit(c+553,"soc_top_with_cache cpu controller_i data_stall_wb_i", false,-1);
        tracep->declBus(c+40,"soc_top_with_cache cpu controller_i lsu_err_wb_i", false,-1, 1,0);
        tracep->declBit(c+20,"soc_top_with_cache cpu controller_i lsu_busy_i", false,-1);
        tracep->declBit(c+1025,"soc_top_with_cache cpu controller_i lsu_bus_busy_i", false,-1);
        tracep->declBit(c+1026,"soc_top_with_cache cpu controller_i lsu_interruptible_i", false,-1);
        tracep->declBit(c+1070,"soc_top_with_cache cpu controller_i lsu_valid_wb_i", false,-1);
        tracep->declBus(c+1712,"soc_top_with_cache cpu controller_i lsu_atomic_ex_i", false,-1, 1,0);
        tracep->declBus(c+1712,"soc_top_with_cache cpu controller_i lsu_atomic_wb_i", false,-1, 1,0);
        tracep->declBit(c+1024,"soc_top_with_cache cpu controller_i branch_decision_ex_i", false,-1);
        tracep->declBit(c+1076,"soc_top_with_cache cpu controller_i irq_req_ctrl_i", false,-1);
        tracep->declBus(c+1077,"soc_top_with_cache cpu controller_i irq_id_ctrl_i", false,-1, 9,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu controller_i irq_wu_ctrl_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu controller_i irq_clic_shv_i", false,-1);
        tracep->declBus(c+1704,"soc_top_with_cache cpu controller_i irq_clic_level_i", false,-1, 7,0);
        tracep->declBus(c+1696,"soc_top_with_cache cpu controller_i irq_clic_priv_i", false,-1, 1,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu controller_i wu_wfe_i", false,-1);
        tracep->declBus(c+1062,"soc_top_with_cache cpu controller_i mtvec_mode_i", false,-1, 1,0);
        tracep->declBus(c+1065,"soc_top_with_cache cpu controller_i mcause_i", false,-1, 31,0);
        tracep->declBus(c+1708,"soc_top_with_cache cpu controller_i mintstatus_i", false,-1, 31,0);
        tracep->declBit(c+554,"soc_top_with_cache cpu controller_i etrigger_wb_i", false,-1);
        tracep->declBit(c+1067,"soc_top_with_cache cpu controller_i csr_wr_in_wb_flush_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu controller_i debug_req_i", false,-1);
        tracep->declBus(c+58,"soc_top_with_cache cpu controller_i dcsr_i", false,-1, 31,0);
        tracep->declBit(c+1066,"soc_top_with_cache cpu controller_i csr_counter_read_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu controller_i csr_mnxti_read_i", false,-1);
        tracep->declBit(c+33,"soc_top_with_cache cpu controller_i csr_irq_enable_write_i", false,-1);
        tracep->declBus(c+1068,"soc_top_with_cache cpu controller_i csr_hz_i", false,-1, 27,0);
        tracep->declBus(c+29,"soc_top_with_cache cpu controller_i rf_re_id_i", false,-1, 1,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1521+i*1,"soc_top_with_cache cpu controller_i rf_raddr_id_i", true,(i+0), 4,0);}}
        tracep->declBit(c+51,"soc_top_with_cache cpu controller_i id_ready_i", false,-1);
        tracep->declBit(c+54,"soc_top_with_cache cpu controller_i id_valid_i", false,-1);
        tracep->declBit(c+52,"soc_top_with_cache cpu controller_i ex_ready_i", false,-1);
        tracep->declBit(c+55,"soc_top_with_cache cpu controller_i ex_valid_i", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu controller_i wb_ready_i", false,-1);
        tracep->declBit(c+56,"soc_top_with_cache cpu controller_i wb_valid_i", false,-1);
        tracep->declBus(c+542,"soc_top_with_cache cpu controller_i ctrl_byp_o", false,-1, 17,0);
        tracep->declArray(c+543,"soc_top_with_cache cpu controller_i ctrl_fsm_o", false,-1, 200,0);
        tracep->declBit(c+1019,"soc_top_with_cache cpu controller_i fencei_flush_req_o", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu controller_i fencei_flush_ack_i", false,-1);
        tracep->declBit(c+68,"soc_top_with_cache cpu controller_i xif_csr_error_i", false,-1);
        tracep->declBit(c+1682,"soc_top_with_cache cpu controller_i controller_fsm_i X_EXT", false,-1);
        tracep->declBit(c+1682,"soc_top_with_cache cpu controller_i controller_fsm_i DEBUG", false,-1);
        tracep->declBit(c+1690,"soc_top_with_cache cpu controller_i controller_fsm_i CLIC", false,-1);
        tracep->declBus(c+1691,"soc_top_with_cache cpu controller_i controller_fsm_i CLIC_ID_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1800,"soc_top_with_cache cpu controller_i controller_fsm_i RV32", false,-1);
        tracep->declBit(c+17,"soc_top_with_cache cpu controller_i controller_fsm_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu controller_i controller_fsm_i rst_n", false,-1);
        tracep->declBit(c+686,"soc_top_with_cache cpu controller_i controller_fsm_i fetch_enable_i", false,-1);
        tracep->declBus(c+542,"soc_top_with_cache cpu controller_i controller_fsm_i ctrl_byp_i", false,-1, 17,0);
        tracep->declBus(c+1021,"soc_top_with_cache cpu controller_i controller_fsm_i pc_if_i", false,-1, 31,0);
        tracep->declBit(c+23,"soc_top_with_cache cpu controller_i controller_fsm_i last_op_if_i", false,-1);
        tracep->declBit(c+26,"soc_top_with_cache cpu controller_i controller_fsm_i abort_op_if_i", false,-1);
        tracep->declArray(c+1047,"soc_top_with_cache cpu controller_i controller_fsm_i if_id_pipe_i", false,-1, 190,0);
        tracep->declBit(c+61,"soc_top_with_cache cpu controller_i controller_fsm_i alu_jmp_id_i", false,-1);
        tracep->declBit(c+65,"soc_top_with_cache cpu controller_i controller_fsm_i sys_mret_id_i", false,-1);
        tracep->declBit(c+63,"soc_top_with_cache cpu controller_i controller_fsm_i alu_en_id_i", false,-1);
        tracep->declBit(c+64,"soc_top_with_cache cpu controller_i controller_fsm_i sys_en_id_i", false,-1);
        tracep->declBit(c+1055,"soc_top_with_cache cpu controller_i controller_fsm_i first_op_id_i", false,-1);
        tracep->declBit(c+24,"soc_top_with_cache cpu controller_i controller_fsm_i last_op_id_i", false,-1);
        tracep->declBit(c+27,"soc_top_with_cache cpu controller_i controller_fsm_i abort_op_id_i", false,-1);
        tracep->declArray(c+1027,"soc_top_with_cache cpu controller_i controller_fsm_i id_ex_pipe_i", false,-1, 352,0);
        tracep->declBit(c+1024,"soc_top_with_cache cpu controller_i controller_fsm_i branch_decision_ex_i", false,-1);
        tracep->declBit(c+25,"soc_top_with_cache cpu controller_i controller_fsm_i last_op_ex_i", false,-1);
        tracep->declArray(c+1039,"soc_top_with_cache cpu controller_i controller_fsm_i ex_wb_pipe_i", false,-1, 247,0);
        tracep->declBus(c+40,"soc_top_with_cache cpu controller_i controller_fsm_i lsu_err_wb_i", false,-1, 1,0);
        tracep->declBit(c+1054,"soc_top_with_cache cpu controller_i controller_fsm_i last_op_wb_i", false,-1);
        tracep->declBit(c+28,"soc_top_with_cache cpu controller_i controller_fsm_i abort_op_wb_i", false,-1);
        tracep->declBus(c+49,"soc_top_with_cache cpu controller_i controller_fsm_i mpu_status_wb_i", false,-1, 1,0);
        tracep->declBus(c+50,"soc_top_with_cache cpu controller_i controller_fsm_i align_status_wb_i", false,-1, 1,0);
        tracep->declBus(c+48,"soc_top_with_cache cpu controller_i controller_fsm_i wpt_match_wb_i", false,-1, 31,0);
        tracep->declBit(c+553,"soc_top_with_cache cpu controller_i controller_fsm_i data_stall_wb_i", false,-1);
        tracep->declBit(c+1070,"soc_top_with_cache cpu controller_i controller_fsm_i lsu_valid_wb_i", false,-1);
        tracep->declBit(c+20,"soc_top_with_cache cpu controller_i controller_fsm_i lsu_busy_i", false,-1);
        tracep->declBit(c+1026,"soc_top_with_cache cpu controller_i controller_fsm_i lsu_interruptible_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu controller_i controller_fsm_i irq_wu_ctrl_i", false,-1);
        tracep->declBit(c+1076,"soc_top_with_cache cpu controller_i controller_fsm_i irq_req_ctrl_i", false,-1);
        tracep->declBus(c+1077,"soc_top_with_cache cpu controller_i controller_fsm_i irq_id_ctrl_i", false,-1, 9,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu controller_i controller_fsm_i irq_clic_shv_i", false,-1);
        tracep->declBus(c+1704,"soc_top_with_cache cpu controller_i controller_fsm_i irq_clic_level_i", false,-1, 7,0);
        tracep->declBus(c+1696,"soc_top_with_cache cpu controller_i controller_fsm_i irq_clic_priv_i", false,-1, 1,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu controller_i controller_fsm_i wu_wfe_i", false,-1);
        tracep->declBus(c+1062,"soc_top_with_cache cpu controller_i controller_fsm_i mtvec_mode_i", false,-1, 1,0);
        tracep->declBus(c+58,"soc_top_with_cache cpu controller_i controller_fsm_i dcsr_i", false,-1, 31,0);
        tracep->declBus(c+1065,"soc_top_with_cache cpu controller_i controller_fsm_i mcause_i", false,-1, 31,0);
        tracep->declBus(c+1708,"soc_top_with_cache cpu controller_i controller_fsm_i mintstatus_i", false,-1, 31,0);
        tracep->declBit(c+554,"soc_top_with_cache cpu controller_i controller_fsm_i etrigger_wb_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu controller_i controller_fsm_i debug_req_i", false,-1);
        tracep->declArray(c+543,"soc_top_with_cache cpu controller_i controller_fsm_i ctrl_fsm_o", false,-1, 200,0);
        tracep->declBit(c+1067,"soc_top_with_cache cpu controller_i controller_fsm_i csr_wr_in_wb_flush_i", false,-1);
        tracep->declBit(c+53,"soc_top_with_cache cpu controller_i controller_fsm_i if_valid_i", false,-1);
        tracep->declBit(c+51,"soc_top_with_cache cpu controller_i controller_fsm_i id_ready_i", false,-1);
        tracep->declBit(c+54,"soc_top_with_cache cpu controller_i controller_fsm_i id_valid_i", false,-1);
        tracep->declBit(c+52,"soc_top_with_cache cpu controller_i controller_fsm_i ex_ready_i", false,-1);
        tracep->declBit(c+55,"soc_top_with_cache cpu controller_i controller_fsm_i ex_valid_i", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu controller_i controller_fsm_i wb_ready_i", false,-1);
        tracep->declBit(c+56,"soc_top_with_cache cpu controller_i controller_fsm_i wb_valid_i", false,-1);
        tracep->declBit(c+1019,"soc_top_with_cache cpu controller_i controller_fsm_i fencei_flush_req_o", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu controller_i controller_fsm_i fencei_flush_ack_i", false,-1);
        tracep->declBit(c+68,"soc_top_with_cache cpu controller_i controller_fsm_i xif_csr_error_i", false,-1);
        tracep->declBus(c+1523,"soc_top_with_cache cpu controller_i controller_fsm_i ctrl_fsm_cs", false,-1, 1,0);
        tracep->declBus(c+482,"soc_top_with_cache cpu controller_i controller_fsm_i ctrl_fsm_ns", false,-1, 1,0);
        tracep->declBus(c+1524,"soc_top_with_cache cpu controller_i controller_fsm_i debug_fsm_cs", false,-1, 2,0);
        tracep->declBus(c+483,"soc_top_with_cache cpu controller_i controller_fsm_i debug_fsm_ns", false,-1, 2,0);
        tracep->declBit(c+1525,"soc_top_with_cache cpu controller_i controller_fsm_i nmi_pending_q", false,-1);
        tracep->declBit(c+1526,"soc_top_with_cache cpu controller_i controller_fsm_i nmi_is_store_q", false,-1);
        tracep->declBit(c+484,"soc_top_with_cache cpu controller_i controller_fsm_i debug_mode_n", false,-1);
        tracep->declBit(c+1527,"soc_top_with_cache cpu controller_i controller_fsm_i debug_mode_q", false,-1);
        tracep->declBit(c+485,"soc_top_with_cache cpu controller_i controller_fsm_i single_step_halt_if_n", false,-1);
        tracep->declBit(c+1528,"soc_top_with_cache cpu controller_i controller_fsm_i single_step_halt_if_q", false,-1);
        tracep->declBit(c+486,"soc_top_with_cache cpu controller_i controller_fsm_i sys_mret_id", false,-1);
        tracep->declBit(c+487,"soc_top_with_cache cpu controller_i controller_fsm_i jmp_id", false,-1);
        tracep->declBit(c+650,"soc_top_with_cache cpu controller_i controller_fsm_i jump_in_id", false,-1);
        tracep->declBit(c+488,"soc_top_with_cache cpu controller_i controller_fsm_i jump_taken_id", false,-1);
        tracep->declBit(c+1529,"soc_top_with_cache cpu controller_i controller_fsm_i clic_ptr_in_id", false,-1);
        tracep->declBit(c+1530,"soc_top_with_cache cpu controller_i controller_fsm_i mret_ptr_in_id", false,-1);
        tracep->declBit(c+1531,"soc_top_with_cache cpu controller_i controller_fsm_i branch_in_ex", false,-1);
        tracep->declBit(c+1532,"soc_top_with_cache cpu controller_i controller_fsm_i branch_taken_ex", false,-1);
        tracep->declBit(c+489,"soc_top_with_cache cpu controller_i controller_fsm_i branch_taken_n", false,-1);
        tracep->declBit(c+1533,"soc_top_with_cache cpu controller_i controller_fsm_i branch_taken_q", false,-1);
        tracep->declBit(c+1534,"soc_top_with_cache cpu controller_i controller_fsm_i clic_ptr_in_ex", false,-1);
        tracep->declBit(c+490,"soc_top_with_cache cpu controller_i controller_fsm_i exception_in_wb", false,-1);
        tracep->declBus(c+491,"soc_top_with_cache cpu controller_i controller_fsm_i exception_cause_wb", false,-1, 10,0);
        tracep->declBit(c+1535,"soc_top_with_cache cpu controller_i controller_fsm_i wfi_in_wb", false,-1);
        tracep->declBit(c+1536,"soc_top_with_cache cpu controller_i controller_fsm_i wfe_in_wb", false,-1);
        tracep->declBit(c+1537,"soc_top_with_cache cpu controller_i controller_fsm_i fencei_in_wb", false,-1);
        tracep->declBit(c+1538,"soc_top_with_cache cpu controller_i controller_fsm_i fence_in_wb", false,-1);
        tracep->declBit(c+1539,"soc_top_with_cache cpu controller_i controller_fsm_i mret_in_wb", false,-1);
        tracep->declBit(c+1540,"soc_top_with_cache cpu controller_i controller_fsm_i mret_ptr_in_wb", false,-1);
        tracep->declBit(c+1541,"soc_top_with_cache cpu controller_i controller_fsm_i dret_in_wb", false,-1);
        tracep->declBit(c+1542,"soc_top_with_cache cpu controller_i controller_fsm_i ebreak_in_wb", false,-1);
        tracep->declBit(c+492,"soc_top_with_cache cpu controller_i controller_fsm_i trigger_match_in_wb", false,-1);
        tracep->declBit(c+493,"soc_top_with_cache cpu controller_i controller_fsm_i etrigger_in_wb", false,-1);
        tracep->declBit(c+1543,"soc_top_with_cache cpu controller_i controller_fsm_i xif_in_wb", false,-1);
        tracep->declBit(c+1544,"soc_top_with_cache cpu controller_i controller_fsm_i clic_ptr_in_wb", false,-1);
        tracep->declBit(c+1525,"soc_top_with_cache cpu controller_i controller_fsm_i pending_nmi", false,-1);
        tracep->declBit(c+494,"soc_top_with_cache cpu controller_i controller_fsm_i pending_nmi_early", false,-1);
        tracep->declBit(c+1545,"soc_top_with_cache cpu controller_i controller_fsm_i pending_async_debug", false,-1);
        tracep->declBit(c+495,"soc_top_with_cache cpu controller_i controller_fsm_i pending_sync_debug", false,-1);
        tracep->declBit(c+496,"soc_top_with_cache cpu controller_i controller_fsm_i pending_single_step", false,-1);
        tracep->declBit(c+1076,"soc_top_with_cache cpu controller_i controller_fsm_i pending_interrupt", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu controller_i controller_fsm_i exception_allowed", false,-1);
        tracep->declBit(c+497,"soc_top_with_cache cpu controller_i controller_fsm_i interrupt_allowed", false,-1);
        tracep->declBit(c+498,"soc_top_with_cache cpu controller_i controller_fsm_i nmi_allowed", false,-1);
        tracep->declBit(c+1546,"soc_top_with_cache cpu controller_i controller_fsm_i async_debug_allowed", false,-1);
        tracep->declBit(c+1547,"soc_top_with_cache cpu controller_i controller_fsm_i sync_debug_allowed", false,-1);
        tracep->declBit(c+1700,"soc_top_with_cache cpu controller_i controller_fsm_i single_step_allowed", false,-1);
        tracep->declBit(c+499,"soc_top_with_cache cpu controller_i controller_fsm_i debug_interruptible", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu controller_i controller_fsm_i clic_ptr_in_pipeline", false,-1);
        tracep->declBit(c+555,"soc_top_with_cache cpu controller_i controller_fsm_i non_shv_irq_ack", false,-1);
        tracep->declBus(c+500,"soc_top_with_cache cpu controller_i controller_fsm_i debug_cause_n", false,-1, 2,0);
        tracep->declBus(c+1548,"soc_top_with_cache cpu controller_i controller_fsm_i debug_cause_q", false,-1, 2,0);
        tracep->declBus(c+651,"soc_top_with_cache cpu controller_i controller_fsm_i sync_debug_cause", false,-1, 2,0);
        tracep->declBit(c+1549,"soc_top_with_cache cpu controller_i controller_fsm_i woke_to_debug_q", false,-1);
        tracep->declBit(c+1550,"soc_top_with_cache cpu controller_i controller_fsm_i woke_to_interrupt_q", false,-1);
        tracep->declBus(c+501,"soc_top_with_cache cpu controller_i controller_fsm_i exc_cause", false,-1, 10,0);
        tracep->declBit(c+502,"soc_top_with_cache cpu controller_i controller_fsm_i fence_req_set", false,-1);
        tracep->declBit(c+503,"soc_top_with_cache cpu controller_i controller_fsm_i fence_req_clr", false,-1);
        tracep->declBit(c+1551,"soc_top_with_cache cpu controller_i controller_fsm_i fence_req_q", false,-1);
        tracep->declBit(c+1552,"soc_top_with_cache cpu controller_i controller_fsm_i fencei_req_and_ack_q", false,-1);
        tracep->declBit(c+1553,"soc_top_with_cache cpu controller_i controller_fsm_i fencei_ongoing", false,-1);
        tracep->declBus(c+504,"soc_top_with_cache cpu controller_i controller_fsm_i pipe_pc_mux_ctrl", false,-1, 1,0);
        tracep->declBit(c+1554,"soc_top_with_cache cpu controller_i controller_fsm_i wb_counter_event", false,-1);
        tracep->declBit(c+505,"soc_top_with_cache cpu controller_i controller_fsm_i wb_counter_event_gated", false,-1);
        tracep->declBit(c+506,"soc_top_with_cache cpu controller_i controller_fsm_i csr_flush_ack_n", false,-1);
        tracep->declBit(c+1555,"soc_top_with_cache cpu controller_i controller_fsm_i csr_flush_ack_q", false,-1);
        tracep->declBit(c+1556,"soc_top_with_cache cpu controller_i controller_fsm_i sequence_in_progress_wb", false,-1);
        tracep->declBit(c+1557,"soc_top_with_cache cpu controller_i controller_fsm_i sequence_interruptible", false,-1);
        tracep->declBit(c+1558,"soc_top_with_cache cpu controller_i controller_fsm_i sequence_in_progress_id", false,-1);
        tracep->declBit(c+1559,"soc_top_with_cache cpu controller_i controller_fsm_i id_stage_haltable", false,-1);
        tracep->declBit(c+1560,"soc_top_with_cache cpu controller_i controller_fsm_i interrupt_blanking_q", false,-1);
        tracep->declBit(c+1561,"soc_top_with_cache cpu controller_i controller_fsm_i clic_ptr_in_progress_id", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu controller_i controller_fsm_i clic_ptr_in_progress_id_set", false,-1);
        tracep->declBit(c+507,"soc_top_with_cache cpu controller_i controller_fsm_i clic_ptr_in_progress_id_clear", false,-1);
        tracep->declBit(c+1562,"soc_top_with_cache cpu controller_i controller_fsm_i x_ext commit_valid_q", false,-1);
        tracep->declBit(c+1563,"soc_top_with_cache cpu controller_i controller_fsm_i x_ext commit_kill_q", false,-1);
        tracep->declBit(c+1564,"soc_top_with_cache cpu controller_i controller_fsm_i x_ext kill_rejected", false,-1);
        tracep->declBus(c+1692,"soc_top_with_cache cpu controller_i bypass_i REGFILE_NUM_READ_PORTS", false,-1, 31,0);
        tracep->declBus(c+1801,"soc_top_with_cache cpu controller_i bypass_i A_EXT", false,-1, 1,0);
        tracep->declBus(c+29,"soc_top_with_cache cpu controller_i bypass_i rf_re_id_i", false,-1, 1,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1565+i*1,"soc_top_with_cache cpu controller_i bypass_i rf_raddr_id_i", true,(i+0), 4,0);}}
        tracep->declArray(c+1047,"soc_top_with_cache cpu controller_i bypass_i if_id_pipe_i", false,-1, 190,0);
        tracep->declArray(c+1027,"soc_top_with_cache cpu controller_i bypass_i id_ex_pipe_i", false,-1, 352,0);
        tracep->declArray(c+1039,"soc_top_with_cache cpu controller_i bypass_i ex_wb_pipe_i", false,-1, 247,0);
        tracep->declBit(c+62,"soc_top_with_cache cpu controller_i bypass_i alu_jmpr_id_i", false,-1);
        tracep->declBit(c+65,"soc_top_with_cache cpu controller_i bypass_i sys_mret_id_i", false,-1);
        tracep->declBit(c+66,"soc_top_with_cache cpu controller_i bypass_i csr_en_raw_id_i", false,-1);
        tracep->declBit(c+1066,"soc_top_with_cache cpu controller_i bypass_i csr_counter_read_i", false,-1);
        tracep->declBit(c+1698,"soc_top_with_cache cpu controller_i bypass_i csr_mnxti_read_i", false,-1);
        tracep->declBit(c+41,"soc_top_with_cache cpu controller_i bypass_i wb_ready_i", false,-1);
        tracep->declBit(c+33,"soc_top_with_cache cpu controller_i bypass_i csr_irq_enable_write_i", false,-1);
        tracep->declBus(c+1712,"soc_top_with_cache cpu controller_i bypass_i lsu_atomic_ex_i", false,-1, 1,0);
        tracep->declBus(c+1712,"soc_top_with_cache cpu controller_i bypass_i lsu_atomic_wb_i", false,-1, 1,0);
        tracep->declBit(c+1025,"soc_top_with_cache cpu controller_i bypass_i lsu_bus_busy_i", false,-1);
        tracep->declBus(c+1068,"soc_top_with_cache cpu controller_i bypass_i csr_hz_i", false,-1, 27,0);
        tracep->declBus(c+542,"soc_top_with_cache cpu controller_i bypass_i ctrl_byp_o", false,-1, 17,0);
        tracep->declBus(c+508,"soc_top_with_cache cpu controller_i bypass_i rf_rd_ex_match", false,-1, 1,0);
        tracep->declBit(c+1567,"soc_top_with_cache cpu controller_i bypass_i rf_rd_ex_jalr_match", false,-1);
        tracep->declBus(c+509,"soc_top_with_cache cpu controller_i bypass_i rf_rd_wb_match", false,-1, 1,0);
        tracep->declBit(c+1568,"soc_top_with_cache cpu controller_i bypass_i rf_rd_wb_jalr_match", false,-1);
        tracep->declBus(c+510,"soc_top_with_cache cpu controller_i bypass_i rf_rd_ex_hz", false,-1, 1,0);
        tracep->declBus(c+511,"soc_top_with_cache cpu controller_i bypass_i rf_rd_wb_hz", false,-1, 1,0);
        tracep->declBit(c+1569,"soc_top_with_cache cpu controller_i bypass_i csr_write_in_ex_wb", false,-1);
        tracep->declBit(c+1570,"soc_top_with_cache cpu controller_i bypass_i csr_write_in_ex", false,-1);
        tracep->declBit(c+1571,"soc_top_with_cache cpu controller_i bypass_i csr_write_in_wb", false,-1);
        tracep->declBit(c+1572,"soc_top_with_cache cpu controller_i bypass_i csr_impl_write_in_ex", false,-1);
        tracep->declBit(c+1573,"soc_top_with_cache cpu controller_i bypass_i csr_impl_write_in_wb", false,-1);
        tracep->declBit(c+1574,"soc_top_with_cache cpu controller_i bypass_i csr_expl_hz_ex", false,-1);
        tracep->declBit(c+1575,"soc_top_with_cache cpu controller_i bypass_i rf_we_ex", false,-1);
        tracep->declBit(c+1576,"soc_top_with_cache cpu controller_i bypass_i rf_we_wb", false,-1);
        tracep->declBit(c+1070,"soc_top_with_cache cpu controller_i bypass_i lsu_en_wb", false,-1);
        tracep->declBus(c+1577,"soc_top_with_cache cpu controller_i bypass_i rf_waddr_ex", false,-1, 4,0);
        tracep->declBus(c+1053,"soc_top_with_cache cpu controller_i bypass_i rf_waddr_wb", false,-1, 4,0);
        tracep->declBit(c+652,"soc_top_with_cache cpu controller_i bypass_i sys_mret_unqual_id", false,-1);
        tracep->declBit(c+653,"soc_top_with_cache cpu controller_i bypass_i csr_impl_rd_unqual_id", false,-1);
        tracep->declBit(c+654,"soc_top_with_cache cpu controller_i bypass_i jmpr_unqual_id", false,-1);
        tracep->declBit(c+1578,"soc_top_with_cache cpu controller_i bypass_i tbljmp_unqual_id", false,-1);
        tracep->declBus(c+1692,"soc_top_with_cache cpu register_file_wrapper_i REGFILE_NUM_READ_PORTS", false,-1, 31,0);
        tracep->declBit(c+1802,"soc_top_with_cache cpu register_file_wrapper_i RV32", false,-1);
        tracep->declBit(c+17,"soc_top_with_cache cpu register_file_wrapper_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu register_file_wrapper_i rst_n", false,-1);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1579+i*1,"soc_top_with_cache cpu register_file_wrapper_i raddr_i", true,(i+0), 4,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1581+i*1,"soc_top_with_cache cpu register_file_wrapper_i rdata_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1583+i*1,"soc_top_with_cache cpu register_file_wrapper_i waddr_i", true,(i+0), 4,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+512+i*1,"soc_top_with_cache cpu register_file_wrapper_i wdata_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+513+i*1,"soc_top_with_cache cpu register_file_wrapper_i we_i", true,(i+0));}}
        tracep->declBus(c+1692,"soc_top_with_cache cpu register_file_wrapper_i register_file_i REGFILE_NUM_READ_PORTS", false,-1, 31,0);
        tracep->declBit(c+1803,"soc_top_with_cache cpu register_file_wrapper_i register_file_i RV32", false,-1);
        tracep->declBit(c+17,"soc_top_with_cache cpu register_file_wrapper_i register_file_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu register_file_wrapper_i register_file_i rst_n", false,-1);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1584+i*1,"soc_top_with_cache cpu register_file_wrapper_i register_file_i raddr_i", true,(i+0), 4,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1586+i*1,"soc_top_with_cache cpu register_file_wrapper_i register_file_i rdata_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+1588+i*1,"soc_top_with_cache cpu register_file_wrapper_i register_file_i waddr_i", true,(i+0), 4,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+514+i*1,"soc_top_with_cache cpu register_file_wrapper_i register_file_i wdata_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+515+i*1,"soc_top_with_cache cpu register_file_wrapper_i register_file_i we_i", true,(i+0));}}
        tracep->declBus(c+1804,"soc_top_with_cache cpu register_file_wrapper_i register_file_i REGFILE_NUM_WORDS", false,-1, 31,0);
        tracep->declBus(c+1756,"soc_top_with_cache cpu register_file_wrapper_i register_file_i REGFILE_IMPL_ADDR_WIDTH", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+1589+i*1,"soc_top_with_cache cpu register_file_wrapper_i register_file_i mem", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+516+i*1,"soc_top_with_cache cpu register_file_wrapper_i register_file_i we_dec", true,(i+0), 31,0);}}
        tracep->declBus(c+1621,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[1] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1622,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[2] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1623,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[3] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1624,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[4] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1625,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[5] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1626,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[6] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1627,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[7] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1628,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[8] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1629,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[9] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1630,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[10] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1631,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[11] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1632,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[12] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1633,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[13] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1634,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[14] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1635,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[15] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1636,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[16] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1637,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[17] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1638,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[18] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1639,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[19] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1640,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[20] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1641,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[21] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1642,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[22] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1643,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[23] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1644,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[24] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1645,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[25] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1646,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[26] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1647,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[27] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1648,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[28] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1649,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[29] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1650,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[30] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBus(c+1651,"soc_top_with_cache cpu register_file_wrapper_i register_file_i gen_rf[31] register_write_behavioral unnamedblk1 j", false,-1, 31,0);
        tracep->declBit(c+17,"soc_top_with_cache cpu gen_basic_interrupt int_controller_i clk", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache cpu gen_basic_interrupt int_controller_i rst_n", false,-1);
        tracep->declBus(c+1695,"soc_top_with_cache cpu gen_basic_interrupt int_controller_i irq_i", false,-1, 31,0);
        tracep->declBit(c+1076,"soc_top_with_cache cpu gen_basic_interrupt int_controller_i irq_req_ctrl_o", false,-1);
        tracep->declBus(c+1652,"soc_top_with_cache cpu gen_basic_interrupt int_controller_i irq_id_ctrl_o", false,-1, 4,0);
        tracep->declBit(c+1698,"soc_top_with_cache cpu gen_basic_interrupt int_controller_i irq_wu_ctrl_o", false,-1);
        tracep->declBus(c+1074,"soc_top_with_cache cpu gen_basic_interrupt int_controller_i mie_i", false,-1, 31,0);
        tracep->declBus(c+1071,"soc_top_with_cache cpu gen_basic_interrupt int_controller_i mstatus_i", false,-1, 31,0);
        tracep->declBus(c+1711,"soc_top_with_cache cpu gen_basic_interrupt int_controller_i priv_lvl_i", false,-1, 1,0);
        tracep->declBus(c+1075,"soc_top_with_cache cpu gen_basic_interrupt int_controller_i mip_o", false,-1, 31,0);
        tracep->declBit(c+1653,"soc_top_with_cache cpu gen_basic_interrupt int_controller_i global_irq_enable", false,-1);
        tracep->declBus(c+1654,"soc_top_with_cache cpu gen_basic_interrupt int_controller_i irq_local_qual", false,-1, 31,0);
        tracep->declBus(c+1075,"soc_top_with_cache cpu gen_basic_interrupt int_controller_i irq_q", false,-1, 31,0);
        tracep->declBus(c+1805,"soc_top_with_cache vpu VLEN", false,-1, 31,0);
        tracep->declBus(c+1806,"soc_top_with_cache vpu ELEMENT_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1807,"soc_top_with_cache vpu X_ID_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1656,"soc_top_with_cache vpu clk_i", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache vpu rst_ni", false,-1);
        tracep->declBit(c+517,"soc_top_with_cache vpu xif_issue_valid_i", false,-1);
        tracep->declBit(c+1670,"soc_top_with_cache vpu xif_issue_ready_o", false,-1);
        tracep->declArray(c+655,"soc_top_with_cache vpu xif_issue_req_i", false,-1, 110,0);
        tracep->declBus(c+518,"soc_top_with_cache vpu xif_issue_resp_o", false,-1, 8,0);
        tracep->declBit(c+659,"soc_top_with_cache vpu xif_commit_valid_i", false,-1);
        tracep->declBus(c+519,"soc_top_with_cache vpu xif_commit_i", false,-1, 4,0);
        tracep->declBit(c+520,"soc_top_with_cache vpu xif_result_valid_o", false,-1);
        tracep->declBit(c+1655,"soc_top_with_cache vpu xif_result_ready_i", false,-1);
        tracep->declQuad(c+865,"soc_top_with_cache vpu xif_result_o", false,-1, 59,0);
        tracep->declBit(c+673,"soc_top_with_cache vpu xif_mem_valid_o", false,-1);
        tracep->declBit(c+674,"soc_top_with_cache vpu xif_mem_ready_i", false,-1);
        tracep->declArray(c+862,"soc_top_with_cache vpu xif_mem_req_o", false,-1, 81,0);
        tracep->declBus(c+1704,"soc_top_with_cache vpu xif_mem_resp_i", false,-1, 7,0);
        tracep->declBit(c+675,"soc_top_with_cache vpu xif_mem_result_valid_i", false,-1);
        tracep->declQuad(c+676,"soc_top_with_cache vpu xif_mem_result_i", false,-1, 37,0);
        tracep->declBus(c+1808,"soc_top_with_cache vpu NUM_VREGS", false,-1, 31,0);
        tracep->declBus(c+1807,"soc_top_with_cache vpu VRF_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+660,"soc_top_with_cache vpu opcode", false,-1, 6,0);
        tracep->declBus(c+661,"soc_top_with_cache vpu rd", false,-1, 4,0);
        tracep->declBus(c+662,"soc_top_with_cache vpu funct3", false,-1, 2,0);
        tracep->declBus(c+663,"soc_top_with_cache vpu rs1", false,-1, 4,0);
        tracep->declBus(c+664,"soc_top_with_cache vpu rs2", false,-1, 4,0);
        tracep->declBus(c+665,"soc_top_with_cache vpu funct7", false,-1, 6,0);
        tracep->declBus(c+1671,"soc_top_with_cache vpu state", false,-1, 2,0);
        tracep->declBus(c+521,"soc_top_with_cache vpu next_state", false,-1, 2,0);
        tracep->declBus(c+867,"soc_top_with_cache vpu id_q", false,-1, 3,0);
        tracep->declBus(c+868,"soc_top_with_cache vpu rs1_q", false,-1, 4,0);
        tracep->declBus(c+869,"soc_top_with_cache vpu rs2_q", false,-1, 4,0);
        tracep->declBus(c+870,"soc_top_with_cache vpu rd_q", false,-1, 4,0);
        tracep->declBus(c+871,"soc_top_with_cache vpu funct7_q", false,-1, 6,0);
        tracep->declBus(c+872,"soc_top_with_cache vpu funct3_q", false,-1, 2,0);
        tracep->declBus(c+873,"soc_top_with_cache vpu scalar_val_q", false,-1, 31,0);
        tracep->declBit(c+522,"soc_top_with_cache vpu vrf_we", false,-1);
        tracep->declBus(c+874,"soc_top_with_cache vpu vrf_waddr", false,-1, 3,0);
        tracep->declArray(c+875,"soc_top_with_cache vpu vrf_wdata", false,-1, 255,0);
        tracep->declBus(c+883,"soc_top_with_cache vpu vrf_raddr_a", false,-1, 3,0);
        tracep->declBus(c+884,"soc_top_with_cache vpu vrf_raddr_b", false,-1, 3,0);
        tracep->declArray(c+885,"soc_top_with_cache vpu vrf_rdata_a", false,-1, 255,0);
        tracep->declArray(c+893,"soc_top_with_cache vpu vrf_rdata_b", false,-1, 255,0);
        tracep->declBit(c+523,"soc_top_with_cache vpu vlsu_start_load", false,-1);
        tracep->declBit(c+524,"soc_top_with_cache vpu vlsu_start_store", false,-1);
        tracep->declBit(c+1672,"soc_top_with_cache vpu vlsu_done", false,-1);
        tracep->declArray(c+692,"soc_top_with_cache vpu vlsu_load_data", false,-1, 255,0);
        tracep->declBit(c+525,"soc_top_with_cache vpu exec_start", false,-1);
        tracep->declBit(c+1673,"soc_top_with_cache vpu exec_done", false,-1);
        tracep->declArray(c+901,"soc_top_with_cache vpu exec_result", false,-1, 255,0);
        tracep->declBit(c+1698,"soc_top_with_cache vpu vrf_rd_en_exec", false,-1);
        tracep->declBus(c+1703,"soc_top_with_cache vpu vrf_raddr_exec", false,-1, 4,0);
        tracep->declArray(c+875,"soc_top_with_cache vpu result_data_mux", false,-1, 255,0);
        tracep->declBit(c+526,"soc_top_with_cache vpu accept_issue", false,-1);
        tracep->declBit(c+527,"soc_top_with_cache vpu is_load_op", false,-1);
        tracep->declBit(c+528,"soc_top_with_cache vpu is_store_op", false,-1);
        tracep->declBit(c+529,"soc_top_with_cache vpu is_exec_op", false,-1);
        tracep->declBit(c+909,"soc_top_with_cache vpu is_load_q", false,-1);
        tracep->declBit(c+910,"soc_top_with_cache vpu is_store_q", false,-1);
        tracep->declBit(c+911,"soc_top_with_cache vpu is_exec_q", false,-1);
        tracep->declBus(c+1674,"soc_top_with_cache vpu state_prev", false,-1, 2,0);
        tracep->declBus(c+1805,"soc_top_with_cache vpu vrf_inst VLEN", false,-1, 31,0);
        tracep->declBus(c+1808,"soc_top_with_cache vpu vrf_inst NUM_REGS", false,-1, 31,0);
        tracep->declBit(c+1656,"soc_top_with_cache vpu vrf_inst clk_i", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache vpu vrf_inst rst_ni", false,-1);
        tracep->declBus(c+912,"soc_top_with_cache vpu vrf_inst raddr1_i", false,-1, 4,0);
        tracep->declArray(c+885,"soc_top_with_cache vpu vrf_inst rdata1_o", false,-1, 255,0);
        tracep->declBus(c+913,"soc_top_with_cache vpu vrf_inst raddr2_i", false,-1, 4,0);
        tracep->declArray(c+893,"soc_top_with_cache vpu vrf_inst rdata2_o", false,-1, 255,0);
        tracep->declBus(c+1809,"soc_top_with_cache vpu vrf_inst raddr3_i", false,-1, 4,0);
        tracep->declArray(c+700,"soc_top_with_cache vpu vrf_inst rdata3_o", false,-1, 255,0);
        tracep->declBit(c+522,"soc_top_with_cache vpu vrf_inst we_i", false,-1);
        tracep->declBus(c+914,"soc_top_with_cache vpu vrf_inst waddr_i", false,-1, 4,0);
        tracep->declArray(c+875,"soc_top_with_cache vpu vrf_inst wdata_i", false,-1, 255,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declArray(c+708+i*8,"soc_top_with_cache vpu vrf_inst vrf", true,(i+0), 255,0);}}
        tracep->declBus(c+2,"soc_top_with_cache vpu vrf_inst unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+836,"soc_top_with_cache vpu vrf_inst unnamedblk2 i", false,-1, 31,0);
        tracep->declBus(c+1805,"soc_top_with_cache vpu vlsu_inst VLEN", false,-1, 31,0);
        tracep->declBus(c+1807,"soc_top_with_cache vpu vlsu_inst X_ID_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1656,"soc_top_with_cache vpu vlsu_inst clk_i", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache vpu vlsu_inst rst_ni", false,-1);
        tracep->declBit(c+523,"soc_top_with_cache vpu vlsu_inst start_load_i", false,-1);
        tracep->declBit(c+524,"soc_top_with_cache vpu vlsu_inst start_store_i", false,-1);
        tracep->declBus(c+873,"soc_top_with_cache vpu vlsu_inst base_addr_i", false,-1, 31,0);
        tracep->declArray(c+885,"soc_top_with_cache vpu vlsu_inst store_data_i", false,-1, 255,0);
        tracep->declArray(c+692,"soc_top_with_cache vpu vlsu_inst load_data_o", false,-1, 255,0);
        tracep->declBit(c+1672,"soc_top_with_cache vpu vlsu_inst done_o", false,-1);
        tracep->declBus(c+867,"soc_top_with_cache vpu vlsu_inst id_i", false,-1, 3,0);
        tracep->declBit(c+673,"soc_top_with_cache vpu vlsu_inst xif_mem_valid_o", false,-1);
        tracep->declBit(c+674,"soc_top_with_cache vpu vlsu_inst xif_mem_ready_i", false,-1);
        tracep->declArray(c+862,"soc_top_with_cache vpu vlsu_inst xif_mem_req_o", false,-1, 81,0);
        tracep->declBus(c+1704,"soc_top_with_cache vpu vlsu_inst xif_mem_resp_i", false,-1, 7,0);
        tracep->declBit(c+675,"soc_top_with_cache vpu vlsu_inst xif_mem_result_valid_i", false,-1);
        tracep->declQuad(c+676,"soc_top_with_cache vpu vlsu_inst xif_mem_result_i", false,-1, 37,0);
        tracep->declBus(c+1810,"soc_top_with_cache vpu vlsu_inst WORDS_PER_VECTOR", false,-1, 31,0);
        tracep->declBus(c+837,"soc_top_with_cache vpu vlsu_inst state", false,-1, 2,0);
        tracep->declBus(c+530,"soc_top_with_cache vpu vlsu_inst next_state", false,-1, 2,0);
        tracep->declBus(c+838,"soc_top_with_cache vpu vlsu_inst word_counter", false,-1, 4,0);
        tracep->declBus(c+839,"soc_top_with_cache vpu vlsu_inst current_addr", false,-1, 31,0);
        tracep->declBit(c+840,"soc_top_with_cache vpu vlsu_inst is_load", false,-1);
        tracep->declArray(c+692,"soc_top_with_cache vpu vlsu_inst load_data_reg", false,-1, 255,0);
        tracep->declArray(c+841,"soc_top_with_cache vpu vlsu_inst store_data_q", false,-1, 255,0);
        tracep->declBus(c+1805,"soc_top_with_cache vpu exec_unit_inst VLEN", false,-1, 31,0);
        tracep->declBus(c+1806,"soc_top_with_cache vpu exec_unit_inst ELEMENT_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1656,"soc_top_with_cache vpu exec_unit_inst clk_i", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache vpu exec_unit_inst rst_ni", false,-1);
        tracep->declBit(c+525,"soc_top_with_cache vpu exec_unit_inst start_i", false,-1);
        tracep->declBit(c+1673,"soc_top_with_cache vpu exec_unit_inst done_o", false,-1);
        tracep->declBus(c+871,"soc_top_with_cache vpu exec_unit_inst funct7_i", false,-1, 6,0);
        tracep->declBus(c+872,"soc_top_with_cache vpu exec_unit_inst funct3_i", false,-1, 2,0);
        tracep->declArray(c+885,"soc_top_with_cache vpu exec_unit_inst vec_a_i", false,-1, 255,0);
        tracep->declArray(c+893,"soc_top_with_cache vpu exec_unit_inst vec_b_i", false,-1, 255,0);
        tracep->declArray(c+1811,"soc_top_with_cache vpu exec_unit_inst vec_c_i", false,-1, 255,0);
        tracep->declArray(c+901,"soc_top_with_cache vpu exec_unit_inst result_o", false,-1, 255,0);
        tracep->declBit(c+1698,"soc_top_with_cache vpu exec_unit_inst vrf_rd_en_o", false,-1);
        tracep->declBus(c+1703,"soc_top_with_cache vpu exec_unit_inst vrf_rd_addr_o", false,-1, 4,0);
        tracep->declArray(c+893,"soc_top_with_cache vpu exec_unit_inst vrf_rd_data_i", false,-1, 255,0);
        tracep->declBus(c+1810,"soc_top_with_cache vpu exec_unit_inst NUM_ELEMENTS", false,-1, 31,0);
        tracep->declArray(c+915,"soc_top_with_cache vpu exec_unit_inst vmac_result", false,-1, 255,0);
        tracep->declArray(c+923,"soc_top_with_cache vpu exec_unit_inst vadd_result", false,-1, 255,0);
        tracep->declArray(c+931,"soc_top_with_cache vpu exec_unit_inst vsub_result", false,-1, 255,0);
        tracep->declArray(c+939,"soc_top_with_cache vpu exec_unit_inst vmul_result", false,-1, 255,0);
        tracep->declBit(c+947,"soc_top_with_cache vpu exec_unit_inst busy_q", false,-1);
        tracep->declBus(c+948,"soc_top_with_cache vpu exec_unit_inst cycle_count", false,-1, 5,0);
        tracep->declBus(c+949,"soc_top_with_cache vpu exec_unit_inst funct7_q", false,-1, 6,0);
        tracep->declBus(c+849,"soc_top_with_cache vpu exec_unit_inst funct3_q", false,-1, 2,0);
        tracep->declBit(c+850,"soc_top_with_cache vpu exec_unit_inst matmul_active", false,-1);
        tracep->declBus(c+851,"soc_top_with_cache vpu exec_unit_inst matrix_size", false,-1, 1,0);
        tracep->declBus(c+950,"soc_top_with_cache vpu exec_unit_inst tile_row", false,-1, 2,0);
        tracep->declBus(c+951,"soc_top_with_cache vpu exec_unit_inst tile_col", false,-1, 2,0);
        tracep->declBus(c+952,"soc_top_with_cache vpu exec_unit_inst tile_k", false,-1, 2,0);
        tracep->declBus(c+852,"soc_top_with_cache vpu exec_unit_inst max_tiles", false,-1, 2,0);
        tracep->declBus(c+853,"soc_top_with_cache vpu exec_unit_inst actual_size", false,-1, 2,0);
        tracep->declBit(c+953,"soc_top_with_cache vpu exec_unit_inst sys_start", false,-1);
        tracep->declBit(c+954,"soc_top_with_cache vpu exec_unit_inst sys_clear", false,-1);
        tracep->declBit(c+955,"soc_top_with_cache vpu exec_unit_inst sys_accumulate", false,-1);
        tracep->declBit(c+956,"soc_top_with_cache vpu exec_unit_inst sys_busy", false,-1);
        tracep->declBit(c+957,"soc_top_with_cache vpu exec_unit_inst sys_done", false,-1);
        tracep->declBus(c+958,"soc_top_with_cache vpu exec_unit_inst sys_a_row0", false,-1, 31,0);
        tracep->declBus(c+959,"soc_top_with_cache vpu exec_unit_inst sys_a_row1", false,-1, 31,0);
        tracep->declBus(c+960,"soc_top_with_cache vpu exec_unit_inst sys_b_col0", false,-1, 31,0);
        tracep->declBus(c+961,"soc_top_with_cache vpu exec_unit_inst sys_b_col1", false,-1, 31,0);
        tracep->declBit(c+962,"soc_top_with_cache vpu exec_unit_inst sys_a_valid", false,-1);
        tracep->declBit(c+963,"soc_top_with_cache vpu exec_unit_inst sys_b_valid", false,-1);
        tracep->declQuad(c+964,"soc_top_with_cache vpu exec_unit_inst sys_c00", false,-1, 63,0);
        tracep->declQuad(c+966,"soc_top_with_cache vpu exec_unit_inst sys_c01", false,-1, 63,0);
        tracep->declQuad(c+968,"soc_top_with_cache vpu exec_unit_inst sys_c10", false,-1, 63,0);
        tracep->declQuad(c+970,"soc_top_with_cache vpu exec_unit_inst sys_c11", false,-1, 63,0);
        tracep->declBus(c+972,"soc_top_with_cache vpu exec_unit_inst mm_state", false,-1, 3,0);
        tracep->declBus(c+973,"soc_top_with_cache vpu exec_unit_inst mm_next_state", false,-1, 3,0);
        tracep->declBus(c+1819,"soc_top_with_cache vpu exec_unit_inst unnamedblk1 i", false,-1, 31,0);
        tracep->declBus(c+974,"soc_top_with_cache vpu exec_unit_inst unnamedblk1 unnamedblk2 a_elem", false,-1, 31,0);
        tracep->declBus(c+975,"soc_top_with_cache vpu exec_unit_inst unnamedblk1 unnamedblk2 b_elem", false,-1, 31,0);
        tracep->declBus(c+1695,"soc_top_with_cache vpu exec_unit_inst unnamedblk1 unnamedblk2 c_elem", false,-1, 31,0);
        tracep->declQuad(c+976,"soc_top_with_cache vpu exec_unit_inst unnamedblk1 unnamedblk2 prod", false,-1, 63,0);
        tracep->declBus(c+1819,"soc_top_with_cache vpu exec_unit_inst unnamedblk3 i", false,-1, 31,0);
        tracep->declBus(c+978,"soc_top_with_cache vpu exec_unit_inst unnamedblk3 unnamedblk4 a_elem", false,-1, 31,0);
        tracep->declBus(c+979,"soc_top_with_cache vpu exec_unit_inst unnamedblk3 unnamedblk4 b_elem", false,-1, 31,0);
        tracep->declBus(c+1819,"soc_top_with_cache vpu exec_unit_inst unnamedblk5 i", false,-1, 31,0);
        tracep->declBus(c+980,"soc_top_with_cache vpu exec_unit_inst unnamedblk5 unnamedblk6 a_elem", false,-1, 31,0);
        tracep->declBus(c+981,"soc_top_with_cache vpu exec_unit_inst unnamedblk5 unnamedblk6 b_elem", false,-1, 31,0);
        tracep->declBus(c+1819,"soc_top_with_cache vpu exec_unit_inst unnamedblk7 i", false,-1, 31,0);
        tracep->declBus(c+982,"soc_top_with_cache vpu exec_unit_inst unnamedblk7 unnamedblk8 a_elem", false,-1, 31,0);
        tracep->declBus(c+983,"soc_top_with_cache vpu exec_unit_inst unnamedblk7 unnamedblk8 b_elem", false,-1, 31,0);
        tracep->declQuad(c+984,"soc_top_with_cache vpu exec_unit_inst unnamedblk7 unnamedblk8 prod", false,-1, 63,0);
        tracep->declBus(c+854,"soc_top_with_cache vpu exec_unit_inst unnamedblk11 i", false,-1, 31,0);
        tracep->declBus(c+855,"soc_top_with_cache vpu exec_unit_inst unnamedblk12 i", false,-1, 31,0);
        tracep->declBus(c+856,"soc_top_with_cache vpu exec_unit_inst unnamedblk12 unnamedblk13 j", false,-1, 31,0);
        tracep->declBus(c+857,"soc_top_with_cache vpu exec_unit_inst unnamedblk9 i", false,-1, 31,0);
        tracep->declBus(c+858,"soc_top_with_cache vpu exec_unit_inst unnamedblk9 unnamedblk10 j", false,-1, 31,0);
        tracep->declBus(c+986,"soc_top_with_cache vpu exec_unit_inst unnamedblk14 idx", false,-1, 31,0);
        tracep->declBus(c+1806,"soc_top_with_cache vpu exec_unit_inst systolic_inst DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1820,"soc_top_with_cache vpu exec_unit_inst systolic_inst ACCUM_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1656,"soc_top_with_cache vpu exec_unit_inst systolic_inst clk_i", false,-1);
        tracep->declBit(c+1657,"soc_top_with_cache vpu exec_unit_inst systolic_inst rst_ni", false,-1);
        tracep->declBit(c+953,"soc_top_with_cache vpu exec_unit_inst systolic_inst start_i", false,-1);
        tracep->declBit(c+954,"soc_top_with_cache vpu exec_unit_inst systolic_inst clear_i", false,-1);
        tracep->declBit(c+955,"soc_top_with_cache vpu exec_unit_inst systolic_inst accumulate_i", false,-1);
        tracep->declBit(c+956,"soc_top_with_cache vpu exec_unit_inst systolic_inst busy_o", false,-1);
        tracep->declBit(c+957,"soc_top_with_cache vpu exec_unit_inst systolic_inst done_o", false,-1);
        tracep->declBus(c+958,"soc_top_with_cache vpu exec_unit_inst systolic_inst a_row0_i", false,-1, 31,0);
        tracep->declBus(c+959,"soc_top_with_cache vpu exec_unit_inst systolic_inst a_row1_i", false,-1, 31,0);
        tracep->declBit(c+962,"soc_top_with_cache vpu exec_unit_inst systolic_inst a_valid_i", false,-1);
        tracep->declBus(c+960,"soc_top_with_cache vpu exec_unit_inst systolic_inst b_col0_i", false,-1, 31,0);
        tracep->declBus(c+961,"soc_top_with_cache vpu exec_unit_inst systolic_inst b_col1_i", false,-1, 31,0);
        tracep->declBit(c+963,"soc_top_with_cache vpu exec_unit_inst systolic_inst b_valid_i", false,-1);
        tracep->declQuad(c+964,"soc_top_with_cache vpu exec_unit_inst systolic_inst c00_o", false,-1, 63,0);
        tracep->declQuad(c+966,"soc_top_with_cache vpu exec_unit_inst systolic_inst c01_o", false,-1, 63,0);
        tracep->declQuad(c+968,"soc_top_with_cache vpu exec_unit_inst systolic_inst c10_o", false,-1, 63,0);
        tracep->declQuad(c+970,"soc_top_with_cache vpu exec_unit_inst systolic_inst c11_o", false,-1, 63,0);
        tracep->declArray(c+987,"soc_top_with_cache vpu exec_unit_inst systolic_inst pe(0)(0)", false,-1, 128,0);
        tracep->declArray(c+992,"soc_top_with_cache vpu exec_unit_inst systolic_inst pe(0)(1)", false,-1, 128,0);
        tracep->declArray(c+997,"soc_top_with_cache vpu exec_unit_inst systolic_inst pe(1)(0)", false,-1, 128,0);
        tracep->declArray(c+1002,"soc_top_with_cache vpu exec_unit_inst systolic_inst pe(1)(1)", false,-1, 128,0);
        tracep->declBus(c+1007,"soc_top_with_cache vpu exec_unit_inst systolic_inst a_wire(0)(0)", false,-1, 31,0);
        tracep->declBus(c+1008,"soc_top_with_cache vpu exec_unit_inst systolic_inst a_wire(0)(1)", false,-1, 31,0);
        tracep->declBus(c+1009,"soc_top_with_cache vpu exec_unit_inst systolic_inst a_wire(1)(0)", false,-1, 31,0);
        tracep->declBus(c+1010,"soc_top_with_cache vpu exec_unit_inst systolic_inst a_wire(1)(1)", false,-1, 31,0);
        tracep->declBus(c+1011,"soc_top_with_cache vpu exec_unit_inst systolic_inst b_wire(0)(0)", false,-1, 31,0);
        tracep->declBus(c+1012,"soc_top_with_cache vpu exec_unit_inst systolic_inst b_wire(0)(1)", false,-1, 31,0);
        tracep->declBus(c+1013,"soc_top_with_cache vpu exec_unit_inst systolic_inst b_wire(1)(0)", false,-1, 31,0);
        tracep->declBus(c+1014,"soc_top_with_cache vpu exec_unit_inst systolic_inst b_wire(1)(1)", false,-1, 31,0);
        tracep->declBus(c+1015,"soc_top_with_cache vpu exec_unit_inst systolic_inst state", false,-1, 2,0);
        tracep->declBus(c+1016,"soc_top_with_cache vpu exec_unit_inst systolic_inst next_state", false,-1, 2,0);
        tracep->declBus(c+859,"soc_top_with_cache vpu exec_unit_inst systolic_inst cycle_counter", false,-1, 3,0);
        tracep->declBus(c+958,"soc_top_with_cache vpu exec_unit_inst systolic_inst a_row0_skewed", false,-1, 31,0);
        tracep->declBus(c+860,"soc_top_with_cache vpu exec_unit_inst systolic_inst a_row1_skewed", false,-1, 31,0);
        tracep->declBus(c+960,"soc_top_with_cache vpu exec_unit_inst systolic_inst b_col0_skewed", false,-1, 31,0);
        tracep->declBus(c+861,"soc_top_with_cache vpu exec_unit_inst systolic_inst b_col1_skewed", false,-1, 31,0);
        tracep->declBus(c+860,"soc_top_with_cache vpu exec_unit_inst systolic_inst a_row1_delay", false,-1, 31,0);
        tracep->declBus(c+861,"soc_top_with_cache vpu exec_unit_inst systolic_inst b_col1_delay", false,-1, 31,0);
        tracep->declBus(c+1692,"cv32e40x_xif_pkg X_NUM_RS", false,-1, 31,0);
        tracep->declBus(c+1693,"cv32e40x_xif_pkg X_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1694,"cv32e40x_xif_pkg X_MEM_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1694,"cv32e40x_xif_pkg X_RFR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1694,"cv32e40x_xif_pkg X_RFW_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1806,"cv32e40x_xif_pkg XLEN", false,-1, 31,0);
        tracep->declBus(c+1806,"cv32e40x_xif_pkg FLEN", false,-1, 31,0);
        Vsoc_top_with_cache___024root__traceInitSub1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache xif");
        Vsoc_top_with_cache___024root__traceInitSub1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu xif_compressed_if");
        Vsoc_top_with_cache___024root__traceInitSub1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu xif_issue_if");
        Vsoc_top_with_cache___024root__traceInitSub1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu xif_commit_if");
        Vsoc_top_with_cache___024root__traceInitSub1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu xif_mem_if");
        Vsoc_top_with_cache___024root__traceInitSub1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu xif_mem_result_if");
        Vsoc_top_with_cache___024root__traceInitSub1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu xif_result_if");
        Vsoc_top_with_cache___024root__traceInitSub1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu if_stage_i xif_compressed_if");
        Vsoc_top_with_cache___024root__traceInitSub1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu id_stage_i xif_issue_if");
        Vsoc_top_with_cache___024root__traceInitSub1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu load_store_unit_i xif_mem_if");
        Vsoc_top_with_cache___024root__traceInitSub1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu load_store_unit_i xif_mem_result_if");
        Vsoc_top_with_cache___024root__traceInitSub1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu wb_stage_i xif_result_if");
        Vsoc_top_with_cache___024root__traceInitSub1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu controller_i xif_commit_if");
        Vsoc_top_with_cache___024root__traceInitSub1(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu controller_i controller_fsm_i xif_commit_if");
        Vsoc_top_with_cache___024root__traceInitSub2(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu m_c_obi_instr_if");
        Vsoc_top_with_cache___024root__traceInitSub2(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu if_stage_i m_c_obi_instr_if");
        Vsoc_top_with_cache___024root__traceInitSub2(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu if_stage_i instruction_obi_i m_c_obi_instr_if");
        Vsoc_top_with_cache___024root__traceInitSub3(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu m_c_obi_data_if");
        Vsoc_top_with_cache___024root__traceInitSub3(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu load_store_unit_i m_c_obi_data_if");
        Vsoc_top_with_cache___024root__traceInitSub3(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu load_store_unit_i data_obi_i m_c_obi_data_if");
        Vsoc_top_with_cache___024root__traceInitSub3(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu controller_i m_c_obi_data_if");
        Vsoc_top_with_cache___024root__traceInitSub3(vlSelf, tracep, VLT_TRACE_SCOPE_INTERFACE, "soc_top_with_cache cpu controller_i controller_fsm_i m_c_obi_data_if");
        tracep->declBus(c+1821,"cv32e40x_pkg ALU_OP_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1750,"cv32e40x_pkg MUL_OP_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1739,"cv32e40x_pkg DIV_OP_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1677,"cv32e40x_pkg HAVERESET_INDEX", false,-1, 31,0);
        tracep->declBus(c+1750,"cv32e40x_pkg RUNNING_INDEX", false,-1, 31,0);
        tracep->declBus(c+1739,"cv32e40x_pkg HALTED_INDEX", false,-1, 31,0);
        tracep->declBus(c+1822,"cv32e40x_pkg CSR_JVT_MASK", false,-1, 31,0);
        tracep->declBus(c+1823,"cv32e40x_pkg CSR_MEPC_MASK", false,-1, 31,0);
        tracep->declBus(c+1823,"cv32e40x_pkg CSR_DPC_MASK", false,-1, 31,0);
        tracep->declBus(c+1824,"cv32e40x_pkg CSR_MSCRATCH_MASK", false,-1, 31,0);
        tracep->declBus(c+1825,"cv32e40x_pkg CSR_DCSR_MASK", false,-1, 31,0);
        tracep->declBus(c+1824,"cv32e40x_pkg CSR_DSCRATCH0_MASK", false,-1, 31,0);
        tracep->declBus(c+1824,"cv32e40x_pkg CSR_DSCRATCH1_MASK", false,-1, 31,0);
        tracep->declBus(c+1826,"cv32e40x_pkg CSR_MSTATUS_MASK", false,-1, 31,0);
        tracep->declBus(c+1827,"cv32e40x_pkg CSR_MINTSTATUS_MASK", false,-1, 31,0);
        tracep->declBus(c+1828,"cv32e40x_pkg CSR_MINTTHRESH_MASK", false,-1, 31,0);
        tracep->declBus(c+1829,"cv32e40x_pkg CSR_CLIC_MCAUSE_MASK", false,-1, 31,0);
        tracep->declBus(c+1830,"cv32e40x_pkg CSR_BASIC_MCAUSE_MASK", false,-1, 31,0);
        tracep->declBus(c+1770,"cv32e40x_pkg CSR_CLIC_MTVEC_MASK", false,-1, 31,0);
        tracep->declBus(c+1831,"cv32e40x_pkg CSR_BASIC_MTVEC_MASK", false,-1, 31,0);
        tracep->declBus(c+1739,"cv32e40x_pkg CSR_OP_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1717,"cv32e40x_pkg CSR_MSIX_BIT", false,-1, 31,0);
        tracep->declBus(c+1705,"cv32e40x_pkg CSR_MTIX_BIT", false,-1, 31,0);
        tracep->declBus(c+1832,"cv32e40x_pkg CSR_MEIX_BIT", false,-1, 31,0);
        tracep->declBus(c+1833,"cv32e40x_pkg CSR_MFIX_BIT_LOW", false,-1, 31,0);
        tracep->declBus(c+1834,"cv32e40x_pkg CSR_MFIX_BIT_HIGH", false,-1, 31,0);
        tracep->declBus(c+1835,"cv32e40x_pkg PRIV_LVL_LOWEST", false,-1, 1,0);
        tracep->declBus(c+1836,"cv32e40x_pkg MVENDORID_OFFSET", false,-1, 6,0);
        tracep->declBus(c+1837,"cv32e40x_pkg MVENDORID_BANK", false,-1, 24,0);
        tracep->declBus(c+1775,"cv32e40x_pkg MARCHID", false,-1, 31,0);
        tracep->declBus(c+1699,"cv32e40x_pkg MIMPID_MAJOR", false,-1, 3,0);
        tracep->declBus(c+1699,"cv32e40x_pkg MIMPID_MINOR", false,-1, 3,0);
        tracep->declBus(c+1838,"cv32e40x_pkg MTVEC_MODE_BASIC", false,-1, 1,0);
        tracep->declBus(c+1839,"cv32e40x_pkg MTVEC_MODE_CLIC", false,-1, 1,0);
        tracep->declBus(c+1840,"cv32e40x_pkg NUM_HPM_EVENTS", false,-1, 31,0);
        tracep->declBus(c+1841,"cv32e40x_pkg MSTATUS_MIE_BIT", false,-1, 31,0);
        tracep->declBus(c+1737,"cv32e40x_pkg MSTATUS_MPIE_BIT", false,-1, 31,0);
        tracep->declBus(c+1736,"cv32e40x_pkg MSTATUS_MPP_BIT_LOW", false,-1, 31,0);
        tracep->declBus(c+1842,"cv32e40x_pkg MSTATUS_MPP_BIT_HIGH", false,-1, 31,0);
        tracep->declBus(c+1843,"cv32e40x_pkg MSTATUS_MPRV_BIT", false,-1, 31,0);
        tracep->declBus(c+1735,"cv32e40x_pkg MCAUSE_MPIE_BIT", false,-1, 31,0);
        tracep->declBus(c+1844,"cv32e40x_pkg MCAUSE_MPP_BIT_LOW", false,-1, 31,0);
        tracep->declBus(c+1845,"cv32e40x_pkg MCAUSE_MPP_BIT_HIGH", false,-1, 31,0);
        tracep->declBus(c+1750,"cv32e40x_pkg MTVEC_MODE_BIT_HIGH", false,-1, 31,0);
        tracep->declBus(c+1677,"cv32e40x_pkg MTVEC_MODE_BIT_LOW", false,-1, 31,0);
        tracep->declBus(c+1842,"cv32e40x_pkg DCSR_EBREAKU_BIT", false,-1, 31,0);
        tracep->declBus(c+1750,"cv32e40x_pkg DCSR_PRV_BIT_HIGH", false,-1, 31,0);
        tracep->declBus(c+1677,"cv32e40x_pkg DCSR_PRV_BIT_LOW", false,-1, 31,0);
        tracep->declBus(c+1838,"cv32e40x_pkg MXL", false,-1, 1,0);
        tracep->declBus(c+1846,"cv32e40x_pkg JVT_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1847,"cv32e40x_pkg DBG_CAUSE_NONE", false,-1, 2,0);
        tracep->declBus(c+1848,"cv32e40x_pkg DBG_CAUSE_EBREAK", false,-1, 2,0);
        tracep->declBus(c+1849,"cv32e40x_pkg DBG_CAUSE_TRIGGER", false,-1, 2,0);
        tracep->declBus(c+1710,"cv32e40x_pkg DBG_CAUSE_HALTREQ", false,-1, 2,0);
        tracep->declBus(c+1850,"cv32e40x_pkg DBG_CAUSE_STEP", false,-1, 2,0);
        tracep->declBus(c+1851,"cv32e40x_pkg DBG_CAUSE_RSTHALTREQ", false,-1, 2,0);
        tracep->declBus(c+1852,"cv32e40x_pkg DCSR_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1853,"cv32e40x_pkg MTVEC_BASIC_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1854,"cv32e40x_pkg MTVEC_CLIC_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1855,"cv32e40x_pkg MTVT_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1856,"cv32e40x_pkg MINTSTATUS_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1857,"cv32e40x_pkg MSTATUS_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1858,"cv32e40x_pkg MCAUSE_CLIC_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1859,"cv32e40x_pkg MCAUSE_BASIC_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1695,"cv32e40x_pkg JVT_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1695,"cv32e40x_pkg MSCRATCH_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1695,"cv32e40x_pkg MEPC_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1695,"cv32e40x_pkg DPC_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1695,"cv32e40x_pkg DSCRATCH0_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1695,"cv32e40x_pkg DSCRATCH1_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1695,"cv32e40x_pkg MINTTHRESH_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1695,"cv32e40x_pkg MIE_BASIC_RESET_VAL", false,-1, 31,0);
        tracep->declBus(c+1860,"cv32e40x_pkg TDATA1_RST_VAL", false,-1, 31,0);
        tracep->declBus(c+1846,"cv32e40x_pkg MCONTROL_6_UNCERTAIN", false,-1, 31,0);
        tracep->declBus(c+1861,"cv32e40x_pkg MCONTROL_6_HIT1", false,-1, 31,0);
        tracep->declBus(c+1862,"cv32e40x_pkg MCONTROL_6_HIT0", false,-1, 31,0);
        tracep->declBus(c+1863,"cv32e40x_pkg MCONTROL2_6_MATCH_HIGH", false,-1, 31,0);
        tracep->declBus(c+1737,"cv32e40x_pkg MCONTROL2_6_MATCH_LOW", false,-1, 31,0);
        tracep->declBus(c+1821,"cv32e40x_pkg MCONTROL2_6_M", false,-1, 31,0);
        tracep->declBus(c+1756,"cv32e40x_pkg MCONTROL_6_UNCERTAINEN", false,-1, 31,0);
        tracep->declBus(c+1841,"cv32e40x_pkg MCONTROL2_6_U", false,-1, 31,0);
        tracep->declBus(c+1739,"cv32e40x_pkg MCONTROL2_6_EXECUTE", false,-1, 31,0);
        tracep->declBus(c+1750,"cv32e40x_pkg MCONTROL2_6_STORE", false,-1, 31,0);
        tracep->declBus(c+1677,"cv32e40x_pkg MCONTROL2_6_LOAD", false,-1, 31,0);
        tracep->declBus(c+1864,"cv32e40x_pkg ETRIGGER_M", false,-1, 31,0);
        tracep->declBus(c+1821,"cv32e40x_pkg ETRIGGER_U", false,-1, 31,0);
        tracep->declBus(c+1734,"cv32e40x_pkg TDATA1_TTYPE_HIGH", false,-1, 31,0);
        tracep->declBus(c+1844,"cv32e40x_pkg TDATA1_TTYPE_LOW", false,-1, 31,0);
        tracep->declBus(c+1750,"cv32e40x_pkg REGFILE_NUM_WRITE_PORTS", false,-1, 31,0);
        tracep->declBus(c+1756,"cv32e40x_pkg REGFILE_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1804,"cv32e40x_pkg REGFILE_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1804,"cv32e40x_pkg REGFILE_WORD_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1865,"cv32e40x_pkg AMO_LR", false,-1, 4,0);
        tracep->declBus(c+1866,"cv32e40x_pkg AMO_SC", false,-1, 4,0);
        tracep->declBus(c+1867,"cv32e40x_pkg AMO_SWAP", false,-1, 4,0);
        tracep->declBus(c+1703,"cv32e40x_pkg AMO_ADD", false,-1, 4,0);
        tracep->declBus(c+1868,"cv32e40x_pkg AMO_XOR", false,-1, 4,0);
        tracep->declBus(c+1869,"cv32e40x_pkg AMO_AND", false,-1, 4,0);
        tracep->declBus(c+1870,"cv32e40x_pkg AMO_OR", false,-1, 4,0);
        tracep->declBus(c+1871,"cv32e40x_pkg AMO_MIN", false,-1, 4,0);
        tracep->declBus(c+1872,"cv32e40x_pkg AMO_MAX", false,-1, 4,0);
        tracep->declBus(c+1873,"cv32e40x_pkg AMO_MINU", false,-1, 4,0);
        tracep->declBus(c+1874,"cv32e40x_pkg AMO_MAXU", false,-1, 4,0);
        tracep->declQuad(c+1744,"cv32e40x_pkg DECODER_CTRL_ILLEGAL_INSN", false,-1, 54,0);
        tracep->declBus(c+1875,"cv32e40x_pkg EXC_CAUSE_INSTR_FAULT", false,-1, 10,0);
        tracep->declBus(c+1876,"cv32e40x_pkg EXC_CAUSE_ILLEGAL_INSN", false,-1, 10,0);
        tracep->declBus(c+1877,"cv32e40x_pkg EXC_CAUSE_BREAKPOINT", false,-1, 10,0);
        tracep->declBus(c+1878,"cv32e40x_pkg EXC_CAUSE_LOAD_FAULT", false,-1, 10,0);
        tracep->declBus(c+1879,"cv32e40x_pkg EXC_CAUSE_STORE_FAULT", false,-1, 10,0);
        tracep->declBus(c+1880,"cv32e40x_pkg EXC_CAUSE_ECALL_MMODE", false,-1, 10,0);
        tracep->declBus(c+1881,"cv32e40x_pkg EXC_CAUSE_INSTR_BUS_FAULT", false,-1, 10,0);
        tracep->declBus(c+1882,"cv32e40x_pkg INT_CAUSE_LSU_LOAD_FAULT", false,-1, 10,0);
        tracep->declBus(c+1883,"cv32e40x_pkg INT_CAUSE_LSU_STORE_FAULT", false,-1, 10,0);
        tracep->declBus(c+1884,"cv32e40x_pkg IRQ_MASK", false,-1, 31,0);
        tracep->declBus(c+1885,"cv32e40x_pkg NMI_MTVEC_INDEX", false,-1, 4,0);
        tracep->declArray(c+1886,"cv32e40x_pkg NO_PMA_R_DEFAULT", false,-1, 67,0);
        tracep->declArray(c+1889,"cv32e40x_pkg PMA_R_DEFAULT", false,-1, 67,0);
        tracep->declBus(c+1804,"cv32e40x_pkg INSTR_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1804,"cv32e40x_pkg INSTR_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1804,"cv32e40x_pkg DATA_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1804,"cv32e40x_pkg DATA_DATA_WIDTH", false,-1, 31,0);
        tracep->declQuad(c+1892,"cv32e40x_pkg INST_RESP_RESET_VAL", false,-1, 34,0);
        tracep->declQuad(c+1894,"cv32e40x_pkg OBI_INST_REQ_RESET_VAL", false,-1, 37,0);
        tracep->declBus(c+1703,"cv32e40x_pkg REG_ZERO", false,-1, 4,0);
        tracep->declBus(c+1867,"cv32e40x_pkg REG_RA", false,-1, 4,0);
        tracep->declBus(c+1865,"cv32e40x_pkg REG_SP", false,-1, 4,0);
    }
}

void Vsoc_top_with_cache___024root__traceInitSub1(Vsoc_top_with_cache___024root* vlSelf, VerilatedVcd* tracep, int scopet, const char* scopep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+1692,Verilated::catName(scopep,"X_NUM_RS",(int)scopet," "), false,-1, 31,0);
        tracep->declBus(c+1693,Verilated::catName(scopep,"X_ID_WIDTH",(int)scopet," "), false,-1, 31,0);
        tracep->declBus(c+1694,Verilated::catName(scopep,"X_MEM_WIDTH",(int)scopet," "), false,-1, 31,0);
        tracep->declBus(c+1694,Verilated::catName(scopep,"X_RFR_WIDTH",(int)scopet," "), false,-1, 31,0);
        tracep->declBus(c+1694,Verilated::catName(scopep,"X_RFW_WIDTH",(int)scopet," "), false,-1, 31,0);
        tracep->declBus(c+1695,Verilated::catName(scopep,"X_MISA",(int)scopet," "), false,-1, 31,0);
        tracep->declBus(c+1696,Verilated::catName(scopep,"X_ECS_XS",(int)scopet," "), false,-1, 1,0);
        tracep->declBus(c+1806,Verilated::catName(scopep,"XLEN",(int)scopet," "), false,-1, 31,0);
        tracep->declBus(c+1806,Verilated::catName(scopep,"FLEN",(int)scopet," "), false,-1, 31,0);
        tracep->declBit(c+1698,Verilated::catName(scopep,"compressed_valid",(int)scopet," "), false,-1);
        tracep->declBit(c+1896,Verilated::catName(scopep,"compressed_ready",(int)scopet," "), false,-1);
        tracep->declBus(c+1897,Verilated::catName(scopep,"compressed_req",(int)scopet," "), false,-1, 21,0);
        tracep->declQuad(c+1898,Verilated::catName(scopep,"compressed_resp",(int)scopet," "), false,-1, 32,0);
        tracep->declBit(c+517,Verilated::catName(scopep,"issue_valid",(int)scopet," "), false,-1);
        tracep->declBit(c+1670,Verilated::catName(scopep,"issue_ready",(int)scopet," "), false,-1);
        tracep->declArray(c+655,Verilated::catName(scopep,"issue_req",(int)scopet," "), false,-1, 110,0);
        tracep->declBus(c+518,Verilated::catName(scopep,"issue_resp",(int)scopet," "), false,-1, 8,0);
        tracep->declBit(c+659,Verilated::catName(scopep,"commit_valid",(int)scopet," "), false,-1);
        tracep->declBus(c+519,Verilated::catName(scopep,"commit",(int)scopet," "), false,-1, 4,0);
        tracep->declBit(c+1763,Verilated::catName(scopep,"mem_valid",(int)scopet," "), false,-1);
        tracep->declBit(c+531,Verilated::catName(scopep,"mem_ready",(int)scopet," "), false,-1);
        tracep->declArray(c+1900,Verilated::catName(scopep,"mem_req",(int)scopet," "), false,-1, 81,0);
        tracep->declBus(c+532,Verilated::catName(scopep,"mem_resp",(int)scopet," "), false,-1, 7,0);
        tracep->declBit(c+666,Verilated::catName(scopep,"mem_result_valid",(int)scopet," "), false,-1);
        tracep->declQuad(c+533,Verilated::catName(scopep,"mem_result",(int)scopet," "), false,-1, 37,0);
        tracep->declBit(c+520,Verilated::catName(scopep,"result_valid",(int)scopet," "), false,-1);
        tracep->declBit(c+1655,Verilated::catName(scopep,"result_ready",(int)scopet," "), false,-1);
        tracep->declQuad(c+865,Verilated::catName(scopep,"result",(int)scopet," "), false,-1, 59,0);
    }
}

void Vsoc_top_with_cache___024root__traceInitSub2(Vsoc_top_with_cache___024root* vlSelf, VerilatedVcd* tracep, int scopet, const char* scopep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+3,Verilated::catName(scopep,"s_req",(int)scopet," "), false,-1, 0,0);
        tracep->declBus(c+667,Verilated::catName(scopep,"s_gnt",(int)scopet," "), false,-1, 0,0);
        tracep->declQuad(c+535,Verilated::catName(scopep,"req_payload",(int)scopet," "), false,-1, 37,0);
        tracep->declBus(c+668,Verilated::catName(scopep,"s_rvalid",(int)scopet," "), false,-1, 0,0);
        tracep->declQuad(c+688,Verilated::catName(scopep,"resp_payload",(int)scopet," "), false,-1, 32,0);
    }
}

void Vsoc_top_with_cache___024root__traceInitSub3(Vsoc_top_with_cache___024root* vlSelf, VerilatedVcd* tracep, int scopet, const char* scopep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+5,Verilated::catName(scopep,"s_req",(int)scopet," "), false,-1, 0,0);
        tracep->declBus(c+670,Verilated::catName(scopep,"s_gnt",(int)scopet," "), false,-1, 0,0);
        tracep->declArray(c+264,Verilated::catName(scopep,"req_payload",(int)scopet," "), false,-1, 80,0);
        tracep->declBus(c+671,Verilated::catName(scopep,"s_rvalid",(int)scopet," "), false,-1, 0,0);
        tracep->declQuad(c+690,Verilated::catName(scopep,"resp_payload",(int)scopet," "), false,-1, 34,0);
    }
}

void Vsoc_top_with_cache___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vsoc_top_with_cache___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vsoc_top_with_cache___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vsoc_top_with_cache___024root__traceRegister(Vsoc_top_with_cache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vsoc_top_with_cache___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vsoc_top_with_cache___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vsoc_top_with_cache___024root__traceCleanup, vlSelf);
    }
}

void Vsoc_top_with_cache___024root__traceFullSub0(Vsoc_top_with_cache___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsoc_top_with_cache___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsoc_top_with_cache___024root* const __restrict vlSelf = static_cast<Vsoc_top_with_cache___024root*>(voidSelf);
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsoc_top_with_cache___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

extern const VlWide<8>/*255:0*/ Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0;

void Vsoc_top_with_cache___024root__traceFullSub0(Vsoc_top_with_cache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top_with_cache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<8>/*255:0*/ __Vtemp304;
    VlWide<5>/*159:0*/ __Vtemp309;
    VlWide<5>/*159:0*/ __Vtemp310;
    VlWide<5>/*159:0*/ __Vtemp311;
    VlWide<5>/*159:0*/ __Vtemp312;
    VlWide<3>/*95:0*/ __Vtemp313;
    VlWide<3>/*95:0*/ __Vtemp314;
    VlWide<5>/*159:0*/ __Vtemp315;
    VlWide<3>/*95:0*/ __Vtemp316;
    VlWide<3>/*95:0*/ __Vtemp317;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->soc_top_with_cache__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+2,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__unnamedblk1__DOT__i),32);
        tracep->fullBit(oldp+3,(vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.s_req));
        tracep->fullIData(oldp+4,(((IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.req_payload 
                                            >> 8U)) 
                                   << 2U)),32);
        tracep->fullBit(oldp+5,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans_valid));
        tracep->fullBit(oldp+6,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                       >> 0xaU))));
        tracep->fullCData(oldp+7,((0xfU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                           >> 6U))),4);
        tracep->fullIData(oldp+8,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[2U] 
                                    << 0xfU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                >> 0x11U))),32);
        tracep->fullIData(oldp+9,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                    << 0x1aU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                                 >> 6U))),32);
        tracep->fullCData(oldp+10,((3U & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.req_payload 
                                                  >> 4U)))),2);
        tracep->fullCData(oldp+11,((7U & (IData)((vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.req_payload 
                                                  >> 1U)))),3);
        tracep->fullBit(oldp+12,((1U & (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.req_payload))));
        tracep->fullCData(oldp+13,((3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                          >> 4U))),2);
        tracep->fullCData(oldp+14,((7U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                          >> 1U))),3);
        tracep->fullBit(oldp+15,((1U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[0U])));
        tracep->fullCData(oldp+16,((0x3fU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                             >> 0xbU))),6);
        tracep->fullBit(oldp+17,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__clk));
        tracep->fullCData(oldp+18,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp),2);
        tracep->fullIData(oldp+19,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target),32);
        tracep->fullBit(oldp+20,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_busy));
        tracep->fullIData(oldp+21,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_wdata_wb),32);
        tracep->fullIData(oldp+22,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_wdata_ex),32);
        tracep->fullBit(oldp+23,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__last_op_if));
        tracep->fullBit(oldp+24,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__last_op_id));
        tracep->fullBit(oldp+25,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__last_op_ex));
        tracep->fullBit(oldp+26,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__abort_op_if));
        tracep->fullBit(oldp+27,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__abort_op_id));
        tracep->fullBit(oldp+28,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__abort_op_wb));
        tracep->fullCData(oldp+29,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_re_id),2);
        tracep->fullIData(oldp+30,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_wdata[0]),32);
        tracep->fullBit(oldp+31,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_we[0]));
        tracep->fullIData(oldp+32,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        tracep->fullBit(oldp+33,((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we) 
                                   | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_we)) 
                                  | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__priv_lvl_we))));
        tracep->fullBit(oldp+34,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_split_ex));
        tracep->fullBit(oldp+35,((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_split_ex)))));
        tracep->fullCData(oldp+36,((3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                          >> 2U))),2);
        tracep->fullIData(oldp+37,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                     << 0x1eU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[0U] 
                                                  >> 2U))),32);
        tracep->fullCData(oldp+38,((3U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[0U])),2);
        tracep->fullIData(oldp+39,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_ext),32);
        tracep->fullCData(oldp+40,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_err_wb),2);
        tracep->fullBit(oldp+41,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_ready));
        tracep->fullBit(oldp+42,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__lsu_en_gated));
        tracep->fullBit(oldp+43,((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__done_0) 
                                   & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_split_ex))) 
                                  & (~ (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid)))));
        tracep->fullBit(oldp+44,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_valid_1));
        tracep->fullIData(oldp+45,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                     << 0xfU) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                 >> 0x11U))),32);
        tracep->fullBit(oldp+46,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                        >> 0xaU))));
        tracep->fullCData(oldp+47,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__be),4);
        tracep->fullIData(oldp+48,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match),32);
        tracep->fullCData(oldp+49,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_mpu_status),2);
        tracep->fullCData(oldp+50,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_align_status),2);
        tracep->fullBit(oldp+51,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ready));
        tracep->fullBit(oldp+52,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_ready));
        tracep->fullBit(oldp+53,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instr_valid));
        tracep->fullBit(oldp+54,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_valid));
        tracep->fullBit(oldp+55,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_valid));
        tracep->fullBit(oldp+56,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__wb_valid));
        tracep->fullBit(oldp+57,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_mtvec_init_if));
        tracep->fullIData(oldp+58,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata),32);
        tracep->fullIData(oldp+59,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if),32);
        tracep->fullIData(oldp+60,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex),32);
        tracep->fullBit(oldp+61,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                >> 0x34U)))));
        tracep->fullBit(oldp+62,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                >> 0x33U)))));
        tracep->fullBit(oldp+63,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__alu_en));
        tracep->fullBit(oldp+64,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__sys_en));
        tracep->fullBit(oldp+65,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                >> 2U)))));
        tracep->fullBit(oldp+66,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                >> 0x17U)))));
        tracep->fullBit(oldp+67,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_illegal));
        tracep->fullBit(oldp+68,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__xif_csr_error_ex));
        tracep->fullBit(oldp+69,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
        tracep->fullBit(oldp+70,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__if_ready));
        tracep->fullIData(oldp+71,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__branch_addr_n),32);
        tracep->fullBit(oldp+72,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_valid));
        tracep->fullQData(oldp+73,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr),35);
        tracep->fullBit(oldp+75,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__illegal_c_insn));
        tracep->fullQData(oldp+76,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instr_decompressed),35);
        tracep->fullBit(oldp+78,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instr_compressed));
        tracep->fullBit(oldp+79,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_resp_valid));
        tracep->fullBit(oldp+80,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid));
        tracep->fullBit(oldp+81,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_ready));
        tracep->fullIData(oldp+82,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_trans_addr),32);
        tracep->fullBit(oldp+83,((1U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n))));
        tracep->fullBit(oldp+84,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                                  & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus)))));
        tracep->fullQData(oldp+85,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__bus_trans_o),38);
        tracep->fullQData(oldp+87,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__core_trans),38);
        tracep->fullBit(oldp+89,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_valid));
        tracep->fullBit(oldp+90,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_last));
        tracep->fullQData(oldp+91,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_instr),35);
        tracep->fullBit(oldp+93,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_tbljmp));
        tracep->fullBit(oldp+94,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_pushpop));
        tracep->fullIData(oldp+95,((0xfffffffeU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__branch_addr_n)),32);
        tracep->fullBit(oldp+96,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready));
        tracep->fullBit(oldp+97,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access));
        tracep->fullBit(oldp+98,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp));
        tracep->fullBit(oldp+99,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state));
        tracep->fullCData(oldp+100,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n),2);
        tracep->fullBit(oldp+101,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid) 
                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready))));
        tracep->fullCData(oldp+102,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins),2);
        tracep->fullBit(oldp+103,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n));
        tracep->fullBit(oldp+104,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n));
        tracep->fullCData(oldp+105,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n),2);
        tracep->fullCData(oldp+106,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch),2);
        tracep->fullBit(oldp+107,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned));
        tracep->fullCData(oldp+108,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned),2);
        tracep->fullBit(oldp+109,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated));
        tracep->fullCData(oldp+110,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n),3);
        tracep->fullCData(oldp+111,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int),3);
        tracep->fullQData(oldp+112,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n),35);
        tracep->fullCData(oldp+114,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n),2);
        tracep->fullCData(oldp+115,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n),2);
        tracep->fullIData(oldp+116,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n),32);
        tracep->fullIData(oldp+117,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr),32);
        tracep->fullBit(oldp+118,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid));
        tracep->fullBit(oldp+119,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed));
        tracep->fullBit(oldp+120,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed));
        tracep->fullBit(oldp+121,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err));
        tracep->fullBit(oldp+122,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core));
        tracep->fullBit(oldp+123,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus));
        tracep->fullBit(oldp+124,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
        tracep->fullBit(oldp+125,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready));
        tracep->fullCData(oldp+126,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status),2);
        tracep->fullCData(oldp+127,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__state_n),3);
        tracep->fullBit(oldp+128,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+129,((((0xf0000000U <= (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__core_trans 
                                                             >> 6U))) 
                                    & (0xf0003fffU 
                                       >= (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__core_trans 
                                                   >> 6U)))) 
                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__core_trans))));
        tracep->fullIData(oldp+130,((IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__core_trans 
                                             >> 6U))),32);
        tracep->fullWData(oldp+131,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg),68);
        tracep->fullIData(oldp+134,((0x3fffffffU & (IData)(
                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__core_trans 
                                                            >> 8U)))),32);
        tracep->fullBit(oldp+135,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state));
        tracep->fullIData(oldp+136,((IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                             >> 3U))),32);
        tracep->fullQData(oldp+137,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode),45);
        tracep->fullCData(oldp+139,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr),4);
        tracep->fullCData(oldp+140,((0xfU & (IData)(
                                                    (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                     >> 7U)))),4);
        tracep->fullBit(oldp+141,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load));
        tracep->fullBit(oldp+142,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store));
        tracep->fullBit(oldp+143,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s));
        tracep->fullBit(oldp+144,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a));
        tracep->fullCData(oldp+145,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n),4);
        tracep->fullBit(oldp+146,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm));
        tracep->fullBit(oldp+147,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm));
        tracep->fullBit(oldp+148,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__dmove_legal_dest_a2s));
        tracep->fullBit(oldp+149,((3U < (0xfU & (IData)(
                                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 7U))))));
        tracep->fullCData(oldp+150,((3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                   >> 0x19U)))),2);
        tracep->fullBit(oldp+151,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__rf_we));
        tracep->fullBit(oldp+152,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                 >> 0x35U)))));
        tracep->fullCData(oldp+153,((0x3fU & (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                      >> 0x2dU)))),6);
        tracep->fullBit(oldp+154,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__mul_en));
        tracep->fullBit(oldp+155,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__div_en));
        tracep->fullBit(oldp+156,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__lsu_en));
        tracep->fullBit(oldp+157,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x13U)))));
        tracep->fullCData(oldp+158,((3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                   >> 0x11U)))),2);
        tracep->fullBit(oldp+159,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x10U)))));
        tracep->fullBit(oldp+160,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__csr_en));
        tracep->fullCData(oldp+161,((3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                   >> 0x15U)))),2);
        tracep->fullBit(oldp+162,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                 >> 4U)))));
        tracep->fullBit(oldp+163,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                 >> 3U)))));
        tracep->fullBit(oldp+164,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                 >> 5U)))));
        tracep->fullBit(oldp+165,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                 >> 6U)))));
        tracep->fullBit(oldp+166,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                 >> 7U)))));
        tracep->fullBit(oldp+167,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                 >> 1U)))));
        tracep->fullBit(oldp+168,((1U & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))));
        tracep->fullIData(oldp+169,(((0U == (3U & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                           >> 0x27U))))
                                      ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__operand_b_fw
                                      : ((1U == (3U 
                                                 & (IData)(
                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                            >> 0x27U))))
                                          ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target
                                          : vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__operand_b_fw))),32);
        tracep->fullIData(oldp+170,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__operand_a_fw),32);
        tracep->fullIData(oldp+171,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__operand_b_fw),32);
        tracep->fullCData(oldp+172,((3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                   >> 0x2bU)))),2);
        tracep->fullCData(oldp+173,((3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                   >> 0x29U)))),2);
        tracep->fullCData(oldp+174,((3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                   >> 0x27U)))),2);
        tracep->fullBit(oldp+175,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x26U)))));
        tracep->fullCData(oldp+176,((3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                   >> 0x24U)))),2);
        tracep->fullCData(oldp+177,((3U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                   >> 0x22U)))),2);
        tracep->fullBit(oldp+178,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__illegal_insn));
        tracep->fullBit(oldp+179,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__instr_valid));
        tracep->fullBit(oldp+180,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__xif_insn_accept) 
                                   | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__xif_insn_reject))));
        tracep->fullBit(oldp+181,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__xif_waiting));
        tracep->fullBit(oldp+182,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__xif_insn_accept));
        tracep->fullBit(oldp+183,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__xif_insn_reject));
        tracep->fullBit(oldp+184,(((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                   & ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
                                      >> 7U))));
        tracep->fullBit(oldp+185,(((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                   & (IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o))));
        tracep->fullBit(oldp+186,(((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                   & ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
                                      >> 6U))));
        tracep->fullBit(oldp+187,(((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                   & ((IData)(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o) 
                                      >> 2U))));
        tracep->fullBit(oldp+188,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x18U)))));
        tracep->fullBit(oldp+189,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+190,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                 >> 0x36U)))));
        tracep->fullBit(oldp+191,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                 >> 9U)))));
        tracep->fullQData(oldp+192,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl),55);
        tracep->fullQData(oldp+194,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int),55);
        tracep->fullQData(oldp+196,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux),55);
        tracep->fullBit(oldp+198,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__instr_valid));
        tracep->fullBit(oldp+199,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_ready));
        tracep->fullBit(oldp+200,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_valid));
        tracep->fullBit(oldp+201,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_ready));
        tracep->fullBit(oldp+202,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_valid));
        tracep->fullIData(oldp+203,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_result),32);
        tracep->fullIData(oldp+204,((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result)),32);
        tracep->fullCData(oldp+205,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_clz_result),6);
        tracep->fullIData(oldp+206,((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)),32);
        tracep->fullBit(oldp+207,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__csr_is_illegal));
        tracep->fullCData(oldp+208,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt),6);
        tracep->fullQData(oldp+209,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp),64);
        tracep->fullIData(oldp+211,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux),32);
        tracep->fullIData(oldp+212,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux),32);
        tracep->fullCData(oldp+213,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d),6);
        tracep->fullCData(oldp+214,((0x3fU & ((IData)(0x20U) 
                                              - (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_clz_result)))),6);
        tracep->fullBit(oldp+215,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt));
        tracep->fullBit(oldp+216,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en));
        tracep->fullBit(oldp+217,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en));
        tracep->fullBit(oldp+218,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en));
        tracep->fullBit(oldp+219,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en));
        tracep->fullCData(oldp+220,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state),2);
        tracep->fullBit(oldp+221,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift));
        tracep->fullCData(oldp+222,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next),2);
        tracep->fullIData(oldp+223,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a),17);
        tracep->fullIData(oldp+224,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b),17);
        tracep->fullQData(oldp+225,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next),33);
        tracep->fullQData(oldp+227,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res),33);
        tracep->fullQData(oldp+229,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result),34);
        tracep->fullQData(oldp+231,((0x3ffffffffULL 
                                     & VL_SHIFTRS_QQI(34,34,32, vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result, 0x10U))),34);
        tracep->fullWData(oldp+233,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans),77);
        tracep->fullBit(oldp+236,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans_valid));
        tracep->fullBit(oldp+237,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans_ready));
        tracep->fullWData(oldp+238,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans),81);
        tracep->fullBit(oldp+241,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__alcheck_trans_valid));
        tracep->fullBit(oldp+242,((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_trans_ready) 
                                    & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_core))) 
                                   | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_ready))));
        tracep->fullWData(oldp+243,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o),81);
        tracep->fullBit(oldp+246,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_trans_valid));
        tracep->fullBit(oldp+247,((((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_trans_ready) 
                                      & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_core))) 
                                     | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_ready)) 
                                    & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core))) 
                                   | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready))));
        tracep->fullBit(oldp+248,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+249,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp_valid));
        tracep->fullIData(oldp+250,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                      << 0x19U) | (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                   >> 7U))),32);
        tracep->fullWData(oldp+251,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp),71);
        tracep->fullWData(oldp+254,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__align_check_i__core_resp_o),71);
        tracep->fullWData(oldp+257,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__core_resp_o),71);
        tracep->fullBit(oldp+260,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__buffer_trans_valid));
        tracep->fullBit(oldp+261,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__buffer_trans_ready));
        tracep->fullBit(oldp+262,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_trans_valid));
        tracep->fullBit(oldp+263,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_trans_ready));
        tracep->fullWData(oldp+264,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__bus_trans),81);
        tracep->fullCData(oldp+267,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__next_cnt),2);
        tracep->fullBit(oldp+268,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans_valid) 
                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans_ready))));
        tracep->fullBit(oldp+269,((1U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__next_cnt))));
        tracep->fullBit(oldp+270,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__ctrl_update));
        tracep->fullIData(oldp+271,(((0x4000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[1U])
                                      ? ((0x2000U & 
                                          vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[1U])
                                          ? ((0xff000000U 
                                              & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[0U] 
                                                 << 0x15U)) 
                                             | (0xffffffU 
                                                & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[1U] 
                                                    << 0x15U) 
                                                   | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[0U] 
                                                      >> 0xbU))))
                                          : ((0xffff0000U 
                                              & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[0U] 
                                                 << 0xdU)) 
                                             | (0xffffU 
                                                & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[1U] 
                                                    << 0xdU) 
                                                   | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[0U] 
                                                      >> 0x13U)))))
                                      : ((0x2000U & 
                                          vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[1U])
                                          ? ((0xffffff00U 
                                              & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[0U] 
                                                 << 5U)) 
                                             | (0xffU 
                                                & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[1U] 
                                                    << 5U) 
                                                   | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[0U] 
                                                      >> 0x1bU))))
                                          : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[1U] 
                                              << 0x1dU) 
                                             | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans[0U] 
                                                >> 3U))))),32);
        tracep->fullBit(oldp+272,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword));
        tracep->fullBit(oldp+273,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__misaligned_access));
        tracep->fullBit(oldp+274,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__done_0));
        tracep->fullBit(oldp+275,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err));
        tracep->fullBit(oldp+276,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
                                         >> 0x10U))));
        tracep->fullQData(oldp+277,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_aligned),64);
        tracep->fullBit(oldp+279,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core));
        tracep->fullBit(oldp+280,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus));
        tracep->fullBit(oldp+281,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
        tracep->fullBit(oldp+282,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready));
        tracep->fullCData(oldp+283,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status),2);
        tracep->fullCData(oldp+284,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n),3);
        tracep->fullBit(oldp+285,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+286,((1U & (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                           >> 2U) & 
                                          (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                              >> 0x10U))) 
                                         & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                            >> 0xaU)))));
        tracep->fullBit(oldp+287,((1U & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                            >> 0xaU)))));
        tracep->fullBit(oldp+288,((((0xf0000000U <= 
                                     ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                       << 0xfU) | (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                   >> 0x11U))) 
                                    & (0xf0003fffU 
                                       >= ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                            << 0xfU) 
                                           | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                              >> 0x11U)))) 
                                   & vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[0U])));
        tracep->fullWData(oldp+289,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg),68);
        tracep->fullIData(oldp+292,((0x3fffffffU & 
                                     ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                       << 0xdU) | (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                   >> 0x13U)))),32);
        tracep->fullBit(oldp+293,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
                                    >> 0x10U) & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__misaligned_access))));
        tracep->fullBit(oldp+294,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_core));
        tracep->fullBit(oldp+295,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_bus));
        tracep->fullBit(oldp+296,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_valid));
        tracep->fullBit(oldp+297,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_ready));
        tracep->fullBit(oldp+298,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[1U] 
                                         >> 0xaU))));
        tracep->fullCData(oldp+299,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_status),2);
        tracep->fullCData(oldp+300,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_n),3);
        tracep->fullCData(oldp+301,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt),2);
        tracep->fullBit(oldp+302,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_trans_accepted));
        tracep->fullCData(oldp+303,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt),2);
        tracep->fullBit(oldp+304,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_trans_ready) 
                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_trans_valid))));
        tracep->fullCData(oldp+305,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next),6);
        tracep->fullBit(oldp+306,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state));
        tracep->fullBit(oldp+307,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push));
        tracep->fullBit(oldp+308,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT____Vcellout__mpu_i__bus_trans_o[0U] 
                                         >> 4U))));
        tracep->fullBit(oldp+309,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus));
        tracep->fullBit(oldp+310,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready));
        tracep->fullCData(oldp+311,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n),2);
        tracep->fullIData(oldp+312,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n),32);
        tracep->fullBit(oldp+313,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__instr_valid));
        tracep->fullBit(oldp+314,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_exception));
        tracep->fullBit(oldp+315,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__xif_waiting));
        tracep->fullBit(oldp+316,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_valid));
        tracep->fullIData(oldp+317,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        tracep->fullBit(oldp+318,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_we_int));
        tracep->fullBit(oldp+319,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_en_gated));
        tracep->fullBit(oldp+320,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__illegal_csr_read));
        tracep->fullIData(oldp+321,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_n),32);
        tracep->fullBit(oldp+322,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_we));
        tracep->fullBit(oldp+323,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we));
        tracep->fullBit(oldp+324,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tdata1_we));
        tracep->fullBit(oldp+325,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tdata2_we));
        tracep->fullBit(oldp+326,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tinfo_we));
        tracep->fullIData(oldp+327,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_n),32);
        tracep->fullBit(oldp+328,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_we));
        tracep->fullIData(oldp+329,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_n),32);
        tracep->fullBit(oldp+330,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dpc_we));
        tracep->fullIData(oldp+331,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_n),32);
        tracep->fullBit(oldp+332,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch0_we));
        tracep->fullIData(oldp+333,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_n),32);
        tracep->fullBit(oldp+334,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dscratch1_we));
        tracep->fullIData(oldp+335,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_n),32);
        tracep->fullBit(oldp+336,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_we));
        tracep->fullIData(oldp+337,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_n),32);
        tracep->fullBit(oldp+338,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_we));
        tracep->fullIData(oldp+339,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_n),32);
        tracep->fullBit(oldp+340,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_we));
        tracep->fullBit(oldp+341,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatush_we));
        tracep->fullBit(oldp+342,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__misa_we));
        tracep->fullIData(oldp+343,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_n),32);
        tracep->fullBit(oldp+344,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcause_we));
        tracep->fullIData(oldp+345,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_n),32);
        tracep->fullBit(oldp+346,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtvec_we));
        tracep->fullBit(oldp+347,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mip_we));
        tracep->fullIData(oldp+348,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_n),32);
        tracep->fullBit(oldp+349,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mie_we));
        tracep->fullBit(oldp+350,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mtval_we));
        tracep->fullCData(oldp+351,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__priv_lvl_n),2);
        tracep->fullBit(oldp+352,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__priv_lvl_we));
        tracep->fullWData(oldp+353,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_n),2048);
        tracep->fullQData(oldp+417,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_we),64);
        tracep->fullWData(oldp+419,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n),1024);
        tracep->fullIData(oldp+451,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_n),32);
        tracep->fullIData(oldp+452,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_lower),32);
        tracep->fullIData(oldp+453,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_upper),32);
        tracep->fullIData(oldp+454,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_write_increment),32);
        tracep->fullSData(oldp+455,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events_raw),16);
        tracep->fullBit(oldp+456,((0xffffffffU == (0xfffffff2U 
                                                   | vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_n))));
        tracep->fullBit(oldp+457,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_stopcount));
        tracep->fullBit(oldp+458,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_we));
        tracep->fullIData(oldp+459,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n),32);
        tracep->fullIData(oldp+460,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n),32);
        tracep->fullIData(oldp+461,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n_r),32);
        tracep->fullIData(oldp+462,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n_r),32);
        tracep->fullBit(oldp+463,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_we_r));
        tracep->fullBit(oldp+464,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tdata2_we) 
                                   | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tselect_we))));
        tracep->fullBit(oldp+465,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int));
        tracep->fullBit(oldp+466,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit));
        tracep->fullBit(oldp+467,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int));
        tracep->fullIData(oldp+468,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0]),32);
        tracep->fullBit(oldp+469,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_if));
        tracep->fullBit(oldp+470,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__trigger_match_ex));
        tracep->fullCData(oldp+471,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0]),4);
        tracep->fullCData(oldp+472,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb),2);
        tracep->fullCData(oldp+473,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb),2);
        tracep->fullIData(oldp+474,(((0xfffffffcU & 
                                      ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                        << 0xfU) | 
                                       (0x7ffcU & (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                   >> 0x11U)))) 
                                     | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb))),32);
        tracep->fullIData(oldp+475,(((0xfffffffcU & 
                                      ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                        << 0xfU) | 
                                       (0x7ffcU & (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                   >> 0x11U)))) 
                                     | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb))),32);
        tracep->fullIData(oldp+476,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0]),32);
        tracep->fullCData(oldp+477,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved[0]),2);
        tracep->fullIData(oldp+478,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk1__DOT__b),32);
        tracep->fullIData(oldp+479,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk2__DOT__b),32);
        tracep->fullIData(oldp+480,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__unnamedblk7__DOT__i),32);
        tracep->fullIData(oldp+481,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                                    [0U]),32);
        tracep->fullCData(oldp+482,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns),2);
        tracep->fullCData(oldp+483,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns),3);
        tracep->fullBit(oldp+484,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n));
        tracep->fullBit(oldp+485,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n));
        tracep->fullBit(oldp+486,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id));
        tracep->fullBit(oldp+487,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id));
        tracep->fullBit(oldp+488,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id));
        tracep->fullBit(oldp+489,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n));
        tracep->fullBit(oldp+490,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb));
        tracep->fullSData(oldp+491,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb),11);
        tracep->fullBit(oldp+492,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb));
        tracep->fullBit(oldp+493,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb));
        tracep->fullBit(oldp+494,((1U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_err_wb) 
                                         >> 1U))));
        tracep->fullBit(oldp+495,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug));
        tracep->fullBit(oldp+496,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step));
        tracep->fullBit(oldp+497,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed));
        tracep->fullBit(oldp+498,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_allowed));
        tracep->fullBit(oldp+499,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible));
        tracep->fullCData(oldp+500,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n),3);
        tracep->fullSData(oldp+501,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause),11);
        tracep->fullBit(oldp+502,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set));
        tracep->fullBit(oldp+503,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr));
        tracep->fullCData(oldp+504,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl),2);
        tracep->fullBit(oldp+505,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated));
        tracep->fullBit(oldp+506,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n));
        tracep->fullBit(oldp+507,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear));
        tracep->fullCData(oldp+508,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match),2);
        tracep->fullCData(oldp+509,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match),2);
        tracep->fullCData(oldp+510,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_hz),2);
        tracep->fullCData(oldp+511,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_hz),2);
        tracep->fullIData(oldp+512,(vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__register_file_wrapper_i__wdata_i[0]),32);
        tracep->fullBit(oldp+513,(vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__register_file_wrapper_i__we_i[0]));
        tracep->fullIData(oldp+514,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__wdata_i[0]),32);
        tracep->fullBit(oldp+515,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__we_i[0]));
        tracep->fullIData(oldp+516,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0]),32);
        tracep->fullBit(oldp+517,(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid));
        tracep->fullSData(oldp+518,(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_issue_resp_o),9);
        tracep->fullCData(oldp+519,(vlSymsp->TOP__soc_top_with_cache__DOT__xif.commit),5);
        tracep->fullBit(oldp+520,(vlSelf->soc_top_with_cache__DOT____Vcellout__vpu__xif_result_valid_o));
        tracep->fullCData(oldp+521,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__next_state),3);
        tracep->fullBit(oldp+522,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_we));
        tracep->fullBit(oldp+523,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_load));
        tracep->fullBit(oldp+524,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_start_store));
        tracep->fullBit(oldp+525,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start));
        tracep->fullBit(oldp+526,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__accept_issue));
        tracep->fullBit(oldp+527,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_op));
        tracep->fullBit(oldp+528,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_op));
        tracep->fullBit(oldp+529,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_exec_op));
        tracep->fullCData(oldp+530,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state),3);
        tracep->fullBit(oldp+531,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__done_0) 
                                   & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_split_ex)))));
        tracep->fullCData(oldp+532,(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_resp),8);
        tracep->fullQData(oldp+533,(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_result),38);
        tracep->fullQData(oldp+535,(vlSymsp->TOP__soc_top_with_cache__DOT__cpu__DOT__m_c_obi_instr_if.req_payload),38);
        tracep->fullBit(oldp+537,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U] 
                                         >> 0xcU))));
        tracep->fullBit(oldp+538,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U] 
                                         >> 0xbU))));
        tracep->fullBit(oldp+539,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U] 
                                         >> 0xaU))));
        tracep->fullBit(oldp+540,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[1U] 
                                         >> 4U))));
        tracep->fullBit(oldp+541,(((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                                   | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid))));
        tracep->fullIData(oldp+542,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp),18);
        tracep->fullWData(oldp+543,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm),201);
        tracep->fullBit(oldp+550,((((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[7U] 
                                       >> 0x17U) & 
                                      (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_exception))) 
                                     & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__xif_waiting))) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match)))) 
                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__instr_valid))));
        tracep->fullBit(oldp+551,(((((0U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__cnt_q))
                                      ? ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans_valid) 
                                         & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans_ready))
                                      : ((1U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__cnt_q)) 
                                         | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans_valid) 
                                            & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans_ready)))) 
                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__lsu_en_gated)) 
                                   & (~ (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid)))));
        tracep->fullBit(oldp+552,(((0U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__cnt_q)) 
                                   | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp_valid))));
        tracep->fullBit(oldp+553,((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[4U] 
                                     >> 0x1eU) & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_valid))) 
                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__instr_valid))));
        tracep->fullBit(oldp+554,(((((5U == (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                             [0U] >> 0x1cU)) 
                                     & (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                          [0U] >> 9U) 
                                         & (3U == (3U 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                      >> 0x12U)))) 
                                        | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                            [0U] >> 6U) 
                                           & (0U == 
                                              (3U & 
                                               (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                >> 0x12U)))))) 
                                    & (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
                                       [0U])) & (~ 
                                                 (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                                                  >> 0x13U)))));
        tracep->fullBit(oldp+555,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
                                         >> 0xbU))));
        tracep->fullSData(oldp+556,((0x3ffU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
                                               >> 1U))),10);
        tracep->fullCData(oldp+557,((0xffU & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
                                               << 7U) 
                                              | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                                                 >> 0x19U)))),8);
        tracep->fullCData(oldp+558,((3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                                           >> 0x17U))),2);
        tracep->fullBit(oldp+559,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                                         >> 0x16U))));
        tracep->fullBit(oldp+560,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+561,((((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                    | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q)) 
                                   | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q))));
        tracep->fullBit(oldp+562,((1U & ((((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                                              >> 0x15U) 
                                             | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
                                                >> 0xbU)) 
                                            | (0U != 
                                               (0x3ffU 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
                                                   >> 1U)))) 
                                           | (0U != 
                                              (0xffU 
                                               & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[5U] 
                                                   << 7U) 
                                                  | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                                                     >> 0x19U))))) 
                                          | (0U != 
                                             (3U & 
                                              (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                                               >> 0x17U)))) 
                                         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[4U] 
                                            >> 0x16U)))));
        tracep->fullBit(oldp+563,((1U & ((((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                                           | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_valid)) 
                                          | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                                             >> 8U)) 
                                         | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_busy)))));
        tracep->fullCData(oldp+564,((0xfU & ((((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_valid) 
                                               | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q)) 
                                              | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q))
                                              ? ((IData)(1U) 
                                                 + 
                                                 ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[2U] 
                                                   << 0x1dU) 
                                                  | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[1U] 
                                                     >> 3U)))
                                              : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[2U] 
                                                  << 0x1dU) 
                                                 | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[1U] 
                                                    >> 3U))))),4);
        tracep->fullBit(oldp+565,((1U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)
                                          ? (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ready) 
                                              & (~ 
                                                 (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                                  >> 0x15U))) 
                                             | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                                >> 0x10U))
                                          : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm)))));
        tracep->fullBit(oldp+566,((1U & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__seq_valid)
                                          ? ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)) 
                                             & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm))
                                          : (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q))))));
        tracep->fullBit(oldp+567,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[6U] 
                                         >> 6U))));
        tracep->fullCData(oldp+568,(((0x10000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U])
                                      ? 0U : (7U & 
                                              (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                                                + (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins)) 
                                               - ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q)
                                                   ? 1U
                                                   : 0U))))),3);
        tracep->fullBit(oldp+569,((((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                    & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                       >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                   | (((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                       & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                          >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                      & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated)))));
        tracep->fullBit(oldp+570,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                         >> 0x15U))));
        tracep->fullBit(oldp+571,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                         >> 0x10U))));
        tracep->fullBit(oldp+572,((1U & ((~ ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                                              >> 4U) 
                                             | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                                 >> 0x17U) 
                                                & (~ 
                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[0U] 
                                                    >> 1U))))) 
                                         & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0x18U))))));
        tracep->fullIData(oldp+573,(((0U == (3U & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                           >> 0x2bU))))
                                      ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__operand_a_fw
                                      : ((1U == (3U 
                                                 & (IData)(
                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                            >> 0x2bU))))
                                          ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                              << 0xaU) 
                                             | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[3U] 
                                                >> 0x16U))
                                          : ((2U == 
                                              (3U & (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                             >> 0x2bU))))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                             >> 0x26U)))
                                                  ? 0U
                                                  : 
                                                 (0x1fU 
                                                  & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                     >> 0xdU)))
                                              : vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__operand_a_fw)))),32);
        tracep->fullIData(oldp+574,(((0U == (3U & (IData)(
                                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                           >> 0x29U))))
                                      ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__operand_b_fw
                                      : ((1U == (3U 
                                                 & (IData)(
                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                            >> 0x29U))))
                                          ? ((1U & (IData)(
                                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                            >> 0x25U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                             >> 0x24U)))
                                                  ? 
                                                 ((0x4000000U 
                                                   & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U])
                                                   ? 2U
                                                   : 4U)
                                                  : 
                                                 (0xfffff000U 
                                                  & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                     << 2U)))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                             >> 0x24U)))
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                                  >> 0x1dU)))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                         >> 0x12U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                           >> 5U))))
                                                  : vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__imm_i_type))
                                          : vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__operand_b_fw))),32);
        tracep->fullIData(oldp+575,(((0x2000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp)
                                      ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[7U] 
                                          << 0xeU) 
                                         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                            >> 0x12U))
                                      : ((0x2000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp)
                                          ? vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__id_stage_i__rf_rdata_i
                                         [0U] : vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__id_stage_i__rf_rdata_i
                                         [0U]))),32);
        tracep->fullIData(oldp+576,(((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0x26U)))
                                      ? 0U : (0x1fU 
                                              & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                 >> 0xdU)))),32);
        tracep->fullIData(oldp+577,(((1U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                    >> 0x25U)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                        >> 0x24U)))
                                          ? ((0x4000000U 
                                              & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U])
                                              ? 2U : 4U)
                                          : (0xfffff000U 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                << 2U)))
                                      : ((1U & (IData)(
                                                       (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                        >> 0x24U)))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                             >> 0x1dU)))) 
                                              << 0xcU) 
                                             | ((0xfe0U 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                    >> 0x12U)) 
                                                | (0x1fU 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                      >> 5U))))
                                          : vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__imm_i_type))),32);
        tracep->fullBit(oldp+578,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                                         >> 4U))));
        tracep->fullCData(oldp+579,((0x1fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])),5);
        tracep->fullBit(oldp+580,((1U & (~ vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))));
        tracep->fullCData(oldp+581,((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                     >> 0x1aU)),6);
        tracep->fullIData(oldp+582,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes),32);
        tracep->fullWData(oldp+583,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes),160);
        tracep->fullWData(oldp+588,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum),192);
        tracep->fullBit(oldp+594,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                         >> 0x13U))));
        tracep->fullBit(oldp+595,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                         >> 0xeU))));
        tracep->fullIData(oldp+596,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                      ? 0U : ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en)
                                               ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q 
                                                   << 1U) 
                                                  | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out))
                                               : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q))),32);
        tracep->fullIData(oldp+597,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en)
                                      ? (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) 
                                          & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed) 
                                                & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                                                    >> 0x10U) 
                                                   ^ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)))))
                                          ? (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                             + vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux)
                                          : (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                             - vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux))
                                      : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q)),32);
        tracep->fullIData(oldp+598,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en)
                                      ? ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                          ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                          : (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                                              << 0x1fU) 
                                             | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                                >> 1U)))
                                      : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q)),32);
        tracep->fullBit(oldp+599,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                    ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem)
                                    : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q))));
        tracep->fullBit(oldp+600,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                    ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)
                                    : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q))));
        tracep->fullBit(oldp+601,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                    ? ((((0U != ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                                                  << 0xfU) 
                                                 | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                    >> 0x11U))) 
                                         | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem)) 
                                        & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed)) 
                                       & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                                           >> 0x10U) 
                                          ^ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)))
                                    : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q))));
        tracep->fullIData(oldp+602,((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) 
                                      & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed) 
                                            & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                                                >> 0x10U) 
                                               ^ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)))))
                                      ? (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                         + vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux)
                                      : (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                                         - vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux))),32);
        tracep->fullIData(oldp+603,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                                      ? (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                      : (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                                          << 0x1fU) 
                                         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                            >> 1U)))),32);
        tracep->fullBit(oldp+604,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) 
                                   & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed) 
                                         & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                                             >> 0x10U) 
                                            ^ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)))))));
        tracep->fullIData(oldp+605,(((0x400000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U])
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
                                                         >> 0x10U)))) 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a))
                                      : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                                          << 0xfU) 
                                         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                                            >> 0x11U)))),32);
        tracep->fullIData(oldp+606,(((0x400000U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U])
                                      ? (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                                                         >> 0x10U)))) 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b))
                                      : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                                          << 0xfU) 
                                         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                            >> 0x11U)))),32);
        tracep->fullQData(oldp+607,((0x3ffffffffULL 
                                     & VL_MULS_QQQ(34,34,34, 
                                                   (0x3ffffffffULL 
                                                    & VL_EXTENDS_QI(34,32, 
                                                                    ((0x400000U 
                                                                      & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U])
                                                                      ? 
                                                                     (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
                                                                                >> 0x10U)))) 
                                                                       << 0x10U) 
                                                                      | (0xffffU 
                                                                         & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a))
                                                                      : 
                                                                     ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                                                                       << 0xfU) 
                                                                      | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                                                                         >> 0x11U))))), 
                                                   (0x3ffffffffULL 
                                                    & VL_EXTENDS_QI(34,32, 
                                                                    ((0x400000U 
                                                                      & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U])
                                                                      ? 
                                                                     (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                                                                                >> 0x10U)))) 
                                                                       << 0x10U) 
                                                                      | (0xffffU 
                                                                         & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b))
                                                                      : 
                                                                     ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                                                                       << 0xfU) 
                                                                      | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                                         >> 0x11U)))))))),34);
        tracep->fullBit(oldp+609,((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__split_q) 
                                    | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_split_ex)) 
                                   | ((IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid) 
                                      & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_req[1U] 
                                         >> 2U)))));
        tracep->fullBit(oldp+610,(((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)) 
                                   | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_trans_valid))));
        tracep->fullQData(oldp+611,(((((2U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                       & (0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_offset_q))) 
                                      | ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                         & (3U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_offset_q))))
                                      ? (((QData)((IData)(
                                                          ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                            << 0x19U) 
                                                           | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                              >> 7U)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_q)))
                                      : (((QData)((IData)(
                                                          ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                            << 0x19U) 
                                                           | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                              >> 7U)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[2U] 
                                                             << 0x19U) 
                                                            | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp[1U] 
                                                               >> 7U))))))),64);
        tracep->fullBit(oldp+613,((1U & (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                           >> 0x15U) 
                                          & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                                >> 0xdU))) 
                                         & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                               >> 0x12U))))));
        tracep->fullSData(oldp+614,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__hpm_events),16);
        tracep->fullBit(oldp+615,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_we_int) 
                                   & (0x320U == (0xfffU 
                                                 & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U])))));
        tracep->fullBit(oldp+616,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0U]))));
        tracep->fullBit(oldp+617,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[1U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[1U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[1U]))));
        tracep->fullBit(oldp+618,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[2U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[2U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[2U]))));
        tracep->fullBit(oldp+619,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[4U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[4U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[4U]))));
        tracep->fullBit(oldp+620,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[5U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[5U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[5U]))));
        tracep->fullBit(oldp+621,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[6U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[6U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[6U]))));
        tracep->fullBit(oldp+622,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[7U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[7U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[7U]))));
        tracep->fullBit(oldp+623,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[8U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[8U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[8U]))));
        tracep->fullBit(oldp+624,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[9U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[9U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[9U]))));
        tracep->fullBit(oldp+625,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0xaU]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xaU]))));
        tracep->fullBit(oldp+626,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0xbU]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xbU]))));
        tracep->fullBit(oldp+627,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0xcU]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xcU]))));
        tracep->fullBit(oldp+628,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0xdU]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xdU]))));
        tracep->fullBit(oldp+629,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0xeU]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xeU]))));
        tracep->fullBit(oldp+630,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0xfU]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0xfU]))));
        tracep->fullBit(oldp+631,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x10U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x10U]))));
        tracep->fullBit(oldp+632,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x11U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x11U]))));
        tracep->fullBit(oldp+633,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x12U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x12U]))));
        tracep->fullBit(oldp+634,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x13U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x13U]))));
        tracep->fullBit(oldp+635,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x14U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x14U]))));
        tracep->fullBit(oldp+636,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x15U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x15U]))));
        tracep->fullBit(oldp+637,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x16U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x16U]))));
        tracep->fullBit(oldp+638,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x17U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x17U]))));
        tracep->fullBit(oldp+639,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x18U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x18U]))));
        tracep->fullBit(oldp+640,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x19U]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x19U]))));
        tracep->fullBit(oldp+641,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x1aU]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1aU]))));
        tracep->fullBit(oldp+642,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x1bU]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1bU]))));
        tracep->fullBit(oldp+643,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x1cU]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1cU]))));
        tracep->fullBit(oldp+644,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x1dU]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1dU]))));
        tracep->fullBit(oldp+645,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x1eU]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1eU]))));
        tracep->fullBit(oldp+646,((((0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_n[0x1fU]) 
                                    | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU])) 
                                   | (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata[0x1fU]))));
        tracep->fullBit(oldp+647,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__lsu_en_gated) 
                                   & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                       [0U] & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                  >> 0xaU))) 
                                      | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                          [0U] >> 1U) 
                                         & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                            >> 0xaU))))));
        tracep->fullBit(oldp+648,(((0U == (0xfU & (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                   [0U] 
                                                   >> 7U)))
                                    ? (((0x3fffffffU 
                                         & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                             << 0xdU) 
                                            | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                               >> 0x13U))) 
                                        == (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                            [0U] >> 2U)) 
                                       & (0U != vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
                                          [0U])) : 
                                   ((2U == (0xfU & 
                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                             [0U] >> 7U)))
                                     ? (((0xfffffffcU 
                                          & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                              << 0xfU) 
                                             | (0x7ffcU 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                   >> 0x11U)))) 
                                         | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb)) 
                                        >= vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                        [0U]) : (((0xfffffffcU 
                                                   & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                       << 0xfU) 
                                                      | (0x7ffcU 
                                                         & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                            >> 0x11U)))) 
                                                  | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb)) 
                                                 < 
                                                 vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                                 [0U])))));
        tracep->fullBit(oldp+649,((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                     [0U] >> 6U) & 
                                    (3U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))) 
                                   | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                       [0U] >> 3U) 
                                      & (0U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))))));
        tracep->fullBit(oldp+650,((((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
                                      & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                            >> 0x17U))) 
                                     & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                                           >> 0xcU))) 
                                    | (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
                                        & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                           >> 0x17U)) 
                                       & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                                             >> 0xaU)))) 
                                   | ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id) 
                                      & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_byp 
                                            >> 0xaU))))));
        tracep->fullCData(oldp+651,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb)
                                      ? 2U : (((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__dcsr_rdata 
                                                    >> 0xfU)) 
                                                & (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                       >> 0x12U)))) 
                                               & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))
                                               ? 1U
                                               : (((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q))
                                                   ? 1U
                                                   : 0U)))),3);
        tracep->fullBit(oldp+652,((1U & ((IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                  >> 2U)) 
                                         & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                            >> 0x1eU)))));
        tracep->fullBit(oldp+653,((1U & (((IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                   >> 2U)) 
                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                             >> 0x1eU)) 
                                         | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                             >> 0x17U) 
                                            & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                               >> 0x1eU))))));
        tracep->fullBit(oldp+654,((1U & ((IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                  >> 0x33U)) 
                                         & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                            >> 0x1eU)))));
        tracep->fullWData(oldp+655,(vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req),111);
        tracep->fullBit(oldp+659,((1U & ((((~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                               >> 0x13U)) 
                                           | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[0U] 
                                              >> 0xeU)) 
                                          & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                              >> 7U) 
                                             & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                >> 0xaU))) 
                                         & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q))))));
        tracep->fullCData(oldp+660,((0x7fU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                                              >> 0xfU))),7);
        tracep->fullCData(oldp+661,((0x1fU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                                              >> 0x16U))),5);
        tracep->fullCData(oldp+662,((7U & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                                           >> 0x1bU))),3);
        tracep->fullCData(oldp+663,((0x1fU & ((vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                               << 2U) 
                                              | (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[2U] 
                                                 >> 0x1eU)))),5);
        tracep->fullCData(oldp+664,((0x1fU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                              >> 3U))),5);
        tracep->fullCData(oldp+665,((0x7fU & (vlSymsp->TOP__soc_top_with_cache__DOT__xif.issue_req[3U] 
                                              >> 8U))),7);
        tracep->fullBit(oldp+666,((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__last_q) 
                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__wpt_resp_valid)) 
                                   & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__xif_res_q))));
        tracep->fullBit(oldp+667,(vlSelf->soc_top_with_cache__DOT__instr_gnt));
        tracep->fullBit(oldp+668,(vlSelf->soc_top_with_cache__DOT__instr_rvalid));
        tracep->fullIData(oldp+669,(vlSelf->soc_top_with_cache__DOT__instr_rdata),32);
        tracep->fullBit(oldp+670,(vlSelf->soc_top_with_cache__DOT__data_gnt));
        tracep->fullBit(oldp+671,(vlSelf->soc_top_with_cache__DOT__data_rvalid));
        tracep->fullIData(oldp+672,(vlSelf->soc_top_with_cache__DOT__data_rdata),32);
        tracep->fullBit(oldp+673,(((1U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)) 
                                   | (3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)))));
        tracep->fullBit(oldp+674,(vlSelf->soc_top_with_cache__DOT__vpu_mem_ready));
        tracep->fullBit(oldp+675,(vlSelf->soc_top_with_cache__DOT__vpu_mem_result_valid));
        tracep->fullQData(oldp+676,(vlSelf->soc_top_with_cache__DOT__vpu_mem_result),38);
        tracep->fullIData(oldp+678,(vlSelf->soc_top_with_cache__DOT__cycle_count),32);
        tracep->fullIData(oldp+679,(vlSelf->soc_top_with_cache__DOT__instructions_executed),32);
        tracep->fullIData(oldp+680,(vlSelf->soc_top_with_cache__DOT__prev_pc),32);
        tracep->fullCData(oldp+681,(vlSelf->soc_top_with_cache__DOT__pc_stuck_counter),8);
        tracep->fullBit(oldp+682,((1U == vlSelf->soc_top_with_cache__DOT__main_memory
                                   [0x400U])));
        tracep->fullIData(oldp+683,(vlSelf->soc_top_with_cache__DOT__unnamedblk2__DOT__i),32);
        tracep->fullIData(oldp+684,(vlSelf->soc_top_with_cache__DOT__unnamedblk3__DOT__i),32);
        tracep->fullIData(oldp+685,(vlSelf->soc_top_with_cache__DOT__unnamedblk4__DOT__i),32);
        tracep->fullBit(oldp+686,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__fetch_enable_q));
        tracep->fullBit(oldp+687,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__core_busy_q));
        tracep->fullQData(oldp+688,(((QData)((IData)(vlSelf->soc_top_with_cache__DOT__instr_rdata)) 
                                     << 1U)),33);
        tracep->fullQData(oldp+690,((1ULL | ((QData)((IData)(vlSelf->soc_top_with_cache__DOT__data_rdata)) 
                                             << 3U))),35);
        tracep->fullWData(oldp+692,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__load_data_reg),256);
        if ((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))) {
            __Vtemp304[0U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[0U];
            __Vtemp304[1U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[1U];
            __Vtemp304[2U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[2U];
            __Vtemp304[3U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[3U];
            __Vtemp304[4U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[4U];
            __Vtemp304[5U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[5U];
            __Vtemp304[6U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[6U];
            __Vtemp304[7U] = Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0[7U];
        } else {
            __Vtemp304[0U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][0U];
            __Vtemp304[1U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][1U];
            __Vtemp304[2U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][2U];
            __Vtemp304[3U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][3U];
            __Vtemp304[4U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][4U];
            __Vtemp304[5U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][5U];
            __Vtemp304[6U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][6U];
            __Vtemp304[7U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf
                [(0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i))][7U];
        }
        tracep->fullWData(oldp+700,(__Vtemp304),256);
        tracep->fullWData(oldp+708,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[0]),256);
        tracep->fullWData(oldp+716,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[1]),256);
        tracep->fullWData(oldp+724,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[2]),256);
        tracep->fullWData(oldp+732,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[3]),256);
        tracep->fullWData(oldp+740,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[4]),256);
        tracep->fullWData(oldp+748,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[5]),256);
        tracep->fullWData(oldp+756,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[6]),256);
        tracep->fullWData(oldp+764,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[7]),256);
        tracep->fullWData(oldp+772,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[8]),256);
        tracep->fullWData(oldp+780,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[9]),256);
        tracep->fullWData(oldp+788,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[10]),256);
        tracep->fullWData(oldp+796,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[11]),256);
        tracep->fullWData(oldp+804,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[12]),256);
        tracep->fullWData(oldp+812,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[13]),256);
        tracep->fullWData(oldp+820,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[14]),256);
        tracep->fullWData(oldp+828,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__vrf[15]),256);
        tracep->fullIData(oldp+836,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__unnamedblk2__DOT__i),32);
        tracep->fullCData(oldp+837,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state),3);
        tracep->fullCData(oldp+838,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__word_counter),5);
        tracep->fullIData(oldp+839,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__current_addr),32);
        tracep->fullBit(oldp+840,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__is_load));
        tracep->fullWData(oldp+841,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__store_data_q),256);
        tracep->fullCData(oldp+849,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct3_q),3);
        tracep->fullBit(oldp+850,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matmul_active));
        tracep->fullCData(oldp+851,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__matrix_size),2);
        tracep->fullCData(oldp+852,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__max_tiles),3);
        tracep->fullCData(oldp+853,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__actual_size),3);
        tracep->fullIData(oldp+854,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk11__DOT__i),32);
        tracep->fullIData(oldp+855,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk12__DOT__i),32);
        tracep->fullIData(oldp+856,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk12__DOT__unnamedblk13__DOT__j),32);
        tracep->fullIData(oldp+857,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk9__DOT__i),32);
        tracep->fullIData(oldp+858,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
        tracep->fullCData(oldp+859,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__cycle_counter),4);
        tracep->fullIData(oldp+860,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_row1_delay),32);
        tracep->fullIData(oldp+861,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_col1_delay),32);
        tracep->fullWData(oldp+862,(vlSelf->soc_top_with_cache__DOT__vpu_mem_req),82);
        tracep->fullQData(oldp+865,(((QData)((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__id_q)) 
                                     << 0x38U)),60);
        tracep->fullCData(oldp+867,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__id_q),4);
        tracep->fullCData(oldp+868,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q),5);
        tracep->fullCData(oldp+869,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q),5);
        tracep->fullCData(oldp+870,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q),5);
        tracep->fullCData(oldp+871,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q),7);
        tracep->fullCData(oldp+872,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct3_q),3);
        tracep->fullIData(oldp+873,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__scalar_val_q),32);
        tracep->fullCData(oldp+874,((0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q))),4);
        tracep->fullWData(oldp+875,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__result_data_mux),256);
        tracep->fullCData(oldp+883,((0xfU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q)
                                              ? (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q)
                                              : (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q)))),4);
        tracep->fullCData(oldp+884,((0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q))),4);
        tracep->fullWData(oldp+885,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_a),256);
        tracep->fullWData(oldp+893,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_rdata_b),256);
        tracep->fullWData(oldp+901,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_result),256);
        tracep->fullBit(oldp+909,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_load_q));
        tracep->fullBit(oldp+910,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q));
        tracep->fullBit(oldp+911,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_exec_q));
        tracep->fullCData(oldp+912,((0xfU & ((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__is_store_q)
                                              ? (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q)
                                              : (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs1_q)))),5);
        tracep->fullCData(oldp+913,((0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rs2_q))),5);
        tracep->fullCData(oldp+914,((0xfU & (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__rd_q))),5);
        tracep->fullWData(oldp+915,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmac_result),256);
        tracep->fullWData(oldp+923,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vadd_result),256);
        tracep->fullWData(oldp+931,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vsub_result),256);
        tracep->fullWData(oldp+939,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__vmul_result),256);
        tracep->fullBit(oldp+947,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q));
        tracep->fullCData(oldp+948,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__cycle_count),6);
        tracep->fullCData(oldp+949,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q),7);
        tracep->fullCData(oldp+950,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_row),3);
        tracep->fullCData(oldp+951,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_col),3);
        tracep->fullCData(oldp+952,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__tile_k),3);
        tracep->fullBit(oldp+953,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_start));
        tracep->fullBit(oldp+954,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_clear));
        tracep->fullBit(oldp+955,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_accumulate));
        tracep->fullBit(oldp+956,(((0U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)) 
                                   & (4U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state)))));
        tracep->fullBit(oldp+957,((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state))));
        tracep->fullIData(oldp+958,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_row0),32);
        tracep->fullIData(oldp+959,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_row1),32);
        tracep->fullIData(oldp+960,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_col0),32);
        tracep->fullIData(oldp+961,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_col1),32);
        tracep->fullBit(oldp+962,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_a_valid));
        tracep->fullBit(oldp+963,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__sys_b_valid));
        tracep->fullQData(oldp+964,((((QData)((IData)(
                                                      vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                      [0U]
                                                      [0U][2U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                                    [0U]
                                                                    [0U][1U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                                      [0U]
                                                                      [0U][0U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+966,((((QData)((IData)(
                                                      vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                      [0U]
                                                      [1U][2U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                                    [0U]
                                                                    [1U][1U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                                      [0U]
                                                                      [1U][0U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+968,((((QData)((IData)(
                                                      vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                      [1U]
                                                      [0U][2U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                                    [1U]
                                                                    [0U][1U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                                      [1U]
                                                                      [0U][0U])) 
                                                      >> 1U)))),64);
        tracep->fullQData(oldp+970,((((QData)((IData)(
                                                      vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                      [1U]
                                                      [1U][2U])) 
                                      << 0x3fU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                                    [1U]
                                                                    [1U][1U])) 
                                                    << 0x1fU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
                                                                      [1U]
                                                                      [1U][0U])) 
                                                      >> 1U)))),64);
        tracep->fullCData(oldp+972,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state),4);
        tracep->fullCData(oldp+973,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_next_state),4);
        tracep->fullIData(oldp+974,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__a_elem),32);
        tracep->fullIData(oldp+975,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_elem),32);
        tracep->fullQData(oldp+976,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk1__DOT__unnamedblk2__DOT__prod),64);
        tracep->fullIData(oldp+978,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__a_elem),32);
        tracep->fullIData(oldp+979,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk3__DOT__unnamedblk4__DOT__b_elem),32);
        tracep->fullIData(oldp+980,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__a_elem),32);
        tracep->fullIData(oldp+981,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk5__DOT__unnamedblk6__DOT__b_elem),32);
        tracep->fullIData(oldp+982,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__a_elem),32);
        tracep->fullIData(oldp+983,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__b_elem),32);
        tracep->fullQData(oldp+984,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk7__DOT__unnamedblk8__DOT__prod),64);
        tracep->fullIData(oldp+986,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__unnamedblk14__DOT__idx),32);
        __Vtemp309[0U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [0U][0U][0U];
        __Vtemp309[1U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [0U][0U][1U];
        __Vtemp309[2U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [0U][0U][2U];
        __Vtemp309[3U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [0U][0U][3U];
        __Vtemp309[4U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [0U][0U][4U];
        tracep->fullWData(oldp+987,(__Vtemp309),129);
        __Vtemp310[0U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [0U][1U][0U];
        __Vtemp310[1U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [0U][1U][1U];
        __Vtemp310[2U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [0U][1U][2U];
        __Vtemp310[3U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [0U][1U][3U];
        __Vtemp310[4U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [0U][1U][4U];
        tracep->fullWData(oldp+992,(__Vtemp310),129);
        __Vtemp311[0U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [1U][0U][0U];
        __Vtemp311[1U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [1U][0U][1U];
        __Vtemp311[2U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [1U][0U][2U];
        __Vtemp311[3U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [1U][0U][3U];
        __Vtemp311[4U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [1U][0U][4U];
        tracep->fullWData(oldp+997,(__Vtemp311),129);
        __Vtemp312[0U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [1U][1U][0U];
        __Vtemp312[1U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [1U][1U][1U];
        __Vtemp312[2U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [1U][1U][2U];
        __Vtemp312[3U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [1U][1U][3U];
        __Vtemp312[4U] = vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__pe
            [1U][1U][4U];
        tracep->fullWData(oldp+1002,(__Vtemp312),129);
        tracep->fullIData(oldp+1007,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                     [0U][0U]),32);
        tracep->fullIData(oldp+1008,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                     [0U][1U]),32);
        tracep->fullIData(oldp+1009,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                     [1U][0U]),32);
        tracep->fullIData(oldp+1010,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__a_wire
                                     [1U][1U]),32);
        tracep->fullIData(oldp+1011,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                     [0U][0U]),32);
        tracep->fullIData(oldp+1012,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                     [0U][1U]),32);
        tracep->fullIData(oldp+1013,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                     [1U][0U]),32);
        tracep->fullIData(oldp+1014,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__b_wire
                                     [1U][1U]),32);
        tracep->fullCData(oldp+1015,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__state),3);
        tracep->fullCData(oldp+1016,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__systolic_inst__DOT__next_state),3);
        tracep->fullQData(oldp+1017,((((QData)((IData)(
                                                       vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata[0U])))),64);
        tracep->fullBit(oldp+1019,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))));
        tracep->fullIData(oldp+1020,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[3U] 
                                       << 2U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[2U] 
                                                 >> 0x1eU))),32);
        tracep->fullIData(oldp+1021,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q),32);
        tracep->fullBit(oldp+1022,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_is_pointer));
        tracep->fullIData(oldp+1023,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                       << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                                                 >> 0x18U))),32);
        tracep->fullBit(oldp+1024,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_cmp_result));
        tracep->fullBit(oldp+1025,((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q))));
        tracep->fullBit(oldp+1026,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__lsu_interruptible));
        tracep->fullWData(oldp+1027,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe),353);
        tracep->fullWData(oldp+1039,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe),248);
        tracep->fullWData(oldp+1047,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe),191);
        tracep->fullCData(oldp+1053,((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[7U] 
                                               >> 0x12U))),5);
        tracep->fullBit(oldp+1054,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[0U] 
                                          >> 2U))));
        tracep->fullBit(oldp+1055,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[0U] 
                                          >> 2U))));
        tracep->fullCData(oldp+1056,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_raddr_id[0]),5);
        tracep->fullCData(oldp+1057,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_raddr_id[1]),5);
        tracep->fullIData(oldp+1058,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_rdata_id[0]),32);
        tracep->fullIData(oldp+1059,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_rdata_id[1]),32);
        tracep->fullCData(oldp+1060,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__rf_waddr[0]),5);
        tracep->fullIData(oldp+1061,((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q 
                                      >> 7U)),25);
        tracep->fullCData(oldp+1062,((3U & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q)),2);
        tracep->fullIData(oldp+1063,((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q 
                                      >> 6U)),26);
        tracep->fullCData(oldp+1064,((0x3fU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q)),6);
        tracep->fullIData(oldp+1065,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q),32);
        tracep->fullBit(oldp+1066,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_counter_read));
        tracep->fullBit(oldp+1067,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_wr_in_wb));
        tracep->fullIData(oldp+1068,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_hz),28);
        tracep->fullBit(oldp+1069,((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__split_q)))));
        tracep->fullBit(oldp+1070,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[4U] 
                                           >> 0x1eU) 
                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                             >> 0x15U)))));
        tracep->fullIData(oldp+1071,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q),32);
        tracep->fullIData(oldp+1072,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q),32);
        tracep->fullIData(oldp+1073,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q),32);
        tracep->fullIData(oldp+1074,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q),32);
        tracep->fullIData(oldp+1075,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q),32);
        tracep->fullBit(oldp+1076,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_req_ctrl));
        tracep->fullSData(oldp+1077,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__irq_id_ctrl),10);
        tracep->fullBit(oldp+1078,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q));
        tracep->fullBit(oldp+1079,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q));
        tracep->fullBit(oldp+1080,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q));
        tracep->fullCData(oldp+1081,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q),2);
        tracep->fullBit(oldp+1082,((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)))));
        tracep->fullBit(oldp+1083,(((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)) 
                                    & (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm))));
        tracep->fullBit(oldp+1084,((0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))));
        tracep->fullCData(oldp+1085,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instr_meta_n),5);
        tracep->fullCData(oldp+1086,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q),2);
        tracep->fullBit(oldp+1087,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q));
        tracep->fullIData(oldp+1088,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q),32);
        tracep->fullIData(oldp+1089,(((IData)(4U) + 
                                      (0xfffffffeU 
                                       & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q))),32);
        tracep->fullBit(oldp+1090,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q));
        tracep->fullCData(oldp+1091,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q),2);
        tracep->fullCData(oldp+1092,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q),3);
        tracep->fullBit(oldp+1093,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q));
        tracep->fullBit(oldp+1094,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q));
        tracep->fullBit(oldp+1095,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q));
        tracep->fullCData(oldp+1096,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q),2);
        tracep->fullCData(oldp+1097,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q),2);
        tracep->fullBit(oldp+1098,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q));
        tracep->fullWData(oldp+1099,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q),105);
        tracep->fullCData(oldp+1103,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q),3);
        tracep->fullCData(oldp+1104,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr),2);
        tracep->fullCData(oldp+1105,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2),2);
        tracep->fullCData(oldp+1106,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr),2);
        tracep->fullIData(oldp+1107,(((IData)(4U) + 
                                      (0xfffffffcU 
                                       & vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))),32);
        tracep->fullCData(oldp+1108,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__mpu_i__DOT__state_q),3);
        tracep->fullBit(oldp+1109,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q));
        tracep->fullQData(oldp+1110,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q),38);
        tracep->fullCData(oldp+1112,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q),4);
        tracep->fullCData(oldp+1113,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q),4);
        tracep->fullBit(oldp+1114,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm));
        tracep->fullCData(oldp+1115,(vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellout__id_stage_i__rf_raddr_o[0]),5);
        tracep->fullCData(oldp+1116,(vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellout__id_stage_i__rf_raddr_o[1]),5);
        tracep->fullIData(oldp+1117,(vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__id_stage_i__rf_rdata_i[0]),32);
        tracep->fullIData(oldp+1118,(vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__id_stage_i__rf_rdata_i[1]),32);
        tracep->fullIData(oldp+1119,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                       << 2U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                                 >> 0x1eU))),32);
        tracep->fullCData(oldp+1120,((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                               >> 5U))),5);
        tracep->fullBit(oldp+1121,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                                  >> 0x20U)))));
        tracep->fullCData(oldp+1122,((3U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                                    >> 0x1eU)))),2);
        tracep->fullCData(oldp+1123,((3U & (IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                                    >> 0x1bU)))),2);
        tracep->fullIData(oldp+1124,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__imm_i_type),32);
        tracep->fullIData(oldp+1125,((((- (IData)((1U 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                      >> 0x1dU)))) 
                                       << 0xcU) | (
                                                   (0xfe0U 
                                                    & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                       >> 0x12U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                         >> 5U))))),32);
        tracep->fullIData(oldp+1126,((((- (IData)((1U 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                      >> 0x1dU)))) 
                                       << 0xdU) | (
                                                   (0x1000U 
                                                    & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                       >> 0x11U)) 
                                                   | ((0x800U 
                                                       & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                          << 6U)) 
                                                      | ((0x7e0U 
                                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                             >> 0x12U)) 
                                                         | (0x1eU 
                                                            & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                               >> 5U))))))),32);
        tracep->fullIData(oldp+1127,((0xfffff000U & 
                                      (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                       << 2U))),32);
        tracep->fullIData(oldp+1128,((((- (IData)((1U 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                      >> 0x1dU)))) 
                                       << 0x14U) | 
                                      ((0xff000U & 
                                        (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                         << 2U)) | 
                                       ((0x800U & (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                                   >> 7U)) 
                                        | (0x7feU & 
                                           (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                            >> 0x12U)))))),32);
        tracep->fullIData(oldp+1129,((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                               >> 0xdU))),32);
        tracep->fullBit(oldp+1130,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                           >> 0x17U) 
                                          & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[0U] 
                                                >> 1U))))));
        tracep->fullCData(oldp+1131,((0xffU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                               >> 0xaU))),8);
        tracep->fullBit(oldp+1132,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q));
        tracep->fullBit(oldp+1133,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q));
        tracep->fullIData(oldp+1134,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                       << 0xaU) | (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[3U] 
                                                   >> 0x16U))),32);
        tracep->fullCData(oldp+1135,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT____Vcellinp__decoder_i__rf_raddr_i[0]),5);
        tracep->fullCData(oldp+1136,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT____Vcellinp__decoder_i__rf_raddr_i[1]),5);
        tracep->fullBit(oldp+1137,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                                  >> 0x21U)))));
        tracep->fullBit(oldp+1138,((1U & (IData)((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                                                  >> 0x1dU)))));
        tracep->fullQData(oldp+1139,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl),55);
        tracep->fullQData(oldp+1141,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int),55);
        tracep->fullBit(oldp+1143,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                          >> 0x17U))));
        tracep->fullIData(oldp+1144,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q)
                                       ? (- vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                                       : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)),32);
        tracep->fullBit(oldp+1145,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_en));
        tracep->fullIData(oldp+1146,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_clz_data_rev),32);
        tracep->fullBit(oldp+1147,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul_en));
        tracep->fullBit(oldp+1148,((1U & (((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[4U] 
                                              >> 0x19U) 
                                             | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                >> 0x12U)) 
                                            | (0U != 
                                               (3U 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                   >> 0x10U)))) 
                                           | (0U != 
                                              ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[4U] 
                                                << 7U) 
                                               | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[3U] 
                                                  >> 0x19U)))) 
                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                             >> 0xaU)))));
        tracep->fullBit(oldp+1149,((1U & ((0x2000U 
                                           & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U])
                                           ? ((~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__split_q)) 
                                              & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0U] 
                                                 >> 2U))
                                           : (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0U] 
                                              >> 2U)))));
        tracep->fullCData(oldp+1150,((0x3fU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                               >> 0x18U))),6);
        tracep->fullIData(oldp+1151,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                       << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                 >> 0x18U))),32);
        tracep->fullIData(oldp+1152,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                       << 8U) | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                 >> 0x18U))),32);
        tracep->fullIData(oldp+1153,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                                       << 0xfU) | (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                   >> 0x11U))),32);
        tracep->fullIData(oldp+1154,(VL_STREAML_FAST_III(32,32,32,
                                                         ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                           << 8U) 
                                                          | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                             >> 0x18U)), 0)),32);
        tracep->fullIData(oldp+1155,(VL_STREAML_FAST_III(32,32,32,
                                                         ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                           << 8U) 
                                                          | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                             >> 0x18U)), 0)),32);
        tracep->fullQData(oldp+1156,((1ULL | ((QData)((IData)(
                                                              ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                                << 8U) 
                                                               | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                                  >> 0x18U)))) 
                                              << 1U))),33);
        tracep->fullQData(oldp+1158,((((QData)((IData)(
                                                       ((0x8000000U 
                                                         & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                                                         ? 
                                                        (~ 
                                                         ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                           << 8U) 
                                                          | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                             >> 0x18U)))
                                                         : 
                                                        ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                          << 8U) 
                                                         | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                            >> 0x18U))))) 
                                       << 1U) | (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                                    >> 0x1bU)))))),33);
        tracep->fullIData(oldp+1160,((IData)((0x1ffffffffULL 
                                              & (((1ULL 
                                                   | ((QData)((IData)(
                                                                      ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                                        << 8U) 
                                                                       | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                                          >> 0x18U)))) 
                                                      << 1U)) 
                                                  + 
                                                  (((QData)((IData)(
                                                                    ((0x8000000U 
                                                                      & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                                                                      ? 
                                                                     (~ 
                                                                      ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                                        << 8U) 
                                                                       | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                                          >> 0x18U)))
                                                                      : 
                                                                     ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                                       << 8U) 
                                                                      | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                                         >> 0x18U))))) 
                                                    << 1U) 
                                                   | (QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                                         >> 0x1bU)))))) 
                                                 >> 1U)))),32);
        tracep->fullQData(oldp+1161,((0x3ffffffffULL 
                                      & ((1ULL | ((QData)((IData)(
                                                                  ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                                    << 8U) 
                                                                   | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                                      >> 0x18U)))) 
                                                  << 1U)) 
                                         + (((QData)((IData)(
                                                             ((0x8000000U 
                                                               & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU])
                                                               ? 
                                                              (~ 
                                                               ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                                 << 8U) 
                                                                | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                                   >> 0x18U)))
                                                               : 
                                                              ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                                                << 8U) 
                                                               | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[8U] 
                                                                  >> 0x18U))))) 
                                             << 1U) 
                                            | (QData)((IData)(
                                                              (1U 
                                                               & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                                                  >> 0x1bU)))))))),34);
        tracep->fullBit(oldp+1163,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                          >> 0x1bU))));
        tracep->fullBit(oldp+1164,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                          >> 0x1aU))));
        tracep->fullIData(oldp+1165,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div_en)
                                       ? ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                                           << 0xfU) 
                                          | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                             >> 0x11U))
                                       : ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                           << 8U) | 
                                          (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[9U] 
                                           >> 0x18U)))),32);
        tracep->fullIData(oldp+1166,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb),32);
        tracep->fullIData(oldp+1167,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd),32);
        tracep->fullBit(oldp+1168,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal));
        tracep->fullBit(oldp+1169,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater));
        tracep->fullIData(oldp+1170,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result),32);
        tracep->fullIData(oldp+1171,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result),32);
        tracep->fullIData(oldp+1172,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in),32);
        tracep->fullCData(oldp+1173,((3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                                            >> 0x11U))),2);
        tracep->fullIData(oldp+1174,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                                       << 0xfU) | (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                                                   >> 0x11U))),32);
        tracep->fullIData(oldp+1175,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data),32);
        tracep->fullIData(oldp+1176,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q),32);
        tracep->fullIData(oldp+1177,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q),32);
        tracep->fullIData(oldp+1178,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q),32);
        tracep->fullBit(oldp+1179,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q));
        tracep->fullBit(oldp+1180,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q));
        tracep->fullBit(oldp+1181,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q));
        tracep->fullIData(oldp+1182,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux),32);
        tracep->fullQData(oldp+1183,(((QData)((IData)(
                                                      (~ 
                                                       ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                                                         << 0xfU) 
                                                        | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                           >> 0x11U))))) 
                                      << 1U)),33);
        tracep->fullCData(oldp+1185,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q),6);
        tracep->fullBit(oldp+1186,((1U & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))))));
        tracep->fullBit(oldp+1187,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out));
        tracep->fullCData(oldp+1188,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state),2);
        tracep->fullBit(oldp+1189,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed));
        tracep->fullBit(oldp+1190,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem));
        tracep->fullBit(oldp+1191,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg));
        tracep->fullBit(oldp+1192,((1U & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[6U] 
                                                       << 0xfU) 
                                                      | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                         >> 0x11U))))))));
        tracep->fullBit(oldp+1193,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                                          >> 0x16U))));
        tracep->fullCData(oldp+1194,((3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[7U] 
                                            >> 0x14U))),2);
        tracep->fullCData(oldp+1195,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state),2);
        tracep->fullIData(oldp+1196,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_al),17);
        tracep->fullIData(oldp+1197,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bl),17);
        tracep->fullIData(oldp+1198,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah),17);
        tracep->fullIData(oldp+1199,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh),17);
        tracep->fullQData(oldp+1200,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc),33);
        tracep->fullBit(oldp+1202,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                          >> 0xbU))));
        tracep->fullCData(oldp+1203,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__cnt_q),2);
        tracep->fullCData(oldp+1204,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_size_q),2);
        tracep->fullBit(oldp+1205,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_sext_q));
        tracep->fullBit(oldp+1206,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_we_q));
        tracep->fullCData(oldp+1207,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
        tracep->fullBit(oldp+1208,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__last_q));
        tracep->fullBit(oldp+1209,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__split_q));
        tracep->fullIData(oldp+1210,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_q),32);
        tracep->fullBit(oldp+1211,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__trans_valid_q));
        tracep->fullBit(oldp+1212,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__xif_res_q));
        tracep->fullCData(oldp+1213,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__xif_id_q),4);
        tracep->fullBit(oldp+1214,((((2U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                     & (0U != (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_offset_q))) 
                                    | ((1U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                       & (3U == (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__rdata_offset_q))))));
        tracep->fullCData(oldp+1215,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q),3);
        tracep->fullCData(oldp+1216,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_q),3);
        tracep->fullCData(oldp+1217,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q),2);
        tracep->fullCData(oldp+1218,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q),2);
        tracep->fullBit(oldp+1219,(((5U >= (7U & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                                   << 1U)))) 
                                    & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                                       >> (7U & ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q) 
                                                  << 1U)))))));
        tracep->fullBit(oldp+1220,(((5U >= (7U & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q) 
                                                   << 1U)))) 
                                    & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                                       >> (7U & ((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q) 
                                                  << 1U)))))));
        tracep->fullCData(oldp+1221,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q),6);
        tracep->fullBit(oldp+1222,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state));
        tracep->fullWData(oldp+1223,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q),81);
        tracep->fullBit(oldp+1226,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core));
        tracep->fullBit(oldp+1227,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid));
        tracep->fullIData(oldp+1228,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match),32);
        tracep->fullCData(oldp+1229,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q),2);
        tracep->fullIData(oldp+1230,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q),32);
        tracep->fullCData(oldp+1231,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_mpu_status_q),2);
        tracep->fullIData(oldp+1232,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_wpt_match_q),32);
        tracep->fullCData(oldp+1233,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_align_status_q),2);
        tracep->fullBit(oldp+1234,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__wb_stage_i__DOT__lsu_valid_q));
        tracep->fullCData(oldp+1235,((3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                            >> 0xcU))),2);
        tracep->fullSData(oldp+1236,((0xfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U])),12);
        tracep->fullSData(oldp+1237,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr),12);
        tracep->fullIData(oldp+1238,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[5U]),32);
        tracep->fullBit(oldp+1239,((((0U != (3U & (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                   >> 0xeU))) 
                                     & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                        >> 0x10U)) 
                                    & (3U == (3U & 
                                              ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__csr_raddr) 
                                               >> 0xaU))))));
        tracep->fullIData(oldp+1240,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q),32);
        tracep->fullIData(oldp+1241,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tdata1_rdata),32);
        tracep->fullIData(oldp+1242,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__tdata2_rdata),32);
        tracep->fullIData(oldp+1243,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q),32);
        tracep->fullIData(oldp+1244,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q),32);
        tracep->fullIData(oldp+1245,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q),32);
        tracep->fullIData(oldp+1246,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q),32);
        tracep->fullIData(oldp+1247,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q),32);
        tracep->fullIData(oldp+1248,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q),32);
        tracep->fullIData(oldp+1249,(((0U != (0xffU 
                                              & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                                                 >> 0x10U)))
                                       ? vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q
                                       : vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[5U])),32);
        tracep->fullBit(oldp+1250,((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                      >> 0xeU) & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                  >> 0x15U)) 
                                    & (((1U == (3U 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                                   >> 0xcU))) 
                                        | (2U == (3U 
                                                  & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                                     >> 0xcU)))) 
                                       | (3U == (3U 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                                    >> 0xcU)))))));
        tracep->fullWData(oldp+1251,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_q),2048);
        tracep->fullWData(oldp+1315,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_rdata),2048);
        tracep->fullWData(oldp+1379,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_q),1024);
        tracep->fullWData(oldp+1411,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmevent_rdata),1024);
        tracep->fullIData(oldp+1443,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
        tracep->fullWData(oldp+1444,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mhpmcounter_increment),2048);
        tracep->fullBit(oldp+1508,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                     >> 0xeU) & (0x349U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U])))));
        tracep->fullBit(oldp+1509,(((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U] 
                                     >> 0xeU) & (0x345U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[6U])))));
        tracep->fullCData(oldp+1510,((3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                            >> 8U))),2);
        tracep->fullCData(oldp+1511,((3U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                            >> 0x12U))),2);
        tracep->fullIData(oldp+1512,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_q[0]),32);
        tracep->fullIData(oldp+1513,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_q[0]),32);
        tracep->fullIData(oldp+1514,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata[0]),32);
        tracep->fullIData(oldp+1515,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata[0]),32);
        tracep->fullBit(oldp+1516,(((0U == (0xfU & 
                                            (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                             [0U] >> 7U)))
                                     ? (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                        == vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                        [0U]) : ((2U 
                                                  == 
                                                  (0xfU 
                                                   & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                                      [0U] 
                                                      >> 7U)))
                                                  ? 
                                                 (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                                  >= 
                                                  vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                                  [0U])
                                                  : 
                                                 (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                                  < 
                                                  vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                                  [0U])))));
        tracep->fullBit(oldp+1517,((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                      [0U] >> 6U) & 
                                     (3U == (3U & (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                   >> 8U)))) 
                                    | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                        [0U] >> 3U) 
                                       & (0U == (3U 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                    >> 8U)))))));
        tracep->fullBit(oldp+1518,((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                      [0U] >> 9U) & 
                                     (3U == (3U & (
                                                   vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                   >> 0x12U)))) 
                                    | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                        [0U] >> 6U) 
                                       & (0U == (3U 
                                                 & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                                    >> 0x12U)))))));
        tracep->fullIData(oldp+1519,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q),32);
        tracep->fullIData(oldp+1520,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q),32);
        tracep->fullCData(oldp+1521,(vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__controller_i__rf_raddr_id_i[0]),5);
        tracep->fullCData(oldp+1522,(vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__controller_i__rf_raddr_id_i[1]),5);
        tracep->fullCData(oldp+1523,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs),2);
        tracep->fullCData(oldp+1524,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs),3);
        tracep->fullBit(oldp+1525,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q));
        tracep->fullBit(oldp+1526,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q));
        tracep->fullBit(oldp+1527,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q));
        tracep->fullBit(oldp+1528,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q));
        tracep->fullBit(oldp+1529,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id));
        tracep->fullBit(oldp+1530,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__mret_ptr_in_id));
        tracep->fullBit(oldp+1531,((1U & (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xaU] 
                                            >> 0x1fU) 
                                           & vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0xbU]) 
                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                             >> 0xaU)))));
        tracep->fullBit(oldp+1532,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex));
        tracep->fullBit(oldp+1533,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q));
        tracep->fullBit(oldp+1534,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                           >> 0xeU) 
                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                             >> 0xaU)))));
        tracep->fullBit(oldp+1535,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb));
        tracep->fullBit(oldp+1536,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wfe_in_wb));
        tracep->fullBit(oldp+1537,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb));
        tracep->fullBit(oldp+1538,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_in_wb));
        tracep->fullBit(oldp+1539,((1U & ((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                             >> 0x11U) 
                                            & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                               >> 0xbU)) 
                                           & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                              >> 0x15U)) 
                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[0U] 
                                             >> 3U)))));
        tracep->fullBit(oldp+1540,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                           >> 0x18U) 
                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                             >> 0x15U)))));
        tracep->fullBit(oldp+1541,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb));
        tracep->fullBit(oldp+1542,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb));
        tracep->fullBit(oldp+1543,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__xif_in_wb));
        tracep->fullBit(oldp+1544,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                           >> 0x19U) 
                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                             >> 0x15U)))));
        tracep->fullBit(oldp+1545,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug));
        tracep->fullBit(oldp+1546,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__async_debug_allowed));
        tracep->fullBit(oldp+1547,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sync_debug_allowed));
        tracep->fullCData(oldp+1548,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q),3);
        tracep->fullBit(oldp+1549,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q));
        tracep->fullBit(oldp+1550,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q));
        tracep->fullBit(oldp+1551,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q));
        tracep->fullBit(oldp+1552,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q));
        tracep->fullBit(oldp+1553,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_ongoing));
        tracep->fullBit(oldp+1554,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event));
        tracep->fullBit(oldp+1555,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q));
        tracep->fullBit(oldp+1556,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb));
        tracep->fullBit(oldp+1557,((1U & (~ (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb)))));
        tracep->fullBit(oldp+1558,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id));
        tracep->fullBit(oldp+1559,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable));
        tracep->fullBit(oldp+1560,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_blanking_q));
        tracep->fullBit(oldp+1561,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id));
        tracep->fullBit(oldp+1562,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_valid_q));
        tracep->fullBit(oldp+1563,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__controller_fsm_i__DOT__x_ext__DOT__commit_kill_q));
        tracep->fullBit(oldp+1564,((1U & (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                            >> 7U) 
                                           & (~ (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[0U] 
                                                 >> 3U))) 
                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                             >> 0xaU)))));
        tracep->fullCData(oldp+1565,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i[0]),5);
        tracep->fullCData(oldp+1566,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i[1]),5);
        tracep->fullBit(oldp+1567,((((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[3U] 
                                               >> 0x13U)) 
                                     == vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                     [0U]) & (0U != 
                                              vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT____Vcellinp__bypass_i__rf_raddr_id_i
                                              [0U]))));
        tracep->fullBit(oldp+1568,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match));
        tracep->fullBit(oldp+1569,((1U & (((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                            >> 0xaU) 
                                           & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                               >> 0x10U) 
                                              | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                  >> 0xaU) 
                                                 & (((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                        >> 2U) 
                                                       & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[4U] 
                                                          >> 0x1cU)) 
                                                      | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                         >> 0xeU)) 
                                                     | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                        >> 0xdU)) 
                                                    | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                        >> 0x10U) 
                                                       & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_hz 
                                                          >> 0x1aU)))))) 
                                          | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb)))));
        tracep->fullBit(oldp+1570,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                           >> 0xaU) 
                                          & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                              >> 0x10U) 
                                             | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                 >> 0xaU) 
                                                & (((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                       >> 2U) 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[4U] 
                                                         >> 0x1cU)) 
                                                     | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                        >> 0xeU)) 
                                                    | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                       >> 0xdU)) 
                                                   | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                       >> 0x10U) 
                                                      & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_hz 
                                                         >> 0x1aU)))))))));
        tracep->fullBit(oldp+1571,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb));
        tracep->fullBit(oldp+1572,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                           >> 0xaU) 
                                          & (((((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                 >> 2U) 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[4U] 
                                                   >> 0x1cU)) 
                                               | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                  >> 0xeU)) 
                                              | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[1U] 
                                                 >> 0xdU)) 
                                             | ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[5U] 
                                                 >> 0x10U) 
                                                & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_hz 
                                                   >> 0x1aU)))))));
        tracep->fullBit(oldp+1573,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb));
        tracep->fullBit(oldp+1574,(((IData)((0x3000000U 
                                             == (0x3000000U 
                                                 & vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_hz))) 
                                    & ((0xfffU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_hz 
                                                  >> 0xcU)) 
                                       == (0xfffU & vlSelf->soc_top_with_cache__DOT__cpu__DOT__csr_hz)))));
        tracep->fullBit(oldp+1575,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex));
        tracep->fullBit(oldp+1576,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb));
        tracep->fullCData(oldp+1577,((0x1fU & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_ex_pipe[3U] 
                                               >> 0x13U))),5);
        tracep->fullBit(oldp+1578,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[4U] 
                                           >> 0x17U) 
                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_id_pipe[5U] 
                                             >> 0x1eU)))));
        tracep->fullCData(oldp+1579,(vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__register_file_wrapper_i__raddr_i[0]),5);
        tracep->fullCData(oldp+1580,(vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__register_file_wrapper_i__raddr_i[1]),5);
        tracep->fullIData(oldp+1581,(vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellout__register_file_wrapper_i__rdata_o[0]),32);
        tracep->fullIData(oldp+1582,(vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellout__register_file_wrapper_i__rdata_o[1]),32);
        tracep->fullCData(oldp+1583,(vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellinp__register_file_wrapper_i__waddr_i[0]),5);
        tracep->fullCData(oldp+1584,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__raddr_i[0]),5);
        tracep->fullCData(oldp+1585,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__raddr_i[1]),5);
        tracep->fullIData(oldp+1586,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o[0]),32);
        tracep->fullIData(oldp+1587,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellout__register_file_i__rdata_o[1]),32);
        tracep->fullCData(oldp+1588,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT____Vcellinp__register_file_i__waddr_i[0]),5);
        tracep->fullIData(oldp+1589,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0]),32);
        tracep->fullIData(oldp+1590,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[1]),32);
        tracep->fullIData(oldp+1591,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[2]),32);
        tracep->fullIData(oldp+1592,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[3]),32);
        tracep->fullIData(oldp+1593,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[4]),32);
        tracep->fullIData(oldp+1594,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[5]),32);
        tracep->fullIData(oldp+1595,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[6]),32);
        tracep->fullIData(oldp+1596,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[7]),32);
        tracep->fullIData(oldp+1597,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[8]),32);
        tracep->fullIData(oldp+1598,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[9]),32);
        tracep->fullIData(oldp+1599,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[10]),32);
        tracep->fullIData(oldp+1600,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[11]),32);
        tracep->fullIData(oldp+1601,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[12]),32);
        tracep->fullIData(oldp+1602,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[13]),32);
        tracep->fullIData(oldp+1603,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[14]),32);
        tracep->fullIData(oldp+1604,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[15]),32);
        tracep->fullIData(oldp+1605,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[16]),32);
        tracep->fullIData(oldp+1606,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[17]),32);
        tracep->fullIData(oldp+1607,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[18]),32);
        tracep->fullIData(oldp+1608,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[19]),32);
        tracep->fullIData(oldp+1609,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[20]),32);
        tracep->fullIData(oldp+1610,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[21]),32);
        tracep->fullIData(oldp+1611,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[22]),32);
        tracep->fullIData(oldp+1612,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[23]),32);
        tracep->fullIData(oldp+1613,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[24]),32);
        tracep->fullIData(oldp+1614,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[25]),32);
        tracep->fullIData(oldp+1615,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[26]),32);
        tracep->fullIData(oldp+1616,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[27]),32);
        tracep->fullIData(oldp+1617,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[28]),32);
        tracep->fullIData(oldp+1618,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[29]),32);
        tracep->fullIData(oldp+1619,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[30]),32);
        tracep->fullIData(oldp+1620,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[31]),32);
        tracep->fullIData(oldp+1621,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__1__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1622,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__2__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1623,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__3__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1624,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__4__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1625,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__5__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1626,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__6__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1627,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__7__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1628,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__8__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1629,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__9__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1630,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__10__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1631,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__11__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1632,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__12__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1633,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__13__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1634,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__14__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1635,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__15__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1636,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__16__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1637,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__17__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1638,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__18__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1639,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__19__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1640,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__20__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1641,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__21__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1642,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__22__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1643,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__23__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1644,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__24__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1645,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__25__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1646,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__26__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1647,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__27__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1648,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__28__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1649,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__29__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1650,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__30__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullIData(oldp+1651,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__gen_rf__BRA__31__KET____DOT__register_write_behavioral__DOT__unnamedblk1__DOT__j),32);
        tracep->fullCData(oldp+1652,(vlSelf->soc_top_with_cache__DOT__cpu__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o),5);
        tracep->fullBit(oldp+1653,((1U & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                                          >> 3U))));
        tracep->fullIData(oldp+1654,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual),32);
        tracep->fullBit(oldp+1655,((1U & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                           >> 0x15U) 
                                          & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__ex_wb_pipe[1U] 
                                             >> 8U)))));
        tracep->fullBit(oldp+1656,(vlSelf->clk_i));
        tracep->fullBit(oldp+1657,(vlSelf->rst_ni));
        tracep->fullBit(oldp+1658,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                                    & (~ ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                                          & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U] 
                                              >> 9U) 
                                             | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__core_busy_q)))))));
        tracep->fullBit(oldp+1659,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__fetch_enable_q) 
                                    & ((vlSelf->soc_top_with_cache__DOT__cpu__DOT__ctrl_fsm[3U] 
                                        >> 9U) | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__sleep_unit_i__DOT__core_busy_q)))));
        tracep->fullQData(oldp+1660,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o),35);
        tracep->fullBit(oldp+1662,((1U & (((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                           & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                              >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                                           ? ((0x68U 
                                               >= (0x7fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      ((IData)(0x23U) 
                                                       * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                              & (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                 (3U 
                                                  & (((IData)(2U) 
                                                      + 
                                                      ((IData)(0x23U) 
                                                       * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(2U) 
                                                     + 
                                                     ((IData)(0x23U) 
                                                      * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                           : (IData)(
                                                     (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                      >> 2U))))));
        tracep->fullCData(oldp+1663,((3U & (((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                             & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                                >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                                             ? ((0x68U 
                                                 >= 
                                                 (0x7fU 
                                                  & ((IData)(0x23U) 
                                                     * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                 ? 
                                                (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x23U) 
                                                       * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                   (((IData)(1U) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0x23U) 
                                                         * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x23U) 
                                                        * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                                 | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                    (3U 
                                                     & (((IData)(0x23U) 
                                                         * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
                                                        >> 5U))] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(0x23U) 
                                                        * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                                 : 0U)
                                             : (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o)))),2);
        tracep->fullIData(oldp+1664,((((2U >= (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
                                       & ((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                                          >> (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))
                                       ? ((((0x68U 
                                             >= (0x7fU 
                                                 & ((IData)(3U) 
                                                    + 
                                                    ((IData)(0x23U) 
                                                     * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                             ? (0xffffU 
                                                & (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         ((IData)(0x23U) 
                                                          * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                     (((IData)(0xfU) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(3U) 
                                                           + 
                                                           ((IData)(0x23U) 
                                                            * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))) 
                                                   | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                      (3U 
                                                       & (((IData)(3U) 
                                                           + 
                                                           ((IData)(0x23U) 
                                                            * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          + 
                                                          ((IData)(0x23U) 
                                                           * (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))
                                             : 0U) 
                                           << 0x10U) 
                                          | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                             >> 0x10U))
                                       : (((IData)(
                                                   (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT____Vcellout__mpu_i__core_resp_o 
                                                    >> 3U)) 
                                           << 0x10U) 
                                          | (vlSelf->soc_top_with_cache__DOT__cpu__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                             >> 0x10U)))),32);
        tracep->fullBit(oldp+1665,(((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_resp_valid) 
                                    | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_valid))));
        tracep->fullBit(oldp+1666,((((IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_resp_valid) 
                                     | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_valid)) 
                                    | (IData)(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid))));
        tracep->fullBit(oldp+1667,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_resp_valid));
        tracep->fullQData(oldp+1668,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__load_store_unit_i__DOT__filter_resp),35);
        tracep->fullBit(oldp+1670,((0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state))));
        tracep->fullCData(oldp+1671,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state),3);
        tracep->fullBit(oldp+1672,(((4U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)) 
                                    | ((3U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__state)) 
                                       & (0U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vlsu_inst__DOT__next_state))))));
        tracep->fullBit(oldp+1673,(((((IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_start) 
                                      & (~ (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__busy_q))) 
                                     & (8U != (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__funct7_q))) 
                                    | ((8U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__funct7_q)) 
                                       & (9U == (IData)(vlSelf->soc_top_with_cache__DOT__vpu__DOT__exec_unit_inst__DOT__mm_state))))));
        tracep->fullCData(oldp+1674,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__state_prev),3);
        tracep->fullIData(oldp+1675,(0x2000U),32);
        tracep->fullIData(oldp+1676,(0xdU),32);
        tracep->fullIData(oldp+1677,(0U),32);
        tracep->fullBit(oldp+1678,(0U));
        tracep->fullCData(oldp+1679,(0U),2);
        tracep->fullCData(oldp+1680,(0U),2);
        tracep->fullCData(oldp+1681,(1U),2);
        tracep->fullBit(oldp+1682,(1U));
        tracep->fullIData(oldp+1683,(0xf0000000U),32);
        tracep->fullIData(oldp+1684,(0xf0003fffU),32);
        tracep->fullIData(oldp+1685,(1U),32);
        tracep->fullIData(oldp+1686,(0U),32);
        __Vtemp313[0U] = 0U;
        __Vtemp313[1U] = 0U;
        __Vtemp313[2U] = 0U;
        tracep->fullWData(oldp+1687,(__Vtemp313),68);
        tracep->fullBit(oldp+1690,(0U));
        tracep->fullIData(oldp+1691,(5U),32);
        tracep->fullIData(oldp+1692,(2U),32);
        tracep->fullIData(oldp+1693,(4U),32);
        tracep->fullIData(oldp+1694,(0x20U),32);
        tracep->fullIData(oldp+1695,(0U),32);
        tracep->fullCData(oldp+1696,(0U),2);
        tracep->fullIData(oldp+1697,(1U),32);
        tracep->fullBit(oldp+1698,(0U));
        tracep->fullCData(oldp+1699,(0U),4);
        tracep->fullBit(oldp+1700,(1U));
        tracep->fullQData(oldp+1701,(0ULL),64);
        tracep->fullCData(oldp+1703,(0U),5);
        tracep->fullCData(oldp+1704,(0U),8);
        tracep->fullIData(oldp+1705,(7U),32);
        tracep->fullIData(oldp+1706,(0x19U),32);
        tracep->fullIData(oldp+1707,(0U),25);
        tracep->fullIData(oldp+1708,(0U),32);
        tracep->fullCData(oldp+1709,(3U),2);
        tracep->fullCData(oldp+1710,(3U),3);
        tracep->fullCData(oldp+1711,(3U),2);
        tracep->fullCData(oldp+1712,(0U),2);
        tracep->fullBit(oldp+1713,(0U));
        tracep->fullCData(oldp+1714,(0U),2);
        tracep->fullCData(oldp+1715,(0U),2);
        tracep->fullCData(oldp+1716,(1U),2);
        tracep->fullIData(oldp+1717,(3U),32);
        tracep->fullCData(oldp+1718,(0U),2);
        tracep->fullCData(oldp+1719,(0U),2);
        __Vtemp314[0U] = 8U;
        __Vtemp314[1U] = 0U;
        __Vtemp314[2U] = 0U;
        tracep->fullWData(oldp+1720,(__Vtemp314),68);
        tracep->fullCData(oldp+1723,(0U),2);
        tracep->fullCData(oldp+1724,(1U),2);
        tracep->fullBit(oldp+1725,(0U));
        tracep->fullBit(oldp+1726,(0U));
        tracep->fullCData(oldp+1727,(0U),2);
        tracep->fullCData(oldp+1728,(0U),2);
        tracep->fullCData(oldp+1729,(1U),2);
        tracep->fullIData(oldp+1730,(0x13U),32);
        tracep->fullIData(oldp+1731,(0xfU),32);
        tracep->fullIData(oldp+1732,(0x18U),32);
        tracep->fullIData(oldp+1733,(0x14U),32);
        tracep->fullIData(oldp+1734,(0x1fU),32);
        tracep->fullIData(oldp+1735,(0x1bU),32);
        tracep->fullIData(oldp+1736,(0xbU),32);
        tracep->fullIData(oldp+1737,(7U),32);
        tracep->fullCData(oldp+1738,(0U),6);
        tracep->fullIData(oldp+1739,(2U),32);
        tracep->fullBit(oldp+1740,(0U));
        tracep->fullCData(oldp+1741,(0U),2);
        tracep->fullCData(oldp+1742,(0U),2);
        tracep->fullCData(oldp+1743,(1U),2);
        tracep->fullQData(oldp+1744,(0x27d4400000100ULL),55);
        tracep->fullQData(oldp+1746,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_a_ctrl_int),55);
        tracep->fullQData(oldp+1748,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_b_ctrl_int),55);
        tracep->fullIData(oldp+1750,(1U),32);
        tracep->fullCData(oldp+1751,(1U),2);
        tracep->fullCData(oldp+1752,(0U),2);
        tracep->fullCData(oldp+1753,(1U),2);
        tracep->fullCData(oldp+1754,(0U),2);
        tracep->fullBit(oldp+1755,(0U));
        tracep->fullIData(oldp+1756,(5U),32);
        __Vtemp315[0U] = 0x8a418820U;
        __Vtemp315[1U] = 0xc5a92839U;
        __Vtemp315[2U] = 0xca307b9aU;
        __Vtemp315[3U] = 0x38bdab49U;
        __Vtemp315[4U] = 0xffbbcdebU;
        tracep->fullWData(oldp+1757,(__Vtemp315),160);
        tracep->fullCData(oldp+1762,(0U),2);
        tracep->fullBit(oldp+1763,(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid));
        tracep->fullBit(oldp+1764,((1U & (~ (IData)(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_valid)))));
        tracep->fullCData(oldp+1765,(0U),2);
        tracep->fullBit(oldp+1766,(0U));
        tracep->fullCData(oldp+1767,(0U),2);
        tracep->fullCData(oldp+1768,(1U),2);
        tracep->fullIData(oldp+1769,(0x40801104U),32);
        tracep->fullIData(oldp+1770,(0xffffff80U),32);
        tracep->fullIData(oldp+1771,(0x1008064U),32);
        tracep->fullIData(oldp+1772,(0U),32);
        tracep->fullIData(oldp+1773,(0U),32);
        tracep->fullIData(oldp+1774,(0x602U),32);
        tracep->fullIData(oldp+1775,(0x14U),32);
        tracep->fullCData(oldp+1776,(3U),2);
        tracep->fullSData(oldp+1777,(0xffc0U),16);
        tracep->fullIData(oldp+1778,(1U),29);
        tracep->fullIData(oldp+1779,(0xdU),32);
        tracep->fullIData(oldp+1780,(0U),32);
        tracep->fullIData(oldp+1781,(0xffffffc0U),32);
        tracep->fullIData(oldp+1782,(0xfffffffeU),32);
        tracep->fullIData(oldp+1783,(0xffffffffU),32);
        tracep->fullIData(oldp+1784,(0x1800U),32);
        tracep->fullIData(oldp+1785,(0x88U),32);
        tracep->fullCData(oldp+1786,(0U),2);
        tracep->fullIData(oldp+1787,(0x10008aeU),32);
        tracep->fullBit(oldp+1788,(vlSelf->soc_top_with_cache__DOT__cpu__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata1_n));
        tracep->fullIData(oldp+1789,(4U),32);
        tracep->fullIData(oldp+1790,(0x20U),32);
        tracep->fullIData(oldp+1791,(0x28001000U),32);
        tracep->fullIData(oldp+1792,(0x40000413U),32);
        tracep->fullIData(oldp+1793,(0x8dc4U),32);
        tracep->fullIData(oldp+1794,(0x800007ffU),32);
        tracep->fullIData(oldp+1795,(1U),32);
        tracep->fullIData(oldp+1796,(0xffffff81U),32);
        tracep->fullIData(oldp+1797,(0xffff0888U),32);
        tracep->fullCData(oldp+1798,(0U),2);
        tracep->fullBit(oldp+1799,(0U));
        tracep->fullBit(oldp+1800,(0U));
        tracep->fullCData(oldp+1801,(0U),2);
        tracep->fullBit(oldp+1802,(0U));
        tracep->fullBit(oldp+1803,(0U));
        tracep->fullIData(oldp+1804,(0x20U),32);
        tracep->fullIData(oldp+1805,(0x100U),32);
        tracep->fullIData(oldp+1806,(0x20U),32);
        tracep->fullIData(oldp+1807,(4U),32);
        tracep->fullIData(oldp+1808,(0x10U),32);
        tracep->fullCData(oldp+1809,(vlSelf->soc_top_with_cache__DOT__vpu__DOT__vrf_inst__DOT__raddr3_i),5);
        tracep->fullIData(oldp+1810,(8U),32);
        tracep->fullWData(oldp+1811,(Vsoc_top_with_cache__ConstPool__CONST_9e67c271_0),256);
        tracep->fullIData(oldp+1819,(8U),32);
        tracep->fullIData(oldp+1820,(0x40U),32);
        tracep->fullIData(oldp+1821,(6U),32);
        tracep->fullIData(oldp+1822,(0xffffffc0U),32);
        tracep->fullIData(oldp+1823,(0xfffffffeU),32);
        tracep->fullIData(oldp+1824,(0xffffffffU),32);
        tracep->fullIData(oldp+1825,(0x8dc4U),32);
        tracep->fullIData(oldp+1826,(0x88U),32);
        tracep->fullIData(oldp+1827,(0xff000000U),32);
        tracep->fullIData(oldp+1828,(0xffU),32);
        tracep->fullIData(oldp+1829,(0xc8ff07ffU),32);
        tracep->fullIData(oldp+1830,(0x800007ffU),32);
        tracep->fullIData(oldp+1831,(0xffffff81U),32);
        tracep->fullIData(oldp+1832,(0xbU),32);
        tracep->fullIData(oldp+1833,(0x10U),32);
        tracep->fullIData(oldp+1834,(0x1fU),32);
        tracep->fullCData(oldp+1835,(3U),2);
        tracep->fullCData(oldp+1836,(2U),7);
        tracep->fullIData(oldp+1837,(0xcU),25);
        tracep->fullCData(oldp+1838,(1U),2);
        tracep->fullCData(oldp+1839,(3U),2);
        tracep->fullIData(oldp+1840,(0x10U),32);
        tracep->fullIData(oldp+1841,(3U),32);
        tracep->fullIData(oldp+1842,(0xcU),32);
        tracep->fullIData(oldp+1843,(0x11U),32);
        tracep->fullIData(oldp+1844,(0x1cU),32);
        tracep->fullIData(oldp+1845,(0x1dU),32);
        tracep->fullIData(oldp+1846,(0x1aU),32);
        tracep->fullCData(oldp+1847,(0U),3);
        tracep->fullCData(oldp+1848,(1U),3);
        tracep->fullCData(oldp+1849,(2U),3);
        tracep->fullCData(oldp+1850,(4U),3);
        tracep->fullCData(oldp+1851,(5U),3);
        tracep->fullIData(oldp+1852,(0x40000413U),32);
        tracep->fullIData(oldp+1853,(1U),32);
        tracep->fullIData(oldp+1854,(3U),32);
        tracep->fullIData(oldp+1855,(0U),32);
        tracep->fullIData(oldp+1856,(0U),32);
        tracep->fullIData(oldp+1857,(0x1800U),32);
        tracep->fullIData(oldp+1858,(0x30000000U),32);
        tracep->fullIData(oldp+1859,(0U),32);
        tracep->fullIData(oldp+1860,(0x28001000U),32);
        tracep->fullIData(oldp+1861,(0x19U),32);
        tracep->fullIData(oldp+1862,(0x16U),32);
        tracep->fullIData(oldp+1863,(0xaU),32);
        tracep->fullIData(oldp+1864,(9U),32);
        tracep->fullCData(oldp+1865,(2U),5);
        tracep->fullCData(oldp+1866,(3U),5);
        tracep->fullCData(oldp+1867,(1U),5);
        tracep->fullCData(oldp+1868,(4U),5);
        tracep->fullCData(oldp+1869,(0xcU),5);
        tracep->fullCData(oldp+1870,(8U),5);
        tracep->fullCData(oldp+1871,(0x10U),5);
        tracep->fullCData(oldp+1872,(0x14U),5);
        tracep->fullCData(oldp+1873,(0x18U),5);
        tracep->fullCData(oldp+1874,(0x1cU),5);
        tracep->fullSData(oldp+1875,(1U),11);
        tracep->fullSData(oldp+1876,(2U),11);
        tracep->fullSData(oldp+1877,(3U),11);
        tracep->fullSData(oldp+1878,(5U),11);
        tracep->fullSData(oldp+1879,(7U),11);
        tracep->fullSData(oldp+1880,(0xbU),11);
        tracep->fullSData(oldp+1881,(0x18U),11);
        tracep->fullSData(oldp+1882,(0x400U),11);
        tracep->fullSData(oldp+1883,(0x401U),11);
        tracep->fullIData(oldp+1884,(0xffff0888U),32);
        tracep->fullCData(oldp+1885,(0xfU),5);
        __Vtemp316[0U] = 9U;
        __Vtemp316[1U] = 0U;
        __Vtemp316[2U] = 0U;
        tracep->fullWData(oldp+1886,(__Vtemp316),68);
        __Vtemp317[0U] = 0U;
        __Vtemp317[1U] = 0U;
        __Vtemp317[2U] = 0U;
        tracep->fullWData(oldp+1889,(__Vtemp317),68);
        tracep->fullQData(oldp+1892,(0x18ULL),35);
        tracep->fullQData(oldp+1894,(0xcULL),38);
        tracep->fullBit(oldp+1896,(vlSymsp->TOP__soc_top_with_cache__DOT__xif.__PVT__compressed_ready));
        tracep->fullIData(oldp+1897,(0U),22);
        tracep->fullQData(oldp+1898,(vlSymsp->TOP__soc_top_with_cache__DOT__xif.__PVT__compressed_resp),33);
        tracep->fullWData(oldp+1900,(vlSymsp->TOP__soc_top_with_cache__DOT__xif.mem_req),82);
    }
}
