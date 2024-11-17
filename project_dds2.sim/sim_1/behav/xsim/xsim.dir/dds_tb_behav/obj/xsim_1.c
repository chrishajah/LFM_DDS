/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                         */
/*  \   \        Copyright (c) 2003-2013 Xilinx, Inc.                 */
/*  /   /        All Right Reserved.                                  */
/* /---/   /\                                                         */
/* \   \  /  \                                                        */
/*  \___\/\___\                                                       */
/**********************************************************************/


#include "iki.h"
#include <string.h>
#include <math.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
typedef void (*funcp)(char *, char *);
extern int main(int, char**);
extern void execute_2(char*, char *);
extern void execute_902(char*, char *);
extern void execute_903(char*, char *);
extern void execute_908(char*, char *);
extern void execute_909(char*, char *);
extern void execute_910(char*, char *);
extern void execute_911(char*, char *);
extern void execute_912(char*, char *);
extern void execute_913(char*, char *);
extern void execute_914(char*, char *);
extern void execute_915(char*, char *);
extern void execute_133(char*, char *);
extern void execute_207(char*, char *);
extern void execute_864(char*, char *);
extern void execute_865(char*, char *);
extern void execute_873(char*, char *);
extern void execute_886(char*, char *);
extern void execute_887(char*, char *);
extern void execute_130(char*, char *);
extern void execute_131(char*, char *);
extern void execute_132(char*, char *);
extern void execute_212(char*, char *);
extern void execute_214(char*, char *);
extern void execute_239(char*, char *);
extern void execute_217(char*, char *);
extern void execute_218(char*, char *);
extern void execute_242(char*, char *);
extern void execute_246(char*, char *);
extern void execute_257(char*, char *);
extern void execute_249(char*, char *);
extern void execute_253(char*, char *);
extern void execute_254(char*, char *);
extern void execute_263(char*, char *);
extern void execute_262(char*, char *);
extern void execute_871(char*, char *);
extern void execute_868(char*, char *);
extern void execute_869(char*, char *);
extern void execute_877(char*, char *);
extern void execute_878(char*, char *);
extern void execute_879(char*, char *);
extern void execute_883(char*, char *);
extern void execute_884(char*, char *);
extern void execute_885(char*, char *);
extern void execute_151(char*, char *);
extern void execute_152(char*, char *);
extern void execute_170(char*, char *);
extern void execute_142(char*, char *);
extern void execute_148(char*, char *);
extern void execute_149(char*, char *);
extern void execute_146(char*, char *);
extern void execute_154(char*, char *);
extern void execute_156(char*, char *);
extern void execute_158(char*, char *);
extern void execute_160(char*, char *);
extern void execute_162(char*, char *);
extern void execute_164(char*, char *);
extern void execute_166(char*, char *);
extern void execute_168(char*, char *);
extern void execute_235(char*, char *);
extern void execute_236(char*, char *);
extern void execute_238(char*, char *);
extern void execute_227(char*, char *);
extern void execute_232(char*, char *);
extern void execute_233(char*, char *);
extern void execute_230(char*, char *);
extern void execute_270(char*, char *);
extern void execute_857(char*, char *);
extern void execute_858(char*, char *);
extern void execute_273(char*, char *);
extern void execute_275(char*, char *);
extern void execute_277(char*, char *);
extern void execute_316(char*, char *);
extern void execute_416(char*, char *);
extern void execute_450(char*, char *);
extern void execute_458(char*, char *);
extern void execute_529(char*, char *);
extern void execute_827(char*, char *);
extern void execute_828(char*, char *);
extern void execute_843(char*, char *);
extern void execute_826(char*, char *);
extern void execute_831(char*, char *);
extern void execute_832(char*, char *);
extern void execute_283(char*, char *);
extern void execute_284(char*, char *);
extern void execute_285(char*, char *);
extern void execute_291(char*, char *);
extern void execute_309(char*, char *);
extern void execute_310(char*, char *);
extern void execute_312(char*, char *);
extern void execute_300(char*, char *);
extern void execute_306(char*, char *);
extern void execute_307(char*, char *);
extern void execute_304(char*, char *);
extern void execute_357(char*, char *);
extern void execute_329(char*, char *);
extern void execute_330(char*, char *);
extern void execute_360(char*, char *);
extern void execute_393(char*, char *);
extern void execute_395(char*, char *);
extern void execute_396(char*, char *);
extern void execute_353(char*, char *);
extern void execute_354(char*, char *);
extern void execute_356(char*, char *);
extern void execute_344(char*, char *);
extern void execute_350(char*, char *);
extern void execute_351(char*, char *);
extern void execute_348(char*, char *);
extern void execute_364(char*, char *);
extern void execute_369(char*, char *);
extern void execute_387(char*, char *);
extern void execute_388(char*, char *);
extern void execute_390(char*, char *);
extern void execute_378(char*, char *);
extern void execute_384(char*, char *);
extern void execute_385(char*, char *);
extern void execute_382(char*, char *);
extern void execute_400(char*, char *);
extern void execute_401(char*, char *);
extern void execute_402(char*, char *);
extern void execute_405(char*, char *);
extern void execute_406(char*, char *);
extern void execute_407(char*, char *);
extern void execute_454(char*, char *);
extern void execute_444(char*, char *);
extern void execute_445(char*, char *);
extern void execute_447(char*, char *);
extern void execute_435(char*, char *);
extern void execute_441(char*, char *);
extern void execute_442(char*, char *);
extern void execute_439(char*, char *);
extern void execute_515(char*, char *);
extern void execute_516(char*, char *);
extern void execute_528(char*, char *);
extern void execute_506(char*, char *);
extern void execute_512(char*, char *);
extern void execute_513(char*, char *);
extern void execute_510(char*, char *);
extern void execute_518(char*, char *);
extern void execute_520(char*, char *);
extern void execute_522(char*, char *);
extern void execute_524(char*, char *);
extern void execute_526(char*, char *);
extern void execute_836(char*, char *);
extern void execute_543(char*, char *);
extern void execute_546(char*, char *);
extern void execute_553(char*, char *);
extern void execute_594(char*, char *);
extern void execute_595(char*, char *);
extern void execute_556(char*, char *);
extern void execute_560(char*, char *);
extern void execute_563(char*, char *);
extern void execute_567(char*, char *);
extern void execute_599(char*, char *);
extern void execute_600(char*, char *);
extern void execute_604(char*, char *);
extern void execute_646(char*, char *);
extern void execute_647(char*, char *);
extern void execute_651(char*, char *);
extern void execute_652(char*, char *);
extern void execute_653(char*, char *);
extern void execute_654(char*, char *);
extern void execute_655(char*, char *);
extern void execute_656(char*, char *);
extern void execute_657(char*, char *);
extern void execute_658(char*, char *);
extern void execute_739(char*, char *);
extern void execute_740(char*, char *);
extern void execute_741(char*, char *);
extern void execute_742(char*, char *);
extern void execute_584(char*, char *);
extern void execute_585(char*, char *);
extern void execute_593(char*, char *);
extern void execute_575(char*, char *);
extern void execute_581(char*, char *);
extern void execute_582(char*, char *);
extern void execute_579(char*, char *);
extern void execute_587(char*, char *);
extern void execute_589(char*, char *);
extern void execute_591(char*, char *);
extern void execute_621(char*, char *);
extern void execute_622(char*, char *);
extern void execute_624(char*, char *);
extern void execute_612(char*, char *);
extern void execute_618(char*, char *);
extern void execute_619(char*, char *);
extern void execute_616(char*, char *);
extern void execute_675(char*, char *);
extern void execute_676(char*, char *);
extern void execute_678(char*, char *);
extern void execute_666(char*, char *);
extern void execute_672(char*, char *);
extern void execute_673(char*, char *);
extern void execute_670(char*, char *);
extern void execute_695(char*, char *);
extern void execute_696(char*, char *);
extern void execute_698(char*, char *);
extern void execute_686(char*, char *);
extern void execute_692(char*, char *);
extern void execute_693(char*, char *);
extern void execute_690(char*, char *);
extern void execute_849(char*, char *);
extern void execute_901(char*, char *);
extern void execute_905(char*, char *);
extern void execute_906(char*, char *);
extern void execute_907(char*, char *);
extern void execute_916(char*, char *);
extern void execute_917(char*, char *);
extern void execute_918(char*, char *);
extern void execute_919(char*, char *);
extern void execute_920(char*, char *);
extern void transaction_3(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_4(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_5(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_15(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_16(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_17(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_59(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_60(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_63(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_64(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_70(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_71(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_74(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_75(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_76(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_83(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_97(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_101(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_108(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_117(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_247(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_264(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_265(char*, char*, unsigned, unsigned, unsigned);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_0(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_1(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_6(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_7(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_8(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[240] = {(funcp)execute_2, (funcp)execute_902, (funcp)execute_903, (funcp)execute_908, (funcp)execute_909, (funcp)execute_910, (funcp)execute_911, (funcp)execute_912, (funcp)execute_913, (funcp)execute_914, (funcp)execute_915, (funcp)execute_133, (funcp)execute_207, (funcp)execute_864, (funcp)execute_865, (funcp)execute_873, (funcp)execute_886, (funcp)execute_887, (funcp)execute_130, (funcp)execute_131, (funcp)execute_132, (funcp)execute_212, (funcp)execute_214, (funcp)execute_239, (funcp)execute_217, (funcp)execute_218, (funcp)execute_242, (funcp)execute_246, (funcp)execute_257, (funcp)execute_249, (funcp)execute_253, (funcp)execute_254, (funcp)execute_263, (funcp)execute_262, (funcp)execute_871, (funcp)execute_868, (funcp)execute_869, (funcp)execute_877, (funcp)execute_878, (funcp)execute_879, (funcp)execute_883, (funcp)execute_884, (funcp)execute_885, (funcp)execute_151, (funcp)execute_152, (funcp)execute_170, (funcp)execute_142, (funcp)execute_148, (funcp)execute_149, (funcp)execute_146, (funcp)execute_154, (funcp)execute_156, (funcp)execute_158, (funcp)execute_160, (funcp)execute_162, (funcp)execute_164, (funcp)execute_166, (funcp)execute_168, (funcp)execute_235, (funcp)execute_236, (funcp)execute_238, (funcp)execute_227, (funcp)execute_232, (funcp)execute_233, (funcp)execute_230, (funcp)execute_270, (funcp)execute_857, (funcp)execute_858, (funcp)execute_273, (funcp)execute_275, (funcp)execute_277, (funcp)execute_316, (funcp)execute_416, (funcp)execute_450, (funcp)execute_458, (funcp)execute_529, (funcp)execute_827, (funcp)execute_828, (funcp)execute_843, (funcp)execute_826, (funcp)execute_831, (funcp)execute_832, (funcp)execute_283, (funcp)execute_284, (funcp)execute_285, (funcp)execute_291, (funcp)execute_309, (funcp)execute_310, (funcp)execute_312, (funcp)execute_300, (funcp)execute_306, (funcp)execute_307, (funcp)execute_304, (funcp)execute_357, (funcp)execute_329, (funcp)execute_330, (funcp)execute_360, (funcp)execute_393, (funcp)execute_395, (funcp)execute_396, (funcp)execute_353, (funcp)execute_354, (funcp)execute_356, (funcp)execute_344, (funcp)execute_350, (funcp)execute_351, (funcp)execute_348, (funcp)execute_364, (funcp)execute_369, (funcp)execute_387, (funcp)execute_388, (funcp)execute_390, (funcp)execute_378, (funcp)execute_384, (funcp)execute_385, (funcp)execute_382, (funcp)execute_400, (funcp)execute_401, (funcp)execute_402, (funcp)execute_405, (funcp)execute_406, (funcp)execute_407, (funcp)execute_454, (funcp)execute_444, (funcp)execute_445, (funcp)execute_447, (funcp)execute_435, (funcp)execute_441, (funcp)execute_442, (funcp)execute_439, (funcp)execute_515, (funcp)execute_516, (funcp)execute_528, (funcp)execute_506, (funcp)execute_512, (funcp)execute_513, (funcp)execute_510, (funcp)execute_518, (funcp)execute_520, (funcp)execute_522, (funcp)execute_524, (funcp)execute_526, (funcp)execute_836, (funcp)execute_543, (funcp)execute_546, (funcp)execute_553, (funcp)execute_594, (funcp)execute_595, (funcp)execute_556, (funcp)execute_560, (funcp)execute_563, (funcp)execute_567, (funcp)execute_599, (funcp)execute_600, (funcp)execute_604, (funcp)execute_646, (funcp)execute_647, (funcp)execute_651, (funcp)execute_652, (funcp)execute_653, (funcp)execute_654, (funcp)execute_655, (funcp)execute_656, (funcp)execute_657, (funcp)execute_658, (funcp)execute_739, (funcp)execute_740, (funcp)execute_741, (funcp)execute_742, (funcp)execute_584, (funcp)execute_585, (funcp)execute_593, (funcp)execute_575, (funcp)execute_581, (funcp)execute_582, (funcp)execute_579, (funcp)execute_587, (funcp)execute_589, (funcp)execute_591, (funcp)execute_621, (funcp)execute_622, (funcp)execute_624, (funcp)execute_612, (funcp)execute_618, (funcp)execute_619, (funcp)execute_616, (funcp)execute_675, (funcp)execute_676, (funcp)execute_678, (funcp)execute_666, (funcp)execute_672, (funcp)execute_673, (funcp)execute_670, (funcp)execute_695, (funcp)execute_696, (funcp)execute_698, (funcp)execute_686, (funcp)execute_692, (funcp)execute_693, (funcp)execute_690, (funcp)execute_849, (funcp)execute_901, (funcp)execute_905, (funcp)execute_906, (funcp)execute_907, (funcp)execute_916, (funcp)execute_917, (funcp)execute_918, (funcp)execute_919, (funcp)execute_920, (funcp)transaction_3, (funcp)transaction_4, (funcp)transaction_5, (funcp)transaction_15, (funcp)transaction_16, (funcp)transaction_17, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_59, (funcp)transaction_60, (funcp)transaction_63, (funcp)transaction_64, (funcp)transaction_70, (funcp)transaction_71, (funcp)transaction_74, (funcp)transaction_75, (funcp)transaction_76, (funcp)transaction_83, (funcp)transaction_97, (funcp)transaction_101, (funcp)transaction_108, (funcp)transaction_117, (funcp)transaction_247, (funcp)transaction_264, (funcp)transaction_265, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_0, (funcp)transaction_1, (funcp)transaction_6, (funcp)transaction_7, (funcp)transaction_8};
const int NumRelocateId= 240;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/dds_tb_behav/xsim.reloc",  (void **)funcTab, 240);
	iki_vhdl_file_variable_register(dp + 608104);
	iki_vhdl_file_variable_register(dp + 608160);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/dds_tb_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 880736, dp + 876360, 0, 15, 0, 15, 16, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 880736, dp + 876416, 0, 15, 16, 31, 16, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 880832, dp + 876472, 0, 23, 0, 23, 24, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 880680, dp + 877032, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 880776, dp + 877088, 0, 0, 0, 0, 1, 1);

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/dds_tb_behav/xsim.reloc");
	wrapper_func_0(dp);

	iki_execute_processes();

	// Schedule resolution functions for the multiply driven Verilog nets that have strength
	// Schedule transaction functions for the singly driven Verilog nets that have strength

}
#include "iki_bridge.h"
void relocate(char *);

void sensitize(char *);

void simulate(char *);

extern SYSTEMCLIB_IMP_DLLSPEC void local_register_implicit_channel(int, char*);
extern void implicit_HDL_SCinstatiate();

extern SYSTEMCLIB_IMP_DLLSPEC int xsim_argc_copy ;
extern SYSTEMCLIB_IMP_DLLSPEC char** xsim_argv_copy ;

int main(int argc, char **argv)
{
    iki_heap_initialize("ms", "isimmm", 0, 2147483648) ;
    iki_set_sv_type_file_path_name("xsim.dir/dds_tb_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/dds_tb_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/dds_tb_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
