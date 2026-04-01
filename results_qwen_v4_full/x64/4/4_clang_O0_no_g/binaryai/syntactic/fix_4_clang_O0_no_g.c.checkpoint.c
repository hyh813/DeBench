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

// Decompiler macro for concatenating 4-byte values
#define CONCAT44(a,b) (((unsigned long long)(a) << 32) | (unsigned int)(b))

// External function declarations
extern int __gmon_start__(void);
extern void __libc_start_main(void *main, unsigned long long argc, void *argv, void *init, void *fini, void *rtld_fini, void *stack_end);
extern size_t strlen(const char *__s);
extern int printf(const char *__format, ...);
extern void *memset(void *__s, int __c, size_t __n);
extern void __cxa_finalize(void *d);

// Global variable declarations
char DAT_00103020[] = "Calling Convention Tests:\n";
char DAT_001030e2[] = "CALL-L2-01: %d\n";
char DAT_0010310a[] = "CALL-L2-02: %d\n";
char DAT_0010312c[] = "CALL-L2-03: %d\n";
char DAT_00103153[] = "Hello";
char DAT_00103158[] = "CALL-L2-04: %d\n";
char DAT_00103180[] = "CALL-L3-01: %d\n";
char DAT_001031ac[] = "CALL-L3-02: %d\n";
char DAT_001031df[] = "str1";
char DAT_001031e3[] = "str2";
char DAT_001031e7[] = "str3";
char DAT_001031eb[] = "Parameter Passing Tests:\n";
char DAT_001032c8[] = "Return Value Tests:\n";
char DAT_001032e7[] = "RET-L1-01: %d\n";
char DAT_00103303[] = "RET-L1-02: %d\n";
char DAT_0010331f[] = "RET-L1-03: %d\n";
char DAT_0010333a[] = "RET-L1-04: %d\n";
char DAT_00103357[] = "RET-L1-05: %d\n";
char DAT_00103373[] = "RET-L1-06: %d\n";
char DAT_00103390[] = "RET-L1-07: %d\n";
char DAT_001033ac[] = "RET-L1-08: %d\n";
char DAT_001033c8[] = "RET-L1-09: %d\n";


// Forward declarations
int main(void);
int callback_func(int param_1);

// Decompiled by BinaryAI
// SHA256: 08f62152a299ed580cab82fcb606abd2135c758cceb27495e8c899e6c2087a8e



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 void (*func_ptr)(void) = (void (*)(void))0x0;
 if (func_ptr) {
  func_ptr();
 }
 return;
}

// Function: <EXTERNAL>::strlen @ 0x101030
// This is a wrapper that calls the external strlen
size_t my_strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::printf @ 0x101040
// This is a wrapper that calls the external printf
int my_printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x101050
// This is a wrapper that calls the external memset
void * my_memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101060
// This is a wrapper that calls the external __cxa_finalize
void my___cxa_finalize(void)
{
 __cxa_finalize(0);
 return;
}







static int completed_0 = 0;
static void *__dso_handle = 0;

