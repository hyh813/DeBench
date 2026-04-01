/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif

#ifndef size_t
typedef unsigned long size_t;
#endif
#ifndef ssize_t
typedef long ssize_t;
#endif
#ifndef ulong
typedef unsigned long ulong;
#endif
#ifndef longlong
typedef long long longlong;
#endif
#ifndef uintptr_t
typedef unsigned long uintptr_t;
#endif
#ifndef intptr_t
typedef long intptr_t;
#endif
#ifndef ptrdiff_t
typedef unsigned long ptrdiff_t;
#endif


#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

/* Ghidra-specific type replacements */
typedef void (*code)(void);
typedef void undefined;
typedef unsigned char undefined1;

/* String data constants */
static const char DAT_001023ca[] = "=== Testing Calling Conventions ===\n";
static const char DAT_00102120[] = "CALL-L2-01: %d\n";
static const char DAT_00102148[] = "CALL-L2-02: %d\n";
static const char DAT_0010216a[] = "CALL-L2-03: %d\n";
static const char DAT_00102191[] = "CALL-L2-04: %d\n";
static const char DAT_001021b9[] = "CALL-L2-05: %d\n";
static const char DAT_001021e5[] = "CALL-L2-06: %d\n";
static const char DAT_001023eb[] = "=== Testing Parameter Passing ===\n";
static const char DAT_001022cd[] = "RET-L1-01: %d\n";
static const char DAT_001022e9[] = "RET-L1-02: %d\n";
static const char DAT_00102305[] = "RET-L1-03: %d\n";
static const char DAT_00102320[] = "RET-L1-04: %d\n";
static const char DAT_0010233d[] = "RET-L1-05: %d\n";
static const char DAT_00102359[] = "RET-L1-06: %p\n";
static const char DAT_00102376[] = "RET-L1-07: %d\n";
static const char DAT_00102392[] = "RET-L1-08: %d\n";
static const char DAT_001023ae[] = "RET-L1-09: %d\n";
static const char DAT_0010240c[] = "=== Testing Return Values ===\n";

/* Function pointer types */
typedef int (*_func_int_int)(int);
typedef int (*func_ptr_t)(int);

/* Struct definitions */
typedef struct {
    int x;
    int y;
} SmallStruct;

/* Union for array access in test_calling_conventions */
typedef union {
    struct {
        uint64_t _0_8_;
        uint32_t _8_4_;
        uint32_t _12_4_;
    } u;
    uint8_t bytes[16];
} ArrayUnion;

typedef struct {
    int data[32];
} LargeStruct;

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

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/4/4_clang_Os_g
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




/* Function: cdecl_func @ 0010115c */

int cdecl_func(int a,int b)

{
 return a + b;
}



/* Function: call_cdecl @ 00101160 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00101166 */

int stdcall_func(int a,int b)

{
 return a * b;
}



/* Function: call_stdcall @ 0010116c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00101172 */

int fastcall_func(int a,int b,int c)

{
 return a + b + c;
}



/* Function: call_fastcall @ 00101178 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 0010117e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00101184 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 0010118f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 00101195 */

int mips_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_mips @ 0010119d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 001011a3 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 001011b1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 001011b7 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_ms_x64 @ 001011c2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 001011c8 */

int vectorcall_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_vectorcall @ 001011d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 001011d6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x21;
}



/* Function: varargs_func @ 001011dc */

int varargs_func(int count,...)

{
 va_list args;
 int iVar1;
 int i;
 
 va_start(args, count);
 iVar1 = 0;
 if (count < 1) {
 va_end(args);
 }
 else {
 iVar1 = 0;
 for (i = 0; i < count; i++) {
 iVar1 = iVar1 + va_arg(args, int);
 }
 va_end(args);
 }
 return iVar1;
}



/* Function: func_no_args @ 00101281 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00101287 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 0010129d */

int func_mixed_args(int x,char *s,double d,longlong ll)

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



/* Function: func_struct_byval @ 001012de */

int func_struct_byval(LargeStruct s)

{
 long lVar1;
 long lVar2;
 long lVar3;
 
 /* Unresolved local var: longlong sum@[???] */
 lVar2 = 0;
 lVar3 = 0;
 lVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 lVar2 = lVar2 + s.data[lVar1];
 lVar3 = lVar3 + s.data[lVar1 + 1];
 lVar1 = lVar1 + 2;
 } while (lVar1 != 0x10);
 return (int)lVar3 + (int)lVar2;
}



