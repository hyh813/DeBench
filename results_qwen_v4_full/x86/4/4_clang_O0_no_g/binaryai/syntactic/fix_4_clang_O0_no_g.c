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
typedef long long longlong;
typedef unsigned char byte;

// Forward declarations for external functions
int main(void);
void __gmon_start__(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);
void __x86_get_pc_thunk_di(void);
int __libc_start_main(int (*main)(void), int argc, void *argv, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end);
int printf(const char *format, ...);
size_t strlen(const char *s);
void *memset(void *s, int c, size_t n);

// Forward declarations for internal functions
void FUN_00011030(void);
void FUN_00011080(unsigned int param_1);
void _start(unsigned int param_1,unsigned int param_2);
void __i686_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_bx(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void __x86_get_pc_thunk_dx(void);
void __x86_get_pc_thunk_di(void);
int cdecl_func(int param_1,int param_2);
void call_cdecl(void);
int stdcall_func(int param_1,int param_2);
void call_stdcall(void);
int fastcall_func(unsigned int param_1_00,int param_2,int param_3,int param_1);
void call_fastcall(void);
unsigned int call_thiscall(void);
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5);
void call_arm_aapcs(void);
int mips_func(int param_1,int param_2,int param_3,int param_4);
void call_mips(void);
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
void call_amd64_sysv(void);
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5);
void call_ms_x64(void);
int vectorcall_func(int param_1,int param_2,int param_3,int param_4);
void call_vectorcall(void);
int mixed_conventions_test(void);
int varargs_func(int param_1, ...);
unsigned int func_no_args(void);
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8, ...);
int func_mixed_args(int param_1,char *param_2,double param_3,longlong param_4, ...);
int func_struct_byval(void);
int func_struct_byptr(int *param_1);
void test_calling_conventions(void);
int param_by_value_int(int param_1);
int call_by_value_int(void);
unsigned int param_by_value_ptr(int *param_1);
int call_by_value_ptr(void);
unsigned int param_array_decay(char *param_1, int param_2);
unsigned int call_array_decay(void);
int param_string(char *param_1);
unsigned int call_string_param(void);
int param_ptr_array(int param_1,int param_2);
unsigned int call_ptr_array(void);
int param_varargs(int param_1, ...);
unsigned int call_varargs_param(void);
int param_func_ptr(int (*param_1)(unsigned int),unsigned int param_2);
unsigned int call_func_ptr_param(void);
int callback_func(int param_1);
unsigned int param_double_ptr(int *param_1,unsigned int param_2);
int call_double_ptr(void);
int param_complex_cast(int *param_1,int param_2);
unsigned int call_complex_cast(void);
int param_struct_byval(void);
unsigned int call_struct_byval(void);
int param_order_dep(int param_1,int param_2);
unsigned int call_order_dep(void);
void test_parameter_passing(void);
int ret_basic_type(int param_1);
unsigned int call_ret_basic(void);
int ret_pointer(int param_1);
unsigned int call_ret_pointer(void);
unsigned int * ret_small_struct(unsigned int *param_1,unsigned int param_2,unsigned int param_3);
int call_ret_small_struct(void);
int ret_large_struct(int param_1,int param_2);
int call_ret_large_struct(void);
int func_a(int param_1);
int func_b(int param_1);
void * ret_func_ptr(int param_1);
void call_ret_func_ptr(void);
unsigned long long * ret_opaque_handle(int param_1);
unsigned int call_ret_opaque(void);
int ret_complex_expr(int param_1,int param_2,int param_3);
int call_ret_complex_expr(void);
unsigned int ret_multi_branch(int param_1);
int call_ret_multi_branch(void);
void ret_void(int param_1,int *param_2);
unsigned int call_ret_void(void);
void test_return_values(void);
void __do_global_ctors_aux(void);
void _fini(void);

