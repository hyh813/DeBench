#include <stdio.h>
#include <string.h>

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

/* Additional type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef long long longlong;

/* Macro for concatenating two 32-bit values into 64-bit */
#define CONCAT44(high, low) (((uint64_t)(uint32_t)(high) << 32) | (uint32_t)(low))

/* Function pointer typedef */
typedef int (*func_ptr_t)(int);

/* Type definitions */
typedef unsigned char byte;

/* Function pointer typedefs */
typedef int (*_func_int_int)(int);

/* Struct definitions */
typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int data[16];
} LargeStruct;

typedef struct {
    int data[16];
} BigStruct;

typedef struct {
    int data[16];
} LargeData;

typedef struct {
    int a;
    int b;
} TestIntPair;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/4/4_clang_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Global placeholder for Ghidra register/stack references */
void *register0x00000008;
int stack0xffffffffffffffe0[32];

/* External CRT symbols */
extern void *__dso_handle;
void __cxa_finalize(void *dso_handle);
void deregister_tm_clones(void);

/* Global variables */
char completed_0 = '\0';

/* Global data references (string literals) */
char DAT_001014a8[] = "VARARGS-L1: %d\n";
char DAT_001014d0[] = "CALL-L1-11: %d\n";
char DAT_001014f2[] = "CALL-L1-12: %d\n";
char DAT_00101519[] = "CALL-L1-13: %d\n";
char DAT_00101541[] = "CALL-L1-14: %d\n";
char DAT_0010156d[] = "CALL-L1-15: %d\n";
char DAT_00101752[] = "Testing calling conventions\n";
char DAT_00101794[] = "RET-L1-01: %d\n";
char DAT_00101655[] = "RET-L1-02: %d\n";
char DAT_00101671[] = "RET-L1-03: %d\n";
char DAT_0010168d[] = "RET-L1-04: %d\n";
char DAT_001016a8[] = "RET-L1-05: %d\n";
char DAT_001016c5[] = "RET-L1-06: %d\n";
char DAT_001016e1[] = "RET-L1-07: %d\n";
char DAT_001016fe[] = "RET-L1-08: %d\n";
char DAT_0010171a[] = "RET-L1-09: %d\n";
char DAT_00101736[] = "RET-L1-10: %d\n";
char DAT_00101773[] = "Testing parameter passing\n";


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100640 @ 00100640 */

void FUN_00100640(void)

{
 ((void (*)(void))0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */

void deregister_tm_clones(void)
{
 return;
}





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001007bc @ 001007bc */

void FUN_001007bc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 00100814 */

int cdecl_func(int a,int b)

{
 return b + a;
}



/* Function: call_cdecl @ 0010081c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00100824 */

int stdcall_func(int a,int b)

{
 return b * a;
}



/* Function: call_stdcall @ 0010082c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00100834 */

int fastcall_func(int a,int b,int c)

{
 return b + a + c;
}



/* Function: call_fastcall @ 00100840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 00100848 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00100850 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return b + a + c + d + e;
}



/* Function: call_arm_aapcs @ 00100864 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 0010086c */

int mips_func(int a,int b,int c,int d)

{
 return b + a + c + d;
}



/* Function: call_mips @ 0010087c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 00100884 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return b + a + c + d + e + f;
}



/* Function: call_amd64_sysv @ 0010089c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 001008a4 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
 return b + a + c + d + e;
}



/* Function: call_ms_x64 @ 001008b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 001008c0 */

int vectorcall_func(int a,int b,int c,int d)

{
 return b + a + c + d;
}



/* Function: call_vectorcall @ 001008d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 001008d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x21;
}



/* Function: varargs_func @ 001008e0 */

/* WARNING: Removing unreachable block (ram,0x00100938) */
/* WARNING: Removing unreachable block (ram,0x00100944) */
/* WARNING: Removing unreachable block (ram,0x00100958) */
/* WARNING: Removing unreachable block (ram,0x00100964) */
/* WARNING: Removing unreachable block (ram,0x001009d8) */
/* WARNING: Removing unreachable block (ram,0x001009e8) */
/* WARNING: Removing unreachable block (ram,0x00100a08) */
/* WARNING: Removing unreachable block (ram,0x00100a3c) */
/* WARNING: Removing unreachable block (ram,0x00100a4c) */
/* WARNING: Removing unreachable block (ram,0x00100a54) */

int varargs_func(int count,...)

{
 uint uVar1;
 int iVar2;
 int *piVar3;
 uint local_8;
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 iVar2 = 0;
 }
 else {
 local_8 = 0xffffffc8;
 iVar2 = 0;
 piVar3 = (int *)register0x00000008;
 do {
 while ((uVar1 = local_8, (int)local_8 < 0 && (uVar1 = local_8 + 8, local_8 < 0xfffffff9))) {
 count = count + -1;
 iVar2 = *(int *)(&stack0xffffffffffffffe0 + (int)local_8) + iVar2;
 local_8 = local_8 + 8;
 if (count == 0) {
 return iVar2;
 }
 }
 local_8 = uVar1;
 count = count + -1;
 iVar2 = *piVar3 + iVar2;
 piVar3 = piVar3 + 2;
 } while (count != 0);
 }
 return iVar2;
}



/* Function: func_no_args @ 00100a78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00100a80 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return b + a + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00100aa0 */

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
 return (int)((double)(iVar1 + x) + d + (double)ll);
}



