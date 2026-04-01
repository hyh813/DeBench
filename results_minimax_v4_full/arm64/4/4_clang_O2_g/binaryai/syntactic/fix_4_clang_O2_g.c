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
typedef unsigned char byte;

// Global variables
unsigned long long ret_opaque_handle_handle1;
unsigned long long ret_opaque_handle_handle2;
char completed_0;
void *__dso_handle;
void *register0x00000008;
void *stack0xffffffffffffffe0;
void *stack0x00000008;

// String constants
static char *DAT_001014d2 = "Calling Convention Tests";
static char *DAT_00101228 = "VARARG-01: %d\n";
static char *DAT_00101250 = "VARARG-02: %d\n";
static char *DAT_00101272 = "VARARG-03: %d\n";
static char *DAT_00101299 = "VARARG-04: %d\n";
static char *DAT_001012c1 = "VARARG-05: %d\n";
static char *DAT_001012ed = "VARARG-06: %d\n";
static char *DAT_001014f3 = "Parameter Passing Tests";
static char *DAT_001013d5 = "RET-L1-01: %d\n";
static char *DAT_001013f1 = "RET-L1-02: %d\n";
static char *DAT_0010140d = "RET-L1-03: %d\n";
static char *DAT_00101428 = "RET-L1-04: %d\n";
static char *DAT_00101445 = "RET-L1-05: %d\n";
static char *DAT_00101461 = "RET-L1-06: %llu\n";
static char *DAT_0010147e = "RET-L1-07: %d\n";
static char *DAT_0010149a = "RET-L1-08: %d\n";
static char *DAT_001014b6 = "RET-L1-09: %d\n";
static char *DAT_00101514 = "Return Value Tests";

// MACRO: CONCAT44 - concatenates two 32-bit values into a 44-bit result
// Used for combining values in ret_large_struct
#define CONCAT44(high, low) ((((unsigned long)(high)) << 32) | ((unsigned long)(low) & 0xFFFFFFFF))

// Weak function - may be overridden by user implementation
int call_weak_fn(void)
{
 return 0;
}

// External function declarations (implemented in libc)
extern int printf(const char *__format, ...);
extern int puts(const char *__s);
extern int __cxa_finalize(void *d);

// SHA256: 803965cc025c3d8c70aceaa522da565cfe1dda7ba59a647f52a7f862dc2b8cf2

// Function: _init @ 0x100628
static int _init(void *ctx)
{
 return 0;
}

// Function: FUN_00100640 @ 0x100640
void FUN_00100640(void)
{
 return;
}

// Function: <EXTERNAL>::strlen @ 0x100660
// Stub - actual implementation in libc
extern size_t strlen(const char *__s);

// Function: <EXTERNAL>::__libc_start_main @ 0x100670
// Stub - actual implementation in libc
void __libc_start_main(void *main, void *arg, void *stack, void *init, void *fini, void *rtld_fini, void *stack_end);

// Function: <EXTERNAL>::__cxa_finalize @ 0x100680
// Stub - actual implementation in libc
int __cxa_finalize(void *d);

// Function: <EXTERNAL>::__gmon_start__ @ 0x100690
// Stub - actual implementation in libc
void __gmon_start__(void);

// Function: <EXTERNAL>::abort @ 0x1006a0
// Stub - actual implementation in libc
extern void abort(void);

// Function: <EXTERNAL>::puts @ 0x1006b0
// Stub - actual implementation in libc
int puts(const char *__s);

// Function: <EXTERNAL>::printf @ 0x1006c0
// Stub - actual implementation in libc
int printf(const char *__format, ...);

// Forward declaration of main
int main(void);

// Function: _start @ 0x100700
static void _start(unsigned long long param_1)
{
 __libc_start_main(main,0,&stack0x00000008,_init,0,0,&stack0x00000008);
 abort();
}



// Function: deregister_tm_clones @ 0x100750
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100780
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1007c0
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

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
 uint uVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 uint local_8;
 iVar2 = 0;
 if (0 < param_1) {
 local_8 = 0xffffffc8;
 piVar5 = (int *)register0x00000008;
 do {
 uVar1 = local_8;
 if (((int)local_8 < 0) && (uVar1 = local_8 + 8, local_8 < 0xfffffff9)) {
 piVar3 = (int *)(&stack0xffffffffffffffe0 + (int)local_8);
 local_8 = local_8 + 8;
 piVar4 = piVar5;
 }
 else {
 local_8 = uVar1;
 piVar4 = piVar5 + 2;
 piVar3 = piVar5;
 }
 param_1 = param_1 + -1;
 iVar2 = *piVar3 + iVar2;
 piVar5 = piVar4;
 } while (param_1 != 0);
 }
 return iVar2;
}

// Function: func_no_args @ 0x10098c
unsigned long long func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x100994
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x1009b4
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

// Function: func_struct_byval @ 0x100a0c
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

// Function: func_struct_byptr @ 0x100a8c
int func_struct_byptr(int *param_1)
{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}

// Function: test_calling_conventions @ 0x100aa4
int test_calling_conventions(void)
{
 int iVar1;
 unsigned long uVar2;
 puts(DAT_001014d2);
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
 printf(DAT_00101228,uVar2 & 0xffffffff);
 printf(DAT_00101250,0x2a);
 printf(DAT_00101272,0x24);
 printf(DAT_00101299,0x75);
 printf(DAT_001012c1,0x88);
 iVar1 = printf(DAT_001012ed,0x32);
 return iVar1;
}