// Data declarations
extern char DAT_00013008[];
int stack0x00000004 = 0;
int stack0x00000008 = 0;
int stack0xfffffec4 = 0;
extern char DAT_000130ca[];
extern char DAT_000130f2[];
extern char DAT_00013114[];
char DAT_0001313b[] = "Hello";
extern char DAT_00013140[];
char DAT_000131c7[] = "test1";
char DAT_000131cb[] = "test2";
char DAT_000131cf[] = "test3";
extern char DAT_000131d3[];
extern char DAT_000132b0[];
extern char DAT_000132cf[];
extern char DAT_000132eb[];
extern char DAT_00013307[];
extern char DAT_00013322[];
extern char DAT_0001333f[];
extern char DAT_0001335b[];
extern char DAT_00013378[];
extern char DAT_00013394[];
extern char DAT_000133b0[];
extern void *_GLOBAL_OFFSET_TABLE_;
unsigned long long ret_opaque_handle_handle1 = 0;
unsigned long long ret_opaque_handle_handle2 = 0;

// Macro definitions
#define ROUND(x) ((int)(x))

// Decompiled by BinaryAI
// SHA256: c5b5e0eafb5432bbe0022b8bd9e5b20d5d020fc996374abb22733f53e2f7e48b



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 ((void (*)(void))0)();
 return;
}









// Function: FUN_00011080 @ 0x11080
void FUN_00011080(unsigned int param_1)
{
 ((void (*)(void))param_1)();
 return;
}



// Function: __i686.get_pc_thunk.bx @ 0x110bc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x110c0
void __x86_get_pc_thunk_bx(void)
{
 return;
}







// Function: __x86.get_pc_thunk.dx @ 0x111f9
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x111fd
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: cdecl_func @ 0x11210
int cdecl_func(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_cdecl @ 0x11230
void call_cdecl(void)
{
 cdecl_func(5,10);
 return;
}

// Function: stdcall_func @ 0x11260
int stdcall_func(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: call_stdcall @ 0x11280
void call_stdcall(void)
{
 stdcall_func(5,10);
 return;
}

// Function: fastcall_func @ 0x112b0
int fastcall_func(unsigned int param_1_00,int param_2,int param_3,int param_1)
{
 return param_3 + param_2 + param_1;
}

// Function: call_fastcall @ 0x112d0
void call_fastcall(void)
{
 fastcall_func(3, 0, 0, 0);
 return;
}

// Function: call_thiscall @ 0x11300
unsigned int call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x11310
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x11340
void call_arm_aapcs(void)
{
 arm_aapcs_func(1,2,3,4,5);
 return;
}

// Function: mips_func @ 0x11390
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x113b0
void call_mips(void)
{
 mips_func(10,0x14,0x1e,0x28);
 return;
}

// Function: amd64_sysv_func @ 0x113f0
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x11420
void call_amd64_sysv(void)
{
 amd64_sysv_func(1,2,3,4,5,6);
 return;
}

// Function: ms_x64_func @ 0x11470
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x114a0
void call_ms_x64(void)
{
 ms_x64_func(1,2,3,4,5);
 return;
}

// Function: vectorcall_func @ 0x114f0
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x11510
void call_vectorcall(void)
{
 vectorcall_func(1,2,3,4);
 return;
}

// Function: mixed_conventions_test @ 0x11550
int mixed_conventions_test(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = cdecl_func(1,2);
 iVar2 = stdcall_func(3,4);
 iVar3 = fastcall_func(7, 0, 0, 0);
 return iVar3 + iVar2 + iVar1;
}

// Function: varargs_func @ 0x115e0
int varargs_func(int param_1, ...)
{
 int local_10;
 int local_c;
 int *local_8;
 local_c = 0;
 local_8 = (int *)&stack0x00000008;
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 local_c = *local_8 + local_c;
 local_8 = local_8 + 1;
 }
 return local_c;
}

// Function: func_no_args @ 0x11640
unsigned int func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x11650
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8, ...)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x11690
int func_mixed_args(int param_1,char *param_2,double param_3,longlong param_4, ...)
{
 size_t local_20;
 if (param_2 == (char *)0x0) {
 local_20 = 0;
 }
 else {
 local_20 = strlen(param_2);
 }
 return (int)ROUND((double)param_4 + param_3 + (double)(param_1 + local_20));
}

// Function: func_struct_byval @ 0x11730
int func_struct_byval(void)
{
 int local_18;
 int local_14;
 local_14 = 0;
 for (local_18 = 0; local_18 < 0x10; local_18 = local_18 + 1) {
 local_14 = local_14 + *(int *)(&stack0x00000004 + local_18 * 8);
 }
 return local_14;
}

