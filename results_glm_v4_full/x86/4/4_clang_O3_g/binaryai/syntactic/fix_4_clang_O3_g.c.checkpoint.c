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
#define true 1

// Decompiled by BinaryAI
// SHA256: 3962551a40d0b49952d6ad888152b2cc42229b16c129ed9f63d85b2f8b9c8b52

// Forward declarations
unsigned int main(void);

#include <stdarg.h>

// External functions
void __x86_get_pc_thunk_di(void);

// Data declarations
extern char DAT_00012352[];
extern char DAT_000120a8[];
extern char DAT_000120d0[];
extern char DAT_000120f2[];
extern char DAT_00012119[];
extern char DAT_00012141[];
extern char DAT_0001216d[];
extern char DAT_00012373[];
extern char DAT_00012394[];
extern char DAT_00012255[];
extern char DAT_00012271[];
extern char DAT_0001228d[];
extern char DAT_000122a8[];
extern char DAT_000122c5[];
extern char DAT_000122e1[];
extern char DAT_000122fe[];
extern char DAT_0001231a[];
extern char DAT_00012336[];

// Undefined variable placeholder
extern int ret_opaque_handle_handle1;

// Macro placeholders
#define ROUND(x) ((int)(x))
#define CONCAT44(a,b) (((uint64_t)(a) << 32) | (uint64_t)(b))



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 (*(void (*)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
void __libc_start_main(unsigned int (*main)(void), int argc, char **argv, 
                       void (*init)(void), void (*fini)(void), 
                       void (*rtld_fini)(void), void *stack_end);

// Function: <EXTERNAL>::printf @ 0x11050
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x11060
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x11070
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: FUN_00011080 @ 0x11080
void FUN_00011080(int param_1)
{
 ((void (*)(void))(*(int *)(param_1 + -0x10)))();
 return;
}



// Function: __i686.get_pc_thunk.bx @ 0x110bc
void __i686_get_pc_thunk_bx(void)
{
 return;
}



// Function: __x86.get_pc_thunk.dx @ 0x111f9
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @x
void __x86_get_pc_thunk_di(void)
{
 return;
}



// Function: cdecl_func @ 0x11210
int cdecl_func(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_cdecl @ 0x11220
unsigned int call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x11230
int stdcall_func(int param_1,int param_2)
{
 return param_2 * param_1;
}

// Function: call_stdcall @ 0x11240
unsigned int call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x11250
int __attribute__((regparm(3))) fastcall_func(unsigned int param_1_00,int param_2,int param_3,int param_1)
{
 return param_3 + param_2 + param_1;
}

// Function: call_fastcall @ 0x11260
unsigned int call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x11270
unsigned int call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x11280
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x112a0
unsigned int call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x112b0
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_mips @ 0x112d0
unsigned int call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x112e0
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x11300
unsigned int call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x11310
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x11330
unsigned int call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x11340
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_2 + param_1 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x11360
unsigned int call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x11370
unsigned int mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func @ 0x11380
int varargs_func(uint param_1, ...)
{
 va_list args;
 int iVar2;
 uint uVar3;
 int i;
 int values[4];
 
 va_start(args, param_1);
 
 iVar2 = 0;
 uVar3 = param_1;
 
 while (uVar3 > 0) {
 uint batch = (uVar3 >= 4) ? 4 : uVar3;
 for (i = 0; i < batch; i++) {
 values[i] = va_arg(args, int);
 iVar2 += values[i];
 }
 uVar3 -= batch;
 }
 
 va_end(args);
 return iVar2;
}

// Function: func_no_args @ 0x11420
unsigned int func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x11430
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x11460
int func_mixed_args(int param_1,char *param_2,double param_3,unsigned int param_4,unsigned int param_5)
{
 size_t sVar1;
 if (param_2 == (char *)0x0) {
 sVar1 = 0;
 }
 else {
 sVar1 = strlen(param_2);
 }
 return (int)ROUND((double)CONCAT44(param_5,param_4) + param_3 + (double)(sVar1 + param_1));
}

// Function: func_struct_byval @ 0x114f0
int func_struct_byval(int param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5,
 unsigned int param_6,int param_7,unsigned int param_8,int param_9,
 unsigned int param_10,int param_11,unsigned int param_12_00,int param_12,
 unsigned int param_14_00,int param_13,unsigned int param_16_00,int param_14,
 unsigned int param_18_00,int param_15,unsigned int param_20_00,int param_16,
 unsigned int param_22,int param_17,unsigned int param_24,int param_18,
 unsigned int param_26,int param_19,unsigned int param_28,int param_20,
 unsigned int param_30,int param_21)
{
 return param_3 + param_1 + param_5 + param_7 + param_9 + param_11 + param_12 + param_13 + param_14
 + param_15 + param_16 + param_17 + param_18 + param_19 + param_20 + param_21;
}

// Function: func_struct_byptr @ 0x11540
int func_struct_byptr(int *param_1)
{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}

// Function: test_calling_conventions @ 0x11560
void test_calling_conventions(void)
{
 unsigned int uVar1;
 puts(&DAT_00012352);
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
 printf(&DAT_000120a8,uVar1);
 printf(&DAT_000120d0,0x2a);
 printf(&DAT_000120f2,0x24);
 printf(&DAT_00012119,0x75);
 printf(&DAT_00012141,0x88);
 printf(&DAT_0001216d,0x32);
 return;
}

// Function: param_by_value_int @ 0x116b0
int param_by_value_int(int param_1)
{
 return param_1 * 2;
}

// Function: call_by_value_int @ 0x116c0
unsigned int call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x116d0
unsigned int param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x116e0
unsigned int call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x116f0
unsigned int param_array_decay(void)
{
 return 4;
}

// Function: call_array_decay @ 0x11700
unsigned int call_array_decay(void)
{
 return 4;
}

// Function: param_string @ 0x11710
int param_string(char *param_1)
{
 return (int)param_1[1] + (int)*param_1;
}

// Function: call_string_param @ 0x11720
unsigned int call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x11730
int param_ptr_array(int param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 uint uVar3;
 if ((int)param_2 < 1) {
 iVar1 = 0;
 }
 else {
 if (param_2 - 1 < 3) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = (int)**(char **)(param_1 + 0xc + uVar2 * 4) +
 (int)**(char **)(param_1 + 8 + uVar2 * 4) +
 (int)**(char **)(param_1 + 4 + uVar2 * 4) + **(char **)(param_1 + uVar2 * 4) + iVar1
 ;
 uVar2 = uVar2 + 4;
 } while ((param_2 & 0xfffffffc) != uVar2);
 }
 if ((param_2 & 3) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + **(char **)(param_1 + uVar2 * 4 + uVar3 * 4);
 uVar3 = uVar3 + 1;
 } while ((param_2 & 3) != uVar3);
 }
 }
 return iVar1;
}