// Function: cdecl_func @ 0x101160
int cdecl_func(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_cdecl @ 0x101180
int call_cdecl(void)
{
 return cdecl_func(5,10);
}

// Function: stdcall_func @ 0x1011a0
int stdcall_func(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: call_stdcall @ 0x1011c0
int call_stdcall(void)
{
 return stdcall_func(5,10);
}

// Function: fastcall_func @ 0x1011e0
int fastcall_func(int param_1,int param_2,int param_3)
{
 return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x101200
int call_fastcall(void)
{
 return fastcall_func(1,2,3);
}

// Function: call_thiscall @ 0x101220
int call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x101230
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x101260
int call_arm_aapcs(void)
{
 return arm_aapcs_func(1,2,3,4,5);
}

// Function: mips_func @ 0x101290
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x1012b0
int call_mips(void)
{
 return mips_func(10,0x14,0x1e,0x28);
}

// Function: amd64_sysv_func @ 0x1012d0
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x101300
int call_amd64_sysv(void)
{
 return amd64_sysv_func(1,2,3,4,5,6);
}

// Function: ms_x64_func @ 0x101330
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x101360
int call_ms_x64(void)
{
 return ms_x64_func(1,2,3,4,5);
}

// Function: vectorcall_func @ 0x101390
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x1013b0
int call_vectorcall(void)
{
 return vectorcall_func(1,2,3,4);
}

// Function: mixed_conventions_test @ 0x1013d0
int mixed_conventions_test(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = cdecl_func(1,2);
 iVar2 = stdcall_func(3,4);
 iVar3 = fastcall_func(5,6,7);
 return iVar3 + iVar2 + iVar1;
}

// Function: varargs_func @ 0x101430
int varargs_func(int param_1, ...)
{
 int local_30;
 int local_2c;
 local_2c = 0;
 for (local_30 = 0; local_30 < param_1; local_30 = local_30 + 1) {
 local_2c = local_2c + local_30 + 1;
 }
 return local_2c;
}

// Function: func_no_args @ 0x101560
unsigned long long func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x101570
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x1015b0
int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)
{
 size_t sVar1;
 int local_38;
 if (param_3 == (char *)0x0) {
 local_38 = 0;
 }
 else {
 sVar1 = strlen(param_3);
 local_38 = (int)sVar1;
 }
 return (int)((double)(param_2 + local_38) + param_1 + (double)param_4);
}

// Function: func_struct_byval @ 0x101620
unsigned long func_struct_byval(void)
{
 int local_14;
 unsigned long local_10;
 local_10 = 0;
 for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
 local_10 = local_10 + (local_14 + 1);
 }
 return local_10 & 0xffffffff;
}

// Function: func_struct_byptr @ 0x101680
int func_struct_byptr(int *param_1)
{
 int local_c;
 if (param_1 == (int *)0x0) {
 local_c = -1;
 }
 else {
 local_c = *param_1 * param_1[1];
 }
 return local_c;
}

// Function: test_calling_conventions @ 0x1016c0
void test_calling_conventions(void)
{
 uint uVar1;
 unsigned long long local_b8;
 uint local_b0;
 int local_ac;
 long local_a8 [16];
 uint local_24;
 char *local_20;
 uint local_14;
 uint local_10;
 uint local_c;
 printf(&DAT_00103020);
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
 local_c = varargs_func(5,1,2,3,4);
 printf(&DAT_001030e2,(unsigned long)local_c);
 local_10 = func_no_args();
 printf(&DAT_0010310a,(unsigned long)local_10);
 local_14 = func_many_args(1,2,3,4,5,6,7,8);
 printf(&DAT_0010312c,(unsigned long)local_14);
 local_20 = &DAT_00103153;
 local_24 = func_mixed_args(0x51eb851f,10,&DAT_00103153,100);
 printf(&DAT_00103158,(unsigned long)local_24);
 for (local_ac = 0; local_ac < 0x10; local_ac = local_ac + 1) {
 local_a8[local_ac] = (long)(local_ac + 1);
 }
 local_b0 = func_struct_byval();
 printf(&DAT_00103180,(unsigned long)local_b0);
 local_b8 = 0xa00000005;
 uVar1 = func_struct_byptr(&local_b8);
 printf(&DAT_001031ac,(unsigned long)uVar1);
 return;
}

// Function: param_by_value_int @ 0x101970
int param_by_value_int(int param_1)
{
 return param_1 << 1;
}

// Function: call_by_value_int @ 0x101990
int call_by_value_int(void)
{
 int iVar1;
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}

// Function: param_by_value_ptr @ 0x1019c0
unsigned long long param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x101a00
int call_by_value_ptr(void)
{
 int iVar1;
 int local_c;
 local_c = 5;
 iVar1 = param_by_value_ptr(&local_c);
 return local_c + iVar1;
}

// Function: param_array_decay @ 0x101a30
unsigned long long param_array_decay(char *param_1, int param_2)
{
 (void)param_1;
 (void)param_2;
 return 8;
}

// Function: call_array_decay @ 0x101a50
int call_array_decay(void)
{
 char local_38 [48];
 memset(local_38,0,0x28);
 return (int)param_array_decay(local_38,10);
}

// Function: param_string @ 0x101a80
int param_string(char *param_1)
{
 return (int)*param_1 + (int)param_1[1];
}

// Function: call_string_param @ 0x101aa0
int call_string_param(void)
{
 return param_string("Hello");
}

// Function: param_ptr_array @ 0x101ac0
int param_ptr_array(long param_1,int param_2)
{
 int local_1c;
 int local_18;
 local_18 = 0;
 for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
 local_18 = **(char **)(param_1 + (long)local_1c * 8) + local_18;
 }
 return local_18;
}

