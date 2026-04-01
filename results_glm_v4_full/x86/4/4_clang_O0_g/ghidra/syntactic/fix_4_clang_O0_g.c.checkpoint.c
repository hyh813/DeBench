/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/4/4_clang_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdint.h>

/* Type definitions for decompiler artifacts */
typedef unsigned char byte;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef long long longlong;
typedef unsigned int uint;
#define ROUND(x) ((int)((x) + 0.5))

/* Forward declarations for undefined types */
typedef struct LargeStruct LargeStruct;
typedef struct SmallStruct SmallStruct;
typedef struct TestIntPair TestIntPair;
typedef struct BigStruct BigStruct;
typedef struct SmallPoint SmallPoint;
typedef struct LargeData LargeData;
typedef int (*_func_int_int)(int);
typedef int (*func_ptr_t)(int);

/* Placeholder structure definitions */
struct LargeStruct {
    union {
        struct {
            int _0_4_;
            int _4_4_;
        };
        void *_0_4_ptr_;
        longlong _0_8_;
    } data[16];
};

struct SmallStruct {
    int x;
    int y;
};

struct TestIntPair {
    int a;
    int b;
};

struct BigStruct {
    int data[16];
};

struct SmallPoint {
    int x;
    int y;
};

struct LargeData {
    int data[16];
};

struct StackStruct {
    longlong _0_8_;
    longlong _8_8_;
    longlong _16_8_;
    longlong _24_8_;
    longlong _32_8_;
    longlong _40_8_;
    longlong _48_8_;
    longlong _56_8_;
    longlong _64_8_;
    longlong _72_8_;
    longlong _80_8_;
    longlong _88_8_;
};

/* Placeholder for undefined data references */



/* Define the format strings */
static char DAT_00013008[] = "CALL-L1-00: %d\n";
static char DAT_000130ca[] = "CALL-L2-01: %d\n";
static char DAT_000130f2[] = "CALL-L2-02: %d\n";
static char DAT_00013140[] = "CALL-L2-03: %d\n";
static char DAT_00013114[] = "CALL-L2-05: %d\n";
static char DAT_00013168[] = "CALL-L2-06: %d\n";
static char DAT_00013194[] = "CALL-L2-07: %d\n";
static char DAT_000131d3[] = "PARAM-L1-01: %d\n";
static char DAT_000132b0[] = "RET-L1-01: %d\n";
static char DAT_000132cf[] = "RET-L1-02: %d\n";
static char DAT_000132eb[] = "RET-L1-03: %d\n";
static char DAT_00013307[] = "RET-L1-04: %d\n";
static char DAT_00013322[] = "RET-L1-05: %d\n";
static char DAT_0001333f[] = "RET-L1-06: %d\n";
static char DAT_0001335b[] = "RET-L1-07: %d\n";
static char DAT_00013378[] = "RET-L1-08: %d\n";
static char DAT_00013394[] = "RET-L1-09: %d\n";
static char DAT_000133b0[] = "RET-L1-10: %d\n";

/* Forward declarations for functions used before definition */
int callback_func(int x);


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 /* Null pointer dereference - stub */
 ((void (*)(void))0)();
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

/* WARNING: Unknown calling convention */

int cdecl_func(int a,int b)

{
 return a + b;
}



/* Function: call_cdecl @ 00011230 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 int iVar1;
 
 iVar1 = cdecl_func(5,10);
 return iVar1;
}



/* Function: stdcall_func @ 00011260 */

/* WARNING: Unknown calling convention */

int stdcall_func(int a,int b)

{
 return a * b;
}



/* Function: call_stdcall @ 00011280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 int iVar1;
 
 iVar1 = stdcall_func(5,10);
 return iVar1;
}



/* Function: fastcall_func @ 000112b0 */

int fastcall_func(int a,int b,int c)

{
 int in_stack_00000004;
 int b_local;
 int a_local;
 
 return c + b + in_stack_00000004;
}



