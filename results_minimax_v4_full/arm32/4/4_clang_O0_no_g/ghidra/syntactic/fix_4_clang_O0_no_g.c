/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_clang_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Type definitions for Ghidra types */
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef unsigned long long ulonglong;
typedef uint8_t byte;
typedef uint8_t undefined;
typedef uint8_t undefined1;
typedef int (*code)(int);
typedef unsigned int uint;
typedef int bool;
#define true 1
#define false 0

/* String constants from binary */
static const char DAT_00012180[] = "Calling Conventions Test\n";
static const char DAT_00012242[] = "VARARG: %d\n";
static const char DAT_0001226a[] = "NOARGS: %d\n";
static const char DAT_0001228c[] = "MANYARGS: %d: %d\n";
static const char DAT_000122b3[] = "test";
static const char DAT_000122b8[] = "MIXED: %d\n";
static const char DAT_000122e0[] = "STRUCT-BYVAL: %d\n";
static const char DAT_0001230c[] = "STRUCT-BYPTR: %d\n";
static const char DAT_0001233f[] = "a";
static const char DAT_00012343[] = "b";
static const char DAT_00012347[] = "c";
static const char DAT_0001234b[] = "Parameter Passing Test\n";
static const char DAT_00012428[] = "Return Values Test\n";
static const char DAT_00012447[] = "RET-BASIC: %d\n";
static const char DAT_00012463[] = "RET-POINTER: %d\n";
static const char DAT_0001247f[] = "RET-STRUCT: %d\n";
static const char DAT_0001249a[] = "RET-LARGE: %d\n";
static const char DAT_000124b7[] = "RET-FUNCPTR: %d\n";
static const char DAT_000124d3[] = "RET-OPAQUE: %d\n";
static const char DAT_000124f0[] = "RET-COMPLEX: %d\n";
static const char DAT_0001250c[] = "RET-MULTI: %d\n";
static const char DAT_00012528[] = "RET-VOID: %d\n";


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 000105dc */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 000105fc */

undefined4 call_cdecl(void)

{
 cdecl_func(5,10);
 return 0;
}



/* Function: stdcall_func @ 00010618 */

int stdcall_func(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: call_stdcall @ 00010638 */

undefined4 call_stdcall(void)

{
 stdcall_func(5,10);
 return 0;
}



/* Function: fastcall_func @ 00010654 */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 00010680 */

undefined4 call_fastcall(void)

{
 fastcall_func(1,2,3);
 return 0;
}



/* Function: call_thiscall @ 000106a0 */

undefined4 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 000106a8 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 000106ec */

undefined4 call_arm_aapcs(void)

{
 arm_aapcs_func(1,2,3,4,5);
 return 0;
}



/* Function: mips_func @ 00010724 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 0001075c */

undefined4 call_mips(void)

{
 mips_func(10,0x14,0x1e,0x28);
 return 0;
}



/* Function: amd64_sysv_func @ 00010780 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 000107d0 */

undefined4 call_amd64_sysv(void)

{
 amd64_sysv_func(1,2,3,4,5,6);
 return 0;
}



/* Function: ms_x64_func @ 00010810 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00010854 */

undefined4 call_ms_x64(void)

{
 ms_x64_func(1,2,3,4,5);
 return 0;
}



/* Function: vectorcall_func @ 0001088c */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 000108c4 */

undefined4 call_vectorcall(void)

{
 vectorcall_func(1,2,3,4);
 return 0;
}



/* Function: mixed_conventions_test @ 000108e8 */

int mixed_conventions_test(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = cdecl_func(1,2);
 iVar2 = stdcall_func(3,4);
 iVar3 = fastcall_func(5,6,7);
 return iVar1 + iVar2 + iVar3;
}



/* Forward declaration for callback_func */
int callback_func(int param_1);

/* Forward declaration for __floatdidf */
ulonglong __floatdidf(uint param_1, uint param_2);

/* Forward declaration for __floatsidf */
ulonglong __floatsidf(uint param_1);

/* Forward declaration for __adddf3 */
ulonglong __adddf3(uint param_1, uint param_2, uint param_3, uint param_4);

/* Forward declaration for __fixdfsi */
int __fixdfsi(uint param_1, uint param_2);

/* Forward declaration for func_mixed_args */
int func_mixed_args(int param_1, char *param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6);

/* Function: varargs_func @ 00010964 */

int varargs_func(int param_1, ...)

{
 int local_1c;
 int local_18;
 va_list local_14;
 int local_c [3];
 
 local_18 = 0;
 va_start(local_14, param_1);
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 local_18 = local_18 + va_arg(local_14, int);
 }
 va_end(local_14);
 return local_18;
}



/* Function: func_no_args @ 000109e0 */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 000109e8 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00010a50 */

int func_mixed_args(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
 undefined4 param_5,undefined4 param_6)

