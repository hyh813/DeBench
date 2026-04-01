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

/* Additional type definitions for Ghidra decompiled code */
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef int (*code)(int);
typedef unsigned char undefined1;
typedef unsigned long long undefined8;
typedef unsigned char byte;
typedef _Bool bool;

/* Macros for Ghidra decompiled code */
#define CARRY4(a,b) ((unsigned int)(a) + (unsigned int)(b) < (unsigned int)(a))
#define CONCAT44(a,b) (((ulonglong)(a) << 32) | (unsigned int)(b))
#define LZCOUNT(x) __builtin_clz(x)
#define SBORROW4(a,b) ((int)(a) - (int)(b) < 0)
#define SCARRY4(a,b) ((int)(a) + (int)(b) < (int)(a))

/* External data declarations for Ghidra decompiled code */
char DAT_00012400[] = "Calling Conventions Test";
char DAT_000124c4[] = "CALL-L2-01: %d\n";
char DAT_000124ec[] = "CALL-L2-02: %d\n";
char DAT_00012510[] = "CALL-L2-03: %d\n";
char DAT_00012538[] = "test";
char DAT_00012540[] = "CALL-L2-04: %d\n";
char DAT_00012568[] = "CALL-L3-01: %d\n";
char DAT_00012594[] = "CALL-L3-02: %d\n";
char DAT_000125d4[] = "abc";
char DAT_000125d8[] = "def";
char DAT_000125dc[] = "ghi";
char DAT_000125f4[] = "Parameter Passing Test";
char DAT_00012700[] = "Return Values Test";
char DAT_00012720[] = "RET-L1-01: %d\n";
char DAT_0001273c[] = "RET-L1-02: %d\n";
char DAT_00012758[] = "RET-L1-03: %d\n";
char DAT_00012774[] = "RET-L1-04: %d\n";
char DAT_00012794[] = "RET-L1-05: %d\n";
char DAT_000127b0[] = "RET-L1-06: %d\n";
char DAT_000127d0[] = "RET-L1-07: %d\n";
char DAT_000127ec[] = "RET-L1-08: %d\n";
char DAT_00012808[] = "RET-L1-09: %d\n";
extern undefined8 handle1_1;
extern undefined8 handle2_0;
undefined8 handle1_1 = 0x12345678;
undefined8 handle2_0 = 0x87654321;
extern ulonglong __floatsidf(uint);
extern ulonglong __aeabi_l2d(uint,uint);
extern ulonglong __aeabi_dadd(int,int,int,int);
extern undefined4 __aeabi_d2iz(int,int);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_gcc_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 00010580 */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 000105b0 */

undefined4 call_cdecl(void)

{
 undefined4 uVar1;
 
 uVar1 = cdecl_func(5,10);
 return uVar1;
}



/* Function: stdcall_func @ 000105d0 */

int stdcall_func(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: call_stdcall @ 00010600 */

undefined4 call_stdcall(void)

{
 undefined4 uVar1;
 
 uVar1 = stdcall_func(5,10);
 return uVar1;
}



/* Function: fastcall_func @ 00010620 */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 0001065c */

undefined4 call_fastcall(void)

{
 undefined4 uVar1;
 
 uVar1 = fastcall_func(1,2,3);
 return uVar1;
}



/* Function: call_thiscall @ 00010680 */

undefined4 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 0001069c */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 000106ec */

undefined4 call_arm_aapcs(void)

{
 undefined4 uVar1;
 
 uVar1 = arm_aapcs_func(1,2,3,4,5);
 return uVar1;
}



/* Function: mips_func @ 00010724 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 0001076c */

undefined4 call_mips(void)

{
 undefined4 uVar1;
 
 uVar1 = mips_func(10,0x14,0x1e,0x28);
 return uVar1;
}



/* Function: amd64_sysv_func @ 00010794 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 000107ec */

undefined4 call_amd64_sysv(void)

{
 undefined4 uVar1;
 
 uVar1 = amd64_sysv_func(1,2,3,4,5,6);
 return uVar1;
}



/* Function: ms_x64_func @ 0001082c */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 0001087c */

undefined4 call_ms_x64(void)

{
 undefined4 uVar1;
 
 uVar1 = ms_x64_func(1,2,3,4,5);
 return uVar1;
}



/* Function: vectorcall_func @ 000108b4 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 000108fc */

undefined4 call_vectorcall(void)

{
 undefined4 uVar1;
 
 uVar1 = vectorcall_func(1,2,3,4);
 return uVar1;
}



/* Function: mixed_conventions_test @ 00010924 */

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



/* Function: varargs_func @ 000109a0 */

/* WARNING: Removing unreachable block (ram,0x00010a30) */

int varargs_func(int param_1, ...)

{
 int *local_28;
 int local_24;
 int local_20;
 int local_c [3];
 
 local_24 = 0;
 local_28 = local_c;
 for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
 local_24 = local_24 + *local_28;
 local_28 = local_28 + 1;
 }
 return local_24;
}



