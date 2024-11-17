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
extern void execute_905(char*, char *);
extern void execute_911(char*, char *);
extern void execute_912(char*, char *);
extern void execute_913(char*, char *);
extern void execute_914(char*, char *);
extern void execute_915(char*, char *);
extern void execute_916(char*, char *);
extern void execute_917(char*, char *);
extern void execute_918(char*, char *);
extern void execute_919(char*, char *);
extern void execute_920(char*, char *);
extern void execute_903(char*, char *);
extern void execute_904(char*, char *);
extern void execute_910(char*, char *);
extern void execute_134(char*, char *);
extern void execute_208(char*, char *);
extern void execute_865(char*, char *);
extern void execute_866(char*, char *);
extern void execute_874(char*, char *);
extern void execute_887(char*, char *);
extern void execute_888(char*, char *);
extern void execute_131(char*, char *);
extern void execute_132(char*, char *);
extern void execute_133(char*, char *);
extern void execute_213(char*, char *);
extern void execute_215(char*, char *);
extern void execute_240(char*, char *);
extern void execute_218(char*, char *);
extern void execute_219(char*, char *);
extern void execute_243(char*, char *);
extern void execute_247(char*, char *);
extern void execute_258(char*, char *);
extern void execute_250(char*, char *);
extern void execute_254(char*, char *);
extern void execute_255(char*, char *);
extern void execute_264(char*, char *);
extern void execute_263(char*, char *);
extern void execute_872(char*, char *);
extern void execute_869(char*, char *);
extern void execute_870(char*, char *);
extern void execute_878(char*, char *);
extern void execute_879(char*, char *);
extern void execute_880(char*, char *);
extern void execute_884(char*, char *);
extern void execute_885(char*, char *);
extern void execute_886(char*, char *);
extern void execute_152(char*, char *);
extern void execute_153(char*, char *);
extern void execute_171(char*, char *);
extern void execute_143(char*, char *);
extern void execute_149(char*, char *);
extern void execute_150(char*, char *);
extern void execute_147(char*, char *);
extern void execute_155(char*, char *);
extern void execute_157(char*, char *);
extern void execute_159(char*, char *);
extern void execute_161(char*, char *);
extern void execute_163(char*, char *);
extern void execute_165(char*, char *);
extern void execute_167(char*, char *);
extern void execute_169(char*, char *);
extern void execute_236(char*, char *);
extern void execute_237(char*, char *);
extern void execute_239(char*, char *);
extern void execute_228(char*, char *);
extern void execute_233(char*, char *);
extern void execute_234(char*, char *);
extern void execute_231(char*, char *);
extern void execute_271(char*, char *);
extern void execute_858(char*, char *);
extern void execute_859(char*, char *);
extern void execute_274(char*, char *);
extern void execute_276(char*, char *);
extern void execute_278(char*, char *);
extern void execute_317(char*, char *);
extern void execute_417(char*, char *);
extern void execute_451(char*, char *);
extern void execute_459(char*, char *);
extern void execute_530(char*, char *);
extern void execute_828(char*, char *);
extern void execute_829(char*, char *);
extern void execute_844(char*, char *);
extern void execute_827(char*, char *);
extern void execute_832(char*, char *);
extern void execute_833(char*, char *);
extern void execute_284(char*, char *);
extern void execute_285(char*, char *);
extern void execute_286(char*, char *);
extern void execute_292(char*, char *);
extern void execute_310(char*, char *);
extern void execute_311(char*, char *);
extern void execute_313(char*, char *);
extern void execute_301(char*, char *);
extern void execute_307(char*, char *);
extern void execute_308(char*, char *);
extern void execute_305(char*, char *);
extern void execute_358(char*, char *);
extern void execute_330(char*, char *);
extern void execute_331(char*, char *);
extern void execute_361(char*, char *);
extern void execute_394(char*, char *);
extern void execute_396(char*, char *);
extern void execute_397(char*, char *);
extern void execute_354(char*, char *);
extern void execute_355(char*, char *);
extern void execute_357(char*, char *);
extern void execute_345(char*, char *);
extern void execute_351(char*, char *);
extern void execute_352(char*, char *);
extern void execute_349(char*, char *);
extern void execute_365(char*, char *);
extern void execute_370(char*, char *);
extern void execute_388(char*, char *);
extern void execute_389(char*, char *);
extern void execute_391(char*, char *);
extern void execute_379(char*, char *);
extern void execute_385(char*, char *);
extern void execute_386(char*, char *);
extern void execute_383(char*, char *);
extern void execute_401(char*, char *);
extern void execute_402(char*, char *);
extern void execute_403(char*, char *);
extern void execute_406(char*, char *);
extern void execute_407(char*, char *);
extern void execute_408(char*, char *);
extern void execute_455(char*, char *);
extern void execute_445(char*, char *);
extern void execute_446(char*, char *);
extern void execute_448(char*, char *);
extern void execute_436(char*, char *);
extern void execute_442(char*, char *);
extern void execute_443(char*, char *);
extern void execute_440(char*, char *);
extern void execute_516(char*, char *);
extern void execute_517(char*, char *);
extern void execute_529(char*, char *);
extern void execute_507(char*, char *);
extern void execute_513(char*, char *);
extern void execute_514(char*, char *);
extern void execute_511(char*, char *);
extern void execute_519(char*, char *);
extern void execute_521(char*, char *);
extern void execute_523(char*, char *);
extern void execute_525(char*, char *);
extern void execute_527(char*, char *);
extern void execute_837(char*, char *);
extern void execute_544(char*, char *);
extern void execute_547(char*, char *);
extern void execute_554(char*, char *);
extern void execute_595(char*, char *);
extern void execute_596(char*, char *);
extern void execute_557(char*, char *);
extern void execute_561(char*, char *);
extern void execute_564(char*, char *);
extern void execute_568(char*, char *);
extern void execute_600(char*, char *);
extern void execute_601(char*, char *);
extern void execute_605(char*, char *);
extern void execute_647(char*, char *);
extern void execute_648(char*, char *);
extern void execute_652(char*, char *);
extern void execute_653(char*, char *);
extern void execute_654(char*, char *);
extern void execute_655(char*, char *);
extern void execute_656(char*, char *);
extern void execute_657(char*, char *);
extern void execute_658(char*, char *);
extern void execute_659(char*, char *);
extern void execute_740(char*, char *);
extern void execute_741(char*, char *);
extern void execute_742(char*, char *);
extern void execute_743(char*, char *);
extern void execute_585(char*, char *);
extern void execute_586(char*, char *);
extern void execute_594(char*, char *);
extern void execute_576(char*, char *);
extern void execute_582(char*, char *);
extern void execute_583(char*, char *);
extern void execute_580(char*, char *);
extern void execute_588(char*, char *);
extern void execute_590(char*, char *);
extern void execute_592(char*, char *);
extern void execute_622(char*, char *);
extern void execute_623(char*, char *);
extern void execute_625(char*, char *);
extern void execute_613(char*, char *);
extern void execute_619(char*, char *);
extern void execute_620(char*, char *);
extern void execute_617(char*, char *);
extern void execute_676(char*, char *);
extern void execute_677(char*, char *);
extern void execute_679(char*, char *);
extern void execute_667(char*, char *);
extern void execute_673(char*, char *);
extern void execute_674(char*, char *);
extern void execute_671(char*, char *);
extern void execute_696(char*, char *);
extern void execute_697(char*, char *);
extern void execute_699(char*, char *);
extern void execute_687(char*, char *);
extern void execute_693(char*, char *);
extern void execute_694(char*, char *);
extern void execute_691(char*, char *);
extern void execute_850(char*, char *);
extern void execute_902(char*, char *);
extern void execute_907(char*, char *);
extern void execute_908(char*, char *);
extern void execute_909(char*, char *);
extern void execute_921(char*, char *);
extern void execute_922(char*, char *);
extern void execute_923(char*, char *);
extern void execute_924(char*, char *);
extern void execute_925(char*, char *);
extern void transaction_10(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_11(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_12(char*, char*, unsigned, unsigned, unsigned);
extern void vlog_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_15(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_18(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_19(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_23(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_24(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_25(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_27(char*, char*, unsigned, unsigned, unsigned);
extern void vhdl_transfunc_eventcallback(char*, char*, unsigned, unsigned, unsigned, char *);
extern void transaction_69(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_70(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_73(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_74(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_80(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_81(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_84(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_85(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_86(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_93(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_107(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_111(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_118(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_127(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_257(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_274(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_275(char*, char*, unsigned, unsigned, unsigned);
extern void transaction_22(char*, char*, unsigned, unsigned, unsigned);
funcp funcTab[244] = {(funcp)execute_2, (funcp)execute_905, (funcp)execute_911, (funcp)execute_912, (funcp)execute_913, (funcp)execute_914, (funcp)execute_915, (funcp)execute_916, (funcp)execute_917, (funcp)execute_918, (funcp)execute_919, (funcp)execute_920, (funcp)execute_903, (funcp)execute_904, (funcp)execute_910, (funcp)execute_134, (funcp)execute_208, (funcp)execute_865, (funcp)execute_866, (funcp)execute_874, (funcp)execute_887, (funcp)execute_888, (funcp)execute_131, (funcp)execute_132, (funcp)execute_133, (funcp)execute_213, (funcp)execute_215, (funcp)execute_240, (funcp)execute_218, (funcp)execute_219, (funcp)execute_243, (funcp)execute_247, (funcp)execute_258, (funcp)execute_250, (funcp)execute_254, (funcp)execute_255, (funcp)execute_264, (funcp)execute_263, (funcp)execute_872, (funcp)execute_869, (funcp)execute_870, (funcp)execute_878, (funcp)execute_879, (funcp)execute_880, (funcp)execute_884, (funcp)execute_885, (funcp)execute_886, (funcp)execute_152, (funcp)execute_153, (funcp)execute_171, (funcp)execute_143, (funcp)execute_149, (funcp)execute_150, (funcp)execute_147, (funcp)execute_155, (funcp)execute_157, (funcp)execute_159, (funcp)execute_161, (funcp)execute_163, (funcp)execute_165, (funcp)execute_167, (funcp)execute_169, (funcp)execute_236, (funcp)execute_237, (funcp)execute_239, (funcp)execute_228, (funcp)execute_233, (funcp)execute_234, (funcp)execute_231, (funcp)execute_271, (funcp)execute_858, (funcp)execute_859, (funcp)execute_274, (funcp)execute_276, (funcp)execute_278, (funcp)execute_317, (funcp)execute_417, (funcp)execute_451, (funcp)execute_459, (funcp)execute_530, (funcp)execute_828, (funcp)execute_829, (funcp)execute_844, (funcp)execute_827, (funcp)execute_832, (funcp)execute_833, (funcp)execute_284, (funcp)execute_285, (funcp)execute_286, (funcp)execute_292, (funcp)execute_310, (funcp)execute_311, (funcp)execute_313, (funcp)execute_301, (funcp)execute_307, (funcp)execute_308, (funcp)execute_305, (funcp)execute_358, (funcp)execute_330, (funcp)execute_331, (funcp)execute_361, (funcp)execute_394, (funcp)execute_396, (funcp)execute_397, (funcp)execute_354, (funcp)execute_355, (funcp)execute_357, (funcp)execute_345, (funcp)execute_351, (funcp)execute_352, (funcp)execute_349, (funcp)execute_365, (funcp)execute_370, (funcp)execute_388, (funcp)execute_389, (funcp)execute_391, (funcp)execute_379, (funcp)execute_385, (funcp)execute_386, (funcp)execute_383, (funcp)execute_401, (funcp)execute_402, (funcp)execute_403, (funcp)execute_406, (funcp)execute_407, (funcp)execute_408, (funcp)execute_455, (funcp)execute_445, (funcp)execute_446, (funcp)execute_448, (funcp)execute_436, (funcp)execute_442, (funcp)execute_443, (funcp)execute_440, (funcp)execute_516, (funcp)execute_517, (funcp)execute_529, (funcp)execute_507, (funcp)execute_513, (funcp)execute_514, (funcp)execute_511, (funcp)execute_519, (funcp)execute_521, (funcp)execute_523, (funcp)execute_525, (funcp)execute_527, (funcp)execute_837, (funcp)execute_544, (funcp)execute_547, (funcp)execute_554, (funcp)execute_595, (funcp)execute_596, (funcp)execute_557, (funcp)execute_561, (funcp)execute_564, (funcp)execute_568, (funcp)execute_600, (funcp)execute_601, (funcp)execute_605, (funcp)execute_647, (funcp)execute_648, (funcp)execute_652, (funcp)execute_653, (funcp)execute_654, (funcp)execute_655, (funcp)execute_656, (funcp)execute_657, (funcp)execute_658, (funcp)execute_659, (funcp)execute_740, (funcp)execute_741, (funcp)execute_742, (funcp)execute_743, (funcp)execute_585, (funcp)execute_586, (funcp)execute_594, (funcp)execute_576, (funcp)execute_582, (funcp)execute_583, (funcp)execute_580, (funcp)execute_588, (funcp)execute_590, (funcp)execute_592, (funcp)execute_622, (funcp)execute_623, (funcp)execute_625, (funcp)execute_613, (funcp)execute_619, (funcp)execute_620, (funcp)execute_617, (funcp)execute_676, (funcp)execute_677, (funcp)execute_679, (funcp)execute_667, (funcp)execute_673, (funcp)execute_674, (funcp)execute_671, (funcp)execute_696, (funcp)execute_697, (funcp)execute_699, (funcp)execute_687, (funcp)execute_693, (funcp)execute_694, (funcp)execute_691, (funcp)execute_850, (funcp)execute_902, (funcp)execute_907, (funcp)execute_908, (funcp)execute_909, (funcp)execute_921, (funcp)execute_922, (funcp)execute_923, (funcp)execute_924, (funcp)execute_925, (funcp)transaction_10, (funcp)transaction_11, (funcp)transaction_12, (funcp)vlog_transfunc_eventcallback, (funcp)transaction_15, (funcp)transaction_18, (funcp)transaction_19, (funcp)transaction_23, (funcp)transaction_24, (funcp)transaction_25, (funcp)transaction_27, (funcp)vhdl_transfunc_eventcallback, (funcp)transaction_69, (funcp)transaction_70, (funcp)transaction_73, (funcp)transaction_74, (funcp)transaction_80, (funcp)transaction_81, (funcp)transaction_84, (funcp)transaction_85, (funcp)transaction_86, (funcp)transaction_93, (funcp)transaction_107, (funcp)transaction_111, (funcp)transaction_118, (funcp)transaction_127, (funcp)transaction_257, (funcp)transaction_274, (funcp)transaction_275, (funcp)transaction_22};
const int NumRelocateId= 244;

void relocate(char *dp)
{
	iki_relocate(dp, "xsim.dir/tb_top_behav/xsim.reloc",  (void **)funcTab, 244);
	iki_vhdl_file_variable_register(dp + 608680);
	iki_vhdl_file_variable_register(dp + 608736);


	/*Populate the transaction function pointer field in the whole net structure */
}

void sensitize(char *dp)
{
	iki_sensitize(dp, "xsim.dir/tb_top_behav/xsim.reloc");
}

	// Initialize Verilog nets in mixed simulation, for the cases when the value at time 0 should be propagated from the mixed language Vhdl net

void wrapper_func_0(char *dp)

{

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 883320, dp + 877328, 0, 15, 0, 15, 16, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 883320, dp + 877384, 0, 15, 16, 31, 16, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 883264, dp + 882056, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 883360, dp + 882112, 0, 0, 0, 0, 1, 1);

	iki_vlog_schedule_transaction_signal_fast_vhdl_value_time_0(dp + 883416, dp + 882168, 0, 23, 0, 23, 24, 1);

}

void simulate(char *dp)
{
		iki_schedule_processes_at_time_zero(dp, "xsim.dir/tb_top_behav/xsim.reloc");
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
    iki_set_sv_type_file_path_name("xsim.dir/tb_top_behav/xsim.svtype");
    iki_set_crvs_dump_file_path_name("xsim.dir/tb_top_behav/xsim.crvsdump");
    void* design_handle = iki_create_design("xsim.dir/tb_top_behav/xsim.mem", (void *)relocate, (void *)sensitize, (void *)simulate, 0, isimBridge_getWdbWriter(), 0, argc, argv);
     iki_set_rc_trial_count(100);
    (void) design_handle;
    return iki_simulate_design();
}