{
 undefined8 uVar1;
 undefined8 uVar2;
 undefined4 local_30;
 
 if (param_2 == (char *)0x0) {
 local_30 = 0;
 }
 else {
 local_30 = strlen(param_2);
 }
 uVar1 = __floatsidf(param_1 + local_30);
 uVar1 = __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),param_3,param_4);
 uVar2 = __floatdidf(param_5,param_6);
 uVar1 = __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
 return __fixdfsi((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
}



/* Function: func_struct_byval @ 00010b0c */

int func_struct_byval(void)

{
 int local_1c;
 int local_18;
 int local_10 [4];
 
 local_18 = 0;
 for (local_1c = 0; local_1c < 0x10; local_1c = local_1c + 1) {
 local_18 = local_18 + local_10[local_1c * 2];
 }
 return local_18;
}



/* Function: func_struct_byptr @ 00010b94 */

int func_struct_byptr(int *param_1)

{
 int local_4;
 
 if (param_1 == (int *)0x0) {
 local_4 = -1;
 }
 else {
 local_4 = *param_1 * param_1[1];
 }
 return local_4;
}



/* Function: test_calling_conventions @ 00010bdc */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 int *piVar2;
 int *piVar3;
 int local_158 [28];
 int *local_e8;
 int *local_e4;
 int local_e0;
 int *local_dc;
 int *local_d8;
 int local_d4;
 undefined4 local_d0;
 undefined4 local_cc;
 undefined4 local_c8;
 undefined4 local_c4;
 int local_c0;
 undefined4 local_bc;
 undefined4 local_b8;
 undefined4 local_b4;
 undefined4 local_b0;
 int local_ac;
 int local_a8 [4];
 int aiStack_98 [29];
 undefined4 local_24;
 undefined *local_20;
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 local_14;
 
 printf(&DAT_00012180);
 call_cdecl();
 printf("CALL-L1-01: %d\n",0);
 call_stdcall();
 printf("CALL-L1-02: %d\n",0);
 call_fastcall();
 printf("CALL-L1-03: %d\n",0);
 call_thiscall();
 printf("CALL-L1-04: %d\n",0xf);
 call_arm_aapcs();
 printf("CALL-L1-05: %d\n",0);
 call_mips();
 printf("CALL-L1-06: %d\n",0);
 call_amd64_sysv();
 printf("CALL-L1-07: %d\n",0);
 call_ms_x64();
 printf("CALL-L1-08: %d\n",0);
 call_vectorcall();
 printf("CALL-L1-09: %d\n",0);
 mixed_conventions_test();
 uVar1 = mixed_conventions_test();
 printf("CALL-L1-10: %d\n",uVar1);
 local_d4 = 5;
 local_158[1] = 5;
 local_c8 = 4;
 local_158[0] = 4;
 local_c4 = 1;
 local_d0 = 2;
 local_cc = 3;
 local_14 = varargs_func(3, local_158[0], local_158[1], local_158[2]);
 printf(&DAT_00012242,local_14);
 local_18 = func_no_args();
 printf(&DAT_0001226a,local_18);
 local_158[3] = 8;
 local_158[2] = 7;
 local_158[1] = 6;
 local_158[0] = local_d4;
 local_1c = func_many_args(local_c4,local_d0,local_cc,local_c8,local_14,local_18,local_1c,local_20);
 printf(&DAT_0001228c,local_1c);
 local_20 = &DAT_000122b3;
 local_c0 = 0;
 local_158[1] = 0;
 local_158[0] = 100;
 func_mixed_args(10,&DAT_000122b3,0x51eb851f,0x40091eb8,0,0);
 local_24 = 0;
 printf(&DAT_000122b8,local_24);
 for (local_ac = local_c0; local_ac < 0x10; local_ac = local_ac + 1) {
 local_a8[local_ac * 2] = local_ac + 1;
 local_a8[local_ac * 2 + 1] = local_ac + 1 >> 0x1f;
 }
 local_e0 = 0x70;
 local_dc = local_a8 + 4;
 local_d8 = local_158;
 do {
 piVar3 = local_dc + 1;
 piVar2 = local_d8 + 1;
 local_e8 = piVar3;
 *local_d8 = *local_dc;
 local_e0 = local_e0 + -4;
 local_dc = piVar3;
 local_d8 = piVar2;
 } while (local_e0 != 0);
 local_e4 = piVar2;
 local_b0 = func_struct_byval();
 printf(&DAT_000122e0,local_b0);
 local_b4 = 10;
 local_b8 = 5;
 local_bc = func_struct_byptr(&local_b8);
 printf(&DAT_0001230c,local_bc);
 return;
}



/* Function: param_by_value_int @ 00010f18 */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 00010f38 */

int call_by_value_int(void)

{
 int iVar1;
 
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 00010f70 */

undefined4 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00010fa4 */

int call_by_value_ptr(void)

{
 int iVar1;
 int local_c;
 
 local_c = 5;
 iVar1 = param_by_value_ptr(&local_c);
 return local_c + iVar1;
}



/* Function: param_array_decay @ 00010fe4 */

undefined4 param_array_decay(int *param_1, int param_2)

{
 return param_2;
}



/* Function: call_array_decay @ 00010ffc */

undefined4 call_array_decay(void)

{
 undefined1 auStack_30 [40];
 
 memset(auStack_30,0,0x28);
 param_array_decay(auStack_30,10);
 return 0;
}



/* Function: param_string @ 00011034 */

int param_string(byte *param_1)

{
 return (uint)*param_1 + (uint)param_1[1];
}



/* Function: call_string_param @ 00011054 */

int call_string_param(void)

{
 return param_string("Hello");
}



/* Function: param_ptr_array @ 00011074 */

int param_ptr_array(int param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_c = 0;
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
 local_c = local_c + (uint)**(byte **)(param_1 + local_10 * 4);
 }
 return local_c;
}



/* Function: call_ptr_array @ 000110e0 */

int call_ptr_array(void)

{
 undefined *local_14;
 undefined *local_10;
 undefined *local_c;
 
 local_14 = &DAT_0001233f;
 local_10 = &DAT_00012343;
 local_c = &DAT_00012347;
 return param_ptr_array(&local_14,3);
}



/* Function: param_varargs @ 00011130 */

int param_varargs(int param_1)

{
 int local_1c;
 int local_18;
 int *local_14;
 int local_c [3];
 
 local_18 = 0;
 local_14 = local_c;
 for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
 local_18 = local_18 + *local_14;
 local_14 = local_14 + 1;
 }
 return local_18;
}



/* Function: call_varargs_param @ 000111ac */

int call_varargs_param(void)

{
 int result = param_varargs(4,10,0x14,0x1e,0x28);
 return result;
}



/* Function: param_func_ptr @ 000111e4 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00011218 */

undefined4 call_func_ptr_param(void)

{
 undefined4 result = param_func_ptr(callback_func,5);
 return result;
}



/* Function: callback_func @ 0001123c */

int callback_func(int param_1)

{
 return param_1 << 1;
}



/* Function: param_double_ptr @ 00011254 */

undefined4 param_double_ptr(int *param_1,undefined4 param_2)

{
 undefined4 local_4;
 
 if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
 local_4 = 0xffffffff;
 }
 else {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 local_4 = 1;
 }
 return local_4;
}



/* Function: call_double_ptr @ 000112c4 */

int call_double_ptr(void)

{
 int *local_10;
 int local_c;
 
 local_c = 10;
 local_10 = &local_c;
 param_double_ptr(&local_10,0x14);
 if (local_10 == (int *)0x0) {
 local_c = local_c + 1;
 }
 return local_c;
}



/* Function: param_complex_cast @ 00011310 */

int param_complex_cast(int *param_1,int param_2)

{
 int local_4;
 
 if (param_2 == 0) {
 local_4 = *param_1;
 }
 else if (param_2 == 1) {
 local_4 = *param_1 + param_1[1];
 }
 else {
 local_4 = -1;
 }
 return local_4;
}



/* Function: call_complex_cast @ 000113a0 */