/* Function: call_fastcall @ 000112d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 int in_EAX;
 int iVar1;
 
 iVar1 = fastcall_func(in_EAX,2,1);
 return iVar1;
}



/* Function: call_thiscall @ 00011300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00011310 */

/* WARNING: Unknown calling convention */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 00011340 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
 int iVar1;
 
 iVar1 = arm_aapcs_func(1,2,3,4,5);
 return iVar1;
}



/* Function: mips_func @ 00011390 */

/* WARNING: Unknown calling convention */

int mips_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_mips @ 000113b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 int iVar1;
 
 iVar1 = mips_func(10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: amd64_sysv_func @ 000113f0 */

/* WARNING: Unknown calling convention */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
 return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00011420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 int iVar1;
 
 iVar1 = amd64_sysv_func(1,2,3,4,5,6);
 return iVar1;
}



/* Function: ms_x64_func @ 00011470 */

/* WARNING: Unknown calling convention */

int ms_x64_func(int a,int b,int c,int d,int e)

{
 return a + b + c + d + e;
}



/* Function: call_ms_x64 @ 000114a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
 int iVar1;
 
 iVar1 = ms_x64_func(1,2,3,4,5);
 return iVar1;
}



/* Function: vectorcall_func @ 000114f0 */

/* WARNING: Unknown calling convention */

int vectorcall_func(int a,int b,int c,int d)

{
 return a + b + c + d;
}



/* Function: call_vectorcall @ 00011510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 int iVar1;
 
 iVar1 = vectorcall_func(1,2,3,4);
 return iVar1;
}



/* Function: mixed_conventions_test @ 00011550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int sum;
 
 iVar1 = cdecl_func(1,2);
 iVar2 = stdcall_func(3,4);
 iVar3 = fastcall_func(iVar2 + iVar1,6,5);
 return iVar3 + iVar2 + iVar1;
}



/* Function: varargs_func @ 000115e0 */

/* WARNING: Unknown calling convention */

int varargs_func(int count,...)

{
 int i;
 int sum;
 va_list args;
 
 sum = 0;
 va_start(args, count);
 for (i = 0; i < count; i = i + 1) {
 sum = va_arg(args, int) + sum;
 }
 va_end(args);
 return sum;
}



/* Function: func_no_args @ 00011640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00011650 */

/* WARNING: Unknown calling convention */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00011690 */

/* WARNING: Unknown calling convention */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
 undefined4 local_20;
 int len;
 
 if (s == (char *)0x0) {
 local_20 = 0;
 }
 else {
 local_20 = strlen(s);
 }
 return (int)ROUND((double)ll + d + (double)(int)(x + local_20));
}



/* Function: func_struct_byval @ 00011730 */

/* WARNING: Unknown calling convention */

int func_struct_byval(LargeStruct s)

{
 int i;
 int sum;
 
 sum = 0;
 for (i = 0; i < 0x10; i = i + 1) {
 sum = sum + (int)s.data[i]._0_8_;
 }
 return sum;
}



/* Function: func_struct_byptr @ 00011790 */

/* WARNING: Unknown calling convention */

int func_struct_byptr(SmallStruct *p)

{
 int local_8;
 
 if (p == (SmallStruct *)0x0) {
 local_8 = -1;
 }
 else {
 local_8 = p->x * p->y;
 }
 return local_8;
}



