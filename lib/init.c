#ifdef ___LINKER_INFO
; File: "init.c", produced by Gambit-C v4.5.1
(
405001
" init"
(" init")
(
"close"
"hide"
"show"
)
(
)
(
" init"
" init#0"
" init#1"
" init#2"
" init#3"
"grime3d-connect"
"grime3d-handle-message"
"grime3d-host"
"grime3d-set-host!"
"join-paths"
"path-trim"
"resource"
"window-close"
"window-hide"
"window-resize"
"window-show"
)
(
"grime3d-connection"
"init-engine-c"
"init-opengl-c"
"object-path"
"resource-path"
"run-frame-c"
)
(
"-"
"apply"
"car"
"cdr"
"cons"
"eof-object?"
"eq?"
"error"
"init-engine"
"init-opengl"
"load"
"make-thread"
"not"
"null?"
"open-tcp-client"
"pair?"
"read"
"run-frame"
"string-append"
"string-length"
"string-ref"
"substring"
"thread-start!"
)
 #f
)
#else
#define ___VERSION 405001
#define ___MODULE_NAME " init"
#define ___LINKER_ID ____20_init
#define ___MH_PROC ___H__20_init
#define ___SCRIPT_LINE 0
#define ___SYM_COUNT 3
#define ___GLO_COUNT 45
#define ___SUP_COUNT 22
#define ___SUB_COUNT 9
#define ___LBL_COUNT 137
#include "gambit.h"

___NEED_SYM(___S_close)
___NEED_SYM(___S_hide)
___NEED_SYM(___S_show)

___NEED_GLO(___G__20_init)
___NEED_GLO(___G__20_init_23_0)
___NEED_GLO(___G__20_init_23_1)
___NEED_GLO(___G__20_init_23_2)
___NEED_GLO(___G__20_init_23_3)
___NEED_GLO(___G__2d_)
___NEED_GLO(___G_apply)
___NEED_GLO(___G_car)
___NEED_GLO(___G_cdr)
___NEED_GLO(___G_cons)
___NEED_GLO(___G_eof_2d_object_3f_)
___NEED_GLO(___G_eq_3f_)
___NEED_GLO(___G_error)
___NEED_GLO(___G_grime3d_2d_connect)
___NEED_GLO(___G_grime3d_2d_connection)
___NEED_GLO(___G_grime3d_2d_handle_2d_message)
___NEED_GLO(___G_grime3d_2d_host)
___NEED_GLO(___G_grime3d_2d_set_2d_host_21_)
___NEED_GLO(___G_init_2d_engine)
___NEED_GLO(___G_init_2d_engine_2d_c)
___NEED_GLO(___G_init_2d_opengl)
___NEED_GLO(___G_init_2d_opengl_2d_c)
___NEED_GLO(___G_join_2d_paths)
___NEED_GLO(___G_load)
___NEED_GLO(___G_make_2d_thread)
___NEED_GLO(___G_not)
___NEED_GLO(___G_null_3f_)
___NEED_GLO(___G_object_2d_path)
___NEED_GLO(___G_open_2d_tcp_2d_client)
___NEED_GLO(___G_pair_3f_)
___NEED_GLO(___G_path_2d_trim)
___NEED_GLO(___G_read)
___NEED_GLO(___G_resource)
___NEED_GLO(___G_resource_2d_path)
___NEED_GLO(___G_run_2d_frame)
___NEED_GLO(___G_run_2d_frame_2d_c)
___NEED_GLO(___G_string_2d_append)
___NEED_GLO(___G_string_2d_length)
___NEED_GLO(___G_string_2d_ref)
___NEED_GLO(___G_substring)
___NEED_GLO(___G_thread_2d_start_21_)
___NEED_GLO(___G_window_2d_close)
___NEED_GLO(___G_window_2d_hide)
___NEED_GLO(___G_window_2d_resize)
___NEED_GLO(___G_window_2d_show)

___BEGIN_SYM1
___DEF_SYM1(0,___S_close,"close")
___DEF_SYM1(1,___S_hide,"hide")
___DEF_SYM1(2,___S_show,"show")
___END_SYM1

___BEGIN_GLO
___DEF_GLO(0," init")
___DEF_GLO(1," init#0")
___DEF_GLO(2," init#1")
___DEF_GLO(3," init#2")
___DEF_GLO(4," init#3")
___DEF_GLO(5,"grime3d-connect")
___DEF_GLO(6,"grime3d-connection")
___DEF_GLO(7,"grime3d-handle-message")
___DEF_GLO(8,"grime3d-host")
___DEF_GLO(9,"grime3d-set-host!")
___DEF_GLO(10,"init-engine-c")
___DEF_GLO(11,"init-opengl-c")
___DEF_GLO(12,"join-paths")
___DEF_GLO(13,"object-path")
___DEF_GLO(14,"path-trim")
___DEF_GLO(15,"resource")
___DEF_GLO(16,"resource-path")
___DEF_GLO(17,"run-frame-c")
___DEF_GLO(18,"window-close")
___DEF_GLO(19,"window-hide")
___DEF_GLO(20,"window-resize")
___DEF_GLO(21,"window-show")
___DEF_GLO(22,"-")
___DEF_GLO(23,"apply")
___DEF_GLO(24,"car")
___DEF_GLO(25,"cdr")
___DEF_GLO(26,"cons")
___DEF_GLO(27,"eof-object?")
___DEF_GLO(28,"eq?")
___DEF_GLO(29,"error")
___DEF_GLO(30,"init-engine")
___DEF_GLO(31,"init-opengl")
___DEF_GLO(32,"load")
___DEF_GLO(33,"make-thread")
___DEF_GLO(34,"not")
___DEF_GLO(35,"null?")
___DEF_GLO(36,"open-tcp-client")
___DEF_GLO(37,"pair?")
___DEF_GLO(38,"read")
___DEF_GLO(39,"run-frame")
___DEF_GLO(40,"string-append")
___DEF_GLO(41,"string-length")
___DEF_GLO(42,"string-ref")
___DEF_GLO(43,"substring")
___DEF_GLO(44,"thread-start!")
___END_GLO

___DEF_SUB_STR(___X0,3)
               ___STR3(108,105,98)
___DEF_SUB_STR(___X1,9)
               ___STR8(114,101,115,111,117,114,99,101)
               ___STR1(115)
___DEF_SUB_STR(___X2,10)
               ___STR8(108,105,98,47,101,110,103,105)
               ___STR2(110,101)
___DEF_SUB_STR(___X3,24)
               ___STR8(114,101,99,101,105,118,101,100)
               ___STR8(32,117,110,107,110,111,119,110)
               ___STR8(32,109,101,115,115,97,103,101)
               ___STR0
___DEF_SUB_STR(___X4,1)
               ___STR1(47)
___DEF_SUB_STR(___X5,1)
               ___STR1(47)
___DEF_SUB_STR(___X6,0)
               ___STR0
___DEF_SUB_STR(___X7,39)
               ___STR8(47,85,115,101,114,115,47,106)
               ___STR8(97,109,101,115,47,112,114,111)
               ___STR8(106,101,99,116,115,47,115,99)
               ___STR8(104,101,109,101,47,103,114,97)
               ___STR7(112,104,105,99,97,108,47)
___DEF_SUB_STR(___X8,15)
               ___STR8(108,111,99,97,108,104,111,115)
               ___STR7(116,58,51,53,48,48,48)

___BEGIN_SUB
 ___DEF_SUB(___X0)
,___DEF_SUB(___X1)
,___DEF_SUB(___X2)
,___DEF_SUB(___X3)
,___DEF_SUB(___X4)
,___DEF_SUB(___X5)
,___DEF_SUB(___X6)
,___DEF_SUB(___X7)
,___DEF_SUB(___X8)
___END_SUB


#define ___C_LBL_init_opengl 126
#define ___C_LBL_init_engine 129
#define ___C_LBL_run_frame 135

 void init_opengl ___P((unsigned int ___arg1,unsigned int ___arg2),(___arg1,___arg2)
unsigned int ___arg1;
unsigned int ___arg2;)
{
#define ___NARGS 2
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_init_opengl))
___BEGIN_SFUN_ARG(1,___ARG1)
___BEGIN_SFUN_UINT_TO_SCMOBJ(___arg1,___ARG1,1)
___BEGIN_SFUN_ARG(2,___ARG2)
___BEGIN_SFUN_UINT_TO_SCMOBJ(___arg2,___ARG2,2)
___BEGIN_SFUN_BODY
___SFUN_ARG(1,___ARG1)
___SFUN_ARG(2,___ARG2)
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___END_SFUN_UINT_TO_SCMOBJ(___arg2,___ARG2,2)
___END_SFUN_ARG(2)
___END_SFUN_UINT_TO_SCMOBJ(___arg1,___ARG1,1)
___END_SFUN_ARG(1)
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}

 void init_engine ___PVOID
{
#define ___NARGS 0
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_init_engine))
___BEGIN_SFUN_BODY
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}

 void run_frame ___PVOID
{
#define ___NARGS 0
___BEGIN_SFUN_VOID(___MLBL(___C_LBL_run_frame))
___BEGIN_SFUN_BODY
___SFUN_CALL_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_BODY
___SFUN_ERROR_VOID
___SFUN_SET_RESULT_VOID
___END_SFUN_VOID
#undef ___NARGS
}