void call_complex_cast(void)

{
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 local_c = 0x12345678;
 local_10 = 200;
 local_14 = 100;
 param_complex_cast(&local_14,1);
 param_complex_cast(&local_c,0);
 return;
}



/* Function: param_struct_byval @ 00011400 */

int param_struct_byval(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, int param_11, int param_12, int param_13, int param_14, int param_15, int param_16)

{
 return param_1;
}



/* Function: call_struct_byval @ 000114b8 */

void call_struct_byval(void)

{
 int local_68;
 int local_64 [16];
 
 for (local_68 = 0; local_68 < 0x10; local_68 = local_68 + 1) {
 local_64[local_68] = local_68;
 }
 param_struct_byval(local_64[0],local_64[1],local_64[2],local_64[3],local_64[4],local_64[5],
 local_64[6],local_64[7],local_64[8],local_64[9],local_64[10],local_64[0xb],
 local_64[0xc],local_64[0xd],local_64[0xe],local_64[0xf]);
 return;
}



/* Function: param_order_dep @ 000115a4 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 000115c4 */

undefined4 call_order_dep(void)

{
 param_order_dep(1,2);
 return 0;
}



/* Function: test_parameter_passing @ 00011600 */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 
 printf(&DAT_0001234b);
 uVar1 = call_by_value_int();
 printf("PARAM-L1-01: %d\n",uVar1);
 uVar1 = call_by_value_ptr();
 printf("PARAM-L1-02: %d\n",uVar1);
 call_array_decay();
 printf("PARAM-L2-01: %d\n",0);
 uVar1 = call_string_param();
 printf("PARAM-L2-02: %d\n",uVar1);
 uVar1 = call_ptr_array();
 printf("PARAM-L2-03: %d\n",uVar1);
 uVar1 = call_varargs_param();
 printf("PARAM-L2-04: %d\n",uVar1);
 uVar1 = call_func_ptr_param();
 printf("PARAM-L3-01: %d\n",uVar1);
 uVar1 = call_double_ptr();
 printf("PARAM-L3-02: %d\n",uVar1);
 uVar1 = call_complex_cast();
 printf("PARAM-L3-03: %d\n",uVar1);
 uVar1 = call_struct_byval();
 printf("PARAM-L3-04: %d\n",uVar1);
 uVar1 = call_order_dep();
 printf("PARAM-L3-05: %d\n",uVar1);
 return;
}



/* Function: ret_basic_type @ 00011728 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00011740 */

undefined4 call_ret_basic(void)

{
 undefined4 uVar1;
 
 uVar1 = ret_basic_type(0x15);
 return uVar1;
}



/* Function: ret_pointer @ 00011770 */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00011788 */

undefined4 call_ret_pointer(void)

{
 undefined4 *puVar1;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 local_14 = 10;
 local_10 = 0x14;
 local_c = 0x1e;
 puVar1 = (undefined4 *)ret_pointer(&local_14);
 return *puVar1;
}



/* Function: ret_small_struct @ 000117e0 */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}



/* Function: call_ret_small_struct @ 00011810 */

int call_ret_small_struct(void)

{
 int local_10;
 int local_c;
 
 ret_small_struct(&local_10,3,4);
 return local_10 + local_c;
}



/* Function: ret_large_struct @ 00011844 */

void ret_large_struct(int param_1,int param_2)

{
 undefined4 local_8;
 
 for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
 *(int *)(param_1 + local_8 * 4) = param_2 + local_8;
 }
 return;
}



/* Function: call_ret_large_struct @ 0001189c */

int call_ret_large_struct(void)

{
 int local_48 [15];
 int local_c;
 
 ret_large_struct(local_48,100);
 return local_48[0] + local_c;
}



/* Function: func_a @ 000118cc */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 000118e4 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: ret_func_ptr @ 000118fc */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = func_a;
 if (param_1 != 0) {
 pcVar1 = func_b;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00011930 */

void call_ret_func_ptr(void)

{
 code *pcVar1;
 
 pcVar1 = (code *)ret_func_ptr(1);
 (*pcVar1)(5);
 return;
}



/* External handles for ret_opaque_handle */
static const undefined8 ret_opaque_handle_handle1 = 0;
static const undefined8 ret_opaque_handle_handle2 = 0;

/* Function: ret_opaque_handle @ 00011964 */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&ret_opaque_handle_handle2;
 if (param_1 == 0) {
 puVar1 = (undefined8 *)&ret_opaque_handle_handle1;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00011998 */

undefined4 call_ret_opaque(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)ret_opaque_handle(0);
 return *puVar1;
}



/* Function: ret_complex_expr @ 000119c4 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 undefined4 local_10;
 
 if (param_2 < param_1) {
 local_10 = param_3 << 1;
 }
 else {
 local_10 = param_3 + 10;
 }
 return local_10;
}



/* Function: call_ret_complex_expr @ 00011a14 */

int call_ret_complex_expr(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = ret_complex_expr(1,2,3);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar1 + iVar2;
}



/* Function: ret_multi_branch @ 00011a70 */

int ret_multi_branch(int param_1)

{
 int local_4;
 
 if (param_1 == 0) {
 local_4 = 10;
 }
 else if (param_1 == 1) {
 local_4 = 0x14;
 }
 else if (param_1 == 2) {
 local_4 = 0x1e;
 }
 else {
 local_4 = 0xffffffff;
 }
 return local_4;
}



/* Function: call_ret_multi_branch @ 00011ae8 */

int call_ret_multi_branch(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = ret_multi_branch(0);
 iVar2 = ret_multi_branch(1);
 iVar3 = ret_multi_branch(2);
 return iVar1 + iVar2 + iVar3;
}



/* Function: ret_void @ 00011b50 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00011b74 */

undefined4 call_ret_void(void)

{
 undefined4 local_c;
 
 ret_void(7,&local_c);
 return local_c;
}



/* Function: test_return_values @ 00011b9c */

void test_return_values(void)

{
 undefined4 uVar1;
 
 printf(&DAT_00012428);
 uVar1 = call_ret_basic();
 printf(&DAT_00012447,uVar1);
 uVar1 = call_ret_pointer();
 printf(&DAT_00012463,uVar1);
 uVar1 = call_ret_small_struct();
 printf(&DAT_0001247f,uVar1);
 uVar1 = call_ret_large_struct();
 printf(&DAT_0001249a,uVar1);
 uVar1 = call_ret_func_ptr();
 printf(&DAT_000124b7,uVar1);
 uVar1 = call_ret_opaque();
 printf(&DAT_000124d3,uVar1);
 uVar1 = call_ret_complex_expr();
 printf(&DAT_000124f0,uVar1);
 uVar1 = call_ret_multi_branch();
 printf(&DAT_0001250c,uVar1);
 uVar1 = call_ret_void();
 printf(&DAT_00012528,uVar1);
 return;
}



/* Function: main @ 00011c94 */

undefined4 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* Function: __aeabi_drsub @ 00011cc8 */

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
 __adddf3(param_1,param_2 ^ 0x80000000,0,0);
 return;
}



