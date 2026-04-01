/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>

/* Type definitions */
typedef unsigned char byte;
typedef unsigned int uint;

/* External libc function declarations */
void __libc_start_main(int (*main)(void), ...);
void __cxa_finalize(void *dso_handle);
int puts(const char *s);
int printf(const char *format, ...);

/* Global variables */
static char completed_0 = 0;
static void *__dso_handle;
static unsigned long long ret_opaque_handle_handle1;
static unsigned long long ret_opaque_handle_handle2;
static long register0x00000008;
static long stack0x00000008;
static long stack0xffffffffffffffe0;

/* Forward declarations */
char DAT_001014be[] = "Testing calling conventions...\n";
char DAT_00101214[] = "CALL-L1-11: %d\n";
char DAT_0010123c[] = "CALL-L2-01: %d\n";
char DAT_0010125e[] = "CALL-L2-02: %d\n";
char DAT_00101285[] = "CALL-L2-03: %d\n";
char DAT_001012ad[] = "CALL-L2-04: %d\n";
char DAT_001012d9[] = "CALL-L2-05: %d\n";
char DAT_001013c1[] = "RET-L1-01: %d\n";
char DAT_001013dd[] = "RET-L1-02: %d\n";
char DAT_001013f9[] = "RET-L1-03: %d\n";
char DAT_00101414[] = "RET-L1-04: %d\n";
char DAT_00101431[] = "RET-L1-05: %d\n";
char DAT_0010144d[] = "RET-L1-06: %d\n";
char DAT_0010146a[] = "RET-L2-01: %d\n";
char DAT_00101486[] = "RET-L2-02: %d\n";
char DAT_001014a2[] = "RET-L2-03: %d\n";
char DAT_001014df[] = "Testing parameter passing...\n";
char DAT_00101500[] = "Testing return values...\n";

// Decompiled by BinaryAI
// SHA256: cc856ca657f7d2e72af515f995b8c437200189d938cd2212fd2fd8731ea3eb31

// Function: _init @ 0x100628
/* _init is provided by linker/runtime */

// Function: FUN_00100640 @ 0x100640
/* Null function - removed */

// Function: <EXTERNAL>::strlen @ 0x100660
/* strlen is provided by libc */

// Function: <EXTERNAL>::__libc_start_main @ 0x100670
/* __libc_start_main is provided by libc */

// Function: <EXTERNAL>::__cxa_finalize @ 0x100680
/* __cxa_finalize is provided by libc */

// Function: <EXTERNAL>::__gmon_start__ @ 0x100690
/* __gmon_start__ is provided by libc */

// Function: <EXTERNAL>::abort @ 0x1006a0
/* abort is provided by libc */

// Function: <EXTERNAL>::puts @ 0x1006b0
/* puts is provided by libc */

// Function: <EXTERNAL>::printf @ 0x1006c0
/* printf is provided by libc */