// Function: func_struct_byptr @ 0x11790
int func_struct_byptr(int *param_1)
{
 int local_8;
 if (param_1 == (int *)0x0) {
 local_8 = -1;
 }
 else {
 local_8 = *param_1 * param_1[1];
 }
 return local_8;
}

// Function: test_calling_conventions @ 0x117d0
void test_calling_conventions(void)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 byte bVar4;
 char **local_bc;
 int local_a8;
 int local_a4 [33];
 char *local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
  bVar4 = 0;
  local_bc = &_GLOBAL_OFFSET_TABLE_;
  printf("Testing calling conventions...\n");
  call_cdecl();
 printf("CALL-L1-01: %d\n", 0);
  call_stdcall();
 printf("CALL-L1-02: %d\n", 0);
  call_fastcall();
 printf("CALL-L1-03: %d\n", 0);
  call_thiscall();
 printf("CALL-L1-04: %d\n", 0);
  call_arm_aapcs();
 printf("CALL-L1-05: %d\n", 0);
  call_mips();
 printf("CALL-L1-06: %d\n", 0);
  call_amd64_sysv();
 printf("CALL-L1-07: %d\n", 0);
  call_ms_x64();
 printf("CALL-L1-08: %d\n", 0);
  call_vectorcall();
 printf("CALL-L1-09: %d\n", 0);
  mixed_conventions_test();
 printf("CALL-L1-10: %d\n", 0);
  local_14 = varargs_func(3, 10, 20, 30);
 printf("VARARGS: %d\n", local_14);
  local_18 = func_no_args();
 printf("NO_ARGS: %d\n", local_18);
  local_1c = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
 printf("MANY_ARGS: %d\n", local_1c);
 local_20 = &DAT_0001313b;
  local_a4[32] = func_mixed_args(5, local_20, 3.14, 100);
 printf("MIXED_ARGS: %d\n", local_a4[32]);
 for (local_a8 = 0; local_a8 < 0x10; local_a8 = local_a8 + 1) {
 local_a4[local_a8 * 2] = local_a8 + 1;
 local_a4[local_a8 * 2 + 1] = local_a8 + 1 >> 0x1f;
 }
 piVar2 = local_a4;
 piVar3 = (int *)&stack0xfffffec4;
 for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
 *piVar3 = *piVar2;
 piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
 piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
 }
  iVar1 = func_struct_byval();
 printf("STRUCT_BYVAL: %d\n", iVar1);
  iVar1 = func_struct_byptr(local_a4);
 printf("STRUCT_BYPTR: %d\n", iVar1);
 return;
}

// Function: param_by_value_int @ 0x11b90
int param_by_value_int(int param_1)
{
 return param_1 << 1;
}

// Function: call_by_value_int @ 0x11bb0
int call_by_value_int(void)
{
 int iVar1;
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}

// Function: param_by_value_ptr @ 0x11bf0
unsigned int param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x11c20
int call_by_value_ptr(void)
{
 int iVar1;
 int local_c;
 local_c = 5;
 iVar1 = param_by_value_ptr(&local_c);
 return local_c + iVar1;
}

// Function: param_array_decay @ 0x11c60
unsigned int param_array_decay(char *param_1, int param_2)
{
 return 4;
}

// Function: call_array_decay @ 0x11c70
unsigned int call_array_decay(void)
{
 char local_30 [40];
 memset(local_30,0,0x28);
 param_array_decay(local_30,10);
 return 0;
}

// Function: param_string @ 0x11cc0
int param_string(char *param_1)
{
 return (int)*param_1 + (int)param_1[1];
}

// Function: call_string_param @ 0x11ce0
unsigned int call_string_param(void)
{
 param_string("Hello");
 return 0;
}

// Function: param_ptr_array @ 0x11d10
int param_ptr_array(int param_1,int param_2)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_8 = **(char **)(param_1 + local_c * 4) + local_8;
 }
 return local_8;
}

// Function: call_ptr_array @ 0x11d60
unsigned int call_ptr_array(void)
{
 char *local_14;
 char *local_10;
 char *local_c;
 local_14 = &DAT_000131c7;
 local_10 = &DAT_000131cb;
 local_c = &DAT_000131cf;
 param_ptr_array(&local_14,3);
 return 0;
}

