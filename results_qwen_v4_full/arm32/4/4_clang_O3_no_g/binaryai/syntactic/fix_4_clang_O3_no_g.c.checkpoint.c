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
typedef unsigned char byte;
typedef unsigned long long ulonglong;
typedef unsigned int uint;
typedef int bool;
#define false 0
#define true 1

// Decompiled by BinaryAI
// SHA256: 9990eb780f029a4536ac54a5574f8942cfaf30651fbd4647045e1a34072c8b5a

// Global variables
int completed_0 = 0;
extern void *__dso_handle;
unsigned int stack0x00000004 = 0;
static unsigned long long ret_opaque_handle_handle1 = 0;
static unsigned long long ret_opaque_handle_handle2 = 0;
byte DAT_000117d6[] = "Calling Conventions Test";
byte DAT_0001152c[] = "PARAM-L2-04: %d\n";
byte DAT_00011554[] = "PARAM-L2-05: %d\n";
byte DAT_00011576[] = "PARAM-L2-06: %d\n";
byte DAT_0001159d[] = "PARAM-L2-07: %d\n";
byte DAT_000115c5[] = "PARAM-L2-08: %d\n";
byte DAT_000115f1[] = "PARAM-L2-09: %d\n";
byte DAT_000117f7[] = "Parameter Passing Test";
byte DAT_00011818[] = "Return Values Test";
byte DAT_000116d9[] = "RET-L1-01: %d\n";
byte DAT_000116f5[] = "RET-L1-02: %d\n";
byte DAT_00011711[] = "RET-L1-03: %d\n";
byte DAT_0001172c[] = "RET-L1-04: %d\n";
byte DAT_00011749[] = "RET-L1-05: %d\n";
byte DAT_00011765[] = "RET-L1-06: %d\n";
byte DAT_00011782[] = "RET-L1-07: %d\n";
byte DAT_0001179e[] = "RET-L1-08: %d\n";
byte DAT_000117ba[] = "RET-L1-09: %d\n";

// External function declarations
int __libc_start_main(void *main,int argc,void *argv,void *init,void *fini,void *rtld_fini);
int puts(char *s);
int printf(char *format, ...);
size_t strlen(char *s);

// Math runtime functions (local static to avoid linker conflicts)
__attribute__((unused)) static double local_adddf3(double a, double b)
{
 return a + b;
}

__attribute__((unused)) static double local_floatsidf(int i)
{
 return (double)i;
}

__attribute__((unused)) static double local_floatdidf(long long i)
{
 return (double)i;
}

__attribute__((unused)) static int local_fixdfsi(double d)
{
 return (int)d;
}



// Helper function implementations
__attribute__((unused)) static int LZCOUNT(uint param_1)
{
 int count = 0;
 if (param_1 == 0) return 32;
 while ((param_1 & 0x80000000) == 0) {
  param_1 <<= 1;
  count++;
 }
 return count;
}

__attribute__((unused)) static int CARRY4(uint param_1,uint param_2)
{
 return (param_1 + param_2) < param_1 ? 1 : 0;
}

__attribute__((unused)) static int SCARRY4(uint param_1,uint param_2)
{
 int a = (int)param_1;
 int b = (int)param_2;
 int sum = a + b;
 return ((a ^ sum) & (b ^ sum)) < 0 ? 1 : 0;
}

__attribute__((unused)) static int SBORROW4(uint param_1,uint param_2)
{
 int a = (int)param_1;
 int b = (int)param_2;
 int diff = a - b;
 return ((a ^ b) & (a ^ diff)) < 0 ? 1 : 0;
}

__attribute__((unused)) static ulonglong CONCAT44(uint param_1,uint param_2)
{
 return ((ulonglong)param_1 << 32) | param_2;
}













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
__attribute__((unused)) static int varargs_func(int param_1, ...)
{
 int *piVar1;
 int iVar2;
 int local_c [3];
 if (0 < param_1) {
 iVar2 = 0;
 piVar1 = local_c;
 do {
 param_1 = param_1 + -1;
 iVar2 = *piVar1 + iVar2;
 piVar1 = piVar1 + 1;
 } while (param_1 != 0);
 return iVar2;
 }
 return 0;
}

// Function: func_no_args @ 0x106f8
unsigned int func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x10700
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x10730
void func_mixed_args(int param_1,char *param_2,unsigned int param_3,unsigned int param_4,
 unsigned int param_5,unsigned int param_6)
{
 size_t sVar1;
 double dVar2;
 double dVar3;
 if (param_2 == (char *)0x0) {
 sVar1 = 0;
 }
 else {
 sVar1 = strlen(param_2);
 }
 dVar2 = local_floatsidf(sVar1 + param_1);
 dVar2 = local_adddf3(dVar2, (double)param_3);
 dVar3 = local_floatdidf(param_5);
 local_adddf3(dVar2, dVar3);
 local_fixdfsi(0);
 return;
}