// Function: cdecl_func @ 0x100814
static int cdecl_func(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_cdecl @ 0x10081c
static unsigned long long call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x100824
static int stdcall_func(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: call_stdcall @ 0x10082c
static unsigned long long call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x100834
static int fastcall_func(int param_1,int param_2,int param_3)
{
 return param_2 + param_1 + param_3;
}

// Function: call_fastcall @ 0x100840
static unsigned long long call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x100848
static unsigned long long call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x100850
static int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x100864
static unsigned long long call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x10086c
static int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_mips @ 0x10087c
static unsigned long long call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x100884
static int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x10089c
static unsigned long long call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x1008a4
static int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x1008b8
static unsigned long long call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x1008c0
static int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x1008d0
static unsigned long long call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x1008d8
static unsigned long long mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func @ 0x1008e0
static int varargs_func(int param_1, ...)
{
 int iVar2;
 int iVar1;
 va_list args;
 va_start(args, param_1);
 iVar2 = 0;
 iVar1 = param_1;
 while (iVar1 > 0) {
 iVar2 = iVar2 + va_arg(args, int);
 iVar1 = iVar1 - 1;
 }
 va_end(args);
 return iVar2;
}

// Function: func_no_args @ 0x100984
static unsigned long long func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x10098c
static int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x1009ac
static int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)
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

// Function: func_struct_byval @ 0x100a04
static unsigned long func_struct_byval(long param_1)
{
 long *plVar1;
 unsigned long uVar2;
 long lVar3;
 lVar3 = 0;
 uVar2 = 0;
 do {
 plVar1 = (long *)(param_1 + lVar3);
 lVar3 = lVar3 + 8;
 uVar2 = *plVar1 + uVar2;
 } while (lVar3 != 0x80);
 return uVar2 & 0xffffffff;
}

// Function: func_struct_byptr @ 0x100a28
static int func_struct_byptr(int *param_1)
{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}

// Function: test_calling_conventions @ 0x100a40
static int test_calling_conventions(void)
{
 long *plVar1;
 int iVar2;
 unsigned long uVar3;
 long lVar4;
 long lVar5;
 long local_120 [16];
 long local_a0 [16];
 puts(DAT_001014be);
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
 uVar3 = varargs_func(5,1,2,3,4,5);
 printf(DAT_00101214,uVar3 & 0xffffffff);
 printf(DAT_0010123c,0x2a);
 printf(DAT_0010125e,0x24);
 printf(DAT_00101285,0x75);
 lVar5 = 0;
 do {
 lVar4 = lVar5 + 1;
 local_a0[lVar5] = lVar4;
 lVar5 = lVar4;
 } while (lVar4 != 0x10);
 lVar5 = 0;
 lVar4 = 0;
 local_120[9] = local_a0[9];
 local_120[8] = local_a0[8];
 local_120[11] = local_a0[11];
 local_120[10] = local_a0[10];
 local_120[13] = local_a0[13];
 local_120[12] = local_a0[12];
 local_120[15] = local_a0[15];
 local_120[14] = local_a0[14];
 local_120[1] = local_a0[1];
 local_120[0] = local_a0[0];
 local_120[3] = local_a0[3];
 local_120[2] = local_a0[2];
 local_120[5] = local_a0[5];
 local_120[4] = local_a0[4];
 local_120[7] = local_a0[7];
 local_120[6] = local_a0[6];
 do {
 plVar1 = (long *)((long)local_120 + lVar5);
 lVar5 = lVar5 + 8;
 lVar4 = *plVar1 + lVar4;
 } while (lVar5 != 0x80);
 printf(DAT_001012ad,lVar4);
 iVar2 = printf(DAT_001012d9,0x32);
 return iVar2;
}

// Function: param_by_value_int @ 0x100be0
static int param_by_value_int(int param_1)
{
 return param_1 << 1;
}

// Function: call_by_value_int @ 0x100be8
static unsigned long long call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x100bf0
static unsigned long long param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x100c08
static unsigned long long call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x100c10
static unsigned long long param_array_decay(void)
{
 return 8;
}

// Function: call_array_decay @ 0x100c18
static unsigned long long call_array_decay(void)
{
 return 8;
}

// Function: param_string @ 0x100c20
static int param_string(byte *param_1)
{
 return (uint)param_1[1] + (uint)*param_1;
}

// Function: call_string_param @ 0x100c30
static unsigned long long call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x100c38
static int param_ptr_array(byte **param_1,uint param_2)
{
 int iVar1;
 unsigned long uVar2;
 if (0 < (int)param_2) {
 iVar1 = 0;
 uVar2 = (unsigned long)param_2;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = iVar1 + (uint)**param_1;
 param_1 = param_1 + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: call_ptr_array @ 0x100c6c
static unsigned long long call_ptr_array(void)
{
 return 300;
}

// Function: param_varargs @ 0x100c74
static int param_varargs(int param_1, ...)
{
 int iVar2;
 int iVar1;
 va_list args;
 va_start(args, param_1);
 iVar2 = 0;
 iVar1 = param_1;
 while (iVar1 > 0) {
 iVar2 = iVar2 + va_arg(args, int);
 iVar1 = iVar1 - 1;
 }
 va_end(args);
 return iVar2;
}

// Function: call_varargs_param @ 0x100d18
void call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}

// Function: param_func_ptr @ 0x100d40
static int param_func_ptr(int (*param_1)(unsigned int),unsigned int param_2)
{
 int iVar1;
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x100d60
static unsigned long long call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x100d68
static unsigned long long param_double_ptr(unsigned long long *param_1,unsigned int param_2)
{
 if ((param_1 != (unsigned long long *)0x0) && ((unsigned int *)*param_1 != (unsigned int *)0x0)) {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}

// Function: call_double_ptr @ 0x100d90
static unsigned long long call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x100d98
static int param_complex_cast(int *param_1,int param_2)
{
 if (param_2 == 1) {
 return param_1[1] + *param_1;
 }
 if (param_2 == 0) {
 return *param_1;
 }
 return -1;
}

// Function: call_complex_cast @ 0x100dc0
static unsigned long long call_complex_cast(void)
{
 return 0x12345678;
}



// Function: param_order_dep @ 0x100e0c
static int param_order_dep(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_order_dep @ 0x100e14
static unsigned long long call_order_dep(void)
{
 return 3;
}

// Function: test_parameter_passing @ 0x100e1c
static int test_parameter_passing(void)
{
 int iVar1;
 unsigned long uVar2;
 long lVar3;
 int local_50 [16];
 puts(DAT_001014df);
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
 lVar3 = 0;
 do {
 local_50[lVar3] = (int)lVar3;
 lVar3 = lVar3 + 1;
 } while (lVar3 != 0x10);
 printf("PARAM-L3-04: %d\n",(unsigned long)(uint)(local_50[15] + local_50[0]));
 iVar1 = printf("PARAM-L3-05: %d\n",3);
 return iVar1;
}

// Function: ret_basic_type @ 0x100f2c
static int ret_basic_type(int param_1)
{
 return param_1 << 1;
}

// Function: call_ret_basic @ 0x100f34
static unsigned long long call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x100f3c
static long ret_pointer(long param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x100f44
static unsigned long long call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x100f4c
static unsigned long ret_small_struct(unsigned long param_1,long param_2)
{
 return param_1 & 0xffffffff | param_2 << 0x20;
}

// Function: call_ret_small_struct @ 0x100f58
static unsigned long long call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x100f60
static void ret_large_struct(int param_1)
{
 long in_x8;
 long lVar1;
 lVar1 = 0;
 do {
 *(int *)(in_x8 + lVar1 * 4) = param_1 + (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 return;
}

// Function: call_ret_large_struct @ 0x100f80
static int call_ret_large_struct(void)
{
 long lVar1;
 int local_40 [16];
 lVar1 = 0;
 do {
 local_40[lVar1] = (int)lVar1 + 100;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 return local_40[15] + local_40[0];
}

// Function: func_a @ 0x100fb4
static int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x100fbc
static int func_b(int param_1)
{
 return param_1 << 1;
}

// Function: ret_func_ptr @ 0x100fc4
static void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_a;
 if (param_1 != 0) {
 pcVar1 = func_b;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x100fe0
static unsigned long long call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x100fe8
static unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)&ret_opaque_handle_handle1;
 if (param_1 != 0) {
 puVar1 = &ret_opaque_handle_handle2;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x101004
static unsigned int call_ret_opaque(void)
{
 return ret_opaque_handle_handle1;
}

// Function: ret_complex_expr @ 0x101010
static int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 << 1;
 if (param_1 <= param_2) {
 iVar1 = param_3 + 10;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x101024
static unsigned long long call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x10102c
static int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 10 + 10;
 if (2 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x101044
static unsigned long long call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x10104c
static void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x101058
static unsigned long long call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x101060
static int test_return_values(void)
{
 int iVar1;
 long lVar2;
 int local_50 [16];
 puts(DAT_00101500);
 printf(DAT_001013c1,0x2a);
 printf(DAT_001013dd,0x14);
 printf(DAT_001013f9,7);
 lVar2 = 0;
 do {
 local_50[lVar2] = (int)lVar2 + 100;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 printf(DAT_00101414,(unsigned long)(uint)(local_50[15] + local_50[0]));
 printf(DAT_00101431,10);
 printf(DAT_0010144d,(unsigned long)ret_opaque_handle_handle1);
 printf(DAT_0010146a,0x28);
 printf(DAT_00101486,0x3c);
 iVar1 = printf(DAT_001014a2,0x15);
 return iVar1;
}

// Function: main @ 0x10113c
int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