// Function: param_varargs @ 0x11db0
int param_varargs(int param_1, ...)
{
 int local_10;
 int local_c;
 int *local_8;
 local_c = 0;
 local_8 = (int *)&stack0x00000008;
 for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
 local_c = *local_8 + local_c;
 local_8 = local_8 + 1;
 }
 return local_c;
}

// Function: call_varargs_param @ 0x11e10
unsigned int call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28);
 return 0;
}

// Function: param_func_ptr @ 0x11e60
int param_func_ptr(int (*param_1)(unsigned int),unsigned int param_2)
{
 int iVar1;
 iVar1 = param_1(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x11e90
unsigned int call_func_ptr_param(void)
{
 param_func_ptr(callback_func,5);
 return 0;
}

// Function: callback_func @ 0x11ec0
int callback_func(int param_1)
{
 return param_1 << 1;
}

// Function: param_double_ptr @ 0x11ed0
unsigned int param_double_ptr(int *param_1,unsigned int param_2)
{
 unsigned int local_8;
 if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
 local_8 = 0xffffffff;
 }
 else {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 local_8 = 1;
 }
 return local_8;
}

// Function: call_double_ptr @ 0x11f20
int call_double_ptr(void)
{
 int *local_14;
 int local_10;
 local_10 = 10;
 local_14 = &local_10;
 param_double_ptr(&local_14,0x14);
 return local_10 + (uint)(local_14 == (int *)0x0);
}

// Function: param_complex_cast @ 0x11f80
int param_complex_cast(int *param_1,int param_2)
{
 int local_8;
 if (param_2 == 0) {
 local_8 = *param_1;
 }
 else if (param_2 == 1) {
 local_8 = *param_1 + param_1[1];
 }
 else {
 local_8 = -1;
 }
 return local_8;
}

// Function: call_complex_cast @ 0x11ff0
unsigned int call_complex_cast(void)
{
 unsigned int local_14;
 unsigned int local_10;
 unsigned int local_c;
 local_c = 0x12345678;
 local_14 = 100;
 local_10 = 200;
 param_complex_cast(&local_14,1);
 param_complex_cast(&local_c,0);
 return 0;
}

// Function: param_struct_byval @ 0x12050
int param_struct_byval(void)
{
 int param_1;
 int param_11;
 param_1 = 0;
 param_11 = 0;
 return param_1 + param_11;
}

// Function: call_struct_byval @ 0x12060
unsigned int call_struct_byval(void)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int aiStack_9c [16];
 char **local_5c;
 int local_58;
 int local_54 [17];
 local_5c = &_GLOBAL_OFFSET_TABLE_;
 for (local_58 = 0; local_58 < 0x10; local_58 = local_58 + 1) {
 local_54[local_58] = local_58;
 }
 piVar2 = local_54;
 piVar3 = aiStack_9c;
 for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
 *piVar3 = *piVar2;
 piVar2 = piVar2 + 1;
 piVar3 = piVar3 + 1;
 }
 param_struct_byval();
 return 0;
}