/* Function: func_struct_byptr @ 0010130b */

int func_struct_byptr(SmallStruct *p)

{
 if (p != (SmallStruct *)0x0) {
 return p->y * p->x;
 }
 return -1;
}



/* Function: test_calling_conventions @ 0010131d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 uint uVar1;
 long lVar2;
 long lVar3;
 long lVar4;
 ArrayUnion auVar5;
 long local_88 [16];
 
 /* Unresolved local var: LargeStruct large@[???]
 Unresolved local var: int sum@[???]
 Unresolved local var: int no_args@[???]
 Unresolved local var: int many@[???]
 Unresolved local var: int mixed@[???]
 Unresolved local var: int struct_val@[???]
 Unresolved local var: int struct_ptr@[???]
 Unresolved local var: char * test_str@[???]
 Unresolved local var: SmallStruct s@[???] */
 puts(&DAT_001023ca);
 lVar2 = 0;
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
 printf(&DAT_00102120,(ulong)uVar1);
 printf(&DAT_00102148,0x2a);
 printf(&DAT_0010216a,0x24);
 printf(&DAT_00102191,0x75);
 lVar3 = 0;
 lVar4 = 1;
 auVar5.u._8_4_ = 0xffffffff;
 auVar5.u._0_8_ = 0xffffffffffffffff;
 auVar5.u._12_4_ = 0xffffffff;
 do {
 /* Unresolved local var: int i@[???] */
 local_88[lVar2] = lVar3 + 1;
 local_88[lVar2 + 1] = lVar4 - auVar5.u._0_8_;
 lVar2 = lVar2 + 2;
 lVar3 = lVar3 + 2;
 lVar4 = lVar4 + 2;
 } while (lVar2 != 0x10);
 lVar3 = 0;
 lVar4 = 0;
 lVar2 = 0;
 do {
 lVar3 = lVar3 + local_88[lVar2];
 lVar4 = lVar4 + local_88[lVar2 + 1];
 lVar2 = lVar2 + 2;
 } while (lVar2 != 0x10);
 printf(&DAT_001021b9,lVar4 + lVar3);
 printf(&DAT_001021e5,0x32);
 return;
}



/* Function: param_by_value_int @ 001014e0 */

int param_by_value_int(int x)

{
 return x * 2;
}



/* Function: call_by_value_int @ 001014e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0xf;
}



/* Function: param_by_value_ptr @ 001014ea */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 001014f2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: int * ptr@[???] */
 return 0xb;
}



/* Function: param_array_decay @ 001014f8 */

int param_array_decay(int *arr,int n)

{
 return 8;
}



/* Function: call_array_decay @ 001014fe */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 /* Unresolved local var: int[10] array@[???] */
 return 8;
}



/* Function: param_string @ 00101504 */

int param_string(char *str)

{
 return (int)str[1] + (int)*str;
}



/* Function: call_string_param @ 0010150e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00101514 */

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



/* Function: call_ptr_array @ 00101533 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 /* Unresolved local var: char *[3] strs@[???] */
 return 300;
}



/* Function: param_varargs @ 00101539 */

int param_varargs(int count,...)

{
 va_list args;
 int iVar1;
 int i;
 
 va_start(args, count);
 iVar1 = 0;
 if (count < 1) {
 va_end(args);
 }
 else {
 iVar1 = 0;
 for (i = 0; i < count; i++) {
 iVar1 = iVar1 + va_arg(args, int);
 }
 va_end(args);
 }
 return iVar1;
}



/* Function: call_varargs_param @ 001015de */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 001015ff */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 0010160c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00101612 */

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



/* Function: call_double_ptr @ 00101633 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[???]
 Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: param_complex_cast @ 00101639 */

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



/* Function: call_complex_cast @ 00101650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[???] */
 return 0x12345678;
}



/* Function: param_struct_byval @ 00101656 */

int param_struct_byval(BigStruct s)

{
 return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 0010165f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 /* Unresolved local var: BigStruct s@[???]
 Unresolved local var: int i@[???] */
 return 0xf;
}



/* Function: param_order_dep @ 00101680 */

