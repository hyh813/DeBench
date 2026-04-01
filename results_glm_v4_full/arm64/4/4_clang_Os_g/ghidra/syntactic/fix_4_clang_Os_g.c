/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned char byte;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned long long undefined8;
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
typedef long long longlong;

typedef void (*code)(void);
typedef int (*_func_int_int)(int);
typedef _func_int_int func_ptr_t;

#define CONCAT44(high, low) (((uint64_t)(high) << 32) | ((uint64_t)(low) & 0xffffffff))

/* Ghidra varargs stubs */
void *register0x00000008;
void *stack0xffffffffffffffe0;

/* Data symbol declarations */
extern const char DAT_001012d0[];
extern const char DAT_001012f8[];
extern const char DAT_0010131a[];
extern const char DAT_00101341[];
extern const char DAT_00101369[];
extern const char DAT_00101395[];
extern const char DAT_0010147d[];
extern const char DAT_00101499[];
extern const char DAT_001014b5[];
extern const char DAT_001014d0[];
extern const char DAT_001014ed[];
extern const char DAT_00101509[];
extern const char DAT_00101526[];
extern const char DAT_00101542[];
extern const char DAT_0010155e[];
extern const char DAT_0010157a[];
extern const char DAT_0010159b[];
extern const char DAT_001015bc[];

/* CRT and runtime symbols */
extern void *__dso_handle;
extern void __cxa_finalize(void *dso_handle);
void deregister_tm_clones(void);

/* Ghidra stub definitions */

void deregister_tm_clones(void) {
    /* CRT stub */
}
static char completed_0 = 0;
static int ret_opaque_handle_handle1 = 0;
static int ret_opaque_handle_handle2 = 0;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    long data[16];
} LargeStruct;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    long data[16];
} BigStruct;

typedef struct {
    long data[16];
} LargeData;

typedef unsigned long ulong;

#include <stdio.h>
#include <string.h>

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/4/4_clang_Os_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100680 @ 00100680 */

void FUN_00100680(void)

