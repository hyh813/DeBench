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
typedef unsigned int uint;

int main(void);
static char stack0x00000004;
static char stack0x00000008;

// Compiler intrinsics
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))
#define ROUND(x) ((int)(x + 0.5))

// String constants
char DAT_000120a8[] = "VARARGS: %d\n";
char DAT_000120d0[] = "NOARGS: %d\n";
char DAT_000120f2[] = "MANYARGS: %d\n";
char DAT_00012119[] = "MIXEDARGS: %d\n";
char DAT_00012141[] = "STRUCTBYVAL: %d\n";
char DAT_0001216d[] = "ORDERDEP: %d\n";
char DAT_00012255[] = "RET-BASIC: %d\n";
char DAT_00012271[] = "RET-POINTER: %d\n";
char DAT_0001228d[] = "RET-SMALL: %d\n";
char DAT_000122a8[] = "RET-LARGE: %d\n";
char DAT_000122c5[] = "RET-COMPLEX: %d\n";
char DAT_000122e1[] = "RET-MULTI: %d\n";
char DAT_000122fe[] = "RET-VOID: %d\n";
char DAT_0001231a[] = "CALL-FUNC: %d\n";
char DAT_00012336[] = "RET-FUNC: %d\n";
char DAT_00012352[] = "=== Calling Conventions Test ===\n";
char DAT_00012373[] = "=== Parameter Passing Test ===\n";
char DAT_00012394[] = "=== Return Values Test ===\n";

// Decompiled by BinaryAI
// SHA256: 4b1e012dcb8f9001696dcef73d978573aed28c005ea6abbabcb4baab106cdd18

// Function: _init @ 0x11000 - CRT stub, removing calls to undefined functions
void __do_global_ctors_aux(void);

static int _init(void *ctx)
{
 __do_global_ctors_aux();
 return 0;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
void __libc_start_main(int (*main)(void), void *init, void *fini)
{
 return;
}

// Function: <EXTERNAL>::printf @ 0x11050
// Stub implementation - actual printf is provided by libc
int printf(char *__format,...)
{
 return 0;
}

// Function: <EXTERNAL>::puts @ 0x11060
int puts(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::strlen @ 0x11070
// Stub implementation - actual strlen is provided by libc
size_t strlen(char *__s)
{
 size_t len = 0;
 while (__s[len] != '\0') {
  len++;
 }
 return len;
}

// Function: FUN_00011080 @ 0x11080
void FUN_00011080(void)
{
 return;
}

// Function: _start @ 0x11090
static void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main(main,param_2,&stack0x00000004);
 for(;;) { }
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

// Function: deregister_tm_clones @ 0x110d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11110
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11160
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x2ecb) == '\0') {
  if (*(int *)(unaff_EDI + 0x2e83) != 0) {
    FUN_00011080();
  }
 uVar1 = *(uint *)(unaff_EDI + 0x2ecf);
 while (uVar1 < ((unaff_EDI + 0x2dab) - (unaff_EDI + 0x2da7) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x2ecf) = uVar1 + 1;
 // Commented out invalid function pointer call
 // (*(void **)(unaff_EDI + 0x2da7 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x2ecf);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2ecb) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x111f9
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x111fd
int __x86_get_pc_thunk_di(void)
{
 return 0;
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
int fastcall_func(unsigned int param_1_00,int param_2,int param_3,int param_1)
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
// Using varargs to handle multiple arguments
int varargs_func(int param_1, ...)
{
 int iVar1;
 int *local_8;
 va_list args;
 va_start(args, param_1);
 iVar1 = 0;
 local_8 = &param_1;
 if (0 < param_1) {
 do {
 local_8 = local_8 + 1;
 iVar1 = iVar1 + *local_8;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 va_end(args);
 return iVar1;
}

// Function: func_no_args @ 0x113c0
unsigned int func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x113d0
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x11400
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

// Function: func_struct_byval @ 0x11490
int func_struct_byval(void)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(&stack0x00000004 + iVar2 * 8);
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x10);
 return iVar1;
}

// Function: func_struct_byptr @ 0x114c0
int func_struct_byptr(int *param_1)
{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}

// Function: test_calling_conventions @ 0x114e0
void test_calling_conventions(void)
{
 unsigned int uVar1;
 int iVar2;
 int iVar3;
 int aiStack_8c [34];
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
 iVar2 = 1;
 do {
 aiStack_8c[iVar2 * 2 + 1] = 0;
 aiStack_8c[iVar2 * 2] = iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x11);
 iVar3 = 0;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + aiStack_8c[iVar3 * 2 + 2];
 iVar3 = iVar3 + 1;
 } while (iVar3 != 0x10);
 printf(&DAT_00012141,iVar2);
 printf(&DAT_0001216d,0x32);
 return;
}

// Function: param_by_value_int @ 0x11670
int param_by_value_int(int param_1)
{
 return param_1 * 2;
}

// Function: call_by_value_int @ 0x11680
unsigned int call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x11690
unsigned int param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x116a0
unsigned int call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x116b0
unsigned int param_array_decay(void)
{
 return 4;
}

// Function: call_array_decay @ 0x116c0
unsigned int call_array_decay(void)
{
 return 4;
}

// Function: param_string @ 0x116d0
int param_string(char *param_1)
{
 return (int)param_1[1] + (int)*param_1;
}

// Function: call_string_param @ 0x116e0
unsigned int call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x116f0
int param_ptr_array(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 iVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + **(char **)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_2 != iVar2);
 }
 return iVar1;
}

