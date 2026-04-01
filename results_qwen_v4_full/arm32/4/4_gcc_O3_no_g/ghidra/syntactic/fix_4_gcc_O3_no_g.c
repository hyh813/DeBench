/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Compiler intrinsic macros */
#define SBORROW4(a,b) ((int)((a) - (b)) < 0)
#define SCARRY4(a,b) ((int)((a) + (b)) < (int)(a))
#define CARRY4(a,b) ((unsigned int)(a) + (unsigned int)(b) < (unsigned int)(a))
#define LZCOUNT(x) __builtin_clz(x)
#define CONCAT44(hi,lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))

/* Ghidra decompiler types */
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef int (*code)(int);
typedef unsigned char byte;
typedef _Bool bool;

/* External variables */
extern undefined8 handle1_1;
extern undefined8 handle2_0;
extern char DAT_0001143c[];

/* Global variable definitions */
undefined8 handle1_1 = 0x12345678;
undefined8 handle2_0 = 0x87654321;

/* Data string definitions */
char DAT_0001143c[] = "=== Calling Convention Tests ===";
char DAT_00011500[] = "PARAM-L2-04: %d\n";
char DAT_00011528[] = "PARAM-L1-03: %d\n";
char DAT_0001154c[] = "PARAM-L1-04: %d\n";
char DAT_00011574[] = "PARAM-L1-05: %d\n";
char DAT_0001159c[] = "PARAM-L1-06: %d\n";
char DAT_000115c8[] = "PARAM-L1-07: %d\n";
char DAT_000115f8[] = "=== Parameter Passing Tests ===";
char DAT_000116f8[] = "=== Return Value Tests ===";
char DAT_00011718[] = "RET-L1-01: %d\n";
char DAT_00011734[] = "RET-L1-02: %d\n";
char DAT_00011750[] = "RET-L1-03: %d\n";
char DAT_0001176c[] = "RET-L1-04: %d\n";
char DAT_0001178c[] = "RET-L1-05: %d\n";
char DAT_000117a8[] = "RET-L1-06: %d\n";
char DAT_000117c8[] = "RET-L1-07: %d\n";
char DAT_000117e4[] = "RET-L1-08: %d\n";
char DAT_00011800[] = "RET-L1-09: %d\n";

/* Compiler runtime function declarations */
extern ulonglong __floatsidf(int);
extern ulonglong __aeabi_l2d(undefined4, undefined4);
extern ulonglong __aeabi_dadd(int, int, undefined4, undefined4);
extern void __aeabi_d2iz(void);
extern char DAT_00011500[];
extern char DAT_00011528[];
extern char DAT_0001154c[];
extern char DAT_00011574[];
extern char DAT_0001159c[];
extern char DAT_000115c8[];
extern char DAT_000115f8[];
extern char DAT_000116f8[];
extern char DAT_00011718[];
extern char DAT_00011734[];
extern char DAT_00011750[];
extern char DAT_0001176c[];
extern char DAT_0001178c[];
extern char DAT_000117a8[];
extern char DAT_000117c8[];
extern char DAT_000117e4[];
extern char DAT_00011800[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_gcc_O3_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: main @ 0001042c */

undefined4 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: func_a @ 0001053c */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: param_varargs.constprop.0 @ 00010544 */

/* WARNING: Removing unreachable block (ram,0x000105ac) */

void param_varargs_constprop_0(void)

{
 return;
}



/* Function: varargs_func.constprop.0 @ 000105b4 */

/* WARNING: Removing unreachable block (ram,0x00010620) */

void varargs_func_constprop_0(void)

{
 return;
}



/* Function: func_b @ 00010628 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: cdecl_func @ 00010630 */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 00010638 */

undefined4 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00010640 */

int stdcall_func(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: call_stdcall @ 00010648 */

undefined4 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00010650 */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 0001065c */

undefined4 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 00010664 */

undefined4 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 0001066c */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 00010684 */

undefined4 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 0001068c */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 0001069c */

undefined4 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 000106a4 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 000106c4 */

undefined4 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 000106cc */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 000106e4 */

undefined4 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 000106ec */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 000106fc */

undefined4 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00010704 */

undefined4 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 0001070c */

/* WARNING: Removing unreachable block (ram,0x00010788) */

void varargs_func(int param_1)

{
 int iVar1;
 
 if (0 < param_1) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 } while (param_1 != iVar1);
 }
 return;
}



/* Function: func_no_args @ 00010790 */

undefined4 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00010798 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 000107c0 */