{
 (*(code *)(void *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001007fc @ 001007fc */

void FUN_001007fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 00100854 */

int cdecl_func(int a,int b)

{
 return b + a;
}



/* Function: call_cdecl @ 0010085c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00100864 */

int stdcall_func(int a,int b)

{
 return b * a;
}



/* Function: call_stdcall @ 0010086c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00100874 */

int fastcall_func(int a,int b,int c)

{
 return b + a + c;
}



/* Function: call_fastcall @ 00100880 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 00100888 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00100890 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return b + a + c + d + e;
}



/* Function: call_arm_aapcs @ 001008a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 001008ac */

int mips_func(int a,int b,int c,int d)

{
 return b + a + c + d;
}



/* Function: call_mips @ 001008bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 001008c4 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return b + a + c + d + e + f;
}



/* Function: call_amd64_sysv @ 001008dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 001008e4 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
 return b + a + c + d + e;
}



/* Function: call_ms_x64 @ 001008f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00100900 */

int vectorcall_func(int a,int b,int c,int d)

{
 return b + a + c + d;
}



/* Function: call_vectorcall @ 00100910 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00100918 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x21;
}



/* Function: varargs_func @ 00100920 */

int varargs_func(int count,...)

{
 uint uVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 uint local_8;
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 if (0 < count) {
 local_8 = 0xffffffc8;
 piVar4 = (int *)register0x00000008;
 do {
 uVar1 = local_8;
 if (((int)local_8 < 0) && (uVar1 = local_8 + 8, local_8 < 0xfffffff9)) {
 piVar3 = (int *)(&stack0xffffffffffffffe0 + (int)local_8);
 local_8 = local_8 + 8;
 }
 else {
 piVar3 = piVar4;
 local_8 = uVar1;
 piVar4 = piVar4 + 2;
 }
 count = count + -1;
 iVar2 = *piVar3 + iVar2;
 } while (count != 0);
 }
 return iVar2;
}



/* Function: func_no_args @ 001009cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 001009d4 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return b + a + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 001009f4 */

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



/* Function: func_struct_byval @ 00100a4c */

int func_struct_byval(LargeStruct *s)

{
 long *plVar1;
 long lVar2;
 long lVar3;
 long lVar4;
 
 /* Unresolved local var: longlong sum@[???] */
 lVar3 = 0;
 lVar4 = 0;
 lVar2 = 0;
 do {
 plVar1 = (long *)((long)s->data + lVar2);
 /* Unresolved local var: int i@[???] */
 lVar2 = lVar2 + 0x10;
 lVar3 = *plVar1 + lVar3;
 lVar4 = plVar1[1] + lVar4;
 } while (lVar2 != 0x80);
 return (int)lVar3 + (int)lVar4;
}



/* Function: func_struct_byptr @ 00100a74 */

int func_struct_byptr(SmallStruct *p)

{
 if (p != (SmallStruct *)0x0) {
 return p->y * p->x;
 }
 return -1;
}



/* Function: test_calling_conventions @ 00100a8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 long *plVar1;
 uint uVar2;
 long lVar3;
 long lVar4;
 long lVar5;
 long lVar6;
 long lVar7;
 long local_130 [32];
 
 /* Unresolved local var: LargeStruct large@[DW_OP_breg31(sp): +128]
 Unresolved local var: int sum@[???]
 Unresolved local var: int no_args@[???]
 Unresolved local var: int many@[???]
 Unresolved local var: int mixed@[???]
 Unresolved local var: int struct_val@[???]
 Unresolved local var: int struct_ptr@[???]
 Unresolved local var: char * test_str@[???]
 Unresolved local var: SmallStruct s@[???] */
 puts(DAT_0010157a);
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
 uVar2 = varargs_func(5,1,2,3,4,5);
 printf(DAT_001012d0,(ulong)uVar2);
 printf(DAT_001012f8,0x2a);
 printf(DAT_0010131a,0x24);
 printf(DAT_00101341,0x75);
 lVar3 = 0;
 lVar5 = 1;
 lVar4 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 lVar6 = lVar4 + 1;
 lVar7 = lVar5 + 1;
 lVar4 = lVar4 + 2;
 lVar5 = lVar5 + 2;
 *(long *)((long)local_130 + lVar3 + 0x88) = lVar7;
 *(long *)((long)local_130 + lVar3 + 0x80) = lVar6;
 lVar3 = lVar3 + 0x10;
 } while (lVar3 != 0x80);
 memcpy(local_130,local_130 + 0x10,0x80);
 lVar4 = 0;
 lVar5 = 0;
 lVar3 = 0;
 do {
 plVar1 = (long *)((long)local_130 + lVar3);
 lVar6 = lVar3 + 8;
 /* Unresolved local var: longlong sum@[???]
 Unresolved local var: int i@[???] */
 lVar3 = lVar3 + 0x10;
 lVar4 = *plVar1 + lVar4;
 lVar5 = *(long *)((long)local_130 + lVar6) + lVar5;
 } while (lVar3 != 0x80);
 printf(DAT_00101369,lVar4 + lVar5);
 printf(DAT_00101395,0x32);
 return;
}



/* Function: param_by_value_int @ 00100c44 */

int param_by_value_int(int x)

{
 return x << 1;
}



/* Function: call_by_value_int @ 00100c4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0xf;
}



/* Function: param_by_value_ptr @ 00100c54 */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00100c6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: int * ptr@[???] */
 return 0xb;
}



/* Function: param_array_decay @ 00100c74 */

int param_array_decay(int *arr,int n)

{
 return 8;
}



/* Function: call_array_decay @ 00100c7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 /* Unresolved local var: int[10] array@[???] */
 return 8;
}



/* Function: param_string @ 00100c84 */

int param_string(char *str)

{
 return (uint)(byte)str[1] + (uint)(byte)*str;
}



/* Function: call_string_param @ 00100c94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00100c9c */

int param_ptr_array(char **arr,int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 uVar2 = (ulong)(uint)n;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = iVar1 + (uint)(byte)**arr;
 arr = arr + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}



