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
typedef long long longlong;
typedef unsigned long ulong;
typedef unsigned int uint;

/* Additional type definitions for decompiled code */
typedef unsigned char undefined;
typedef void (*code)(void);
typedef int undefined4;

/* Struct definitions for decompiled code */
typedef struct {
    longlong data[16];
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
    longlong data[16];
} LargeData;

typedef struct {
    int a;
    int b;
} TestIntPair;

typedef struct {
    longlong data[16];
} BigStruct;

typedef int (*func_ptr_t)(int);
typedef int (*_func_int_int)(int);

/* va_list definition for x86-64 System V ABI */
typedef struct {
    unsigned int gp_offset;
    unsigned int fp_offset;
    void *overflow_arg_area;
    void *reg_save_area;
} __va_list_tag[1];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/4/4_clang_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code)((undefined *)0x0))();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: cdecl_func @ 00101160 */

int cdecl_func(int a,int b)

{
 int b_local;
 int a_local;
 
 return a + b;
}



/* Function: call_cdecl @ 00101180 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
 int iVar1;
 
 iVar1 = cdecl_func(5,10);
 return iVar1;
}



/* Function: stdcall_func @ 001011a0 */

int stdcall_func(int a,int b)

{
 int b_local;
 int a_local;
 
 return a * b;
}



/* Function: call_stdcall @ 001011c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
 int iVar1;
 
 iVar1 = stdcall_func(5,10);
 return iVar1;
}



/* Function: fastcall_func @ 001011e0 */

int fastcall_func(int a,int b,int c)

{
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c;
}



/* Function: call_fastcall @ 00101200 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
 int iVar1;
 
 iVar1 = fastcall_func(1,2,3);
 return iVar1;
}



/* Function: call_thiscall @ 00101220 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
 return 0xf;
}



/* Function: arm_aapcs_func @ 00101230 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
 int e_local;
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 00101260 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
 int iVar1;
 
 iVar1 = arm_aapcs_func(1,2,3,4,5);
 return iVar1;
}



/* Function: mips_func @ 00101290 */

int mips_func(int a,int b,int c,int d)

{
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d;
}



/* Function: call_mips @ 001012b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
 int iVar1;
 
 iVar1 = mips_func(10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: amd64_sysv_func @ 001012d0 */

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



/* Function: call_amd64_sysv @ 00101300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
 int iVar1;
 
 iVar1 = amd64_sysv_func(1,2,3,4,5,6);
 return iVar1;
}



/* Function: ms_x64_func @ 00101330 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
 int e_local;
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d + e;
}



/* Function: call_ms_x64 @ 00101360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
 int iVar1;
 
 iVar1 = ms_x64_func(1,2,3,4,5);
 return iVar1;
}



/* Function: vectorcall_func @ 00101390 */

int vectorcall_func(int a,int b,int c,int d)

{
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d;
}



/* Function: call_vectorcall @ 001013b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
 int iVar1;
 
 iVar1 = vectorcall_func(1,2,3,4);
 return iVar1;
}



/* Function: mixed_conventions_test @ 001013d0 */

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
 return iVar3 + iVar2 + iVar1;
}



/* Function: varargs_func @ 00101430 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int varargs_func(int count,...)

{
 int *local_100;
 int local_e8 [46];
 int i;
 int sum;
 va_list args;
 int count_local;
 
 sum = 0;
 args->overflow_arg_area = (void *)((char *)&count_local + 16);
 args->gp_offset = 8;
 for (i = 0; i < count; i = i + 1) {
 if (args->gp_offset < 0x29) {
 local_100 = (int *)((long)local_e8 + (long)(int)args->gp_offset);
 args->gp_offset = args->gp_offset + 8;
 }
 else {
 local_100 = args->overflow_arg_area;
 args->overflow_arg_area = (void *)((long)args->overflow_arg_area + 8);
 }
 sum = *local_100 + sum;
 }
 return sum;
}



/* Function: func_no_args @ 00101560 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
 return 0x2a;
}



/* Function: func_many_args @ 00101570 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
 int f_local;
 int e_local;
 int d_local;
 int c_local;
 int b_local;
 int a_local;
 
 return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 001015b0 */

int func_mixed_args(int x,char *s,double d,long long ll)

{
 size_t sVar1;
 undefined4 local_38;
 int len;
 longlong ll_local;
 double d_local;
 char *s_local;
 int x_local;
 
 if (s == (char *)0x0) {
 local_38 = 0;
 }
 else {
 sVar1 = strlen(s);
 local_38 = (int)sVar1;
 }
 return (int)((double)(x + local_38) + d + (double)ll);
}