/* Function: __subdf3 @ 00011cd0 */

ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
 int iVar1;
 byte bVar2;
 byte bVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 int iVar10;
 uint uVar11;
 uint uVar12;
 uint uVar13;
 bool bVar14;
 bool bVar15;
 
 uVar8 = param_4 ^ 0x80000000;
 uVar11 = param_2 << 1;
 param_4 = param_4 << 1;
 iVar10 = (int)uVar11 >> 0x15;
 iVar1 = (int)param_4 >> 0x15;
 if ((((uVar11 == param_4 && param_1 == param_3 || uVar11 == 0 && param_1 == 0) ||
 param_4 == 0 && param_3 == 0) || iVar10 == -1) || iVar1 == -1) {
 if (iVar10 == -1 || iVar1 == -1) {
 uVar11 = param_3;
 uVar12 = uVar8;
 if (iVar10 == -1) {
 uVar11 = param_1;
 uVar12 = param_2;
 }
 if (iVar10 != -1 || iVar1 != -1) {
 param_3 = uVar11;
 uVar8 = uVar12;
 }
 bVar14 = (uVar12 & 0xfffff) == 0;
 bVar15 = uVar11 == 0 && bVar14;
 if (uVar11 == 0 && bVar14) {
 bVar15 = param_3 == 0 && (uVar8 & 0xfffff) == 0;
 }
 if (!bVar15 || uVar12 != uVar8) {
 uVar12 = uVar12 | 0x80000;
 }
 return CONCAT44(uVar12,uVar11);
 }
 if (uVar11 != param_4 || param_1 != param_3) {
 if (uVar11 == 0 && param_1 == 0) {
 param_1 = param_3;
 param_2 = uVar8;
 }
 return CONCAT44(param_2,param_1);
 }
 if (param_2 != uVar8) {
 return 0;
 }
 if (uVar11 >> 0x15 == 0) {
 bVar2 = (byte)(param_1 >> 0x1f);
 uVar11 = param_2 * 2 + (uint)bVar2;
 if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
 uVar11 = uVar11 | 0x80000000;
 }
 return CONCAT44(uVar11,param_1 << 1);
 }
 if (uVar11 < 0xffc00000) {
 return CONCAT44(param_2 + 0x100000,param_1);
 }
 param_2 = param_2 & 0x80000000;
LAB_00011f44:
 return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
 }
 uVar11 = uVar11 >> 0x15;
 param_4 = param_4 >> 0x15;
 uVar12 = param_4 - uVar11;
 bVar14 = uVar12 != 0;
 if (param_4 < uVar11) {
 uVar12 = -uVar12;
 }
 uVar6 = param_1;
 uVar9 = param_2;
 if (bVar14 && uVar11 <= param_4) {
 uVar11 = uVar11 + uVar12;
 uVar6 = param_3;
 uVar9 = uVar8;
 param_3 = param_1;
 uVar8 = param_2;
 }
 if (0x36 < uVar12) {
 return CONCAT44(uVar9,uVar6);
 }
 uVar5 = uVar9 & 0xfffff | 0x100000;
 if ((uVar9 & 0x80000000) != 0) {
 bVar14 = uVar6 != 0;
 uVar6 = -uVar6;
 uVar5 = -(uVar5 + bVar14);
 }
 uVar9 = uVar8 & 0xfffff | 0x100000;
 if ((uVar8 & 0x80000000) != 0) {
 bVar14 = param_3 != 0;
 param_3 = -param_3;
 uVar9 = -(uVar9 + bVar14);
 }
 if (uVar11 == uVar12) {
 uVar9 = uVar9 ^ 0x100000;
 if (uVar11 == 0) {
 uVar5 = uVar5 ^ 0x100000;
 uVar11 = 1;
 }
 else {
 uVar12 = uVar12 - 1;
 }
 }
 uVar8 = -uVar12 + 0x20;
 if ((int)uVar12 < 0x21) {
 uVar13 = param_3 << (uVar8 & 0xff);
 param_3 = param_3 >> (uVar12 & 0xff);
 uVar4 = uVar6 + param_3;
 uVar7 = uVar9 << (uVar8 & 0xff);
 uVar8 = uVar4 + uVar7;
 uVar12 = uVar5 + CARRY4(uVar6,param_3) + ((int)uVar9 >> (uVar12 & 0xff)) +
 (uint)CARRY4(uVar4,uVar7);
 }
 else {
 uVar13 = uVar9 << (-uVar12 + 0x40 & 0xff);
 if (param_3 != 0) {
 uVar13 = uVar13 | 2;
 }
 uVar12 = (int)uVar9 >> (uVar12 - 0x20 & 0xff);
 uVar8 = uVar6 + uVar12;
 uVar12 = uVar5 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar6,uVar12);
 }
 param_2 = uVar12 & 0x80000000;
 uVar6 = uVar12;
 if ((int)uVar12 < 0) {
 bVar14 = uVar13 == 0;
 uVar13 = -uVar13;
 uVar6 = -uVar8;
 uVar8 = -(uVar8 + !bVar14);
 uVar6 = -(uVar12 + (bVar14 <= uVar6));
 }
 if (0xfffff < uVar6) {
 uVar9 = uVar11 - 1;
 if (0x1fffff < uVar6) {
 bVar2 = (byte)uVar6;
 uVar6 = uVar6 >> 1;
 bVar3 = (byte)uVar8;
 uVar8 = (uint)(bVar2 & 1) << 0x1f | uVar8 >> 1;
 uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
 uVar9 = uVar11;
 if (0xffbfffff < uVar11 * 0x200000) goto LAB_00011f44;
 }
LAB_00011dec:
 bVar14 = 0x7fffffff < uVar13;
 if (uVar13 == 0x80000000) {
 bVar14 = (bool)((byte)uVar8 & 1);
 }
 return CONCAT44(uVar6 + uVar9 * 0x100000 + (uint)CARRY4(uVar8,(uint)bVar14) | param_2,
 uVar8 + bVar14);
 }
 bVar2 = (byte)(uVar13 >> 0x1f);
 uVar13 = uVar13 << 1;
 uVar9 = uVar8 * 2;
 bVar14 = CARRY4(uVar8,uVar8);
 uVar8 = uVar8 * 2 + (uint)bVar2;
 uVar6 = uVar6 * 2 + (uint)(bVar14 || CARRY4(uVar9,(uint)bVar2));
 uVar9 = uVar11 - 2;
 if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_00011dec;
 uVar11 = uVar8;
 uVar5 = uVar6;
 if (uVar6 == 0) {
 uVar11 = 0;
 uVar5 = uVar8;
 }
 iVar10 = LZCOUNT(uVar5);
 if (uVar6 == 0) {
 iVar10 = iVar10 + 0x20;
 }
 uVar4 = iVar10 - 0xb;
 bVar15 = SBORROW4(uVar4,0x20);
 uVar7 = iVar10 - 0x2b;
 bVar14 = uVar7 == 0;
 uVar8 = uVar7;
 uVar6 = uVar7;
 if ((int)uVar4 < 0x20) {
 bVar15 = SCARRY4(uVar7,0xc);
 uVar6 = iVar10 - 0x1f;
 bVar14 = uVar6 == 0;
 uVar8 = uVar4;
 if (!bVar14 && -0xd < (int)uVar7) {
 uVar11 = uVar5 << (uVar4 & 0xff);
 uVar5 = uVar5 >> (0xc - uVar6 & 0xff);
 goto LAB_00011e6c;
 }
 }
 if (bVar14 || (int)uVar6 < 0 != bVar15) {
 uVar13 = 0x20 - uVar8;
 }
 uVar5 = uVar5 << (uVar8 & 0xff);
 if (bVar14 || (int)uVar6 < 0 != bVar15) {
 uVar5 = uVar5 | uVar11 >> (uVar13 & 0xff);
 uVar11 = uVar11 << (uVar8 & 0xff);
 }
