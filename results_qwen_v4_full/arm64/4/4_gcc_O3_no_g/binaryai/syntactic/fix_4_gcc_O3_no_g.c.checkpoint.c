/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions */
typedef unsigned char byte;
typedef unsigned int uint;

/* Macro definitions */
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))

/* Global variables */
char completed_0 = '\0';
unsigned long long ___stack_chk_guard = 0;
unsigned long long handle1_1 = 0;
unsigned long long handle2_0 = 0;
unsigned long long stack0x00000008 = 0;
char *DAT_00101598 = "Calling Conventions Test";
char *DAT_00101660 = "CALL-L2-01: %d\n";
char *DAT_00101688 = "CALL-L2-02: %d\n";
char *DAT_001016b0 = "CALL-L2-03: %d\n";
char *DAT_001016d8 = "CALL-L2-04: %d\n";
char *DAT_00101700 = "CALL-L2-05: %d\n";
char *DAT_00101730 = "CALL-L2-06: %d\n";
char *DAT_00101760 = "Parameter Passing Test";
char *DAT_00101890 = "Return Values Test";
char *DAT_001018b0 = "RET-L1-01: %d\n";
char *DAT_001018d0 = "RET-L1-02: %d\n";
char *DAT_001018f0 = "RET-L1-03: %d\n";
char *DAT_00101910 = "RET-L1-04: %d\n";
char *DAT_00101930 = "RET-L1-05: %d\n";
char *DAT_00101950 = "RET-L1-06: %d\n";
char *DAT_00101970 = "RET-L1-07: %d\n";
char *DAT_00101990 = "RET-L1-08: %d\n";
char *DAT_001019b0 = "RET-L1-09: %d\n";

/* Forward declarations */
void test_calling_conventions(void);
void test_parameter_passing(void);
void test_return_values(void);

// Decompiled by BinaryAI
// SHA256: 3a058c9877704118e55c2344bcba580c894cdbdb9a05b526a751fa23cfa587d5



// Function: FUN_00100710 @ 0x100710
void FUN_00100710(void)
{
 return;
}

// Function: <EXTERNAL>::strlen @ 0x100730
size_t strlen(const char *s);

// Function: <EXTERNAL>::__libc_start_main @ 0x100740
int __libc_start_main(void *main, unsigned long long argc, void *argv, void *init, void *fini, void *rtld_fini, void *stack_end);

// Function: <EXTERNAL>::__cxa_finalize @ 0x100750
void __cxa_finalize(void *dso_handle);

// Function: <EXTERNAL>::__printf_chk @ 0x100760
int __printf_chk(int flag, const char *format, ...);

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100770
void __stack_chk_fail(void);

// Function: <EXTERNAL>::__gmon_start__ @ 0x100780
void __gmon_start__(void);

// Function: <EXTERNAL>::abort @ 0x100790
void abort(void);

// Function: <EXTERNAL>::puts @ 0x1007a0
int puts(const char *s);

// Function: main @ 0x1007c0
int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}











// Function: func_a @ 0x100920
static int func_a(int param_1)
{
 return param_1 + 10;
}





// Function: func_b @ 0x100a40
static int func_b(int param_1)
{
 return param_1 << 1;
}