/* Function: func_struct_byval @ 00101620 */

/* WARNING: Unknown calling convention */

int func_struct_byval(LargeStruct s)

{
 int i;
 longlong sum;
 
 sum = 0;
 for (i = 0; i < 0x10; i = i + 1) {
 sum = s.data[i] + sum;
 }
 return (int)sum;
}



/* Function: func_struct_byptr @ 00101680 */

int func_struct_byptr(SmallStruct *p)

{
 SmallStruct *p_local;
 int local_c;
 
 if (p == (SmallStruct *)0x0) {
 local_c = -1;
 }
 else {
 local_c = p->x * p->y;
 }
 return local_c;
}



/* Function: test_calling_conventions @ 001016c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
 LargeStruct s_00;
 uint uVar1;
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
 
 printf("=== Calling Conventions Test ===\n");
 uVar1 = call_cdecl();
 printf("CALL-L1-01: %d\n",(ulong)uVar1);
 uVar1 = call_stdcall();
 printf("CALL-L1-02: %d\n",(ulong)uVar1);
 uVar1 = call_fastcall();
 printf("CALL-L1-03: %d\n",(ulong)uVar1);
 uVar1 = call_thiscall();
 printf("CALL-L1-04: %d\n",(ulong)uVar1);
 uVar1 = call_arm_aapcs();
 printf("CALL-L1-05: %d\n",(ulong)uVar1);
 uVar1 = call_mips();
 printf("CALL-L1-06: %d\n",(ulong)uVar1);
 uVar1 = call_amd64_sysv();
 printf("CALL-L1-07: %d\n",(ulong)uVar1);
 uVar1 = call_ms_x64();
 printf("CALL-L1-08: %d\n",(ulong)uVar1);
 uVar1 = call_vectorcall();
 printf("CALL-L1-09: %d\n",(ulong)uVar1);
 uVar1 = mixed_conventions_test();
 printf("CALL-L1-10: %d\n",(ulong)uVar1);
 uVar1 = varargs_func(5,1,2,3,4);
 printf("VARARGS-L1-01: %d\n",(ulong)uVar1);
 uVar1 = func_no_args();
 printf("NO-ARGS-L1-01: %d\n",(ulong)uVar1);
 uVar1 = func_many_args(1,2,3,4,5,6,7,8);
 printf("MANY-ARGS-L1-01: %d\n",(ulong)uVar1);
 uVar1 = func_mixed_args(10,"test",3.14,100);
 printf("MIXED-ARGS-L1-01: %d\n",(ulong)uVar1);
 for (i = 0; i < 0x10; i = i + 1) {
 large.data[i] = (long)(i + 1);
 }
 s_00.data[0] = large.data[0];
 s_00.data[1] = large.data[1];
 s_00.data[2] = large.data[2];
 s_00.data[3] = large.data[3];
 s_00.data[4] = large.data[4];
 s_00.data[5] = large.data[5];
 s_00.data[6] = large.data[6];
 s_00.data[7] = large.data[7];
 s_00.data[8] = large.data[8];
 s_00.data[9] = large.data[9];
 s_00.data[10] = large.data[10];
 s_00.data[0xb] = large.data[0xb];
 s_00.data[0xc] = large.data[0xc];
 s_00.data[0xd] = large.data[0xd];
 s_00.data[0xe] = large.data[0xe];
 s_00.data[0xf] = large.data[0xf];
 uVar1 = func_struct_byval(s_00);
 printf("STRUCT-BYVAL-L1-01: %d\n",(ulong)uVar1);
 s.x = 5;
 s.y = 10;
 uVar1 = func_struct_byptr(&s);
 printf("STRUCT-BYPTR-L1-01: %d\n",(ulong)uVar1);
 return;
}



/* Function: param_by_value_int @ 00101970 */

int param_by_value_int(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: call_by_value_int @ 00101990 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
 int iVar1;
 int result;
 int val;
 
 iVar1 = param_by_value_int(5);
 return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 001019c0 */

int param_by_value_ptr(int *p)

{
 int *p_local;
 
 *p = *p << 1;
 return 1;
}



/* Function: call_by_value_ptr @ 00101a00 */

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



/* Function: param_array_decay @ 00101a30 */

int param_array_decay(int *arr,int n)

{
 int n_local;
 int *arr_local;
 
 return 8;
}



/* Function: call_array_decay @ 00101a50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
 int iVar1;
 int array [10];
 
 memset(array,0,0x28);
 iVar1 = param_array_decay(array,10);
 return iVar1;
}



/* Function: param_string @ 00101a80 */

int param_string(char *str)

{
 char *str_local;
 
 return (int)*str + (int)str[1];
}



/* Function: call_string_param @ 00101aa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
 int iVar1;
 
 iVar1 = param_string("Hello");
 return iVar1;
}



/* Function: param_ptr_array @ 00101ac0 */

int param_ptr_array(char **arr,int n)

{
 int i;
 int sum;
 int n_local;
 char **arr_local;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = *arr[i] + sum;
 }
 return sum;
}