// Function: func_struct_byval @ 0x107a8
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

// Function: func_struct_byptr @ 0x1082c
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

// Function: test_calling_conventions @ 0x10840
static void test_calling_conventions(void)
{
 unsigned int uVar1;
 puts(&DAT_000117d6);
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
 printf(&DAT_0001152c,uVar1);
 printf(&DAT_00011554,0x2a);
 printf(&DAT_00011576,0x24);
 printf(&DAT_0001159d,0x75);
 printf(&DAT_000115c5,0x88);
 printf(&DAT_000115f1,0x32);
 return;
}

// Function: param_by_value_int @ 0x109c4
int param_by_value_int(int param_1)
{
 return param_1 << 1;
}

// Function: call_by_value_int @ 0x109cc
unsigned int call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x109d4
unsigned int param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x109e8
unsigned int call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x109f0
unsigned int param_array_decay(void)
{
 return 4;
}

// Function: call_array_decay @ 0x109f8
unsigned int call_array_decay(void)
{
 return 4;
}

// Function: param_string @ 0x10a00
int param_string(byte *param_1)
{
 return (uint)param_1[1] + (uint)*param_1;
}

// Function: call_string_param @ 0x10a10
unsigned int call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x10a18
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

// Function: call_ptr_array @ 0x10a48
unsigned int call_ptr_array(void)
{
 return 300;
}

// Function: param_varargs @ 0x10a50
__attribute__((unused)) static int param_varargs(int param_1, ...)
{
 int *piVar1;
 int iVar2;
 int local_c [3];
 if (0 < param_1) {
 iVar2 = 0;
 piVar1 = local_c;
 do {
 param_1 = param_1 + -1;
 iVar2 = *piVar1 + iVar2;
 piVar1 = piVar1 + 1;
 } while (param_1 != 0);
 return iVar2;
 }
 return 0;
}

// Function: call_varargs_param @ 0x10aa8
void call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}

// Function: param_func_ptr @ 0x10ad8
int param_func_ptr(void *param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = ((int (*)(unsigned int))param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x10af8
unsigned int call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x10b00
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

// Function: call_double_ptr @ 0x10b28
unsigned int call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x10b30
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

// Function: call_complex_cast @ 0x10b64
unsigned int call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x10b70
int param_struct_byval(int param_1)
{
 int param_11;
 return param_1 + param_11;
}

// Function: call_struct_byval @ 0x10b7c
unsigned int call_struct_byval(void)
{
 return 0xf;
}

// Function: param_order_dep @ 0x10b84
int param_order_dep(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_order_dep @ 0x10b8c
unsigned int call_order_dep(void)
{
 return 3;
}

// Function: test_parameter_passing @ 0x10b94
static void test_parameter_passing(void)
{
 unsigned int uVar1;
 puts(&DAT_000117f7);
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

// Function: ret_basic_type @ 0x10cb0
int ret_basic_type(int param_1)
{
 return param_1 << 1;
}

// Function: call_ret_basic @ 0x10cb8
static unsigned int call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x10cc0
int ret_pointer(int param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x10cc8
static unsigned int call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x10cd0
void ret_small_struct(unsigned int *param_1,unsigned int param_2,unsigned int param_3)
{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}

// Function: call_ret_small_struct @ 0x10cd8
static unsigned int call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x10ce0
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

// Function: call_ret_large_struct @ 0x10d54
static unsigned int call_ret_large_struct(void)
{
 return 0xd7;
}

// Function: func_a @ 0x10d5c
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x10d64
int func_b(int param_1)
{
 return param_1 << 1;
}

// Function: ret_func_ptr @ 0x10d6c
static void *ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x10d94
static unsigned int call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x10d9c
static unsigned long long *ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 if (param_1 != 0) {
  puVar1 = &ret_opaque_handle_handle2;
 }
 else {
  puVar1 = &ret_opaque_handle_handle1;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x10db8
static unsigned int call_ret_opaque(void)
{
 return (unsigned int)ret_opaque_handle_handle1;
}

// Function: ret_complex_expr @ 0x10dc8
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 << 1;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x10ddc
static unsigned int call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x10de4
int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x10e00
static unsigned int call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x10e08
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x10e14
static unsigned int call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x10e1c
static void test_return_values(void)
{
 puts(&DAT_00011818);
 printf(&DAT_000116d9,0x2a);
 printf(&DAT_000116f5,0x14);
 printf(&DAT_00011711,7);
 printf(&DAT_0001172c,0xd7);
 printf(&DAT_00011749,10);
 printf(&DAT_00011765,(int)ret_opaque_handle_handle1);
 printf(&DAT_00011782,0x28);
 printf(&DAT_0001179e,0x3c);
 printf(&DAT_000117ba,0x15);
 return;
}

// Function: main @ 0x10ef0
int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}





