void func_mixed_args(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
 undefined4 param_5,undefined4 param_6)

{
 size_t sVar1;
 undefined8 uVar2;
 undefined8 uVar3;
 
 if (param_2 != (char *)0x0) {
 sVar1 = strlen(param_2);
 param_1 = param_1 + sVar1;
 }
 uVar2 = __floatsidf(param_1);
 uVar2 = __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_3,param_4);
 uVar3 = __aeabi_l2d(param_5,param_6);
 __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,(int)((ulonglong)uVar3 >> 0x20)
 );
 __aeabi_d2iz();
 return;
}



/* Function: func_struct_byval @ 00010824 */

int func_struct_byval(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
 undefined4 param_6,int param_7,undefined4 param_8,int param_9,
 undefined4 param_10,int param_11,undefined4 param_12,int param_13,
 undefined4 param_14,int param_15,undefined4 param_16,int param_17,
 undefined4 param_18,int param_19,undefined4 param_20,int param_21,
 undefined4 param_22,int param_23,undefined4 param_24,int param_25,
 undefined4 param_26,int param_27,undefined4 param_28,int param_29,
 undefined4 param_30,int param_31)

{
 return param_1 + param_3 + param_5 + param_7 + param_9 + param_11 + param_13 + param_15 + param_17
 + param_19 + param_21 + param_23 + param_25 + param_27 + param_29 + param_31;
}



/* Function: func_struct_byptr @ 000108b8 */

int func_struct_byptr(int *param_1)

{
 int iVar1;
 
 if (param_1 == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = param_1[1] * *param_1;
 }
 return iVar1;
}



/* Function: test_calling_conventions @ 000108d0 */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 
 puts(&DAT_0001143c);
 __printf_chk(1,"CALL-L1-01: %d\n",0xf);
 __printf_chk(1,"CALL-L1-02: %d\n",0x32);
 __printf_chk(1,"CALL-L1-03: %d\n",6);
 __printf_chk(1,"CALL-L1-04: %d\n",0xf);
 __printf_chk(1,"CALL-L1-05: %d\n",0xf);
 __printf_chk(1,"CALL-L1-06: %d\n",100);
 __printf_chk(1,"CALL-L1-07: %d\n",0x15);
 __printf_chk(1,"CALL-L1-08: %d\n",0xf);
 __printf_chk(1,"CALL-L1-09: %d\n",10);
 __printf_chk(1,"CALL-L1-10: %d\n",0x21);
 varargs_func_constprop_0();
 __printf_chk(1,&DAT_00011500,0);
 __printf_chk(1,&DAT_00011528,0x2a);
 __printf_chk(1,&DAT_0001154c,0x24);
 __printf_chk(1,&DAT_00011574,0x75);
 __printf_chk(1,&DAT_0001159c,0x88);
 __printf_chk(1,&DAT_000115c8,0x32);
 return;
}



/* Function: param_by_value_int @ 00010a4c */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 00010a54 */

undefined4 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 00010a5c */

void param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return;
}



/* Function: call_by_value_ptr @ 00010a74 */

undefined4 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 00010a7c */

undefined4 param_array_decay(void)

{
 return 4;
}



/* Function: call_array_decay @ 00010a84 */

undefined4 call_array_decay(void)

{
 return 4;
}



/* Function: param_string @ 00010a8c */

int param_string(byte *param_1)

{
 return (uint)*param_1 + (uint)param_1[1];
}



/* Function: call_string_param @ 00010a9c */

undefined4 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00010aa4 */

int param_ptr_array(int param_1,int param_2)

{
 int iVar1;
 undefined4 *puVar2;
 undefined4 *puVar3;
 
 iVar1 = 0;
 if (param_2 < 1) {
 return 0;
 }
 puVar3 = (undefined4 *)(param_1 + -4);
 puVar2 = puVar3 + param_2;
 do {
 puVar3 = puVar3 + 1;
 iVar1 = iVar1 + (uint)*(byte *)*puVar3;
 } while (puVar2 != puVar3);
 return iVar1;
}



/* Function: call_ptr_array @ 00010ad4 */

undefined4 call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 00010adc */

/* WARNING: Removing unreachable block (ram,0x00010b58) */

void param_varargs(int param_1)

{
 int iVar1;
 
 if (0 < param_1) {
 iVar1 = 0;
 do {
 iVar1 = iVar1 + 1;
 } while (param_1 != iVar1);
 }
 return;
}



/* Function: call_varargs_param @ 00010b60 */

void call_varargs_param(void)

