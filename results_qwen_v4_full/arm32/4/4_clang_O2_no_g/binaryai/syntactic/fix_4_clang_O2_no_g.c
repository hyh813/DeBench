/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>
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
typedef unsigned char byte;
typedef unsigned long long ulonglong;
typedef unsigned int uint;
typedef int bool;
#define true 1
#define false 0

// Decompiled by BinaryAI
// SHA256: abde3646d18d42949d51eab1aae3af0d65b5bc39c582c9f749c4a378ca5ef3d7

// Global variables
int completed_0 = 0;
static void *__dso_handle = 0;
unsigned int ret_opaque_handle_handle1 = 0;
unsigned long long ret_opaque_handle_handle2 = 0;
void *stack0x00000004 = 0;

// External function declarations



// Standard library function declarations
int puts(char *s);
int printf(char *format, ...);
size_t strlen(char *s);

// Data references
char DAT_0001170a[] = "Calling Conventions Test";
char DAT_00011460[] = "CALL-L2-01: %d\n";
char DAT_00011488[] = "CALL-L2-02: %d\n";
char DAT_000114aa[] = "CALL-L2-03: %d\n";
char DAT_000114d1[] = "CALL-L2-04: %d\n";
char DAT_000114f9[] = "CALL-L2-05: %d\n";
char DAT_00011525[] = "CALL-L2-06: %d\n";
char DAT_0001172b[] = "Parameter Passing Test";
char DAT_0001174c[] = "Return Values Test";
char DAT_0001160d[] = "RET-L1-01: %d\n";
char DAT_00011629[] = "RET-L1-02: %d\n";
char DAT_00011645[] = "RET-L1-03: %d\n";
char DAT_00011660[] = "RET-L1-04: %d\n";
char DAT_0001167d[] = "RET-L1-05: %d\n";
char DAT_00011699[] = "RET-L1-06: %d\n";
char DAT_000116b6[] = "RET-L1-07: %d\n";
char DAT_000116d2[] = "RET-L1-08: %d\n";
char DAT_000116ee[] = "RET-L1-09: %d\n";

// Helper macros
#define CARRY4(a,b) (((a)+(b))<(a))
#define LZCOUNT(x) __builtin_clz(x)
#define SBORROW4(a,b) ((a)<(b))
#define SCARRY4(a,b) (((a)+(b))<(a))
#define CONCAT44(hi,lo) (((ulonglong)(hi)<<32)|(lo))