/* Function: func_struct_byval @ 00100af8 */

int func_struct_byval(LargeStruct *s)

{
 /* Unresolved local var: longlong sum@[???]
 Unresolved local var: int i@[???] */
 return (int)s->data[0xf] +
 (int)s->data[0xe] +
 (int)s->data[0xd] +
 (int)s->data[0xc] +
 (int)s->data[0xb] +
 (int)s->data[10] +
 (int)s->data[9] +
 (int)s->data[8] +
 (int)s->data[7] +
 (int)s->data[6] +
 (int)s->data[5] +
 (int)s->data[4] + (int)s->data[3] + (int)s->data[2] + (int)s->data[1] + (int)s->data[0];
}



/* Function: func_struct_byptr @ 00100b78 */

int func_struct_byptr(SmallStruct *p)

{
 if (p != (SmallStruct *)0x0) {
 return p->y * p->x;
 }
 return -1;
}



/* Function: test_calling_conventions @ 00100b90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 uint uVar1;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int no_args@[???]
 Unresolved local var: int many@[???]
 Unresolved local var: int mixed@[???]
 Unresolved local var: int struct_val@[???]
 Unresolved local var: LargeStruct large@[???]
 Unresolved local var: int struct_ptr@[???]
 Unresolved local var: char * test_str@[???]
 Unresolved local var: SmallStruct s@[???] */
 puts(DAT_00101752);
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
 printf(DAT_001014a8,(ulong)uVar1);
 printf(DAT_001014d0,0x2a);
 printf(DAT_001014f2,0x24);
 printf(DAT_00101519,0x75);
 printf(DAT_00101541,0x88);
 printf(DAT_0010156d,0x32);
 return;
}



/* Function: param_by_value_int @ 00100cc4 */

int param_by_value_int(int x)

{
 return x << 1;
}



/* Function: call_by_value_int @ 00100ccc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0xf;
}



/* Function: param_by_value_ptr @ 00100cd4 */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00100cec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: int * ptr@[???] */
 return 0xb;
}



/* Function: param_array_decay @ 00100cf4 */

int param_array_decay(int *arr,int n)

{
 return 8;
}



/* Function: call_array_decay @ 00100cfc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 /* Unresolved local var: int[10] array@[???] */
 return 8;
}



/* Function: param_string @ 00100d04 */

int param_string(char *str)

{
 return (uint)(byte)str[1] + (uint)(byte)*str;
}



/* Function: call_string_param @ 00100d14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00100d1c */

int param_ptr_array(char **arr,int n)

{
 char **ppcVar1;
 byte *pbVar2;
 int iVar3;
 int iVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 char **ppcVar8;
 ulong uVar9;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar5 = (ulong)(uint)n;
 if (n == 1) {
 uVar7 = 0;
 iVar3 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffffe;
 iVar4 = 0;
 iVar3 = 0;
 ppcVar8 = arr + 1;
 uVar9 = uVar7;
 do {
 ppcVar1 = ppcVar8 + -1;
 pbVar2 = (byte *)*ppcVar8;
 ppcVar8 = ppcVar8 + 2;
 uVar9 = uVar9 - 2;
 iVar4 = iVar4 + (uint)(byte)**ppcVar1;
 iVar3 = iVar3 + (uint)*pbVar2;
 } while (uVar9 != 0);
 iVar3 = iVar3 + iVar4;
 if (uVar7 == uVar5) {
 return iVar3;
 }
 }
 lVar6 = uVar5 - uVar7;
 ppcVar8 = arr + uVar7;
 do {
 lVar6 = lVar6 + -1;
 iVar3 = iVar3 + (uint)(byte)**ppcVar8;
 ppcVar8 = ppcVar8 + 1;
 } while (lVar6 != 0);
 return iVar3;
}