// Function: param_order_dep @ 0x120d0
int param_order_dep(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_order_dep @ 0x120f0
unsigned int call_order_dep(void)
{
 param_order_dep(1,2);
 return 0;
}

// Function: test_parameter_passing @ 0x12130
void test_parameter_passing(void)
{
 unsigned int uVar1;
  printf("Testing parameter passing...\n");
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
 printf("PARAM-L3-05: %d\n",uVar1);
 return;
}

// Function: ret_basic_type @ 0x122a0
int ret_basic_type(int param_1)
{
 return param_1 << 1;
}

// Function: call_ret_basic @ 0x122b0
unsigned int call_ret_basic(void)
{
 unsigned int uVar1;
 uVar1 = ret_basic_type(0x15);
 return uVar1;
}

// Function: ret_pointer @ 0x122f0
int ret_pointer(int param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x12300
unsigned int call_ret_pointer(void)
{
 unsigned int local_14;
 unsigned int local_10;
 unsigned int local_c;
 local_14 = 10;
 local_10 = 0x14;
 local_c = 0x1e;
 local_14 = ret_pointer(local_14);
 return local_14;
}

// Function: ret_small_struct @ 0x12350
unsigned int * ret_small_struct(unsigned int *param_1,unsigned int param_2,unsigned int param_3)
{
 *param_1 = param_2;
 param_1[1] = param_3;
 return param_1;
}

// Function: call_ret_small_struct @ 0x12370
int call_ret_small_struct(void)
{
 int local_14;
 int local_10;
 ret_small_struct(&local_14,3,4);
 return local_14 + local_10;
}

// Function: ret_large_struct @ 0x123b0
int ret_large_struct(int param_1,int param_2)
{
 int local_8;
 for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
 *(int *)(param_1 + local_8 * 4) = param_2 + local_8;
 }
 return param_1;
}

// Function: call_ret_large_struct @ 0x12400
int call_ret_large_struct(void)
{
 int local_4c [15];
 int local_10;
 ret_large_struct(local_4c,100);
 return local_4c[0] + local_10;
}

// Function: func_a @ 0x12440
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x12450
int func_b(int param_1)
{
 return param_1 << 1;
}

// Function: ret_func_ptr @ 0x12460
void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_a;
 if (param_1 != 0) {
 pcVar1 = func_b;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x12490
void call_ret_func_ptr(void)
{
 void *pcVar1;
 pcVar1 = (void *)ret_func_ptr(1);
 ((int (*)(int))pcVar1)(5);
 return;
}

// Function: ret_opaque_handle @ 0x124d0
unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = &ret_opaque_handle_handle2;
 if (param_1 == 0) {
 puVar1 = (unsigned long long *)&ret_opaque_handle_handle1;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x12500
unsigned int call_ret_opaque(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)ret_opaque_handle(0);
 return *puVar1;
}

// Function: ret_complex_expr @ 0x12530
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int local_8;
 if (param_2 < param_1) {
 local_8 = param_3 << 1;
 }
 else {
 local_8 = param_3 + 10;
 }
 return local_8;
}

// Function: call_ret_complex_expr @ 0x12570
int call_ret_complex_expr(void)
{
 int iVar1;
 int iVar2;
 iVar1 = ret_complex_expr(5,3,10);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar1 + iVar2;
}

// Function: ret_multi_branch @ 0x125e0
unsigned int ret_multi_branch(int param_1)
{
 unsigned int local_8;
 if (param_1 == 0) {
 local_8 = 10;
 }
 else if (param_1 == 1) {
 local_8 = 0x14;
 }
 else if (param_1 == 2) {
 local_8 = 0x1e;
 }
 else {
 local_8 = 0xffffffff;
 }
 return local_8;
}

// Function: call_ret_multi_branch @ 0x12660
int call_ret_multi_branch(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = ret_multi_branch(0);
 iVar2 = ret_multi_branch(1);
 iVar3 = ret_multi_branch(2);
 return iVar3 + iVar2 + iVar1;
}

// Function: ret_void @ 0x126d0
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x126f0
unsigned int call_ret_void(void)
{
 unsigned int local_c;
 ret_void(7,&local_c);
 return local_c;
}

// Function: test_return_values @ 0x12720
void test_return_values(void)
{
 unsigned int uVar1;
  printf("Testing return values...\n");
 uVar1 = call_ret_basic();
  printf("RET_BASIC: %d\n", uVar1);
 uVar1 = call_ret_pointer();
  printf("RET_POINTER: %d\n", uVar1);
 uVar1 = call_ret_small_struct();
  printf("RET_SMALL_STRUCT: %d\n", uVar1);
 uVar1 = call_ret_large_struct();
  printf("RET_LARGE_STRUCT: %d\n", uVar1);
  call_ret_func_ptr();
  printf("RET_FUNC_PTR: %d\n", 0);
 uVar1 = call_ret_opaque();
  printf("RET_OPAQUE: %d\n", uVar1);
 uVar1 = call_ret_complex_expr();
  printf("RET_COMPLEX_EXPR: %d\n", uVar1);
 uVar1 = call_ret_multi_branch();
  printf("RET_MULTI_BRANCH: %d\n", uVar1);
 uVar1 = call_ret_void();
  printf("RET_VOID: %d\n", uVar1);
 return;
}

// Function: main @ 0x12850
int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}





