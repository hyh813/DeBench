/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_clang_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned long long ulonglong;
typedef unsigned int uint;
typedef unsigned char byte;
typedef int (*code)(int);

/* Helper macros */
#define LZCOUNT(x) __builtin_clz(x)
#define CONCAT44(hi,lo) (((ulonglong)(hi) << 32) | (lo))
#define SBORROW4(a,b) ((int)((a) - (b)) < 0)
#define SCARRY4(a,b) ((int)((a) + (b)) < (int)(a))

/* Forward declarations */
extern int callback_func(int);

/* Compiler helper function declarations */
extern ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4);
extern ulonglong __floatsidf(uint param_1);
extern uint __fixdfsi(uint param_1,uint param_2);
extern ulonglong __floatdidf(uint param_1,uint param_2);

extern char DAT_00012180[];
extern char DAT_00012242[];
extern char DAT_0001226a[];
extern char DAT_0001228c[];
extern char DAT_000122b3[];
extern char DAT_000122b8[];
extern char DAT_000122e0[];
extern char DAT_0001230c[];
extern char DAT_0001233f[];
extern char DAT_00012343[];
extern char DAT_00012347[];
extern char DAT_0001234b[];
extern char DAT_00012428[];
extern char DAT_00012447[];
extern char DAT_00012463[];
extern char DAT_0001247f[];
extern char DAT_0001249a[];
extern char DAT_000124b7[];
extern char DAT_000124d3[];
extern char DAT_000124f0[];
extern char DAT_0001250c[];
extern char DAT_00012528[];

/* Data definitions */
char DAT_00012428[] = "RET-L0-00: Testing return values\n";
char DAT_00012447[] = "RET-L1-01: %d\n";
char DAT_00012463[] = "RET-L1-02: %d\n";
char DAT_0001247f[] = "RET-L1-03: %d\n";
char DAT_0001249a[] = "RET-L1-04: %d\n";
char DAT_000124b7[] = "RET-L1-05: %d\n";
char DAT_000124d3[] = "RET-L1-06: %d\n";
char DAT_000124f0[] = "RET-L1-07: %d\n";
char DAT_0001250c[] = "RET-L1-08: %d\n";
char DAT_00012528[] = "RET-L1-09: %d\n";
char DAT_0001233f[] = "str1";
char DAT_00012343[] = "str2";
char DAT_00012347[] = "str3";
char DAT_000122b3[] = "test_str";
char DAT_000122b8[] = "MIXED-L1-01: %d\n";
char DAT_000122e0[] = "STRUCT-L1-01: %d\n";
char DAT_0001230c[] = "STRUCT-L1-02: %d\n";
char DAT_00012242[] = "VAR-L1-01: %d\n";
char DAT_0001226a[] = "FUNC-L1-01: %d\n";
char DAT_0001228c[] = "FUNC-L1-02: %d\n";
char DAT_00012180[] = "=== Calling Conventions Test ===\n";
char DAT_0001234b[] = "=== Parameter Passing Test ===\n";
undefined8 ret_opaque_handle_handle1 = 0x12345678;
undefined8 ret_opaque_handle_handle2 = 0x87654321;

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
 return cdecl_func(5,10);
}



/* Function: stdcall_func @ 00010618 */