// Function: cdecl_func @ 0x105c0
int cdecl_func(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_cdecl @ 0x105c8
unsigned int call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x105d0
int stdcall_func(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: call_stdcall @ 0x105dc
unsigned int call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x105e4
int fastcall_func(int param_1,int param_2,int param_3)
{
 return param_2 + param_1 + param_3;
}

// Function: call_fastcall @ 0x105f0
unsigned int call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x105f8
unsigned int call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x10600
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x10618
unsigned int call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x10620
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_mips @ 0x10630
unsigned int call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x10638
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x10658
unsigned int call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x10660
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x10678
unsigned int call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x10680
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x10690
unsigned int call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x10698
unsigned int mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func @ 0x106a0
int varargs_func(int param_1, ...)
{
 va_list args;
 int iVar2;
 int i;
 va_start(args, param_1);
 iVar2 = 0;
 for (i = 0; i < param_1; i++) {
 iVar2 += va_arg(args, int);
 }
 va_end(args);
 return iVar2;
}

// Function: func_no_args @ 0x106f0
unsigned int func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x106f8
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x10728
void func_mixed_args(int param_1,char *param_2,unsigned int param_3,unsigned int param_4,
 unsigned int param_5,unsigned int param_6)
{
 size_t sVar1;
 unsigned long long uVar2;
 unsigned long long uVar3;
 if (param_2 == (char *)0x0) {
 sVar1 = 0;
 }
 else {
 sVar1 = strlen(param_2);
 }
 uVar2 = __floatsidf(sVar1 + param_1);
 uVar2 = __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_3,param_4);
 uVar3 = __floatdidf(param_5,param_6);
 __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
 return;
}

// Function: func_struct_byval @ 0x107a0
int func_struct_byval(int param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5,
 unsigned int param_6,int param_7,unsigned int param_8,int param_9,
 unsigned int param_10,int param_11,unsigned int param_12_00,int param_12,
 unsigned int param_14_00,int param_13,unsigned int param_16_00,int param_14,
 unsigned int param_18_00,int param_15,unsigned int param_20_00,int param_16,
 unsigned int param_22,int param_17,unsigned int param_24,int param_18,
 unsigned int param_26,int param_19,unsigned int param_28,int param_20,
 unsigned int param_30,int param_21)
{
 return param_21 +
 param_20 +
 param_19 +
 param_18 +
 param_17 +
 param_16 +
 param_15 +
 param_14 + param_13 + param_12 + param_11 + param_9 + param_7 + param_5 + param_3 + param_1
 ;
}

// Function: func_struct_byptr @ 0x10824
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

// Function: test_calling_conventions @ 0x10838
void test_calling_conventions(void)
{
 unsigned int uVar1;
 puts(&DAT_0001170a);
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
 printf(&DAT_00011460,uVar1);
 printf(&DAT_00011488,0x2a);
 printf(&DAT_000114aa,0x24);
 printf(&DAT_000114d1,0x75);
 printf(&DAT_000114f9,0x88);
 printf(&DAT_00011525,0x32);
 return;
}

// Function: param_by_value_int @ 0x109bc
int param_by_value_int(int param_1)
{
 return param_1 << 1;
}

// Function: call_by_value_int @ 0x109c4
unsigned int call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x109cc
unsigned int param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x109e0
unsigned int call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x109e8
unsigned int param_array_decay(void)
{
 return 4;
}

// Function: call_array_decay @ 0x109f0
unsigned int call_array_decay(void)
{
 return 4;
}

// Function: param_string @ 0x109f8
int param_string(byte *param_1)
{
 return (uint)param_1[1] + (uint)*param_1;
}

// Function: call_string_param @ 0x10a08
unsigned int call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x10a10
int param_ptr_array(byte **param_1,int param_2)
{
 int iVar1;
 if (0 < param_2) {
 iVar1 = 0;
 do {
 param_2 = param_2 + -1;
 iVar1 = iVar1 + (uint)**param_1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: call_ptr_array @ 0x10a40
unsigned int call_ptr_array(void)
{
 return 300;
}

// Function: param_varargs @ 0x10a48
int param_varargs(int param_1, ...)
{
 va_list args;
 int iVar2;
 int i;
 va_start(args, param_1);
 iVar2 = 0;
 for (i = 0; i < param_1; i++) {
 iVar2 += va_arg(args, int);
 }
 va_end(args);
 return iVar2;
}

// Function: call_varargs_param @ 0x10a98
void call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}

// Function: param_func_ptr @ 0x10ac8
int param_func_ptr(void *param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = ((int (*)(unsigned int))param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x10ae8
unsigned int call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x10af0
unsigned int param_double_ptr(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (param_1 != (int *)0x0) {
 param_4 = (unsigned int *)*param_1;
 }
 if (param_1 != (int *)0x0 && param_4 != (unsigned int *)0x0) {
 *param_4 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}

// Function: call_double_ptr @ 0x10b18
unsigned int call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x10b20
int param_complex_cast(int *param_1,int param_2)
{
 if (param_2 == 1) {
 return param_1[1] + *param_1;
 }
 if (param_2 != 0) {
 return -1;
 }
 return *param_1;
}

// Function: call_complex_cast @ 0x10b54
unsigned int call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x10b60
int param_struct_byval(int param_1)
{
 int param_11;
 return param_1 + param_11;
}

// Function: call_struct_byval @ 0x10b6c
unsigned int call_struct_byval(void)
{
 return 0xf;
}

// Function: param_order_dep @ 0x10b74
int param_order_dep(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_order_dep @ 0x10b7c
unsigned int call_order_dep(void)
{
 return 3;
}

// Function: test_parameter_passing @ 0x10b84
void test_parameter_passing(void)
{
 unsigned int uVar1;
 puts(&DAT_0001172b);
 printf("PARAM-L1-01: %d\n",0xf);
 printf("PARAM-L1-02: %d\n",0xb);
 printf("PARAM-L2-01: %d\n",4);
 printf("PARAM-L2-02: %d\n",0xad);
 printf("PARAM-L2-03: %d\n",300);
 uVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 printf("PARAM-L2-04: %d\n",uVar1);
 printf("PARAM-L3-01: %d\n",0x14);
 printf("PARAM-L3-02: %d\n",0x15);
 printf("PARAM-L3-03: %d\n",0x12345678);
 printf("PARAM-L3-04: %d\n",0xf);
 printf("PARAM-L3-05: %d\n",3);
 return;
}

// Function: ret_basic_type @ 0x10ca0
int ret_basic_type(int param_1)
{
 return param_1 << 1;
}

// Function: call_ret_basic @ 0x10ca8
unsigned int call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x10cb0
int ret_pointer(int param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x10cb8
unsigned int call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x10cc0
void ret_small_struct(unsigned int *param_1,unsigned int param_2,unsigned int param_3)
{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}

// Function: call_ret_small_struct @ 0x10cc8
unsigned int call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x10cd0
void ret_large_struct(int *param_1,int param_2)
{
 param_1[0xc] = param_2 + 0xc;
 param_1[0xf] = param_2 + 0xf;
 param_1[8] = param_2 + 8;
 param_1[9] = param_2 + 9;
 param_1[10] = param_2 + 10;
 param_1[0xb] = param_2 + 0xb;
 param_1[0xd] = param_2 + 0xd;
 param_1[0xe] = param_2 + 0xe;
 *param_1 = param_2;
 param_1[1] = param_2 + 1;
 param_1[2] = param_2 + 2;
 param_1[3] = param_2 + 3;
 param_1[4] = param_2 + 4;
 param_1[5] = param_2 + 5;
 param_1[6] = param_2 + 6;
 param_1[7] = param_2 + 7;
 return;
}

// Function: call_ret_large_struct @ 0x10d44
unsigned int call_ret_large_struct(void)
{
 return 0xd7;
}

// Function: func_a @ 0x10d4c
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x10d54
int func_b(int param_1)
{
 return param_1 << 1;
}

// Function: ret_func_ptr @ 0x10d5c
void *ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x10d84
unsigned int call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x10d8c
unsigned long long *ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = &ret_opaque_handle_handle2;
 if (param_1 == 0) {
 puVar1 = (unsigned long long *)&ret_opaque_handle_handle1;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x10db4
unsigned int call_ret_opaque(void)
{
 return ret_opaque_handle_handle1;
}

// Function: ret_complex_expr @ 0x10dc4
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 << 1;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x10dd8
unsigned int call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x10de0
int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x10dfc
unsigned int call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x10e04
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x10e10
unsigned int call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x10e18
void test_return_values(void)
{
 puts(&DAT_0001174c);
 printf(&DAT_0001160d,0x2a);
 printf(&DAT_00011629,0x14);
 printf(&DAT_00011645,7);
 printf(&DAT_00011660,0xd7);
 printf(&DAT_0001167d,10);
 printf(&DAT_00011699,ret_opaque_handle_handle1);
 printf(&DAT_000116b6,0x28);
 printf(&DAT_000116d2,0x3c);
 printf(&DAT_000116ee,0x15);
 return;
}

// Function: main @ 0x10eec
int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}





