// Function: cdecl_func @ 0x100a50
int cdecl_func(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_cdecl @ 0x100a60
unsigned long long call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x100a70
int stdcall_func(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: call_stdcall @ 0x100a80
unsigned long long call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x100a90
int fastcall_func(int param_1,int param_2,int param_3)
{
 return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x100aa0
unsigned long long call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x100ab0
unsigned long long call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x100ac0
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x100ad4
unsigned long long call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x100ae0
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x100af0
unsigned long long call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x100b00
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x100b20
unsigned long long call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x100b30
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x100b44
unsigned long long call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x100b50
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x100b60
unsigned long long call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x100b70
unsigned long long mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func_constprop_0
static unsigned int varargs_func_constprop_0(int param_1, int param_2, int param_3, int param_4, int param_5)
{
 return param_2 + param_3 + param_4 + param_5 + 32;
}

// Function: param_varargs_constprop_0
static unsigned int param_varargs_constprop_0(int param_1, int param_2, int param_3, int param_4, int param_5)
{
 return param_2 + param_3 + param_4 + param_5;
}



// Function: func_no_args @ 0x100c80
unsigned long long func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x100c90
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x100cb0
int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)
{
 size_t sVar1;
 if (param_3 != (char *)0x0) {
 sVar1 = strlen(param_3);
 param_2 = param_2 + (int)sVar1;
 }
 return (int)((double)param_2 + param_1 + (double)param_4);
}

// Function: func_struct_byval @ 0x100d00
long func_struct_byval(long *param_1)
{
 return param_1[0xe] +
 param_1[0xc] + param_1[10] + param_1[8] + param_1[6] + param_1[4] + *param_1 + param_1[2] +
 param_1[0xf] +
 param_1[0xd] +
 param_1[0xb] + param_1[9] + param_1[7] + param_1[5] + param_1[1] + param_1[3];
}

// Function: func_struct_byptr @ 0x100d40
int func_struct_byptr(int *param_1)
{
 if (param_1 != (int *)0x0) {
 return *param_1 * param_1[1];
 }
 return -1;
}

// Function: test_calling_conventions @ 0x100d60
void test_calling_conventions(void)
{
 unsigned int uVar1;
 puts(DAT_00101598);
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
 uVar1 = varargs_func_constprop_0(5,1,2,3,4);
 __printf_chk(1,DAT_00101660,uVar1);
 __printf_chk(1,DAT_00101688,0x2a);
 __printf_chk(1,DAT_001016b0,0x24);
 __printf_chk(1,DAT_001016d8,0x75);
 __printf_chk(1,DAT_00101700,0x88);
 __printf_chk(1,DAT_00101730,0x32);
 return;
}

// Function: param_by_value_int @ 0x100ed4
int param_by_value_int(int param_1)
{
 return param_1 << 1;
}

// Function: call_by_value_int @ 0x100ee0
unsigned long long call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x100ef0
unsigned long long param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x100f10
unsigned long long call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x100f20
unsigned long long param_array_decay(void)
{
 return 8;
}

// Function: call_array_decay @ 0x100f30
unsigned long long call_array_decay(void)
{
 return 8;
}

// Function: param_string @ 0x100f40
int param_string(byte *param_1)
{
 return (uint)*param_1 + (uint)param_1[1];
}

// Function: call_string_param @ 0x100f50
unsigned long long call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x100f60
int param_ptr_array(long param_1,int param_2)
{
 long lVar1;
 int iVar2;
 long lVar3;
 if (0 < param_2) {
 lVar3 = 0;
 iVar2 = 0;
 do {
 lVar1 = lVar3 * 8;
 lVar3 = lVar3 + 1;
 iVar2 = iVar2 + (uint)**(byte **)(param_1 + lVar1);
 } while ((int)lVar3 < param_2);
 return iVar2;
 }
 return 0;
}

// Function: call_ptr_array @ 0x100fa0
unsigned long long call_ptr_array(void)
{
 return 300;
}



// Function: call_varargs_param @ 0x1010b0
void call_varargs_param(void)
{
 param_varargs_constprop_0(4,10,0x14,0x1e,0x28);
 return;
}

// Function: param_func_ptr @ 0x1010d0
int param_func_ptr(int (*param_1)(unsigned int),unsigned int param_2)
{
 int iVar1;
 iVar1 = param_1(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x1010f0
unsigned long long call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x101100
unsigned long long param_double_ptr(long *param_1,unsigned int param_2)
{
 if ((param_1 != (long *)0x0) && ((unsigned int *)*param_1 != (unsigned int *)0x0)) {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}

// Function: call_double_ptr @ 0x101130
unsigned long long call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x101140
int param_complex_cast(int *param_1,int param_2)
{
 if (param_2 == 0) {
 return *param_1;
 }
 if (param_2 == 1) {
 return *param_1 + param_1[1];
 }
 return -1;
}

// Function: call_complex_cast @ 0x101170
unsigned long long call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x101180
int param_struct_byval(int *param_1)
{
 return *param_1 + param_1[0xf];
}

// Function: call_struct_byval @ 0x101190
unsigned long long call_struct_byval(void)
{
 return 0xf;
}

// Function: param_order_dep @ 0x1011a0
int param_order_dep(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_order_dep @ 0x1011b0
unsigned long long call_order_dep(void)
{
 return 4;
}

// Function: test_parameter_passing @ 0x1011c0
void test_parameter_passing(void)
{
 unsigned int uVar1;
 puts(DAT_00101760);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",8);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 __printf_chk(1,"PARAM-L2-03: %d\n",300);
 uVar1 = param_varargs_constprop_0(4,10,0x14,0x1e,0x28);
 __printf_chk(1,"PARAM-L2-04: %d\n",uVar1);
 __printf_chk(1,"PARAM-L3-01: %d\n",0x14);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 __printf_chk(1,"PARAM-L3-04: %d\n",0xf);
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
}

// Function: ret_basic_type @ 0x1012d0
int ret_basic_type(int param_1)
{
 return param_1 << 1;
}

// Function: call_ret_basic @ 0x1012e0
unsigned long long call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x1012f0
long ret_pointer(long param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x101300
unsigned long long call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x101310
unsigned long ret_small_struct(unsigned long param_1,long param_2)
{
 return param_1 & 0xffffffff | param_2 << 0x20;
}

// Function: call_ret_small_struct @ 0x101320
unsigned long long call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x101330
void ret_large_struct(unsigned long long *ret_ptr, int param_1)
{
 long lVar1;
 lVar1 = ___stack_chk_guard;
 ret_ptr[1] = CONCAT44(param_1 + 3,param_1 + 2);
 *ret_ptr = CONCAT44(param_1 + 1,param_1);
 ret_ptr[3] = CONCAT44(param_1 + 7,param_1 + 6);
 ret_ptr[2] = CONCAT44(param_1 + 5,param_1 + 4);
 ret_ptr[5] = CONCAT44(param_1 + 0xb,param_1 + 10);
 ret_ptr[4] = CONCAT44(param_1 + 9,param_1 + 8);
 ret_ptr[7] = CONCAT44(param_1 + 0xf,param_1 + 0xe);
 ret_ptr[6] = CONCAT44(param_1 + 0xd,param_1 + 0xc);
 if (lVar1 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: call_ret_large_struct @ 0x1013c4
unsigned long long call_ret_large_struct(void)
{
 return 0xd7;
}

// Function: ret_func_ptr @ 0x1013d0
void *ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x1013f0
unsigned long long call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x101400
unsigned long long *ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x101420
unsigned int call_ret_opaque(void)
{
 return handle1_1;
}

// Function: ret_complex_expr @ 0x101430
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 << 1;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x101444
unsigned long long call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x101450
int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = (param_1 + 1) * 10;
 if (2 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x101470
unsigned long long call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x101480
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x101490
unsigned long long call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x1014a0
void test_return_values(void)
{
 puts(DAT_00101890);
 __printf_chk(1,DAT_001018b0,0x2a);
 __printf_chk(1,DAT_001018d0,0x14);
 __printf_chk(1,DAT_001018f0,7);
 __printf_chk(1,DAT_00101910,0xd7);
 __printf_chk(1,DAT_00101930,10);
 __printf_chk(1,DAT_00101950,handle1_1);
 __printf_chk(1,DAT_00101970,0x28);
 __printf_chk(1,DAT_00101990,0x3c);
 __printf_chk(1,DAT_001019b0,0x15);
 return;
}



