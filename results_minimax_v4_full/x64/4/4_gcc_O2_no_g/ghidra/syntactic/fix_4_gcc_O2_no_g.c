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

/* Additional types used in decompiled code */
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef int (*code)(int);
typedef unsigned int uint;
typedef unsigned long ulong;

/* Global variables */
undefined4 handle1_1;
undefined4 handle2_0;

/* Stack access placeholders */
static int stack0x00000008;
static int stack0x00000088;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/4/4_gcc_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(void *)0x0)(0);
 return;
}



/* Function: main @ 001010c0 */

undefined8 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: func_a @ 001011e0 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 001011f0 */

int func_b(int param_1)

{
 return param_1 * 2;
}



/* Function: cdecl_func @ 00101200 */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 00101210 */

undefined8 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00101220 */

int stdcall_func(int param_1,int param_2)

{
 return param_1 * param_2;
}



/* Function: call_stdcall @ 00101230 */

undefined8 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00101240 */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 00101250 */

undefined8 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 00101260 */

undefined8 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00101270 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 00101280 */

undefined8 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 00101290 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 001012a0 */

undefined8 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 001012b0 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 001012d0 */

undefined8 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 001012e0 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 001012f0 */

undefined8 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00101300 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00101310 */

undefined8 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00101320 */

undefined8 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 00101330 */

int varargs_func(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
 undefined8 param_5,undefined8 param_6)

{
 int iVar1;
 ulong uVar2;
 int *piVar3;
 int iVar4;
 long in_FS_OFFSET;
 int local_38 [2];
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
 undefined8 local_18;
 undefined8 local_10;
 
 local_30 = param_2;
 local_28 = param_3;
 local_20 = param_4;
 local_18 = param_5;
 local_10 = param_6;
 if (param_1 < 1) {
 iVar4 = 0;
 }
 else {
 iVar1 = 0;
 iVar4 = 0;
 uVar2 = 8;
 piVar3 = (int *)&stack0x00000008;
 do {
 while( 1 ) {
 if ((uint)uVar2 < 0x30) break;
 iVar1 = iVar1 + 1;
 iVar4 = iVar4 + *piVar3;
 piVar3 = piVar3 + 2;
 if (param_1 == iVar1) goto LAB_001013c0;
 }
 iVar1 = iVar1 + 1;
 iVar4 = iVar4 + *(int *)((long)local_38 + uVar2);
 uVar2 = (ulong)((uint)uVar2 + 8);
 } while (param_1 != iVar1);
 }
LAB_001013c0:
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar4;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: func_no_args @ 001013f0 */

undefined8 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00101400 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00101420 */

int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)

{
 size_t sVar1;
 
 if (param_3 != (char *)0x0) {
 sVar1 = strlen(param_3);
 param_2 = param_2 + (int)sVar1;
 }
 return (int)((double)param_2 + param_1 + (double)param_4);
}



/* Function: func_struct_byval @ 00101480 */

long func_struct_byval(void)

{
 long lVar1;
 long *plVar2;
 
 plVar2 = (long *)&stack0x00000008;
 lVar1 = 0;
 do {
 lVar1 = lVar1 + *plVar2;
 plVar2 = plVar2 + 1;
 } while (plVar2 != (long *)&stack0x00000088);
 return lVar1;
}



/* Function: func_struct_byptr @ 001014b0 */

int func_struct_byptr(int *param_1)

{
 if (param_1 != (int *)0x0) {
 return *param_1 * param_1[1];
 }
 return -1;
}



