/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>
#include <stdlib.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long long longlong;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions for decompiled code */
typedef void undefined;
typedef void (*code)(void);
typedef int (*func_ptr_t)(int);
typedef int (*_func_int_int)(int);

/* GCC attribute macros for calling conventions */
#define __regparm3 __attribute__((regparm(3)))

#define ROUND(x) ((int)(x))

typedef struct {
    int data[16];
} LargeStruct;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int data[16];
} LargeData;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    int data[16];
} BigStruct;

typedef struct {
    int field1;
    int field2;
} TestIntPair;

/* Global variables for ret_opaque_handle function */
int handle1 = 42;
double handle2 = 3.14;

/* External data symbols */
char DAT_00012352[] = "=== Calling Conventions Test ===";
char DAT_000120a8[] = "CALL-L1-10: %d\n";
char DAT_000120d0[] = "PARAM-L1-01: %d\n";
char DAT_000120f2[] = "PARAM-L1-02: %d\n";
char DAT_00012119[] = "PARAM-L2-01: %d\n";
char DAT_00012141[] = "PARAM-L2-02: %d\n";
char DAT_0001216d[] = "PARAM-L2-03: %d\n";
char DAT_00012373[] = "=== Parameter Passing Test ===";
char DAT_00012255[] = "RET-L1-01: %d\n";
char DAT_00012271[] = "RET-L1-02: %d\n";
char DAT_0001228d[] = "RET-L1-03: %d\n";
char DAT_000122a8[] = "RET-L1-04: %d\n";
char DAT_000122c5[] = "RET-L1-05: %d\n";
char DAT_000122e1[] = "RET-L1-06: %d\n";
char DAT_000122fe[] = "RET-L1-07: %d\n";
char DAT_0001231a[] = "RET-L1-08: %d\n";
char DAT_00012336[] = "RET-L1-09: %d\n";
char DAT_00012394[] = "=== Return Values Test ===";

/* Stack reference for varargs */
int stack0x00000008[16] = {0};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/4/4_clang_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 ((void (*)(void))0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000110bc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000110c0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000111f9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000111fd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: cdecl_func @ 00011210 */

int cdecl_func(int a,int b)

{
 return b + a;
}



/* Function: call_cdecl @ 00011220 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00011230 */

int stdcall_func(int a,int b)

{
 return b * a;
}



/* Function: call_stdcall @ 00011240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00011250 */

int __regparm3 fastcall_func(int a,int b,int c)

{
 int in_stack_00000004;
 
 return c + b + in_stack_00000004;
}



/* Function: call_fastcall @ 00011260 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 00011270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00011280 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return b + a + c + d + e;
}



/* Function: call_arm_aapcs @ 000112a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 000112b0 */

int mips_func(int a,int b,int c,int d)

{
 return b + a + c + d;
}



/* Function: call_mips @ 000112d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 000112e0 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return b + a + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00011300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00011310 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
 return b + a + c + d + e;
}



/* Function: call_ms_x64 @ 00011330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00011340 */

int vectorcall_func(int a,int b,int c,int d)

{
 return b + a + c + d;
}



/* Function: call_vectorcall @ 00011360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00011370 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x21;
}



/* Function: varargs_func @ 00011380 */

int varargs_func(int count, ...)

{
 int *piVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 int *piVar5;
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 piVar1 = (int *)&stack0x00000008;
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 iVar2 = 0;
 }
 else {
 uVar3 = count & 3;
 if (count - 1U < 3) {
 iVar2 = 0;
 }
 else {
 uVar4 = count & 0xfffffffc;
 iVar2 = 0;
 piVar5 = piVar1;
 do {
 piVar1 = piVar5 + 4;
 iVar2 = iVar2 + *piVar5 + piVar5[1] + piVar5[2] + piVar5[3];
 uVar4 = uVar4 - 4;
 piVar5 = piVar1;
 } while (uVar4 != 0);
 }
 for (; uVar3 != 0; uVar3 = uVar3 - 1) {
 iVar2 = iVar2 + *piVar1;
 piVar1 = piVar1 + 1;
 }
 }
 return iVar2;
}



/* Function: func_no_args @ 00011420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00011430 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return b + a + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00011460 */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
 size_t sVar1;
 
 /* Unresolved local var: int len@[???] */
 if (s == (char *)0x0) {
 sVar1 = 0;
 }
 else {
 sVar1 = strlen(s);
 }
 return (int)ROUND((double)ll + d + (double)(int)(sVar1 + x));
}



/* Function: func_struct_byval @ 000114f0 */

int func_struct_byval(LargeStruct s)

{
 /* Unresolved local var: longlong sum@[???]
 Unresolved local var: int i@[???] */
 return (int)s.data[1] + (int)s.data[0] + (int)s.data[2] + (int)s.data[3] + (int)s.data[4] +
 (int)s.data[5] + (int)s.data[6] + (int)s.data[7] + (int)s.data[8] + (int)s.data[9] +
 (int)s.data[10] + (int)s.data[0xb] + (int)s.data[0xc] + (int)s.data[0xd] + (int)s.data[0xe]
 + (int)s.data[0xf];
}



