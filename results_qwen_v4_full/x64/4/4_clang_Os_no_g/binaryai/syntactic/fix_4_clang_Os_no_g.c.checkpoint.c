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
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

// Decompiled by BinaryAI
// SHA256: 6035741286eb1d77d5e417bd17a8ff519f86a95a7ca5ecfe8cc7bf7a75eeddda

#include <stdio.h>
#include <string.h>

// External function declarations
extern void __gmon_start__(void);
extern int __libc_start_main(void *main, int argc, void *ubp_av, void *init, void *fini, void *rtld_fini, void *stack_end);



// DAT_ variable definitions
char DAT_001023ca[] = "Calling Conventions Test";
char DAT_00102120[] = "VARARGS-L1-01: %d\n";
char DAT_00102148[] = "STRUCT-BYVAL-L1-01: %d\n";
char DAT_0010216a[] = "STRUCT-BYPTR-L1-01: %d\n";
char DAT_00102191[] = "MIXED-ARGS-L1-01: %d\n";
char DAT_001021b9[] = "STRUCT-BYVAL-L2-01: %d\n";
char DAT_001021e5[] = "STRUCT-BYPTR-L1-02: %d\n";
char DAT_001023eb[] = "Parameter Passing Test";
char DAT_001022cd[] = "RET-L1-01: %d\n";
char DAT_001022e9[] = "RET-L1-02: %d\n";
char DAT_00102305[] = "RET-L1-03: %d\n";
char DAT_00102320[] = "RET-L1-04: %d\n";
char DAT_0010233d[] = "RET-L1-05: %d\n";
char DAT_00102359[] = "RET-L1-06: %lu\n";
char DAT_00102376[] = "RET-L1-07: %d\n";
char DAT_00102392[] = "RET-L1-08: %d\n";
char DAT_001023ae[] = "RET-L1-09: %d\n";
char DAT_0010240c[] = "Return Values Test";



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 ((void (*)(void))0x0)();
 return;
}









// Global variable definition
static int completed_0 = 0;
static void *__dso_handle = (void *)0;
unsigned long ret_opaque_handle_handle1 = 0;
unsigned long ret_opaque_handle_handle2 = 0;


