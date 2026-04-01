/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>
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

/* Ghidra type mappings */
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined;
typedef unsigned long ulong;
typedef int (*func_ptr_t)(int);
typedef int (*_func_int_int)(int);

/* Additional common types */
typedef unsigned int uint;
typedef unsigned char byte;
typedef void (*code)();

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

/* External data */
extern int handle1_1;
extern int handle2_0;

/* Definition of external data */
int handle1_1 = 0;
int handle2_0 = 0;
extern char DAT_001020c5[];
extern char DAT_001020ed[];
extern char DAT_0010210f[];
extern char DAT_0010213b[];
extern char DAT_00102163[];
extern char DAT_0010218f[];
extern char DAT_001021c8[];
extern char DAT_001022a4[];
extern char DAT_001022c2[];
extern char DAT_001022de[];
extern char DAT_001022fa[];
extern char DAT_00102315[];
extern char DAT_00102332[];
extern char DAT_0010234e[];
extern char DAT_0010236b[];
extern char DAT_00102387[];
extern char DAT_001023a3[];

/* String data from .rodata section */
char DAT_00102004[] = "Testing Calling Conventions\n";
char DAT_001020c5[] = "VARARGS: %d\n";
char DAT_001020ed[] = "FUNC_NO_ARGS: %d\n";
char DAT_0010210f[] = "FUNC_MIXED: %d\n";
char DAT_0010213b[] = "FUNC_MIXED_ARGS: %d\n";
char DAT_00102163[] = "STRUCT_SUM: %ld\n";
char DAT_0010218f[] = "STRUCT_BYPTR: %d\n";
char DAT_001021c8[] = "Testing Parameter Passing\n";
char DAT_001022a4[] = "Testing Return Values\n";
char DAT_001022c2[] = "RET-BASIC: %d\n";
char DAT_001022de[] = "RET-POINTER: %d\n";
char DAT_001022fa[] = "RET-SMALL-STRUCT: %d\n";
char DAT_00102315[] = "RET-LARGE-STRUCT: %d\n";
char DAT_00102332[] = "RET-FUNC-PTR: %d\n";
char DAT_0010234e[] = "RET-OPAQUE: %d\n";
char DAT_0010236b[] = "RET-COMPLEX: %d\n";
char DAT_00102387[] = "RET-MULTI: %d\n";
char DAT_001023a3[] = "RET-VOID: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/4/4_gcc_Os_g
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




/* Function: func_a @ 001011c9 */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 001011d1 */

int func_b(int param_1)

{
 return param_1 * 2;
}



/* Function: callback_func @ 001011d9 */

int callback_func(int param_1)

{
 return param_1 * 2;
}



/* Function: cdecl_func @ 001011e1 */

int cdecl_func(int a,int b)

{
 return a + b;
}



/* Function: call_cdecl @ 001011e9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 return 0xf;
}



/* Function: stdcall_func @ 001011f3 */

int stdcall_func(int a,int b)

{
 return a * b;
}



/* Function: call_stdcall @ 001011fd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 return 0x32;
}



/* Function: fastcall_func @ 00101207 */

int fastcall_func(int a,int b,int c)

{
 return a + b + c;
}



/* Function: call_fastcall @ 00101211 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 return 6;
}



/* Function: call_thiscall @ 0010121b */

undefined8 call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00101225 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 00101234 */

undefined8 call_arm_aapcs(void)

{
 return 0xf;
}



/* Function: mips_func @ 0010123e */

int mips_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_mips @ 0010124a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 return 100;
}



/* Function: amd64_sysv_func @ 00101254 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00101266 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 return 0x15;
}



/* Function: ms_x64_func @ 00101270 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 0010127f */

undefined8 call_ms_x64(void)

{
 return 0xf;
}



/* Function: vectorcall_func @ 00101289 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
 return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00101295 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 return 10;
}



/* Function: mixed_conventions_test @ 0010129f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 return 0x21;
}



/* Function: varargs_func @ 001012a9 */

