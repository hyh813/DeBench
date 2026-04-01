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
typedef long long longlong;
#define true 1
#define false 0

/* Ghidra decompiler types */
typedef void undefined;
typedef void code;
typedef uint64_t undefined8;
typedef uint64_t ulong;

/* Standard includes */
#include <stdarg.h>
#include <string.h>

/* Structure definitions */
typedef struct {
    long long data[16];
} LargeStruct;

typedef struct {
    long long data[16];
} BigStruct;

typedef struct {
    int data[64];
} LargeData;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    int a;
    int b;
} TestIntPair;

/* Function pointer type */
typedef int (*_func_int_int)(int);
typedef int (*func_ptr_t)(int);

/* Global handles */
int handle1_1 = 0;
int handle2_0 = 0;

/* Data constants from decompilation */
static char DAT_00102080[24] = "STRUCT-BYVAL-L1: %d\n";
static char DAT_001020a8[24] = "STRUCT-BYPTR-L1: %d\n";
static char DAT_001020d0[24] = "STRUCT-SUM-L1: %d\n";
static char DAT_00102100[24] = "STRUCT-END-L1: %d\n";
static char DAT_00102130[56] = "=== Testing Parameter Passing ===\n";
static char DAT_001022ac[30] = "=== Testing Return Values ===\n";
static char DAT_001022ca[30] = "RET-BASIC: %d\n";
static char DAT_001022e6[30] = "RET-PTR: %d\n";
static char DAT_00102302[30] = "RET-SMALL-STRUCT: %d\n";
static char DAT_0010231d[30] = "RET-LARGE-STRUCT: %d\n";
static char DAT_0010233a[30] = "RET-FUNC-PTR: %d\n";
static char DAT_00102356[30] = "RET-HANDLE: %d\n";
static char DAT_00102373[30] = "RET-COMPLEX: %d\n";
static char DAT_0010238f[30] = "RET-MULTI: %d\n";
static char DAT_001023ab[30] = "RET-VOID: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/4/4_gcc_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 return;
}



/* Function: main @ 001010c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: func_a @ 001011e0 */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 001011f0 */

int func_b(int param_1)

{
 return param_1 * 2;
}



/* Function: cdecl_func @ 00101200 */

int cdecl_func(int a,int b)

{
 return a + b;
}



/* Function: call_cdecl @ 00101210 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 00101220 */

int stdcall_func(int a,int b)

{
 return a * b;
}



/* Function: call_stdcall @ 00101230 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00101240 */

int fastcall_func(int a,int b,int c)

{
 return a + b + c;
}



/* Function: call_fastcall @ 00101250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 00101260 */

undefined8 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00101270 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 00101280 */

undefined8 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 00101290 */

int mips_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_mips @ 001012a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 001012b0 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 001012d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 001012e0 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 001012f0 */

undefined8 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00101300 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 00101320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 00101330 */

int varargs_func(int count,...)

{
 int iVar1;
 undefined8 in_RCX;
 ulong uVar2;
 undefined8 in_RDX;
 undefined8 in_RSI;
 int *piVar3;
 int iVar4;
 undefined8 in_R8;
 undefined8 in_R9;
 long in_FS_OFFSET;
 va_list args;
 int local_38 [2];
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
 undefined8 local_18;
 undefined8 local_10;
 
 local_30 = in_RSI;
 local_28 = in_RDX;
 local_20 = in_RCX;
 local_18 = in_R8;
 local_10 = in_R9;
 if (count < 1) {
 iVar4 = 0;
 }
 else {
 va_start(args, count);
 iVar1 = 0;
 iVar4 = 0;
 do {
 iVar4 = iVar4 + va_arg(args, int);
 iVar1 = iVar1 + 1;
 } while (count != iVar1);
 va_end(args);
 }
LAB_001013c0:
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar4;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: func_no_args @ 001013f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00101400 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00101420 */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
 size_t sVar1;
 
 if (s != (char *)0x0) {
 sVar1 = strlen(s);
 x = x + (int)sVar1;
 }
 return (int)((double)x + d + (double)ll);
}



/* Function: func_struct_byval @ 00101480 */

/* WARNING: Unknown calling convention */

int func_struct_byval(LargeStruct s)

{
 long lVar1;
 longlong *plVar2;
 
 plVar2 = s.data;
 lVar1 = 0;
 do {
 lVar1 = lVar1 + *plVar2;
 plVar2 = plVar2 + 1;
 } while (plVar2 != (longlong *)(s.data + 16));
 return (int)lVar1;
}



/* Function: func_struct_byptr @ 001014b0 */

int func_struct_byptr(SmallStruct *p)

{
 if (p != (SmallStruct *)0x0) {
 return p->x * p->y;
 }
 return -1;
}



