#include <stdarg.h>
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

/* Custom type definitions for decompiled code */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef int (*func_ptr_t)(int);
typedef int (*_func_int_int)(int);
typedef void (*code)(void);
typedef void undefined;
typedef unsigned long long undefined8;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef struct {
    long long data[16];
} LargeStruct;

typedef struct {
    int data[16];
} BigStruct;

typedef struct {
    long long data[16];
} LargeData;

typedef struct {
    int a;
    int b;
} TestIntPair;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/4/4_gcc_O0_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* Stack protection guard */
long ____stack_chk_guard = 0;
long ___stack_chk_guard = 0;
extern void __stack_chk_fail(void *, int, ...);

/* Global variables for CRT */
char completed_0 = 0;
extern void *__dso_handle;
extern void __cxa_finalize(void *);
void deregister_tm_clones(void) { }

/* Data strings for printf/puts */
char DAT_00101fb0[] = "=== Calling Conventions Test ===";
char DAT_00102078[] = "CALL-L1-11: %d\n";
char DAT_001020a0[] = "CALL-L1-12: %d\n";
char DAT_001020c8[] = "CALL-L1-13: %d\n";
char DAT_001020f8[] = "CALL-L1-14: %d\n";
char DAT_00102120[] = "CALL-L1-15: %d\n";
char DAT_00102150[] = "CALL-L1-16: %d\n";
char DAT_001021a0[] = "=== Parameter Passing Test ===";
char DAT_001021c0[] = "PARAM-L1-01: %d\n";
char DAT_001021e0[] = "PARAM-L1-02: %d\n";
char DAT_00102200[] = "PARAM-L2-01: %d\n";
char DAT_00102220[] = "PARAM-L2-02: %d\n";
char DAT_00102240[] = "PARAM-L2-03: %d\n";
char DAT_00102260[] = "PARAM-L2-04: %d\n";
char DAT_00102280[] = "PARAM-L3-01: %d\n";
char DAT_001022a0[] = "PARAM-L3-02: %d\n";
char DAT_001022c0[] = "PARAM-L3-03: %d\n";
char DAT_001022e0[] = "=== Return Values Test ===";
char DAT_00102300[] = "RET-L1-01: %d\n";
char DAT_00102320[] = "RET-L1-02: %d\n";
char DAT_00102340[] = "RET-L1-03: %d\n";
char DAT_00102360[] = "RET-L1-04: %d\n";
char DAT_00102380[] = "RET-L1-05: %d\n";
char DAT_001023a0[] = "RET-L1-06: %d\n";
char DAT_001023c0[] = "RET-L1-07: %d\n";
char DAT_001023e0[] = "RET-L1-08: %d\n";
char DAT_00102400[] = "RET-L1-09: %d\n";
char *PTR_DAT_00114010 = "A";
char *PTR_DAT_00114018 = "B";
char *PTR_DAT_00114020 = "C";

/* Function: FUN_00100750 @ 00100750 */