/* Function: test_calling_conventions @ 000117d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 LargeStruct s_00;
 int iVar1;
 int iVar2;
 LargeStruct *pLVar3;
 undefined4 *puVar4;
 byte bVar5;
 undefined *puVar6;
 undefined4 uVar7;
 undefined4 uVar8;
 undefined4 uVar9;
 undefined4 uVar10;
 undefined4 uVar11;
 undefined4 uVar12;
 struct StackStruct in_stack_fffffee4;
 undefined4 stack0xfffffec4 [32];
 int struct_ptr;
 SmallStruct s;
 int struct_val;
 int i;
 LargeStruct large;
 int mixed;
 char *test_str;
 int many;
 int no_args;
 int sum;
 
 bVar5 = 0;
 printf(&DAT_00013008);
 call_cdecl();
 printf("CALL-L1-01: %d\n");
 call_stdcall();
 printf("CALL-L1-02: %d\n");
 call_fastcall();
 printf("CALL-L1-03: %d\n");
 call_thiscall();
 printf("CALL-L1-04: %d\n");
 call_arm_aapcs();
 printf("CALL-L1-05: %d\n");
 call_mips();
 printf("CALL-L1-06: %d\n");
 call_amd64_sysv();
 printf("CALL-L1-07: %d\n");
 call_ms_x64();
 printf("CALL-L1-08: %d\n");
 call_vectorcall();
 printf("CALL-L1-09: %d\n");
 mixed_conventions_test();
 printf("CALL-L1-10: %d\n");
 varargs_func(5);
 printf(&DAT_000130ca);
 func_no_args();
 printf(&DAT_000130f2);
 uVar11 = 7;
 uVar12 = 8;
 func_many_args(1,2,3,4,5,6,7,8);
 printf(&DAT_00013114);
 uVar8 = 0x40091eb8;
 uVar7 = 0x51eb851f;
 uVar10 = 0;
 uVar9 = 100;
 iVar1 = func_mixed_args(10,"test",3.14,100);
 puVar6 = &DAT_00013140;
 printf(&DAT_00013140);
 for (i = 0; i < 0x10; i = i + 1) {
 *(int *)((char *)&large.data[0]._0_8_ + i * 4) = i + 1;
 *(int *)((int)&large.data[0]._0_8_ + i * 8 + 4) = i + 1 >> 0x1f;
 }
 pLVar3 = &large;
 puVar4 = (undefined4 *)&stack0xfffffec4;
 for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
 *puVar4 = (int)pLVar3->data[0]._0_8_;
 pLVar3 = (LargeStruct *)((char *)pLVar3 + (uint)bVar5 * -8 + 4);
 puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
 }
 s_00.data[0]._4_4_ = iVar1;
 s_00.data[0]._0_4_ = puVar6;
 s_00.data[1]._0_4_ = uVar7;
 s_00.data[1]._4_4_ = uVar8;
 s_00.data[2]._0_4_ = uVar9;
 s_00.data[2]._4_4_ = uVar10;
 s_00.data[3]._0_4_ = uVar11;
 s_00.data[3]._4_4_ = uVar12;
 s_00.data[4]._0_8_ = in_stack_fffffee4._0_8_;
 s_00.data[5]._0_8_ = in_stack_fffffee4._8_8_;
 s_00.data[6]._0_8_ = in_stack_fffffee4._16_8_;
 s_00.data[7]._0_8_ = in_stack_fffffee4._24_8_;
 s_00.data[8]._0_8_ = in_stack_fffffee4._32_8_;
 s_00.data[9]._0_8_ = in_stack_fffffee4._40_8_;
 s_00.data[10]._0_8_ = in_stack_fffffee4._48_8_;
 s_00.data[0xb]._0_8_ = in_stack_fffffee4._56_8_;
 s_00.data[0xc]._0_8_ = in_stack_fffffee4._64_8_;
 s_00.data[0xd]._0_8_ = in_stack_fffffee4._72_8_;
 s_00.data[0xe]._0_8_ = in_stack_fffffee4._80_8_;
 s_00.data[0xf]._0_8_ = in_stack_fffffee4._88_8_;
 func_struct_byval(s_00);
 printf(&DAT_00013168);
 s.x = 5;
 s.y = 10;
 func_struct_byptr(&s);
 printf(&DAT_00013194);
 return;
}



/* Function: param_by_value_int @ 00011b90 */