/* Function: test_calling_conventions @ 001014d0 */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 long lVar2;
 long *plVar3;
 long in_FS_OFFSET;
 long local_118 [16];
 long local_98 [16];
 long local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts("Calling Convention Tests\n");
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
 __printf_chk(1,"CALL-L1-11: varargs result = %d\n",uVar1);
 __printf_chk(1,"CALL-L1-12: no args = %d\n",0x2a);
 __printf_chk(1,"CALL-L1-13: many args = %d\n",0x24);
 __printf_chk(1,"CALL-L1-14: mixed args = %d\n",0x75);
 lVar2 = 1;
 do {
 local_118[lVar2 + -1] = lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x11);
 lVar2 = 0;
 plVar3 = local_98;
 local_98[0] = local_118[0];
 local_98[1] = local_118[1];
 local_98[2] = local_118[2];
 local_98[3] = local_118[3];
 local_98[4] = local_118[4];
 local_98[5] = local_118[5];
 local_98[6] = local_118[6];
 local_98[7] = local_118[7];
 local_98[8] = local_118[8];
 local_98[9] = local_118[9];
 local_98[10] = local_118[10];
 local_98[0xb] = local_118[0xb];
 local_98[0xc] = local_118[0xc];
 local_98[0xd] = local_118[0xd];
 local_98[0xe] = local_118[0xe];
 local_98[0xf] = local_118[0xf];
 do {
 lVar2 = lVar2 + *plVar3;
 plVar3 = plVar3 + 1;
 } while (&local_18 != plVar3);
 __printf_chk(1,"CALL-L1-15: array sum = %ld\n",lVar2);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,"CALL-L1-16: %d\n",0x32);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_by_value_int @ 00101770 */

int param_by_value_int(int param_1)

{
 return param_1 * 2;
}



/* Function: call_by_value_int @ 00101780 */

undefined8 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 00101790 */

undefined8 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 001017a0 */

undefined8 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 001017b0 */

undefined8 param_array_decay(void)

{
 return 8;
}



/* Function: call_array_decay @ 001017c0 */

undefined8 call_array_decay(void)

{
 return 8;
}



/* Function: param_string @ 001017d0 */

int param_string(char *param_1)

{
 return (int)*param_1 + (int)param_1[1];
}



/* Function: call_string_param @ 001017e0 */

undefined8 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 001017f0 */

int param_ptr_array(undefined8 *param_1,int param_2)

{
 undefined8 *puVar1;
 char *pcVar2;
 int iVar3;
 
 if (0 < param_2) {
 puVar1 = param_1 + (ulong)(param_2 - 1) + 1;
 iVar3 = 0;
 do {
 pcVar2 = (char *)*param_1;
 param_1 = param_1 + 1;
 iVar3 = iVar3 + *pcVar2;
 } while (param_1 != puVar1);
 return iVar3;
 }
 return 0;
}



/* Function: call_ptr_array @ 00101830 */

undefined8 call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 00101840 */

int param_varargs(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
 undefined8 param_5,undefined8 param_6)