/* Function: func_no_args @ 00010a4c */

undefined4 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00010a68 */

int func_many_args(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: func_mixed_args @ 00010ad0 */

undefined4
func_mixed_args(int param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
 size_t sVar1;
 undefined4 uVar2;
 undefined8 uVar3;
 undefined8 uVar4;
 
 if (param_2 == (char *)0x0) {
 sVar1 = 0;
 }
 else {
 sVar1 = strlen(param_2);
 }
 uVar3 = __floatsidf(param_1 + sVar1);
 uVar3 = __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4);
 uVar4 = __aeabi_l2d(0,0);
 uVar3 = __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
 (int)((ulonglong)uVar4 >> 0x20));
 uVar2 = __aeabi_d2iz((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
 return uVar2;
}



/* Function: func_struct_byval @ 00010b80 */

int func_struct_byval(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 int local_2c;
 int local_28;
 int local_10 [4];
 
 local_10[0] = param_1;
 local_10[1] = param_2;
 local_10[2] = param_3;
 local_10[3] = param_4;
 local_28 = 0;
 for (local_2c = 0; local_2c < 0x10; local_2c = local_2c + 1) {
 local_28 = local_28 + local_10[local_2c * 2];
 }
 return local_28;
}



/* Function: func_struct_byptr @ 00010c10 */

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



/* Function: test_calling_conventions @ 00010c58 */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 int iVar2;
 undefined4 local_130;
 undefined4 local_12c;
 undefined4 local_128;
 undefined4 local_124;
 int local_c0;
 undefined4 local_bc;
 undefined4 local_b8;
 undefined4 local_b4;
 undefined *local_b0;
 undefined4 local_ac;
 undefined4 local_a8;
 undefined4 local_a4;
 undefined4 local_a0;
 undefined4 uStack_9c;
 int local_98 [4];
 undefined1 auStack_88 [116];
 int local_14;
 
 local_14 = 0;
 puts(&DAT_00012400);
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
 local_12c = 5;
 local_130 = 4;
 local_bc = varargs_func(5,1,2,3);
 printf(&DAT_000124c4,local_bc);
 local_b8 = func_no_args();
 printf(&DAT_000124ec,local_b8);
 local_124 = 8;
 local_128 = 7;
 local_12c = 6;
 local_130 = 5;
 local_b4 = func_many_args(1,2,3,4);
 printf(&DAT_00012510,local_b4);
 local_b0 = &DAT_00012538;
 local_130 = 100;
 local_12c = 0;
 local_ac = func_mixed_args(10,&DAT_00012538,0x51eb851f,0x40091eb8);
 printf(&DAT_00012540,local_ac);
 for (local_c0 = 0; local_c0 < 0x10; local_c0 = local_c0 + 1) {
 local_98[local_c0 * 2] = local_c0 + 1;
 local_98[local_c0 * 2 + 1] = local_c0 + 1 >> 0x1f;
 }
 memcpy(&local_130,auStack_88,0x70);
 local_a8 = func_struct_byval(local_98[0],local_98[1],local_98[2],local_98[3]);
 printf(&DAT_00012568,local_a8);
 local_a0 = 5;
 uStack_9c = 10;
 local_a4 = func_struct_byptr(&local_a0);
 iVar2 = printf(&DAT_00012594,local_a4);
 if (local_14 != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar2);
 }
 return;
}