// Function: cdecl_func @ 0x10115c
int cdecl_func(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_cdecl @ 0x101160
unsigned long long call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x101166
int stdcall_func(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: call_stdcall @ 0x10116c
unsigned long long call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x101172
int fastcall_func(int param_1,int param_2,int param_3)
{
 return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x101178
unsigned long long call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x10117e
unsigned long long call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x101184
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x10118f
unsigned long long call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x101195
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x10119d
unsigned long long call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x1011a3
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x1011b1
unsigned long long call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x1011b7
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x1011c2
unsigned long long call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x1011c8
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x1011d0
unsigned long long call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x1011d6
unsigned long long mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func @ 0x1011dc
int varargs_func(int param_1, ...)
{
 int iVar1;
 unsigned long uVar2;
 int *piVar3;
 uint local_d8;
 int *local_d0;
 int local_b8 [46];
 local_d0 = (int *)0x0;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 local_d8 = 8;
 do {
 if (local_d8 < 0x29) {
 uVar2 = (unsigned long)local_d8;
 local_d8 = local_d8 + 8;
 piVar3 = (int *)((long)local_b8 + uVar2);
 }
 else {
 piVar3 = local_d0;
 local_d0 = local_d0 + 2;
 }
 iVar1 = iVar1 + *piVar3;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 return iVar1;
}

// Function: func_no_args @ 0x101281
unsigned long long func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x101287
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x10129d
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
 return (int)((double)param_4 + (double)(iVar1 + param_2) + param_1);
}

// Function: func_struct_byval @ 0x1012de
long func_struct_byval(void)
{
 long lVar1;
 long lVar2;
 long lVar3;
 long local_b8 [16];
 lVar2 = 0;
 lVar3 = 0;
 lVar1 = 0;
 do {
 lVar2 = lVar2 + local_b8[lVar1];
 lVar3 = lVar3 + local_b8[lVar1 + 1];
 lVar1 = lVar1 + 2;
 } while (lVar1 != 0x10);
 return lVar3 + lVar2;
}

// Function: func_struct_byptr @ 0x10130b
int func_struct_byptr(int *param_1)
{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}

// Function: test_calling_conventions @ 0x10131d
void test_calling_conventions(void)
{
 uint uVar1;
 long lVar2;
 long lVar3;
 long lVar4;
 char auVar5 [16];
 long local_88 [16];
 puts(&DAT_001023ca);
 lVar2 = 0;
 printf("CALL-L1-01: %d\n",0xf);
 printf("CALL-L1-02: %d\n",0x32);
 printf("CALL-L1-03: %d\n",6);
 printf("CALL-L1-04: %d\n",0xf);
 printf("CALL-L1-05: %d\n",0xf);
 printf("CALL-L1-06: %d\n",100);
 printf("CALL-L1-07: %d\n",0x15);
 printf("CALL-L1-08: %d\n",0xf);
 printf("CALL-L1-09: %d\n",10);
 printf("CALL-L1-10: %d\n",0x21);
 uVar1 = varargs_func(5,1,2,3,4,5);
 printf(DAT_00102120,(unsigned long)uVar1);
 printf(DAT_00102148,0x2a);
 printf(DAT_0010216a,0x24);
 printf(DAT_00102191,0x75);
 lVar3 = 0;
 lVar4 = 1;
  do {
   local_88[lVar2] = lVar3 + 1;
   local_88[lVar2 + 1] = lVar4 - (-1);
 lVar2 = lVar2 + 2;
 lVar3 = lVar3 + 2;
 lVar4 = lVar4 + 2;
 } while (lVar2 != 0x10);
 lVar3 = 0;
 lVar4 = 0;
 lVar2 = 0;
 do {
 lVar3 = lVar3 + local_88[lVar2];
 lVar4 = lVar4 + local_88[lVar2 + 1];
 lVar2 = lVar2 + 2;
 } while (lVar2 != 0x10);
 printf(DAT_001021b9,lVar4 + lVar3);
 printf(DAT_001021e5,0x32);
 return;
}

// Function: param_by_value_int @ 0x1014e0
int param_by_value_int(int param_1)
{
 return param_1 * 2;
}

// Function: call_by_value_int @ 0x1014e4
unsigned long long call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x1014ea
unsigned long long param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x1014f2
unsigned long long call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x1014f8
unsigned long long param_array_decay(void)
{
 return 8;
}

// Function: call_array_decay @ 0x1014fe
unsigned long long call_array_decay(void)
{
 return 8;
}

// Function: param_string @ 0x101504
int param_string(char *param_1)
{
 return (int)param_1[1] + (int)*param_1;
}

// Function: call_string_param @ 0x10150e
unsigned long long call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x101514
int param_ptr_array(long param_1,uint param_2)
{
 int iVar1;
 unsigned long uVar2;
 if (0 < (int)param_2) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + **(char **)(param_1 + uVar2 * 8);
 uVar2 = uVar2 + 1;
 } while (param_2 != uVar2);
 return iVar1;
 }
 return 0;
}

// Function: call_ptr_array @ 0x101533
unsigned long long call_ptr_array(void)
{
 return 300;
}

// Function: param_varargs @ 0x101539
int param_varargs(int param_1, ...)
{
 int iVar1;
 unsigned long uVar2;
 int *piVar3;
 uint local_d8;
 int *local_d0;
 int local_b8 [46];
 local_d0 = (int *)0x0;
 if (param_1 < 1) {
 iVar1 = 0;
 }
 else {
 iVar1 = 0;
 local_d8 = 8;
 do {
 if (local_d8 < 0x29) {
 uVar2 = (unsigned long)local_d8;
 local_d8 = local_d8 + 8;
 piVar3 = (int *)((long)local_b8 + uVar2);
 }
 else {
 piVar3 = local_d0;
 local_d0 = local_d0 + 2;
 }
 iVar1 = iVar1 + *piVar3;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 return iVar1;
}

// Function: call_varargs_param @ 0x1015de
void call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}

// Function: param_func_ptr @ 0x1015ff
int param_func_ptr(void *param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = ((int (*)(unsigned int))param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x10160c
unsigned long long call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x101612
unsigned long long param_double_ptr(long *param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (long *)0x0) && ((unsigned int *)*param_1 != (unsigned int *)0x0)) {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}

// Function: call_double_ptr @ 0x101633
unsigned long long call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x101639
int param_complex_cast(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 == 1) {
 iVar1 = param_1[1] + *param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 0) {
 return *param_1;
 }
 }
 return iVar1;
}

// Function: call_complex_cast @ 0x101650
unsigned long long call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x101656
int param_struct_byval(void)
{
 int param_7;
 unsigned long long in_stack_00000040;
 return (int)(in_stack_00000040 >> 32) + param_7;
}

// Function: call_struct_byval @ 0x10165f
unsigned int call_struct_byval(void)
{
 return 0xf;
}

// Function: param_order_dep @ 0x101680
int param_order_dep(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_order_dep @ 0x101684
unsigned long long call_order_dep(void)
{
 return 3;
}

// Function: test_parameter_passing @ 0x10168a
void test_parameter_passing(void)
{
 uint uVar1;
 puts(&DAT_001023eb);
 printf("PARAM-L1-01: %d\n",0xf);
 printf("PARAM-L1-02: %d\n",0xb);
 printf("PARAM-L2-01: %d\n",8);
 printf("PARAM-L2-02: %d\n",0xad);
 printf("PARAM-L2-03: %d\n",300);
 uVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 printf("PARAM-L2-04: %d\n",(unsigned long)uVar1);
 printf("PARAM-L3-01: %d\n",0x14);
 printf("PARAM-L3-02: %d\n",0x15);
 printf("PARAM-L3-03: %d\n",0x12345678);
 printf("PARAM-L3-04: %d\n",0xf);
 printf("PARAM-L3-05: %d\n",3);
 return;
}

// Function: ret_basic_type @ 0x1017a6
int ret_basic_type(int param_1)
{
 return param_1 * 2;
}

// Function: call_ret_basic @ 0x1017aa
unsigned long long call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x1017b0
long ret_pointer(long param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x1017b5
unsigned long long call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x1017bb
unsigned long ret_small_struct(uint param_1,long param_2)
{
 return (unsigned long)param_1 | param_2 << 0x20;
}

// Function: call_ret_small_struct @ 0x1017c5
unsigned long long call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x1017cb
void ret_large_struct(long param_1,int param_2)
{
 int *piVar1;
 long lVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 iVar3 = 0;
 iVar4 = 1;
 iVar5 = 2;
 iVar6 = 3;
 lVar2 = 0;
 do {
 piVar1 = (int *)(param_1 + lVar2 * 4);
 *piVar1 = iVar3 + param_2;
 piVar1[1] = iVar4 + param_2;
 piVar1[2] = iVar5 + param_2;
 piVar1[3] = iVar6 + param_2;
 lVar2 = lVar2 + 4;
 iVar3 = iVar3 + 4;
 iVar4 = iVar4 + 4;
 iVar5 = iVar5 + 4;
 iVar6 = iVar6 + 4;
 } while (lVar2 != 0x10);
 return;
}

// Function: call_ret_large_struct @ 0x101805
unsigned int call_ret_large_struct(void)
{
 return 0xd7;
}

// Function: func_a @ 0x101826
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x10182a
int func_b(int param_1)
{
 return param_1 * 2;
}

// Function: ret_func_ptr @ 0x10182e
void *ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x101843
unsigned long long call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x101849
unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = &ret_opaque_handle_handle2;
 if (param_1 == 0) {
 puVar1 = (unsigned long long *)&ret_opaque_handle_handle1;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x10185e
unsigned int call_ret_opaque(void)
{
 return ret_opaque_handle_handle1;
}

// Function: ret_complex_expr @ 0x101865
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x101871
unsigned long long call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x101877
int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x10188a
unsigned long long call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x101890
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x101896
unsigned long long call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x10189c
void test_return_values(void)
{
 puts(&DAT_0010240c);
 printf(DAT_001022cd,0x2a);
 printf(DAT_001022e9,0x14);
 printf(DAT_00102305,7);
 printf(DAT_00102320,0xd7);
 printf(DAT_0010233d,10);
 printf(DAT_00102359,(unsigned long)ret_opaque_handle_handle1);
 printf(DAT_00102376,0x28);
 printf(DAT_00102392,0x3c);
 printf(DAT_001023ae,0x15);
 return;
}

// Function: main @ 0x101975
unsigned long long main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


