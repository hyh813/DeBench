#include <stdio.h>
#include <string.h>
#include <stdarg.h>

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
typedef unsigned int uint;
typedef unsigned long ulong;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra decompiler types */
typedef void (*code)(void);
typedef int (*int_func_ptr)(int);
typedef int undefined4;
typedef long long undefined8;

/* Helper macros for concatenation */
#define CONCAT44(low,high) ((((uint64_t)(high)) << 32) | ((uint32_t)(low)))

/* Data references (string constants) */
static const char DAT_00103020[] = "Calling Conventions Test:\n";
static const char DAT_001030e2[] = "CALL-L2-01: %d\n";
static const char DAT_0010310a[] = "CALL-L2-02: %d\n";
static const char DAT_0010312c[] = "CALL-L2-03: %d\n";
static const char DAT_00103153[] = "test";
static const char DAT_00103158[] = "CALL-L2-04: %d\n";
static const char DAT_00103180[] = "CALL-L2-05: %d\n";
static const char DAT_001031ac[] = "CALL-L2-06: %d\n";
static const char DAT_001031df[] = "ABC";
static const char DAT_001031e3[] = "DEF";
static const char DAT_001031e7[] = "GHI";
static const char DAT_001031eb[] = "Parameter Passing Test:\n";
static const char DAT_001032c8[] = "Return Values Test:\n";
static const char DAT_001032e7[] = "RET-L1-01: %d\n";
static const char DAT_00103303[] = "RET-L1-02: %d\n";
static const char DAT_0010331f[] = "RET-L1-03: %d\n";
static const char DAT_0010333a[] = "RET-L1-04: %d\n";
static const char DAT_00103357[] = "RET-L1-05: %d\n";
static const char DAT_00103373[] = "RET-L1-06: %d\n";
static const char DAT_00103390[] = "RET-L1-07: %d\n";
static const char DAT_001033ac[] = "RET-L1-08: %d\n";
static const char DAT_001033c8[] = "RET-L1-09: %d\n";

/* Global variables for opaque handle test */
static uint64_t ret_opaque_handle_handle1 = 0x1111111111111111ULL;
static uint64_t ret_opaque_handle_handle2 = 0x2222222222222222ULL;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/4/4_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(void *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 00101160 */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 00101180 */

int call_cdecl(void)

{
 return cdecl_func(5,10);
}



/* Function: stdcall_func @ 001011a0 */

int stdcall_func(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: call_stdcall @ 001011c0 */

int call_stdcall(void)

{
 return stdcall_func(5,10);
}



/* Function: fastcall_func @ 001011e0 */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 00101200 */

int call_fastcall(void)

{
 return fastcall_func(1,2,3);
}



/* Function: call_thiscall @ 00101220 */

uint64_t call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00101230 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 00101260 */

int call_arm_aapcs(void)

{
 return arm_aapcs_func(1,2,3,4,5);
}



/* Function: mips_func @ 00101290 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 001012b0 */

int call_mips(void)

{
 return mips_func(10,0x14,0x1e,0x28);
}



/* Function: amd64_sysv_func @ 001012d0 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00101300 */

int call_amd64_sysv(void)

{
 return amd64_sysv_func(1,2,3,4,5,6);
}



/* Function: ms_x64_func @ 00101330 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00101360 */

int call_ms_x64(void)

{
 return ms_x64_func(1,2,3,4,5);
}



/* Function: vectorcall_func @ 00101390 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 001013b0 */

int call_vectorcall(void)

{
 return vectorcall_func(1,2,3,4);
}



/* Function: mixed_conventions_test @ 001013d0 */

int mixed_conventions_test(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = cdecl_func(1,2);
 iVar2 = stdcall_func(3,4);
 iVar3 = fastcall_func(5,6,7);
 return iVar3 + iVar2 + iVar1;
}



/* Function: varargs_func @ 00101430 */

int varargs_func(int param_1, ...)

{
 va_list args;
 int sum;
 int i;
 int val;
 int arr[46];
 
 sum = 0;
 va_start(args, param_1);
 for (i = 0; i < param_1; i++) {
 val = va_arg(args, int);
 sum += val;
 }
 va_end(args);
 return sum;
}



/* Function: func_no_args @ 00101560 */

uint64_t func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00101570 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 001015b0 */

int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)

{
 size_t sVar1;
 undefined4 local_38;
 
 if (param_3 == (char *)0x0) {
 local_38 = 0;
 }
 else {
 sVar1 = strlen(param_3);
 local_38 = (int)sVar1;
 }
 return (int)((double)(param_2 + local_38) + param_1 + (double)param_4);
}



/* Function: func_struct_byval @ 00101620 */

unsigned long func_struct_byval(void)

{
 int local_14;
 unsigned long local_10;
 unsigned long param_arr[16];
 
 local_10 = 0;
 for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
 local_10 = param_arr[local_14] + local_10;
 }
 return local_10 & 0xffffffff;
}