void FUN_00100750(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001008bc @ 001008bc */

void FUN_001008bc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 00100914 */

int cdecl_func(int a,int b)

{
 int b_local;
 int a_local;
 
 return a + b;
}



/* Function: call_cdecl @ 00100934 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 int iVar1;
 
 iVar1 = cdecl_func(5,10);
 return iVar1;
}



/* Function: stdcall_func @ 00100950 */

int stdcall_func(int a,int b)

{
 int b_local;
 int a_local;
 
 return a * b;
}



/* Function: call_stdcall @ 00100970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 int iVar1;
 
 iVar1 = stdcall_func(5,10);
 return iVar1;
}



/* Function: fastcall_func @ 0010098c */

int fastcall_func(int a,int b,int c)

{
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c;
}



/* Function: call_fastcall @ 001009b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 int iVar1;
 
 iVar1 = fastcall_func(1,2,3);
 return iVar1;
}



/* Function: call_thiscall @ 001009d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 001009e0 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 int e_local;
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 00100a24 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
 int iVar1;
 
 iVar1 = arm_aapcs_func(1,2,3,4,5);
 return iVar1;
}



/* Function: mips_func @ 00100a4c */

int mips_func(int a,int b,int c,int d)

{
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d;
}



/* Function: call_mips @ 00100a84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 int iVar1;
 
 iVar1 = mips_func(10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: amd64_sysv_func @ 00100aa8 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 int f_local;
 int e_local;
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00100af8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 int iVar1;
 
 iVar1 = amd64_sysv_func(1,2,3,4,5,6);
 return iVar1;
}



/* Function: ms_x64_func @ 00100b24 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
 int e_local;
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d + e;
}



/* Function: call_ms_x64 @ 00100b68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
 int iVar1;
 
 iVar1 = ms_x64_func(1,2,3,4,5);
 return iVar1;
}



/* Function: vectorcall_func @ 00100b90 */

int vectorcall_func(int a,int b,int c,int d)

{
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d;
}



/* Function: call_vectorcall @ 00100bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 int iVar1;
 
 iVar1 = vectorcall_func(1,2,3,4);
 return iVar1;
}



/* Function: mixed_conventions_test @ 00100bec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int sum;
 
 iVar1 = cdecl_func(1,2);
 iVar2 = stdcall_func(3,4);
 iVar3 = fastcall_func(5,6,7);
 return iVar1 + iVar2 + iVar3;
}



/* Function: varargs_func @ 00100c5c */

/* WARNING: Variable defined which should be unmapped: args */
/* WARNING: Removing unreachable block (ram,0x00100d8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int varargs_func(int count,...)

{
 int iVar1;
 int *piVar2;
 int count_local;
 int sum;
 int i;
 va_list args;
 
 sum = 0;
 va_start(args, count);
 for (i = 0; i < count; i = i + 1) {
 sum = sum + va_arg(args, int);
 }
 va_end(args);
 return sum;
}



/* Function: func_no_args @ 00100d9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00100da4 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 int h_local;
 int g_local;
 int f_local;
 int e_local;
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00100e0c */

int func_mixed_args(int x,char *s,double d,long long ll)

{
 int iVar1;
 long long ll_local;
 double d_local;
 char *s_local;
 int x_local;
 int len;
 size_t sVar2;
 
 if (s == (char *)0x0) {
 iVar1 = 0;
 }
 else {
 sVar2 = strlen(s);
 iVar1 = (int)sVar2;
 }
 return (int)((double)(x + iVar1) + d + (double)ll);
}



/* Function: func_struct_byval @ 00100e74 */

int func_struct_byval(LargeStruct *s)

{
 int i;
 long long sum;
 
 sum = 0;
 for (i = 0; i < 0x10; i = i + 1) {
 sum = sum + s->data[i];
 }
 return (int)sum;
}



/* Function: func_struct_byptr @ 00100ec0 */

int func_struct_byptr(SmallStruct *p)

{
 int iVar1;
 SmallStruct *p_local;
 
 if (p == (SmallStruct *)0x0) {
 iVar1 = -1;
 }
 else {
 iVar1 = p->x * p->y;
 }
 return iVar1;
}



/* Function: test_calling_conventions @ 00100ef8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 long lVar1;
 uint uVar2;
 LargeStruct local_140;
 int i;
 int sum;
 int no_args;
 int many;
 int mixed;
 int struct_val;
 int struct_ptr;
 SmallStruct s;
 char *test_str;
 LargeStruct large;
 
 lVar1 = ____stack_chk_guard;
 puts(DAT_00101fb0);
 uVar2 = call_cdecl();
 printf("CALL-L1-01: %d\n",(ulong)uVar2);
 uVar2 = call_stdcall();
 printf("CALL-L1-02: %d\n",(ulong)uVar2);
 uVar2 = call_fastcall();
 printf("CALL-L1-03: %d\n",(ulong)uVar2);
 uVar2 = call_thiscall();
 printf("CALL-L1-04: %d\n",(ulong)uVar2);
 uVar2 = call_arm_aapcs();
 printf("CALL-L1-05: %d\n",(ulong)uVar2);
 uVar2 = call_mips();
 printf("CALL-L1-06: %d\n",(ulong)uVar2);
 uVar2 = call_amd64_sysv();
 printf("CALL-L1-07: %d\n",(ulong)uVar2);
 uVar2 = call_ms_x64();
 printf("CALL-L1-08: %d\n",(ulong)uVar2);
 uVar2 = call_vectorcall();
 printf("CALL-L1-09: %d\n",(ulong)uVar2);
 uVar2 = mixed_conventions_test();
 printf("CALL-L1-10: %d\n",(ulong)uVar2);
 sum = varargs_func(5,1,2,3,4,5);
 printf(DAT_00102078,(ulong)(uint)sum);
 no_args = func_no_args();
 printf(DAT_001020a0,(ulong)(uint)no_args);
 many = func_many_args(1,2,3,4,5,6,7,8);
 printf(DAT_001020c8,(ulong)(uint)many);
 mixed = func_mixed_args(10,"test",3.14,100);
 printf(DAT_001020f8,(ulong)(uint)mixed);
 for (i = 0; i < 0x10; i = i + 1) {
 large.data[i] = (long)(i + 1);
 }
 local_140.data[1] = large.data[1];
 local_140.data[0] = large.data[0];
 local_140.data[3] = large.data[3];
 local_140.data[2] = large.data[2];
 local_140.data[5] = large.data[5];
 local_140.data[4] = large.data[4];
 local_140.data[7] = large.data[7];
 local_140.data[6] = large.data[6];
 local_140.data[9] = large.data[9];
 local_140.data[8] = large.data[8];
 local_140.data[0xb] = large.data[0xb];
 local_140.data[10] = large.data[10];
 local_140.data[0xd] = large.data[0xd];
 local_140.data[0xc] = large.data[0xc];
 local_140.data[0xf] = large.data[0xf];
 local_140.data[0xe] = large.data[0xe];
 struct_val = func_struct_byval(&local_140);
 printf(DAT_00102120,(ulong)(uint)struct_val);
 s.x = 5;
 s.y = 10;
 struct_ptr = func_struct_byptr(&s);
 printf(DAT_00102150,(ulong)(uint)struct_ptr);
 if (lVar1 - ____stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard,0,lVar1 - ____stack_chk_guard);
 }
 return;
}



/* Function: param_by_value_int @ 00101178 */

int param_by_value_int(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: call_by_value_int @ 00101198 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 int iVar1;
 int val;
 int result;
 
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 001011c8 */

int param_by_value_ptr(int *p)

{
 int *p_local;
 
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00101200 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 int val;
 int result;
 int *ptr;
 long local_8;
 
 local_8 = ____stack_chk_guard;
 val = 5;
 ptr = &val;
 result = param_by_value_ptr(ptr);
 if (local_8 - ____stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard,val + result,0,local_8 - ____stack_chk_guard);
 }
 return val + result;
}



/* Function: param_array_decay @ 00101274 */

int param_array_decay(int *arr,int n)

{
 int n_local;
 int *arr_local;
 
 return 8;
}



/* Function: call_array_decay @ 0010128c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 long lVar1;
 int iVar2;
 int array [10];
 
 lVar1 = ____stack_chk_guard;
 array[0] = 0;
 array[1] = 0;
 array[2] = 0;
 array[3] = 0;
 array[4] = 0;
 array[5] = 0;
 array[6] = 0;
 array[7] = 0;
 array[8] = 0;
 array[9] = 0;
 iVar2 = param_array_decay(array,10);
 if (lVar1 - ____stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard,iVar2,0,lVar1 - ____stack_chk_guard);
 }
 return iVar2;
}



/* Function: param_string @ 001012f0 */

int param_string(char *str)

{
 char *str_local;
 
 return (uint)(unsigned char)*str + (uint)(unsigned char)str[1];
}



/* Function: call_string_param @ 0010131c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 int iVar1;
 
 iVar1 = param_string("Hello");
 return iVar1;
}



/* Function: param_ptr_array @ 00101338 */

int param_ptr_array(char **arr,int n)

{
 int n_local;
 char **arr_local;
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = sum + (uint)(unsigned char)*arr[i];
 }
 return sum;
}