/* Function: param_by_value_int @ 00010f34 */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 00010f64 */

int call_by_value_int(void)

{
 int iVar1;
 
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 00010f9c */

/* WARNING: Removing unreachable block (ram,0x00010fd4) */

undefined1 param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00010fec */

int call_by_value_ptr(void)

{
 int local_18;
 int *local_14;
 int local_10;
 int local_c;
 
 local_c = 0;
 local_18 = 5;
 local_14 = &local_18;
 local_10 = param_by_value_ptr(local_14);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(local_10,local_c,0);
 }
 return local_18 + local_10;
}



/* Function: param_array_decay @ 0001105c */

undefined4 param_array_decay(undefined1 *param_1,int param_2)

{
 return 4;
}



/* Function: call_array_decay @ 00011084 */

undefined4 call_array_decay(void)

{
 undefined4 uVar1;
 undefined1 auStack_34 [40];
 int local_c;
 
 local_c = 0;
 memset(auStack_34,0,0x28);
 uVar1 = param_array_decay(auStack_34,10);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar1,local_c,0);
 }
 return uVar1;
}



/* Function: param_string @ 000110f4 */

int param_string(byte *param_1)

{
 return (uint)*param_1 + (uint)param_1[1];
}



/* Function: call_string_param @ 00011130 */

undefined4 call_string_param(void)

{
 undefined4 uVar1;
 
 uVar1 = param_string("Hello");
 return uVar1;
}



/* Function: param_ptr_array @ 00011150 */

int param_ptr_array(int param_1,int param_2)

{
 undefined4 local_10;
 undefined4 local_c;
 
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 + (uint)**(byte **)(param_1 + local_c * 4);
 }
 return local_10;
}



/* Function: call_ptr_array @ 000111d0 */

undefined4 call_ptr_array(void)

{
 undefined4 uVar1;
 undefined *puStack_18;
 undefined *puStack_14;
 undefined *puStack_10;
 int local_c;
 
 local_c = 0;
 puStack_18 = &DAT_000125d4;
 puStack_14 = &DAT_000125d8;
 puStack_10 = &DAT_000125dc;
 uVar1 = param_ptr_array(&puStack_18,3);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar1,local_c,0);
 }
 return uVar1;
}



/* Function: param_varargs @ 00011240 */

/* WARNING: Removing unreachable block (ram,0x000112d0) */

int param_varargs(int param_1, ...)

{
 int *local_28;
 int local_24;
 int local_20;
 int local_c [3];
 
 local_24 = 0;
 local_28 = local_c;
 for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
 local_24 = local_24 + *local_28;
 local_28 = local_28 + 1;
 }
 return local_24;
}



/* Function: call_varargs_param @ 000112ec */

undefined4 call_varargs_param(void)

{
 undefined4 uVar1;
 
 uVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return uVar1;
}



/* Function: param_func_ptr @ 00011324 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: callback_func @ 00011358 */

int callback_func(int param_1)

{
 return param_1 << 1;
}



/* Function: call_func_ptr_param @ 00011380 */

undefined4 call_func_ptr_param(void)

{
 undefined4 uVar1;
 
 uVar1 = param_func_ptr(callback_func,5);
 return uVar1;
}



/* Function: param_double_ptr @ 000113a4 */

undefined4 param_double_ptr(int *param_1,undefined4 param_2)

{
 undefined4 uVar1;
 
 if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}



/* Function: call_double_ptr @ 0001140c */

int call_double_ptr(void)