#undef ___MD_ALL
#define ___MD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___MR_ALL
#define ___MR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_init)
___DEF_M_HLBL(___L1__20_init)
___DEF_M_HLBL(___L2__20_init)
___DEF_M_HLBL(___L3__20_init)
___DEF_M_HLBL(___L4__20_init)
___DEF_M_HLBL(___L5__20_init)
___DEF_M_HLBL(___L6__20_init)
___DEF_M_HLBL(___L7__20_init)
___DEF_M_HLBL(___L8__20_init)
___DEF_M_HLBL(___L9__20_init)
___DEF_M_HLBL(___L10__20_init)
___DEF_M_HLBL(___L11__20_init)
___DEF_M_HLBL(___L12__20_init)
___DEF_M_HLBL(___L13__20_init)
___DEF_M_HLBL(___L14__20_init)
___DEF_M_HLBL(___L15__20_init)
___DEF_M_HLBL(___L16__20_init)
___DEF_M_HLBL(___L17__20_init)
___DEF_M_HLBL(___L18__20_init)
___DEF_M_HLBL(___L19__20_init)
___DEF_M_HLBL(___L20__20_init)
___DEF_M_HLBL(___L21__20_init)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_init_23_0)
___DEF_M_HLBL(___L1__20_init_23_0)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_init_23_1)
___DEF_M_HLBL(___L1__20_init_23_1)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_init_23_2)
___DEF_M_HLBL(___L1__20_init_23_2)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_init_23_3)
___DEF_M_HLBL(___L1__20_init_23_3)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_grime3d_2d_set_2d_host_21_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_grime3d_2d_connect)
___DEF_M_HLBL(___L1_grime3d_2d_connect)
___DEF_M_HLBL(___L2_grime3d_2d_connect)
___DEF_M_HLBL(___L3_grime3d_2d_connect)
___DEF_M_HLBL(___L4_grime3d_2d_connect)
___DEF_M_HLBL(___L5_grime3d_2d_connect)
___DEF_M_HLBL(___L6_grime3d_2d_connect)
___DEF_M_HLBL(___L7_grime3d_2d_connect)
___DEF_M_HLBL(___L8_grime3d_2d_connect)
___DEF_M_HLBL(___L9_grime3d_2d_connect)
___DEF_M_HLBL(___L10_grime3d_2d_connect)
___DEF_M_HLBL(___L11_grime3d_2d_connect)
___DEF_M_HLBL(___L12_grime3d_2d_connect)
___DEF_M_HLBL(___L13_grime3d_2d_connect)
___DEF_M_HLBL(___L14_grime3d_2d_connect)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_grime3d_2d_handle_2d_message)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_path_2d_trim)
___DEF_M_HLBL(___L1_path_2d_trim)
___DEF_M_HLBL(___L2_path_2d_trim)
___DEF_M_HLBL(___L3_path_2d_trim)
___DEF_M_HLBL(___L4_path_2d_trim)
___DEF_M_HLBL(___L5_path_2d_trim)
___DEF_M_HLBL(___L6_path_2d_trim)
___DEF_M_HLBL(___L7_path_2d_trim)
___DEF_M_HLBL(___L8_path_2d_trim)
___DEF_M_HLBL(___L9_path_2d_trim)
___DEF_M_HLBL(___L10_path_2d_trim)
___DEF_M_HLBL(___L11_path_2d_trim)
___DEF_M_HLBL(___L12_path_2d_trim)
___DEF_M_HLBL(___L13_path_2d_trim)
___DEF_M_HLBL(___L14_path_2d_trim)
___DEF_M_HLBL(___L15_path_2d_trim)
___DEF_M_HLBL(___L16_path_2d_trim)
___DEF_M_HLBL(___L17_path_2d_trim)
___DEF_M_HLBL(___L18_path_2d_trim)
___DEF_M_HLBL(___L19_path_2d_trim)
___DEF_M_HLBL(___L20_path_2d_trim)
___DEF_M_HLBL(___L21_path_2d_trim)
___DEF_M_HLBL(___L22_path_2d_trim)
___DEF_M_HLBL(___L23_path_2d_trim)
___DEF_M_HLBL(___L24_path_2d_trim)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_join_2d_paths)
___DEF_M_HLBL(___L1_join_2d_paths)
___DEF_M_HLBL(___L2_join_2d_paths)
___DEF_M_HLBL(___L3_join_2d_paths)
___DEF_M_HLBL(___L4_join_2d_paths)
___DEF_M_HLBL(___L5_join_2d_paths)
___DEF_M_HLBL(___L6_join_2d_paths)
___DEF_M_HLBL(___L7_join_2d_paths)
___DEF_M_HLBL(___L8_join_2d_paths)
___DEF_M_HLBL(___L9_join_2d_paths)
___DEF_M_HLBL(___L10_join_2d_paths)
___DEF_M_HLBL(___L11_join_2d_paths)
___DEF_M_HLBL(___L12_join_2d_paths)
___DEF_M_HLBL(___L13_join_2d_paths)
___DEF_M_HLBL(___L14_join_2d_paths)
___DEF_M_HLBL(___L15_join_2d_paths)
___DEF_M_HLBL(___L16_join_2d_paths)
___DEF_M_HLBL(___L17_join_2d_paths)
___DEF_M_HLBL(___L18_join_2d_paths)
___DEF_M_HLBL(___L19_join_2d_paths)
___DEF_M_HLBL(___L20_join_2d_paths)
___DEF_M_HLBL(___L21_join_2d_paths)
___DEF_M_HLBL(___L22_join_2d_paths)
___DEF_M_HLBL(___L23_join_2d_paths)
___DEF_M_HLBL(___L24_join_2d_paths)
___DEF_M_HLBL(___L25_join_2d_paths)
___DEF_M_HLBL(___L26_join_2d_paths)
___DEF_M_HLBL(___L27_join_2d_paths)
___DEF_M_HLBL(___L28_join_2d_paths)
___DEF_M_HLBL(___L29_join_2d_paths)
___DEF_M_HLBL(___L30_join_2d_paths)
___DEF_M_HLBL(___L31_join_2d_paths)
___DEF_M_HLBL(___L32_join_2d_paths)
___DEF_M_HLBL(___L33_join_2d_paths)
___DEF_M_HLBL(___L34_join_2d_paths)
___DEF_M_HLBL(___L35_join_2d_paths)
___DEF_M_HLBL(___L36_join_2d_paths)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_resource)
___DEF_M_HLBL(___L1_resource)
___DEF_M_HLBL(___L2_resource)
___DEF_M_HLBL(___L3_resource)
___DEF_M_HLBL(___L4_resource)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_init_2d_opengl_2d_c)
___DEF_M_HLBL(___L1_init_2d_opengl_2d_c)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_init_2d_engine_2d_c)
___DEF_M_HLBL(___L1_init_2d_engine_2d_c)
___DEF_M_HLBL(___L2_init_2d_engine_2d_c)
___DEF_M_HLBL(___L3_init_2d_engine_2d_c)
___DEF_M_HLBL(___L4_init_2d_engine_2d_c)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_run_2d_frame_2d_c)
___DEF_M_HLBL(___L1_run_2d_frame_2d_c)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H__20_init
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_init)
___DEF_P_HLBL(___L1__20_init)
___DEF_P_HLBL(___L2__20_init)
___DEF_P_HLBL(___L3__20_init)
___DEF_P_HLBL(___L4__20_init)
___DEF_P_HLBL(___L5__20_init)
___DEF_P_HLBL(___L6__20_init)
___DEF_P_HLBL(___L7__20_init)
___DEF_P_HLBL(___L8__20_init)
___DEF_P_HLBL(___L9__20_init)
___DEF_P_HLBL(___L10__20_init)
___DEF_P_HLBL(___L11__20_init)
___DEF_P_HLBL(___L12__20_init)
___DEF_P_HLBL(___L13__20_init)
___DEF_P_HLBL(___L14__20_init)
___DEF_P_HLBL(___L15__20_init)
___DEF_P_HLBL(___L16__20_init)
___DEF_P_HLBL(___L17__20_init)
___DEF_P_HLBL(___L18__20_init)
___DEF_P_HLBL(___L19__20_init)
___DEF_P_HLBL(___L20__20_init)
___DEF_P_HLBL(___L21__20_init)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_init)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_init)
   ___SET_GLO(8,___G_grime3d_2d_host,___FAL)
   ___SET_GLO(6,___G_grime3d_2d_connection,___FAL)
   ___SET_GLO(9,___G_grime3d_2d_set_2d_host_21_,___PRC(36))
   ___SET_GLO(5,___G_grime3d_2d_connect,___PRC(38))
   ___SET_GLO(7,___G_grime3d_2d_handle_2d_message,___PRC(54))
   ___SET_GLO(13,___G_object_2d_path,___SUB(0))
   ___SET_GLO(16,___G_resource_2d_path,___SUB(1))
   ___SET_GLO(14,___G_path_2d_trim,___PRC(56))
   ___SET_GLO(12,___G_join_2d_paths,___PRC(82))
   ___SET_GLO(15,___G_resource,___PRC(120))
   ___SET_GLO(7,___G_grime3d_2d_handle_2d_message,___LBL(5))
   ___SET_STK(1,___R0)
   ___SET_R1(___SUB(2))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1__20_init)
   ___JUMPGLOSAFE(___SET_NARGS(1),15,___G_resource)
___DEF_SLBL(2,___L2__20_init)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(1),32,___G_load)
___DEF_SLBL(3,___L3__20_init)
   ___SET_GLO(11,___G_init_2d_opengl_2d_c,___PRC(126))
   ___SET_GLO(10,___G_init_2d_engine_2d_c,___PRC(129))
   ___SET_GLO(17,___G_run_2d_frame_2d_c,___PRC(135))
   ___SET_GLO(20,___G_window_2d_resize,___PRC(24))
   ___SET_GLO(21,___G_window_2d_show,___PRC(27))
   ___SET_GLO(19,___G_window_2d_hide,___PRC(30))
   ___SET_GLO(18,___G_window_2d_close,___PRC(33))
   ___SET_R1(___VOID)
   ___POLL(4)
___DEF_SLBL(4,___L4__20_init)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(5,___L5__20_init)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(5,1,0,0)
   ___IF(___NOT(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_))))
   ___GOTO(___L41__20_init)
   ___END_IF
   ___IF(___NOT(___EQP(___R1,___SYM(2,___S_show))))
   ___GOTO(___L24__20_init)
   ___END_IF
   ___POLL(6)
