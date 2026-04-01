/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;

typedef unsigned int uint;
typedef unsigned char byte;

// Function declaration
int call_weak_fn(int ctx);

// Decompiled by BinaryAI
// SHA256: 064a82b0b1f644a0c1db96f7697cfb48aeb7aeb6384e8b959ef6d05385e0bfd3

// Global variables - mark as weak to allow CRT definitions
char completed_0 = 0;
extern void *__dso_handle;
unsigned long long ret_opaque_handle_handle1 = 0;
unsigned long long ret_opaque_handle_handle2 = 0;

// Function: _init @ 0x100668
static int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_00100680 @ 0x100680
// This appears to be a jump stub - just return (original code called NULL)
void FUN_00100680(void)
{
 return;
}

// Include stdarg for varargs functions
#include <stdarg.h>

// Include stdint for specific types
#include <stdint.h>

// Define CONCAT44 macro for combining 32-bit values into 44-bit result
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | (uint32_t)(low))

// Fix: Use const char* for string literals to match printf/puts parameters


// Data references
const char DAT_0010157a[] = "Calling Conventions Test\n";
const char DAT_001012d0[] = "VARARG: %d\n";
const char DAT_001012f8[] = "NOARGS: %d\n";
const char DAT_0010131a[] = "MANYARGS: %d\n";
const char DAT_00101341[] = "STRUCT: %d\n";
const char DAT_00101369[] = "MEMCPY: %d\n";
const char DAT_00101395[] = "PTR: %d\n";
const char DAT_0010159b[] = "Parameter Passing Test\n";
const char DAT_001015bc[] = "Return Values Test\n";
const char DAT_0010147d[] = "BASIC: %d\n";
const char DAT_00101499[] = "PTR: %d\n";
const char DAT_001014b5[] = "SMALL: %d\n";
const char DAT_001014d0[] = "LARGE: %d\n";
const char DAT_001014ed[] = "FUNC: %d\n";
const char DAT_00101509[] = "OPAQUE: %lu\n";
const char DAT_00101526[] = "EXPR: %d\n";
const char DAT_00101542[] = "BRANCH: %d\n";
const char DAT_0010155e[] = "VOID: %d\n";

// External libc functions
#include <string.h>
int __libc_start_main(int (*main)(void), void *argc, void *argv, void (*dtors)(void), void *rtld_fini, void *stack_end);
void __gmon_start__(void);
void abort(void);
void __cxa_finalize(void *dso);

// External libc functions - use standard library declarations
void *memcpy(void *__dest, const void *__src, size_t __n);
size_t strlen(const char *__s);
int printf(const char *__format, ...);
int puts(const char *__s);

// Stub implementations that will be overridden by libc
// These are placeholder declarations to satisfy the linker

// Function: <EXTERNAL>::__gmon_start__ @ 0x1006e0
// Implemented as weak symbol from libc

// Function: <EXTERNAL>::puts - use libc version
// Declaration only, implementation comes from libc

// Function: <EXTERNAL>::printf - use libc version
// Declaration only, implementation comes from libc

// Forward declaration for main
int main(void);

// Function: _start @ 0x100740
static void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main,(void*)param_9,0,0,0,(void*)param_1);
 abort();
}