int varargs_func(int count,...)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 undefined8 in_RCX;
 undefined8 in_RDX;
 ulong uVar5;
 ulong uVar6;
 undefined8 in_RSI;
 int iVar7;
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
 
 local_28 = in_RDX;
 local_20 = in_RCX;
 /* Unresolved local var: int i@[???] */
 iVar4 = 0;
 local_18 = in_R8;
 iVar7 = 0;
 local_10 = in_R9;
 local_30 = in_RSI;
 piVar2 = local_38;
 uVar5 = 8;
 while( 1 ) {
 if (count <= iVar4) break;
 piVar3 = piVar2;
 uVar6 = uVar5;
 piVar1 = piVar2 + 2;
 if ((uint)uVar5 < 0x30) {
 uVar6 = (ulong)((uint)uVar5 + 8);
 piVar3 = (int *)((long)local_38 + uVar5);
 piVar1 = piVar2;
 }
 piVar2 = piVar1;
 iVar7 = iVar7 + *piVar3;
 iVar4 = iVar4 + 1;
 uVar5 = uVar6;
 }
 if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar7;
}



/* Function: func_no_args @ 00101345 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 0010134f */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00101369 */

int func_mixed_args(int x,char *s,double d,long long ll)

{
 int iVar1;
 size_t sVar2;
 
 iVar1 = 0;
 if (s != (char *)0x0) {
 sVar2 = strlen(s);
 iVar1 = (int)sVar2;
 }
 return (int)((double)(iVar1 + x) + d + (double)ll);
}



/* Function: func_struct_byval @ 001013ad */

/* WARNING: Unknown calling convention */

int func_struct_byval(LargeStruct s)

{
 long lVar1;
 long lVar2;
 
 /* Unresolved local var: int i@[???] */
 lVar2 = 0;
 lVar1 = 0;
 do {
 lVar1 = lVar1 + s.data[lVar2];
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 return (int)lVar1;
}



/* Function: func_struct_byptr @ 001013c4 */

int func_struct_byptr(SmallStruct *p)

{
 int iVar1;
 
 iVar1 = -1;
 if (p != (SmallStruct *)0x0) {
 iVar1 = p->x * p->y;
 }
 return iVar1;
}



/* Function: test_calling_conventions @ 001013d7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 int iVar1;
 long lVar2;
 long lVar3;
 long lVar4;
 LargeStruct *pLVar5;
 long *plVar6;
 long in_FS_OFFSET;
 byte bVar7;
 LargeStruct large;
 long local_90 [16];
 long local_10;
 
 bVar7 = 0;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102004);
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
 __printf_chk(1,&DAT_001020c5,iVar1);
 __printf_chk(1,&DAT_001020ed,0x2a);
 __printf_chk(1,&DAT_0010210f,0x24);
 iVar1 = func_mixed_args(10,"test",3.14,100);
 __printf_chk(1,&DAT_0010213b,iVar1);
 /* Unresolved local var: int i@[???] */
 lVar2 = 1;
 do {
 large.data[lVar2 + -1] = lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x11);
 lVar2 = 0;
 /* Unresolved local var: long long sum@[???] */
 lVar4 = 0;
 pLVar5 = &large;
 plVar6 = local_90;
 for (lVar3 = 0x20; lVar3 != 0; lVar3 = lVar3 + -1) {
 *(int *)plVar6 = (int)pLVar5->data[0];
 pLVar5 = (LargeStruct *)((long)pLVar5 + (ulong)bVar7 * -8 + 4);
 plVar6 = (long *)((long)plVar6 + (ulong)bVar7 * -8 + 4);
 }
 do {
 lVar4 = lVar4 + local_90[lVar2];
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 __printf_chk(1,&DAT_00102163,lVar4);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_0010218f,0x32);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_by_value_int @ 00101619 */

int param_by_value_int(int x)

{
 return x * 2;
}



/* Function: call_by_value_int @ 00101621 */

undefined8 call_by_value_int(void)

{
 return 0xf;
}



/* Function: param_by_value_ptr @ 0010162b */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00101642 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 return 0xb;
}



/* Function: param_array_decay @ 0010164c */