int param_order_dep(int a,int b)

{
 return a + b;
}



/* Function: call_order_dep @ 00101684 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 /* Unresolved local var: int i@[???] */
 return 3;
}



/* Function: test_parameter_passing @ 0010168a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 uint uVar1;
 
 puts(&DAT_001023eb);
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
 /* Unresolved local var: BigStruct s@[???]
 Unresolved local var: int i@[???] */
 printf("PARAM-L3-04: %d\n",0xf);
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 001017a6 */

int ret_basic_type(int x)

{
 return x * 2;
}



/* Function: call_ret_basic @ 001017aa */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0x2a;
}



/* Function: ret_pointer @ 001017b0 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 001017b5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 /* Unresolved local var: int[3] arr@[???]
 Unresolved local var: int * ptr@[???] */
 return 0x14;
}



/* Function: ret_small_struct @ 001017bb */

SmallPoint ret_small_struct(int x,int y)

{
 SmallPoint SVar1;
 
 SVar1.y = y;
 SVar1.x = x;
 /* Unresolved local var: SmallPoint p@[DW_OP_reg5(RDI); DW_OP_piece: 4;
 DW_OP_reg4(RSI); DW_OP_piece: 4] */
 return SVar1;
}



/* Function: call_ret_small_struct @ 001017c5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 /* Unresolved local var: SmallPoint p@[???] */
 return 7;
}



/* Function: ret_large_struct @ 001017cb */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 int *piVar1;
 long lVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 
 /* Unresolved local var: LargeData d@[DW_OP_breg5(RDI): 0] */
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 iVar4 = 1;
 iVar5 = 2;
 iVar6 = 3;
 lVar2 = 0;
 do {
 piVar1 = __return_storage_ptr__->data + lVar2;
 *piVar1 = iVar3 + seed;
 piVar1[1] = iVar4 + seed;
 piVar1[2] = iVar5 + seed;
 piVar1[3] = iVar6 + seed;
 lVar2 = lVar2 + 4;
 iVar3 = iVar3 + 4;
 iVar4 = iVar4 + 4;
 iVar5 = iVar5 + 4;
 iVar6 = iVar6 + 4;
 } while (lVar2 != 0x10);
 return __return_storage_ptr__;
}



/* Function: call_ret_large_struct @ 00101805 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 /* Unresolved local var: LargeData d@[???]
 Unresolved local var: int i@[???] */
 return 0xd7;
}



/* Function: func_a @ 00101826 */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 0010182a */

int func_b(int x)

{
 return x * 2;
}



/* Function: ret_func_ptr @ 0010182e */

func_ptr_t ret_func_ptr(int selector)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (selector == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101843 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 /* Unresolved local var: func_ptr_t f@[???] */
 return 10;
}



/* Static handles for ret_opaque_handle */
static double handle1 = 42.0;
static double handle2 = 84.0;

/* Function: ret_opaque_handle @ 00101849 */

void * ret_opaque_handle(int type)

{
 double *pdVar1;
 
 pdVar1 = &handle2;
 if (type == 0) {
 pdVar1 = &handle1;
 }
 return pdVar1;
}



/* Function: call_ret_opaque @ 0010185e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 /* Unresolved local var: void * h@[???] */
 return (int)handle1;
}



/* Function: ret_complex_expr @ 00101865 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 iVar1 = z + 10;
 if (y < x) {
 iVar1 = z * 2;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101871 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28;
}



/* Function: ret_multi_branch @ 00101877 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 3) {
 iVar1 = op * 10 + 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 0010188a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x3c;
}



/* Function: ret_void @ 00101890 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00101896 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 /* Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: test_return_values @ 0010189c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 puts(&DAT_0010240c);
 printf(&DAT_001022cd,0x2a);
 printf(&DAT_001022e9,0x14);
 printf(&DAT_00102305,7);
 /* Unresolved local var: LargeData d@[???]
 Unresolved local var: int i@[???] */
 printf(&DAT_00102320,0xd7);
 printf(&DAT_0010233d,10);
 printf(&DAT_00102359,(ulong)(uint)handle1);
 printf(&DAT_00102376,0x28);
 printf(&DAT_00102392,0x3c);
 printf(&DAT_001023ae,0x15);
 return;
}



/* Function: main @ 00101975 */

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
