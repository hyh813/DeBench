/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>
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
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned long ulong;
typedef int (*code)(int);

/* Ghidra macro for concatenation */
#define CONCAT44(a,b) (((unsigned long long)(a) << 32) | (unsigned int)(b))

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/4/4_gcc_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* Global stack canary variables */
extern long ___stack_chk_guard;
extern long __stack_chk_guard;

/* Global variables for C++ runtime */
extern char completed_0;
extern void *__dso_handle;
extern void __cxa_finalize(void *);

/* Handle for opaque data */
extern undefined8 handle1_1;
extern undefined8 handle2_0;

/* External data references */
extern undefined DAT_00101fb0;
extern undefined DAT_00102078;
extern undefined DAT_001020a0;
extern undefined DAT_001020c8;
extern undefined DAT_001020f0;
extern undefined DAT_001020f8;
extern undefined DAT_00102120;
extern undefined DAT_00102150;
extern undefined DAT_001021a0;
extern undefined DAT_001021a8;
extern undefined DAT_001021b8;
extern undefined DAT_001022e0;
extern undefined DAT_00102300;
extern undefined DAT_00102320;
extern undefined DAT_00102340;
extern undefined DAT_00102360;
extern undefined DAT_00102380;
extern undefined DAT_001023a0;
extern undefined DAT_001023c0;
extern undefined DAT_001023e0;
extern undefined DAT_00102400;
extern undefined *PTR_DAT_00114010;
extern undefined *PTR_DAT_00114018;
extern undefined *PTR_DAT_00114020;

/* External functions */
extern int puts(void *);
extern int printf(void *, ...);
extern size_t strlen(char *);
extern void __stack_chk_fail(void *, ...);
extern void deregister_tm_clones(void);




/* Function: FUN_00100750 @ 00100750 */

void FUN_00100750(void)

{
 (*(code *)(undefined *)0x0)(0);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001008bc @ 001008bc */

void FUN_001008bc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 00100914 */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 00100934 */

int call_cdecl(void)

{
 return cdecl_func(5,10);
}



/* Function: stdcall_func @ 00100950 */

int stdcall_func(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: call_stdcall @ 00100970 */

int call_stdcall(void)

{
 return stdcall_func(5,10);
}



/* Function: fastcall_func @ 0010098c */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 001009b8 */

int call_fastcall(void)

{
 return fastcall_func(1,2,3);
}



/* Function: call_thiscall @ 001009d8 */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 001009e0 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 00100a24 */

int call_arm_aapcs(void)

{
 return arm_aapcs_func(1,2,3,4,5);
}



/* Function: mips_func @ 00100a4c */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 00100a84 */

int call_mips(void)

{
 return mips_func(10,0x14,0x1e,0x28);
}



/* Function: amd64_sysv_func @ 00100aa8 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00100af8 */

int call_amd64_sysv(void)

{
 return amd64_sysv_func(1,2,3,4,5,6);
}



/* Function: ms_x64_func @ 00100b24 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00100b68 */

int call_ms_x64(void)

{
 return ms_x64_func(1,2,3,4,5);
}



/* Function: vectorcall_func @ 00100b90 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00100bc8 */

int call_vectorcall(void)

{
 return vectorcall_func(1,2,3,4);
}



/* Function: mixed_conventions_test @ 00100bec */

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



/* Function: varargs_func @ 00100c5c */

/* WARNING: Removing unreachable block (ram,0x00100d8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int varargs_func(int param_1, ...)

{
 int iVar1;
 int *piVar2;
 int local_f0;
 int local_ec;
 int *piVar3;
 int local_d0;
 va_list args;
 
 va_start(args, param_1);
 local_f0 = 0;
 local_d0 = -0x38;
 piVar3 = (int *)args;
 for (local_ec = 0; local_ec < param_1; local_ec = local_ec + 1) {
 piVar2 = piVar3;
 if (local_d0 < 0) {
 iVar1 = local_d0 + 8;
 if (iVar1 < 1) {
 piVar2 = (int *)((char *)args + local_d0);
 local_d0 = iVar1;
 }
 else {
 piVar3 = piVar3 + 2;
 local_d0 = iVar1;
 }
 }
 else {
 piVar3 = piVar3 + 2;
 }
 local_f0 = local_f0 + *piVar2;
 }
 va_end(args);
 return local_f0;
}



/* Function: func_no_args @ 00100d9c */

undefined8 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00100da4 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00100e0c */

int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)

{
 int iVar1;
 size_t sVar2;
 
 if (param_3 == (char *)0x0) {
 iVar1 = 0;
 }
 else {
 sVar2 = strlen(param_3);
 iVar1 = (int)sVar2;
 }
 return (int)((double)(param_2 + iVar1) + param_1 + (double)param_4);
}



/* Function: func_struct_byval @ 00100e74 */

long func_struct_byval(long param_1)

{
 undefined4 local_c;
 undefined8 local_8;
 
 local_8 = 0;
 for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
 local_8 = local_8 + *(long *)(param_1 + (long)local_c * 8);
 }
 return local_8;
}