int param_array_decay(int *arr,int n)

{
 return 8;
}



/* Function: call_array_decay @ 00101656 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 return 8;
}



/* Function: param_string @ 00101660 */

int param_string(char *str)

{
 return (int)*str + (int)str[1];
}



/* Function: call_string_param @ 0010166e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 return 0xad;
}



/* Function: param_ptr_array @ 00101678 */

int param_ptr_array(char **arr,int n)

{
 long lVar1;
 int iVar2;
 
 iVar2 = 0;
 /* Unresolved local var: int i@[???] */
 for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
 iVar2 = iVar2 + *arr[lVar1];
 }
 return iVar2;
}



/* Function: call_ptr_array @ 00101698 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 long lVar1;
 int iVar2;
 long in_FS_OFFSET;
 char *strs [3];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 strs[0] = "abc";
 strs[1] = "def";
 strs[2] = "ghi";
 iVar2 = param_ptr_array(strs,3);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: param_varargs @ 001016f8 */

int param_varargs(int count,...)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 undefined8 in_RCX;
 undefined8 in_RDX;
 ulong uVar5;
 ulong uVar6;
 undefined8 in_RSI;
 int iVar7;
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
 
 local_28 = in_RDX;
 local_20 = in_RCX;
 /* Unresolved local var: int i@[???] */
 iVar4 = 0;
 local_18 = in_R8;
 iVar7 = 0;
 local_10 = in_R9;
 local_30 = in_RSI;
 piVar2 = local_38;
 uVar5 = 8;
 while( 1 ) {
 if (count <= iVar4) break;
 piVar3 = piVar2;
 uVar6 = uVar5;
 piVar1 = piVar2 + 2;
 if ((uint)uVar5 < 0x30) {
 uVar6 = (ulong)((uint)uVar5 + 8);
 piVar3 = (int *)((long)local_38 + uVar5);
 piVar1 = piVar2;
 }
 piVar2 = piVar1;
 iVar7 = iVar7 + *piVar3;
 iVar4 = iVar4 + 1;
 uVar5 = uVar6;
 }
 if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar7;
}



/* Function: call_varargs_param @ 00101794 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 001017b9 */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 001017cb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 int iVar1;
 
 iVar1 = param_func_ptr(callback_func,5);
 return iVar1;
}



/* Function: param_double_ptr @ 001017dd */

int param_double_ptr(int **pp,int new_val)

{
 int iVar1;
 
 iVar1 = -1;
 if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
 **pp = new_val;
 iVar1 = 1;
 *pp = (int *)0x0;
 }
 return iVar1;
}



/* Function: call_double_ptr @ 00101800 */

undefined8 call_double_ptr(void)

{
 return 0x15;
}



/* Function: param_complex_cast @ 0010180a */

int param_complex_cast(void *p,int type)

{
 int iVar1;
 
 if (type == 0) {
 /* Unresolved local var: int * int_ptr@[???]
 Unresolved local var: char * char_ptr@[???]
 Unresolved local var: int * back_ptr@[???] */
 return *(int *)p;
 }
 iVar1 = -1;
 if (type == 1) {
 /* Unresolved local var: TestIntPair * s@[???] */
 iVar1 = *(int *)((long)p + 4) + *(int *)p;
 }
 return iVar1;
}



/* Function: call_complex_cast @ 00101822 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 return 0x12345678;
}



/* Function: param_struct_byval @ 0010182c */

/* WARNING: Unknown calling convention */

int param_struct_byval(BigStruct s)

{
 return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 00101839 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 long lVar1;
 long lVar2;
 long in_FS_OFFSET;
 BigStruct s;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 lVar2 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 s.data[lVar2] = (int)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return s.data[0xf] + s.data[0];
}



/* Function: param_order_dep @ 00101880 */

int param_order_dep(int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: call_order_dep @ 00101888 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 return 4;
}