/* WARNING: Unknown calling convention */

int param_by_value_int(int x)

{
 return x << 1;
}



/* Function: call_by_value_int @ 00011bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 int iVar1;
 int result;
 int val;
 
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 00011bf0 */

/* WARNING: Unknown calling convention */

int param_by_value_ptr(int *p)

{
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00011c20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
 int iVar1;
 int result;
 int *ptr;
 int val;
 
 val = 5;
 iVar1 = param_by_value_ptr(&val);
 return val + iVar1;
}



/* Function: param_array_decay @ 00011c60 */

/* WARNING: Unknown calling convention */

int param_array_decay(int *arr,int n)

{
 return 4;
}



/* Function: call_array_decay @ 00011c70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 int iVar1;
 int array [10];
 
 memset(array,0,0x28);
 iVar1 = param_array_decay(array,10);
 return iVar1;
}



/* Function: param_string @ 00011cc0 */

/* WARNING: Unknown calling convention */

int param_string(char *str)

{
 return (int)*str + (int)str[1];
}



/* Function: call_string_param @ 00011ce0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 int iVar1;
 
 iVar1 = param_string("Hello");
 return iVar1;
}



/* Function: param_ptr_array @ 00011d10 */

/* WARNING: Unknown calling convention */

int param_ptr_array(char **arr,int n)

{
 int i;
 int sum;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = *arr[i] + sum;
 }
 return sum;
}



/* Function: call_ptr_array @ 00011d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
 int iVar1;
 char *strs [3];
 
 strs[0] = "abc";
 strs[1] = "def";
 strs[2] = "ghi";
 iVar1 = param_ptr_array(strs,3);
 return iVar1;
}



/* Function: param_varargs @ 00011db0 */

/* WARNING: Unknown calling convention */

int param_varargs(int count,...)

{
 int i;
 int sum;
 va_list args;
 
 sum = 0;
 va_start(args, count);
 for (i = 0; i < count; i = i + 1) {
 sum = va_arg(args, int) + sum;
 }
 va_end(args);
 return sum;
}



/* Function: call_varargs_param @ 00011e10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: param_func_ptr @ 00011e60 */

/* WARNING: Unknown calling convention */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00011e90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 int iVar1;
 
 iVar1 = param_func_ptr(callback_func,5);
 return iVar1;
}



/* Function: callback_func @ 00011ec0 */

/* WARNING: Unknown calling convention */

int callback_func(int x)

{
 return x << 1;
}



/* Function: param_double_ptr @ 00011ed0 */

/* WARNING: Unknown calling convention */

int param_double_ptr(int **pp,int new_val)

{
 undefined4 local_8;
 
 if ((pp == (int **)0x0) || (*pp == (int *)0x0)) {
 local_8 = -1;
 }
 else {
 **pp = new_val;
 *pp = (int *)0x0;
 local_8 = 1;
 }
 return local_8;
}



/* Function: call_double_ptr @ 00011f20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
 int result;
 int *ptr;
 int val;
 
 val = 10;
 ptr = &val;
 param_double_ptr(&ptr,0x14);
 return val + (uint)(ptr == (int *)0x0);
}



/* Function: param_complex_cast @ 00011f80 */

/* WARNING: Unknown calling convention */

int param_complex_cast(void *p,int type)

{
 TestIntPair *s;
 int *back_ptr;
 char *char_ptr;
 int *int_ptr;
 undefined4 local_8;
 
 if (type == 0) {
 local_8 = *(int *)p;
 }
 else if (type == 1) {
 local_8 = *(int *)p + *(int *)((int)p + 4);
 }
 else {
 local_8 = -1;
 }
 return local_8;
}



/* Function: call_complex_cast @ 00011ff0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
 int iVar1;
 TestIntPair pair;
 int val;
 
 val = 0x12345678;
 pair.a = 100;
 pair.b = 200;
 param_complex_cast(&pair,1);
 iVar1 = param_complex_cast(&val,0);
 return iVar1;
}



/* Function: param_struct_byval @ 00012050 */