{
 int iVar1;
 ulong uVar2;
 int *piVar3;
 int iVar4;
 long in_FS_OFFSET;
 int local_38 [2];
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
 undefined8 local_18;
 undefined8 local_10;
 
 local_30 = param_2;
 local_28 = param_3;
 local_20 = param_4;
 local_18 = param_5;
 local_10 = param_6;
 if (param_1 < 1) {
 iVar4 = 0;
 }
 else {
 iVar1 = 0;
 iVar4 = 0;
 uVar2 = 8;
 piVar3 = (int *)&stack0x00000008;
 do {
 while( 1 ) {
 if ((uint)uVar2 < 0x30) break;
 iVar1 = iVar1 + 1;
 iVar4 = iVar4 + *piVar3;
 piVar3 = piVar3 + 2;
 if (param_1 == iVar1) goto LAB_001018d0;
 }
 iVar1 = iVar1 + 1;
 iVar4 = iVar4 + *(int *)((long)local_38 + uVar2);
 uVar2 = (ulong)((uint)uVar2 + 8);
 } while (param_1 != iVar1);
 }
LAB_001018d0:
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar4;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_varargs_param @ 00101900 */

void call_varargs_param(void)

{
 param_varargs(4,10,0x14,0x1e,0x28,0);
 return;
}



/* Function: param_func_ptr @ 00101930 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00101950 */

undefined8 call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00101960 */

undefined8 param_double_ptr(long *param_1,undefined4 param_2)

{
 if ((param_1 != (long *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}



/* Function: call_double_ptr @ 00101990 */

undefined8 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 001019a0 */

int param_complex_cast(int *param_1,int param_2)

{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 return param_1[1] + *param_1;
 }
 return -1;
}



/* Function: call_complex_cast @ 001019d0 */

undefined8 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 001019e0 */

int param_struct_byval(void)

{
 int in_stack_00000008;
 undefined8 in_stack_00000040;
 
 return (int)(in_stack_00000040 >> 32) + in_stack_00000008;
}



/* Function: call_struct_byval @ 001019f0 */

int call_struct_byval(void)

{
 long lVar1;
 long in_FS_OFFSET;
 int local_58 [18];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 lVar1 = 0;
 do {
 local_58[lVar1] = (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_58[0xf] + local_58[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_order_dep @ 00101a40 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 00101a50 */

undefined8 call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 00101a60 */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 long lVar2;
 long in_FS_OFFSET;
 int local_58 [18];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts("Parameter Passing Tests\n");
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",8);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 __printf_chk(1,"PARAM-L2-03: %d\n",300);
 uVar1 = param_varargs(4,10,0x14,0x1e,0x28,0);
 __printf_chk(1,"PARAM-L2-04: %d\n",uVar1);
 __printf_chk(1,"PARAM-L3-01: %d\n",0x14);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 lVar2 = 0;
 do {
 local_58[lVar2] = (int)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 __printf_chk(1,"PARAM-L3-04: %d\n",local_58[0xf] + local_58[0]);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ret_basic_type @ 00101be0 */

int ret_basic_type(int param_1)

{
 return param_1 * 2;
}



/* Function: call_ret_basic @ 00101bf0 */

undefined8 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00101c00 */

long ret_pointer(long param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00101c10 */

undefined8 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00101c20 */

ulong ret_small_struct(uint param_1,long param_2)

{
 return (ulong)param_1 | param_2 << 0x20;
}



/* Function: call_ret_small_struct @ 00101c30 */

undefined8 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00101c40 */

void ret_large_struct(undefined8 *param_1,int param_2)

{
 int *piVar1;
 long in_FS_OFFSET;
 undefined8 local_58;
 undefined8 uStack_50;
 undefined8 local_48;
 undefined8 uStack_40;
 undefined8 local_38;
 undefined8 uStack_30;
 undefined8 local_28;
 undefined8 uStack_20;
 int local_18 [2];
 long local_10;
 
 piVar1 = (int *)&local_58;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 do {
 *piVar1 = param_2;
 piVar1 = piVar1 + 1;
 param_2 = param_2 + 1;
 } while (piVar1 != local_18);
 *param_1 = local_58;
 param_1[1] = uStack_50;
 param_1[2] = local_48;
 param_1[3] = uStack_40;
 param_1[4] = local_38;
 param_1[5] = uStack_30;
 param_1[6] = local_28;
 param_1[7] = uStack_20;
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_ret_large_struct @ 00101cc0 */

int call_ret_large_struct(void)

{
 int *piVar1;
 int iVar2;
 long in_FS_OFFSET;
 int local_58 [16];
 int local_18 [2];
 long local_10;
 
 piVar1 = local_58;
 iVar2 = 100;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 do {
 *piVar1 = iVar2;
 piVar1 = piVar1 + 1;
 iVar2 = iVar2 + 1;
 } while (piVar1 != local_18);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_58[0xf] + local_58[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ret_func_ptr @ 00101d20 */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101d40 */

undefined8 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00101d50 */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00101d70 */

undefined4 call_ret_opaque(void)

{
 return handle1_1;
}



/* Function: ret_complex_expr @ 00101d80 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = param_3 * 2;
 if (param_1 <= param_2) {
 iVar1 = param_3 + 10;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101d90 */

undefined8 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00101da0 */

int ret_multi_branch(uint param_1)

{
 int iVar1;
 
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = (param_1 * 5 + 5) * 2;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00101dc0 */

undefined8 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00101dd0 */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00101de0 */

undefined8 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00101df0 */

void test_return_values(void)

{
 undefined4 uVar1;
 
 puts("Return Value Tests\n");
 __printf_chk(1,"RET-L1-01: %d\n",0x2a);
 __printf_chk(1,"RET-L1-02: %d\n",0x14);
 __printf_chk(1,"RET-L1-03: %d\n",7);
 uVar1 = call_ret_large_struct();
 __printf_chk(1,"RET-L1-04: %d\n",uVar1);
 __printf_chk(1,"RET-L1-05: %d\n",10);
 __printf_chk(1,"RET-L1-06: %d\n",handle1_1);
 __printf_chk(1,"RET-L1-07: %d\n",0x28);
 __printf_chk(1,"RET-L1-08: %d\n",0x3c);
 __printf_chk(1,"RET-L1-09: %d\n",0x15);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 77 */