LAB_00011e6c:
 if ((int)uVar4 <= (int)uVar9) {
 return CONCAT44(uVar5 + (uVar9 - uVar4) * 0x100000 | param_2,uVar11);
 }
 uVar8 = ~(uVar9 - uVar4);
 if ((int)uVar8 < 0x1f) {
 if (uVar8 - 0x13 != 0 && -0xd < (int)(uVar8 - 0x1f)) {
 uVar8 = 0xc - (uVar8 - 0x13);
 return CONCAT44(uVar12,uVar11 >> (0x20 - uVar8 & 0xff) | uVar5 << (uVar8 & 0xff)) &
 0x80000000ffffffff;
 }
 uVar8 = uVar8 + 1;
 return CONCAT44(param_2 | uVar5 >> (uVar8 & 0xff),
 uVar11 >> (uVar8 & 0xff) | uVar5 << (0x20 - uVar8 & 0xff));
 }
 return CONCAT44(uVar12,uVar5 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __adddf3 @ 00011cd4 */

ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
 int iVar1;
 byte bVar2;
 byte bVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 int iVar8;
 uint uVar9;
 uint uVar10;
 uint uVar11;
 uint uVar12;
 uint uVar13;
 bool bVar14;
 bool bVar15;
 
 uVar9 = param_2 << 1;
 uVar5 = param_4 << 1;
 iVar8 = (int)uVar9 >> 0x15;
 iVar1 = (int)uVar5 >> 0x15;
 if ((((uVar9 == uVar5 && param_1 == param_3 || uVar9 == 0 && param_1 == 0) ||
 uVar5 == 0 && param_3 == 0) || iVar8 == -1) || iVar1 == -1) {
 if (iVar8 == -1 || iVar1 == -1) {
 uVar9 = param_3;
 uVar5 = param_4;
 if (iVar8 == -1) {
 uVar9 = param_1;
 uVar5 = param_2;
 }
 if (iVar8 != -1 || iVar1 != -1) {
 param_3 = uVar9;
 param_4 = uVar5;
 }
 bVar14 = (uVar5 & 0xfffff) == 0;
 bVar15 = uVar9 == 0 && bVar14;
 if (uVar9 == 0 && bVar14) {
 bVar15 = param_3 == 0 && (param_4 & 0xfffff) == 0;
 }
 if (!bVar15 || uVar5 != param_4) {
 uVar5 = uVar5 | 0x80000;
 }
 return CONCAT44(uVar5,uVar9);
 }
 if (uVar9 != uVar5 || param_1 != param_3) {
 if (uVar9 == 0 && param_1 == 0) {
 param_1 = param_3;
 param_2 = param_4;
 }
 return CONCAT44(param_2,param_1);
 }
 if (param_2 != param_4) {
 return 0;
 }
 if (uVar9 >> 0x15 == 0) {
 bVar2 = (byte)(param_1 >> 0x1f);
 uVar9 = param_2 * 2 + (uint)bVar2;
 if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
 uVar9 = uVar9 | 0x80000000;
 }
 return CONCAT44(uVar9,param_1 << 1);
 }
 if (uVar9 < 0xffc00000) {
 return CONCAT44(param_2 + 0x100000,param_1);
 }
 param_2 = param_2 & 0x80000000;
LAB_00011f44:
 return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
 }
 uVar9 = uVar9 >> 0x15;
 uVar5 = uVar5 >> 0x15;
 uVar11 = uVar5 - uVar9;
 bVar14 = uVar11 != 0;
 if (uVar5 < uVar9) {
 uVar11 = -uVar11;
 }
 uVar10 = param_1;
 uVar7 = param_2;
 if (bVar14 && uVar9 <= uVar5) {
 uVar9 = uVar9 + uVar11;
 uVar10 = param_3;
 uVar7 = param_4;
 param_3 = param_1;
 param_4 = param_2;
 }
 if (0x36 < uVar11) {
 return CONCAT44(uVar7,uVar10);
 }
 uVar5 = uVar7 & 0xfffff | 0x100000;
 if ((uVar7 & 0x80000000) != 0) {
 bVar14 = uVar10 != 0;
 uVar10 = -uVar10;
 uVar5 = -(uVar5 + bVar14);
 }
 uVar7 = param_4 & 0xfffff | 0x100000;
 if ((param_4 & 0x80000000) != 0) {
 bVar14 = param_3 != 0;
 param_3 = -param_3;
 uVar7 = -(uVar7 + bVar14);
 }
 if (uVar9 == uVar11) {
 uVar7 = uVar7 ^ 0x100000;
 if (uVar9 == 0) {
 uVar5 = uVar5 ^ 0x100000;
 uVar9 = 1;
 }
 else {
 uVar11 = uVar11 - 1;
 }
 }
 uVar13 = -uVar11 + 0x20;
 if ((int)uVar11 < 0x21) {
 uVar12 = param_3 << (uVar13 & 0xff);
 param_3 = param_3 >> (uVar11 & 0xff);
 uVar4 = uVar10 + param_3;
 uVar6 = uVar7 << (uVar13 & 0xff);
 uVar13 = uVar4 + uVar6;
 uVar5 = uVar5 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
 (uint)CARRY4(uVar4,uVar6);
 }
 else {
 uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
 if (param_3 != 0) {
 uVar12 = uVar12 | 2;
 }
 uVar11 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
 uVar13 = uVar10 + uVar11;
 uVar5 = uVar5 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar11);
 }
 param_2 = uVar5 & 0x80000000;
 uVar11 = uVar5;
 if ((int)uVar5 < 0) {
 bVar14 = uVar12 == 0;
 uVar12 = -uVar12;
 uVar11 = -uVar13;
 uVar13 = -(uVar13 + !bVar14);
 uVar11 = -(uVar5 + (bVar14 <= uVar11));
 }
 if (0xfffff < uVar11) {
 uVar10 = uVar9 - 1;
 if (0x1fffff < uVar11) {
 bVar2 = (byte)uVar11;
 uVar11 = uVar11 >> 1;
 bVar3 = (byte)uVar13;
 uVar13 = (uint)(bVar2 & 1) << 0x1f | uVar13 >> 1;
 uVar12 = (uint)(bVar3 & 1) << 0x1f | uVar12 >> 1;
 uVar10 = uVar9;
 if (0xffbfffff < uVar9 * 0x200000) goto LAB_00011f44;
 }
LAB_00011dec:
 bVar14 = 0x7fffffff < uVar12;
 if (uVar12 == 0x80000000) {
 bVar14 = (bool)((byte)uVar13 & 1);
 }
 return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar13,(uint)bVar14) | param_2,
 uVar13 + bVar14);
 }
 bVar2 = (byte)(uVar12 >> 0x1f);
 uVar12 = uVar12 << 1;
 uVar10 = uVar13 * 2;
 bVar14 = CARRY4(uVar13,uVar13);
 uVar13 = uVar13 * 2 + (uint)bVar2;
 uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar2));
 uVar10 = uVar9 - 2;
 if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_00011dec;
 uVar9 = uVar13;
 uVar7 = uVar11;
 if (uVar11 == 0) {
 uVar9 = 0;
 uVar7 = uVar13;
 }
 iVar8 = LZCOUNT(uVar7);
 if (uVar11 == 0) {
 iVar8 = iVar8 + 0x20;
 }
 uVar4 = iVar8 - 0xb;
 bVar15 = SBORROW4(uVar4,0x20);
 uVar6 = iVar8 - 0x2b;
 bVar14 = uVar6 == 0;
 uVar11 = uVar6;
 uVar13 = uVar6;
 if ((int)uVar4 < 0x20) {
 bVar15 = SCARRY4(uVar6,0xc);
 uVar13 = iVar8 - 0x1f;
 bVar14 = uVar13 == 0;
 uVar11 = uVar4;
 if (!bVar14 && -0xd < (int)uVar6) {
 uVar9 = uVar7 << (uVar4 & 0xff);
 uVar7 = uVar7 >> (0xc - uVar13 & 0xff);
 goto LAB_00011e6c;
 }
 }
 if (bVar14 || (int)uVar13 < 0 != bVar15) {
 uVar12 = 0x20 - uVar11;
 }
 uVar7 = uVar7 << (uVar11 & 0xff);
 if (bVar14 || (int)uVar13 < 0 != bVar15) {
 uVar7 = uVar7 | uVar9 >> (uVar12 & 0xff);
 uVar9 = uVar9 << (uVar11 & 0xff);
 }