/* WARNING: Unknown calling convention */

int param_struct_byval(BigStruct s)

{
 return s.data[0] + s.data[0xf];
}



/* Function: call_struct_byval @ 00012060 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 int iVar1;
 int *piVar2;
 int *piVar3;
 BigStruct s;
 int i;
 
 for (i = 0; i < 0x10; i = i + 1) {
 s.data[i] = i;
 }
 iVar1 = param_struct_byval(s);
 return iVar1;
}



/* Function: param_order_dep @ 000120d0 */

/* WARNING: Unknown calling convention */

int param_order_dep(int a,int b)

{
 return a + b;
}



/* Function: call_order_dep @ 000120f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 int iVar1;
 int i;
 
 iVar1 = param_order_dep(1,2);
 return iVar1;
}



/* Function: test_parameter_passing @ 00012130 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 int iVar1;
 
 printf(&DAT_000131d3);
 iVar1 = call_by_value_int();
 printf("PARAM-L1-01: %d\n",iVar1);
 iVar1 = call_by_value_ptr();
 printf("PARAM-L1-02: %d\n",iVar1);
 iVar1 = call_array_decay();
 printf("PARAM-L2-01: %d\n",iVar1);
 iVar1 = call_string_param();
 printf("PARAM-L2-02: %d\n",iVar1);
 iVar1 = call_ptr_array();
 printf("PARAM-L2-03: %d\n",iVar1);
 iVar1 = call_varargs_param();
 printf("PARAM-L2-04: %d\n",iVar1);
 iVar1 = call_func_ptr_param();
 printf("PARAM-L3-01: %d\n",iVar1);
 iVar1 = call_double_ptr();
 printf("PARAM-L3-02: %d\n",iVar1);
 iVar1 = call_complex_cast();
 printf("PARAM-L3-03: %d\n",iVar1);
 iVar1 = call_struct_byval();
 printf("PARAM-L3-04: %d\n",iVar1);
 iVar1 = call_order_dep();
 printf("PARAM-L3-05: %d\n",iVar1);
 return;
}



/* Function: ret_basic_type @ 000122a0 */

/* WARNING: Unknown calling convention */

int ret_basic_type(int x)

{
 return x << 1;
}



/* Function: call_ret_basic @ 000122b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 int iVar1;
 int result;
 int val;
 
 iVar1 = ret_basic_type(0x15);
 return iVar1;
}



/* Function: ret_pointer @ 000122f0 */

/* WARNING: Unknown calling convention */

int * ret_pointer(int *p)

{
 return p + 1;
}



/* Function: call_ret_pointer @ 00012300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
 int *piVar1;
 int *ptr;
 int arr [3];
 
 arr[0] = 10;
 arr[1] = 0x14;
 arr[2] = 0x1e;
 piVar1 = ret_pointer(arr);
 return *piVar1;
}



/* Function: ret_small_struct @ 00012350 */

/* WARNING: Unknown calling convention */

SmallPoint * ret_small_struct(int x,int y)

{
 SmallPoint *p;
 
 p->x = x;
 p->y = y;
 return p;
}



/* Function: call_ret_small_struct @ 00012370 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
 SmallPoint p;
 
 ret_small_struct(3,4);
 return p.x + p.y;
}



/* Function: ret_large_struct @ 000123b0 */

/* WARNING: Unknown calling convention */

LargeData * ret_large_struct(int seed)

{
 LargeData *d;
 int i;
 
 for (i = 0; i < 0x10; i = i + 1) {
 d->data[i] = seed + i;
 }
 return d;
}



/* Function: call_ret_large_struct @ 00012400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 LargeData d;
 
 ret_large_struct(100);
 return d.data[0] + d.data[0xf];
}



/* Function: func_a @ 00012440 */