/* Function: func_struct_byptr @ 00100ec0 */

int func_struct_byptr(int *param_1)

{
 int iVar1;
 
 if (param_1 == (int *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = *param_1 * param_1[1];
 }
 return iVar1;
}



/* Function: test_calling_conventions @ 00100ef8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_calling_conventions(void)

{
 int iVar1;
 ulong uVar2;
 long local_140;
 undefined8 uStack_138;
 undefined8 uStack_130;
 undefined8 uStack_128;
 undefined8 local_120;
 undefined8 uStack_118;
 undefined8 uStack_110;
 undefined8 uStack_108;
 undefined8 local_100;
 undefined8 uStack_f8;
 undefined8 uStack_f0;
 undefined8 uStack_e8;
 undefined8 local_e0;
 undefined8 uStack_d8;
 undefined8 uStack_d0;
 undefined8 uStack_c8;
 int local_b4;
 uint local_b0;
 uint local_ac;
 uint local_a8;
 uint local_a4;
 uint local_a0;
 uint local_9c;
 undefined4 local_98;
 undefined4 local_94;
 undefined *local_90;
 long local_88 [16];
 long local_8;
 
 local_8 = ___stack_chk_guard;
 iVar1 = puts(&DAT_00101fb0);
 uVar2 = call_cdecl();
 iVar1 = printf((void *)"CALL-L1-01: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_stdcall();
 iVar1 = printf((void *)"CALL-L1-02: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_fastcall();
 iVar1 = printf((void *)"CALL-L1-03: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_thiscall();
 iVar1 = printf((void *)"CALL-L1-04: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_arm_aapcs();
 iVar1 = printf((void *)"CALL-L1-05: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_mips();
 iVar1 = printf((void *)"CALL-L1-06: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_amd64_sysv();
 iVar1 = printf((void *)"CALL-L1-07: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_ms_x64();
 iVar1 = printf((void *)"CALL-L1-08: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_vectorcall();
 iVar1 = printf("CALL-L1-09: %d\n",uVar2 & 0xffffffff);
 uVar2 = mixed_conventions_test();
 printf("CALL-L1-10: %d\n",uVar2 & 0xffffffff);
 local_b0 = varargs_func(5,1,2,3,4,5);
 iVar1 = printf((char *)&DAT_00102078,(ulong)local_b0);
 local_ac = func_no_args();
 printf((char *)&DAT_001020a0,(ulong)local_ac);
 local_a8 = func_many_args(1,2,3,4,5,6,7,8);
 printf((void *)&DAT_001020c8,(ulong)local_a8);
 local_90 = (undefined *)&DAT_001020f0;
 local_a4 = func_mixed_args((double)0x40091eb851eb851f,10,(char *)&DAT_001020f0,100);
 printf((void *)&DAT_001020f8,(ulong)local_a4);
 for (local_b4 = 0; local_b4 < 0x10; local_b4 = local_b4 + 1) {
 local_88[local_b4] = (long)(local_b4 + 1);
 }
 uStack_138 = local_88[1];
 local_140 = local_88[0];
 uStack_128 = local_88[3];
 uStack_130 = local_88[2];
 uStack_118 = local_88[5];
 local_120 = local_88[4];
 uStack_108 = local_88[7];
 uStack_110 = local_88[6];
 uStack_f8 = local_88[9];
 local_100 = local_88[8];
 uStack_e8 = local_88[0xb];
 uStack_f0 = local_88[10];
 uStack_d8 = local_88[0xd];
 local_e0 = local_88[0xc];
 uStack_c8 = local_88[0xf];
 uStack_d0 = local_88[0xe];
 local_a0 = func_struct_byval((long)&local_140);
 printf(&DAT_00102120,(ulong)local_a0);
 local_98 = 5;
 local_94 = 10;
 local_9c = func_struct_byptr((int *)&local_98);
 printf(&DAT_00102150,(ulong)local_9c);
 if ((uintptr_t)local_8 - (uintptr_t)___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0);
 }
 return;
}



/* Function: param_by_value_int @ 00101178 */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 00101198 */

int call_by_value_int(void)

{
 int iVar1;
 
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 001011c8 */

undefined1 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00101200 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_by_value_ptr(void)

{
 int local_18;
 int local_14;
 int *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_18 = 5;
 local_10 = &local_18;
 local_14 = param_by_value_ptr(local_10);
 if ((uintptr_t)local_8 - (uintptr_t)___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)&__stack_chk_guard,0);
 }
 return local_18 + local_14;
}