___DEF_SLBL(6,___L6__20_init)
   ___GOTO(___L22__20_init)
___DEF_SLBL(7,___L7__20_init)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L23__20_init)
   ___END_IF
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___POLL(8)
___DEF_SLBL(8,___L8__20_init)
___DEF_GLBL(___L22__20_init)
   ___JUMPGLOSAFE(___SET_NARGS(0),21,___G_window_2d_show)
___DEF_GLBL(___L23__20_init)
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___IF(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_)))
   ___GOTO(___L25__20_init)
   ___END_IF
   ___GOTO(___L39__20_init)
___DEF_GLBL(___L24__20_init)
   ___IF(___NOT(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_))))
   ___GOTO(___L39__20_init)
   ___END_IF
___DEF_GLBL(___L25__20_init)
   ___IF(___NOT(___EQP(___R1,___SYM(1,___S_hide))))
   ___GOTO(___L27__20_init)
   ___END_IF
   ___POLL(9)
___DEF_SLBL(9,___L9__20_init)
___DEF_GLBL(___L26__20_init)
   ___JUMPGLOSAFE(___SET_NARGS(0),19,___G_window_2d_hide)
___DEF_GLBL(___L27__20_init)
   ___IF(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_)))
   ___GOTO(___L28__20_init)
   ___END_IF
   ___GOTO(___L38__20_init)
___DEF_SLBL(10,___L10__20_init)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L37__20_init)
   ___END_IF
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___IF(___NOT(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_))))
   ___GOTO(___L38__20_init)
   ___END_IF
___DEF_GLBL(___L28__20_init)
   ___IF(___NOT(___EQP(___R1,___SYM(0,___S_close))))
   ___GOTO(___L30__20_init)
   ___END_IF
   ___POLL(11)
___DEF_SLBL(11,___L11__20_init)
___DEF_GLBL(___L29__20_init)
   ___JUMPGLOSAFE(___SET_NARGS(0),18,___G_window_2d_close)
___DEF_GLBL(___L30__20_init)
   ___IF(___EQP(___GLO(37,___G_pair_3f_),___PRM(37,___G_pair_3f_)))
   ___GOTO(___L31__20_init)
   ___END_IF
   ___GOTO(___L36__20_init)
___DEF_SLBL(12,___L12__20_init)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L35__20_init)
   ___END_IF
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___IF(___NOT(___EQP(___GLO(37,___G_pair_3f_),___PRM(37,___G_pair_3f_))))
   ___GOTO(___L36__20_init)
   ___END_IF
___DEF_GLBL(___L31__20_init)
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L33__20_init)
   ___END_IF
___DEF_GLBL(___L32__20_init)
   ___SET_R2(___R1)
   ___SET_R1(___GLO(20,___G_window_2d_resize))
   ___POLL(13)
___DEF_SLBL(13,___L13__20_init)
   ___JUMPGLOSAFE(___SET_NARGS(2),23,___G_apply)
___DEF_SLBL(14,___L14__20_init)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L34__20_init)
   ___END_IF
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
___DEF_GLBL(___L33__20_init)
   ___SET_R1(___SUB(3))
   ___POLL(15)
___DEF_SLBL(15,___L15__20_init)
   ___JUMPGLOSAFE(___SET_NARGS(1),29,___G_error)
___DEF_GLBL(___L34__20_init)
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___GOTO(___L32__20_init)
___DEF_GLBL(___L35__20_init)
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___POLL(16)
___DEF_SLBL(16,___L16__20_init)
   ___GOTO(___L29__20_init)
___DEF_GLBL(___L36__20_init)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(14))
   ___ADJFP(4)
   ___POLL(17)
___DEF_SLBL(17,___L17__20_init)
   ___JUMPGLOSAFE(___SET_NARGS(1),37,___G_pair_3f_)
___DEF_GLBL(___L37__20_init)
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___POLL(18)
___DEF_SLBL(18,___L18__20_init)
   ___GOTO(___L26__20_init)
___DEF_GLBL(___L38__20_init)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM(0,___S_close))
   ___SET_R0(___LBL(12))
   ___ADJFP(4)
   ___POLL(19)
___DEF_SLBL(19,___L19__20_init)
   ___GOTO(___L40__20_init)
___DEF_GLBL(___L39__20_init)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM(1,___S_hide))
   ___SET_R0(___LBL(10))
   ___ADJFP(4)
   ___POLL(20)
___DEF_SLBL(20,___L20__20_init)
___DEF_GLBL(___L40__20_init)
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_eq_3f_)
___DEF_GLBL(___L41__20_init)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___SYM(2,___S_show))
   ___SET_R0(___LBL(7))
   ___ADJFP(4)
   ___POLL(21)
___DEF_SLBL(21,___L21__20_init)
   ___GOTO(___L40__20_init)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_init_23_0
#undef ___PH_LBL0
#define ___PH_LBL0 24
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_init_23_0)
___DEF_P_HLBL(___L1__20_init_23_0)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_init_23_0)
   ___IF_NARGS_EQ(4,___NOTHING)
   ___WRONG_NARGS(0,4,0,0)
___DEF_GLBL(___L__20_init_23_0)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(7)
#define ___NARGS 4
___BEGIN_CFUN_VOID
#define ___ARG1 ___CFUN_ARG(1)
___BEGIN_CFUN_ARG(1,int ___arg1)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
#define ___ARG2 ___CFUN_ARG(2)
___BEGIN_CFUN_ARG(2,int ___arg2)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
#define ___ARG3 ___CFUN_ARG(3)
___BEGIN_CFUN_ARG(3,int ___arg3)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG3,___arg3,3)
#define ___ARG4 ___CFUN_ARG(4)
___BEGIN_CFUN_ARG(4,int ___arg4)
___BEGIN_CFUN_SCMOBJ_TO_INT(___ARG4,___arg4,4)
___BEGIN_CFUN_BODY
#undef ___AT_END
___CFUN_CALL_VOID(window_resize(___arg1,___arg2,___arg3,___arg4))
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___END_CFUN_SCMOBJ_TO_INT(___ARG4,___arg4,4)
___END_CFUN_ARG(4)
#undef ___ARG4
___END_CFUN_SCMOBJ_TO_INT(___ARG3,___arg3,3)
___END_CFUN_ARG(3)
#undef ___ARG3
___END_CFUN_SCMOBJ_TO_INT(___ARG2,___arg2,2)
___END_CFUN_ARG(2)
#undef ___ARG2
___END_CFUN_SCMOBJ_TO_INT(___ARG1,___arg1,1)
___END_CFUN_ARG(1)
#undef ___ARG1
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_init_23_0)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(5))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_init_23_1
#undef ___PH_LBL0
#define ___PH_LBL0 27
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_init_23_1)
___DEF_P_HLBL(___L1__20_init_23_1)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_init_23_1)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_init_23_1)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(4)
#define ___NARGS 0
___BEGIN_CFUN_VOID
___BEGIN_CFUN_BODY
#undef ___AT_END
___CFUN_CALL_VOID(window_show())
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_init_23_1)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_init_23_2
#undef ___PH_LBL0
#define ___PH_LBL0 30
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_init_23_2)
___DEF_P_HLBL(___L1__20_init_23_2)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_init_23_2)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_init_23_2)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(4)
#define ___NARGS 0
___BEGIN_CFUN_VOID
___BEGIN_CFUN_BODY
#undef ___AT_END
___CFUN_CALL_VOID(window_hide())
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_init_23_2)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H__20_init_23_3
#undef ___PH_LBL0
#define ___PH_LBL0 33
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_init_23_3)
___DEF_P_HLBL(___L1__20_init_23_3)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_init_23_3)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_init_23_3)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(1))
   ___ADJFP(4)
#define ___NARGS 0
___BEGIN_CFUN_VOID
___BEGIN_CFUN_BODY
#undef ___AT_END
___CFUN_CALL_VOID(window_close())
#ifndef ___AT_END
#define ___AT_END
#endif
___CFUN_SET_RESULT_VOID
___END_CFUN_BODY
___CFUN_ERROR_VOID
___END_CFUN_VOID
#undef ___NARGS
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(1,___L1__20_init_23_3)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_grime3d_2d_set_2d_host_21_
#undef ___PH_LBL0
#define ___PH_LBL0 36
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_grime3d_2d_set_2d_host_21_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_grime3d_2d_set_2d_host_21_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_grime3d_2d_set_2d_host_21_)
   ___SET_GLO(8,___G_grime3d_2d_host,___R1)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_grime3d_2d_connect
#undef ___PH_LBL0
#define ___PH_LBL0 38
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_grime3d_2d_connect)
___DEF_P_HLBL(___L1_grime3d_2d_connect)
___DEF_P_HLBL(___L2_grime3d_2d_connect)
___DEF_P_HLBL(___L3_grime3d_2d_connect)
___DEF_P_HLBL(___L4_grime3d_2d_connect)
___DEF_P_HLBL(___L5_grime3d_2d_connect)
___DEF_P_HLBL(___L6_grime3d_2d_connect)
___DEF_P_HLBL(___L7_grime3d_2d_connect)
___DEF_P_HLBL(___L8_grime3d_2d_connect)
___DEF_P_HLBL(___L9_grime3d_2d_connect)
___DEF_P_HLBL(___L10_grime3d_2d_connect)
___DEF_P_HLBL(___L11_grime3d_2d_connect)
___DEF_P_HLBL(___L12_grime3d_2d_connect)
___DEF_P_HLBL(___L13_grime3d_2d_connect)
___DEF_P_HLBL(___L14_grime3d_2d_connect)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_grime3d_2d_connect)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_grime3d_2d_connect)
   ___SET_STK(1,___R0)
   ___SET_R1(___GLO(8,___G_grime3d_2d_host))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_grime3d_2d_connect)
   ___JUMPGLOSAFE(___SET_NARGS(1),36,___G_open_2d_tcp_2d_client)