// Function: param_by_value_int @ 0x100bd8
int param_by_value_int(int param_1)
{
 return param_1 << 1;
}

// Function: call_by_value_int @ 0x100be0
unsigned long long call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x100be8
unsigned long long param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x100c00
unsigned long long call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x100c08
unsigned long long param_array_decay(void)
{
 return 8;
}

// Function: call_array_decay @ 0x100c10
unsigned long long call_array_decay(void)
{
 return 8;
}

// Function: param_string @ 0x100c18
int param_string(byte *param_1)
{
 return (uint)param_1[1] + (uint)*param_1;
}

// Function: call_string_param @ 0x100c28
unsigned long long call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x100c30
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

// Function: call_ptr_array @ 0x100cbc
unsigned long long call_ptr_array(void)
{
 return 300;
}

// Function: param_varargs @ 0x100cc4
// Note: This is an alias for varargs_func (duplicate implementation)
// Making this static to avoid multiple definition error
static int param_varargs(int param_1, ...)
{
 uint uVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int *piVar5;
 uint local_8;
 iVar2 = 0;
 if (0 < param_1) {
 local_8 = 0xffffffc8;
 piVar5 = (int *)register0x00000008;
 do {
 uVar1 = local_8;
 if (((int)local_8 < 0) && (uVar1 = local_8 + 8, local_8 < 0xfffffff9)) {
 piVar3 = (int *)(&stack0xffffffffffffffe0 + (int)local_8);
 local_8 = local_8 + 8;
 piVar4 = piVar5;
 }
 else {
 local_8 = uVar1;
 piVar4 = piVar5 + 2;
 piVar3 = piVar5;
 }
 param_1 = param_1 + -1;
 iVar2 = *piVar3 + iVar2;
 piVar5 = piVar4;
 } while (param_1 != 0);
 }
 return iVar2;
}

// Make varargs_func an alias to param_varargs to avoid multiple definition
#define varargs_func param_varargs

// Function: call_varargs_param @ 0x100d70
void call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}

// Function: param_func_ptr @ 0x100d88
int param_func_ptr(int (*param_1)(unsigned int),unsigned int param_2)
{
 int iVar1;
 iVar1 = (*param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x100da8
unsigned long long call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x100db0
unsigned long long param_double_ptr(unsigned long long *param_1,unsigned int param_2)
{
 if ((param_1 != (unsigned long long *)0x0) && ((unsigned int *)*param_1 != (unsigned int *)0x0)) {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}

// Function: call_double_ptr @ 0x100dd8
unsigned long long call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x100de0
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

// Function: call_complex_cast @ 0x100e08
unsigned long long call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x100e14
int param_struct_byval(int *param_1)
{
 return param_1[0xf] + *param_1;
}

// Function: call_struct_byval @ 0x100e24
unsigned long long call_struct_byval(void)
{
 return 0xf;
}

// Function: param_order_dep @ 0x100e2c
int param_order_dep(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_order_dep @ 0x100e34
unsigned long long call_order_dep(void)
{
 return 3;
}

// Function: test_parameter_passing @ 0x100e3c
int test_parameter_passing(void)
{
 int iVar1;
 unsigned long uVar2;
 puts(DAT_001014f3);
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

// Function: ret_basic_type @ 0x100f20
int ret_basic_type(int param_1)
{
 return param_1 << 1;
}

// Function: call_ret_basic @ 0x100f28
unsigned long long call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x100f30
long ret_pointer(long param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x100f38
unsigned long long call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x100f40
unsigned long ret_small_struct(unsigned long param_1,long param_2)
{
 return param_1 & 0xffffffff | param_2 << 0x20;
}

// Function: call_ret_small_struct @ 0x100f4c
unsigned long long call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x100f54
void ret_large_struct(int param_1)
{
 int *in_x8;
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

// Function: call_ret_large_struct @ 0x100fac
unsigned long long call_ret_large_struct(void)
{
 return 0xd7;
}

// Function: func_a @ 0x100fb4
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x100fbc
int func_b(int param_1)
{
 return param_1 << 1;
}

// Function: ret_func_ptr @ 0x100fc4
void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_a;
 if (param_1 != 0) {
 pcVar1 = func_b;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x100fe0
unsigned long long call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x100fe8
unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)&ret_opaque_handle_handle1;
 if (param_1 != 0) {
 puVar1 = &ret_opaque_handle_handle2;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x101004
unsigned int call_ret_opaque(void)
{
 return ret_opaque_handle_handle1;
}

// Function: ret_complex_expr @ 0x101010
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 << 1;
 if (param_1 <= param_2) {
 iVar1 = param_3 + 10;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x101024
unsigned long long call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x10102c
int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = param_1 * 10 + 10;
 if (2 < param_1) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x101044
unsigned long long call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x10104c
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x101058
unsigned long long call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x101060
int test_return_values(void)
{
 int iVar1;
 puts(DAT_00101514);
 printf(DAT_001013d5,0x2a);
 printf(DAT_001013f1,0x14);
 printf(DAT_0010140d,7);
 printf(DAT_00101428,0xd7);
 printf(DAT_00101445,10);
 printf(DAT_00101461,(unsigned long)ret_opaque_handle_handle1);
 printf(DAT_0010147e,0x28);
 printf(DAT_0010149a,0x3c);
 iVar1 = printf(DAT_001014b6,0x15);
 return iVar1;
}

// Function: main @ 0x10110c
int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}

// Function: _fini @ 0x10112c
static void _fini(void)
{
 return;
}