int stdcall_func(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: call_stdcall @ 00010638 */

undefined4 call_stdcall(void)

{
 return stdcall_func(5,10);
}



/* Function: fastcall_func @ 00010654 */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 00010680 */

undefined4 call_fastcall(void)

{
 return fastcall_func(1,2,3);
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
 return arm_aapcs_func(1,2,3,4,5);
}



/* Function: mips_func @ 00010724 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 0001075c */

undefined4 call_mips(void)

{
 return mips_func(10,0x14,0x1e,0x28);
}



/* Function: amd64_sysv_func @ 00010780 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 000107d0 */

undefined4 call_amd64_sysv(void)

{
 return amd64_sysv_func(1,2,3,4,5,6);
}



/* Function: ms_x64_func @ 00010810 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00010854 */

undefined4 call_ms_x64(void)

{
 return ms_x64_func(1,2,3,4,5);
}



/* Function: vectorcall_func @ 0001088c */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 000108c4 */

undefined4 call_vectorcall(void)

{
 return vectorcall_func(1,2,3,4);
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



/* Function: varargs_func @ 00010964 */

int varargs_func(int param_1)

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



/* Function: func_no_args @ 000109e0 */

undefined4 func_no_args(void)

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

void func_mixed_args(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

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
 uVar1 = __adddf3((uint)uVar1,(uint)((ulonglong)uVar1 >> 0x20),(uint)param_3,(uint)param_4);
 uVar2 = __floatdidf(param_5,param_6);
 uVar1 = __adddf3((uint)uVar1,(uint)((ulonglong)uVar1 >> 0x20),(uint)uVar2,(uint)((ulonglong)uVar2 >> 0x20));
 return;
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
 uVar1 = call_cdecl();
 printf("CALL-L1-01: %d\n",uVar1);
 uVar1 = call_stdcall();
 printf("CALL-L1-02: %d\n",uVar1);
 uVar1 = call_fastcall();
 printf("CALL-L1-03: %d\n",uVar1);
 uVar1 = call_thiscall();
 printf("CALL-L1-04: %d\n",uVar1);
 uVar1 = call_arm_aapcs();
 printf("CALL-L1-05: %d\n",uVar1);
 uVar1 = call_mips();
 printf("CALL-L1-06: %d\n",uVar1);
 uVar1 = call_amd64_sysv();
 printf("CALL-L1-07: %d\n",uVar1);
 uVar1 = call_ms_x64();
 printf("CALL-L1-08: %d\n",uVar1);
 uVar1 = call_vectorcall();
 printf("CALL-L1-09: %d\n",uVar1);
 uVar1 = mixed_conventions_test();
 printf("CALL-L1-10: %d\n",uVar1);
 local_d4 = 5;
 local_158[1] = 5;
 local_c8 = 4;
 local_158[0] = 4;
 local_c4 = 1;
 local_d0 = 2;
 local_cc = 3;
 local_14 = varargs_func(4);
 printf(&DAT_00012242,local_14);
 local_18 = func_no_args();
 printf(&DAT_0001226a,local_18);
local_158[3] = 8;
local_158[2] = 7;
local_158[1] = 6;
local_158[0] = local_d4;
local_1c = func_many_args(local_c4,local_d0,local_cc,local_c8,local_158[0],local_158[1],local_158[2],local_158[3]);
printf(&DAT_0001228c,local_1c);
 local_20 = &DAT_000122b3;
 local_c0 = 0;
 local_158[1] = 0;
 local_158[0] = 100;
 func_mixed_args(10, &DAT_000122b3, 0x51eb851f, 0x40091eb8, local_158[0], local_158[1], local_c0, 0);
 printf(&DAT_000122b8, local_c0);
 printf(&DAT_000122b8, local_c0);
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

undefined4 param_array_decay(undefined1 *param_1,int param_2)

{
 return 4;
}



/* Function: call_array_decay @ 00010ffc */

undefined4 call_array_decay(void)

{
 undefined1 auStack_30 [40];
 
 memset(auStack_30,0,0x28);
 return param_array_decay(auStack_30,10);
}



/* Function: param_string @ 00011034 */

int param_string(byte *param_1)

{
 return (uint)*param_1 + (uint)param_1[1];
}



/* Function: call_string_param @ 00011054 */

void call_string_param(void)

{
 param_string("Hello");
 return;
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

void call_ptr_array(void)

{
 undefined *local_14;
 undefined *local_10;
 undefined *local_c;
 
 local_14 = &DAT_0001233f;
 local_10 = &DAT_00012343;
 local_c = &DAT_00012347;
 param_ptr_array(&local_14,3);
 return;
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

void call_varargs_param(void)

{
 param_varargs(4);
 return;
}



/* Function: param_func_ptr @ 000111e4 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00011218 */

void call_func_ptr_param(void)

{
 param_func_ptr(callback_func,5);
 return;
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

int param_struct_byval(int param_1)

{
 int in_stack_0000002c;
 
 return param_1 + in_stack_0000002c;
}



/* Function: call_struct_byval @ 000114b8 */

void call_struct_byval(void)

{
 int local_68;
 int local_64 [16];
 
 for (local_68 = 0; local_68 < 0x10; local_68 = local_68 + 1) {
 local_64[local_68] = local_68;
 }
 param_struct_byval(local_64[0]);
 return;
}



/* Function: param_order_dep @ 000115a4 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 000115c4 */

void call_order_dep(void)

{
 param_order_dep(1,2);
 return;
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
 uVar1 = call_array_decay();
 printf("PARAM-L2-01: %d\n",uVar1);
 call_string_param();
 printf("PARAM-L2-02: %d\n",0);
 call_ptr_array();
 printf("PARAM-L2-03: %d\n",0);
 call_varargs_param();
 printf("PARAM-L2-04: %d\n",0);
 call_func_ptr_param();
 printf("PARAM-L3-01: %d\n",0);
 call_double_ptr();
 printf("PARAM-L3-02: %d\n",0);
 call_complex_cast();
 printf("PARAM-L3-03: %d\n",0);
 call_struct_byval();
 printf("PARAM-L3-04: %d\n",0);
 call_order_dep();
 printf("PARAM-L3-05: %d\n",0);
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
 int local_c = 0;
 
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



/* Function: ret_opaque_handle @ 00011964 */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = &ret_opaque_handle_handle2;
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

undefined4 ret_multi_branch(int param_1)

{
 undefined4 local_4;
 
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
 call_ret_func_ptr();
 printf(&DAT_000124b7,0);
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



/* Function: __aeabi_drsub removed - provided by compiler runtime */



/* Function: __subdf3 removed - provided by compiler runtime */



/* Function: __adddf3 removed - provided by compiler runtime */



/* Function: __aeabi_ui2d removed - provided by compiler runtime */



/* Function: __floatsidf removed - provided by compiler runtime */



/* Function: __extendsfdf2 removed - provided by compiler runtime */



/* Function: __floatundidf removed - provided by compiler runtime */




/* CRT stub function __floatdidf removed by preprocessor */




/* Function: __fixdfsi @ 00012088 */

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
