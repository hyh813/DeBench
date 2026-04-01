/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
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
typedef unsigned long ulong;
typedef unsigned int uint;
typedef void *code;
typedef unsigned char undefined;
typedef unsigned long long undefined8;

/* Function pointer typedef - needed for function pointer parameters */
typedef int (*_func_int_int)(int);

/* Static storage for opaque handle return values */
static void *handle1;
static void *handle2;

/* Placeholder for stack access - needed for varargs functions */
static const int stack0x00000008 = 0;

/* String literals referenced in the binary */
static const char DAT_0010238a[] = "Calling Conventions Test\n";
static const char DAT_001020e0[] = "VARARGS: %d\n";
static const char DAT_00102108[] = "NOARGS: %d\n";
static const char DAT_0010212a[] = "MANYARGS: %d\n";
static const char DAT_00102151[] = "MIXEDARGS: %d\n";
static const char DAT_00102179[] = "STRUCTVAL: %d\n";
static const char DAT_001021a5[] = "STRUCTPTR: %d\n";
static const char DAT_001023ab[] = "Parameter Passing Test\n";
static const char DAT_001023cc[] = "Return Values Test\n";
static const char DAT_0010228d[] = "BASIC: %d\n";
static const char DAT_001022a9[] = "POINTER: %d\n";
static const char DAT_001022c5[] = "SMALLSTRUCT: %d\n";
static const char DAT_001022e0[] = "LARGESTRUCT: %d\n";
static const char DAT_001022fd[] = "FUNCPTR: %d\n";
static const char DAT_00102319[] = "OPAQUE: %d\n";
static const char DAT_00102336[] = "COMPLEX: %d\n";
static const char DAT_00102352[] = "BRANCH: %d\n";
static const char DAT_0010236e[] = "VOID: %d\n";
typedef struct {
    int data[16];
} LargeStruct;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    int data[16];
} LargeData;

typedef struct {
    int data[16];
} BigStruct;

typedef struct {
    int a;
    int b;
} TestIntPair;

typedef int (*func_ptr_t)(int);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/4/4_clang_O3_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 /* This function was likely a CRT stub that has been removed */
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

/* WARNING: Removing unreachable block (ram,0x00101312) */
/* WARNING: Removing unreachable block (ram,0x001013d2) */
/* WARNING: Removing unreachable block (ram,0x001013e0) */
/* WARNING: Removing unreachable block (ram,0x00101328) */
/* WARNING: Removing unreachable block (ram,0x00101417) */
/* WARNING: Removing unreachable block (ram,0x0010141b) */
/* WARNING: Removing unreachable block (ram,0x00101420) */

int varargs_func(int count,...)

{
 int *piVar1;
 int iVar2;
 ulong uVar3;
 uint uVar4;
 uint local_d8;
 int *local_d0;
 int local_b8 [46];
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 return 0;
 }
 local_d8 = 8;
 local_d0 = (int *)&stack0x00000008;
 if (count == 1) {
 iVar2 = 0;
 }
 else {
 uVar4 = count & 0xfffffffe;
 iVar2 = 0;
 do {
 while (0x28 < local_d8) {
 piVar1 = local_d0 + 2;
 iVar2 = iVar2 + *local_d0;
 local_d0 = piVar1;
 if (0x28 < local_d8) goto LAB_00101396;
LAB_00101340:
 uVar3 = (ulong)local_d8;
 local_d8 = local_d8 + 8;
 iVar2 = iVar2 + *(int *)((long)local_b8 + uVar3);
 uVar4 = uVar4 - 2;
 if (uVar4 == 0) goto LAB_001013ab;
 }
 uVar3 = (ulong)local_d8;
 local_d8 = local_d8 + 8;
 iVar2 = iVar2 + *(int *)((long)local_b8 + uVar3);
 if (local_d8 < 0x29) goto LAB_00101340;
LAB_00101396:
 piVar1 = local_d0 + 2;
 iVar2 = iVar2 + *local_d0;
 uVar4 = uVar4 - 2;
 local_d0 = piVar1;
 } while (uVar4 != 0);
 }
LAB_001013ab:
 if ((count & 1U) == 0) {
 return iVar2;
 }
 if (0x28 < local_d8) {
 return iVar2 + *local_d0;
 }
 return iVar2 + *(int *)((long)local_b8 + (ulong)local_d8);
}



/* Function: func_no_args @ 00101450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00101460 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00101480 */

int func_mixed_args(int x,char *s,double d,int64_t ll)

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



/* Function: func_struct_byval @ 001014d0 */

int func_struct_byval(LargeStruct s)

{
 /* Unresolved local var: longlong sum@[???]
 Unresolved local var: int i@[???] */
 return (int)(s.data[3] + s.data[0xb] + s.data[7] + s.data[0xf] +
 s.data[1] + s.data[9] + s.data[5] + s.data[0xd]) +
 (int)s.data[2] + (int)s.data[10] + (int)s.data[6] + (int)s.data[0xe] +
 (int)s.data[0] + (int)s.data[8] + (int)s.data[4] + (int)s.data[0xc];
}



