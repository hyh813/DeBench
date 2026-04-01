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
typedef unsigned int uint;

// Standard library function declarations
#include <stdio.h>
#include <string.h>

// Stack protection function
void __stack_chk_fail(void);

// Ghidra CONCAT macro - concatenates two 32-bit values into 64-bit
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | (uint64_t)(low))

// Decompiled code specific variables
long in_FS_OFFSET = 0;
char in_AL = 0;

// Global variables
char completed_0 = 0;
extern void *__dso_handle;
char DAT_00103008[] = "Calling Conventions Test";
char DAT_001030d0[] = "CALL-L1-10: %d\n";
char DAT_001030f8[] = "CALL-L1-11: %d\n";
char DAT_00103120[] = "CALL-L1-12: %d\n";
char DAT_00103147[] = "Hello";
char DAT_00103150[] = "CALL-L1-13: %d\n";
char DAT_00103178[] = "CALL-L1-14: %d\n";
char DAT_001031a8[] = "CALL-L1-15: %d\n";
char DAT_001031db[] = "abc";
char DAT_001031df[] = "def";
char DAT_001031e3[] = "ghi";
char DAT_001031e8[] = "Parameter Passing Test";
char DAT_001032c4[] = "Return Values Test";
char DAT_001032e2[] = "RET-L1-01: %d\n";
char DAT_001032fe[] = "RET-L1-02: %d\n";
char DAT_0010331a[] = "RET-L1-03: %d\n";
char DAT_00103335[] = "RET-L1-04: %d\n";
char DAT_00103352[] = "RET-L1-05: %d\n";
char DAT_0010336e[] = "RET-L1-06: %d\n";
char DAT_0010338b[] = "RET-L1-07: %d\n";
char DAT_001033a7[] = "RET-L1-08: %d\n";
char DAT_001033c3[] = "RET-L1-09: %d\n";
unsigned long long handle1_1 = 0x12345678;
unsigned long long handle2_0 = 0x87654321;

// Decompiled by BinaryAI
// SHA256: 739d5ddb6d647313ec090c9d8c4ab55fa0674d603997601ffe5ab1aebb73b89a

















// Function: cdecl_func @ 0x1011a9
int cdecl_func(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_cdecl @ 0x1011c1
int call_cdecl(void)
{
 return cdecl_func(5,10);
}

// Function: stdcall_func @ 0x1011da
int stdcall_func(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: call_stdcall @ 0x1011f1
int call_stdcall(void)
{
 return stdcall_func(5,10);
}

// Function: fastcall_func @ 0x10120a
int fastcall_func(int param_1,int param_2,int param_3)
{
 return param_3 + param_1 + param_2;
}

// Function: call_fastcall @ 0x10122a
int call_fastcall(void)
{
 return fastcall_func(1,2,3);
}

// Function: call_thiscall @ 0x101248
unsigned long long call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x101257
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_5 + param_1 + param_2 + param_3 + param_4;
}

// Function: call_arm_aapcs @ 0x101288
int call_arm_aapcs(void)
{
 return arm_aapcs_func(1,2,3,4,5);
}

// Function: mips_func @ 0x1012b1
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_4 + param_1 + param_2 + param_3;
}

// Function: call_mips @ 0x1012d9
int call_mips(void)
{
 return mips_func(10,0x14,0x1e,0x28);
}

// Function: amd64_sysv_func @ 0x1012fc
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_6 + param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_amd64_sysv @ 0x101336
int call_amd64_sysv(void)
{
 return amd64_sysv_func(1,2,3,4,5,6);
}

// Function: ms_x64_func @ 0x101365
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_5 + param_1 + param_2 + param_3 + param_4;
}

// Function: call_ms_x64 @ 0x101396
int call_ms_x64(void)
{
 return ms_x64_func(1,2,3,4,5);
}

// Function: vectorcall_func @ 0x1013bf
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_4 + param_1 + param_2 + param_3;
}

// Function: call_vectorcall @ 0x1013e7
int call_vectorcall(void)
{
 return vectorcall_func(1,2,3,4);
}

// Function: mixed_conventions_test @ 0x10140a
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

