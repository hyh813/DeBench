/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
typedef unsigned char uint8_t;
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))
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
typedef unsigned int uint;
typedef unsigned char byte;

// Global variables
char completed_0 = 0;
static void *__dso_handle = 0;
unsigned int ret_opaque_handle_handle1 = 0;
unsigned int ret_opaque_handle_handle2 = 0;
unsigned long stack0x00000008 = 0;

// Forward declarations
static int test_calling_conventions(void);
static int test_parameter_passing(void);
static int test_return_values(void);
int main(void);

// Data strings for printf/puts
char DAT_00101794[] = "=== Return Value Tests ===";
char DAT_00101655[] = "RET-L1-01: %d\n";
char DAT_00101671[] = "RET-L1-02: %d\n";
char DAT_0010168d[] = "RET-L1-03: %d\n";
char DAT_001016a8[] = "RET-L1-04: %d\n";
char DAT_001016c5[] = "RET-L1-05: %d\n";
char DAT_001016e1[] = "RET-L1-06: %d\n";
char DAT_001016fe[] = "RET-L1-07: %d\n";
char DAT_0010171a[] = "RET-L1-08: %d\n";
char DAT_00101736[] = "RET-L1-09: %d\n";
char DAT_00101752[] = "=== Calling Convention Tests ===";
char DAT_001014a8[] = "CALL-L1-11: %d\n";
char DAT_001014d0[] = "CALL-L1-12: %d\n";
char DAT_001014f2[] = "CALL-L1-13: %d\n";
char DAT_00101519[] = "CALL-L1-14: %d\n";
char DAT_00101541[] = "CALL-L1-15: %d\n";
char DAT_0010156d[] = "CALL-L1-16: %d\n";
char DAT_00101773[] = "=== Parameter Passing Tests ===";

// Decompiled by BinaryAI
// SHA256: 976f820ca78a5d5517f79fa63580382d162a7235eac42c7b92b8128c0b475901



