/* Function: func_struct_byptr @ 00101520 */

int func_struct_byptr(SmallStruct *p)

{
 if (p != (SmallStruct *)0x0) {
 return p->y * p->x;
 }
 return -1;
}



/* Function: test_calling_conventions @ 00101540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 uint uVar1;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int no_args@[???]
 Unresolved local var: int many@[???]
 Unresolved local var: int mixed@[???]
 Unresolved local var: LargeStruct large@[???]
 Unresolved local var: int struct_val@[???]
 Unresolved local var: int struct_ptr@[???]
 Unresolved local var: char * test_str@[???]
 Unresolved local var: SmallStruct s@[???] */
 puts(&DAT_0010238a);
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
 printf(&DAT_001020e0,(ulong)uVar1);
 printf(&DAT_00102108,0x2a);
 printf(&DAT_0010212a,0x24);
 printf(&DAT_00102151,0x75);
 printf(&DAT_00102179,0x88);
 printf(&DAT_001021a5,0x32);
 return;
}



/* Function: param_by_value_int @ 001016b0 */

int param_by_value_int(int x)

{
 return x * 2;
}



/* Function: call_by_value_int @ 001016c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0xf;
}



/* Function: param_by_value_ptr @ 001016d0 */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 001016e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: int * ptr@[???] */
 return 0xb;
}



/* Function: param_array_decay @ 001016f0 */

int param_array_decay(int *arr,int n)

{
 return 8;
}



/* Function: call_array_decay @ 00101700 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 /* Unresolved local var: int[10] array@[???] */
 return 8;
}



/* Function: param_string @ 00101710 */

int param_string(char *str)

{
 return (int)str[1] + (int)*str;
}



/* Function: call_string_param @ 00101720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00101730 */

int param_ptr_array(char **arr,int n)

{
 int iVar1;
 ulong uVar2;
 ulong uVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 if ((ulong)(uint)n - 1 < 3) {
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
 } while ((n & 0xfffffffc) != uVar2);
 }
 if ((ulong)(n & 3) != 0) {
 uVar3 = 0;
 do {
 iVar1 = iVar1 + *arr[uVar2 + uVar3];
 uVar3 = uVar3 + 1;
 } while ((n & 3) != uVar3);
 }
 return iVar1;
 }
 return 0;
}



/* Function: call_ptr_array @ 001017c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 /* Unresolved local var: char *[3] strs@[???] */
 return 300;
}



/* Function: param_varargs @ 001017d0 */

/* WARNING: Removing unreachable block (ram,0x00101862) */
/* WARNING: Removing unreachable block (ram,0x00101922) */
/* WARNING: Removing unreachable block (ram,0x00101930) */
/* WARNING: Removing unreachable block (ram,0x00101878) */
/* WARNING: Removing unreachable block (ram,0x00101967) */
/* WARNING: Removing unreachable block (ram,0x0010196b) */
/* WARNING: Removing unreachable block (ram,0x00101970) */

int param_varargs(int count,...)

{
 int *piVar1;
 int iVar2;
 ulong uVar3;
 uint uVar4;
 uint local_d8;
 int *local_d0;
 int local_b8 [46];
 
 /* Unresolved local var: va_list args@[???]
 Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (count < 1) {
 return 0;
 }
 local_d8 = 8;
 local_d0 = (int *)&stack0x00000008;
 if (count == 1) {
 iVar2 = 0;
 }
 else {
 uVar4 = count & 0xfffffffe;
 iVar2 = 0;
 do {
 while (0x28 < local_d8) {
 piVar1 = local_d0 + 2;
 iVar2 = iVar2 + *local_d0;
 local_d0 = piVar1;
 if (0x28 < local_d8) goto LAB_001018e6;
LAB_00101890:
 uVar3 = (ulong)local_d8;
 local_d8 = local_d8 + 8;
 iVar2 = iVar2 + *(int *)((long)local_b8 + uVar3);
 uVar4 = uVar4 - 2;
 if (uVar4 == 0) goto LAB_001018fb;
 }
 uVar3 = (ulong)local_d8;
 local_d8 = local_d8 + 8;
 iVar2 = iVar2 + *(int *)((long)local_b8 + uVar3);
 if (local_d8 < 0x29) goto LAB_00101890;
LAB_001018e6:
 piVar1 = local_d0 + 2;
 iVar2 = iVar2 + *local_d0;
 uVar4 = uVar4 - 2;
 local_d0 = piVar1;
 } while (uVar4 != 0);
 }
LAB_001018fb:
 if ((count & 1U) == 0) {
 return iVar2;
 }
 if (0x28 < local_d8) {
 return iVar2 + *local_d0;
 }
 return iVar2 + *(int *)((long)local_b8 + (ulong)local_d8);
}



/* Function: call_varargs_param @ 001019a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 001019d0 */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 001019e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 001019f0 */

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



/* Function: call_double_ptr @ 00101a20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int * ptr@[???]
 Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: param_complex_cast @ 00101a30 */

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



/* Function: call_complex_cast @ 00101a50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: TestIntPair pair@[???] */
 return 0x12345678;
}