/* Function: func_struct_byptr @ 00011540 */

int func_struct_byptr(SmallStruct *p)

{
 if (p != (SmallStruct *)0x0) {
 return p->y * p->x;
 }
 return -1;
}



/* Function: test_calling_conventions @ 00011560 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 int iVar1;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int no_args@[???]
 Unresolved local var: int many@[???]
 Unresolved local var: int mixed@[???]
 Unresolved local var: int struct_val@[???]
 Unresolved local var: LargeStruct large@[???]
 Unresolved local var: int struct_ptr@[???]
 Unresolved local var: SmallStruct s@[???]
 Unresolved local var: char * test_str@[???] */
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
 iVar1 = varargs_func(5,1,2,3,4,5);
 printf(&DAT_000120a8,iVar1);
 printf(&DAT_000120d0,0x2a);
 printf(&DAT_000120f2,0x24);
 printf(&DAT_00012119,0x75);
 printf(&DAT_00012141,0x88);
 printf(&DAT_0001216d,0x32);
 return;
}



/* Function: param_by_value_int @ 000116b0 */

int param_by_value_int(int x)

{
 return x * 2;
}



/* Function: call_by_value_int @ 000116c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0xf;
}



/* Function: param_by_value_ptr @ 000116d0 */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 000116e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: int * ptr@[???] */
 return 0xb;
}



/* Function: param_array_decay @ 000116f0 */

int param_array_decay(int *arr,int n)

{
 return 4;
}



/* Function: call_array_decay @ 00011700 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 /* Unresolved local var: int[10] array@[???] */
 return 4;
}



/* Function: param_string @ 00011710 */

int param_string(char *str)

{
 return (int)str[1] + (int)*str;
}



/* Function: call_string_param @ 00011720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00011730 */

int param_ptr_array(char **arr,int n)

{
 int iVar1;
 uint uVar2;
 uint uVar3;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 if (n - 1U < 3) {
 uVar2 = 0;
 iVar1 = 0;
 }
 else {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = (int)*arr[uVar2 + 3] +
 (int)*arr[uVar2 + 2] + (int)*arr[uVar2 + 1] + *arr[uVar2] + iVar1;
 uVar2 = uVar2 + 4;
 } while ((n & 0xfffffffcU) != uVar2);
 }
 if ((n & 3U) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + *arr[uVar2 + uVar3];
 uVar3 = uVar3 + 1;
 } while ((n & 3U) != uVar3);
 }
 }
 return iVar1;
}



/* Function: call_ptr_array @ 000117c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 /* Unresolved local var: char *[3] strs@[???] */
 return 300;
}



/* Function: param_varargs @ 000117d0 */

int param_varargs(int count,...)

{
 int *piVar1;
 int iVar2;
 uint uVar3;
 uint uVar4;
 int *piVar5;
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 piVar1 = (int *)&stack0x00000008;
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 iVar2 = 0;
 }
 else {
 uVar3 = count & 3;
 if (count - 1U < 3) {
 iVar2 = 0;
 }
 else {
 uVar4 = count & 0xfffffffc;
 iVar2 = 0;
 piVar5 = piVar1;
 do {
 piVar1 = piVar5 + 4;
 iVar2 = iVar2 + *piVar5 + piVar5[1] + piVar5[2] + piVar5[3];
 uVar4 = uVar4 - 4;
 piVar5 = piVar1;
 } while (uVar4 != 0);
 }
 for (; uVar3 != 0; uVar3 = uVar3 - 1) {
 iVar2 = iVar2 + *piVar1;
 piVar1 = piVar1 + 1;
 }
 }
 return iVar2;
}



/* Function: call_varargs_param @ 00011870 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 000118a0 */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 000118d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 000118e0 */

int param_double_ptr(int **pp,int new_val)

{
 int iVar1;
 
 iVar1 = -1;
 if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
 **pp = new_val;
 *pp = (int *)0x0;
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_double_ptr @ 00011910 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[???]
 Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: param_complex_cast @ 00011920 */

int param_complex_cast(void *p,int type)

{
 int iVar1;
 
 if (type == 1) {
 /* Unresolved local var: TestIntPair * s@[DW_OP_reg1(ECX)] */
 iVar1 = *(int *)((int)p + 4) + *(int *)p;
 }
 else {
 iVar1 = -1;
 if (type == 0) {
 /* Unresolved local var: int * int_ptr@[DW_OP_reg1(ECX)]
 Unresolved local var: int * back_ptr@[DW_OP_reg1(ECX)]
 Unresolved local var: char * char_ptr@[DW_OP_reg1(ECX)] */
 return *(int *)p;
 }
 }
 return iVar1;
}



/* Function: call_complex_cast @ 00011940 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[???] */
 return 0x12345678;
}



/* Function: param_struct_byval @ 00011950 */

int param_struct_byval(BigStruct s)

{
 return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 00011960 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 /* Unresolved local var: BigStruct s@[???] */
 return 0xf;
}



