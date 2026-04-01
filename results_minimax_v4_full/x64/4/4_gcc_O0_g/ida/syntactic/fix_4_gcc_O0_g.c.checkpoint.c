/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_gcc_O0_g
 * Processor: pc
 */

#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/* Type definitions */
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

typedef int (*func_ptr_t)(int);

/* External declarations */
extern void (*_gmon_start__)(void);

/* Global variable */
const char *s = "Testing calling conventions...";

/* Stack canary read - MSVC intrinsic replacement for GCC */
static inline unsigned long long __readfsqword(unsigned long long offset) {
    unsigned long long val;
    __asm__ volatile ("movq %%fs:%1, %0" : "=r"(val) : "m"(*(const char *)offset));
    return val;
}

/* String format constants */
const char aCallL206[] = "CALL-L2-06: %d\n";
const char aCallL207[] = "CALL-L2-07: %d\n";
const char aCallL208[] = "CALL-L2-08: %d\n";
const char aCallL209[] = "CALL-L2-09: %d\n";
const char aCallL210[] = "CALL-L3-01: %d\n";
const char aCallL211[] = "CALL-L3-02: %d\n";

/* Additional string constants */
const char asc_31E8[] = "Testing parameter passing...\n";
const char asc_32C4[] = "Testing return values...\n";

/* Format string constants */
const char aRetL101D[] = "RET-L1-01: %d\n";
const char aRetL102D[] = "RET-L1-02: %d\n";
const char aRetL103D[] = "RET-L1-03: %d\n";
const char aRetL104D[] = "RET-L1-04: %d\n";
const char aRetL201D[] = "RET-L2-01: %d\n";
const char aRetL202D[] = "RET-L2-02: %d\n";
const char aRetL301D[] = "RET-L3-01: %d\n";
const char aRetL302D[] = "RET-L3-02: %d\n";
const char aRetL303D[] = "RET-L3-03: %d\n";

/* Handle global variables */
int handle1_1 = 100;
int handle2_0 = 200;