/* Function: test_calling_conventions @ 001014d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 int iVar1;
 long lVar2;
 long *plVar3;
 long in_FS_OFFSET;
 LargeStruct large;
 longlong local_98 [16];
 long local_18;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts("=== Testing Calling Conventions ===\n");
 __printf_chk(1,"CALL-L1-01: %d\n",0xf);
 __printf_chk(1,"CALL-L1-02: %d\n",0x32);
 __printf_chk(1,"CALL-L1-03: %d\n",6);
 __printf_chk(1,"CALL-L1-04: %d\n",0xf);
 __printf_chk(1,"CALL-L1-05: %d\n",0xf);
 __printf_chk(1,"CALL-L1-06: %d\n",100);
 __printf_chk(1,"CALL-L1-07: %d\n",0x15);
 __printf_chk(1,"CALL-L1-08: %d\n",0xf);
 __printf_chk(1,"CALL-L1-09: %d\n",10);
 __printf_chk(1,"CALL-L1-10: %d\n",0x21);
 iVar1 = varargs_func(5,1,2,3,4,5);
 __printf_chk(1,"VARARGS-L1: sum=%d\n",iVar1);
 __printf_chk(1,"NO-ARGS-L1: %d\n",0x2a);
 __printf_chk(1,&DAT_00102080,0x24);
 __printf_chk(1,&DAT_001020a8,0x75);
 /* Unresolved local var: int i@[???] */
 lVar2 = 1;
 do {
 large.data[lVar2 + -1] = lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x11);
 /* Unresolved local var: longlong sum@[???] */
 lVar2 = 0;
 plVar3 = local_98;
 local_98[0] = large.data[0];
 local_98[1] = large.data[1];
 local_98[2] = large.data[2];
 local_98[3] = large.data[3];
 local_98[4] = large.data[4];
 local_98[5] = large.data[5];
 local_98[6] = large.data[6];
 local_98[7] = large.data[7];
 local_98[8] = large.data[8];
 local_98[9] = large.data[9];
 local_98[10] = large.data[10];
 local_98[0xb] = large.data[0xb];
 local_98[0xc] = large.data[0xc];
 local_98[0xd] = large.data[0xd];
 local_98[0xe] = large.data[0xe];
 local_98[0xf] = large.data[0xf];
 do {
 /* Unresolved local var: int i@[???] */
 lVar2 = lVar2 + *plVar3;
 plVar3 = plVar3 + 1;
 } while (&local_18 != plVar3);
 __printf_chk(1,&DAT_001020d0,lVar2);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_00102100,0x32);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_by_value_int @ 00101770 */

int param_by_value_int(int x)

{
 return x * 2;
}



/* Function: call_by_value_int @ 00101780 */

undefined8 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 00101790 */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 001017a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 001017b0 */

int param_array_decay(int *arr,int n)

{
 return 8;
}



/* Function: call_array_decay @ 001017c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 return 8;
}



/* Function: param_string @ 001017d0 */

int param_string(char *str)

{
 return (int)*str + (int)str[1];
}



/* Function: call_string_param @ 001017e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 001017f0 */

int param_ptr_array(char **arr,int n)

{
 char **ppcVar1;
 char *pcVar2;
 int iVar3;
 
 /* Unresolved local var: int i@[???] */
 if (0 < n) {
 ppcVar1 = arr + (ulong)(n - 1) + 1;
 iVar3 = 0;
 do {
 pcVar2 = *arr;
 arr = arr + 1;
 iVar3 = iVar3 + *pcVar2;
 } while (arr != ppcVar1);
 return iVar3;
 }
 return 0;
}



/* Function: call_ptr_array @ 00101830 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 return 300;
}



/* Function: param_varargs @ 00101840 */

int param_varargs(int count,...)

{
 int iVar1;
 undefined8 in_RCX;
 ulong uVar2;
 undefined8 in_RDX;
 undefined8 in_RSI;
 int *piVar3;
 int iVar4;
 undefined8 in_R8;
 undefined8 in_R9;
 long in_FS_OFFSET;
 va_list args;
 int local_38 [2];
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
 undefined8 local_18;
 undefined8 local_10;
 
 local_30 = in_RSI;
 local_28 = in_RDX;
 local_20 = in_RCX;
 local_18 = in_R8;
 local_10 = in_R9;
 if (count < 1) {
 iVar4 = 0;
 }
 else {
 va_start(args, count);
 iVar1 = 0;
 iVar4 = 0;
 do {
 iVar4 = iVar4 + va_arg(args, int);
 iVar1 = iVar1 + 1;
 } while (count != iVar1);
 va_end(args);
 }
LAB_001018d0:
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar4;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_varargs_param @ 00101900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 00101930 */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00101950 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 return 0x14;
}



/* Function: param_double_ptr @ 00101960 */

int param_double_ptr(int **pp,int new_val)

{
 if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
 **pp = new_val;
 *pp = (int *)0x0;
 return 1;
 }
 return -1;
}



/* Function: call_double_ptr @ 00101990 */

undefined8 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 001019a0 */

int param_complex_cast(void *p,int type)

{
 if (type == 0) {
 /* Unresolved local var: int * int_ptr@[???]
 Unresolved local var: char * char_ptr@[???]
 Unresolved local var: int * back_ptr@[???] */
 return *(int *)p;
 }
 if (type == 1) {
 /* Unresolved local var: TestIntPair * s@[???] */
 return *(int *)((long)p + 4) + *(int *)p;
 }
 return -1;
}