// Function: varargs_func @ 0x10145d
int varargs_func(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
 int param_9,unsigned long long param_10,unsigned long long param_11,unsigned long long param_12,
 unsigned long long param_13,unsigned long long param_14)
{
 char in_AL;
 int *piVar1;
 unsigned long uVar2;
 long in_FS_OFFSET;
 int local_e0;
 int local_dc;
 uint local_d8;
 int *local_d0;
 int local_b8 [2];
 unsigned long long local_b0;
 unsigned long long local_a8;
 unsigned long long local_a0;
 unsigned long long local_98;
 unsigned long long local_90;
 unsigned int local_88;
 unsigned int local_78;
 unsigned int local_68;
 unsigned int local_58;
 unsigned int local_48;
 unsigned int local_38;
 unsigned int local_28;
 unsigned int local_18;
 int stack0x00000008 = 0;
 if (in_AL != '\0') {
 local_88 = param_1;
 local_78 = param_2;
 local_68 = param_3;
 local_58 = param_4;
 local_48 = param_5;
 local_38 = param_6;
 local_28 = param_7;
 local_18 = param_8;
 }
 local_e0 = 0;
 local_d8 = 8;
 local_d0 = (int *)&stack0x00000008;
 for (local_dc = 0; local_dc < param_9; local_dc = local_dc + 1) {
 if (local_d8 < 0x30) {
 uVar2 = (unsigned long)local_d8;
 local_d8 = local_d8 + 8;
 piVar1 = (int *)((long)local_b8 + uVar2);
 }
 else {
 piVar1 = local_d0;
 local_d0 = local_d0 + 2;
 }
 local_e0 = local_e0 + *piVar1;
 }
 if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
 local_b0 = param_10;
 local_a8 = param_11;
 local_a0 = param_12;
 local_98 = param_13;
 local_90 = param_14;
 __stack_chk_fail();
 }
 return local_e0;
}

// Function: func_no_args @ 0x10158a
unsigned long long func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x101599
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_8 + param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7;
}

// Function: func_mixed_args @ 0x1015dd
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

// Function: func_struct_byval @ 0x101643
long func_struct_byval(void)
{
 int local_14;
 long local_10;
 long stack0x00000008 = 0;
 local_10 = 0;
 for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
 local_10 = local_10 + *(long *)(&stack0x00000008 + (long)local_14 * 8);
 }
 return local_10;
}

// Function: func_struct_byptr @ 0x10167a
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

// Function: test_calling_conventions @ 0x1016a6
void test_calling_conventions(void)
{
 uint uVar1;
 long in_FS_OFFSET;
 int local_c4;
 unsigned int local_a0;
 unsigned int local_9c;
 long local_98 [17];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00103008);
 uVar1 = call_cdecl();
 printf("CALL-L1-01: %d\n",(unsigned long)uVar1);
 uVar1 = call_stdcall();
 printf("CALL-L1-02: %d\n",(unsigned long)uVar1);
 uVar1 = call_fastcall();
 printf("CALL-L1-03: %d\n",(unsigned long)uVar1);
 uVar1 = call_thiscall();
 printf("CALL-L1-04: %d\n",(unsigned long)uVar1);
 uVar1 = call_arm_aapcs();
 printf("CALL-L1-05: %d\n",(unsigned long)uVar1);
 uVar1 = call_mips();
 printf("CALL-L1-06: %d\n",(unsigned long)uVar1);
 uVar1 = call_amd64_sysv();
 printf("CALL-L1-07: %d\n",(unsigned long)uVar1);
 uVar1 = call_ms_x64();
 printf("CALL-L1-08: %d\n",(unsigned long)uVar1);
 uVar1 = call_vectorcall();
 printf("CALL-L1-09: %d\n",(unsigned long)uVar1);
 uVar1 = mixed_conventions_test();
 printf("CALL-L1-10: %d\n",(unsigned long)uVar1);
 uVar1 = varargs_func(5,1,2,3,4,5,6,7,8,9,10,11,12,13);
 printf(&DAT_001030d0,(unsigned long)uVar1);
 uVar1 = func_no_args();
 printf(&DAT_001030f8,(unsigned long)uVar1);
 uVar1 = func_many_args(1,2,3,4,5,6,7,8);
 printf(&DAT_00103120,(unsigned long)uVar1);
 uVar1 = func_mixed_args(0x40091eb851eb851f,10,&DAT_00103147,100);
 printf(&DAT_00103150,(unsigned long)uVar1);
 for (local_c4 = 0; local_c4 < 0x10; local_c4 = local_c4 + 1) {
 local_98[local_c4] = (long)(local_c4 + 1);
 }
 uVar1 = func_struct_byval();
 printf(&DAT_00103178,(unsigned long)uVar1);
 local_a0 = 5;
 local_9c = 10;
 uVar1 = func_struct_byptr(&local_a0);
 printf(&DAT_001031a8,(unsigned long)uVar1);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_by_value_int @ 0x101a1f