/* Function: func_struct_byptr @ 00101680 */

int func_struct_byptr(int *param_1)

{
 int local_c;
 
 if (param_1 == (int *)0x0) {
 local_c = -1;
 }
 else {
 local_c = *param_1 * param_1[1];
 }
 return local_c;
}



/* Function: test_calling_conventions @ 001016c0 */

void test_calling_conventions(void)

{
 uint uVar1;
 uint64_t local_b8;
 uint local_b0;
 int local_ac;
 long local_a8 [16];
 uint local_24;
 const char *local_20;
 uint local_14;
 uint local_10;
 uint local_c;
 
 printf(&DAT_00103020);
 uVar1 = call_cdecl();
 printf("CALL-L1-01: %d\n",(ulong)uVar1);
 uVar1 = call_stdcall();
 printf("CALL-L1-02: %d\n",(ulong)uVar1);
 uVar1 = call_fastcall();
 printf("CALL-L1-03: %d\n",(ulong)uVar1);
 uVar1 = call_thiscall();
 printf("CALL-L1-04: %d\n",(ulong)uVar1);
 uVar1 = call_arm_aapcs();
 printf("CALL-L1-05: %d\n",(ulong)uVar1);
 uVar1 = call_mips();
 printf("CALL-L1-06: %d\n",(ulong)uVar1);
 uVar1 = call_amd64_sysv();
 printf("CALL-L1-07: %d\n",(ulong)uVar1);
 uVar1 = call_ms_x64();
 printf("CALL-L1-08: %d\n",(ulong)uVar1);
 uVar1 = call_vectorcall();
 printf("CALL-L1-09: %d\n",(ulong)uVar1);
 uVar1 = mixed_conventions_test();
 printf("CALL-L1-10: %d\n",(ulong)uVar1);
 local_c = varargs_func(5,1,2,3,4);
 printf(&DAT_001030e2,(ulong)local_c);
 local_10 = func_no_args();
 printf(&DAT_0010310a,(ulong)local_10);
 local_14 = func_many_args(1,2,3,4,5,6,7,8);
 printf(&DAT_0010312c,(ulong)local_14);
 local_20 = &DAT_00103153;
 local_24 = func_mixed_args(0x51eb851f,10,&DAT_00103153,100);
 printf(&DAT_00103158,(ulong)local_24);
 for (local_ac = 0; local_ac < 0x10; local_ac = local_ac + 1) {
 local_a8[local_ac] = (long)(local_ac + 1);
 }
 local_b0 = func_struct_byval();
 printf(&DAT_00103180,(ulong)local_b0);
 local_b8 = 0xa00000005;
 uVar1 = func_struct_byptr(&local_b8);
 printf(&DAT_001031ac,(ulong)uVar1);
 return;
}



/* Function: param_by_value_int @ 00101970 */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 00101990 */

int call_by_value_int(void)

{
 int iVar1;
 
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 001019c0 */

uint64_t param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00101a00 */

int call_by_value_ptr(void)

{
 int iVar1;
 int local_c;
 
 local_c = 5;
 iVar1 = param_by_value_ptr(&local_c);
 return local_c + iVar1;
}



/* Function: param_array_decay @ 00101a30 */

uint64_t param_array_decay(uint8_t *param_1,int param_2)

{
 return 8;
}



/* Function: call_array_decay @ 00101a50 */

uint64_t call_array_decay(void)

{
 uint8_t local_38 [48];
 
 memset(local_38,0,0x28);
 return param_array_decay(local_38,10);
}



/* Function: param_string @ 00101a80 */

int param_string(char *param_1)

{
 return (int)*param_1 + (int)param_1[1];
}



/* Function: call_string_param @ 00101aa0 */

int call_string_param(void)

{
 return param_string("Hello");
}



/* Function: param_ptr_array @ 00101ac0 */

int param_ptr_array(const char **param_1,int param_2)

{
 undefined4 local_1c;
 undefined4 local_18;
 
 local_18 = 0;
 for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
 local_18 = *param_1[local_1c] + local_18;
 }
 return local_18;
}



/* Function: call_ptr_array @ 00101b10 */

int call_ptr_array(void)

{
 const char *local_28;
 const char *local_20;
 const char *local_18;
 
 local_28 = &DAT_001031df;
 local_20 = &DAT_001031e3;
 local_18 = &DAT_001031e7;
 return param_ptr_array(&local_28,3);
}



/* Function: param_varargs @ 00101b50 */

int param_varargs(int param_1, ...)

