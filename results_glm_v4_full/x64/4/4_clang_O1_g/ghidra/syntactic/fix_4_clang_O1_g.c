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
typedef unsigned long ulong;

/* Standard library includes */
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/* Type definitions for decompiled code */
typedef void (*code)(void);
typedef void (*undefined)(void);
typedef int (*func_ptr_t)(int);
typedef int (*_func_int_int)(int);

/* Struct definitions */
typedef struct {
    int data[16];
} LargeStruct;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int data[16];
} BigStruct;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    int data[16];
} LargeData;

typedef struct {
    int a;
    int b;
} TestIntPair;

/* External data references (string literals) */
extern char DAT_0010234e[];
extern char DAT_001020a4[];
extern char DAT_001020cc[];
extern char DAT_001020ee[];
extern char DAT_00102115[];
extern char DAT_0010213d[];
extern char DAT_00102169[];
extern char DAT_0010236f[];
extern char DAT_00102251[];
extern char DAT_0010226d[];
extern char DAT_00102289[];
extern char DAT_001022a4[];
extern char DAT_001022c1[];
extern char DAT_001022dd[];
extern char DAT_001022fa[];
extern char DAT_00102316[];
extern char DAT_00102332[];
extern char DAT_00102390[];

/* Static data for ret_opaque_handle */
static double handle1 = 1.0;
static double handle2 = 2.0;

/* String literal definitions */
char DAT_001020a4[] = "CALL-L2-01: %d\n";
char DAT_001020cc[] = "CALL-L2-02: %d\n";
char DAT_001020ee[] = "CALL-L2-03: %d\n";
char DAT_00102115[] = "CALL-L2-04: %d\n";
char DAT_0010213d[] = "CALL-L2-05: %d\n";
char DAT_00102169[] = "CALL-L2-06: %d\n";
char DAT_00102251[] = "RET-L1-01: %d\n";
char DAT_0010226d[] = "RET-L1-02: %d\n";
char DAT_00102289[] = "RET-L1-03: %d\n";
char DAT_001022a4[] = "RET-L2-01: %d\n";
char DAT_001022c1[] = "RET-L3-01: %d\n";
char DAT_001022dd[] = "RET-L4-01: %d\n";
char DAT_001022fa[] = "RET-L5-01: %d\n";
char DAT_00102316[] = "RET-L6-01: %d\n";
char DAT_00102332[] = "RET-L7-01: %d\n";
char DAT_0010234e[] = "=== Calling Convention Tests ===\n";
char DAT_0010236f[] = "=== Parameter Passing Tests ===\n";
char DAT_00102390[] = "=== Return Value Tests ===\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/4/4_clang_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 00101160 */

int cdecl_func(int a,int b)

{
 return a + b;
}



/* Function: call_cdecl @ 00101170 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00101180 */

int stdcall_func(int a,int b)

{
 return a * b;
}



/* Function: call_stdcall @ 00101190 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 001011a0 */

int fastcall_func(int a,int b,int c)

{
 return a + b + c;
}



/* Function: call_fastcall @ 001011b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 001011c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 001011d0 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 001011e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 001011f0 */

int mips_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_mips @ 00101200 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 00101210 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00101220 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00101230 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_ms_x64 @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00101250 */

int vectorcall_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_vectorcall @ 00101260 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00101270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x21;
}



/* Function: varargs_func @ 00101280 */

int varargs_func(int count,...)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 ulong uVar4;
 int *local_d0;
 int local_b8 [46];
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 local_d0 = (int *)__builtin_frame_address(0);
 iVar3 = 8;
 iVar1 = 0;
 /* Unresolved local var: int i@[???] */
 if (0 < count) {
 do {
 uVar4 = (ulong)iVar3;
 if (uVar4 < 0x29) {
 iVar3 = iVar3 + 8;
 piVar2 = (int *)((long)local_b8 + uVar4);
 }
 else {
 piVar2 = local_d0;
 local_d0 = local_d0 + 2;
 }
 iVar1 = iVar1 + *piVar2;
 count = count + -1;
 } while (count != 0);
 }
 return iVar1;
}



/* Function: func_no_args @ 00101340 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00101350 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00101370 */

int func_mixed_args(int x,char *s,double d,long long ll)

{
 int iVar1;
 size_t sVar2;
 
 /* Unresolved local var: int len@[???] */
 if (s == (char *)0x0) {
 iVar1 = 0;
 }
 else {
 sVar2 = strlen(s);
 iVar1 = (int)sVar2;
 }
 return (int)((double)ll + (double)(iVar1 + x) + d);
}



/* Function: func_struct_byval @ 001013c0 */

int func_struct_byval(LargeStruct s)

