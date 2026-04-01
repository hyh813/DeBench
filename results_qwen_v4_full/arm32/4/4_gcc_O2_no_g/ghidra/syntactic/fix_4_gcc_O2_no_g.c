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
typedef unsigned long long undefined8;
typedef unsigned int uint;
typedef unsigned long long ulonglong;
typedef int (*code)(int);
typedef unsigned char byte;
typedef _Bool bool;

/* External function declarations */
extern int puts(const char *);
extern int __printf_chk(int, const char *, ...);
extern void *memcpy(void *, const void *, size_t);
extern size_t strlen(const char *);
extern void __stack_chk_fail(void);
extern int __aeabi_dadd(int, int, int, int);
extern undefined8 __aeabi_l2d(int, int);
extern int __aeabi_d2iz(void);
extern undefined8 __floatsidf(int);


/* Helper function implementations */
static inline ulonglong CONCAT44(uint high, uint low) {
    return ((ulonglong)high << 32) | low;
}

static inline uint CARRY4(uint a, uint b) {
    return (a + b) < a;
}

static inline int SBORROW4(int a, int b) {
    return (a - b) > a;
}

static inline int SCARRY4(int a, int b) {
    return (a < 0) && (b < 0) && ((a + b) >= 0);
}

static inline int LZCOUNT(uint x) {
    if (x == 0) return 32;
    int count = 0;
    while ((x & 0x80000000) == 0) {
        x <<= 1;
        count++;
    }
    return count;
}

/* Global variable declarations */
undefined4 handle1_1 = 0;
undefined4 handle2_0 = 0;
int stack0x00000070 = 0;
extern char DAT_000114cc[];
extern char DAT_00011590[];
extern char DAT_000115b8[];
extern char DAT_000115dc[];
extern char DAT_00011604[];
extern char DAT_0001162c[];
extern char DAT_00011658[];
extern char DAT_00011688[];
extern char DAT_00011788[];
extern char DAT_000117a8[];
extern char DAT_000117c4[];
extern char DAT_000117e0[];
extern char DAT_000117fc[];
extern char DAT_0001181c[];
extern char DAT_00011838[];
extern char DAT_00011858[];
extern char DAT_00011874[];
extern char DAT_00011890[];

/* Data definitions */
char DAT_000114cc[] = "=== Calling Conventions Test ===";
char DAT_00011590[] = "VARARGS-L1-01: %d\n";
char DAT_000115b8[] = "VARARGS-L1-02: %d\n";
char DAT_000115dc[] = "VARARGS-L1-03: %d\n";
char DAT_00011604[] = "VARARGS-L1-04: %d\n";
char DAT_0001162c[] = "VARARGS-L2-01: %d\n";
char DAT_00011658[] = "VARARGS-L2-02: %d\n";
char DAT_00011688[] = "=== Parameter Passing Test ===";
char DAT_00011788[] = "=== Return Values Test ===";
char DAT_000117a8[] = "RET-L1-01: %d\n";
char DAT_000117c4[] = "RET-L1-02: %d\n";
char DAT_000117e0[] = "RET-L1-03: %d\n";
char DAT_000117fc[] = "RET-L1-04: %d\n";
char DAT_0001181c[] = "RET-L1-05: %d\n";
char DAT_00011838[] = "RET-L1-06: %d\n";
char DAT_00011858[] = "RET-L1-07: %d\n";
char DAT_00011874[] = "RET-L1-08: %d\n";
char DAT_00011890[] = "RET-L1-09: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/4/4_gcc_O2_no_g
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



/* Function: cdecl_func @ 0001057c */