int param_by_value_int(int param_1)
{
 return param_1 << 1;
}

// Function: call_by_value_int @ 0x101a32
int call_by_value_int(void)
{
 int iVar1;
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}

// Function: param_by_value_ptr @ 0x101a5c
char param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 * 2;
 return 1;
}

// Function: call_by_value_ptr @ 0x101a8c
int call_by_value_ptr(void)
{
 long in_FS_OFFSET;
 int local_20;
 int local_1c;
 int *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_20 = 5;
 local_18 = &local_20;
 local_1c = param_by_value_ptr(local_18);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_1c + local_20;
}

// Function: param_array_decay @ 0x101ae3
unsigned long long param_array_decay(unsigned long long *param_1,int param_2)
{
 *param_1 = 8;
 return 8;
}

// Function: call_array_decay @ 0x101af9
unsigned long long call_array_decay(void)
{
 long in_FS_OFFSET;
 unsigned long long local_38;
 unsigned long long local_30;
 unsigned long long local_28;
 unsigned long long local_20;
 unsigned long long local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_38 = 0;
 local_30 = 0;
 local_28 = 0;
 local_20 = 0;
 local_18 = 0;
 param_array_decay(&local_38,10);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_38;
}

// Function: param_string @ 0x101b63
int param_string(char *param_1)
{
 return (int)param_1[1] + (int)*param_1;
}

// Function: call_string_param @ 0x101b8b
int call_string_param(void)
{
 return param_string("Hello");
}

// Function: param_ptr_array @ 0x101ba4
int param_ptr_array(long param_1,int param_2)
{
 int local_10;
 int local_c;
 local_10 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_10 = local_10 + **(char **)(param_1 + (long)local_c * 8);
 }
 return local_10;
}

// Function: call_ptr_array @ 0x101bf4
int call_ptr_array(void)
{
 long in_FS_OFFSET;
 char *local_28;
 char *local_20;
 char *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_28 = &DAT_001031db;
 local_20 = &DAT_001031df;
 local_18 = &DAT_001031e3;
 return param_ptr_array(&local_28,3);
}

// Function: param_varargs @ 0x101c57
int param_varargs(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
 int param_9,unsigned long long param_10,unsigned long long param_11,unsigned long long param_12,
 unsigned long long param_13,unsigned long long param_14)
{
 char in_AL;
 int *piVar1;
 unsigned long uVar2;
 long in_FS_OFFSET;
 int local_e0;
 int local_dc;
 uint local_d8;
 int *local_d0;
 int local_b8 [2];
 unsigned long long local_b0;
 unsigned long long local_a8;
 unsigned long long local_a0;
 unsigned long long local_98;
 unsigned long long local_90;
 unsigned int local_88;
 unsigned int local_78;
 unsigned int local_68;
 unsigned int local_58;
 unsigned int local_48;
 unsigned int local_38;
 unsigned int local_28;
 unsigned int local_18;
 int stack0x00000008 = 0;
 if (in_AL != '\0') {
 local_88 = param_1;
 local_78 = param_2;
 local_68 = param_3;
 local_58 = param_4;
 local_48 = param_5;
 local_38 = param_6;
 local_28 = param_7;
 local_18 = param_8;
 }
 local_d8 = 8;
 local_d0 = (int *)&stack0x00000008;
 local_e0 = 0;
 for (local_dc = 0; local_dc < param_9; local_dc = local_dc + 1) {
 if (local_d8 < 0x30) {
 uVar2 = (unsigned long)local_d8;
 local_d8 = local_d8 + 8;
 piVar1 = (int *)((long)local_b8 + uVar2);
 }
 else {
 piVar1 = local_d0;
 local_d0 = local_d0 + 2;
 }
 local_e0 = local_e0 + *piVar1;
 }
 if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
 local_b0 = param_10;
 local_a8 = param_11;
 local_a0 = param_12;
 local_98 = param_13;
 local_90 = param_14;
 return local_e0;
 }
 return local_e0;
}

// Function: call_varargs_param @ 0x101d84
int call_varargs_param(void)
{
 return param_varargs(4,10,0x14,0x1e,0x28,0,0,0,0,0,0,0,0,0);
}