/* Function: param_struct_byval @ 00101a60 */

int param_struct_byval(BigStruct s)

{
 return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 00101a70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 /* Unresolved local var: BigStruct s@[???] */
 return 0xf;
}



/* Function: param_order_dep @ 00101a80 */

int param_order_dep(int a,int b)

{
 return a + b;
}



/* Function: call_order_dep @ 00101a90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 /* Unresolved local var: int i@[???] */
 return 3;
}



/* Function: test_parameter_passing @ 00101aa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 uint uVar1;
 
 puts(&DAT_001023ab);
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
 printf("PARAM-L3-04: %d\n",0xf);
 printf("PARAM-L3-05: %d\n",3);
 return;
}



/* Function: ret_basic_type @ 00101ba0 */

int ret_basic_type(int x)

{
 return x * 2;
}



/* Function: call_ret_basic @ 00101bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 /* Unresolved local var: int val@[???]
 Unresolved local var: int result@[???] */
 return 0x2a;
}



/* Function: ret_pointer @ 00101bc0 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 00101bd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 /* Unresolved local var: int[3] arr@[???]
 Unresolved local var: int * ptr@[???] */
 return 0x14;
}



/* Function: ret_small_struct @ 00101be0 */

SmallPoint ret_small_struct(int x,int y)

{
 SmallPoint SVar1;
 
 SVar1.y = y;
 SVar1.x = x;
 /* Unresolved local var: SmallPoint p@[DW_OP_reg5(RDI); DW_OP_piece: 4;
 DW_OP_reg4(RSI); DW_OP_piece: 4] */
 return SVar1;
}



/* Function: call_ret_small_struct @ 00101bf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 /* Unresolved local var: SmallPoint p@[???] */
 return 7;
}



/* Function: ret_large_struct @ 00101c00 */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 /* Unresolved local var: LargeData d@[DW_OP_breg5(RDI): 0] */
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



/* Function: call_ret_large_struct @ 00101c50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 /* Unresolved local var: LargeData d@[???] */
 return 0xd7;
}



/* Function: func_a @ 00101c60 */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 00101c70 */

int func_b(int x)

{
 return x * 2;
}



/* Function: ret_func_ptr @ 00101c80 */

func_ptr_t ret_func_ptr(int selector)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (selector == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101ca0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 /* Unresolved local var: func_ptr_t f@[???] */
 return 10;
}



/* Function: ret_opaque_handle @ 00101cb0 */

void * ret_opaque_handle(int type)

{
 void **ppVar1;
 
 ppVar1 = &handle2;
 if (type == 0) {
 ppVar1 = &handle1;
 }
 return ppVar1;
}



/* Function: call_ret_opaque @ 00101cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 /* Unresolved local var: void * h@[???] */
 return (int)(uintptr_t)ret_opaque_handle(0);
}



/* Function: ret_complex_expr @ 00101ce0 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 iVar1 = z + 10;
 if (y < x) {
 iVar1 = z * 2;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101cf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28;
}



/* Function: ret_multi_branch @ 00101d00 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 3) {
 iVar1 = op * 10 + 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00101d20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 /* Unresolved local var: int sum@[???] */
 return 0x3c;
}



/* Function: ret_void @ 00101d30 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00101d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 /* Unresolved local var: int result@[???] */
 return 0x15;
}



/* Function: test_return_values @ 00101d50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 undefined8 in_RAX;
 undefined8 extraout_RDX;
 
 puts(&DAT_001023cc);
 printf(&DAT_0010228d,0x2a);
 printf(&DAT_001022a9,0x14);
 printf(&DAT_001022c5,7);
 printf(&DAT_001022e0,0xd7);
 printf(&DAT_001022fd,10);
 printf(&DAT_00102319,(ulong)(uintptr_t)ret_opaque_handle(0));
 printf(&DAT_00102336,0x28);
 printf(&DAT_00102352,0x3c);
 printf(&DAT_0010236e,0x15);
 return;
}



/* Function: main @ 00101e10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 puts(&DAT_001023cc);
 printf(&DAT_0010228d,0x2a);
 printf(&DAT_001022a9,0x14);
 printf(&DAT_001022c5,7);
 printf(&DAT_001022e0,0xd7);
 printf(&DAT_001022fd,10);
 printf(&DAT_00102319,(ulong)(uintptr_t)ret_opaque_handle(0));
 printf(&DAT_00102336,0x28);
 printf(&DAT_00102352,0x3c);
 printf(&DAT_0010236e,0x15);
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 77 */