// Function: deregister_tm_clones @ 0x100790
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1007c0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001007fc @ 0x1007fc
void FUN_001007fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100800
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: cdecl_func @ 0x100854
int cdecl_func(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_cdecl @ 0x10085c
unsigned long long call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x100864
int stdcall_func(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: call_stdcall @ 0x10086c
unsigned long long call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x100874
int fastcall_func(int param_1,int param_2,int param_3)
{
 return param_2 + param_1 + param_3;
}

// Function: call_fastcall @ 0x100880
unsigned long long call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x100888
unsigned long long call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x100890
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x1008a4
unsigned long long call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x1008ac
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_mips @ 0x1008bc
unsigned long long call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x1008c4
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x1008dc
unsigned long long call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x1008e4
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x1008f8
unsigned long long call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x100900
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x100910
unsigned long long call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x100918
unsigned long long mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func @ 0x100920
int varargs_func(int param_1, ...)
{
 va_list args;
 int iVar2;
 int arg;
 iVar2 = 0;
 va_start(args, param_1);
 while (param_1 > 0) {
   arg = va_arg(args, int);
   iVar2 = arg + iVar2;
   param_1 = param_1 - 1;
 }
 va_end(args);
 return iVar2;
}

// Function: func_no_args @ 0x1009cc
unsigned long long func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x1009d4
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x1009f4
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

// Function: func_struct_byval @ 0x100a4c
long func_struct_byval(long param_1)
{
 long *plVar1;
 long lVar2;
 long lVar3;
 long lVar4;
 lVar3 = 0;
 lVar4 = 0;
 lVar2 = 0;
 do {
 plVar1 = (long *)(param_1 + lVar2);
 lVar2 = lVar2 + 0x10;
 lVar3 = *plVar1 + lVar3;
 lVar4 = plVar1[1] + lVar4;
 } while (lVar2 != 0x80);
 return lVar3 + lVar4;
}

// Function: func_struct_byptr @ 0x100a74
int func_struct_byptr(int *param_1)
{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}

// Function: test_calling_conventions @ 0x100a8c
int test_calling_conventions(void)
{
 long *plVar1;
 int iVar2;
 unsigned long uVar3;
 long lVar4;
 long lVar5;
 long lVar6;
 long lVar7;
 long lVar8;
 long local_130 [32];
 puts(DAT_0010157a);
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
 printf(DAT_001012d0,uVar3 & 0xffffffff);
 printf(DAT_001012f8,0x2a);
 printf(DAT_0010131a,0x24);
 printf(DAT_00101341,0x75);
 lVar4 = 0;
 lVar6 = 1;
 lVar5 = 0;
 do {
 lVar7 = lVar5 + 1;
 lVar8 = lVar6 + 1;
 lVar5 = lVar5 + 2;
 lVar6 = lVar6 + 2;
 *(long *)((long)local_130 + lVar4 + 0x88) = lVar8;
 *(long *)((long)local_130 + lVar4 + 0x80) = lVar7;
 lVar4 = lVar4 + 0x10;
 } while (lVar4 != 0x80);
 memcpy(local_130,local_130 + 0x10,0x80);
 lVar5 = 0;
 lVar6 = 0;
 lVar4 = 0;
 do {
 plVar1 = (long *)((long)local_130 + lVar4);
 lVar7 = lVar4 + 8;
 lVar4 = lVar4 + 0x10;
 lVar5 = *plVar1 + lVar5;
 lVar6 = *(long *)((long)local_130 + lVar7) + lVar6;
 } while (lVar4 != 0x80);
 printf(DAT_00101369,lVar5 + lVar6);
 iVar2 = printf(DAT_00101395,0x32);
 return iVar2;
}

// Function: param_by_value_int @ 0x100c44
int param_by_value_int(int param_1)
{
 return param_1 << 1;
}

// Function: call_by_value_int @ 0x100c4c
unsigned long long call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x100c54
unsigned long long param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x100c6c
unsigned long long call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x100c74
unsigned long long param_array_decay(void)
{
 return 8;
}

// Function: call_array_decay @ 0x100c7c
unsigned long long call_array_decay(void)
{
 return 8;
}

// Function: param_string @ 0x100c84
int param_string(byte *param_1)
{
 return (uint)param_1[1] + (uint)*param_1;
}

// Function: call_string_param @ 0x100c94
unsigned long long call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x100c9c
int param_ptr_array(byte **param_1,uint param_2)
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

// Function: call_ptr_array @ 0x100cd0
unsigned long long call_ptr_array(void)
{
 return 300;
}

// Function: param_varargs @ 0x100cd8
int param_varargs(int param_1, ...)
{
 va_list args;
 int iVar2;
 int arg;
 iVar2 = 0;
 va_start(args, param_1);
 while (param_1 > 0) {
   arg = va_arg(args, int);
   iVar2 = arg + iVar2;
   param_1 = param_1 - 1;
 }
 va_end(args);
 return iVar2;
}

// Function: call_varargs_param @ 0x100d84
void call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}

// Function: param_func_ptr @ 0x100d9c
int param_func_ptr(int (*param_1)(int),unsigned int param_2)
{
 int iVar1;
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x100dbc
unsigned long long call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x100dc4
unsigned long long param_double_ptr(unsigned long long *param_1,unsigned int param_2)
{
 if ((param_1 != (unsigned long long *)0x0) && ((unsigned int *)*param_1 != (unsigned int *)0x0)) {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}

// Function: call_double_ptr @ 0x100dec
unsigned long long call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x100df4
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

// Function: call_complex_cast @ 0x100e1c
unsigned long long call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x100e28
int param_struct_byval(int *param_1)
{
 return param_1[0xf] + *param_1;
}

// Function: call_struct_byval @ 0x100e38
unsigned int call_struct_byval(void)
{
 return 0xf;
}

// Function: param_order_dep @ 0x100e64
int param_order_dep(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_order_dep @ 0x100e6c
unsigned long long call_order_dep(void)
{
 return 3;
}

// Function: test_parameter_passing @ 0x100e74
int test_parameter_passing(void)
{
 int iVar1;
 unsigned long uVar2;
 puts(DAT_0010159b);
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

// Function: ret_basic_type @ 0x100f80
int ret_basic_type(int param_1)
{
 return param_1 << 1;
}

// Function: call_ret_basic @ 0x100f88
unsigned long long call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x100f90
long ret_pointer(long param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x100f98
unsigned long long call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x100fa0
unsigned long ret_small_struct(unsigned long param_1,long param_2)
{
 return param_1 & 0xffffffff | param_2 << 0x20;
}

// Function: call_ret_small_struct @ 0x100fac
unsigned long long call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x100fb4
void ret_large_struct(int param_1)
{
 long in_x8;
 long lVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 lVar1 = 0;
 iVar4 = 2;
 iVar5 = 3;
 iVar2 = 0;
 iVar3 = 1;
 do {
 iVar6 = iVar2 + param_1;
 iVar7 = iVar3 + param_1;
 iVar8 = iVar4 + param_1;
 iVar9 = iVar5 + param_1;
 iVar2 = iVar2 + 4;
 iVar3 = iVar3 + 4;
 iVar4 = iVar4 + 4;
 iVar5 = iVar5 + 4;
 ((unsigned long long *)(in_x8 + lVar1))[1] = CONCAT44(iVar9,iVar8);
 *(unsigned long long *)(in_x8 + lVar1) = CONCAT44(iVar7,iVar6);
 lVar1 = lVar1 + 0x10;
 } while (lVar1 != 0x40);
 return;
}

// Function: call_ret_large_struct @ 0x100fe4
unsigned int call_ret_large_struct(void)
{
 return 0xd7;
}

// Function: func_a @ 0x101010
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x101018
int func_b(int param_1)
{
 return param_1 << 1;
}

// Function: ret_func_ptr @ 0x101020
void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_a;
 if (param_1 != 0) {
 pcVar1 = func_b;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x10103c
unsigned long long call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x101044
unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)&ret_opaque_handle_handle1;
 if (param_1 != 0) {
 puVar1 = &ret_opaque_handle_handle2;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x101060
unsigned int call_ret_opaque(void)
{
 return ret_opaque_handle_handle1;
}

// Function: ret_complex_expr @ 0x10106c
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 << 1;
 if (param_1 <= param_2) {
 iVar1 = param_3 + 10;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x101080
unsigned long long call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x101088
int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 10 + 10;
 if (2 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x1010a0
unsigned long long call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x1010a8
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x1010b4
unsigned long long call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x1010bc
int test_return_values(void)
{
 int iVar1;
 puts(DAT_001015bc);
 printf(DAT_0010147d,0x2a);
 printf(DAT_00101499,0x14);
 printf(DAT_001014b5,7);
 printf(DAT_001014d0,0xd7);
 printf(DAT_001014ed,10);
 printf(DAT_00101509,(unsigned long)ret_opaque_handle_handle1);
 printf(DAT_00101526,0x28);
 printf(DAT_00101542,0x3c);
 iVar1 = printf(DAT_0010155e,0x15);
 return iVar1;
}

// Function: main @ 0x101190
int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}

// Function: _fini @ 0x1011b0
static void _fini(void)
{
 return;
}