/* Function: param_array_decay @ 00101274 */

undefined8 param_array_decay(void)

{
 return 8;
}



/* Function: call_array_decay @ 0010128c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 call_array_decay(void)

{
 undefined4 uVar1;
 undefined8 local_30;
 undefined8 uStack_28;
 undefined8 local_20;
 undefined8 uStack_18;
 undefined8 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_30 = 0;
 uStack_28 = 0;
 local_20 = 0;
 uStack_18 = 0;
 local_10 = 0;
 uVar1 = param_array_decay();
 if ((uintptr_t)local_8 - (uintptr_t)___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0);
 }
 return uVar1;
}



/* Function: param_string @ 001012f0 */

int param_string(byte *param_1)

{
 return (uint)*param_1 + (uint)param_1[1];
}



/* Function: call_string_param @ 0010131c */

int call_string_param(void)

{
 return param_string("Hello");
}



/* Function: param_ptr_array @ 00101338 */

int param_ptr_array(long param_1,int param_2)

{
 undefined4 local_8;
 undefined4 local_4;
 
 local_8 = 0;
 for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
 local_8 = local_8 + (uint)**(byte **)(param_1 + (long)local_4 * 8);
 }
 return local_8;
}



/* Function: call_ptr_array @ 001013a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 call_ptr_array(void)

{
 undefined4 uVar1;
 undefined *local_20;
 undefined *puStack_18;
 undefined *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20 = PTR_DAT_00114010;
 puStack_18 = PTR_DAT_00114018;
 local_10 = PTR_DAT_00114020;
 uVar1 = param_ptr_array((long)&local_20,3);
 if ((uintptr_t)local_8 - (uintptr_t)___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0);
 }
 return uVar1;
}



/* Function: param_varargs @ 00101418 */

/* WARNING: Removing unreachable block (ram,0x00101548) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_varargs(int param_1, ...)

{
 int iVar1;
 int *piVar2;
 int local_f0;
 int local_ec;
 int *piVar3;
 int local_d0;
 va_list args;
 
 va_start(args, param_1);
 local_d0 = -0x38;
 local_f0 = 0;
 piVar3 = (int *)args;
 for (local_ec = 0; local_ec < param_1; local_ec = local_ec + 1) {
 piVar2 = piVar3;
 if (local_d0 < 0) {
 iVar1 = local_d0 + 8;
 if (iVar1 < 1) {
 piVar2 = (int *)((char *)args + local_d0);
 local_d0 = iVar1;
 }
 else {
 piVar3 = piVar3 + 2;
 local_d0 = iVar1;
 }
 }
 else {
 piVar3 = piVar3 + 2;
 }
 local_f0 = local_f0 + *piVar2;
 }
 va_end(args);
 return local_f0;
}



/* Function: call_varargs_param @ 00101558 */

int call_varargs_param(void)

{
 return param_varargs(4,10,0x14,0x1e,0x28);
}



/* Function: param_func_ptr @ 00101580 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: callback_func @ 001015a8 */

int callback_func(int param_1)

{
 return param_1 << 1;
}



/* Function: call_func_ptr_param @ 001015c0 */

int call_func_ptr_param(void)

{
 return param_func_ptr((code *)callback_func,5);
}



/* Function: param_double_ptr @ 001015e0 */

undefined8 param_double_ptr(long *param_1,undefined4 param_2)

{
 undefined8 uVar1;
 
 if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: call_double_ptr @ 00101634 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_double_ptr(void)

{
 int iVar1;
 int local_18;
 undefined4 local_14;
 int *local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_18 = 10;
 local_10 = &local_18;
 local_14 = param_double_ptr((long *)&local_10,0x14);
 iVar1 = (uint)(local_10 == (int *)0x0) + local_18;
 if ((uintptr_t)local_8 - (uintptr_t)___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)&__stack_chk_guard,0,(void *)((uintptr_t)local_8 - (uintptr_t)___stack_chk_guard));
 }
 return iVar1;
}



/* Function: param_complex_cast @ 001016bc */