// Function: call_ptr_array @ 0x101b10
int call_ptr_array(void)
{
 char *local_28;
 char *local_20;
 char *local_18;
 local_28 = DAT_001031df;
 local_20 = DAT_001031e3;
 local_18 = DAT_001031e7;
 return param_ptr_array((long)&local_28,3);
}

// Function: param_varargs @ 0x101b50
int param_varargs(int param_1, ...)
{
 int local_30;
 int local_2c;
 local_2c = 0;
 for (local_30 = 0; local_30 < param_1; local_30 = local_30 + 1) {
 local_2c = local_2c + local_30 + 1;
 }
 return local_2c;
}

// Function: call_varargs_param @ 0x101c80
int call_varargs_param(void)
{
 return param_varargs(4,10,0x14,0x1e,0x28);
}

// Function: param_func_ptr @ 0x101cb0
int param_func_ptr(void *param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = ((int (*)(unsigned int))param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x101ce0
int call_func_ptr_param(void)
{
 return param_func_ptr((void *)callback_func,5);
}

// Function: callback_func @ 0x101d00
int callback_func(int param_1)
{
 return param_1 << 1;
}

// Function: param_double_ptr @ 0x101d10
unsigned int param_double_ptr(long *param_1,unsigned int param_2)
{
 unsigned int local_c;
 if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
 local_c = 0xffffffff;
 }
 else {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 local_c = 1;
 }
 return local_c;
}

// Function: call_double_ptr @ 0x101d70
int call_double_ptr(void)
{
 long local_18;
 int local_c;
 local_c = 10;
 local_18 = (long)&local_c;
 param_double_ptr(&local_18,0x14);
 return local_c + (unsigned int)(local_18 == 0);
}

// Function: param_complex_cast @ 0x101dc0
int param_complex_cast(int *param_1,int param_2)
{
 int local_c;
 if (param_2 == 0) {
 local_c = *param_1;
 }
 else if (param_2 == 1) {
 local_c = *param_1 + param_1[1];
 }
 else {
 local_c = -1;
 }
 return local_c;
}

// Function: call_complex_cast @ 0x101e40
int call_complex_cast(void)
{
 unsigned long long local_18;
 unsigned int local_c;
 int result1, result2;
 local_c = 0x12345678;
 local_18 = 0xc800000064;
 result1 = param_complex_cast((int *)&local_18,1);
 result2 = param_complex_cast((int *)&local_c,0);
 return result1 + result2;
}

// Function: param_struct_byval @ 0x101e80
int param_struct_byval(int param_1, int param_2)
{
 return param_1 + param_2;
}

// Function: call_struct_byval @ 0x101e90
int call_struct_byval(void)
{
 int local_4c;
 int local_48 [16];
 for (local_4c = 0; local_4c < 0x10; local_4c = local_4c + 1) {
 local_48[local_4c] = local_4c;
 }
 return param_struct_byval(local_48[0], local_48[1]);
}

// Function: param_order_dep @ 0x101f00
int param_order_dep(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_order_dep @ 0x101f20
int call_order_dep(void)
{
 return param_order_dep(1, 2);
}

// Function: test_parameter_passing @ 0x101f50
void test_parameter_passing(void)
{
 uint uVar1;
 printf(&DAT_001031eb);
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

// Function: ret_basic_type @ 0x102050
int ret_basic_type(int param_1)
{
 return param_1 << 1;
}

// Function: call_ret_basic @ 0x102060
unsigned int call_ret_basic(void)
{
 unsigned int uVar1;
 uVar1 = ret_basic_type(0x15);
 return uVar1;
}

// Function: ret_pointer @ 0x102090
void * ret_pointer(void *param_1)
{
 return (void *)((char *)param_1 + 4);
}

// Function: call_ret_pointer @ 0x1020b0
unsigned int call_ret_pointer(void)
{
 unsigned int *puVar1;
 unsigned long long local_14;
 unsigned int local_c;
 local_14 = 0x140000000a;
 local_c = 0x1e;
 puVar1 = (unsigned int *)ret_pointer(&local_14);
 return *puVar1;
}

// Function: ret_small_struct @ 0x1020f0
unsigned long long ret_small_struct(unsigned int param_1,unsigned int param_2)
{
 return CONCAT44(param_2,param_1);
}

// Function: call_ret_small_struct @ 0x102110
int call_ret_small_struct(void)
{
 unsigned long long uVar1;
 int local_10;
 int iStack_c;
 uVar1 = ret_small_struct(3,4);
 local_10 = (int)uVar1;
 iStack_c = (int)((unsigned long)uVar1 >> 0x20);
 return local_10 + iStack_c;
}

// Function: ret_large_struct @ 0x102140
void * ret_large_struct(void *param_1,int param_2)
{
 int local_10;
 for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 1) {
 *(int *)((char *)param_1 + local_10 * 4) = param_2 + local_10;
 }
 return param_1;
}

// Function: call_ret_large_struct @ 0x102190
int call_ret_large_struct(void)
{
 int local_48 [15];
 int local_c;
 local_c = 0;
 ret_large_struct(local_48,100);
 return local_48[0] + local_c;
}

// Function: func_a @ 0x1021c0
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x1021d0
int func_b(int param_1)
{
 return param_1 << 1;
}

// Function: ret_func_ptr @ 0x1021e0
void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_a;
 if (param_1 != 0) {
 pcVar1 = func_b;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x102210
int call_ret_func_ptr(void)
{
 int (*func_ptr)(int);
 func_ptr = (int (*)(int))ret_func_ptr(1);
 return func_ptr(5);
}

// Function: ret_opaque_handle @ 0x102240
unsigned long long * ret_opaque_handle(int param_1)
{
 static unsigned long long ret_opaque_handle_handle1 = 0x1000;
 static unsigned long long ret_opaque_handle_handle2 = 0x2000;
 unsigned long long *puVar1;
 puVar1 = &ret_opaque_handle_handle2;
 if (param_1 == 0) {
 puVar1 = &ret_opaque_handle_handle1;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x102270
unsigned int call_ret_opaque(void)
{
 unsigned long long *puVar1;
 puVar1 = ret_opaque_handle(0);
 return (unsigned int)*puVar1;
}

// Function: ret_complex_expr @ 0x102290
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int local_18;
 if (param_2 < param_1) {
 local_18 = param_3 << 1;
 }
 else {
 local_18 = param_3 + 10;
 }
 return local_18;
}

// Function: call_ret_complex_expr @ 0x1022d0
int call_ret_complex_expr(void)
{
 int iVar1;
 int iVar2;
 iVar1 = ret_complex_expr(5,3,10);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar1 + iVar2;
}

// Function: ret_multi_branch @ 0x102320
unsigned int ret_multi_branch(int param_1)
{
 unsigned int local_c;
 if (param_1 == 0) {
 local_c = 10;
 }
 else if (param_1 == 1) {
 local_c = 0x14;
 }
 else if (param_1 == 2) {
 local_c = 0x1e;
 }
 else {
 local_c = 0xffffffff;
 }
 return local_c;
}

// Function: call_ret_multi_branch @ 0x102390
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

// Function: ret_void @ 0x1023e0
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x102400
unsigned int call_ret_void(void)
{
 unsigned int local_c;
 ret_void(7,(int *)&local_c);
 return local_c;
}

// Function: test_return_values @ 0x102420
void test_return_values(void)
{
 uint uVar1;
 printf(&DAT_001032c8);
 uVar1 = call_ret_basic();
 printf(&DAT_001032e7,(unsigned long)uVar1);
 uVar1 = call_ret_pointer();
 printf(&DAT_00103303,(unsigned long)uVar1);
 uVar1 = call_ret_small_struct();
 printf(&DAT_0010331f,(unsigned long)uVar1);
 uVar1 = call_ret_large_struct();
 printf(&DAT_0010333a,(unsigned long)uVar1);
 uVar1 = call_ret_func_ptr();
 printf(&DAT_00103357,(unsigned long)uVar1);
 uVar1 = call_ret_opaque();
 printf(&DAT_00103373,(unsigned long)uVar1);
 uVar1 = call_ret_complex_expr();
 printf(&DAT_00103390,(unsigned long)uVar1);
 uVar1 = call_ret_multi_branch();
 printf(&DAT_001033ac,(unsigned long)uVar1);
 uVar1 = call_ret_void();
 printf(&DAT_001033c8,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x102500
int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