/* Function: test_parameter_passing @ 00101892 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 int iVar1;
 undefined8 in_RAX;
 
 puts(&DAT_001021c8);
 __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
 __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
 __printf_chk(1,"PARAM-L2-01: %d\n",8);
 __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
 iVar1 = call_ptr_array();
 __printf_chk(1,"PARAM-L2-03: %d\n",iVar1);
 iVar1 = call_varargs_param();
 __printf_chk(1,"PARAM-L2-04: %d\n",iVar1);
 iVar1 = call_func_ptr_param();
 __printf_chk(1,"PARAM-L3-01: %d\n",iVar1);
 __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
 __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
 iVar1 = call_struct_byval();
 __printf_chk(1,"PARAM-L3-04: %d\n",iVar1);
 __printf_chk(1,"PARAM-L3-05: %d\n",4,in_RAX);
 return;
}



/* Function: ret_basic_type @ 001019bc */

int ret_basic_type(int param_1)

{
 return param_1 * 2;
}



/* Function: call_ret_basic @ 001019c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 return 0x2a;
}



/* Function: ret_pointer @ 001019ce */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 001019d7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 return 0x14;
}



/* Function: ret_small_struct @ 001019e1 */

SmallPoint ret_small_struct(int x,int y)

{
 SmallPoint SVar1;
 
 SVar1.y = y;
 SVar1.x = x;
 return SVar1;
}



/* Function: call_ret_small_struct @ 001019ef */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 return 7;
}



/* Function: ret_large_struct @ 001019f9 */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 long lVar1;
 long lVar2;
 int *piVar3;
 int *piVar4;
 long in_FS_OFFSET;
 LargeData d;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 lVar2 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 *(int *)((long)&d + lVar2 * 4) = seed + (int)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 lVar2 = 0x10;
 piVar3 = d.data;
 piVar4 = __return_storage_ptr__->data;
 for (; lVar2 != 0; lVar2 = lVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 }
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return __return_storage_ptr__;
}



/* Function: call_ret_large_struct @ 00101a49 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 long lVar1;
 long in_FS_OFFSET;
 LargeData d;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 ret_large_struct(&d,100);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return d.data[0xf] + d.data[0];
}



/* Function: ret_func_ptr @ 00101a92 */

func_ptr_t ret_func_ptr(int selector)

{
 code *pcVar1;
 
 pcVar1 = func_b;
 if (selector == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101aab */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 return 10;
}



/* Function: ret_opaque_handle @ 00101ab5 */

void * ret_opaque_handle(int type)

{
 undefined8 *puVar1;
 
 puVar1 = (undefined8 *)&handle1_1;
 if (type != 0) {
 puVar1 = &handle2_0;
 }
 return puVar1;
}



/* Function: call_ret_opaque @ 00101ace */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 return handle1_1;
}



/* Function: ret_complex_expr @ 00101ad9 */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 
 iVar1 = z + 10;
 if (y < x) {
 iVar1 = z * 2;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101ae8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 return 0x28;
}



/* Function: ret_multi_branch @ 00101af2 */

int ret_multi_branch(int op)

{
 int iVar1;
 
 iVar1 = -1;
 if ((uint)op < 3) {
 iVar1 = (op + 1) * 10;
 }
 return iVar1;
}



/* Function: call_ret_multi_branch @ 00101b04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 return 0x3c;
}



/* Function: ret_void @ 00101b0e */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00101b18 */

undefined8 call_ret_void(void)

{
 return 0x15;
}



/* Function: test_return_values @ 00101b22 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 int iVar1;
 undefined8 in_RAX;
 
 puts(&DAT_001022a4);
 __printf_chk(1,&DAT_001022c2,0x2a);
 __printf_chk(1,&DAT_001022de,0x14);
 __printf_chk(1,&DAT_001022fa,7);
 iVar1 = call_ret_large_struct();
 __printf_chk(1,&DAT_00102315,iVar1);
 __printf_chk(1,&DAT_00102332,10);
 __printf_chk(1,&DAT_0010234e,handle1_1);
 __printf_chk(1,&DAT_0010236b,0x28);
 __printf_chk(1,&DAT_00102387,0x3c);
 __printf_chk(1,&DAT_001023a3,0x15,in_RAX);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 78 */
