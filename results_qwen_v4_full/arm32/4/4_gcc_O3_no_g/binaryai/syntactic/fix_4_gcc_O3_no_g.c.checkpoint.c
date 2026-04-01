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
typedef unsigned long long ulonglong;
typedef unsigned char byte;
typedef _Bool bool;
#define false 0
#define true 1

// Compiler intrinsics/macros
#define CONCAT44(hi, lo) (((ulonglong)(hi) << 32) | (lo))
#define CARRY4(a, b) (((a) + (b)) < (a))
#define SCARRY4(a, b) (((a) < 0) && ((b) < 0) && (((a) + (b)) >= 0))
#define SBORROW4(a, b) (((a) < 0) && ((b) >= 0) && (((a) - (b)) >= 0))
#define LZCOUNT(x) (__builtin_clz(x))

// Global variables
int completed_0 = 0;
unsigned long long handle1_1 = 0;
unsigned long long handle2_0 = 0;

// Data definitions
char DAT_0001143c[] = "Calling Conventions Test\n";
char DAT_00011500[] = "VARARGS-L1-01: %d\n";
char DAT_00011528[] = "VARARGS-L1-02: %d\n";
char DAT_0001154c[] = "VARARGS-L1-03: %d\n";
char DAT_00011574[] = "VARARGS-L1-04: %d\n";
char DAT_0001159c[] = "VARARGS-L1-05: %d\n";
char DAT_000115c8[] = "VARARGS-L1-06: %d\n";
char DAT_000115f8[] = "Parameter Passing Test\n";
char DAT_000116f8[] = "Return Values Test\n";
char DAT_00011718[] = "RET-L1-01: %d\n";
char DAT_00011734[] = "RET-L1-02: %d\n";
char DAT_00011750[] = "RET-L1-03: %d\n";
char DAT_0001176c[] = "RET-L1-04: %d\n";
char DAT_0001178c[] = "RET-L1-05: %d\n";
char DAT_000117a8[] = "RET-L1-06: %llu\n";
char DAT_000117c8[] = "RET-L1-07: %d\n";
char DAT_000117e4[] = "RET-L1-08: %d\n";
char DAT_00011800[] = "RET-L1-09: %d\n";

// External function declarations
extern int __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end));
extern ulonglong __aeabi_dadd(uint param_1, uint param_2, uint param_3, uint param_4);
extern ulonglong __floatsidf(uint param_1);

// Decompiled by BinaryAI
// SHA256: abfea577c988aec7cce6c7a618045f0c1ddb16c2642772e93719671f5de2aa02





// Function: <EXTERNAL>::__stack_chk_fail @ 0x103e4
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::puts @ 0x103f0
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x10408
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10414
int __printf_chk(int __flag, const char *__format, ...)
{
 int iVar1;
 iVar1 = __printf_chk(__flag, __format);
 return iVar1;
}

// Function: <EXTERNAL>::abort @ 0x10420
void abort(void)
{
 abort();
}

// Function: main @ 0x1042c
unsigned int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}





// Function: deregister_tm_clones @ 0x104ac
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x104d8
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10510
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: func_a @ 0x1053c
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: param_varargs.constprop.0 @ 0x10544
unsigned int param_varargs_constprop_0(int param_1, ...)
{
 return 0x2a;
}

// Function: varargs_func.constprop.0 @ 0x105b4
unsigned int varargs_func_constprop_0(int param_1, ...)
{
 return 0x2a;
}

// Function: func_b @ 0x10628
int func_b(int param_1)
{
 return param_1 << 1;
}