/* CRT stub function init_proc removed by preprocessor */


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 /* Empty stub - was JUMPOUT in original binary */
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: cdecl_func @ 0x11A9 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x11C1 */
int call_cdecl()
{
 return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x11DA */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x11F1 */
int call_stdcall()
{
 return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x120A */
int fastcall_func(int a, int b, int c)
{
 return b + a + c;
}


/* Function: call_fastcall @ 0x122A */
int call_fastcall()
{
 return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x1248 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1257 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return d + c + b + a + e;
}


/* Function: call_arm_aapcs @ 0x1288 */
int call_arm_aapcs()
{
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x12B1 */
int mips_func(int a, int b, int c, int d)
{
 return c + b + a + d;
}


/* Function: call_mips @ 0x12D9 */
int call_mips()
{
 return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x12FC */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return e + d + c + b + a + f;
}


/* Function: call_amd64_sysv @ 0x1336 */
int call_amd64_sysv()
{
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x1365 */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return d + c + b + a + e;
}


/* Function: call_ms_x64 @ 0x1396 */
int call_ms_x64()
{
 return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x13BF */
int vectorcall_func(int a, int b, int c, int d)
{
 return c + b + a + d;
}


/* Function: call_vectorcall @ 0x13E7 */
int call_vectorcall()
{
 return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x140A */
int mixed_conventions_test()
{
 int sum; // [rsp+Ch] [rbp-4h]
 int suma; // [rsp+Ch] [rbp-4h]

 sum = cdecl_func(1, 2);
 suma = stdcall_func(3, 4) + sum;
 return fastcall_func(5, 6, 7) + suma;
}


/* Function: varargs_func @ 0x145D */
int varargs_func(int count, ...)
{
 long long *v1; // rax
 long long v2; // kr00_8
 int sum; // [rsp+18h] [rbp-D8h]
 int i; // [rsp+1Ch] [rbp-D4h]
 va_list args; // [rsp+20h] [rbp-D0h] BYREF

 va_start(args, count);
 sum = 0;
 for ( i = 0; i < count; ++i )
 {
 if ( args[0].gp_offset > 0x2F )
 {
 v2 = va_arg(args, unsigned long long);
 v1 = &v2;
 }
 else
 {
 v1 = (long long *)((char *)args[0].reg_save_area + args[0].gp_offset);
 args[0].gp_offset += 8;
 }
 sum += *(unsigned int *)v1;
 }
 return sum;
}


/* Function: func_no_args @ 0x158A */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1599 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return g + f + e + d + c + b + a + h;
}


/* Function: func_mixed_args @ 0x15DD */
int func_mixed_args(int x, char *s, double d, long long ll)
{
 int v4; // eax
 int lla; // [rsp+0h] [rbp-30h]

 lla = ll;
 if ( s )
 v4 = strlen(s);
 else
 v4 = 0;
 return (int)((double)lla + (double)(x + v4) + d);
}


/* Function: func_struct_byval @ 0x1643 */
int func_struct_byval(LargeStruct s)
{
 int i; // [rsp+0h] [rbp-Ch]
 long long sum; // [rsp+4h] [rbp-8h]

 sum = 0;
 for ( i = 0; i <= 15; ++i )
 sum += s.data[i];
 return sum;
}


/* Function: func_struct_byptr @ 0x167A */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->x * p->y;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x16A6 */
void test_calling_conventions()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int i; // [rsp+4h] [rbp-BCh]
 unsigned int sum; // [rsp+8h] [rbp-B8h]
 unsigned int no_args; // [rsp+Ch] [rbp-B4h]
 unsigned int many; // [rsp+10h] [rbp-B0h]
 unsigned int mixed; // [rsp+14h] [rbp-ACh]
 unsigned int struct_val; // [rsp+18h] [rbp-A8h]
 unsigned int struct_ptr; // [rsp+1Ch] [rbp-A4h]
 SmallStruct ss; // [rsp+28h] [rbp-98h] BYREF
 LargeStruct large; // [rsp+30h] [rbp-90h]
 unsigned long long v19; // [rsp+B8h] [rbp-8h]

 v19 = __readfsqword(0x28u);
 puts(s);
 v0 = call_cdecl();
 printf("CALL-L1-01: %d\n", v0);
 v1 = call_stdcall();
 printf("CALL-L1-02: %d\n", v1);
 v2 = call_fastcall();
 printf("CALL-L1-03: %d\n", v2);
 v3 = call_thiscall();
 printf("CALL-L1-04: %d\n", v3);
 v4 = call_arm_aapcs();
 printf("CALL-L1-05: %d\n", v4);
 v5 = call_mips();
 printf("CALL-L1-06: %d\n", v5);
 v6 = call_amd64_sysv();
 printf("CALL-L1-07: %d\n", v6);
 v7 = call_ms_x64();
 printf("CALL-L1-08: %d\n", v7);
 v8 = call_vectorcall();
 printf("CALL-L1-09: %d\n", v8);
 v9 = mixed_conventions_test();
 printf("CALL-L1-10: %d\n", v9);
 sum = varargs_func(5, 1, 2, 3, 4, 5);
 printf(aCallL206, sum);
 no_args = func_no_args();
 printf(aCallL207, no_args);
 many = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
 printf(aCallL208, many);
 mixed = func_mixed_args(10, "test", 3.14, 100);
 printf(aCallL209, mixed);
 for ( i = 0; i <= 15; ++i )
 large.data[i] = i + 1;
 struct_val = func_struct_byval(large);
 printf(aCallL210, struct_val);
 ss.x = 5;
 ss.y = 10;
 struct_ptr = func_struct_byptr(&ss);
 printf(aCallL211, struct_ptr);
}


/* Function: param_by_value_int @ 0x1A1F */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x1A32 */
int call_by_value_int()
{
 return param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x1A5C */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x1A8C */
int call_by_value_ptr()
{
 int val; // [rsp+8h] [rbp-18h] BYREF
 int result; // [rsp+Ch] [rbp-14h]
 int *ptr; // [rsp+10h] [rbp-10h]
 unsigned long long v4; // [rsp+18h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 val = 5;
 ptr = &val;
 result = param_by_value_ptr(&val);
 return val + result;
}


/* Function: param_array_decay @ 0x1AE3 */
int param_array_decay(int *arr, int n)
{
 return 8;
}


/* Function: call_array_decay @ 0x1AF9 */
int call_array_decay()
{
 int array[10]; // [rsp+0h] [rbp-30h] BYREF
 unsigned long long v2; // [rsp+28h] [rbp-8h]

 v2 = __readfsqword(0x28u);
 memset(array, 0, sizeof(array));
 return param_array_decay(array, 10);
}


/* Function: param_string @ 0x1B63 */
int param_string(const char *str)
{
 return *str + str[1];
}


/* Function: call_string_param @ 0x1B8B */
int call_string_param()
{
 return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1BA4 */
int param_ptr_array(char **arr, int n)
{
 int sum; // [rsp+14h] [rbp-8h]
 int i; // [rsp+18h] [rbp-4h]

 sum = 0;
 for ( i = 0; i < n; ++i )
 sum += *arr[i];
 return sum;
}


/* Function: call_ptr_array @ 0x1BF4 */
int call_ptr_array()
{
 char *strs[3]; // [rsp+0h] [rbp-20h] BYREF
 unsigned long long v2; // [rsp+18h] [rbp-8h]

 v2 = __readfsqword(0x28u);
 strs[0] = "abc";
 strs[1] = "def";
 strs[2] = "ghi";
 return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x1C57 */
int param_varargs(int count, ...)
{
 long long *v1; // rax
 long long v2; // kr00_8
 int sum; // [rsp+18h] [rbp-D8h]
 int i; // [rsp+1Ch] [rbp-D4h]
 va_list args; // [rsp+20h] [rbp-D0h] BYREF

 va_start(args, count);
 sum = 0;
 for ( i = 0; i < count; ++i )
 {
 if ( args[0].gp_offset > 0x2F )
 {
 v2 = va_arg(args, unsigned long long);
 v1 = &v2;
 }
 else
 {
 v1 = (long long *)((char *)args[0].reg_save_area + args[0].gp_offset);
 args[0].gp_offset += 8;
 }
 sum += *(unsigned int *)v1;
 }
 return sum;
}


/* Function: call_varargs_param @ 0x1D84 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1DB2 */
int param_func_ptr(int (*callback)(int), int x)
{
 return ((long long ( *)(unsigned long long))callback)((unsigned int)x) + 10;
}


/* Function: callback_func @ 0x1DD5 */
int callback_func(int x)
{
 return 2 * x;
}


/* Function: call_func_ptr_param @ 0x1DE7 */
int call_func_ptr_param()
{
 return param_func_ptr((int (*)(int))callback_func, 5);
}


/* Function: param_double_ptr @ 0x1E05 */
int param_double_ptr(int **pp, int new_val)
{
 if ( !pp || !*pp )
 return -1;
 **pp = new_val;
 *pp = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x1E4C */
int call_double_ptr()
{
 int val; // [rsp+8h] [rbp-18h] BYREF
 int *ptr[2]; // [rsp+10h] [rbp-10h] BYREF

 ptr[1] = (int *)__readfsqword(0x28u);
 val = 10;
 ptr[0] = &val;
 param_double_ptr(ptr, 20);
 return (ptr[0] == 0) + val;
}


/* Function: param_complex_cast @ 0x1EB2 */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 return -1;
}


/* Function: call_complex_cast @ 0x1F0D */
int call_complex_cast()
{
 int val; // [rsp+Ch] [rbp-14h] BYREF
 TestIntPair pair; // [rsp+10h] [rbp-10h] BYREF
 unsigned long long v3; // [rsp+18h] [rbp-8h]

 v3 = __readfsqword(0x28u);
 val = 305419896;
 pair.a = 100;
 pair.b = 200;
 param_complex_cast(&pair, 1);
 return param_complex_cast(&val, 0);
}


/* Function: param_struct_byval @ 0x1F75 */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1F87 */
int call_struct_byval()
{
 int i; // [rsp+Ch] [rbp-54h]
 BigStruct s; // [rsp+10h] [rbp-50h]
 unsigned long long v3; // [rsp+58h] [rbp-8h]

 v3 = __readfsqword(0x28u);
 for ( i = 0; i <= 15; ++i )
 s.data[i] = i;
 return param_struct_byval(s);
}


/* Function: param_order_dep @ 0x1FF8 */
int param_order_dep(int a, int b)
{
 return a + b;
}


/* Function: call_order_dep @ 0x2010 */
int call_order_dep()
{
 return param_order_dep(2, 2);
}


/* Function: test_parameter_passing @ 0x203C */
void test_parameter_passing()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax

 puts(asc_31E8);
 v0 = call_by_value_int();
 printf("PARAM-L1-01: %d\n", v0);
 v1 = call_by_value_ptr();
 printf("PARAM-L1-02: %d\n", v1);
 v2 = call_array_decay();
 printf("PARAM-L2-01: %d\n", v2);
 v3 = call_string_param();
 printf("PARAM-L2-02: %d\n", v3);
 v4 = call_ptr_array();
 printf("PARAM-L2-03: %d\n", v4);
 v5 = call_varargs_param();
 printf("PARAM-L2-04: %d\n", v5);
 v6 = call_func_ptr_param();
 printf("PARAM-L3-01: %d\n", v6);
 v7 = call_double_ptr();
 printf("PARAM-L3-02: %d\n", v7);
 v8 = call_complex_cast();
 printf("PARAM-L3-03: %d\n", v8);
 v9 = call_struct_byval();
 printf("PARAM-L3-04: %d\n", v9);
 v10 = call_order_dep();
 printf("PARAM-L3-05: %d\n", v10);
}


/* Function: ret_basic_type @ 0x21B6 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x21C8 */
int call_ret_basic()
{
 return ret_basic_type(21);
}


/* Function: ret_pointer @ 0x21ED */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x2203 */
int call_ret_pointer()
{
 int arr[3]; // [rsp+Ch] [rbp-14h] BYREF
 unsigned long long v2; // [rsp+18h] [rbp-8h]

 v2 = __readfsqword(0x28u);
 arr[0] = 10;
 arr[1] = 20;
 arr[2] = 30;
 return *ret_pointer(arr);
}


/* Function: ret_small_struct @ 0x225F */
SmallPoint ret_small_struct(int x, int y)
{
 SmallPoint p;
 p.x = x;
 p.y = y;
 return p;
}


/* Function: call_ret_small_struct @ 0x227F */
int call_ret_small_struct()
{
 SmallPoint p; // [rsp+8h] [rbp-8h]

 p = ret_small_struct(3, 4);
 return p.x + p.y;
}


/* Function: ret_large_struct @ 0x22A8 */
LargeData * ret_large_struct(LargeData *retstr, int seed)
{
 long long v2; // rbx
 long long v3; // rbx
 long long v4; // rbx
 long long v5; // rbx
 int i; // [rsp+1Ch] [rbp-64h]
 LargeData d; // [rsp+20h] [rbp-60h]
 unsigned long long v9; // [rsp+68h] [rbp-18h]

 v9 = __readfsqword(0x28u);
 for ( i = 0; i <= 15; ++i )
 d.data[i] = i + seed;
 v2 = *(unsigned long long *)&d.data[2];
 *(unsigned long long *)retstr->data = *(unsigned long long *)d.data;
 *(unsigned long long *)&retstr->data[2] = v2;
 v3 = *(unsigned long long *)&d.data[6];
 *(unsigned long long *)&retstr->data[4] = *(unsigned long long *)&d.data[4];
 *(unsigned long long *)&retstr->data[6] = v3;
 v4 = *(unsigned long long *)&d.data[10];
 *(unsigned long long *)&retstr->data[8] = *(unsigned long long *)&d.data[8];
 *(unsigned long long *)&retstr->data[10] = v4;
 v5 = *(unsigned long long *)&d.data[14];
 *(unsigned long long *)&retstr->data[12] = *(unsigned long long *)&d.data[12];
 *(unsigned long long *)&retstr->data[14] = v5;
 return retstr;
}


/* Function: call_ret_large_struct @ 0x2350 */
int call_ret_large_struct()
{
 LargeData d; // [rsp+0h] [rbp-50h] BYREF
 unsigned long long v2; // [rsp+48h] [rbp-8h]

 v2 = __readfsqword(0x28u);
 ret_large_struct(&d, 100);
 return d.data[0] + d.data[15];
}


/* Function: func_a @ 0x239A */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x23AD */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0x23BF */
func_ptr_t ret_func_ptr(int selector)
{
 if ( selector )
 return (func_ptr_t)func_b;
 else
 return (func_ptr_t)func_a;
}


/* Function: call_ret_func_ptr @ 0x23E2 */
int call_ret_func_ptr()
{
 func_ptr_t f; // [rsp+8h] [rbp-8h]

 f = ret_func_ptr(1);
 return f(5);
}


/* Function: ret_opaque_handle @ 0x2409 */
void * ret_opaque_handle(int type)
{
 if ( type )
 return &handle2_0;
 else
 return &handle1_1;
}


/* Function: call_ret_opaque @ 0x242C */
int call_ret_opaque()
{
 return *(unsigned int *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x244E */
int ret_complex_expr(int x, int y, int z)
{
 if ( x <= y )
 return z + 10;
 else
 return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x2476 */
int call_ret_complex_expr()
{
 int r1; // [rsp+8h] [rbp-8h]

 r1 = ret_complex_expr(5, 3, 10);
 return r1 + ret_complex_expr(3, 5, 10);
}


/* Function: ret_multi_branch @ 0x24BA */
int ret_multi_branch(int op)
{
 if ( op == 2 )
 return 30;
 if ( op > 2 )
 return -1;
 if ( !op )
 return 10;
 if ( op == 1 )
 return 20;
 else
 return -1;
}


/* Function: call_ret_multi_branch @ 0x24FB */
int call_ret_multi_branch()
{
 int sum; // [rsp+Ch] [rbp-4h]
 int suma; // [rsp+Ch] [rbp-4h]

 sum = ret_multi_branch(0);
 suma = ret_multi_branch(1) + sum;
 return ret_multi_branch(2) + suma;
}


/* Function: ret_void @ 0x253A */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x255B */
int call_ret_void()
{
 int result; // [rsp+4h] [rbp-Ch] BYREF
 unsigned long long v2; // [rsp+8h] [rbp-8h]

 v2 = __readfsqword(0x28u);
 ret_void(7, &result);
 return result;
}


/* Function: test_return_values @ 0x25A0 */
void test_return_values()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // eax

 puts(asc_32C4);
 v0 = call_ret_basic();
 printf(aRetL101D, v0);
 v1 = call_ret_pointer();
 printf(aRetL102D, v1);
 v2 = call_ret_small_struct();
 printf(aRetL103D, v2);
 v3 = call_ret_large_struct();
 printf(aRetL104D, v3);
 v4 = call_ret_func_ptr();
 printf(aRetL201D, v4);
 v5 = call_ret_opaque();
 printf(aRetL202D, v5);
 v6 = call_ret_complex_expr();
 printf(aRetL301D, v6);
 v7 = call_ret_multi_branch();
 printf(aRetL302D, v7);
 v8 = call_ret_void();
 printf(aRetL303D, v8);
}


/* Function: main @ 0x26DA */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x2708 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x6030 */

/* FAILED to decompile: puts @ 0x6038 */

/* FAILED to decompile: strlen @ 0x6040 */

/* FAILED to decompile: __stack_chk_fail @ 0x6048 */

/* FAILED to decompile: printf @ 0x6050 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6058 */

/* FAILED to decompile: __gmon_start__ @ 0x6068 */

/* Total functions decompiled: 83, failed: 7 */