{
 long lVar1;
 long lVar2;
 
 /* Unresolved local var: longlong sum@[???] */
 lVar2 = 0;
 lVar1 = 0;
 do {
 lVar1 = lVar1 + s.data[lVar2];
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 return (int)lVar1;
}



/* Function: func_struct_byptr @ 001013e0 */

int func_struct_byptr(SmallStruct *p)

{
 if (p != (SmallStruct *)0x0) {
 return p->y * p->x;
 }
 return -1;
}



/* Function: test_calling_conventions @ 00101400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 uint uVar1;
 long lVar2;
 long lVar3;
 long alStack_88 [17];
 
 /* Unresolved local var: LargeStruct large@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: int no_args@[???]
 Unresolved local var: int many@[???]
 Unresolved local var: int mixed@[???]
 Unresolved local var: int struct_val@[???]
 Unresolved local var: int struct_ptr@[???]
 Unresolved local var: char * test_str@[???]
 Unresolved local var: SmallStruct s@[???] */
 puts(&DAT_0010234e);
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
 printf(&DAT_001020a4,(ulong)uVar1);
 printf(&DAT_001020cc,0x2a);
 printf(&DAT_001020ee,0x24);
 printf(&DAT_00102115,0x75);
 lVar2 = 1;
 /* Unresolved local var: int i@[???] */
 do {
 alStack_88[lVar2] = lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x11);
 lVar2 = 0;
 lVar3 = 0;
 /* Unresolved local var: longlong sum@[DW_OP_reg4(RSI)]
 Unresolved local var: int i@[DW_OP_reg0(RAX)] */
 do {
 lVar3 = lVar3 + alStack_88[lVar2 + 1];
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 printf(&DAT_0010213d,lVar3);
 printf(&DAT_00102169,0x32);
 return;
}



/* Function: param_by_value_int @ 001015b0 */

int param_by_value_int(int x)

{
 return x * 2;
}



/* Function: call_by_value_int @ 001015c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0xf;
}



/* Function: param_by_value_ptr @ 001015d0 */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 001015e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: int * ptr@[???] */
 return 0xb;
}



/* Function: param_array_decay @ 001015f0 */

int param_array_decay(int *arr,int n)

{
 return 8;
}



/* Function: call_array_decay @ 00101600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 /* Unresolved local var: int[10] array@[???] */
 return 8;
}



/* Function: param_string @ 00101610 */

int param_string(char *str)

{
 return (int)str[1] + (int)*str;
}



/* Function: call_string_param @ 00101620 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00101630 */

int param_ptr_array(char **arr,int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *arr[uVar2];
 uVar2 = uVar2 + 1;
 } while ((uint)n != uVar2);
 return iVar1;
 }
 return 0;
}



/* Function: call_ptr_array @ 00101660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 /* Unresolved local var: char *[3] strs@[???] */
 return 300;
}



/* Function: param_varargs @ 00101670 */

int param_varargs(int count,...)

{
 int iVar1;
 int *piVar2;
 int iVar3;
 ulong uVar4;
 int *local_d0;
 int local_b8 [46];
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 local_d0 = (int *)__builtin_frame_address(0);
 iVar3 = 8;
 iVar1 = 0;
 /* Unresolved local var: int i@[???] */
 if (0 < count) {
 do {
 uVar4 = (ulong)iVar3;
 if (uVar4 < 0x29) {
 iVar3 = iVar3 + 8;
 piVar2 = (int *)((long)local_b8 + uVar4);
 }
 else {
 piVar2 = local_d0;
 local_d0 = local_d0 + 2;
 }
 iVar1 = iVar1 + *piVar2;
 count = count + -1;
 } while (count != 0);
 }
 return iVar1;
}



/* Function: call_varargs_param @ 00101730 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 00101760 */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00101770 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00101780 */

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



/* Function: call_double_ptr @ 001017b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[???]
 Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: param_complex_cast @ 001017c0 */

int param_complex_cast(void *p,int type)

{
 int iVar1;
 
 if (type == 1) {
 /* Unresolved local var: TestIntPair * s@[DW_OP_reg5(RDI)] */
 iVar1 = *(int *)((long)p + 4) + *(int *)p;
 }
 else {
 iVar1 = -1;
 if (type == 0) {
 /* Unresolved local var: int * int_ptr@[DW_OP_reg5(RDI)]
 Unresolved local var: int * back_ptr@[DW_OP_reg5(RDI)]
 Unresolved local var: char * char_ptr@[DW_OP_reg5(RDI)] */
 return *(int *)p;
 }
 }
 return iVar1;
}



/* Function: call_complex_cast @ 001017e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[???] */
 return 0x12345678;
}



/* Function: param_struct_byval @ 001017f0 */

int param_struct_byval(BigStruct s)

{
 return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 00101800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 long lVar1;
 int local_40 [16];
 
 /* Unresolved local var: BigStruct s@[???] */
 lVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(RAX)] */
 local_40[lVar1] = (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 return local_40[0xf] + local_40[0];
}



