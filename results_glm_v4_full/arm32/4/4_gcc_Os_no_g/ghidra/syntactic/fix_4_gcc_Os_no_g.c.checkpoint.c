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

/* Additional type definitions for decompiled code */
typedef uint8_t undefined;
typedef uint8_t byte;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint32_t uint;
typedef uint64_t ulonglong;
typedef _Bool bool;
typedef int (*code)(int);

/* Integer limit constants */
#define INT32_MAX 2147483647
#define INT32_MIN (-2147483647 - 1)

/* Compiler runtime helper function - count leading zeros */
static inline int LZCOUNT(uint x) {
    return x == 0 ? 32 : __builtin_clz(x);
}

/* Compiler runtime helper macros for double precision floating point operations */
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | ((uint64_t)(low) & 0xFFFFFFFFULL))
#define CARRY4(a, b) (((uint)(a) + (uint)(b)) < (uint)(a))
#define SCARRY4(a, b) (((int64_t)(int32_t)(a) + (int64_t)(int32_t)(b)) > INT32_MAX || \
                       ((int64_t)(int32_t)(a) + (int64_t)(int32_t)(b)) < INT32_MIN)
#define SBORROW4(a, b) ((int32_t)(a) < (int32_t)(b))

/* External data references from binary */
undefined4 handle1_1 = 0x0;
undefined4 handle2_0 = 0x42;
char DAT_0001148c[] = "TEST-L1: Calling Conventions\n";
char DAT_0001154d[] = "VARARGS-L1-01: %d\n";
char DAT_00011575[] = "VARARGS-L2-02: %d\n";
char DAT_00011597[] = "VARARGS-L2-01: %d\n";
char DAT_000115be[] = "CALL-L1-09: %d\n";
char DAT_000115e6[] = "CALL-L2-04: %d\n";
char DAT_00011612[] = "CALL-L2-05: %d\n";
char DAT_0001163f[] = "TEST-L2: Parameter Passing\n";
char DAT_0001171b[] = "TEST-L3: Return Values\n";
char DAT_00011739[] = "RET-L1-01: %d\n";
char DAT_00011755[] = "RET-L1-02: %d\n";
char DAT_00011771[] = "RET-L2-01: %d\n";
char DAT_0001178c[] = "RET-L1-06: %d\n";
char DAT_000117a9[] = "RET-L2-02: %d\n";
char DAT_000117c5[] = "RET-L2-04: %d\n";
char DAT_000117e2[] = "RET-L1-09: %d\n";
char DAT_000117fe[] = "RET-L1-07: %d\n";
char DAT_0001181a[] = "RET-L1-08: %d\n";
extern byte DAT_00011836[];
extern byte DAT_0001183a[];
extern byte DAT_0001183e[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_gcc_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: main @ 0001045c */

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




/* Function: func_a @ 0001056c */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 00010574 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: callback_func @ 0001057c */

int callback_func(int param_1)

{
 return param_1 << 1;
}



/* Function: cdecl_func @ 00010584 */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 0001058c */

undefined4 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00010594 */

int stdcall_func(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: call_stdcall @ 0001059c */

undefined4 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 000105a4 */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 000105b0 */

undefined4 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 000105b8 */

undefined4 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 000105c0 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 000105d8 */

undefined4 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 000105e0 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 000105f0 */

undefined4 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 000105f8 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00010618 */

undefined4 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00010620 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00010638 */

undefined4 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00010640 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00010650 */

undefined4 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00010658 */

undefined4 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 00010660 */

/* WARNING: Removing unreachable block (ram,0x000106ac) */

int varargs_func(int param_1, ...)

{
 int iVar1;
 
 for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
 }
 return 0;
}



/* Function: func_no_args @ 000106d4 */

undefined4 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 000106dc */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 0001070c */

void func_mixed_args(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
 undefined4 param_5,undefined4 param_6)

{
 size_t sVar1;
 undefined8 uVar2;
 undefined8 uVar3;
 
 sVar1 = 0;
 if (param_2 != (char *)0x0) {
 sVar1 = strlen(param_2);
 }
 uVar2 = __floatsidf(sVar1 + param_1);
 uVar2 = __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_3,param_4);
 uVar3 = __aeabi_l2d(param_5,param_6);
 __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,(int)((ulonglong)uVar3 >> 0x20)
 );
 __aeabi_d2iz();
 return;
}



/* Function: func_struct_byval @ 0001076c */

int func_struct_byval(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int *piVar4;
 int local_10 [4];
 
 piVar4 = local_10;
 local_10[0] = param_1;
 local_10[1] = param_2;
 local_10[2] = param_3;
 local_10[3] = param_4;
 iVar3 = 0x10;
 iVar1 = 0;
 do {
 iVar2 = *piVar4;
 piVar4 = piVar4 + 2;
 iVar1 = iVar2 + iVar1;
 iVar3 = iVar3 + -1;
 } while (iVar3 != 0);
 return iVar1;
}



/* Function: func_struct_byptr @ 0001079c */

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