{
 va_list args;
 int sum;
 int i;
 int val;
 
 sum = 0;
 va_start(args, param_1);
 for (i = 0; i < param_1; i++) {
 val = va_arg(args, int);
 sum += val;
 }
 va_end(args);
 return sum;
}



/* Function: call_varargs_param @ 00101c80 */

int call_varargs_param(void)

{
 return param_varargs(4,10,0x14,0x1e,0x28);
}



/* Function: param_func_ptr @ 00101cb0 */

typedef int (*int_func)(int);

int param_func_ptr(int_func param_1,uint32_t param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: callback_func @ 00101d00 */
int callback_func(int param_1);

/* Function: call_func_ptr_param @ 00101ce0 */

int call_func_ptr_param(void)

{
 return param_func_ptr(callback_func,5);
}



/* Function: callback_func @ 00101d00 */

int callback_func(int param_1)

{
 return param_1 << 1;
}



/* Function: param_double_ptr @ 00101d10 */

uint32_t param_double_ptr(long *param_1,uint32_t param_2)

{
 uint32_t local_c;
 
 if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
 local_c = 0xffffffff;
 }
 else {
 *(uint32_t *)*param_1 = param_2;
 *param_1 = 0;
 local_c = 1;
 }
 return local_c;
}



/* Function: call_double_ptr @ 00101d70 */

int call_double_ptr(void)

{
 int *local_18;
 int local_c;
 
 local_c = 10;
 local_18 = &local_c;
 param_double_ptr(&local_18,0x14);
 return local_c + (uint)(local_18 == (int *)0x0);
}



/* Function: param_complex_cast @ 00101dc0 */

int param_complex_cast(int *param_1,int param_2)