/* Function: call_complex_cast @ 001019d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 001019e0 */

/* WARNING: Unknown calling convention */

int param_struct_byval(BigStruct s)

{
 return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 001019f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 long lVar1;
 long lVar2;
 long in_FS_OFFSET;
 BigStruct s;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 lVar2 = 0;
 /* Unresolved local var: int i@[???] */
 do {
 s.data[lVar2] = (int)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return s.data[0xf] + s.data[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_order_dep @ 00101a40 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 00101a50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 00101a60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 long lVar1;
 int iVar2;
 long lVar3;
 long in_FS_OFFSET;
 BigStruct s;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102130);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",8);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 __printf_chk(1,"PARAM-L2-03: %d\n",300);
 iVar2 = param_varargs(4,10,0x14,0x1e,0x28);
 __printf_chk(1,"PARAM-L2-04: %d\n",iVar2);
 __printf_chk(1,"PARAM-L3-01: %d\n",0x14);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 /* Unresolved local var: int i@[???] */
 lVar3 = 0;
 do {
 s.data[lVar3] = (int)lVar3;
 lVar3 = lVar3 + 1;
 } while (lVar3 != 0x10);
 __printf_chk(1,"PARAM-L3-04: %d\n",s.data[0xf] + s.data[0]);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,"PARAM-L3-05: %d\n",4);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ret_basic_type @ 00101be0 */

int ret_basic_type(int param_1)

{
 return param_1 * 2;
}



/* Function: call_ret_basic @ 00101bf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 00101c00 */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 00101c10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 00101c20 */

SmallPoint ret_small_struct(int x,int y)

{
 SmallPoint SVar1;
 
 SVar1.y = y;
 SVar1.x = x;
 return SVar1;
}



/* Function: call_ret_small_struct @ 00101c30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 00101c40 */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 LargeData *pLVar1;
 long in_FS_OFFSET;
 LargeData d;
 int local_18 [2];
 long local_10;
 
 pLVar1 = &d;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 do {
 /* Unresolved local var: int i@[???] */
 pLVar1->data[0] = seed;
 pLVar1 = (LargeData *)((long)pLVar1 + 4);
 seed = seed + 1;
 } while (pLVar1 != (LargeData *)local_18);
 *(undefined8 *)__return_storage_ptr__->data = *(undefined8 *)d.data;
 *(undefined8 *)(__return_storage_ptr__->data + 2) = *(undefined8 *)&d.data[2];
 *(undefined8 *)(__return_storage_ptr__->data + 4) = *(undefined8 *)&d.data[4];
 *(undefined8 *)(__return_storage_ptr__->data + 6) = *(undefined8 *)&d.data[6];
 *(undefined8 *)(__return_storage_ptr__->data + 8) = *(undefined8 *)&d.data[8];
 *(undefined8 *)(__return_storage_ptr__->data + 10) = *(undefined8 *)&d.data[10];
 *(undefined8 *)(__return_storage_ptr__->data + 0xc) = *(undefined8 *)&d.data[0xc];
 *(undefined8 *)(__return_storage_ptr__->data + 0xe) = *(undefined8 *)&d.data[0xe];
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return __return_storage_ptr__;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_ret_large_struct @ 00101cc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 LargeData *pLVar1;
 int iVar2;
 long in_FS_OFFSET;
 LargeData d;
 int local_18 [2];
 long local_10;
 
 pLVar1 = &d;
 iVar2 = 100;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 do {
 /* Unresolved local var: int i@[???] */
 pLVar1->data[0] = iVar2;
 pLVar1 = (LargeData *)((long)pLVar1 + 4);
 iVar2 = iVar2 + 1;
 } while (pLVar1 != (LargeData *)local_18);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return d.data[0xf] + d.data[0];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: ret_func_ptr @ 00101d20 */

func_ptr_t ret_func_ptr(int selector)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (selector == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00101d50 */

void * ret_opaque_handle(int type)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (type != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00101d70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 return handle1_1;
}



/* Function: ret_complex_expr @ 00101d80 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 iVar1 = z * 2;
 if (x <= y) {
 iVar1 = z + 10;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101d90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00101da0 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 3) {
 iVar1 = (op * 5 + 5) * 2;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00101dc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00101dd0 */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00101de0 */

undefined8 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00101df0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 int iVar1;
 
 puts(&DAT_001022ac);
 __printf_chk(1,&DAT_001022ca,0x2a);
 __printf_chk(1,&DAT_001022e6,0x14);
 __printf_chk(1,&DAT_00102302,7);
 iVar1 = call_ret_large_struct();
 __printf_chk(1,&DAT_0010231d,iVar1);
 __printf_chk(1,&DAT_0010233a,10);
 __printf_chk(1,&DAT_00102356,handle1_1);
 __printf_chk(1,&DAT_00102373,0x28);
 __printf_chk(1,&DAT_0010238f,0x3c);
 __printf_chk(1,&DAT_001023ab,0x15);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 77 */