LAB_00011e6c:
 if ((int)uVar4 <= (int)uVar10) {
 return CONCAT44(uVar7 + (uVar10 - uVar4) * 0x100000 | param_2,uVar9);
 }
 uVar11 = ~(uVar10 - uVar4);
 if ((int)uVar11 < 0x1f) {
 if (uVar11 - 0x13 != 0 && -0xd < (int)(uVar11 - 0x1f)) {
 uVar11 = 0xc - (uVar11 - 0x13);
 return CONCAT44(uVar5,uVar9 >> (0x20 - uVar11 & 0xff) | uVar7 << (uVar11 & 0xff)) &
 0x80000000ffffffff;
 }
 uVar11 = uVar11 + 1;
 return CONCAT44(param_2 | uVar7 >> (uVar11 & 0xff),
 uVar9 >> (uVar11 & 0xff) | uVar7 << (0x20 - uVar11 & 0xff));
 }
 return CONCAT44(uVar5,uVar7 >> (uVar11 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __aeabi_ui2d @ 00011f80 */

ulonglong __aeabi_ui2d(uint param_1)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 int iVar4;
 uint uVar5;
 uint uVar6;
 uint in_r12;
 bool bVar7;
 bool bVar8;
 
 if (param_1 == 0) {
 return 0;
 }
 uVar1 = 0;
 iVar4 = LZCOUNT(param_1);
 uVar5 = iVar4 + 0x15;
 bVar8 = SBORROW4(uVar5,0x20);
 uVar2 = iVar4 - 0xb;
 bVar7 = uVar2 == 0;
 uVar6 = uVar2;
 uVar3 = uVar2;
 if (uVar5 < 0x20) {
 bVar8 = SCARRY4(uVar2,0xc);
 uVar3 = iVar4 + 1;
 bVar7 = uVar3 == 0;
 uVar6 = uVar5;
 if (!bVar7 && -0xd < (int)uVar2) {
 uVar1 = param_1 << uVar5;
 param_1 = param_1 >> (0xc - uVar3 & 0xff);
 goto LAB_00011e6c;
 }
 }
 if (bVar7 || (int)uVar3 < 0 != bVar8) {
 in_r12 = 0x20 - uVar6;
 }
 param_1 = param_1 << (uVar6 & 0xff);
 if (bVar7 || (int)uVar3 < 0 != bVar8) {
 param_1 = param_1 | 0U >> (in_r12 & 0xff);
 uVar1 = 0 << (uVar6 & 0xff);
 }
LAB_00011e6c:
 if (uVar5 < 0x433) {
 return CONCAT44(param_1 + (0x432 - uVar5) * 0x100000,uVar1);
 }
 uVar6 = ~(0x432 - uVar5);
 if (0x1e < (int)uVar6) {
 return (ulonglong)(param_1 >> (uVar6 - 0x1f & 0xff));
 }
 if (uVar6 - 0x13 == 0 || (int)(uVar6 - 0x1f) < -0xc) {
 uVar6 = uVar6 + 1;
 return CONCAT44(param_1 >> (uVar6 & 0xff),
 uVar1 >> (uVar6 & 0xff) | param_1 << (0x20 - uVar6 & 0xff));
 }
 uVar6 = 0xc - (uVar6 - 0x13);
 return (ulonglong)(uVar1 >> (0x20 - uVar6 & 0xff) | param_1 << (uVar6 & 0xff));
}



/* Function: __floatsidf @ 00011fa4 */

ulonglong __floatsidf(uint param_1)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 int iVar5;
 uint uVar6;
 uint uVar7;
 uint uVar8;
 uint in_r12;
 bool bVar9;
 bool bVar10;
 
 if (param_1 == 0) {
 return 0;
 }
 uVar8 = param_1 & 0x80000000;
 uVar2 = param_1;
 if ((int)uVar8 < 0) {
 uVar2 = -param_1;
 }
 uVar1 = 0;
 iVar5 = LZCOUNT(uVar2);
 uVar6 = iVar5 + 0x15;
 bVar10 = SBORROW4(uVar6,0x20);
 uVar3 = iVar5 - 0xb;
 bVar9 = uVar3 == 0;
 uVar7 = uVar3;
 uVar4 = uVar3;
 if (uVar6 < 0x20) {
 bVar10 = SCARRY4(uVar3,0xc);
 uVar4 = iVar5 + 1;
 bVar9 = uVar4 == 0;
 uVar7 = uVar6;
 if (!bVar9 && -0xd < (int)uVar3) {
 uVar1 = uVar2 << uVar6;
 uVar2 = uVar2 >> (0xc - uVar4 & 0xff);
 goto LAB_00011e6c;
 }
 }
 if (bVar9 || (int)uVar4 < 0 != bVar10) {
 in_r12 = 0x20 - uVar7;
 }
 uVar2 = uVar2 << (uVar7 & 0xff);
 if (bVar9 || (int)uVar4 < 0 != bVar10) {
 uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
 uVar1 = 0 << (uVar7 & 0xff);
 }
LAB_00011e6c:
 if (uVar6 < 0x433) {
 return CONCAT44(uVar2 + (0x432 - uVar6) * 0x100000 | uVar8,uVar1);
 }
 uVar7 = ~(0x432 - uVar6);
 if (0x1e < (int)uVar7) {
 return CONCAT44(param_1,uVar2 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 if (uVar7 - 0x13 == 0 || (int)(uVar7 - 0x1f) < -0xc) {
 uVar7 = uVar7 + 1;
 return CONCAT44(uVar8 | uVar2 >> (uVar7 & 0xff),
 uVar1 >> (uVar7 & 0xff) | uVar2 << (0x20 - uVar7 & 0xff));
 }
 uVar8 = 0xc - (uVar7 - 0x13);
 return CONCAT44(param_1,uVar1 >> (0x20 - uVar8 & 0xff) | uVar2 << (uVar8 & 0xff)) &
 0x80000000ffffffff;
}



/* Function: __extendsfdf2 @ 00011fcc */

ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 int iVar6;
 uint uVar7;
 uint uVar8;
 uint uVar9;
 uint in_r12;
 bool bVar10;
 bool bVar11;
 
 uVar2 = param_1 << 1;
 bVar10 = uVar2 == 0;
 uVar9 = param_1 & 0x80000000;
 uVar8 = (uint)((int)uVar2 >> 3) >> 1;
 uVar1 = uVar9 | uVar8;
 param_1 = param_1 << 0x1d;
 if (!bVar10) {
 param_4 = uVar2 & 0xff000000;
 bVar10 = param_4 == 0;
 }
 if (!bVar10) {
 bVar10 = param_4 == 0xff000000;
 }
 if (!bVar10) {
 return CONCAT44(uVar1,param_1) ^ 0x3800000000000000;
 }
 if ((uVar2 & 0xffffff) == 0) {
 return CONCAT44(uVar1,param_1);
 }
 if (param_4 == 0xff000000) {
 return CONCAT44(uVar1,param_1) | 0x8000000000000;
 }
 uVar2 = param_1;
 uVar3 = uVar8;
 if (uVar8 == 0) {
 uVar2 = 0;
 uVar3 = param_1;
 }
 iVar6 = LZCOUNT(uVar3);
 if (uVar8 == 0) {
 iVar6 = iVar6 + 0x20;
 }
 uVar7 = iVar6 - 0xb;
 bVar11 = SBORROW4(uVar7,0x20);
 uVar4 = iVar6 - 0x2b;
 bVar10 = uVar4 == 0;
 uVar8 = uVar4;
 uVar5 = uVar4;
 if ((int)uVar7 < 0x20) {
 bVar11 = SCARRY4(uVar4,0xc);
 uVar5 = iVar6 - 0x1f;
 bVar10 = uVar5 == 0;
 uVar8 = uVar7;
 if (!bVar10 && -0xd < (int)uVar4) {
 uVar2 = uVar3 << (uVar7 & 0xff);
 uVar3 = uVar3 >> (0xc - uVar5 & 0xff);
 goto LAB_00011e6c;
 }
 }
 if (bVar10 || (int)uVar5 < 0 != bVar11) {
 in_r12 = 0x20 - uVar8;
 }
 uVar3 = uVar3 << (uVar8 & 0xff);
 if (bVar10 || (int)uVar5 < 0 != bVar11) {
 uVar3 = uVar3 | uVar2 >> (in_r12 & 0xff);
 uVar2 = uVar2 << (uVar8 & 0xff);
 }
LAB_00011e6c:
 if ((int)uVar7 < 0x381) {
 return CONCAT44(uVar3 + (0x380 - uVar7) * 0x100000 | uVar9,uVar2);
 }
 uVar8 = ~(0x380 - uVar7);
 if (0x1e < (int)uVar8) {
 return CONCAT44(uVar1,uVar3 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
 }
 if (uVar8 - 0x13 == 0 || (int)(uVar8 - 0x1f) < -0xc) {
 uVar8 = uVar8 + 1;
 return CONCAT44(uVar9 | uVar3 >> (uVar8 & 0xff),
 uVar2 >> (uVar8 & 0xff) | uVar3 << (0x20 - uVar8 & 0xff));
 }
 uVar9 = 0xc - (uVar8 - 0x13);
 return CONCAT44(uVar1,uVar2 >> (0x20 - uVar9 & 0xff) | uVar3 << (uVar9 & 0xff)) &
 0x80000000ffffffff;
}



/* Function: __floatundidf @ 00012014 */

ulonglong __floatundidf(uint param_1,uint param_2)

{
 byte bVar1;
 byte bVar2;
 uint uVar3;
 uint uVar4;
 uint uVar5;
 uint uVar6;
 uint uVar7;
 int iVar8;
 uint uVar9;
 uint uVar10;
 int iVar11;
 bool bVar12;
 bool bVar13;
 
 if (param_1 == 0 && param_2 == 0) {
 return CONCAT44(param_2,param_1);
 }
 iVar11 = 0x432;
 uVar10 = 0;
 if (param_2 >> 0x16 != 0) {
 iVar11 = 3;
 if (param_2 >> 0x19 != 0) {
 iVar11 = 6;
 }
 if (param_2 >> 0x1c != 0) {
 iVar11 = iVar11 + 3;
 }
 iVar11 = iVar11 - ((int)param_2 >> 0x1f);
 uVar10 = param_1 << (0x20U - iVar11 & 0xff);
 param_1 = param_1 >> iVar11 | param_2 << (0x20U - iVar11 & 0xff);
 param_2 = param_2 >> iVar11;
 iVar11 = iVar11 + 0x432;
 }
 if (0xfffff < param_2) {
 if (0x1fffff < param_2) {
 bVar1 = (byte)param_2;
 param_2 = param_2 >> 1;
 bVar2 = (byte)param_1;
 param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
 uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
 iVar11 = iVar11 + 1;
 if (0xffbfffff < (uint)(iVar11 * 0x200000)) {
 return 0x7ff0000000000000;
 }
 }
LAB_00011dec:
 bVar12 = 0x7fffffff < uVar10;
 if (uVar10 == 0x80000000) {
 bVar12 = (bool)((byte)param_1 & 1);
 }
 return CONCAT44(param_2 + iVar11 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12),
 param_1 + bVar12);
 }
 bVar1 = (byte)(uVar10 >> 0x1f);
 uVar10 = uVar10 << 1;
 uVar3 = param_1 * 2;
 bVar12 = CARRY4(param_1,param_1);
 param_1 = param_1 * 2 + (uint)bVar1;
 param_2 = param_2 * 2 + (uint)(bVar12 || CARRY4(uVar3,(uint)bVar1));
 bVar12 = iVar11 != 0;
 iVar11 = iVar11 + -1;
 if (bVar12 && 0xfffff < param_2) goto LAB_00011dec;
 uVar3 = param_1;
 uVar4 = param_2;
 if (param_2 == 0) {
 uVar3 = 0;
 uVar4 = param_1;
 }
 iVar8 = LZCOUNT(uVar4);
 if (param_2 == 0) {
 iVar8 = iVar8 + 0x20;
 }
 uVar9 = iVar8 - 0xb;
 bVar13 = SBORROW4(uVar9,0x20);
 uVar5 = iVar8 - 0x2b;
 bVar12 = uVar5 == 0;
 uVar7 = uVar5;
 uVar6 = uVar5;
 if ((int)uVar9 < 0x20) {
 bVar13 = SCARRY4(uVar5,0xc);
 uVar6 = iVar8 - 0x1f;
 bVar12 = uVar6 == 0;
 uVar7 = uVar9;
 if (!bVar12 && -0xd < (int)uVar5) {
 uVar3 = uVar4 << (uVar9 & 0xff);
 uVar4 = uVar4 >> (0xc - uVar6 & 0xff);
 goto LAB_00011e6c;
 }
 }
 if (bVar12 || (int)uVar6 < 0 != bVar13) {
 uVar10 = 0x20 - uVar7;
 }
 uVar4 = uVar4 << (uVar7 & 0xff);
 if (bVar12 || (int)uVar6 < 0 != bVar13) {
 uVar4 = uVar4 | uVar3 >> (uVar10 & 0xff);
 uVar3 = uVar3 << (uVar7 & 0xff);
 }
LAB_00011e6c:
 if ((int)uVar9 <= iVar11) {
 return CONCAT44(uVar4 + (iVar11 - uVar9) * 0x100000,uVar3);
 }
 uVar10 = ~(iVar11 - uVar9);
 if ((int)uVar10 < 0x1f) {
 if (uVar10 - 0x13 != 0 && -0xd < (int)(uVar10 - 0x1f)) {
 uVar10 = 0xc - (uVar10 - 0x13);
 return (ulonglong)(uVar3 >> (0x20 - uVar10 & 0xff) | uVar4 << (uVar10 & 0xff));
 }
 uVar10 = uVar10 + 1;
 return CONCAT44(uVar4 >> (uVar10 & 0xff),
 uVar3 >> (uVar10 & 0xff) | uVar4 << (0x20 - uVar10 & 0xff));
 }
 return (ulonglong)(uVar4 >> (uVar10 - 0x1f & 0xff));
}






uint __fixdfsi(uint param_1,uint param_2)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 
 iVar2 = param_2 * 2 + 0x200000;
 if (param_2 * 2 < 0xffe00000) {
 if (-1 < iVar2) {
 return 0;
 }
 uVar1 = iVar2 >> 0x15;
 uVar3 = -uVar1 - 0x3e1;
 if (uVar1 < 0xfffffc20 && uVar3 != 0) {
 uVar1 = (param_2 << 0xb | 0x80000000 | param_1 >> 0x15) >> (uVar3 & 0xff);
 if ((param_2 & 0x80000000) != 0) {
 uVar1 = -uVar1;
 }
 return uVar1;
 }
 }
 else if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
 return 0;
 }
 param_2 = param_2 & 0x80000000;
 if (param_2 == 0) {
 param_2 = 0x7fffffff;
 }
 return param_2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 87 */