___DEF_SLBL(2,___L2_grime3d_2d_connect)
   ___SET_STK(-2,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(-2),6)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___SET_R1(___STK(-2))
   ___SET_R0(___LBL(4))
   ___CHECK_HEAP(3,4096)
___DEF_SLBL(3,___L3_grime3d_2d_connect)
   ___JUMPGLOSAFE(___SET_NARGS(1),33,___G_make_2d_thread)
___DEF_SLBL(4,___L4_grime3d_2d_connect)
   ___SET_R0(___STK(-3))
   ___POLL(5)
___DEF_SLBL(5,___L5_grime3d_2d_connect)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(1),44,___G_thread_2d_start_21_)
___DEF_SLBL(6,___L6_grime3d_2d_connect)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(6,0,0,0)
   ___SET_R1(___CLO(___R4,1))
   ___POLL(7)
___DEF_SLBL(7,___L7_grime3d_2d_connect)
   ___GOTO(___L15_grime3d_2d_connect)
___DEF_SLBL(8,___L8_grime3d_2d_connect)
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___POLL(9)
___DEF_SLBL(9,___L9_grime3d_2d_connect)
___DEF_GLBL(___L15_grime3d_2d_connect)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(11))
   ___ADJFP(4)
   ___POLL(10)
___DEF_SLBL(10,___L10_grime3d_2d_connect)
   ___JUMPGLOSAFE(___SET_NARGS(1),38,___G_read)
___DEF_SLBL(11,___L11_grime3d_2d_connect)
   ___IF(___NOT(___EQP(___GLO(27,___G_eof_2d_object_3f_),___PRM(27,___G_eof_2d_object_3f_))))
   ___GOTO(___L20_grime3d_2d_connect)
   ___END_IF
   ___SET_R2(___BOOLEAN(___EOFP(___R1)))
   ___IF(___EQP(___GLO(34,___G_not),___PRM(34,___G_not)))
   ___GOTO(___L16_grime3d_2d_connect)
   ___END_IF
   ___GOTO(___L19_grime3d_2d_connect)
___DEF_SLBL(12,___L12_grime3d_2d_connect)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-1))
   ___IF(___NOT(___EQP(___GLO(34,___G_not),___PRM(34,___G_not))))
   ___GOTO(___L19_grime3d_2d_connect)
   ___END_IF
___DEF_GLBL(___L16_grime3d_2d_connect)
   ___IF(___FALSEP(___R2))
   ___GOTO(___L18_grime3d_2d_connect)
   ___END_IF
___DEF_GLBL(___L17_grime3d_2d_connect)
   ___SET_R1(___VOID)
   ___POLL(13)
___DEF_SLBL(13,___L13_grime3d_2d_connect)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(14,___L14_grime3d_2d_connect)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L17_grime3d_2d_connect)
   ___END_IF
   ___SET_R1(___STK(-1))
___DEF_GLBL(___L18_grime3d_2d_connect)
   ___SET_R0(___LBL(8))
   ___JUMPGLOSAFE(___SET_NARGS(1),7,___G_grime3d_2d_handle_2d_message)
___DEF_GLBL(___L19_grime3d_2d_connect)
   ___SET_STK(-1,___R1)
   ___SET_R1(___R2)
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(1),34,___G_not)
___DEF_GLBL(___L20_grime3d_2d_connect)
   ___SET_STK(-1,___R1)
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(1),27,___G_eof_2d_object_3f_)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_grime3d_2d_handle_2d_message
#undef ___PH_LBL0
#define ___PH_LBL0 54
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_grime3d_2d_handle_2d_message)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_grime3d_2d_handle_2d_message)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_grime3d_2d_handle_2d_message)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_path_2d_trim
#undef ___PH_LBL0
#define ___PH_LBL0 56
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_path_2d_trim)
___DEF_P_HLBL(___L1_path_2d_trim)
___DEF_P_HLBL(___L2_path_2d_trim)
___DEF_P_HLBL(___L3_path_2d_trim)
___DEF_P_HLBL(___L4_path_2d_trim)
___DEF_P_HLBL(___L5_path_2d_trim)
___DEF_P_HLBL(___L6_path_2d_trim)
___DEF_P_HLBL(___L7_path_2d_trim)
___DEF_P_HLBL(___L8_path_2d_trim)
___DEF_P_HLBL(___L9_path_2d_trim)
___DEF_P_HLBL(___L10_path_2d_trim)
___DEF_P_HLBL(___L11_path_2d_trim)
___DEF_P_HLBL(___L12_path_2d_trim)
___DEF_P_HLBL(___L13_path_2d_trim)
___DEF_P_HLBL(___L14_path_2d_trim)
___DEF_P_HLBL(___L15_path_2d_trim)
___DEF_P_HLBL(___L16_path_2d_trim)
___DEF_P_HLBL(___L17_path_2d_trim)
___DEF_P_HLBL(___L18_path_2d_trim)
___DEF_P_HLBL(___L19_path_2d_trim)
___DEF_P_HLBL(___L20_path_2d_trim)
___DEF_P_HLBL(___L21_path_2d_trim)
___DEF_P_HLBL(___L22_path_2d_trim)
___DEF_P_HLBL(___L23_path_2d_trim)
___DEF_P_HLBL(___L24_path_2d_trim)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_path_2d_trim)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_path_2d_trim)
   ___SET_R1(___BOX(___R1))
   ___SET_R2(___UNBOX(___R1))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_path_2d_trim)
   ___IF(___NOT(___EQP(___GLO(42,___G_string_2d_ref),___PRM(42,___G_string_2d_ref))))
   ___GOTO(___L47_path_2d_trim)
   ___END_IF
   ___IF(___NOT(___STRINGP(___R2)))
   ___GOTO(___L47_path_2d_trim)
   ___END_IF
   ___SET_R3(___STRINGLENGTH(___R2))
   ___IF(___NOT(___FIXLT(___FIX(0L),___R3)))
   ___GOTO(___L47_path_2d_trim)
   ___END_IF
   ___SET_R2(___STRINGREF(___R2,___FIX(0L)))
   ___IF(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_)))
   ___GOTO(___L25_path_2d_trim)
   ___END_IF
   ___GOTO(___L51_path_2d_trim)
___DEF_SLBL(2,___L2_path_2d_trim)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___IF(___NOT(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_))))
   ___GOTO(___L51_path_2d_trim)
   ___END_IF
___DEF_GLBL(___L25_path_2d_trim)
   ___IF(___NOT(___EQP(___R2,___CHR(47))))
   ___GOTO(___L29_path_2d_trim)
   ___END_IF
___DEF_GLBL(___L26_path_2d_trim)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___UNBOX(___R1))
   ___ADJFP(2)
   ___IF(___NOT(___EQP(___GLO(41,___G_string_2d_length),___PRM(41,___G_string_2d_length))))
   ___GOTO(___L42_path_2d_trim)
   ___END_IF
   ___IF(___NOT(___STRINGP(___R1)))
   ___GOTO(___L42_path_2d_trim)
   ___END_IF
   ___SET_R1(___STRINGLENGTH(___R1))
___DEF_GLBL(___L27_path_2d_trim)
   ___SET_R3(___R1)
   ___SET_R1(___UNBOX(___STK(0)))
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(4))
   ___ADJFP(2)
   ___POLL(3)
___DEF_SLBL(3,___L3_path_2d_trim)
___DEF_GLBL(___L28_path_2d_trim)
   ___JUMPGLOSAFE(___SET_NARGS(3),43,___G_substring)
___DEF_SLBL(4,___L4_path_2d_trim)
   ___SETBOX(___STK(-2),___R1)
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___GOTO(___L29_path_2d_trim)
___DEF_SLBL(5,___L5_path_2d_trim)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L50_path_2d_trim)
   ___END_IF
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
___DEF_GLBL(___L29_path_2d_trim)
   ___SET_R2(___UNBOX(___R1))
   ___SET_R3(___UNBOX(___R1))
   ___IF(___NOT(___EQP(___GLO(41,___G_string_2d_length),___PRM(41,___G_string_2d_length))))
   ___GOTO(___L49_path_2d_trim)
   ___END_IF
   ___IF(___NOT(___STRINGP(___R3)))
   ___GOTO(___L49_path_2d_trim)
   ___END_IF
   ___SET_R3(___STRINGLENGTH(___R3))
   ___IF(___NOT(___EQP(___GLO(22,___G__2d_),___PRM(22,___G__2d_))))
   ___GOTO(___L31_path_2d_trim)
   ___END_IF
___DEF_GLBL(___L30_path_2d_trim)
   ___IF(___NOT(___FIXNUMP(___R3)))
   ___GOTO(___L31_path_2d_trim)
   ___END_IF
   ___SET_R4(___FIXSUBP(___R3,___FIX(1L)))
   ___IF(___NOT(___FALSEP(___R4)))
   ___GOTO(___L32_path_2d_trim)
   ___END_IF
___DEF_GLBL(___L31_path_2d_trim)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___R3)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(7))
   ___ADJFP(4)
   ___POLL(6)
___DEF_SLBL(6,___L6_path_2d_trim)
   ___JUMPGLOSAFE(___SET_NARGS(2),22,___G__2d_)
___DEF_SLBL(7,___L7_path_2d_trim)
   ___SET_R4(___R1)
   ___SET_R2(___STK(-1))
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___IF(___EQP(___GLO(42,___G_string_2d_ref),___PRM(42,___G_string_2d_ref)))
   ___GOTO(___L33_path_2d_trim)
   ___END_IF
   ___GOTO(___L46_path_2d_trim)