/* WARNING: Unknown calling convention */

int func_a(int x)

{
 return x + 10;
}



/* Function: func_b @ 00012450 */

/* WARNING: Unknown calling convention */

int func_b(int x)

{
 return x << 1;
}



/* Function: ret_func_ptr @ 00012460 */

/* WARNING: Unknown calling convention */

func_ptr_t ret_func_ptr(int selector)

{
 func_ptr_t p_Var1;
 
 p_Var1 = func_a;
 if (selector != 0) {
 p_Var1 = func_b;
 }
 return p_Var1;
}



/* Function: call_ret_func_ptr @ 00012490 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
 func_ptr_t p_Var1;
 int iVar2;
 func_ptr_t f;
 
 p_Var1 = ret_func_ptr(1);
 iVar2 = (*p_Var1)(5);
 return iVar2;
}



/* Function: ret_opaque_handle @ 000124d0 */

/* WARNING: Unknown calling convention */

void * ret_opaque_handle(int type)

{
 static double handle1 = 1.0;
 static double handle2 = 2.0;
 double *pdVar1;
 
 pdVar1 = &handle2;
 if (type == 0) {
 pdVar1 = &handle1;
 }
 return pdVar1;
}



/* Function: call_ret_opaque @ 00012500 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 int *piVar1;
 void *h;
 
 piVar1 = ret_opaque_handle(0);
 return *piVar1;
}



/* Function: ret_complex_expr @ 00012530 */

/* WARNING: Unknown calling convention */

int ret_complex_expr(int x,int y,int z)

{
 undefined4 local_8;
 
 if (y < x) {
 local_8 = z << 1;
 }
 else {
 local_8 = z + 10;
 }
 return local_8;
}



/* Function: call_ret_complex_expr @ 00012570 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
 int iVar1;
 int iVar2;
 int r2;
 int r1;
 
 iVar1 = ret_complex_expr(5,3,10);
 iVar2 = ret_complex_expr(3,5,10);
 return iVar1 + iVar2;
}



/* Function: ret_multi_branch @ 000125e0 */

/* WARNING: Unknown calling convention */

int ret_multi_branch(int op)

{
 undefined4 local_8;
 
 if (op == 0) {
 local_8 = 10;
 }
 else if (op == 1) {
 local_8 = 0x14;
 }
 else if (op == 2) {
 local_8 = 0x1e;
 }
 else {
 local_8 = -1;
 }
 return local_8;
}



/* Function: call_ret_multi_branch @ 00012660 */

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
 return iVar3 + iVar2 + iVar1;
}



/* Function: ret_void @ 000126d0 */

/* WARNING: Unknown calling convention */

void ret_void(int x,int *out)

{
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 000126f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 int result;
 
 ret_void(7,&result);
 return result;
}



/* Function: test_return_values @ 00012720 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 int iVar1;
 
 printf(&DAT_000132b0);
 iVar1 = call_ret_basic();
 printf(&DAT_000132cf,iVar1);
 iVar1 = call_ret_pointer();
 printf(&DAT_000132eb,iVar1);
 iVar1 = call_ret_small_struct();
 printf(&DAT_00013307,iVar1);
 iVar1 = call_ret_large_struct();
 printf(&DAT_00013322,iVar1);
 iVar1 = call_ret_func_ptr();
 printf(&DAT_0001333f,iVar1);
 iVar1 = call_ret_opaque();
 printf(&DAT_0001335b,iVar1);
 iVar1 = call_ret_complex_expr();
 printf(&DAT_00013378,iVar1);
 iVar1 = call_ret_multi_branch();
 printf(&DAT_00013394,iVar1);
 iVar1 = call_ret_void();
 printf(&DAT_000133b0,iVar1);
 return;
}



/* Function: main @ 00012850 */

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




/* Total functions decompiled: 83 */