// Function: param_func_ptr @ 0x101db2
int param_func_ptr(int (*param_1)(int),unsigned int param_2)
{
 int iVar1;
 iVar1 = param_1(param_2);
 return iVar1 + 10;
}

// Function: callback_func @ 0x101dd5
int callback_func(int param_1)
{
 return param_1 * 2;
}

// Function: call_func_ptr_param @ 0x101de7
int call_func_ptr_param(void)
{
 return param_func_ptr(callback_func,5);
}

// Function: param_double_ptr @ 0x101e05
unsigned long long param_double_ptr(long *param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}

// Function: call_double_ptr @ 0x101e4c
int call_double_ptr(void)
{
 long in_FS_OFFSET;
 int local_20;
 unsigned int local_1c;
 int *local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_20 = 10;
 local_18 = &local_20;
 local_1c = param_double_ptr(&local_18,0x14);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_20 + (uint)(local_18 == (int *)0x0);
}

// Function: param_complex_cast @ 0x101eb2
int param_complex_cast(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 == 0) {
 iVar1 = *param_1;
 }
 else if (param_2 == 1) {
 iVar1 = param_1[1] + *param_1;
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_complex_cast @ 0x101f0d
int call_complex_cast(void)
{
 long in_FS_OFFSET;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_1c = 0x12345678;
 local_18 = 100;
 local_14 = 200;
 return param_complex_cast(&local_18,1) + param_complex_cast(&local_1c,0);
}

// Function: param_struct_byval @ 0x101f75
int param_struct_byval(void)
{
 int param_7;
 unsigned long long in_stack_00000040;
 return (int)(in_stack_00000040 >> 32) + param_7;
}

// Function: call_struct_byval @ 0x101f87
int call_struct_byval(void)
{
 long in_FS_OFFSET;
 int local_5c;
 int local_58 [18];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 for (local_5c = 0; local_5c < 0x10; local_5c = local_5c + 1) {
 local_58[local_5c] = local_5c;
 }
 return param_struct_byval();
}

// Function: param_order_dep @ 0x101ff8
int param_order_dep(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_order_dep @ 0x102010
int call_order_dep(void)
{
 return param_order_dep(2,2);
}

// Function: test_parameter_passing @ 0x10203c
void test_parameter_passing(void)
{
 uint uVar1;
 puts(&DAT_001031e8);
 uVar1 = call_by_value_int();
 printf("PARAM-L1-01: %d\n",(unsigned long)uVar1);
 uVar1 = call_by_value_ptr();
 printf("PARAM-L1-02: %d\n",(unsigned long)uVar1);
 uVar1 = call_array_decay();
 printf("PARAM-L2-01: %d\n",(unsigned long)uVar1);
 uVar1 = call_string_param();
 printf("PARAM-L2-02: %d\n",(unsigned long)uVar1);
 uVar1 = call_ptr_array();
 printf("PARAM-L2-03: %d\n",(unsigned long)uVar1);
 uVar1 = call_varargs_param();
 printf("PARAM-L2-04: %d\n",(unsigned long)uVar1);
 uVar1 = call_func_ptr_param();
 printf("PARAM-L3-01: %d\n",(unsigned long)uVar1);
 uVar1 = call_double_ptr();
 printf("PARAM-L3-02: %d\n",(unsigned long)uVar1);
 uVar1 = call_complex_cast();
 printf("PARAM-L3-03: %d\n",(unsigned long)uVar1);
 uVar1 = call_struct_byval();
 printf("PARAM-L3-04: %d\n",(unsigned long)uVar1);
 uVar1 = call_order_dep();
 printf("PARAM-L3-05: %d\n",(unsigned long)uVar1);
 return;
}

// Function: ret_basic_type @ 0x1021b6
int ret_basic_type(int param_1)
{
 return param_1 * 2;
}

// Function: call_ret_basic @ 0x1021c8
unsigned int call_ret_basic(void)
{
 unsigned int uVar1;
 uVar1 = ret_basic_type(0x15);
 return uVar1;
}

// Function: ret_pointer @ 0x1021ed
long ret_pointer(long param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x102203
unsigned int call_ret_pointer(void)
{
 unsigned int *puVar1;
 long in_FS_OFFSET;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_1c = 10;
 local_18 = 0x14;
 local_14 = 0x1e;
 puVar1 = (unsigned int *)ret_pointer(&local_1c);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return *puVar1;
}

// Function: ret_small_struct @ 0x10225f
unsigned long long ret_small_struct(unsigned int param_1,unsigned int param_2)
{
 return CONCAT44(param_2,param_1);
}

// Function: call_ret_small_struct @ 0x10227f
int call_ret_small_struct(void)
{
 unsigned long long uVar1;
 int local_10;
 int iStack_c;
 uVar1 = ret_small_struct(3,4);
 local_10 = (int)uVar1;
 iStack_c = (int)((unsigned long)uVar1 >> 0x20);
 return iStack_c + local_10;
}

// Function: ret_large_struct @ 0x1022a8
unsigned long long * ret_large_struct(unsigned long long *param_1,int param_2)
{
 long in_FS_OFFSET;
 int local_6c;
 unsigned long long local_68;
 unsigned long long local_60;
 unsigned long long local_58;
 unsigned long long local_50;
 unsigned long long local_48;
 unsigned long long local_40;
 unsigned long long local_38;
 unsigned long long local_30;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 for (local_6c = 0; local_6c < 0x10; local_6c = local_6c + 1) {
 *(int *)((long)&local_68 + (long)local_6c * 4) = param_2 + local_6c;
 }
 *param_1 = local_68;
 param_1[1] = local_60;
 param_1[2] = local_58;
 param_1[3] = local_50;
 param_1[4] = local_48;
 param_1[5] = local_40;
 param_1[6] = local_38;
 param_1[7] = local_30;
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return param_1;
}

// Function: call_ret_large_struct @ 0x102350
int call_ret_large_struct(void)
{
 long in_FS_OFFSET;
 int local_58 [15];
 int local_1c;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 ret_large_struct(local_58,100);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_1c + local_58[0];
}

// Function: func_a @ 0x10239a
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x1023ad
int func_b(int param_1)
{
 return param_1 * 2;
}

// Function: ret_func_ptr @ 0x1023bf
void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 else {
 pcVar1 = func_b;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x1023e2
int call_ret_func_ptr(void)
{
 void *pcVar1;
 pcVar1 = (void *)ret_func_ptr(1);
 return ((int (*)(int))pcVar1)(5);
}

// Function: ret_opaque_handle @ 0x102409
unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 if (param_1 == 0) {
 puVar1 = (unsigned long long *)&handle1_1;
 }
 else {
 puVar1 = &handle2_0;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x10242c
unsigned int call_ret_opaque(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)ret_opaque_handle(0);
 return *puVar1;
}

// Function: ret_complex_expr @ 0x10244e
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 if (param_2 < param_1) {
 param_3 = param_3 * 2;
 }
 else {
 param_3 = param_3 + 10;
 }
 return param_3;
}

// Function: call_ret_complex_expr @ 0x102476
int call_ret_complex_expr(void)
{
 int iVar1;
 int iVar2;
 iVar1 = ret_complex_expr(5,3,10);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar2 + iVar1;
}

// Function: ret_multi_branch @ 0x1024ba
unsigned long long ret_multi_branch(int param_1)
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

// Function: call_ret_multi_branch @ 0x1024fb
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

// Function: ret_void @ 0x10253a
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x10255b
unsigned int call_ret_void(void)
{
 long in_FS_OFFSET;
 unsigned int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 ret_void(7,&local_14);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_14;
}

// Function: test_return_values @ 0x1025a0
void test_return_values(void)
{
 uint uVar1;
 puts(&DAT_001032c4);
 uVar1 = call_ret_basic();
 printf(&DAT_001032e2,(unsigned long)uVar1);
 uVar1 = call_ret_pointer();
 printf(&DAT_001032fe,(unsigned long)uVar1);
 uVar1 = call_ret_small_struct();
 printf(&DAT_0010331a,(unsigned long)uVar1);
 uVar1 = call_ret_large_struct();
 printf(&DAT_00103335,(unsigned long)uVar1);
 uVar1 = call_ret_func_ptr();
 printf(&DAT_00103352,(unsigned long)uVar1);
 uVar1 = call_ret_opaque();
 printf(&DAT_0010336e,(unsigned long)uVar1);
 uVar1 = call_ret_complex_expr();
 printf(&DAT_0010338b,(unsigned long)uVar1);
 uVar1 = call_ret_multi_branch();
 printf(&DAT_001033a7,(unsigned long)uVar1);
 uVar1 = call_ret_void();
 printf(&DAT_001033c3,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x1026da
unsigned long long main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