___DEF_GLBL(___L32_path_2d_trim)
   ___IF(___NOT(___EQP(___GLO(42,___G_string_2d_ref),___PRM(42,___G_string_2d_ref))))
   ___GOTO(___L46_path_2d_trim)
   ___END_IF
___DEF_GLBL(___L33_path_2d_trim)
   ___IF(___NOT(___STRINGP(___R2)))
   ___GOTO(___L46_path_2d_trim)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R4)))
   ___GOTO(___L46_path_2d_trim)
   ___END_IF
   ___IF(___NOT(___FIXLE(___FIX(0L),___R4)))
   ___GOTO(___L46_path_2d_trim)
   ___END_IF
   ___SET_R3(___STRINGLENGTH(___R2))
   ___IF(___NOT(___FIXLT(___R4,___R3)))
   ___GOTO(___L46_path_2d_trim)
   ___END_IF
   ___SET_R2(___STRINGREF(___R2,___R4))
   ___IF(___NOT(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_))))
   ___GOTO(___L44_path_2d_trim)
   ___END_IF
___DEF_GLBL(___L34_path_2d_trim)
   ___IF(___NOT(___EQP(___R2,___CHR(47))))
   ___GOTO(___L39_path_2d_trim)
   ___END_IF
___DEF_GLBL(___L35_path_2d_trim)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___UNBOX(___R1))
   ___ADJFP(2)
   ___IF(___NOT(___EQP(___GLO(41,___G_string_2d_length),___PRM(41,___G_string_2d_length))))
   ___GOTO(___L41_path_2d_trim)
   ___END_IF
   ___IF(___NOT(___STRINGP(___R1)))
   ___GOTO(___L41_path_2d_trim)
   ___END_IF
   ___SET_R1(___STRINGLENGTH(___R1))
   ___IF(___NOT(___EQP(___GLO(22,___G__2d_),___PRM(22,___G__2d_))))
   ___GOTO(___L37_path_2d_trim)
   ___END_IF
___DEF_GLBL(___L36_path_2d_trim)
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L37_path_2d_trim)
   ___END_IF
   ___SET_R2(___FIXSUBP(___R1,___FIX(1L)))
   ___IF(___NOT(___FALSEP(___R2)))
   ___GOTO(___L38_path_2d_trim)
   ___END_IF
___DEF_GLBL(___L37_path_2d_trim)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(9))
   ___ADJFP(2)
   ___POLL(8)
___DEF_SLBL(8,___L8_path_2d_trim)
   ___JUMPGLOSAFE(___SET_NARGS(2),22,___G__2d_)
___DEF_SLBL(9,___L9_path_2d_trim)
   ___SET_R2(___R1)
   ___ADJFP(-2)
___DEF_GLBL(___L38_path_2d_trim)
   ___SET_R3(___R2)
   ___SET_R1(___UNBOX(___STK(0)))
   ___SET_R2(___FIX(0L))
   ___SET_R0(___LBL(11))
   ___ADJFP(2)
   ___POLL(10)
___DEF_SLBL(10,___L10_path_2d_trim)
   ___GOTO(___L28_path_2d_trim)
___DEF_SLBL(11,___L11_path_2d_trim)
   ___SETBOX(___STK(-2),___R1)
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___GOTO(___L39_path_2d_trim)
___DEF_SLBL(12,___L12_path_2d_trim)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L40_path_2d_trim)
   ___END_IF
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
___DEF_GLBL(___L39_path_2d_trim)
   ___SET_R1(___UNBOX(___R1))
   ___POLL(13)
___DEF_SLBL(13,___L13_path_2d_trim)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L40_path_2d_trim)
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___GOTO(___L35_path_2d_trim)
___DEF_GLBL(___L41_path_2d_trim)
   ___SET_R0(___LBL(17))
   ___ADJFP(2)
   ___POLL(14)
___DEF_SLBL(14,___L14_path_2d_trim)
   ___GOTO(___L43_path_2d_trim)
___DEF_GLBL(___L42_path_2d_trim)
   ___SET_R0(___LBL(16))
   ___ADJFP(2)
   ___POLL(15)
___DEF_SLBL(15,___L15_path_2d_trim)
___DEF_GLBL(___L43_path_2d_trim)
   ___JUMPGLOSAFE(___SET_NARGS(1),41,___G_string_2d_length)
___DEF_SLBL(16,___L16_path_2d_trim)
   ___ADJFP(-2)
   ___GOTO(___L27_path_2d_trim)
___DEF_SLBL(17,___L17_path_2d_trim)
   ___ADJFP(-2)
   ___IF(___EQP(___GLO(22,___G__2d_),___PRM(22,___G__2d_)))
   ___GOTO(___L36_path_2d_trim)
   ___END_IF
   ___GOTO(___L37_path_2d_trim)
___DEF_SLBL(18,___L18_path_2d_trim)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___IF(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_)))
   ___GOTO(___L34_path_2d_trim)
   ___END_IF
___DEF_GLBL(___L44_path_2d_trim)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___R2)
   ___SET_R2(___CHR(47))
   ___SET_R0(___LBL(12))
   ___ADJFP(4)
   ___POLL(19)
___DEF_SLBL(19,___L19_path_2d_trim)
___DEF_GLBL(___L45_path_2d_trim)
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_eq_3f_)
___DEF_GLBL(___L46_path_2d_trim)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R2(___R4)
   ___SET_R1(___STK(3))
   ___SET_R0(___LBL(18))
   ___ADJFP(4)
   ___POLL(20)
___DEF_SLBL(20,___L20_path_2d_trim)
   ___GOTO(___L48_path_2d_trim)
___DEF_GLBL(___L47_path_2d_trim)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(0L))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(21)
___DEF_SLBL(21,___L21_path_2d_trim)
___DEF_GLBL(___L48_path_2d_trim)
   ___JUMPGLOSAFE(___SET_NARGS(2),42,___G_string_2d_ref)
___DEF_GLBL(___L49_path_2d_trim)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___R3)
   ___SET_R0(___LBL(23))
   ___ADJFP(4)
   ___POLL(22)
___DEF_SLBL(22,___L22_path_2d_trim)
   ___JUMPGLOSAFE(___SET_NARGS(1),41,___G_string_2d_length)
___DEF_SLBL(23,___L23_path_2d_trim)
   ___SET_R3(___R1)
   ___SET_R2(___STK(-1))
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___IF(___EQP(___GLO(22,___G__2d_),___PRM(22,___G__2d_)))
   ___GOTO(___L30_path_2d_trim)
   ___END_IF
   ___GOTO(___L31_path_2d_trim)
___DEF_GLBL(___L50_path_2d_trim)
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___GOTO(___L26_path_2d_trim)
___DEF_GLBL(___L51_path_2d_trim)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___R2)
   ___SET_R2(___CHR(47))
   ___SET_R0(___LBL(5))
   ___ADJFP(4)
   ___POLL(24)
___DEF_SLBL(24,___L24_path_2d_trim)
   ___GOTO(___L45_path_2d_trim)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_join_2d_paths
#undef ___PH_LBL0
#define ___PH_LBL0 82
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_join_2d_paths)
___DEF_P_HLBL(___L1_join_2d_paths)
___DEF_P_HLBL(___L2_join_2d_paths)
___DEF_P_HLBL(___L3_join_2d_paths)
___DEF_P_HLBL(___L4_join_2d_paths)
___DEF_P_HLBL(___L5_join_2d_paths)
___DEF_P_HLBL(___L6_join_2d_paths)
___DEF_P_HLBL(___L7_join_2d_paths)
___DEF_P_HLBL(___L8_join_2d_paths)
___DEF_P_HLBL(___L9_join_2d_paths)
___DEF_P_HLBL(___L10_join_2d_paths)
___DEF_P_HLBL(___L11_join_2d_paths)
___DEF_P_HLBL(___L12_join_2d_paths)
___DEF_P_HLBL(___L13_join_2d_paths)
___DEF_P_HLBL(___L14_join_2d_paths)
___DEF_P_HLBL(___L15_join_2d_paths)
___DEF_P_HLBL(___L16_join_2d_paths)
___DEF_P_HLBL(___L17_join_2d_paths)
___DEF_P_HLBL(___L18_join_2d_paths)
___DEF_P_HLBL(___L19_join_2d_paths)
___DEF_P_HLBL(___L20_join_2d_paths)
___DEF_P_HLBL(___L21_join_2d_paths)
___DEF_P_HLBL(___L22_join_2d_paths)
___DEF_P_HLBL(___L23_join_2d_paths)
___DEF_P_HLBL(___L24_join_2d_paths)
___DEF_P_HLBL(___L25_join_2d_paths)
___DEF_P_HLBL(___L26_join_2d_paths)
___DEF_P_HLBL(___L27_join_2d_paths)
___DEF_P_HLBL(___L28_join_2d_paths)
___DEF_P_HLBL(___L29_join_2d_paths)
___DEF_P_HLBL(___L30_join_2d_paths)
___DEF_P_HLBL(___L31_join_2d_paths)
___DEF_P_HLBL(___L32_join_2d_paths)
___DEF_P_HLBL(___L33_join_2d_paths)
___DEF_P_HLBL(___L34_join_2d_paths)
___DEF_P_HLBL(___L35_join_2d_paths)
___DEF_P_HLBL(___L36_join_2d_paths)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_join_2d_paths)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_join_2d_paths)
   ___IF(___NOT(___EQP(___GLO(24,___G_car),___PRM(24,___G_car))))
   ___GOTO(___L89_join_2d_paths)
   ___END_IF
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L89_join_2d_paths)
   ___END_IF
   ___SET_R2(___CAR(___R1))
   ___IF(___EQP(___GLO(42,___G_string_2d_ref),___PRM(42,___G_string_2d_ref)))
   ___GOTO(___L37_join_2d_paths)
   ___END_IF
   ___GOTO(___L88_join_2d_paths)