{
 int local_c;
 
 if (param_2 == 0) {
 local_c = *param_1;
 }
 else if (param_2 == 1) {
 local_c = *param_1 + param_1[1];
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_complex_cast @ 00101e40 */

int call_complex_cast(void)

{
 uint64_t local_18;
 uint32_t local_c;
 
 local_c = 0x12345678;
 local_18 = 0xc800000064;
 param_complex_cast((int *)&local_18,1);
 param_complex_cast((int *)&local_c,0);
 return 0;
}



/* Function: param_struct_byval @ 00101e80 */

typedef struct {
 int low;
 int high;
} struct_pair;

int param_struct_byval(struct_pair param)

{
 return param.low + param.high;
}



/* Function: call_struct_byval @ 00101e90 */

int call_struct_byval(void)

{
 int local_4c;
 int local_48 [16];
 
 for (local_4c = 0; local_4c < 0x10; local_4c = local_4c + 1) {
 local_48[local_4c] = local_4c;
 }
 return param_struct_byval(*(struct_pair *)local_48);
}



/* Function: param_order_dep @ 00101f00 */

int param_order_dep(void)

{
 return 10 + 20;
}



/* Function: call_order_dep @ 00101f20 */

int call_order_dep(void)

{
 return param_order_dep();
}



/* Function: test_parameter_passing @ 00101f50 */

void test_parameter_passing(void)

{
 uint uVar1;
 
 printf(&DAT_001031eb);
 uVar1 = call_by_value_int();
 printf("PARAM-L1-01: %d\n",(ulong)uVar1);
 uVar1 = call_by_value_ptr();
 printf("PARAM-L1-02: %d\n",(ulong)uVar1);
 uVar1 = call_array_decay();
 printf("PARAM-L2-01: %d\n",(ulong)uVar1);
 uVar1 = call_string_param();
 printf("PARAM-L2-02: %d\n",(ulong)uVar1);
 uVar1 = call_ptr_array();
 printf("PARAM-L2-03: %d\n",(ulong)uVar1);
 uVar1 = call_varargs_param();
 printf("PARAM-L2-04: %d\n",(ulong)uVar1);
 uVar1 = call_func_ptr_param();
 printf("PARAM-L3-01: %d\n",(ulong)uVar1);
 uVar1 = call_double_ptr();
 printf("PARAM-L3-02: %d\n",(ulong)uVar1);
 uVar1 = call_complex_cast();
 printf("PARAM-L3-03: %d\n",(ulong)uVar1);
 uVar1 = call_struct_byval();
 printf("PARAM-L3-04: %d\n",(ulong)uVar1);
 uVar1 = call_order_dep();
 printf("PARAM-L3-05: %d\n",(ulong)uVar1);
 return;
}



/* Function: ret_basic_type @ 00102050 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00102060 */

uint32_t call_ret_basic(void)

{
 uint32_t uVar1;
 
 uVar1 = ret_basic_type(0x15);
 return uVar1;
}



/* Function: ret_pointer @ 00102090 */

long ret_pointer(long param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 001020b0 */

uint32_t call_ret_pointer(void)

{
 uint32_t *puVar1;
 uint64_t local_14;
 uint32_t local_c;
 
 local_14 = 0x140000000a;
 local_c = 0x1e;
 puVar1 = (uint32_t *)ret_pointer((long)&local_14);
 return *puVar1;
}



/* Function: ret_small_struct @ 001020f0 */

uint64_t ret_small_struct(uint32_t param_1,uint32_t param_2)

{
 return CONCAT44(param_2,param_1);
}



/* Function: call_ret_small_struct @ 00102110 */

int call_ret_small_struct(void)

{
 uint64_t uVar1;
 uint32_t local_10;
 uint32_t uStack_c;
 
 uVar1 = ret_small_struct(3,4);
 local_10 = (int)uVar1;
 uStack_c = (int)((ulong)uVar1 >> 0x20);
 return local_10 + uStack_c;
}



/* Function: ret_large_struct @ 00102140 */

long ret_large_struct(long param_1,int param_2)

{
 uint32_t local_10;
 
 for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 1) {
 *(int *)(param_1 + (long)local_10 * 4) = param_2 + local_10;
 }
 return param_1;
}



/* Function: call_ret_large_struct @ 00102190 */

int call_ret_large_struct(void)

{
 int local_48 [15];
 int local_c;
 
 ret_large_struct((long)local_48,100);
 return local_48[0] + local_c;
}



/* Function: func_a @ 001021c0 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 001021d0 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: ret_func_ptr @ 001021e0 */

int_func_ptr ret_func_ptr(int param_1)

{
 int_func_ptr pcVar1;
 
 pcVar1 = func_a;
 if (param_1 != 0) {
 pcVar1 = func_b;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00102210 */

int call_ret_func_ptr(void)

{
 int_func_ptr pcVar1;
 
 pcVar1 = ret_func_ptr(1);
 return (*pcVar1)(5);
}



/* Function: ret_opaque_handle @ 00102240 */

uint64_t * ret_opaque_handle(int param_1)

{
 uint64_t *puVar1;
 
 puVar1 = &ret_opaque_handle_handle2;
 if (param_1 == 0) {
 puVar1 = &ret_opaque_handle_handle1;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00102270 */

uint32_t call_ret_opaque(void)

{
 uint32_t *puVar1;
 
 puVar1 = (uint32_t *)ret_opaque_handle(0);
 return *puVar1;
}



/* Function: ret_complex_expr @ 00102290 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 undefined4 local_18;
 
 if (param_2 < param_1) {
 local_18 = param_3 << 1;
 }
 else {
 local_18 = param_3 + 10;
 }
 return local_18;
}



/* Function: call_ret_complex_expr @ 001022d0 */

int call_ret_complex_expr(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = ret_complex_expr(5,3,10);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar1 + iVar2;
}



/* Function: ret_multi_branch @ 00102320 */

uint32_t ret_multi_branch(int param_1)

{
 uint32_t local_c;
 
 if (param_1 == 0) {
 local_c = 10;
 }
 else if (param_1 == 1) {
 local_c = 0x14;
 }
 else if (param_1 == 2) {
 local_c = 0x1e;
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}



/* Function: call_ret_multi_branch @ 00102390 */

int call_ret_multi_branch(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = ret_multi_branch(0);
 iVar2 = ret_multi_branch(1);
 iVar3 = ret_multi_branch(2);
 return iVar3 + iVar2 + iVar1;
}



/* Function: ret_void @ 001023e0 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00102400 */

uint32_t call_ret_void(void)

{
 uint32_t local_c;
 
 ret_void(7,&local_c);
 return local_c;
}



/* Function: test_return_values @ 00102420 */

void test_return_values(void)

{
 uint uVar1;
 
 printf(&DAT_001032c8);
 uVar1 = call_ret_basic();
 printf(&DAT_001032e7,(ulong)uVar1);
 uVar1 = call_ret_pointer();
 printf(&DAT_00103303,(ulong)uVar1);
 uVar1 = call_ret_small_struct();
 printf(&DAT_0010331f,(ulong)uVar1);
 uVar1 = call_ret_large_struct();
 printf(&DAT_0010333a,(ulong)uVar1);
 uVar1 = call_ret_func_ptr();
 printf(&DAT_00103357,(ulong)uVar1);
 uVar1 = call_ret_opaque();
 printf(&DAT_00103373,(ulong)uVar1);
 uVar1 = call_ret_complex_expr();
 printf(&DAT_00103390,(ulong)uVar1);
 uVar1 = call_ret_multi_branch();
 printf(&DAT_001033ac,(ulong)uVar1);
 uVar1 = call_ret_void();
 printf(&DAT_001033c8,(ulong)uVar1);
 return;
}



/* Function: main @ 00102500 */

undefined8 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 78 */