/* Function: param_order_dep @ 00011970 */

int param_order_dep(int a,int b)

{
 return b + a;
}



/* Function: call_order_dep @ 00011980 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 /* Unresolved local var: int i@[???] */
 return 3;
}



/* Function: test_parameter_passing @ 00011990 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 int iVar1;
 
 puts(&DAT_00012373);
 printf("PARAM-L1-01: %d\n",0xf);
 printf("PARAM-L1-02: %d\n",0xb);
 printf("PARAM-L2-01: %d\n",4);
 printf("PARAM-L2-02: %d\n",0xad);
 printf("PARAM-L2-03: %d\n",300);
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 printf("PARAM-L2-04: %d\n",iVar1);
 printf("PARAM-L3-01: %d\n",0x14);
 printf("PARAM-L3-02: %d\n",0x15);
 printf("PARAM-L3-03: %d\n",0x12345678);
 printf("PARAM-L3-04: %d\n",0xf);
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 00011a90 */

int ret_basic_type(int x)

{
 return x * 2;
}



/* Function: call_ret_basic @ 00011aa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0x2a;
}



/* Function: ret_pointer @ 00011ab0 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 00011ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 /* Unresolved local var: int[3] arr@[???]
 Unresolved local var: int * ptr@[???] */
 return 0x14;
}



/* Function: ret_small_struct @ 00011ad0 */

SmallPoint * ret_small_struct(SmallPoint *__return_storage_ptr__,int x,int y)

{
 /* Unresolved local var: SmallPoint p@[???] */
 __return_storage_ptr__->x = x;
 __return_storage_ptr__->y = y;
 return __return_storage_ptr__;
}



/* Function: call_ret_small_struct @ 00011af0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 /* Unresolved local var: SmallPoint p@[???] */
 return 7;
}



/* Function: ret_large_struct @ 00011b00 */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 /* Unresolved local var: LargeData d@[???] */
 /* Unresolved local var: int i@[???] */
 __return_storage_ptr__->data[0] = seed;
 __return_storage_ptr__->data[1] = seed + 1;
 __return_storage_ptr__->data[2] = seed + 2;
 __return_storage_ptr__->data[3] = seed + 3;
 __return_storage_ptr__->data[4] = seed + 4;
 __return_storage_ptr__->data[5] = seed + 5;
 __return_storage_ptr__->data[6] = seed + 6;
 __return_storage_ptr__->data[7] = seed + 7;
 __return_storage_ptr__->data[8] = seed + 8;
 __return_storage_ptr__->data[9] = seed + 9;
 __return_storage_ptr__->data[10] = seed + 10;
 __return_storage_ptr__->data[0xb] = seed + 0xb;
 __return_storage_ptr__->data[0xc] = seed + 0xc;
 __return_storage_ptr__->data[0xd] = seed + 0xd;
 __return_storage_ptr__->data[0xe] = seed + 0xe;
 __return_storage_ptr__->data[0xf] = seed + 0xf;
 return __return_storage_ptr__;
}



/* Function: call_ret_large_struct @ 00011b70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 /* Unresolved local var: LargeData d@[???] */
 return 0xd7;
}



/* Function: func_a @ 00011b80 */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 00011b90 */

int func_b(int x)

{
 return x * 2;
}



/* Function: ret_func_ptr @ 00011ba0 */

func_ptr_t ret_func_ptr(int selector)

{
 func_ptr_t p_Var1;
 
 p_Var1 = func_b;
 if (selector == 0) {
 p_Var1 = func_a;
 }
 return p_Var1;
}



/* Function: call_ret_func_ptr @ 00011bd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 /* Unresolved local var: func_ptr_t f@[???] */
 return 10;
}



/* Function: ret_opaque_handle @ 00011be0 */

void * ret_opaque_handle(int type)

{
 double *pdVar1;
 
 pdVar1 = &handle2;
 if (type == 0) {
 pdVar1 = (double *)&handle1;
 }
 return pdVar1;
}



/* Function: call_ret_opaque @ 00011c10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 /* Unresolved local var: void * h@[???] */
 return handle1;
}



/* Function: ret_complex_expr @ 00011c30 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 iVar1 = z + 10;
 if (y < x) {
 iVar1 = z * 2;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00011c50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28;
}



/* Function: ret_multi_branch @ 00011c60 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 3) {
 iVar1 = op * 10 + 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00011c80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x3c;
}



/* Function: ret_void @ 00011c90 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00011ca0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 /* Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: test_return_values @ 00011cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 puts(&DAT_00012394);
 printf(&DAT_00012255,0x2a);
 printf(&DAT_00012271,0x14);
 printf(&DAT_0001228d,7);
 printf(&DAT_000122a8,0xd7);
 printf(&DAT_000122c5,10);
 printf(&DAT_000122e1,handle1);
 printf(&DAT_000122fe,0x28);
 printf(&DAT_0001231a,0x3c);
 printf(&DAT_00012336,0x15);
 return;
}



/* Function: main @ 00011da0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 82 */