___DEF_SLBL(1,___L1_join_2d_paths)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___IF(___NOT(___EQP(___GLO(42,___G_string_2d_ref),___PRM(42,___G_string_2d_ref))))
   ___GOTO(___L88_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L37_join_2d_paths)
   ___IF(___NOT(___STRINGP(___R2)))
   ___GOTO(___L88_join_2d_paths)
   ___END_IF
   ___SET_R3(___STRINGLENGTH(___R2))
   ___IF(___NOT(___FIXLT(___FIX(0L),___R3)))
   ___GOTO(___L88_join_2d_paths)
   ___END_IF
   ___SET_R2(___STRINGREF(___R2,___FIX(0L)))
   ___IF(___NOT(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_))))
   ___GOTO(___L87_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L38_join_2d_paths)
   ___IF(___NOT(___EQP(___R2,___CHR(47))))
   ___GOTO(___L84_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L39_join_2d_paths)
   ___SET_R2(___SUB(4))
   ___IF(___NOT(___EQP(___GLO(24,___G_car),___PRM(24,___G_car))))
   ___GOTO(___L85_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L40_join_2d_paths)
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L85_join_2d_paths)
   ___END_IF
   ___SET_R3(___CAR(___R1))
   ___IF(___NOT(___EQP(___GLO(25,___G_cdr),___PRM(25,___G_cdr))))
   ___GOTO(___L83_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L41_join_2d_paths)
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L83_join_2d_paths)
   ___END_IF
   ___SET_R1(___CDR(___R1))
___DEF_GLBL(___L42_join_2d_paths)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R2)
   ___SET_R1(___R3)
   ___SET_R0(___LBL(3))
   ___ADJFP(8)
   ___POLL(2)
___DEF_SLBL(2,___L2_join_2d_paths)
___DEF_GLBL(___L43_join_2d_paths)
   ___JUMPGLOSAFE(___SET_NARGS(1),14,___G_path_2d_trim)
___DEF_SLBL(3,___L3_join_2d_paths)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-4))
   ___SET_R3(___SUB(5))
   ___SET_R0(___LBL(4))
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(3),40,___G_string_2d_append)
___DEF_SLBL(4,___L4_join_2d_paths)
   ___IF(___NOT(___EQP(___GLO(35,___G_null_3f_),___PRM(35,___G_null_3f_))))
   ___GOTO(___L82_join_2d_paths)
   ___END_IF
   ___IF(___NOT(___NULLP(___STK(-2))))
   ___GOTO(___L76_join_2d_paths)
   ___END_IF
   ___IF(___EQP(___GLO(41,___G_string_2d_length),___PRM(41,___G_string_2d_length)))
   ___GOTO(___L44_join_2d_paths)
   ___END_IF
   ___GOTO(___L74_join_2d_paths)
___DEF_SLBL(5,___L5_join_2d_paths)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L75_join_2d_paths)
   ___END_IF
   ___SET_R1(___STK(-4))
   ___ADJFP(-4)
   ___IF(___NOT(___EQP(___GLO(41,___G_string_2d_length),___PRM(41,___G_string_2d_length))))
   ___GOTO(___L74_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L44_join_2d_paths)
   ___IF(___NOT(___STRINGP(___STK(-1))))
   ___GOTO(___L74_join_2d_paths)
   ___END_IF
   ___SET_R2(___STRINGLENGTH(___STK(-1)))
   ___IF(___NOT(___EQP(___GLO(22,___G__2d_),___PRM(22,___G__2d_))))
   ___GOTO(___L73_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L45_join_2d_paths)
   ___IF(___NOT(___FIXNUMP(___R2)))
   ___GOTO(___L73_join_2d_paths)
   ___END_IF
   ___SET_R3(___FIXSUBP(___R2,___FIX(1L)))
   ___IF(___FALSEP(___R3))
   ___GOTO(___L73_join_2d_paths)
   ___END_IF
   ___IF(___NOT(___EQP(___GLO(42,___G_string_2d_ref),___PRM(42,___G_string_2d_ref))))
   ___GOTO(___L72_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L46_join_2d_paths)
   ___IF(___NOT(___STRINGP(___STK(-1))))
   ___GOTO(___L72_join_2d_paths)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R3)))
   ___GOTO(___L72_join_2d_paths)
   ___END_IF
   ___IF(___NOT(___FIXLE(___FIX(0L),___R3)))
   ___GOTO(___L72_join_2d_paths)
   ___END_IF
   ___SET_R2(___STRINGLENGTH(___STK(-1)))
   ___IF(___NOT(___FIXLT(___R3,___R2)))
   ___GOTO(___L72_join_2d_paths)
   ___END_IF
   ___SET_R2(___STRINGREF(___STK(-1),___R3))
   ___IF(___NOT(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_))))
   ___GOTO(___L58_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L47_join_2d_paths)
   ___IF(___NOT(___EQP(___R2,___CHR(47))))
   ___GOTO(___L49_join_2d_paths)
   ___END_IF
   ___POLL(6)
___DEF_SLBL(6,___L6_join_2d_paths)
___DEF_GLBL(___L48_join_2d_paths)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L49_join_2d_paths)
   ___IF(___EQP(___GLO(41,___G_string_2d_length),___PRM(41,___G_string_2d_length)))
   ___GOTO(___L50_join_2d_paths)
   ___END_IF
   ___GOTO(___L54_join_2d_paths)
___DEF_SLBL(7,___L7_join_2d_paths)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L55_join_2d_paths)
   ___END_IF
   ___SET_R1(___STK(-2))
   ___IF(___NOT(___EQP(___GLO(41,___G_string_2d_length),___PRM(41,___G_string_2d_length))))
   ___GOTO(___L54_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L50_join_2d_paths)
   ___IF(___NOT(___STRINGP(___R1)))
   ___GOTO(___L54_join_2d_paths)
   ___END_IF
   ___SET_R2(___STRINGLENGTH(___R1))
   ___IF(___NOT(___EQP(___GLO(22,___G__2d_),___PRM(22,___G__2d_))))
   ___GOTO(___L53_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L51_join_2d_paths)
   ___IF(___NOT(___FIXNUMP(___R2)))
   ___GOTO(___L53_join_2d_paths)
   ___END_IF
   ___SET_R3(___FIXSUBP(___R2,___FIX(1L)))
   ___IF(___FALSEP(___R3))
   ___GOTO(___L53_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L52_join_2d_paths)
   ___SET_R2(___FIX(0L))
   ___SET_R0(___STK(-3))
   ___POLL(8)
___DEF_SLBL(8,___L8_join_2d_paths)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(3),43,___G_substring)
___DEF_SLBL(9,___L9_join_2d_paths)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-2))
   ___IF(___EQP(___GLO(22,___G__2d_),___PRM(22,___G__2d_)))
   ___GOTO(___L51_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L53_join_2d_paths)
   ___SET_STK(-2,___R1)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(10))
   ___JUMPGLOSAFE(___SET_NARGS(2),22,___G__2d_)
___DEF_SLBL(10,___L10_join_2d_paths)
   ___SET_R3(___R1)
   ___SET_R1(___STK(-2))
   ___GOTO(___L52_join_2d_paths)
___DEF_GLBL(___L54_join_2d_paths)
   ___SET_STK(-2,___R1)
   ___SET_R0(___LBL(9))
   ___JUMPGLOSAFE(___SET_NARGS(1),41,___G_string_2d_length)
___DEF_GLBL(___L55_join_2d_paths)
   ___SET_R1(___STK(-2))
   ___POLL(11)
___DEF_SLBL(11,___L11_join_2d_paths)
   ___GOTO(___L48_join_2d_paths)
___DEF_SLBL(12,___L12_join_2d_paths)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-1))
   ___IF(___NOT(___EQP(___GLO(22,___G__2d_),___PRM(22,___G__2d_))))
   ___GOTO(___L60_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L56_join_2d_paths)
   ___IF(___NOT(___FIXNUMP(___R2)))
   ___GOTO(___L60_join_2d_paths)
   ___END_IF
   ___SET_R3(___FIXSUBP(___R2,___FIX(1L)))
   ___IF(___FALSEP(___R3))
   ___GOTO(___L60_join_2d_paths)
   ___END_IF
   ___IF(___NOT(___EQP(___GLO(42,___G_string_2d_ref),___PRM(42,___G_string_2d_ref))))
   ___GOTO(___L61_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L57_join_2d_paths)
   ___IF(___NOT(___STRINGP(___STK(-2))))
   ___GOTO(___L61_join_2d_paths)
   ___END_IF
   ___IF(___NOT(___FIXNUMP(___R3)))
   ___GOTO(___L61_join_2d_paths)
   ___END_IF
   ___IF(___NOT(___FIXLE(___FIX(0L),___R3)))
   ___GOTO(___L61_join_2d_paths)
   ___END_IF
   ___SET_R2(___STRINGLENGTH(___STK(-2)))
   ___IF(___NOT(___FIXLT(___R3,___R2)))
   ___GOTO(___L61_join_2d_paths)
   ___END_IF
   ___SET_R2(___STRINGREF(___STK(-2),___R3))
   ___IF(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_)))
   ___GOTO(___L47_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L58_join_2d_paths)
   ___SET_STK(-2,___R1)
   ___SET_R1(___R2)
   ___SET_R2(___CHR(47))
   ___SET_R0(___LBL(7))
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_eq_3f_)
___DEF_SLBL(13,___L13_join_2d_paths)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L62_join_2d_paths)
   ___END_IF
   ___SET_R1(___STK(-4))
   ___ADJFP(-4)
   ___IF(___NOT(___EQP(___GLO(41,___G_string_2d_length),___PRM(41,___G_string_2d_length))))
   ___GOTO(___L71_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L59_join_2d_paths)
   ___IF(___NOT(___STRINGP(___STK(-2))))
   ___GOTO(___L71_join_2d_paths)
   ___END_IF
   ___SET_R2(___STRINGLENGTH(___STK(-2)))
   ___IF(___EQP(___GLO(22,___G__2d_),___PRM(22,___G__2d_)))
   ___GOTO(___L56_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L60_join_2d_paths)
   ___SET_STK(-1,___R1)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(14))
   ___JUMPGLOSAFE(___SET_NARGS(2),22,___G__2d_)