/* Function: param_order_dep @ 00101830 */

int param_order_dep(int a,int b)

{
 return a + b;
}



/* Function: call_order_dep @ 00101840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 /* Unresolved local var: int i@[???] */
 return 3;
}



/* Function: test_parameter_passing @ 00101850 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 uint uVar1;
 long lVar2;
 int local_48 [16];
 
 puts(&DAT_0010236f);
 lVar2 = 0;
 printf("PARAM-L1-01: %d\n",0xf);
 printf("PARAM-L1-02: %d\n",0xb);
 printf("PARAM-L2-01: %d\n",8);
 printf("PARAM-L2-02: %d\n",0xad);
 printf("PARAM-L2-03: %d\n",300);
 uVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 printf("PARAM-L2-04: %d\n",(ulong)uVar1);
 printf("PARAM-L3-01: %d\n",0x14);
 printf("PARAM-L3-02: %d\n",0x15);
 printf("PARAM-L3-03: %d\n",0x12345678);
 do {
 local_48[lVar2] = (int)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 printf("PARAM-L3-04: %d\n",(ulong)(uint)(local_48[0xf] + local_48[0]));
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 00101970 */

int ret_basic_type(int x)

{
 return x * 2;
}



/* Function: call_ret_basic @ 00101980 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0x2a;
}



/* Function: ret_pointer @ 00101990 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 001019a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 /* Unresolved local var: int[3] arr@[???]
 Unresolved local var: int * ptr@[???] */
 return 0x14;
}



/* Function: ret_small_struct @ 001019b0 */

SmallPoint ret_small_struct(int x,int y)

{
 SmallPoint SVar1;
 
 SVar1.y = y;
 SVar1.x = x;
 /* Unresolved local var: SmallPoint p@[DW_OP_reg5(RDI); DW_OP_piece: 4;
 DW_OP_reg4(RSI); DW_OP_piece: 4] */
 return SVar1;
}



/* Function: call_ret_small_struct @ 001019c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 /* Unresolved local var: SmallPoint p@[???] */
 return 7;
}



/* Function: ret_large_struct @ 001019d0 */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 long lVar1;
 
 /* Unresolved local var: LargeData d@[DW_OP_breg5(RDI): 0] */
 /* Unresolved local var: int i@[???] */
 lVar1 = 0;
 do {
 __return_storage_ptr__->data[lVar1] = seed + (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 return __return_storage_ptr__;
}



/* Function: call_ret_large_struct @ 00101a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 long lVar1;
 int local_40 [16];
 
 /* Unresolved local var: LargeData d@[???] */
 lVar1 = 0;
 do {
 /* Unresolved local var: LargeData d@[???]
 Unresolved local var: int i@[DW_OP_reg0(RAX)] */
 local_40[lVar1] = (int)lVar1 + 100;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 return local_40[0xf] + local_40[0];
}



/* Function: func_a @ 00101a30 */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 00101a40 */

int func_b(int x)

{
 return x * 2;
}



/* Function: ret_func_ptr @ 00101a50 */

func_ptr_t ret_func_ptr(int selector)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (selector == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101a70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 /* Unresolved local var: func_ptr_t f@[???] */
 return 10;
}



/* Function: ret_opaque_handle @ 00101a80 */

void * ret_opaque_handle(int type)

{
 double *pdVar1;
 
 pdVar1 = &handle2;
 if (type == 0) {
 pdVar1 = &handle1;
 }
 return pdVar1;
}



/* Function: call_ret_opaque @ 00101aa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 /* Unresolved local var: void * h@[???] */
 return (int)(long)handle1;
}



/* Function: ret_complex_expr @ 00101ab0 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 iVar1 = z + 10;
 if (y < x) {
 iVar1 = z * 2;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28;
}



/* Function: ret_multi_branch @ 00101ad0 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 3) {
 iVar1 = op * 10 + 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00101af0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x3c;
}



/* Function: ret_void @ 00101b00 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00101b10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 /* Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: test_return_values @ 00101b20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 long lVar1;
 int local_48 [16];
 
 puts(&DAT_00102390);
 lVar1 = 0;
 printf(&DAT_00102251,0x2a);
 printf(&DAT_0010226d,0x14);
 printf(&DAT_00102289,7);
 do {
 local_48[lVar1] = (int)lVar1 + 100;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 printf(&DAT_001022a4,(ulong)(uint)(local_48[0xf] + local_48[0]));
 printf(&DAT_001022c1,10);
 printf(&DAT_001022dd,(ulong)(uint)(long)handle1);
 printf(&DAT_001022fa,0x28);
 printf(&DAT_00102316,0x3c);
 printf(&DAT_00102332,0x15);
 return;
}



/* Function: main @ 00101c00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 77 */