/* Function: test_calling_conventions @ 000107b0 */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 uint uVar2;
 int iVar3;
 uint *puVar4;
 int iVar5;
 uint uVar6;
 int *piVar7;
 bool bVar8;
 uint local_110 [32];
 int local_90 [33];
 int local_c;
 
 local_c = 0;
 puts(&DAT_0001148c);
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
 uVar1 = varargs_func(5,1,2,3,4,5);
 __printf_chk(1,&DAT_0001154d,uVar1);
 __printf_chk(1,&DAT_00011575,0x2a);
 __printf_chk(1,&DAT_00011597,0x24);
 __printf_chk(1,&DAT_000115be,0x75);
 uVar6 = 1;
 uVar2 = 0;
 puVar4 = local_110;
 do {
 *puVar4 = uVar6;
 bVar8 = 0xfffffffe < uVar6;
 uVar6 = uVar6 + 1;
 puVar4[1] = uVar2;
 uVar2 = uVar2 + bVar8;
 puVar4 = puVar4 + 2;
 } while (uVar6 != 0x11 || uVar2 != 0);
 memcpy(local_90,local_110,0x80);
 iVar5 = 0;
 iVar3 = 0;
 piVar7 = local_90;
 do {
 iVar3 = iVar3 + 1;
 iVar5 = *piVar7 + iVar5;
 piVar7 = piVar7 + 2;
 } while (iVar3 != 0x10);
 __printf_chk(1,&DAT_000115e6,iVar5);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 __printf_chk(1,&DAT_00011612,0x32,0);
 return;
}



/* Function: param_by_value_int @ 000109b8 */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 000109c0 */

undefined4 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 000109c8 */

undefined4 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 000109dc */

undefined4 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 000109e4 */

undefined4 param_array_decay(void)

{
 return 4;
}



/* Function: call_array_decay @ 000109ec */

undefined4 call_array_decay(void)

{
 return 4;
}



/* Function: param_string @ 000109f4 */

int param_string(byte *param_1)

{
 return (uint)*param_1 + (uint)param_1[1];
}



/* Function: call_string_param @ 00010a04 */

undefined4 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00010a0c */

int param_ptr_array(int param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + (uint)**(byte **)(param_1 + iVar2 * 4);
 }
 return iVar1;
}



/* Function: call_ptr_array @ 00010a34 */

int call_ptr_array(void)

{
 undefined *puStack_18;
 undefined *puStack_14;
 undefined *puStack_10;
 int local_c;
 
 local_c = 0;
 puStack_18 = &DAT_00011836;
 puStack_14 = &DAT_0001183a;
 puStack_10 = &DAT_0001183e;
 param_ptr_array(&puStack_18,3);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return 4;
}



/* Function: param_varargs @ 00010a90 */

/* WARNING: Removing unreachable block (ram,0x00010adc) */

int param_varargs(int param_1, ...)

{
 int iVar1;
 
 for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
 }
 return 0;
}



/* Function: call_varargs_param @ 00010b04 */

int call_varargs_param(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 param_varargs(4,10,0x14,0x1e,0x28,param_2,param_3);
 return 100;
}



/* Function: param_func_ptr @ 00010b2c */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00010b44 */

void call_func_ptr_param(void)

{
 param_func_ptr(callback_func,5);
 return;
}



/* Function: param_double_ptr @ 00010b54 */

undefined4 param_double_ptr(undefined4 *param_1,undefined4 param_2)