___DEF_SLBL(14,___L14_join_2d_paths)
   ___SET_R3(___R1)
   ___SET_R1(___STK(-1))
   ___IF(___EQP(___GLO(42,___G_string_2d_ref),___PRM(42,___G_string_2d_ref)))
   ___GOTO(___L57_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L61_join_2d_paths)
   ___SET_STK(-1,___R1)
   ___SET_R2(___R3)
   ___SET_R1(___STK(-2))
   ___SET_R0(___LBL(15))
   ___JUMPGLOSAFE(___SET_NARGS(2),42,___G_string_2d_ref)
___DEF_SLBL(15,___L15_join_2d_paths)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-1))
   ___IF(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_)))
   ___GOTO(___L47_join_2d_paths)
   ___END_IF
   ___GOTO(___L58_join_2d_paths)
___DEF_GLBL(___L62_join_2d_paths)
   ___SET_R1(___STK(-4))
   ___ADJFP(-4)
   ___IF(___EQP(___GLO(24,___G_car),___PRM(24,___G_car)))
   ___GOTO(___L63_join_2d_paths)
   ___END_IF
   ___GOTO(___L68_join_2d_paths)
___DEF_SLBL(16,___L16_join_2d_paths)
   ___IF(___NOT(___EQP(___GLO(35,___G_null_3f_),___PRM(35,___G_null_3f_))))
   ___GOTO(___L69_join_2d_paths)
   ___END_IF
   ___IF(___NULLP(___STK(-1)))
   ___GOTO(___L70_join_2d_paths)
   ___END_IF
   ___IF(___NOT(___EQP(___GLO(24,___G_car),___PRM(24,___G_car))))
   ___GOTO(___L68_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L63_join_2d_paths)
   ___IF(___NOT(___PAIRP(___STK(-1))))
   ___GOTO(___L68_join_2d_paths)
   ___END_IF
   ___SET_R2(___CAR(___STK(-1)))
___DEF_GLBL(___L64_join_2d_paths)
   ___SET_STK(-2,___R2)
   ___IF(___NOT(___EQP(___GLO(25,___G_cdr),___PRM(25,___G_cdr))))
   ___GOTO(___L67_join_2d_paths)
   ___END_IF
   ___IF(___NOT(___PAIRP(___STK(-1))))
   ___GOTO(___L67_join_2d_paths)
   ___END_IF
   ___SET_R2(___CDR(___STK(-1)))
___DEF_GLBL(___L65_join_2d_paths)
   ___SET_R3(___R2)
   ___SET_R0(___STK(-3))
   ___SET_R2(___STK(-2))
   ___ADJFP(-4)
   ___POLL(17)
___DEF_SLBL(17,___L17_join_2d_paths)
___DEF_GLBL(___L66_join_2d_paths)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R1)
   ___SET_R1(___R2)
   ___SET_R0(___LBL(19))
   ___ADJFP(8)
   ___POLL(18)
___DEF_SLBL(18,___L18_join_2d_paths)
   ___GOTO(___L43_join_2d_paths)
___DEF_SLBL(19,___L19_join_2d_paths)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-4))
   ___SET_R3(___SUB(5))
   ___SET_R0(___LBL(16))
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(3),40,___G_string_2d_append)
___DEF_GLBL(___L67_join_2d_paths)
   ___SET_STK(0,___R1)
   ___SET_R1(___STK(-1))
   ___SET_R0(___LBL(20))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(1),25,___G_cdr)
___DEF_SLBL(20,___L20_join_2d_paths)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-4))
   ___ADJFP(-4)
   ___GOTO(___L65_join_2d_paths)
___DEF_GLBL(___L68_join_2d_paths)
   ___SET_STK(-2,___R1)
   ___SET_R1(___STK(-1))
   ___SET_R0(___LBL(21))
   ___JUMPGLOSAFE(___SET_NARGS(1),24,___G_car)
___DEF_SLBL(21,___L21_join_2d_paths)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-2))
   ___GOTO(___L64_join_2d_paths)
___DEF_GLBL(___L69_join_2d_paths)
   ___SET_STK(0,___R1)
   ___SET_R1(___STK(-1))
   ___SET_R0(___LBL(13))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(1),35,___G_null_3f_)
___DEF_GLBL(___L70_join_2d_paths)
   ___IF(___EQP(___GLO(41,___G_string_2d_length),___PRM(41,___G_string_2d_length)))
   ___GOTO(___L59_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L71_join_2d_paths)
   ___SET_STK(-1,___R1)
   ___SET_R1(___STK(-2))
   ___SET_R0(___LBL(12))
   ___JUMPGLOSAFE(___SET_NARGS(1),41,___G_string_2d_length)
___DEF_SLBL(22,___L22_join_2d_paths)
   ___SET_R3(___R1)
   ___SET_R1(___STK(-2))
   ___IF(___EQP(___GLO(42,___G_string_2d_ref),___PRM(42,___G_string_2d_ref)))
   ___GOTO(___L46_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L72_join_2d_paths)
   ___SET_STK(-2,___R1)
   ___SET_R2(___R3)
   ___SET_R1(___STK(-1))
   ___SET_R0(___LBL(23))
   ___JUMPGLOSAFE(___SET_NARGS(2),42,___G_string_2d_ref)
___DEF_SLBL(23,___L23_join_2d_paths)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-2))
   ___IF(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_)))
   ___GOTO(___L47_join_2d_paths)
   ___END_IF
   ___GOTO(___L58_join_2d_paths)
___DEF_SLBL(24,___L24_join_2d_paths)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-2))
   ___IF(___EQP(___GLO(22,___G__2d_),___PRM(22,___G__2d_)))
   ___GOTO(___L45_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L73_join_2d_paths)
   ___SET_STK(-2,___R1)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(22))
   ___JUMPGLOSAFE(___SET_NARGS(2),22,___G__2d_)
___DEF_GLBL(___L74_join_2d_paths)
   ___SET_STK(-2,___R1)
   ___SET_R1(___STK(-1))
   ___SET_R0(___LBL(24))
   ___JUMPGLOSAFE(___SET_NARGS(1),41,___G_string_2d_length)
___DEF_GLBL(___L75_join_2d_paths)
   ___SET_R1(___STK(-4))
   ___ADJFP(-4)
   ___IF(___EQP(___GLO(24,___G_car),___PRM(24,___G_car)))
   ___GOTO(___L77_join_2d_paths)
   ___END_IF
   ___GOTO(___L81_join_2d_paths)
___DEF_GLBL(___L76_join_2d_paths)
   ___IF(___NOT(___EQP(___GLO(24,___G_car),___PRM(24,___G_car))))
   ___GOTO(___L81_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L77_join_2d_paths)
   ___IF(___NOT(___PAIRP(___STK(-2))))
   ___GOTO(___L81_join_2d_paths)
   ___END_IF
   ___SET_R2(___CAR(___STK(-2)))
___DEF_GLBL(___L78_join_2d_paths)
   ___SET_STK(-1,___R2)
   ___IF(___NOT(___EQP(___GLO(25,___G_cdr),___PRM(25,___G_cdr))))
   ___GOTO(___L80_join_2d_paths)
   ___END_IF
   ___IF(___NOT(___PAIRP(___STK(-2))))
   ___GOTO(___L80_join_2d_paths)
   ___END_IF
   ___SET_R2(___CDR(___STK(-2)))
___DEF_GLBL(___L79_join_2d_paths)
   ___SET_R3(___R2)
   ___SET_R0(___STK(-3))
   ___SET_R2(___STK(-1))
   ___ADJFP(-4)
   ___POLL(25)
___DEF_SLBL(25,___L25_join_2d_paths)
   ___GOTO(___L66_join_2d_paths)
___DEF_GLBL(___L80_join_2d_paths)
   ___SET_STK(0,___R1)
   ___SET_R1(___STK(-2))
   ___SET_R0(___LBL(26))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(1),25,___G_cdr)
___DEF_SLBL(26,___L26_join_2d_paths)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-4))
   ___ADJFP(-4)
   ___GOTO(___L79_join_2d_paths)
___DEF_GLBL(___L81_join_2d_paths)
   ___SET_STK(-1,___R1)
   ___SET_R1(___STK(-2))
   ___SET_R0(___LBL(27))
   ___JUMPGLOSAFE(___SET_NARGS(1),24,___G_car)
___DEF_SLBL(27,___L27_join_2d_paths)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-1))
   ___GOTO(___L78_join_2d_paths)
___DEF_GLBL(___L82_join_2d_paths)
   ___SET_STK(0,___R1)
   ___SET_R1(___STK(-2))
   ___SET_R0(___LBL(5))
   ___ADJFP(4)
   ___JUMPGLOSAFE(___SET_NARGS(1),35,___G_null_3f_)
___DEF_SLBL(28,___L28_join_2d_paths)
   ___SET_R3(___R1)
   ___SET_R2(___STK(-1))
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___IF(___EQP(___GLO(25,___G_cdr),___PRM(25,___G_cdr)))
   ___GOTO(___L41_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L83_join_2d_paths)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R2)
   ___SET_STK(3,___R3)
   ___SET_R0(___LBL(30))
   ___ADJFP(4)
   ___POLL(29)
___DEF_SLBL(29,___L29_join_2d_paths)
   ___JUMPGLOSAFE(___SET_NARGS(1),25,___G_cdr)