/* Function: call_ptr_array @ 001013a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 long lVar1;
 int iVar2;
 char *strs [3];
 
 lVar1 = ____stack_chk_guard;
 strs[0] = PTR_DAT_00114010;
 strs[1] = PTR_DAT_00114018;
 strs[2] = PTR_DAT_00114020;
 iVar2 = param_ptr_array(strs,3);
 if (lVar1 - ____stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard,iVar2,0,lVar1 - ____stack_chk_guard);
 }
 return iVar2;
}



/* Function: param_varargs @ 00101418 */

/* WARNING: Variable defined which should be unmapped: args */
/* WARNING: Removing unreachable block (ram,0x00101548) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_varargs(int count,...)

{
 int iVar1;
 int *piVar2;
 int count_local;
 int sum;
 int i;
 va_list args;
 
 sum = 0;
 va_start(args, count);
 for (i = 0; i < count; i = i + 1) {
 sum = sum + va_arg(args, int);
 }
 va_end(args);
 return sum;
}



/* Function: call_varargs_param @ 00101558 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 00101580 */

int param_func_ptr(_func_int_int callback,int x)

{
 int iVar1;
 int x_local;
 _func_int_int callback_local;
 
 iVar1 = callback(x);
 return iVar1 + 10;
}



/* Function: callback_func @ 001015a8 */