// Function: call_ptr_array @ 0x117c0
unsigned int call_ptr_array(void)
{
 return 300;
}

// Function: param_varargs @ 0x117d0
int param_varargs(uint param_1, ...)
{
 va_list args;
 int iVar2;
 uint uVar3;
 int i;
 int values[4];
 
 va_start(args, param_1);
 
 iVar2 = 0;
 uVar3 = param_1;
 
 while (uVar3 > 0) {
 uint batch = (uVar3 >= 4) ? 4 : uVar3;
 for (i = 0; i < batch; i++) {
 values[i] = va_arg(args, int);
 iVar2 += values[i];
 }
 uVar3 -= batch;
 }
 
 va_end(args);
 return iVar2;
}

// Function: call_varargs_param @ 0x11870
void call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}

// Function: param_func_ptr @ 0x118a0
int param_func_ptr(void *param_1,unsigned int param_2)
{
 int iVar1;
 iVar1 = ((int (*)(unsigned int))param_1)(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x118d0
unsigned int call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x118e0
unsigned int param_double_ptr(int *param_1,unsigned int param_2)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (int *)0x0) && ((unsigned int *)*param_1 != (unsigned int *)0x0)) {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}

// Function: call_double_ptr @ 0x11910
unsigned int call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x11920
int param_complex_cast(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 == 1) {
 iVar1 = param_1[1] + *param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 0) {
 return *param_1;
 }
 }
 return iVar1;
}