int param_complex_cast(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 == 0) {
 iVar1 = *param_1;
 }
 else if (param_2 == 1) {
 iVar1 = *param_1 + param_1[1];
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_complex_cast @ 00101730 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 call_complex_cast(void)

{
 undefined4 uVar1;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_14 = 0x12345678;
 local_10 = 100;
 local_c = 200;
 param_complex_cast(&local_10,1);
 uVar1 = param_complex_cast(&local_14,0);
 if ((uintptr_t)local_8 - (uintptr_t)___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0);
 }
 return uVar1;
}



/* Function: param_struct_byval @ 001017b0 */

int param_struct_byval(int *param_1)

{
 return *param_1 + param_1[0xf];
}



/* Function: call_struct_byval @ 001017cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 call_struct_byval(void)

{
 undefined4 uVar1;
 undefined8 local_90;
 undefined8 uStack_88;
 undefined8 uStack_80;
 undefined8 uStack_78;
 undefined8 local_70;
 undefined8 uStack_68;
 undefined8 uStack_60;
 undefined8 uStack_58;
 int local_4c;
 undefined8 local_48;
 undefined8 uStack_40;
 undefined8 uStack_38;
 undefined8 uStack_30;
 undefined8 local_28;
 undefined8 uStack_20;
 undefined8 uStack_18;
 undefined8 uStack_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 for (local_4c = 0; local_4c < 0x10; local_4c = local_4c + 1) {
 *(int *)((long)&local_48 + (long)local_4c * 4) = local_4c;
 }
 uStack_88 = uStack_40;
 local_90 = local_48;
 uStack_78 = uStack_30;
 uStack_80 = uStack_38;
 uStack_68 = uStack_20;
 local_70 = local_28;
 uStack_58 = uStack_10;
 uStack_60 = uStack_18;
 uVar1 = param_struct_byval((int *)&local_90);
 if ((uintptr_t)local_8 - (uintptr_t)___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0);
 }
 return uVar1;
}



/* Function: param_order_dep @ 0010186c */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 0010188c */

int call_order_dep(void)

{
 return param_order_dep(2,2);
}



/* Function: test_parameter_passing @ 001018c4 */