// Function: call_ptr_array @ 0x11730
unsigned int call_ptr_array(void)
{
 return 300;
}

// Function: param_varargs @ 0x11740
int param_varargs(int param_1, ...)
{
 int iVar1;
 int *local_8;
 va_list args;
 va_start(args, param_1);
 iVar1 = 0;
 local_8 = &param_1;
 if (0 < param_1) {
 do {
 local_8 = local_8 + 1;
 iVar1 = iVar1 + *local_8;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 va_end(args);
 return iVar1;
}

// Function: call_varargs_param @ 0x11780
void call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}

// Function: param_func_ptr @ 0x117b0
int param_func_ptr(int (*param_1)(unsigned int),unsigned int param_2)
{
 int iVar1;
 iVar1 = param_1(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x117e0
unsigned int call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x117f0
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

// Function: call_double_ptr @ 0x11820
unsigned int call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x11830
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

// Function: call_complex_cast @ 0x11850
unsigned int call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval @ 0x11860
int param_struct_byval(int param_1)
{
 int param_11;
 return param_11 + param_1;
}

// Function: call_struct_byval @ 0x11870
int call_struct_byval(void)
{
 int iVar1;
 int local_44 [17];
 iVar1 = 0;
 do {
 local_44[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 return local_44[15] + local_44[0];
}

// Function: param_order_dep @ 0x118a0
int param_order_dep(int param_1,int param_2)
{
 return param_2 + param_1;
}

// Function: call_order_dep @ 0x118b0
unsigned int call_order_dep(void)
{
 return 3;
}

// Function: test_parameter_passing @ 0x118c0
void test_parameter_passing(void)
{
 unsigned int uVar1;
 int iVar2;
 int local_44 [16];
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
 iVar2 = 0;
 do {
 local_44[iVar2] = iVar2;
 iVar2 = iVar2 + 1;
 } while (iVar2 != 0x10);
 printf("PARAM-L3-04: %d\n",local_44[15] + local_44[0]);
 printf("PARAM-L3-05: %d\n",3);
 return;
}

// Function: ret_basic_type @ 0x119e0
int ret_basic_type(int param_1)
{
 return param_1 * 2;
}

// Function: call_ret_basic @ 0x119f0
unsigned int call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x11a00
int ret_pointer(int param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x11a10
unsigned int call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x11a20
void ret_small_struct(unsigned int *param_1,unsigned int param_2,unsigned int param_3)
{
 *param_1 = param_2;
 param_1[1] = param_3;
 return;
}

// Function: call_ret_small_struct @ 0x11a40
unsigned int call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x11a50
void ret_large_struct(int param_1,int param_2)
{
 int iVar1;
 iVar1 = 0;
 do {
 *(int *)(param_1 + iVar1 * 4) = param_2 + iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x10);
 return;
}

// Function: call_ret_large_struct @ 0x11a80
int call_ret_large_struct(void)
{
 int iVar1;
 int aiStack_1d4 [100];
 int local_44 [17];
 iVar1 = 100;
 do {
 aiStack_1d4[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x74);
 return local_44[15] + local_44[0];
}

// Function: func_a @ 0x11ab0
int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x11ac0
int func_b(int param_1)
{
 return param_1 * 2;
}

// Function: FUN_00011ad5 @ 0x11ad5
int FUN_00011ad5(unsigned int param_1,int param_2)
{
 int iVar1;
 int unaff_retaddr;
 iVar1 = unaff_retaddr + -0x15;
 if (param_2 == 0) {
 iVar1 = unaff_retaddr + -0x25;
 }
 return iVar1;
}

// Function: call_ret_func_ptr @ 0x11b00
unsigned int call_ret_func_ptr(void)
{
 return 10;
}

// Function: FUN_00011b15 @ 0x11b15
int FUN_00011b15(unsigned int param_1,int param_2)
{
 int iVar1;
 int unaff_retaddr;
 iVar1 = unaff_retaddr + 0x251b;
 if (param_2 == 0) {
 iVar1 = unaff_retaddr + 0x2513;
 }
 return iVar1;
}

// Function: FUN_00011b45 @ 0x11b45
unsigned int FUN_00011b45(void)
{
 int unaff_retaddr;
 return *(unsigned int *)(unaff_retaddr + 0x24e3);
}

// Function: ret_complex_expr @ 0x11b60
int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x11b80
unsigned int call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x11b90
int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x11bb0
unsigned int call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x11bc0
void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x11bd0
unsigned int call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x11be0
void test_return_values(void)
{
 int iVar1;
 int aiStackY_1d4 [97];
 unsigned int uStackY_50;
 int local_44 [16];
 uStackY_50 = 0x11bfe;
 puts(&DAT_00012394);
 uStackY_50 = 0x11c14;
 printf(&DAT_00012255);
 uStackY_50 = 0x11c2a;
 printf(&DAT_00012271);
 uStackY_50 = 0x11c40;
 printf(&DAT_0001228d);
 iVar1 = 100;
 do {
 aiStackY_1d4[iVar1] = iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x74);
 uStackY_50 = 0x11c79;
 printf(&DAT_000122a8);
 uStackY_50 = 0x11c8f;
 printf(&DAT_000122c5);
 uStackY_50 = 0x11ca7;
 printf(&DAT_000122e1);
 uStackY_50 = 0x11cbd;
 printf(&DAT_000122fe);
 uStackY_50 = 0x11cd3;
 printf(&DAT_0001231a);
 uStackY_50 = 0x11ce9;
 printf(&DAT_00012336);
 return;
}

// Function: main @ 0x11cf0
int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x11d20
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x11d6c
static void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