/* Function: call_ptr_array @ 00101b10 */

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



/* Function: param_varargs @ 00101b50 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int param_varargs(int count,...)

{
 int *local_100;
 int local_e8 [46];
 int i;
 int sum;
 va_list args;
 int count_local;
 
 args->overflow_arg_area = (void *)((char *)&count_local + 16);
 args->gp_offset = 8;
 sum = 0;
 for (i = 0; i < count; i = i + 1) {
 if (args->gp_offset < 0x29) {
 local_100 = (int *)((long)local_e8 + (long)(int)args->gp_offset);
 args->gp_offset = args->gp_offset + 8;
 }
 else {
 local_100 = args->overflow_arg_area;
 args->overflow_arg_area = (void *)((long)args->overflow_arg_area + 8);
 }
 sum = *local_100 + sum;
 }
 return sum;
}



/* Function: call_varargs_param @ 00101c80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
 int iVar1;
 
 iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 return iVar1;
}



/* Function: callback_func @ 00101d00 */

int callback_func(int x);

/* Function: param_func_ptr @ 00101cb0 */

int param_func_ptr(_func_int_int *callback,int x)

{
 int iVar1;
 int x_local;
 _func_int_int *callback_local;
 
 iVar1 = (*callback)(x);
 return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00101ce0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
 int iVar1;
 
 iVar1 = param_func_ptr(callback_func,5);
 return iVar1;
}



/* Function: callback_func @ 00101d00 */