{
 int local_18;
 int *local_14;
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
 local_18 = 10;
 local_14 = &local_18;
 local_10 = param_double_ptr(&local_14,0x14);
 if (local_c == 0) {
 return (uint)(local_14 == (int *)0x0) + local_18;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(local_10,local_c,0);
}



/* Function: param_complex_cast @ 00011498 */

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



/* Function: call_complex_cast @ 0001151c */

undefined4 call_complex_cast(void)

{
 undefined4 uVar1;
 undefined4 local_18;
 undefined4 local_14;
 undefined4 uStack_10;
 int local_c;
 
 local_c = 0;
 local_18 = 0x12345678;
 local_14 = 100;
 uStack_10 = 200;
 param_complex_cast(&local_14,1);
 uVar1 = param_complex_cast(&local_18,0);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar1,local_c,0);
 }
 return uVar1;
}



/* Function: param_struct_byval @ 000115a8 */

int param_struct_byval(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6
,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,int param_13
,int param_14,int param_15,int param_16)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8 + 
 param_9 + param_10 + param_11 + param_12 + param_13 + param_14 + param_15 + param_16;
}



/* Function: call_struct_byval @ 000115dc */

undefined4 call_struct_byval(void)

{
 undefined4 uVar1;
 int local_50;
 int local_4c [16];
 int local_c;
 
 local_c = 0;
 for (local_50 = 0; local_50 < 0x10; local_50 = local_50 + 1) {
 local_4c[local_50] = local_50;
 }
 uVar1 = param_struct_byval(local_4c[0],local_4c[1],local_4c[2],local_4c[3],local_4c[4],local_4c[5]
 ,local_4c[6],local_4c[7],local_4c[8],local_4c[9],local_4c[10],
 local_4c[0xb],local_4c[0xc],local_4c[0xd],local_4c[0xe],local_4c[0xf]);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar1,local_c,0);
 }
 return uVar1;
}



/* Function: param_order_dep @ 00011690 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 000116c0 */

undefined4 call_order_dep(void)

{
 undefined4 uVar1;
 
 uVar1 = param_order_dep(2,2);
 return uVar1;
}



/* Function: test_parameter_passing @ 00011708 */

int test_parameter_passing(void)

{
 undefined4 uVar1;
 int iVar2;
 
 puts(&DAT_000125f4);
 uVar1 = call_by_value_int();
 printf("PARAM-L1-01: %d\n",uVar1);
 uVar1 = call_by_value_ptr();
 printf("PARAM-L1-02: %d\n",uVar1);
 uVar1 = call_array_decay();
 printf("PARAM-L2-01: %d\n",uVar1);
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
 iVar2 = printf("PARAM-L3-05: %d\n",uVar1);
 return iVar2;
}



/* Function: ret_basic_type @ 0001182c */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00011854 */

undefined4 call_ret_basic(void)

{
 undefined4 uVar1;
 
 uVar1 = ret_basic_type(0x15);
 return uVar1;
}



/* Function: ret_pointer @ 00011884 */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 000118ac */

undefined4 call_ret_pointer(void)

{
 undefined4 *puVar1;
 undefined4 local_18;
 undefined4 uStack_14;
 undefined4 uStack_10;
 int local_c;
 
 local_c = 0;
 local_18 = 10;
 uStack_14 = 0x14;
 uStack_10 = 0x1e;
 puVar1 = (undefined4 *)ret_pointer(&local_18);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(puVar1,local_c,0);
 }
 return *puVar1;
}



/* Function: ret_small_struct @ 00011920 */

undefined4 * ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return param_1;
}



/* Function: call_ret_small_struct @ 0001196c */

int call_ret_small_struct(void)

{
 undefined4 uVar1;
 int local_14;
 int local_10;
 int local_c;
 
 local_c = 0;
 uVar1 = ret_small_struct(&local_14,3,4);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar1,local_c,0);
 }
 local_10 = (int)uVar1;
 return local_14 + local_10;
}



/* Function: ret_large_struct @ 000119d4 */

/* WARNING: Removing unreachable block (ram,0x00011a80) */

int * ret_large_struct(int *param_1,int param_2)