int test_parameter_passing(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = puts((void *)&DAT_001021a0);
 uVar2 = call_by_value_int();
 iVar1 = printf((char *)&DAT_001021a8,uVar2 & 0xffffffff);
 uVar2 = call_by_value_ptr();
 iVar1 = printf((char *)&DAT_001021b8,uVar2 & 0xffffffff);
 uVar2 = call_array_decay();
 iVar1 = printf((void *)"PARAM-L2-01: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_string_param();
 iVar1 = printf((void *)"PARAM-L2-02: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_ptr_array();
 iVar1 = printf((void *)"PARAM-L2-03: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_varargs_param();
 iVar1 = printf((void *)"PARAM-L2-04: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_func_ptr_param();
 iVar1 = printf("PARAM-L3-01: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_double_ptr();
 iVar1 = printf("PARAM-L3-02: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_complex_cast();
 iVar1 = printf("PARAM-L3-03: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_struct_byval();
 iVar1 = printf("PARAM-L3-04: %d\n",uVar2 & 0xffffffff);
 uVar2 = call_order_dep();
 iVar1 = printf("PARAM-L3-05: %d\n",uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: ret_basic_type @ 001019c0 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 001019d8 */

undefined4 call_ret_basic(void)

{
 undefined4 uVar1;
 
 uVar1 = ret_basic_type(0x15);
 return uVar1;
}



/* Function: ret_pointer @ 00101a00 */

long ret_pointer(long param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00101a18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 call_ret_pointer(void)

{
 undefined4 *puVar1;
 undefined8 local_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_18 = 0x140000000a;
 local_10 = 0x1e;
 puVar1 = (undefined4 *)ret_pointer((long)&local_18);
 if ((uintptr_t)local_8 - (uintptr_t)___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)&__stack_chk_guard,0,0,(void *)((uintptr_t)local_8 - (uintptr_t)___stack_chk_guard));
 }
 return *puVar1;
}



/* Function: ret_small_struct @ 00101a94 */

undefined8 ret_small_struct(undefined4 param_1,undefined4 param_2)

{
 return CONCAT44(param_2,param_1);
}



/* Function: call_ret_small_struct @ 00101abc */

int call_ret_small_struct(void)

{
 undefined8 uVar1;
 undefined4 local_8;
 undefined4 uStack_4;
 
 uVar1 = ret_small_struct(3,4);
 local_8 = (int)uVar1;
 uStack_4 = (int)((ulong)uVar1 >> 0x20);
 return local_8 + uStack_4;
}



/* Function: ret_large_struct @ 00101ae8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ret_large_struct(undefined8 *param_1,int param_2)

{
 long lVar1;
 int local_4c;
 undefined8 local_48;
 undefined8 uStack_40;
 undefined8 uStack_38;
 undefined8 uStack_30;
 undefined8 local_28;
 undefined8 uStack_20;
 undefined8 uStack_18;
 undefined8 uStack_10;
 long local_8;
 
 lVar1 = ___stack_chk_guard;
 local_8 = ___stack_chk_guard;
 for (local_4c = 0; local_4c < 0x10; local_4c = local_4c + 1) {
 *(int *)((long)&local_48 + (long)local_4c * 4) = param_2 + local_4c;
 }
 param_1[1] = uStack_40;
 *param_1 = local_48;
 param_1[3] = uStack_30;
 param_1[2] = uStack_38;
 param_1[5] = uStack_20;
 param_1[4] = local_28;
 param_1[7] = uStack_10;
 param_1[6] = uStack_18;
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((void *)&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
 }
 return;
}



/* Function: call_ret_large_struct @ 00101b88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_ret_large_struct(void)

{
 int local_48 [15];
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 ret_large_struct((undefined8 *)&local_48,100);
 if ((uintptr_t)local_8 - (uintptr_t)___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0);
 }
 return local_48[0] + local_c;
}



/* Function: func_a @ 00101bf0 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 00101c08 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: ret_func_ptr @ 00101c20 */

int (*ret_func_ptr(int param_1))(int)

{
 int (*pcVar1)(int);
 
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 else {
 pcVar1 = func_b;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101c50 */

int call_ret_func_ptr(void)

{
 int (*pcVar1)(int);
 
 pcVar1 = ret_func_ptr(1);
 return (*pcVar1)(5);
}



/* Function: ret_opaque_handle @ 00101c78 */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 if (param_1 == 0) {
 puVar1 = (undefined8 *)&handle1_1;
 }
 else {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00101ca8 */

undefined4 call_ret_opaque(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)ret_opaque_handle(0);
 return *puVar1;
}



/* Function: ret_complex_expr @ 00101ccc */

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



/* Function: call_ret_complex_expr @ 00101d08 */

int call_ret_complex_expr(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = ret_complex_expr(5,3,10);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar1 + iVar2;
}



/* Function: ret_multi_branch @ 00101d4c */

undefined8 ret_multi_branch(int param_1)

{
 if (param_1 == 2) {
 return 0x1e;
 }
 if (param_1 < 3) {
 if (param_1 == 0) {
 return 10;
 }
 if (param_1 == 1) {
 return 0x14;
 }
 }
 return 0xffffffff;
}



/* Function: call_ret_multi_branch @ 00101dac */

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



/* Function: ret_void @ 00101e0c */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00101e3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 call_ret_void(void)

{
 undefined4 local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 ret_void(7,&local_c);
 if ((uintptr_t)local_8 - (uintptr_t)___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0);
 }
 return local_c;
}



/* Function: test_return_values @ 00101e9c */

int test_return_values(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = puts((void *)&DAT_001022e0);
 uVar2 = call_ret_basic();
 iVar1 = printf((void *)&DAT_00102300,uVar2 & 0xffffffff);
 uVar2 = call_ret_pointer();
 iVar1 = printf((void *)&DAT_00102320,uVar2 & 0xffffffff);
 uVar2 = call_ret_small_struct();
 iVar1 = printf((void *)&DAT_00102340,uVar2 & 0xffffffff);
 uVar2 = call_ret_large_struct();
 iVar1 = printf((void *)&DAT_00102360,uVar2 & 0xffffffff);
 uVar2 = call_ret_func_ptr();
 iVar1 = printf((void *)&DAT_00102380,uVar2 & 0xffffffff);
 uVar2 = call_ret_opaque();
 iVar1 = printf((void *)&DAT_001023a0,uVar2 & 0xffffffff);
 uVar2 = call_ret_complex_expr();
 iVar1 = printf((void *)&DAT_001023c0,uVar2 & 0xffffffff);
 uVar2 = call_ret_multi_branch();
 iVar1 = printf((void *)&DAT_001023e0,uVar2 & 0xffffffff);
 uVar2 = call_ret_void();
 iVar1 = printf((void *)&DAT_00102400,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 00101f70 */

undefined8 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 80 */