int callback_func(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: param_double_ptr @ 00101d10 */

int param_double_ptr(int **pp,int new_val)

{
 int new_val_local;
 int **pp_local;
 undefined4 local_c;
 
 if ((pp == (int **)0x0) || (*pp == (int *)0x0)) {
 local_c = -1;
 }
 else {
 **pp = new_val;
 *pp = (int *)0x0;
 local_c = 1;
 }
 return local_c;
}



/* Function: call_double_ptr @ 00101d70 */

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



/* Function: param_complex_cast @ 00101dc0 */

int param_complex_cast(void *p,int type)

{
 TestIntPair *s;
 int *back_ptr;
 char *char_ptr;
 int *int_ptr;
 int type_local;
 void *p_local;
 undefined4 local_c;
 
 if (type == 0) {
 local_c = *(int *)p;
 }
 else if (type == 1) {
 local_c = *(int *)p + *(int *)((long)p + 4);
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_complex_cast @ 00101e40 */

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



/* Function: param_struct_byval @ 00101e80 */

/* WARNING: Unknown calling convention */

int param_struct_byval(BigStruct s)

{
 return s.data[0] + s.data[0xf];
}



/* Function: call_struct_byval @ 00101e90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
 BigStruct s_00;
 int iVar1;
 int i;
 BigStruct s;
 
 for (i = 0; i < 0x10; i = i + 1) {
 s.data[i] = i;
 }
 s_00.data[2] = s.data[2];
 s_00.data[3] = s.data[3];
 s_00.data[0] = s.data[0];
 s_00.data[1] = s.data[1];
 s_00.data[4] = s.data[4];
 s_00.data[5] = s.data[5];
 s_00.data[6] = s.data[6];
 s_00.data[7] = s.data[7];
 s_00.data[8] = s.data[8];
 s_00.data[9] = s.data[9];
 s_00.data[10] = s.data[10];
 s_00.data[0xb] = s.data[0xb];
 s_00.data[0xc] = s.data[0xc];
 s_00.data[0xd] = s.data[0xd];
 s_00.data[0xe] = s.data[0xe];
 s_00.data[0xf] = s.data[0xf];
 iVar1 = param_struct_byval(s_00);
 return iVar1;
}



/* Function: param_order_dep @ 00101f00 */

int param_order_dep(int a,int b)

{
 int b_local;
 int a_local;
 
 return a + b;
}



/* Function: call_order_dep @ 00101f20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
 int iVar1;
 int i;
 
 iVar1 = param_order_dep(1,2);
 return iVar1;
}



/* Function: test_parameter_passing @ 00101f50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
 uint uVar1;
 
 printf("=== Parameter Passing Test ===\n");
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



/* Function: ret_basic_type @ 00102050 */

int ret_basic_type(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: call_ret_basic @ 00102060 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
 int iVar1;
 int result;
 int val;
 
 iVar1 = ret_basic_type(0x15);
 return iVar1;
}



/* Function: ret_pointer @ 00102090 */

int * ret_pointer(int *p)

{
 int *p_local;
 
 return p + 1;
}



/* Function: call_ret_pointer @ 001020b0 */

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



/* Function: ret_small_struct @ 001020f0 */

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



/* Function: call_ret_small_struct @ 00102110 */

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



/* Function: ret_large_struct @ 00102140 */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
 int i;
 int seed_local;
 
 /* Unresolved local var: LargeData d@[???] */
 for (i = 0; i < 0x10; i = i + 1) {
 __return_storage_ptr__->data[i] = seed + i;
 }
 return __return_storage_ptr__;
}



/* Function: call_ret_large_struct @ 00102190 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
 LargeData d;
 
 ret_large_struct(&d,100);
 return d.data[0] + d.data[0xf];
}



/* Function: func_a @ 001021c0 */

int func_a(int x)

{
 int x_local;
 
 return x + 10;
}



/* Function: func_b @ 001021d0 */

int func_b(int x)

{
 int x_local;
 
 return x << 1;
}



/* Function: ret_func_ptr @ 001021e0 */

func_ptr_t ret_func_ptr(int selector)

{
 code *pcVar1;
 int selector_local;
 
 pcVar1 = func_a;
 if (selector != 0) {
 pcVar1 = func_b;
 }
 return pcVar1;
}



/* Function: call_ret_func_ptr @ 00102210 */

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



/* Global variables for ret_opaque_handle */
static double handle1 = 1.0;
static double handle2 = 2.0;

/* Function: ret_opaque_handle @ 00102240 */

void * ret_opaque_handle(int type)

{
 double *pdVar1;
 int type_local;
 
 pdVar1 = &handle2;
 if (type == 0) {
 pdVar1 = (double *)&handle1;
 }
 return pdVar1;
}



/* Function: call_ret_opaque @ 00102270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
 int *piVar1;
 void *h;
 
 piVar1 = ret_opaque_handle(0);
 return *piVar1;
}



/* Function: ret_complex_expr @ 00102290 */

int ret_complex_expr(int x,int y,int z)

{
 undefined4 local_18;
 int z_local;
 int y_local;
 int x_local;
 
 if (y < x) {
 local_18 = z << 1;
 }
 else {
 local_18 = z + 10;
 }
 return local_18;
}



/* Function: call_ret_complex_expr @ 001022d0 */

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



/* Function: ret_multi_branch @ 00102320 */

int ret_multi_branch(int op)

{
 int op_local;
 undefined4 local_c;
 
 if (op == 0) {
 local_c = 10;
 }
 else if (op == 1) {
 local_c = 0x14;
 }
 else if (op == 2) {
 local_c = 0x1e;
 }
 else {
 local_c = -1;
 }
 return local_c;
}



/* Function: call_ret_multi_branch @ 00102390 */

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



/* Function: ret_void @ 001023e0 */

void ret_void(int x,int *out)

{
 int *out_local;
 int x_local;
 
 *out = x * 3;
 return;
}



/* Function: call_ret_void @ 00102400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
 int result;
 
 ret_void(7,&result);
 return result;
}



/* Function: test_return_values @ 00102420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
 uint uVar1;
 
 printf("=== Return Values Test ===\n");
 uVar1 = call_ret_basic();
 printf("RET-L1-01: %d\n",(ulong)uVar1);
 uVar1 = call_ret_pointer();
 printf("RET-L1-02: %d\n",(ulong)uVar1);
 uVar1 = call_ret_small_struct();
 printf("RET-L1-03: %d\n",(ulong)uVar1);
 uVar1 = call_ret_large_struct();
 printf("RET-L1-04: %d\n",(ulong)uVar1);
 uVar1 = call_ret_func_ptr();
 printf("RET-L1-05: %d\n",(ulong)uVar1);
 uVar1 = call_ret_opaque();
 printf("RET-L1-06: %d\n",(ulong)uVar1);
 uVar1 = call_ret_complex_expr();
 printf("RET-L1-07: %d\n",(ulong)uVar1);
 uVar1 = call_ret_multi_branch();
 printf("RET-L1-08: %d\n",(ulong)uVar1);
 uVar1 = call_ret_void();
 printf("RET-L1-09: %d\n",(ulong)uVar1);
 return;
}



/* Function: main @ 00102500 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 78 */