// Function: cdecl_func @ 0x100814
int cdecl_func(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_cdecl @ 0x10081c
unsigned long long call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x100824
int stdcall_func(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: call_stdcall @ 0x10082c
unsigned long long call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x100834
int fastcall_func(int param_1,int param_2,int param_3)
{
 return param_2 + param_1 + param_3;
}

// Function: call_fastcall @ 0x100840
unsigned long long call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x100848
unsigned long long call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x100850
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x100864
unsigned long long call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x10086c
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_mips @ 0x10087c
unsigned long long call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x100884
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x10089c
unsigned long long call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x1008a4
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x1008b8
unsigned long long call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x1008c0
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x1008d0
unsigned long long call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x1008d8
unsigned long long mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func @ 0x1008e0
int varargs_func(int param_1, ...)
{
 int iVar2;
 int arg;
 va_list args;
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 va_start(args, param_1);
 do {
 arg = va_arg(args, int);
 iVar2 = arg + iVar2;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 va_end(args);
 }
 return iVar2;
}

// Function: func_no_args @ 0x100a78
unsigned long long func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x100a80
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x100aa0
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
 return (int)((double)(iVar1 + param_2) + param_1 + (double)param_4);
}

// Function: func_struct_byval @ 0x100af8
int func_struct_byval(int *param_1)
{
 return param_1[0x1e] +
 param_1[0x1c] +
 param_1[0x1a] +
 param_1[0x18] +
 param_1[0x16] +
 param_1[0x14] +
 param_1[0x12] +
 param_1[0x10] +
 param_1[0xe] +
 param_1[0xc] + param_1[10] + param_1[8] + param_1[6] + param_1[4] + param_1[2] + *param_1;
}

// Function: func_struct_byptr @ 0x100b78
int func_struct_byptr(int *param_1)
{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}

// Function: test_calling_conventions @ 0x100b90
static int test_calling_conventions(void)
{
 int iVar1;
 unsigned long uVar2;
 puts(DAT_00101752);
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
 uVar2 = varargs_func(5,1,2,3,4,5);
 printf(DAT_001014a8,uVar2 & 0xffffffff);
 printf(DAT_001014d0,0x2a);
 printf(DAT_001014f2,0x24);
 printf(DAT_00101519,0x75);
 printf(DAT_00101541,0x88);
 iVar1 = printf(DAT_0010156d,0x32);
 return iVar1;
}

// Function: param_by_value_int @ 0x100cc4
int param_by_value_int(int param_1)
{
 return param_1 << 1;
}

// Function: call_by_value_int @ 0x100ccc
unsigned long long call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x100cd4
unsigned long long param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x100cec
unsigned long long call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x100cf4
unsigned long long param_array_decay(void)
{
 return 8;
}

// Function: call_array_decay @ 0x100cfc
unsigned long long call_array_decay(void)
{
 return 8;
}

// Function: param_string @ 0x100d04
int param_string(byte *param_1)
{
 return (uint)param_1[1] + (uint)*param_1;
}

// Function: call_string_param @ 0x100d14
unsigned long long call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x100d1c
int param_ptr_array(long param_1,uint param_2)
{
 byte **ppbVar1;
 int iVar2;
 int iVar3;
 unsigned long uVar4;
 long lVar5;
 unsigned long uVar6;
 byte **ppbVar7;
 unsigned long uVar8;
 byte *pbVar9;
 if ((int)param_2 < 1) {
 return 0;
 }
 uVar4 = (unsigned long)param_2;
 if (param_2 == 1) {
 uVar6 = 0;
 iVar2 = 0;
 }
 else {
 uVar6 = uVar4 & 0xfffffffe;
 iVar3 = 0;
 iVar2 = 0;
 ppbVar7 = (byte **)(param_1 + 8);
 uVar8 = uVar6;
 do {
 ppbVar1 = ppbVar7 + -1;
 pbVar9 = *ppbVar7;
 ppbVar7 = ppbVar7 + 2;
 uVar8 = uVar8 - 2;
 iVar3 = iVar3 + (uint)**ppbVar1;
 iVar2 = iVar2 + (uint)*pbVar9;
 } while (uVar8 != 0);
 iVar2 = iVar2 + iVar3;
 if (uVar6 == uVar4) {
 return iVar2;
 }
 }
 lVar5 = uVar4 - uVar6;
 ppbVar7 = (byte **)(param_1 + uVar6 * 8);
 do {
 lVar5 = lVar5 + -1;
 iVar2 = iVar2 + (uint)**ppbVar7;
 ppbVar7 = ppbVar7 + 1;
 } while (lVar5 != 0);
 return iVar2;
}

// Function: call_ptr_array @ 0x100da8
unsigned long long call_ptr_array(void)
{
 return 300;
}

// Function: param_varargs @ 0x100db0
int param_varargs(int param_1, ...)
{
 int iVar2;
 int arg;
 va_list args;
 if (param_1 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 va_start(args, param_1);
 do {
 arg = va_arg(args, int);
 iVar2 = arg + iVar2;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 va_end(args);
 }
 return iVar2;
}

// Function: call_varargs_param @ 0x100f48
void call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}

// Function: param_func_ptr @ 0x100f60
int param_func_ptr(void *param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = ((int (*)(unsigned int))param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x100f80
unsigned long long call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x100f88
unsigned long long param_double_ptr(unsigned long long *param_1,unsigned int param_2)
{
 if ((param_1 != (unsigned long long *)0x0) && ((unsigned int *)*param_1 != (unsigned int *)0x0)) {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}

// Function: call_double_ptr @ 0x100fb0
unsigned long long call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x100fb8
int param_complex_cast(int *param_1,int param_2)
{
 if (param_2 == 1) {
 return param_1[1] + *param_1;
 }
 if (param_2 == 0) {
 return *param_1;
 }
 return -1;
}

// Function: call_complex_cast @ 0x100fe0
unsigned long long call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x100fec
int param_struct_byval(int *param_1)
{
 return param_1[0xf] + *param_1;
}

// Function: call_struct_byval @ 0x100ffc
unsigned long long call_struct_byval(void)
{
 return 0xf;
}

// Function: param_order_dep @ 0x101004
int param_order_dep(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_order_dep @ 0x10100c
unsigned long long call_order_dep(void)
{
 return 3;
}

// Function: test_parameter_passing @ 0x101014
static int test_parameter_passing(void)
{
 int iVar1;
 unsigned long uVar2;
 puts(DAT_00101773);
 printf("PARAM-L1-01: %d\n",0xf);
 printf("PARAM-L1-02: %d\n",0xb);
 printf("PARAM-L2-01: %d\n",8);
 printf("PARAM-L2-02: %d\n",0xad);
 printf("PARAM-L2-03: %d\n",300);
 uVar2 = param_varargs(4,10,0x14,0x1e,0x28);
 printf("PARAM-L2-04: %d\n",uVar2 & 0xffffffff);
 printf("PARAM-L3-01: %d\n",0x14);
 printf("PARAM-L3-02: %d\n",0x15);
 printf("PARAM-L3-03: %d\n",0x12345678);
 printf("PARAM-L3-04: %d\n",0xf);
 iVar1 = printf("PARAM-L3-05: %d\n",3);
 return iVar1;
}

// Function: ret_basic_type @ 0x1010f8
int ret_basic_type(int param_1)
{
 return param_1 << 1;
}

// Function: call_ret_basic @ 0x101100
unsigned long long call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x101108
long ret_pointer(long param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x101110
unsigned long long call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x101118
unsigned long ret_small_struct(unsigned long param_1,long param_2)
{
 return param_1 & 0xffffffff | param_2 << 0x20;
}

// Function: call_ret_small_struct @ 0x101124
unsigned long long call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x10112c
void ret_large_struct(int *ret_ptr, int param_1)
{
 int *in_x8 = ret_ptr;
 *in_x8 = param_1;
 in_x8[0xf] = param_1 + 0xf;
 *(unsigned long *)(in_x8 + 3) = CONCAT44(param_1 + 4,param_1 + 3);
 *(unsigned long *)(in_x8 + 1) = CONCAT44(param_1 + 2,param_1 + 1);
 *(unsigned long *)(in_x8 + 7) = CONCAT44(param_1 + 8,param_1 + 7);
 *(unsigned long *)(in_x8 + 5) = CONCAT44(param_1 + 6,param_1 + 5);
 *(unsigned long *)(in_x8 + 0xb) = CONCAT44(param_1 + 0xc,param_1 + 0xb);
 *(unsigned long *)(in_x8 + 9) = CONCAT44(param_1 + 10,param_1 + 9);
 *(unsigned long *)(in_x8 + 0xd) = CONCAT44(param_1 + 0xe,param_1 + 0xd);
 return;
}

// Function: call_ret_large_struct @ 0x101184
unsigned long long call_ret_large_struct(void)
{
 return 0xd7;
}

// Function: func_a @ 0x10118c
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x101194
int func_b(int param_1)
{
 return param_1 << 1;
}

// Function: ret_func_ptr @ 0x10119c
void *ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_a;
 if (param_1 != 0) {
 pcVar1 = func_b;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x1011b8
unsigned long long call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x1011c0
unsigned long long *ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)(void *)&ret_opaque_handle_handle1;
 if (param_1 != 0) {
 puVar1 = (unsigned long long *)(void *)&ret_opaque_handle_handle2;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x1011d8
unsigned int call_ret_opaque(void)
{
 return ret_opaque_handle_handle1;
}

// Function: ret_complex_expr @ 0x1011e4
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 << 1;
 if (param_1 <= param_2) {
 iVar1 = param_3 + 10;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x1011f8
unsigned long long call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x101200
int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 10 + 10;
 if (2 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x101218
unsigned long long call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x101220
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x10122c
unsigned long long call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x101234
static int test_return_values(void)
{
 int iVar1;
 puts(DAT_00101794);
 printf(DAT_00101655,0x2a);
 printf(DAT_00101671,0x14);
 printf(DAT_0010168d,7);
 printf(DAT_001016a8,0xd7);
 printf(DAT_001016c5,10);
 printf(DAT_001016e1,(unsigned long)ret_opaque_handle_handle1);
 printf(DAT_001016fe,0x28);
 printf(DAT_0010171a,0x3c);
 iVar1 = printf(DAT_00101736,0x15);
 return iVar1;
}

// Function: main @ 0x1012e0
int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 puts(DAT_00101794);
 printf(DAT_00101655,0x2a);
 printf(DAT_00101671,0x14);
 printf(DAT_0010168d,7);
 printf(DAT_001016a8,0xd7);
 printf(DAT_001016c5,10);
 printf(DAT_001016e1,(unsigned long)ret_opaque_handle_handle1);
 printf(DAT_001016fe,0x28);
 printf(DAT_0010171a,0x3c);
 printf(DAT_00101736,0x15);
 return 0;
}