/* Function: call_ptr_array @ 00100cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 /* Unresolved local var: char *[3] strs@[???] */
 return 300;
}



/* Function: param_varargs @ 00100cd8 */

int param_varargs(int count,...)

{
 uint uVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 uint local_8;
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 iVar2 = 0;
 if (0 < count) {
 local_8 = 0xffffffc8;
 piVar4 = (int *)register0x00000008;
 do {
 uVar1 = local_8;
 if (((int)local_8 < 0) && (uVar1 = local_8 + 8, local_8 < 0xfffffff9)) {
 piVar3 = (int *)(&stack0xffffffffffffffe0 + (int)local_8);
 local_8 = local_8 + 8;
 }
 else {
 piVar3 = piVar4;
 local_8 = uVar1;
 piVar4 = piVar4 + 2;
 }
 count = count + -1;
 iVar2 = *piVar3 + iVar2;
 } while (count != 0);
 }
 return iVar2;
}



/* Function: call_varargs_param @ 00100d84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 00100d9c */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00100dbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00100dc4 */

int param_double_ptr(int **pp,int new_val)

{
 if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
 **pp = new_val;
 *pp = (int *)0x0;
 return 1;
 }
 return -1;
}



/* Function: call_double_ptr @ 00100dec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[???]
 Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: param_complex_cast @ 00100df4 */

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



/* Function: call_complex_cast @ 00100e1c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[???] */
 return 0x12345678;
}



/* Function: param_struct_byval @ 00100e28 */

int param_struct_byval(BigStruct *s)

{
 return s->data[0xf] + s->data[0];
}



/* Function: call_struct_byval @ 00100e38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 /* Unresolved local var: BigStruct s@[???] */
 /* Unresolved local var: int i@[???] */
 return 0xf;
}



/* Function: param_order_dep @ 00100e64 */

int param_order_dep(int a,int b)

{
 return b + a;
}



/* Function: call_order_dep @ 00100e6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 /* Unresolved local var: int i@[???] */
 return 3;
}



/* Function: test_parameter_passing @ 00100e74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 uint uVar1;
 
 puts(DAT_0010159b);
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
 /* Unresolved local var: BigStruct s@[DW_OP_breg31(sp): 0]
 Unresolved local var: int i@[???] */
 printf("PARAM-L3-04: %d\n",0xf);
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 00100f80 */

int ret_basic_type(int x)

{
 return x << 1;
}



/* Function: call_ret_basic @ 00100f88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0x2a;
}



/* Function: ret_pointer @ 00100f90 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 00100f98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 /* Unresolved local var: int[3] arr@[???]
 Unresolved local var: int * ptr@[???] */
 return 0x14;
}



/* Function: ret_small_struct @ 00100fa0 */

SmallPoint ret_small_struct(int x,int y)

{
 SmallPoint SVar1;
 
 SVar1.y = y;
 SVar1.x = x;
 /* Unresolved local var: SmallPoint p@[DW_OP_reg0(x0); DW_OP_piece: 4;
 DW_OP_reg1(x1); DW_OP_piece: 4] */
 return SVar1;
}



/* Function: call_ret_small_struct @ 00100fac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 /* Unresolved local var: SmallPoint p@[???] */
 return 7;
}



/* Function: ret_large_struct @ 00100fb4 */

void ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 undefined8 *puVar1;
 long lVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 
 /* Unresolved local var: LargeData d@[DW_OP_breg8(x8): 0] */
 lVar2 = 0;
 iVar5 = 2;
 iVar6 = 3;
 /* Unresolved local var: int i@[???] */
 iVar3 = 0;
 iVar4 = 1;
 do {
 iVar7 = iVar3 + seed;
 iVar8 = iVar4 + seed;
 iVar9 = iVar5 + seed;
 iVar10 = iVar6 + seed;
 iVar3 = iVar3 + 4;
 iVar4 = iVar4 + 4;
 iVar5 = iVar5 + 4;
 iVar6 = iVar6 + 4;
 puVar1 = (undefined8 *)((long)__return_storage_ptr__->data + lVar2);
 puVar1[1] = CONCAT44(iVar10,iVar9);
 *puVar1 = CONCAT44(iVar8,iVar7);
 lVar2 = lVar2 + 0x10;
 } while (lVar2 != 0x40);
 return;
}