int cdecl_func(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_cdecl @ 00010584 */

undefined4 call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 0001058c */

int stdcall_func(int param_1,int param_2)

{
 return param_2 * param_1;
}



/* Function: call_stdcall @ 00010594 */

undefined4 call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 0001059c */

int fastcall_func(int param_1,int param_2,int param_3)

{
 return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 000105a8 */

undefined4 call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 000105b0 */

undefined4 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 000105b8 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 000105d0 */

undefined4 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 000105d8 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 000105e8 */

undefined4 call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 000105f0 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00010610 */

undefined4 call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00010618 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00010630 */

undefined4 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00010638 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00010648 */

undefined4 call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00010650 */

undefined4 mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 00010658 */

/* WARNING: Removing unreachable block (ram,0x000106d4) */

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



/* Function: func_no_args @ 000106dc */

undefined4 func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 000106e4 */

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



/* Function: func_struct_byval @ 00010770 */

int func_struct_byval(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int local_10 [4];
 
 piVar3 = local_10;
 local_10[0] = param_1;
 local_10[1] = param_2;
 local_10[2] = param_3;
 local_10[3] = param_4;
 iVar1 = 0;
 do {
 iVar2 = *piVar3;
 piVar3 = piVar3 + 2;
 iVar1 = iVar2 + iVar1;
 } while (piVar3 != (int *)&stack0x00000070);
 return iVar1;
}



/* Function: func_struct_byptr @ 000107a4 */

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



/* Function: test_calling_conventions @ 000107bc */

void test_calling_conventions(void)

{
 undefined4 uVar1;
 uint uVar2;
 uint *puVar3;
 int iVar4;
 uint uVar5;
 int iVar6;
 uint uVar7;
 int *piVar8;
 uint local_110 [32];
 int local_90 [32];
 int iStack_10;
 int local_c;
 
 local_c = 0;
 puts(&DAT_000114cc);
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
 varargs_func(5);
 __printf_chk(1,&DAT_00011590,0);
 __printf_chk(1,&DAT_000115b8,0x2a);
 __printf_chk(1,&DAT_000115dc,0x24);
 __printf_chk(1,&DAT_00011604,0x75);
 uVar5 = 0;
 puVar3 = local_110;
 uVar7 = 1;
 do {
 uVar2 = uVar7 + 1;
 *puVar3 = uVar7;
 puVar3[1] = uVar5;
 uVar5 = uVar5 + (0xfffffffe < uVar7);
 puVar3 = puVar3 + 2;
 uVar7 = uVar2;
 } while (uVar2 != 0x11 || uVar5 != 0);
 memcpy(local_90,local_110,0x80);
 iVar6 = 0;
 piVar8 = local_90;
 do {
 iVar4 = *piVar8;
 piVar8 = piVar8 + 2;
 iVar6 = iVar4 + iVar6;
 } while (&iStack_10 != piVar8);
 __printf_chk(1,&DAT_0001162c,iVar6);
 if (local_c == 0) {
 __printf_chk(1,&DAT_00011658,0x32);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_by_value_int @ 000109c4 */

int param_by_value_int(int param_1)

{
 return param_1 << 1;
}



/* Function: call_by_value_int @ 000109cc */

undefined4 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 000109d4 */

void param_by_value_ptr(int *param_1)

{
 *param_1 = *param_1 << 1;
 return;
}



/* Function: call_by_value_ptr @ 000109ec */

undefined4 call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 000109f4 */

undefined4 param_array_decay(void)

{
 return 4;
}



/* Function: call_array_decay @ 000109fc */

undefined4 call_array_decay(void)

{
 return 4;
}



/* Function: param_string @ 00010a04 */

int param_string(byte *param_1)

{
 return (uint)*param_1 + (uint)param_1[1];
}



/* Function: call_string_param @ 00010a14 */

undefined4 call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00010a1c */

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
 } while (puVar3 != puVar2);
 return iVar1;
}



/* Function: call_ptr_array @ 00010a4c */

undefined4 call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 00010a54 */

/* WARNING: Removing unreachable block (ram,0x00010ad0) */

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



/* Function: call_varargs_param @ 00010ad8 */

void call_varargs_param(void)

{
 param_varargs(4);
 return;
}



/* Function: param_func_ptr @ 00010b04 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
 int iVar1;
 
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00010b1c */

undefined4 call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00010b24 */

undefined4 param_double_ptr(undefined4 *param_1,undefined4 param_2)

{
 if ((param_1 != (undefined4 *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
 *(undefined4 *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}



/* Function: call_double_ptr @ 00010b54 */

undefined4 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 00010b5c */

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



/* Function: call_complex_cast @ 00010b80 */

undefined4 call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 00010b8c */

int param_struct_byval(int param_1)

{
 int in_stack_0000002c;
 
 return param_1 + in_stack_0000002c;
}



/* Function: call_struct_byval @ 00010ba8 */

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
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_order_dep @ 00010c0c */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 00010c14 */

undefined4 call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 00010c1c */

void test_parameter_passing(void)

{
 undefined4 uVar1;
 int *piVar2;
 int iVar3;
 int local_4c [15];
 int local_10;
 int local_c;
 
 local_c = 0;
 puts(&DAT_00011688);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",4);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 __printf_chk(1,"PARAM-L2-03: %d\n",300);
 param_varargs(4);
 __printf_chk(1,"PARAM-L2-04: %d\n",0);
 __printf_chk(1,"PARAM-L3-01: %d\n",0x14);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 iVar3 = 0;
 piVar2 = local_4c;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 1;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x10);
 __printf_chk(1,"PARAM-L3-04: %d\n",local_4c[0] + local_10);
 if (local_c == 0) {
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ret_basic_type @ 00010d84 */

int ret_basic_type(int param_1)

{
 return param_1 << 1;
}



/* Function: call_ret_basic @ 00010d8c */

undefined4 call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00010d94 */

int ret_pointer(int param_1)

{
 return param_1 + 4;
}



/* Function: call_ret_pointer @ 00010d9c */

undefined4 call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00010da4 */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}



/* Function: call_ret_small_struct @ 00010dac */

undefined4 call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00010db4 */

/* WARNING: Removing unreachable block (ram,0x00010e34) */

int * ret_large_struct(int *param_1,int param_2)

{
 int *piVar1;
 int local_4c [16];
 int local_c;
 int *piVar2;
 
 piVar1 = local_4c;
 do {
 piVar2 = piVar1 + 1;
 *piVar1 = param_2;
 param_2 = param_2 + 1;
 piVar1 = piVar2;
 } while (piVar2 != &local_c);
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



/* Function: call_ret_large_struct @ 00010e3c */

void call_ret_large_struct(undefined4 param_1,undefined4 param_2)

{
 int *piVar1;
 int iVar2;
 int local_4c [15];
 int local_10;
 int local_c;
 
 local_c = 0;
 iVar2 = 100;
 piVar1 = local_4c;
 do {
 *piVar1 = iVar2;
 iVar2 = iVar2 + 1;
 piVar1 = piVar1 + 1;
 } while (iVar2 != 0x74);
 if (local_c == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ret_func_ptr @ 00010ea0 */

code * ret_func_ptr(int param_1)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00010ec0 */

undefined4 call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00010ec8 */

undefined8 * ret_opaque_handle(int param_1)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00010ee4 */

undefined4 call_ret_opaque(void)

{
 return handle1_1;
}



/* Function: ret_complex_expr @ 00010ef4 */

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



/* Function: call_ret_complex_expr @ 00010f04 */

undefined4 call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00010f0c */

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



/* Function: call_ret_multi_branch @ 00010f24 */

undefined4 call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00010f2c */

void ret_void(int param_1,int *param_2)

{
 *param_2 = param_1 * 3;
 return;
}



/* Function: call_ret_void @ 00010f38 */

undefined4 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00010f40 */

void test_return_values(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00011788);
 __printf_chk(1,&DAT_000117a8,0x2a);
 __printf_chk(1,&DAT_000117c4,0x14);
 __printf_chk(1,&DAT_000117e0,7);
 call_ret_large_struct(0,0);
 __printf_chk(1,&DAT_000117fc,0);
 __printf_chk(1,&DAT_0001181c,10);
 __printf_chk(1,&DAT_00011838,handle1_1);
 __printf_chk(1,&DAT_00011858,0x28);
 __printf_chk(1,&DAT_00011874,0x3c);
 __printf_chk(1,&DAT_00011890,0x15);
 return;
}












/* CRT stub function __aeabi_dadd removed by preprocessor */

























/* CRT stub function __aeabi_d2iz removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 86 */