{
 param_varargs_constprop_0();
 return;
}



/* Function: param_func_ptr @ 00010b8c */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00010ba4 */

undefined4 call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00010bac */

undefined4 param_double_ptr(undefined4 *param_1,undefined4 param_2)

{
 if ((param_1 != (undefined4 *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}



/* Function: call_double_ptr @ 00010bdc */

undefined4 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00010be4 */

int param_complex_cast(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 iVar1 = param_1[1] + *param_1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_complex_cast @ 00010c08 */

undefined4 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 00010c14 */

int param_struct_byval(int param_1)

{
 int in_stack_0000002c;
 
 return param_1 + in_stack_0000002c;
}



/* Function: call_struct_byval @ 00010c30 */

undefined4 call_struct_byval(void)

{
 return 0xf;
}



/* Function: param_order_dep @ 00010c38 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 00010c40 */

undefined4 call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 00010c48 */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 
 puts(&DAT_000115f8);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",4);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 __printf_chk(1,"PARAM-L2-03: %d\n",300);
 param_varargs_constprop_0();
 __printf_chk(1,"PARAM-L2-04: %d\n",0);
 __printf_chk(1,"PARAM-L3-01: %d\n",0x14);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 __printf_chk(1,"PARAM-L3-04: %d\n",0xf);
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
}



/* Function: ret_basic_type @ 00010d60 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00010d68 */

undefined4 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00010d70 */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00010d78 */

undefined4 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00010d80 */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}



/* Function: call_ret_small_struct @ 00010d88 */

undefined4 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00010d90 */

void ret_large_struct(int *param_1,int param_2)

{
 *param_1 = param_2;
 param_1[1] = param_2 + 1;
 param_1[2] = param_2 + 2;
 param_1[3] = param_2 + 3;
 param_1[4] = param_2 + 4;
 param_1[5] = param_2 + 5;
 param_1[6] = param_2 + 6;
 param_1[7] = param_2 + 7;
 param_1[8] = param_2 + 8;
 param_1[9] = param_2 + 9;
 param_1[10] = param_2 + 10;
 param_1[0xb] = param_2 + 0xb;
 param_1[0xc] = param_2 + 0xc;
 param_1[0xd] = param_2 + 0xd;
 param_1[0xe] = param_2 + 0xe;
 param_1[0xf] = param_2 + 0xf;
 return;
}



/* Function: call_ret_large_struct @ 00010e0c */

undefined4 call_ret_large_struct(void)

{
 return 0xd7;
}



/* Function: ret_func_ptr @ 00010e14 */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00010e34 */

undefined4 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00010e3c */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00010e58 */

undefined4 call_ret_opaque(void)

{
 return handle1_1;
}



/* Function: ret_complex_expr @ 00010e68 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 if (param_2 < param_1) {
 param_3 = param_3 << 1;
 }
 else {
 param_3 = param_3 + 10;
 }
 return param_3;
}



/* Function: call_ret_complex_expr @ 00010e78 */

undefined4 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00010e80 */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 if (param_1 < 3) {
 iVar1 = (param_1 + 1) * 10;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00010e98 */

undefined4 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00010ea0 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00010eac */

undefined4 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00010eb4 */

void test_return_values(void)

{
 puts(&DAT_000116f8);
 __printf_chk(1,&DAT_00011718,0x2a);
 __printf_chk(1,&DAT_00011734,0x14);
 __printf_chk(1,&DAT_00011750,7);
 __printf_chk(1,&DAT_0001176c,0xd7);
 __printf_chk(1,&DAT_0001178c,10);
 __printf_chk(1,&DAT_000117a8,handle1_1);
 __printf_chk(1,&DAT_000117c8,0x28);
 __printf_chk(1,&DAT_000117e4,0x3c);
 __printf_chk(1,&DAT_00011800,0x15);
 return;
}



/* Compiler runtime function - declared extern only */
extern void __aeabi_drsub(undefined4 param_1,uint param_2);



/* Compiler runtime function - declared extern only */
extern ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4);




/* CRT stub function __aeabi_dadd removed by preprocessor */




/* Compiler runtime function - declared extern only */
extern ulonglong __aeabi_ui2d(uint param_1);



/* Compiler runtime function - already declared extern above */



/* Compiler runtime function - declared extern only */
extern ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4);



/* Compiler runtime function - declared extern only */
extern ulonglong __floatundidf(uint param_1,uint param_2);



/* Compiler runtime function - already declared extern above */




/* CRT stub function __aeabi_d2iz removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 88 */