{
 int local_50;
 int local_4c [17];
 
 for (local_50 = 0; local_50 < 0x10; local_50 = local_50 + 1) {
 local_4c[local_50] = param_2 + local_50;
 }
 *param_1 = local_4c[0];
 param_1[1] = local_4c[1];
 param_1[2] = local_4c[2];
 param_1[3] = local_4c[3];
 param_1[4] = local_4c[4];
 param_1[5] = local_4c[5];
 param_1[6] = local_4c[6];
 param_1[7] = local_4c[7];
 param_1[8] = local_4c[8];
 param_1[9] = local_4c[9];
 param_1[10] = local_4c[10];
 param_1[0xb] = local_4c[0xb];
 param_1[0xc] = local_4c[0xc];
 param_1[0xd] = local_4c[0xd];
 param_1[0xe] = local_4c[0xe];
 param_1[0xf] = local_4c[0xf];
 return param_1;
}



/* Function: call_ret_large_struct @ 00011a94 */

int call_ret_large_struct(void)

{
 undefined4 uVar1;
 int local_4c [15];
 int local_10;
 int local_c;
 
 local_c = 0;
 uVar1 = ret_large_struct(local_4c,100);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar1,local_c,0);
 }
 local_10 = (int)uVar1;
 return local_4c[0] + local_10;
}



/* Function: func_a @ 00011af8 */

int func_a(int param_1)

{
 return param_1 + 10;
}



/* Function: func_b @ 00011b20 */

int func_b(int param_1)

{
 return param_1 << 1;
}



/* Function: ret_func_ptr @ 00011b48 */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 else {
 pcVar1 = func_b;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00011b88 */

undefined4 call_ret_func_ptr(void)

{
 code *pcVar1;
 undefined4 uVar2;
 
 pcVar1 = (code *)ret_func_ptr(1);
 uVar2 = (*pcVar1)(5);
 return uVar2;
}



/* Function: ret_opaque_handle @ 00011bbc */

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



/* Function: call_ret_opaque @ 00011bfc */

undefined4 call_ret_opaque(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)ret_opaque_handle(0);
 return *puVar1;
}



/* Function: ret_complex_expr @ 00011c28 */

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



/* Function: call_ret_complex_expr @ 00011c74 */

int call_ret_complex_expr(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = ret_complex_expr(5,3,10);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar1 + iVar2;
}



/* Function: ret_multi_branch @ 00011cc0 */

undefined4 ret_multi_branch(int param_1)

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



/* Function: call_ret_multi_branch @ 00011d30 */

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



/* Function: ret_void @ 00011d9c */

int ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return param_1;
}



/* Function: call_ret_void @ 00011dd8 */

undefined4 call_ret_void(void)

{
 undefined4 uVar1;
 undefined4 local_10;
 int local_c;
 
 local_c = 0;
 uVar1 = ret_void(7,&local_10);
 if (local_c != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(uVar1,local_c,0);
 }
 return local_10;
}



/* Function: test_return_values @ 00011e34 */

int test_return_values(void)

{
 undefined4 uVar1;
 int iVar2;
 
 puts(&DAT_00012700);
 uVar1 = call_ret_basic();
 printf(&DAT_00012720,uVar1);
 uVar1 = call_ret_pointer();
 printf(&DAT_0001273c,uVar1);
 uVar1 = call_ret_small_struct();
 printf(&DAT_00012758,uVar1);
 uVar1 = call_ret_large_struct();
 printf(&DAT_00012774,uVar1);
 uVar1 = call_ret_func_ptr();
 printf(&DAT_00012794,uVar1);
 uVar1 = call_ret_opaque();
 printf(&DAT_000127b0,uVar1);
 uVar1 = call_ret_complex_expr();
 printf(&DAT_000127d0,uVar1);
 uVar1 = call_ret_multi_branch();
 printf(&DAT_000127ec,uVar1);
 uVar1 = call_ret_void();
 iVar2 = printf(&DAT_00012808,uVar1);
 return iVar2;
}



/* Function: main @ 00011f28 */

undefined4 main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}












/* CRT stub function __aeabi_dadd removed by preprocessor */

























/* CRT stub function __aeabi_d2iz removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 87 */