/* Function: call_ptr_array @ 00100da8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 /* Unresolved local var: char *[3] strs@[???] */
 return 300;
}



/* Function: param_varargs @ 00100db0 */

/* WARNING: Removing unreachable block (ram,0x00100e08) */
/* WARNING: Removing unreachable block (ram,0x00100e14) */
/* WARNING: Removing unreachable block (ram,0x00100e28) */
/* WARNING: Removing unreachable block (ram,0x00100e34) */
/* WARNING: Removing unreachable block (ram,0x00100ea8) */
/* WARNING: Removing unreachable block (ram,0x00100eb8) */
/* WARNING: Removing unreachable block (ram,0x00100ed8) */
/* WARNING: Removing unreachable block (ram,0x00100f0c) */
/* WARNING: Removing unreachable block (ram,0x00100f1c) */
/* WARNING: Removing unreachable block (ram,0x00100f24) */

int param_varargs(int count,...)

{
 uint uVar1;
 int iVar2;
 int *piVar3;
 uint local_8;
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 iVar2 = 0;
 }
 else {
 local_8 = 0xffffffc8;
 iVar2 = 0;
 piVar3 = (int *)register0x00000008;
 do {
 while ((uVar1 = local_8, (int)local_8 < 0 && (uVar1 = local_8 + 8, local_8 < 0xfffffff9))) {
 count = count + -1;
 iVar2 = *(int *)(&stack0xffffffffffffffe0 + (int)local_8) + iVar2;
 local_8 = local_8 + 8;
 if (count == 0) {
 return iVar2;
 }
 }
 local_8 = uVar1;
 count = count + -1;
 iVar2 = *piVar3 + iVar2;
 piVar3 = piVar3 + 2;
 } while (count != 0);
 }
 return iVar2;
}



/* Function: call_varargs_param @ 00100f48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 00100f60 */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00100f80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00100f88 */

int param_double_ptr(int **pp,int new_val)

{
 if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
 **pp = new_val;
 *pp = (int *)0x0;
 return 1;
 }
 return -1;
}



/* Function: call_double_ptr @ 00100fb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[???]
 Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: param_complex_cast @ 00100fb8 */

int param_complex_cast(void *p,int type)

{
 if (type == 1) {
 /* Unresolved local var: TestIntPair * s@[DW_OP_reg0(x0)] */
 return *(int *)((long)p + 4) + *(int *)p;
 }
 if (type == 0) {
 /* Unresolved local var: int * int_ptr@[DW_OP_reg0(x0)]
 Unresolved local var: int * back_ptr@[DW_OP_reg0(x0)]
 Unresolved local var: char * char_ptr@[DW_OP_reg0(x0)] */
 return *(int *)p;
 }
 return -1;
}



/* Function: call_complex_cast @ 00100fe0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[???] */
 return 0x12345678;
}



/* Function: param_struct_byval @ 00100fec */

int param_struct_byval(BigStruct *s)

{
 return s->data[0xf] + s->data[0];
}



/* Function: call_struct_byval @ 00100ffc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 /* Unresolved local var: BigStruct s@[???] */
 return 0xf;
}



/* Function: param_order_dep @ 00101004 */

int param_order_dep(int a,int b)

{
 return b + a;
}



/* Function: call_order_dep @ 0010100c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 /* Unresolved local var: int i@[???] */
 return 3;
}



/* Function: test_parameter_passing @ 00101014 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 uint uVar1;
 
 puts(DAT_00101773);
 printf("PARAM-L1-01: %d\n",0xf);
 printf("PARAM-L1-02: %d\n",0xb);
 printf("PARAM-L2-01: %d\n",8);
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



/* Function: ret_basic_type @ 001010f8 */

int ret_basic_type(int x)

{
 return x << 1;
}



/* Function: call_ret_basic @ 00101100 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0x2a;
}



/* Function: ret_pointer @ 00101108 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 00101110 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 /* Unresolved local var: int[3] arr@[???]
 Unresolved local var: int * ptr@[???] */
 return 0x14;
}