{
 if ((param_1 != (undefined4 *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}



/* Function: call_double_ptr @ 00010b84 */

undefined4 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00010b8c */

int param_complex_cast(int *param_1,int param_2)

{
 int iVar1;
 
 if (param_2 != 0) {
 if (param_2 == 1) {
 iVar1 = *param_1 + param_1[1];
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
 }
 return *param_1;
}



/* Function: call_complex_cast @ 00010bb0 */

undefined4 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 00010bbc */

int param_struct_byval(int param_1)

{
 int in_stack_0000002c;
 
 return param_1 + in_stack_0000002c;
}



/* Function: call_struct_byval @ 00010bd8 */

void call_struct_byval(undefined4 param_1,undefined4 param_2)

{
 int *piVar1;
 int iVar2;
 int local_4c [15];
 int local_10;
 int local_c;
 
 local_c = 0;
 iVar2 = 0;
 piVar1 = local_4c;
 do {
 *piVar1 = iVar2;
 iVar2 = iVar2 + 1;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 0x10);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(local_4c[0] + local_10,param_2,local_c,0);
 }
 return;
}



/* Function: param_order_dep @ 00010c3c */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 00010c44 */

undefined4 call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 00010c4c */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 
 puts(&DAT_0001163f);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",4);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 uVar1 = call_ptr_array();
 __printf_chk(1,"PARAM-L2-03: %d\n",uVar1);
 uVar1 = call_varargs_param(1,2,3);
 __printf_chk(1,"PARAM-L2-04: %d\n",uVar1);
 call_func_ptr_param();
 __printf_chk(1,"PARAM-L3-01: %d\n",15);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 uVar1 = 15;
 call_struct_byval(0,0);
 __printf_chk(1,"PARAM-L3-04: %d\n",uVar1);
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
}



/* Function: ret_basic_type @ 00010d50 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00010d58 */

undefined4 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00010d60 */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00010d68 */

undefined4 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00010d70 */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}



/* Function: call_ret_small_struct @ 00010d78 */

undefined4 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00010d80 */

int * ret_large_struct(int *param_1,int param_2)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 int local_4c [4];
 int local_3c;
 int iStack_38;
 int iStack_34;
 int iStack_30;
 int local_2c;
 int iStack_28;
 int iStack_24;
 int iStack_20;
 int local_1c;
 int iStack_18;
 int iStack_14;
 int iStack_10;
 int local_c;
 
 local_c = 0;
 iVar3 = 0;
 piVar2 = local_4c;
 do {
 iVar1 = param_2 + iVar3;
 iVar3 = iVar3 + 1;
 *piVar2 = iVar1;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x10);
 *param_1 = local_4c[0];
 param_1[1] = local_4c[1];
 param_1[2] = local_4c[2];
 param_1[3] = local_4c[3];
 param_1[4] = local_3c;
 param_1[5] = iStack_38;
 param_1[6] = iStack_34;
 param_1[7] = iStack_30;
 param_1[8] = local_2c;
 param_1[9] = iStack_28;
 param_1[10] = iStack_24;
 param_1[0xb] = iStack_20;
 param_1[0xc] = local_1c;
 param_1[0xd] = iStack_18;
 param_1[0xe] = iStack_14;
 param_1[0xf] = iStack_10;
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return param_1;
}



/* Function: call_ret_large_struct @ 00010e0c */

void call_ret_large_struct(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
 undefined4 extraout_r1;
 int local_4c [15];
 int local_10;
 int local_c;
 
 local_c = 0;
 ret_large_struct(local_4c,100);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(local_4c[0] + local_10,extraout_r1,local_c,0);
 }
 return;
}



/* Function: ret_func_ptr @ 00010e64 */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00010e84 */

undefined4 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00010e8c */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00010ea8 */

undefined4 call_ret_opaque(void)

{
 return handle1_1;
}



/* Function: ret_complex_expr @ 00010eb8 */

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



/* Function: call_ret_complex_expr @ 00010ec8 */

undefined4 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00010ed0 */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00010ee4 */

undefined4 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00010eec */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00010ef8 */

undefined4 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00010f00 */

void test_return_values(void)

{
 undefined4 uVar1;
 
 puts(&DAT_0001171b);
 __printf_chk(1,&DAT_00011739,0x2a);
 __printf_chk(1,&DAT_00011755,0x14);
 __printf_chk(1,&DAT_00011771,7);
 uVar1 = 0;
 call_ret_large_struct(0,0,0);
 __printf_chk(1,&DAT_0001178c,uVar1);
 __printf_chk(1,&DAT_000117a9,10);
 __printf_chk(1,&DAT_000117c5,handle1_1);
 __printf_chk(1,&DAT_000117e2,0x28);
 __printf_chk(1,&DAT_000117fe,0x3c);
 __printf_chk(1,&DAT_0001181a,0x15);
 return;
}



/* Function: __aeabi_drsub @ 00010fd4 */
/* Standard compiler runtime function - provided by compiler */



/* Function: __subdf3 @ 00010fdc */
/* Standard compiler runtime function - provided by compiler */

static uint64_t __subdf3(uint param_1, uint param_2, uint param_3, uint param_4)
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
LAB_00011250:
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
 if (0xffbfffff < uVar11 * 0x200000) goto LAB_00011250;
 }
LAB_000110f8:
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
 if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_000110f8;
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
 goto LAB_00011178;
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
LAB_00011178:
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




/* CRT stub function __aeabi_dadd removed by preprocessor */




/* Function: __aeabi_ui2d @ 0001128c */
/* Standard compiler runtime function - provided by compiler */

static uint64_t __aeabi_ui2d(uint param_1)
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
 goto LAB_00011178;
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
LAB_00011178:
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



/* Function: __floatsidf @ 000112b0 */
/* Standard compiler runtime function - provided by compiler */



/* Function: __extendsfdf2 @ 000112d8 */
/* Standard compiler runtime function - provided by compiler */

static uint64_t __extendsfdf2(uint param_1, uint param_2, uint param_3, uint param_4)
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
 goto LAB_00011178;
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
LAB_00011178:
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



/* Function: __floatundidf @ 00011320 */
/* Standard compiler runtime function - provided by compiler */

static uint64_t __floatundidf(uint param_1, uint param_2)
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
LAB_000110f8:
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
 if (bVar12 && 0xfffff < param_2) goto LAB_000110f8;
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
 goto LAB_00011178;
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
LAB_00011178:
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



/* Function: __aeabi_l2d @ 00011334 */
/* Standard compiler runtime function - provided by compiler */




/* CRT stub function __aeabi_d2iz removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 87 */