___DEF_SLBL(30,___L30_join_2d_paths)
   ___SET_R3(___STK(-1))
   ___SET_R2(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___GOTO(___L42_join_2d_paths)
___DEF_SLBL(31,___L31_join_2d_paths)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L86_join_2d_paths)
   ___END_IF
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
___DEF_GLBL(___L84_join_2d_paths)
   ___SET_R2(___SUB(6))
   ___IF(___EQP(___GLO(24,___G_car),___PRM(24,___G_car)))
   ___GOTO(___L40_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L85_join_2d_paths)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R0(___LBL(28))
   ___ADJFP(4)
   ___POLL(32)
___DEF_SLBL(32,___L32_join_2d_paths)
   ___JUMPGLOSAFE(___SET_NARGS(1),24,___G_car)
___DEF_GLBL(___L86_join_2d_paths)
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___GOTO(___L39_join_2d_paths)
___DEF_SLBL(33,___L33_join_2d_paths)
   ___SET_R2(___R1)
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
   ___IF(___EQP(___GLO(28,___G_eq_3f_),___PRM(28,___G_eq_3f_)))
   ___GOTO(___L38_join_2d_paths)
   ___END_IF
___DEF_GLBL(___L87_join_2d_paths)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___R2)
   ___SET_R2(___CHR(47))
   ___SET_R0(___LBL(31))
   ___ADJFP(4)
   ___POLL(34)
___DEF_SLBL(34,___L34_join_2d_paths)
   ___JUMPGLOSAFE(___SET_NARGS(2),28,___G_eq_3f_)
___DEF_GLBL(___L88_join_2d_paths)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R1(___R2)
   ___SET_R2(___FIX(0L))
   ___SET_R0(___LBL(33))
   ___ADJFP(4)
   ___POLL(35)
___DEF_SLBL(35,___L35_join_2d_paths)
   ___JUMPGLOSAFE(___SET_NARGS(2),42,___G_string_2d_ref)
___DEF_GLBL(___L89_join_2d_paths)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(1))
   ___ADJFP(4)
   ___POLL(36)
___DEF_SLBL(36,___L36_join_2d_paths)
   ___JUMPGLOSAFE(___SET_NARGS(1),24,___G_car)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_resource
#undef ___PH_LBL0
#define ___PH_LBL0 120
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_resource)
___DEF_P_HLBL(___L1_resource)
___DEF_P_HLBL(___L2_resource)
___DEF_P_HLBL(___L3_resource)
___DEF_P_HLBL(___L4_resource)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_resource)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_resource)
   ___IF(___NOT(___EQP(___GLO(26,___G_cons),___PRM(26,___G_cons))))
   ___GOTO(___L6_resource)
   ___END_IF
   ___SET_R1(___CONS(___SUB(7),___R1))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_resource)
   ___GOTO(___L5_resource)
___DEF_SLBL(2,___L2_resource)
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
___DEF_GLBL(___L5_resource)
   ___SET_R2(___R1)
   ___SET_R1(___GLO(12,___G_join_2d_paths))
   ___POLL(3)
___DEF_SLBL(3,___L3_resource)
   ___JUMPGLOSAFE(___SET_NARGS(2),23,___G_apply)
___DEF_GLBL(___L6_resource)
   ___SET_STK(1,___R0)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(7))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(4)
___DEF_SLBL(4,___L4_resource)
   ___JUMPGLOSAFE(___SET_NARGS(2),26,___G_cons)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_init_2d_opengl_2d_c
#undef ___PH_LBL0
#define ___PH_LBL0 126
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_init_2d_opengl_2d_c)
___DEF_P_HLBL(___L1_init_2d_opengl_2d_c)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_init_2d_opengl_2d_c)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_init_2d_opengl_2d_c)
   ___POLL(1)
___DEF_SLBL(1,___L1_init_2d_opengl_2d_c)
   ___JUMPGLOSAFE(___SET_NARGS(2),31,___G_init_2d_opengl)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_init_2d_engine_2d_c
#undef ___PH_LBL0
#define ___PH_LBL0 129
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_init_2d_engine_2d_c)
___DEF_P_HLBL(___L1_init_2d_engine_2d_c)
___DEF_P_HLBL(___L2_init_2d_engine_2d_c)
___DEF_P_HLBL(___L3_init_2d_engine_2d_c)
___DEF_P_HLBL(___L4_init_2d_engine_2d_c)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_init_2d_engine_2d_c)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_init_2d_engine_2d_c)
   ___SET_STK(1,___R0)
   ___SET_R1(___SUB(8))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_init_2d_engine_2d_c)
   ___JUMPGLOSAFE(___SET_NARGS(1),9,___G_grime3d_2d_set_2d_host_21_)
___DEF_SLBL(2,___L2_init_2d_engine_2d_c)
   ___SET_R0(___LBL(3))
   ___JUMPGLOSAFE(___SET_NARGS(0),5,___G_grime3d_2d_connect)
___DEF_SLBL(3,___L3_init_2d_engine_2d_c)
   ___SET_R0(___STK(-3))
   ___POLL(4)
___DEF_SLBL(4,___L4_init_2d_engine_2d_c)
   ___ADJFP(-4)
   ___JUMPGLOSAFE(___SET_NARGS(0),30,___G_init_2d_engine)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_run_2d_frame_2d_c
#undef ___PH_LBL0
#define ___PH_LBL0 135
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_run_2d_frame_2d_c)
___DEF_P_HLBL(___L1_run_2d_frame_2d_c)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_run_2d_frame_2d_c)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_run_2d_frame_2d_c)
   ___POLL(1)
___DEF_SLBL(1,___L1_run_2d_frame_2d_c)
   ___JUMPGLOSAFE(___SET_NARGS(0),39,___G_run_2d_frame)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H__20_init," init",___REF_FAL,22,0)
,___DEF_LBL_PROC(___H__20_init,0,0)
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H__20_init,1,0)
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H__20_init,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_INTRO(___H__20_init_23_0," init#0",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_init_23_0,4,0)
,___DEF_LBL_RET(___H__20_init_23_0,___IFD(___RETN,5,4,0x1fL))
,___DEF_LBL_INTRO(___H__20_init_23_1," init#1",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_init_23_1,0,0)
,___DEF_LBL_RET(___H__20_init_23_1,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_INTRO(___H__20_init_23_2," init#2",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_init_23_2,0,0)
,___DEF_LBL_RET(___H__20_init_23_2,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_INTRO(___H__20_init_23_3," init#3",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H__20_init_23_3,0,0)
,___DEF_LBL_RET(___H__20_init_23_3,___IFD(___RETN,1,0,0x1L))
,___DEF_LBL_INTRO(___H_grime3d_2d_set_2d_host_21_,0,___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_grime3d_2d_set_2d_host_21_,1,0)
,___DEF_LBL_INTRO(___H_grime3d_2d_connect,0,___REF_FAL,15,0)
,___DEF_LBL_PROC(___H_grime3d_2d_connect,0,0)
,___DEF_LBL_RET(___H_grime3d_2d_connect,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_grime3d_2d_connect,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_grime3d_2d_connect,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_grime3d_2d_connect,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_grime3d_2d_connect,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_PROC(___H_grime3d_2d_connect,0,1)
,___DEF_LBL_RET(___H_grime3d_2d_connect,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_grime3d_2d_connect,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_grime3d_2d_connect,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_grime3d_2d_connect,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_grime3d_2d_connect,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_grime3d_2d_connect,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_grime3d_2d_connect,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_grime3d_2d_connect,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_INTRO(___H_grime3d_2d_handle_2d_message,0,___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_grime3d_2d_handle_2d_message,1,0)
,___DEF_LBL_INTRO(___H_path_2d_trim,0,___REF_FAL,25,0)
,___DEF_LBL_PROC(___H_path_2d_trim,1,0)
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETI,4,0,0x3f7L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETI,4,0,0x3f7L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_path_2d_trim,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_INTRO(___H_join_2d_paths,0,___REF_FAL,37,0)
,___DEF_LBL_PROC(___H_join_2d_paths,1,0)
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x5L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,7,0,0xbL))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,7,0,0xdL))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETI,4,0,0x3f7L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETI,4,0,0x3f7L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_join_2d_paths,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_INTRO(___H_resource,0,___REF_FAL,5,0)
,___DEF_LBL_PROC(___H_resource,1,0)
,___DEF_LBL_RET(___H_resource,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_resource,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_resource,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_resource,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_init_2d_opengl_2d_c,0,___REF_FAL,2,init_opengl)
,___DEF_LBL_PROC(___H_init_2d_opengl_2d_c,2,0)
,___DEF_LBL_RET(___H_init_2d_opengl_2d_c,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_init_2d_engine_2d_c,0,___REF_FAL,5,init_engine)
,___DEF_LBL_PROC(___H_init_2d_engine_2d_c,0,0)
,___DEF_LBL_RET(___H_init_2d_engine_2d_c,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_init_2d_engine_2d_c,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_init_2d_engine_2d_c,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_init_2d_engine_2d_c,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_INTRO(___H_run_2d_frame_2d_c,0,___REF_FAL,2,run_frame)
,___DEF_LBL_PROC(___H_run_2d_frame_2d_c,0,0)
,___DEF_LBL_RET(___H_run_2d_frame_2d_c,___IFD(___RETI,0,0,0x3fL))
___END_LBL

___BEGIN_MOD1
___DEF_PRM(0,___G__20_init,1)
___DEF_PRM(1,___G__20_init_23_0,24)
___DEF_PRM(2,___G__20_init_23_1,27)
___DEF_PRM(3,___G__20_init_23_2,30)
___DEF_PRM(4,___G__20_init_23_3,33)
___END_MOD1

___BEGIN_MOD2
___DEF_SYM2(0,___S_close,"close")
___DEF_SYM2(1,___S_hide,"hide")
___DEF_SYM2(2,___S_show,"show")
___END_MOD2

#endif