/* Function: call_ret_large_struct @ 00100fe4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 /* Unresolved local var: LargeData d@[???] */
 /* Unresolved local var: LargeData d@[???]
 Unresolved local var: int i@[???] */
 return 0xd7;
}



/* Function: func_a @ 00101010 */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 00101018 */

int func_b(int x)

{
 return x << 1;
}



/* Function: ret_func_ptr @ 00101020 */

func_ptr_t ret_func_ptr(int selector)

{
 func_ptr_t p_Var1;
 
 p_Var1 = func_a;
 if (selector != 0) {
 p_Var1 = func_b;
 }
 return p_Var1;
}



/* Function: call_ret_func_ptr @ 0010103c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 /* Unresolved local var: func_ptr_t f@[???] */
 return 10;
}



/* Function: ret_opaque_handle @ 00101044 */

void * ret_opaque_handle(int type)

{
 int *piVar1;
 
 piVar1 = &ret_opaque_handle_handle1;
 if (type != 0) {
 piVar1 = &ret_opaque_handle_handle2;
 }
 return (void *)piVar1;
}



/* Function: call_ret_opaque @ 00101060 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 /* Unresolved local var: void * h@[???] */
 return ret_opaque_handle_handle1;
}



/* Function: ret_complex_expr @ 0010106c */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 iVar1 = z << 1;
 if (x <= y) {
 iVar1 = z + 10;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101080 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28;
}



/* Function: ret_multi_branch @ 00101088 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 iVar1 = op * 10 + 10;
 if (2 < (uint)op) {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 001010a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x3c;
}



/* Function: ret_void @ 001010a8 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 001010b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 /* Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: test_return_values @ 001010bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 puts(DAT_001015bc);
 printf(DAT_0010147d,0x2a);
 printf(DAT_00101499,0x14);
 printf(DAT_001014b5,7);
 /* Unresolved local var: LargeData d@[DW_OP_breg31(sp): 0]
 Unresolved local var: int i@[???] */
 printf(DAT_001014d0,0xd7);
 printf(DAT_001014ed,10);
 printf(DAT_00101509,(ulong)(uint)ret_opaque_handle_handle1);
 printf(DAT_00101526,0x28);
 printf(DAT_00101542,0x3c);
 printf(DAT_0010155e,0x15);
 return;
}



/* Function: main @ 00101190 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Data symbol definitions */
const char DAT_001012d0[] = "VARARGS: %d\n";
const char DAT_001012f8[] = "NO_ARGS: %d\n";
const char DAT_0010131a[] = "MANY_ARGS: %d\n";
const char DAT_00101341[] = "MIXED_ARGS: %d\n";
const char DAT_00101369[] = "STRUCT_VAL: %lld\n";
const char DAT_00101395[] = "STRUCT_PTR: %d\n";
const char DAT_0010147d[] = "RET-BASIC: %d\n";
const char DAT_00101499[] = "RET-PTR: %d\n";
const char DAT_001014b5[] = "RET-SMALL: %d\n";
const char DAT_001014d0[] = "RET-LARGE: %d\n";
const char DAT_001014ed[] = "RET-FUNC-PTR: %d\n";
const char DAT_00101509[] = "RET-OPAQUE: %lu\n";
const char DAT_00101526[] = "RET-COMPLEX: %d\n";
const char DAT_00101542[] = "RET-MULTI: %d\n";
const char DAT_0010155e[] = "RET-VOID: %d\n";
const char DAT_0010157a[] = "=== Calling Convention Tests ===";
const char DAT_0010159b[] = "=== Parameter Passing Tests ===";
const char DAT_001015bc[] = "=== Return Value Tests ===";

/* Total functions decompiled: 79 */