// Function: cdecl_func @ 0x10630
int cdecl_func(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_cdecl @ 0x10638
unsigned int call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x10640
int stdcall_func(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: call_stdcall @ 0x10648
unsigned int call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x10650
int fastcall_func(int param_1,int param_2,int param_3)
{
 return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x1065c
unsigned int call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x10664
unsigned int call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x1066c
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x10684
unsigned int call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x1068c
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x1069c
unsigned int call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x106a4
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x106c4
unsigned int call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x106cc
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x106e4
unsigned int call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x106ec
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x106fc
unsigned int call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x10704
unsigned int mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func @ 0x1070c
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

// Function: func_no_args @ 0x10790
unsigned int func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x10798
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x107c0
void func_mixed_args(int param_1,char *param_2,unsigned int param_3,unsigned int param_4,
 unsigned int param_5,unsigned int param_6)
{
 size_t sVar1;
 unsigned long long uVar2;
 unsigned long long uVar3;
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

// Function: func_struct_byval @ 0x10824
int func_struct_byval(int param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5,
 unsigned int param_6,int param_7,unsigned int param_8,int param_9,
 unsigned int param_10,int param_11,unsigned int param_12_00,int param_12,
 unsigned int param_14_00,int param_13,unsigned int param_16_00,int param_14,
 unsigned int param_18_00,int param_15,unsigned int param_20_00,int param_16,
 unsigned int param_22,int param_17,unsigned int param_24,int param_18,
 unsigned int param_26,int param_19,unsigned int param_28,int param_20,
 unsigned int param_30,int param_21)
{
 return param_1 + param_3 + param_5 + param_7 + param_9 + param_11 + param_12 + param_13 + param_14
 + param_15 + param_16 + param_17 + param_18 + param_19 + param_20 + param_21;
}

// Function: func_struct_byptr @ 0x108b8
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

// Function: test_calling_conventions @ 0x108d0
void test_calling_conventions(void)
{
 unsigned int uVar1;
 puts(&DAT_0001143c);
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
 varargs_func_constprop_0(5,1,2,3,4,5);
 __printf_chk(1,&DAT_00011500,0x2a);
 __printf_chk(1,&DAT_00011528,0x2a);
 __printf_chk(1,&DAT_0001154c,0x24);
 __printf_chk(1,&DAT_00011574,0x75);
 __printf_chk(1,&DAT_0001159c,0x88);
 __printf_chk(1,&DAT_000115c8,0x32);
 return;
}

// Function: param_by_value_int @ 0x10a4c
int param_by_value_int(int param_1)
{
 return param_1 << 1;
}

// Function: call_by_value_int @ 0x10a54
unsigned int call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x10a5c
void param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return;
}

// Function: call_by_value_ptr @ 0x10a74
unsigned int call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x10a7c
unsigned int param_array_decay(void)
{
 return 4;
}

// Function: call_array_decay @ 0x10a84
unsigned int call_array_decay(void)
{
 return 4;
}

// Function: param_string @ 0x10a8c
int param_string(byte *param_1)
{
 return (uint)*param_1 + (uint)param_1[1];
}

// Function: call_string_param @ 0x10a9c
unsigned int call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x10aa4
int param_ptr_array(int param_1,int param_2)
{
 int iVar1;
 byte **ppbVar2;
 byte **ppbVar3;
 iVar1 = 0;
 if (param_2 < 1) {
 return iVar1;
 }
 ppbVar3 = (byte **)(param_1 + -4);
 ppbVar2 = ppbVar3 + param_2;
 do {
 ppbVar3 = ppbVar3 + 1;
 iVar1 = iVar1 + (uint)**ppbVar3;
 } while (ppbVar2 != ppbVar3);
 return iVar1;
}

// Function: call_ptr_array @ 0x10ad4
unsigned int call_ptr_array(void)
{
 return 300;
}

// Function: param_varargs @ 0x10adc
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

// Function: call_varargs_param @ 0x10b60
void call_varargs_param(void)
{
 param_varargs_constprop_0(4,10,0x14,0x1e,0x28);
 return;
}

// Function: param_func_ptr @ 0x10b8c
int param_func_ptr(void *param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = ((int (*)(unsigned int))param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x10ba4
unsigned int call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x10bac
unsigned int param_double_ptr(unsigned int *param_1,unsigned int param_2)
{
 if ((param_1 != (unsigned int *)0x0) && ((unsigned int *)*param_1 != (unsigned int *)0x0)) {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 return 1;
 }
 return 0xffffffff;
}

// Function: call_double_ptr @ 0x10bdc
unsigned int call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x10be4
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

// Function: call_complex_cast @ 0x10c08
unsigned int call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x10c14
int param_struct_byval(int param_1)
{
 int param_11;
 return param_1 + param_11;
}

// Function: call_struct_byval @ 0x10c30
unsigned int call_struct_byval(void)
{
 return 0xf;
}

// Function: param_order_dep @ 0x10c38
int param_order_dep(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_order_dep @ 0x10c40
unsigned int call_order_dep(void)
{
 return 4;
}

// Function: test_parameter_passing @ 0x10c48
void test_parameter_passing(void)
{
 unsigned int uVar1;
 puts(&DAT_000115f8);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",4);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 __printf_chk(1,"PARAM-L2-03: %d\n",300);
 param_varargs_constprop_0(4,10,0x14,0x1e,0x28);
 __printf_chk(1,"PARAM-L2-04: %d\n",0x2a);
 __printf_chk(1,"PARAM-L3-01: %d\n",0x14);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 __printf_chk(1,"PARAM-L3-04: %d\n",0xf);
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
}

// Function: ret_basic_type @ 0x10d60
int ret_basic_type(int param_1)
{
 return param_1 << 1;
}

// Function: call_ret_basic @ 0x10d68
unsigned int call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x10d70
int ret_pointer(int param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x10d78
unsigned int call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x10d80
void ret_small_struct(unsigned int *param_1,unsigned int param_2,unsigned int param_3)
{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}

// Function: call_ret_small_struct @ 0x10d88
unsigned int call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x10d90
void ret_large_struct(int *param_1,int param_2)
{
 *param_1 = param_2;
 param_1[1] = param_2 + 1;
 param_1[2] = param_2 + 2;
 param_1[3] = param_2 + 3;
 param_1[4] = param_2 + 4;
 param_1[5] = param_2 + 5;
 param_1[6] = param_2 + 6;
 param_1[7] = param_2 + 7;
 param_1[8] = param_2 + 8;
 param_1[9] = param_2 + 9;
 param_1[10] = param_2 + 10;
 param_1[0xb] = param_2 + 0xb;
 param_1[0xc] = param_2 + 0xc;
 param_1[0xd] = param_2 + 0xd;
 param_1[0xe] = param_2 + 0xe;
 param_1[0xf] = param_2 + 0xf;
 return;
}

// Function: call_ret_large_struct @ 0x10e0c
unsigned int call_ret_large_struct(void)
{
 return 0xd7;
}

// Function: ret_func_ptr @ 0x10e14
void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x10e34
unsigned int call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x10e3c
unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = (unsigned long long *)&handle1_1;
 if (param_1 != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x10e58
unsigned int call_ret_opaque(void)
{
 return handle1_1;
}

// Function: ret_complex_expr @ 0x10e68
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

// Function: call_ret_complex_expr @ 0x10e78
unsigned int call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x10e80
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

// Function: call_ret_multi_branch @ 0x10e98
unsigned int call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x10ea0
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x10eac
unsigned int call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x10eb4
void test_return_values(void)
{
 puts(&DAT_000116f8);
 __printf_chk(1,&DAT_00011718,0x2a);
 __printf_chk(1,&DAT_00011734,0x14);
 __printf_chk(1,&DAT_00011750,7);
 __printf_chk(1,&DAT_0001176c,0xd7);
 __printf_chk(1,&DAT_0001178c,10);
 __printf_chk(1,&DAT_000117a8,handle1_1);
 __printf_chk(1,&DAT_000117c8,0x28);
 __printf_chk(1,&DAT_000117e4,0x3c);
 __printf_chk(1,&DAT_00011800,0x15);
 return;
}





