// Function: call_complex_cast @ 0x11940
unsigned int call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x11950
int param_struct_byval(int param_1)
{
 int param_11;
 return param_11 + param_1;
}

// Function: call_struct_byval @ 0x11960
unsigned int call_struct_byval(void)
{
 return 0xf;
}

// Function: param_order_dep @ 0x11970
int param_order_dep(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_order_dep @ 0x11980
unsigned int call_order_dep(void)
{
 return 3;
}

// Function: test_parameter_passing @ 0x11990
void test_parameter_passing(void)
{
 unsigned int uVar1;
 puts(&DAT_00012373);
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

// Function: ret_basic_type @ 0x11a90
int ret_basic_type(int param_1)
{
 return param_1 * 2;
}

// Function: call_ret_basic @ 0x11aa0
unsigned int call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x11ab0
int ret_pointer(int param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x11ac0
unsigned int call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x11ad0
void ret_small_struct(unsigned int *param_1,unsigned int param_2,unsigned int param_3)
{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}

// Function: call_ret_small_struct @ 0x11af0
unsigned int call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x11b00
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

// Function: call_ret_large_struct @ 0x11b70
unsigned int call_ret_large_struct(void)
{
 return 0xd7;
}

// Function: func_a @ 0x11b80
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x11b90
int func_b(int param_1)
{
 return param_1 * 2;
}

// Function: FUN_00011ba5 @ 0x11ba5
int FUN_00011ba5(unsigned int param_1,int param_2)
{
 int iVar1;
 int unaff_retaddr;
 iVar1 = unaff_retaddr + -0x15;
 if (param_2 == 0) {
 iVar1 = unaff_retaddr + -0x25;
 }
 return iVar1;
}

// Function: call_ret_func_ptr @ 0x11bd0
unsigned int call_ret_func_ptr(void)
{
 return 10;
}

// Function: FUN_00011be5 @ 0x11be5
int FUN_00011be5(unsigned int param_1,int param_2)
{
 int iVar1;
 int unaff_retaddr;
 iVar1 = unaff_retaddr + 0x244b;
 if (param_2 == 0) {
 iVar1 = unaff_retaddr + 0x2443;
 }
 return iVar1;
}

// Function: FUN_00011c15 @ 0x11c15
unsigned int FUN_00011c15(void)
{
 int unaff_retaddr;
 return *(unsigned int *)(unaff_retaddr + 0x2413);
}

// Function: ret_complex_expr @ 0x11c30
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x11c50
unsigned int call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x11c60
int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x11c80
unsigned int call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x11c90
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x11ca0
unsigned int call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x11cb0
void test_return_values(void)
{
 puts(&DAT_00012394);
 printf(&DAT_00012255,0x2a);
 printf(&DAT_00012271,0x14);
 printf(&DAT_0001228d,7);
 printf(&DAT_000122a8,0xd7);
 printf(&DAT_000122c5,10);
 printf(&DAT_000122e1,ret_opaque_handle_handle1);
 printf(&DAT_000122fe,0x28);
 printf(&DAT_0001231a,0x3c);
 printf(&DAT_00012336,0x15);
 return;
}

// Function: main @ 0x11da0
unsigned int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 puts(&DAT_00012394);
 printf(&DAT_00012255,0x2a);
 printf(&DAT_00012271,0x14);
 printf(&DAT_0001228d,7);
 printf(&DAT_000122a8,0xd7);
 printf(&DAT_000122c5,10);
 printf(&DAT_000122e1,ret_opaque_handle_handle1);
 printf(&DAT_000122fe,0x28);
 printf(&DAT_0001231a,0x3c);
 printf(&DAT_00012336,0x15);
 return 0;
}