int callback_func(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: call_func_ptr_param @ 001015c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 int iVar1;
 
 iVar1 = param_func_ptr(&callback_func,5);
 return iVar1;
}



/* Function: param_double_ptr @ 001015e0 */

int param_double_ptr(int **pp,int new_val)

{
 int iVar1;
 int new_val_local;
 int **pp_local;
 
 if ((pp == (int **)0x0) || (*pp == (int *)0x0)) {
 iVar1 = -1;
 }
 else {
 **pp = new_val;
 *pp = (int *)0x0;
 iVar1 = 1;
 }
 return iVar1;
}



/* Function: call_double_ptr @ 00101634 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 int iVar1;
 int val;
 int result;
 int *ptr;
 long local_8;
 
 local_8 = ____stack_chk_guard;
 val = 10;
 ptr = &val;
 result = param_double_ptr(&ptr,0x14);
 iVar1 = (uint)(ptr == (int *)0x0) + val;
 if (local_8 - ____stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard,iVar1,0,local_8 - ____stack_chk_guard);
 }
 return iVar1;
}



/* Function: param_complex_cast @ 001016bc */

int param_complex_cast(void *p,int type)

{
 int iVar1;
 int type_local;
 void *p_local;
 TestIntPair *s;
 int *int_ptr;
 char *char_ptr;
 int *back_ptr;
 
 if (type == 0) {
 iVar1 = *(int *)p;
 }
 else if (type == 1) {
 iVar1 = *(int *)p + *(int *)((long)p + 4);
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}



/* Function: call_complex_cast @ 00101730 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 long lVar1;
 int iVar2;
 int val;
 TestIntPair pair;
 
 lVar1 = ____stack_chk_guard;
 val = 0x12345678;
 pair.a = 100;
 pair.b = 200;
 param_complex_cast(&pair,1);
 iVar2 = param_complex_cast(&val,0);
 if (lVar1 - ____stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard,iVar2,0,lVar1 - ____stack_chk_guard);
 }
 return iVar2;
}



/* Function: param_struct_byval @ 001017b0 */

int param_struct_byval(BigStruct *s)

{
 return s->data[0] + s->data[0xf];
}



/* Function: call_struct_byval @ 001017cc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 long lVar1;
 int iVar2;
 BigStruct local_90;
 int i;
 BigStruct s;
 
 lVar1 = ____stack_chk_guard;
 for (i = 0; i < 0x10; i = i + 1) {
 s.data[i] = i;
 }
 local_90.data[2] = s.data[2];
 local_90.data[3] = s.data[3];
 local_90.data[0] = s.data[0];
 local_90.data[1] = s.data[1];
 local_90.data[6] = s.data[6];
 local_90.data[7] = s.data[7];
 local_90.data[4] = s.data[4];
 local_90.data[5] = s.data[5];
 local_90.data[10] = s.data[10];
 local_90.data[0xb] = s.data[0xb];
 local_90.data[8] = s.data[8];
 local_90.data[9] = s.data[9];
 local_90.data[0xe] = s.data[0xe];
 local_90.data[0xf] = s.data[0xf];
 local_90.data[0xc] = s.data[0xc];
 local_90.data[0xd] = s.data[0xd];
 iVar2 = param_struct_byval(&local_90);
 if (lVar1 - ____stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard,iVar2,0,lVar1 - ____stack_chk_guard);
 }
 return iVar2;
}



/* Function: param_order_dep @ 0010186c */

int param_order_dep(int a,int b)

{
 int b_local;
 int a_local;
 
 return a + b;
}



/* Function: call_order_dep @ 0010188c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 int iVar1;
 int i;
 
 iVar1 = param_order_dep(2,2);
 return iVar1;
}



/* Function: test_parameter_passing @ 001018c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 uint uVar1;
 
 puts(DAT_001021a0);
 uVar1 = call_by_value_int();
 printf("PARAM-L1-01: %d\n",(ulong)uVar1);
 uVar1 = call_by_value_ptr();
 printf("PARAM-L1-02: %d\n",(ulong)uVar1);
 uVar1 = call_array_decay();
 printf("PARAM-L2-01: %d\n",(ulong)uVar1);
 uVar1 = call_string_param();
 printf("PARAM-L2-02: %d\n",(ulong)uVar1);
 uVar1 = call_ptr_array();
 printf("PARAM-L2-03: %d\n",(ulong)uVar1);
 uVar1 = call_varargs_param();
 printf("PARAM-L2-04: %d\n",(ulong)uVar1);
 uVar1 = call_func_ptr_param();
 printf("PARAM-L3-01: %d\n",(ulong)uVar1);
 uVar1 = call_double_ptr();
 printf("PARAM-L3-02: %d\n",(ulong)uVar1);
 uVar1 = call_complex_cast();
 printf("PARAM-L3-03: %d\n",(ulong)uVar1);
 uVar1 = call_struct_byval();
 printf("PARAM-L3-04: %d\n",(ulong)uVar1);
 uVar1 = call_order_dep();
 printf("PARAM-L3-05: %d\n",(ulong)uVar1);
 return;
}



/* Function: ret_basic_type @ 001019c0 */

int ret_basic_type(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: call_ret_basic @ 001019d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 int iVar1;
 int val;
 int result;
 
 iVar1 = ret_basic_type(0x15);
 return iVar1;
}



/* Function: ret_pointer @ 00101a00 */

int * ret_pointer(int *p)

{
 int *p_local;
 
 return p + 1;
}



/* Function: call_ret_pointer @ 00101a18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 long lVar1;
 int *piVar2;
 int *ptr;
 int arr [3];
 
 lVar1 = ____stack_chk_guard;
 arr[0] = 10;
 arr[1] = 0x14;
 arr[2] = 0x1e;
 piVar2 = ret_pointer(arr);
 if (lVar1 - ____stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard,*piVar2,0,lVar1 - ____stack_chk_guard);
 }
 return *piVar2;
}



/* Function: ret_small_struct @ 00101a94 */

SmallPoint ret_small_struct(int x,int y)

{
 SmallPoint SVar1;
 int y_local;
 int x_local;
 SmallPoint p;
 
 SVar1.y = y;
 SVar1.x = x;
 return SVar1;
}



/* Function: call_ret_small_struct @ 00101abc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 SmallPoint SVar1;
 SmallPoint p;
 
 SVar1 = ret_small_struct(3,4);
 p.x = SVar1.x;
 p.y = SVar1.y;
 return p.x + p.y;
}



/* Function: ret_large_struct @ 00101ae8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 long lVar1;
 int seed_local;
 int i;
 LargeData d;
 
 lVar1 = ____stack_chk_guard;
 for (i = 0; i < 0x10; i = i + 1) {
 d.data[i] = seed + i;
 }
 __return_storage_ptr__->data[1] = d.data[1];
 __return_storage_ptr__->data[0] = d.data[0];
 __return_storage_ptr__->data[3] = d.data[3];
 __return_storage_ptr__->data[2] = d.data[2];
 __return_storage_ptr__->data[5] = d.data[5];
 __return_storage_ptr__->data[4] = d.data[4];
 __return_storage_ptr__->data[7] = d.data[7];
 __return_storage_ptr__->data[6] = d.data[6];
 if (lVar1 - ____stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard,0,lVar1 - ____stack_chk_guard);
 }
 return;
}



/* Function: call_ret_large_struct @ 00101b88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 long lVar1;
 LargeData d;
 
 lVar1 = ____stack_chk_guard;
 ret_large_struct(&d,100);
 if (lVar1 - ____stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard,d.data[0] + d.data[0xf],0,lVar1 - ____stack_chk_guard);
 }
 return d.data[0] + d.data[0xf];
}



/* Function: func_a @ 00101bf0 */

int func_a(int x)

{
 int x_local;
 
 return x + 10;
}



/* Function: func_b @ 00101c08 */

int func_b(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: ret_func_ptr @ 00101c20 */

func_ptr_t ret_func_ptr(int selector)

{
 func_ptr_t pcVar1;
 int selector_local;
 
 if (selector == 0) {
 pcVar1 = func_a;
 }
 else {
 pcVar1 = func_b;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101c50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 int iVar1;
 func_ptr_t p_Var2;
 func_ptr_t f;
 
 p_Var2 = ret_func_ptr(1);
 iVar1 = (*p_Var2)(5);
 return iVar1;
}



/* Static handles for ret_opaque_handle */
static int handle1 = 42;
static int handle2 = 84;

/* Function: ret_opaque_handle @ 00101c78 */

void * ret_opaque_handle(int type)

{
 int *piVar1;
 int type_local;
 
 if (type == 0) {
 piVar1 = &handle1;
 }
 else {
 piVar1 = &handle2;
 }
 return piVar1;
}



/* Function: call_ret_opaque @ 00101ca8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 int *piVar1;
 void *h;
 
 piVar1 = ret_opaque_handle(0);
 return *piVar1;
}



/* Function: ret_complex_expr @ 00101ccc */

int ret_complex_expr(int x,int y,int z)

{
 int iVar1;
 int z_local;
 int y_local;
 int x_local;
 
 if (y < x) {
 iVar1 = z << 1;
 }
 else {
 iVar1 = z + 10;
 }
 return iVar1;
}



/* Function: call_ret_complex_expr @ 00101d08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 int iVar1;
 int iVar2;
 int r1;
 int r2;
 
 iVar1 = ret_complex_expr(5,3,10);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar1 + iVar2;
}



/* Function: ret_multi_branch @ 00101d4c */

int ret_multi_branch(int op)

{
 int op_local;
 
 if (op == 2) {
 return 0x1e;
 }
 if (op < 3) {
 if (op == 0) {
 return 10;
 }
 if (op == 1) {
 return 0x14;
 }
 }
 return -1;
}



/* Function: call_ret_multi_branch @ 00101dac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int sum;
 
 iVar1 = ret_multi_branch(0);
 iVar2 = ret_multi_branch(1);
 iVar3 = ret_multi_branch(2);
 return iVar1 + iVar2 + iVar3;
}



/* Function: ret_void @ 00101e0c */

void ret_void(int x,int *out)

{
 int *out_local;
 int x_local;
 
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00101e3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 int result;
 long local_8;
 
 local_8 = ____stack_chk_guard;
 ret_void(7,&result);
 if (local_8 - ____stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&___stack_chk_guard,result,0,local_8 - ____stack_chk_guard);
 }
 return result;
}



/* Function: test_return_values @ 00101e9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 uint uVar1;
 
 puts(DAT_001022e0);
 uVar1 = call_ret_basic();
 printf(DAT_00102300,(ulong)uVar1);
 uVar1 = call_ret_pointer();
 printf(DAT_00102320,(ulong)uVar1);
 uVar1 = call_ret_small_struct();
 printf(DAT_00102340,(ulong)uVar1);
 uVar1 = call_ret_large_struct();
 printf(DAT_00102360,(ulong)uVar1);
 uVar1 = call_ret_func_ptr();
 printf(DAT_00102380,(ulong)uVar1);
 uVar1 = call_ret_opaque();
 printf(DAT_001023a0,(ulong)uVar1);
 uVar1 = call_ret_complex_expr();
 printf(DAT_001023c0,(ulong)uVar1);
 uVar1 = call_ret_multi_branch();
 printf(DAT_001023e0,(ulong)uVar1);
 uVar1 = call_ret_void();
 printf(DAT_00102400,(ulong)uVar1);
 return;
}



/* Function: main @ 00101f70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 80 */