/* Function: ret_small_struct @ 00101118 */

SmallPoint ret_small_struct(int x,int y)

{
 SmallPoint SVar1;
 
 SVar1.y = y;
 SVar1.x = x;
 /* Unresolved local var: SmallPoint p@[DW_OP_reg0(x0); DW_OP_piece: 4;
 DW_OP_reg1(x1); DW_OP_piece: 4] */
 return SVar1;
}



/* Function: call_ret_small_struct @ 00101124 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 /* Unresolved local var: SmallPoint p@[???] */
 return 7;
}



/* Function: ret_large_struct @ 0010112c */

void ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 /* Unresolved local var: LargeData d@[DW_OP_breg8(x8): 0] */
 /* Unresolved local var: int i@[???] */
 __return_storage_ptr__->data[0] = seed;
 __return_storage_ptr__->data[0xf] = seed + 0xf;
 *(ulong *)(__return_storage_ptr__->data + 3) = CONCAT44(seed + 4,seed + 3);
 *(ulong *)(__return_storage_ptr__->data + 1) = CONCAT44(seed + 2,seed + 1);
 *(ulong *)(__return_storage_ptr__->data + 7) = CONCAT44(seed + 8,seed + 7);
 *(ulong *)(__return_storage_ptr__->data + 5) = CONCAT44(seed + 6,seed + 5);
 *(ulong *)(__return_storage_ptr__->data + 0xb) = CONCAT44(seed + 0xc,seed + 0xb);
 *(ulong *)(__return_storage_ptr__->data + 9) = CONCAT44(seed + 10,seed + 9);
 *(ulong *)(__return_storage_ptr__->data + 0xd) = CONCAT44(seed + 0xe,seed + 0xd);
 return;
}



/* Function: call_ret_large_struct @ 00101184 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 /* Unresolved local var: LargeData d@[???] */
 return 0xd7;
}



/* Function: func_a @ 0010118c */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 00101194 */

int func_b(int x)

{
 return x << 1;
}



/* Function: ret_func_ptr @ 0010119c */

func_ptr_t ret_func_ptr(int selector)

{
 func_ptr_t p_Var1;
 
 p_Var1 = func_a;
 if (selector != 0) {
 p_Var1 = func_b;
 }
 return p_Var1;
}



/* Function: call_ret_func_ptr @ 001011b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 /* Unresolved local var: func_ptr_t f@[???] */
 return 10;
}



/* Static handles for ret_opaque_handle */
static int handle1 = 0x1234;
static int handle2 = 0x5678;

/* Function: ret_opaque_handle @ 001011c0 */

void * ret_opaque_handle(int type)

{
 int *piVar1;
 
 piVar1 = &handle1;
 if (type != 0) {
 piVar1 = &handle2;
 }
 return (void *)piVar1;
}



/* Function: call_ret_opaque @ 001011d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 /* Unresolved local var: void * h@[???] */
 return handle1;
}



/* Function: ret_complex_expr @ 001011e4 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 iVar1 = z << 1;
 if (x <= y) {
 iVar1 = z + 10;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 001011f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28;
}



/* Function: ret_multi_branch @ 00101200 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 iVar1 = op * 10 + 10;
 if (2 < (uint)op) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00101218 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x3c;
}



/* Function: ret_void @ 00101220 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 0010122c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 /* Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: test_return_values @ 00101234 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 puts(DAT_00101794);
 printf(DAT_00101655,0x2a);
 printf(DAT_00101671,0x14);
 printf(DAT_0010168d,7);
 printf(DAT_001016a8,0xd7);
 printf(DAT_001016c5,10);
 printf(DAT_001016e1,(ulong)(uint)handle1);
 printf(DAT_001016fe,0x28);
 printf(DAT_0010171a,0x3c);
 printf(DAT_00101736,0x15);
 return;
}



/* Function: main @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 puts(DAT_00101794);
 printf(DAT_00101655,0x2a);
 printf(DAT_00101671,0x14);
 printf(DAT_0010168d,7);
 printf(DAT_001016a8,0xd7);
 printf(DAT_001016c5,10);
 printf(DAT_001016e1,(ulong)(uint)handle1);
 printf(DAT_001016fe,0x28);
 printf(DAT_0010171a,0x3c);
 printf(DAT_00101736,0x15);
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 79 */
