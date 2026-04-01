/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_gcc_O1_g
 * Processor: pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <emmintrin.h>

/* Type definitions */
typedef int (*func_ptr_t)(int);

typedef struct {
    long long data[16];
} LargeStruct;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    long long data[16];
} BigStruct;

typedef struct {
    int data[16];
} LargeData;

typedef long long SmallPoint;

/* Global variables */
int handle1_1 = 42;
int handle2_0 = 43;
const char *s = "test";
const char *aCallL206 = "CALL-L2-06: %d\n";
const char *aCallL207 = "CALL-L2-07: %d\n";
const char *aCallL208 = "CALL-L2-08: %d\n";
const char *aCallL209 = "CALL-L2-09: %d\n";
const char *aCallL210 = "CALL-L2-10: %lld\n";
const char *aCallL211 = "CALL-L2-11: %d\n";
const char *asc_2130 = "Testing parameter passing...";
const char *asc_22BD = "Testing return values...";
const char *aRetL101D = "RET-L1-01: %d\n";
const char *aRetL102D = "RET-L1-02: %d\n";
const char *aRetL103D = "RET-L1-03: %d\n";
const char *aRetL104D = "RET-L1-04: %d\n";
const char *aRetL201D = "RET-L2-01: %d\n";
const char *aRetL202D = "RET-L2-02: %d\n";
const char *aRetL301D = "RET-L3-01: %d\n";
const char *aRetL302D = "RET-L3-02: %d\n";
const char *aRetL303D = "RET-L3-03: %d\n";

/* External functions */
extern long long (*_gmon_start__)(void);

/* Stack canary intrinsic - stub implementation */
static void *__readfsqword(unsigned int offset)
{
 (void)offset;
 return (void *)0;
}
extern int puts(const char *s);
extern int __printf_chk(int flag, const char *format, ...);
extern size_t strlen(const char *s);
extern __m128i _mm_load_si128(const __m128i *p);




















/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: callback_func @ 0x11A9 */
int callback_func(int x)
{
 return 2 * x;
}


/* Function: func_a @ 0x11B1 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x11B9 */
int func_b(int x)
{
 return 2 * x;
}


/* Function: cdecl_func @ 0x11C1 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x11C9 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x11D3 */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x11DD */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x11E7 */
int fastcall_func(int a, int b, int c)
{
 return b + a + c;
}


/* Function: call_fastcall @ 0x11F1 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x11FB */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1205 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return d + c + b + a + e;
}


/* Function: call_arm_aapcs @ 0x1214 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x121E */
int mips_func(int a, int b, int c, int d)
{
 return c + b + a + d;
}


/* Function: call_mips @ 0x122A */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x1234 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return e + d + c + b + a + f;
}


/* Function: call_amd64_sysv @ 0x1246 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x1250 */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return d + c + b + a + e;
}


/* Function: call_ms_x64 @ 0x125F */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1269 */
int vectorcall_func(int a, int b, int c, int d)
{
 return c + b + a + d;
}


/* Function: call_vectorcall @ 0x1275 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x127F */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x1289 */
int varargs_func(int count, ...)
{
 int v1; // ecx
 int v2; // esi
 long long *v3; // rdx
 long long v4; // kr00_8
 va_list args; // [rsp+0h] [rbp-58h] BYREF

 va_start(args, count);
 va_arg(args, double);
 va_arg(args, double);
 va_arg(args, double);
 va_arg(args, double);
 va_arg(args, double);
 va_arg(args, double);
 va_arg(args, double);
 va_arg(args, double);
 if ( count <= 0 )
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 if ( args[0].gp_offset > 0x2F )
 {
 v4 = va_arg(args, unsigned long long);
 v3 = &v4;
 }
 else
 {
 v3 = (long long *)((char *)args[0].reg_save_area + args[0].gp_offset);
 args[0].gp_offset += 8;
 }
 v2 += *(unsigned int *)v3;
 ++v1;
 }
 while ( count != v1 );
 return v2;
}


/* Function: func_no_args @ 0x1335 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x133F */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + e + d + c + b + a + f;
}


/* Function: func_mixed_args @ 0x1359 */
long long func_mixed_args(int x, char *s, double d, long long ll)
{
 int v4; // ebx
 int v5; // eax

 v4 = ll;
 v5 = 0;
 if ( s )
 v5 = strlen(s);
 return (unsigned int)(int)((double)(x + v5) + d + (double)v4);
}


/* Function: func_struct_byval @ 0x13A6 */
int func_struct_byval(LargeStruct s)
{
 LargeStruct *p_s; // rdx
 long long v2; // rax
 char v4; // [rsp+88h] [rbp+88h] BYREF

 p_s = &s;
 v2 = 0;
 do
 {
 v2 += p_s->data[0];
 p_s = (LargeStruct *)((char *)p_s + 8);
 }
 while ( p_s != (LargeStruct *)&v4 );
 return v2;
}


/* Function: func_struct_byptr @ 0x13C9 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x13DF */
void test_calling_conventions()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 long long i; // rax
 unsigned char *v3; // rax
 long long v4; // rdx
 long long v5; // [rsp+0h] [rbp-120h]
 LargeStruct large; // [rsp+8h] [rbp-118h] BYREF
 __m128i v7[8]; // [rsp+88h] [rbp-98h] BYREF
 unsigned char v8[8]; // [rsp+108h] [rbp-18h] BYREF
 unsigned long long v9; // [rsp+110h] [rbp-10h]

 v9 = __readfsqword(0x28u);
 puts(s);
 __printf_chk(1, "CALL-L1-01: %d\n", 15);
 __printf_chk(1, "CALL-L1-02: %d\n", 50);
 __printf_chk(1, "CALL-L1-03: %d\n", 6);
 __printf_chk(1, "CALL-L1-04: %d\n", 15);
 __printf_chk(1, "CALL-L1-05: %d\n", 15);
 __printf_chk(1, "CALL-L1-06: %d\n", 100);
 __printf_chk(1, "CALL-L1-07: %d\n", 21);
 __printf_chk(1, "CALL-L1-08: %d\n", 15);
 __printf_chk(1, "CALL-L1-09: %d\n", 10);
 __printf_chk(1, "CALL-L1-10: %d\n", 33);
 v0 = varargs_func(5, 1, 2, 3, 4, 5);
 __printf_chk(1, aCallL206, v0);
 __printf_chk(1, aCallL207, 42);
 __printf_chk(1, aCallL208, 36);
 v1 = func_mixed_args(10, "test", 3.14, 100);
 __printf_chk(1, aCallL209, v1);
 for ( i = 1; i != 17; ++i )
 *(&v5 + i) = i;
 v7[0] = _mm_load_si128((const __m128i *)&large);
 v7[1] = _mm_load_si128((const __m128i *)&large.data[2]);
 v7[2] = _mm_load_si128((const __m128i *)&large.data[4]);
 v7[3] = _mm_load_si128((const __m128i *)&large.data[6]);
 v7[4] = _mm_load_si128((const __m128i *)&large.data[8]);
 v7[5] = _mm_load_si128((const __m128i *)&large.data[10]);
 v7[6] = _mm_load_si128((const __m128i *)&large.data[12]);
 v7[7] = _mm_load_si128((const __m128i *)&large.data[14]);
 v3 = (unsigned char *)v7;
 v4 = 0;
 do
 {
 v4 += *(unsigned long long *)v3;
 v3 += 8;
 }
 while ( (unsigned char *)v8 != v3 );
 __printf_chk(1, aCallL210, v4, v8);
 __printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0x16BA */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x16C2 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x16CC */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x16D8 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x16E2 */
int param_array_decay(int *arr, int n)
{
 return 8;
}


/* Function: call_array_decay @ 0x16EC */
int call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0x16F6 */
int param_string(const char *str)
{
 return str[1] + *str;
}


/* Function: call_string_param @ 0x1704 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x170E */
int param_ptr_array(char **arr, int n)
{
 char **v2; // rax
 char **v3; // rsi
 int v4; // edx

 if ( n <= 0 )
 return 0;
 v2 = arr;
 v3 = &arr[(unsigned int)(n - 1) + 1];
 v4 = 0;
 do
 v4 += **v2++;
 while ( v2 != v3 );
 return v4;
}


/* Function: call_ptr_array @ 0x1741 */
int call_ptr_array()
{
 char *strs[3]; // [rsp+0h] [rbp-28h] BYREF
 unsigned long long v2; // [rsp+18h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 strs[0] = "abc";
 strs[1] = "def";
 strs[2] = "ghi";
 return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x17A3 */
int param_varargs(int count, ...)
{
 int v1; // ecx
 int v2; // esi
 long long *v3; // rdx
 long long v4; // kr00_8
 va_list args; // [rsp+0h] [rbp-58h] BYREF

 va_start(args, count);
 va_arg(args, double);
 va_arg(args, double);
 va_arg(args, double);
 va_arg(args, double);
 va_arg(args, double);
 va_arg(args, double);
 va_arg(args, double);
 va_arg(args, double);
 if ( count <= 0 )
 return 0;
 v1 = 0;
 v2 = 0;
 do
 {
 if ( args[0].gp_offset > 0x2F )
 {
 v4 = va_arg(args, unsigned long long);
 v3 = &v4;
 }
 else
 {
 v3 = (long long *)((char *)args[0].reg_save_area + args[0].gp_offset);
 args[0].gp_offset += 8;
 }
 v2 += *(unsigned int *)v3;
 ++v1;
 }
 while ( count != v1 );
 return v2;
}


/* Function: call_varargs_param @ 0x184F */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1880 */
int param_func_ptr(int (*callback)(int), int x)
{
 return ((long long ( *)(unsigned long long))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0x1897 */
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


/* Function: param_double_ptr @ 0x18B5 */
int param_double_ptr(int **pp, int new_val)
{
 if ( !pp )
 return -1;
 if ( !*pp )
 return -1;
 **pp = new_val;
 *pp = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x18E1 */
int call_double_ptr()
{
 int val; // [rsp+Ch] [rbp-1Ch] BYREF
 int *ptr[3]; // [rsp+10h] [rbp-18h] BYREF

 ptr[1] = (int *)__readfsqword(0x28u);
 val = 10;
 ptr[0] = &val;
 param_double_ptr(ptr, 20);
 return val + (ptr[0] == 0);
}


/* Function: param_complex_cast @ 0x1944 */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 return -1;
}


/* Function: call_complex_cast @ 0x1960 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x196A */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1977 */
int call_struct_byval()
{
 long long i; // rax
 BigStruct s; // [rsp+0h] [rbp-58h]
 unsigned long long v3; // [rsp+48h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 for ( i = 0; i != 16; ++i )
 s.data[i] = i;
 return s.data[15] + s.data[0];
}


/* Function: param_order_dep @ 0x19BD */
int param_order_dep(int a, int b)
{
 return a + b;
}


/* Function: call_order_dep @ 0x19C5 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x19CF */
void test_parameter_passing()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax

 puts(asc_2130);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 v0 = call_by_value_ptr();
 __printf_chk(1, "PARAM-L1-02: %d\n", v0);
 __printf_chk(1, "PARAM-L2-01: %d\n", 8);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 v1 = call_ptr_array();
 __printf_chk(1, "PARAM-L2-03: %d\n", v1);
 v2 = call_varargs_param();
 __printf_chk(1, "PARAM-L2-04: %d\n", v2);
 v3 = call_func_ptr_param();
 __printf_chk(1, "PARAM-L3-01: %d\n", v3);
 v4 = call_double_ptr();
 __printf_chk(1, "PARAM-L3-02: %d\n", v4);
 v5 = call_complex_cast();
 __printf_chk(1, "PARAM-L3-03: %d\n", v5);
 v6 = call_struct_byval();
 __printf_chk(1, "PARAM-L3-04: %d\n", v6);
 __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x1B42 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x1B4A */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1B54 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x1B5D */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1B67 */
// local variable allocation has failed, the output may be wrong!
SmallPoint ret_small_struct(int x, int y)
{
 return (SmallPoint)((*(unsigned long long *)&y << 32) | (unsigned int)x);
}


/* Function: call_ret_small_struct @ 0x1B75 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1B7F */
LargeData * ret_large_struct(LargeData *retstr, int seed)
{
 LargeData *result; // rax
 LargeData *p_d; // rdx
 LargeData d; // [rsp+0h] [rbp-58h] BYREF
 char v5; // [rsp+40h] [rbp-18h] BYREF
 unsigned long long v6; // [rsp+48h] [rbp-10h]

 result = retstr;
 v6 = __readfsqword(0x28u);
 p_d = &d;
 do
 {
 p_d->data[0] = seed++;
 p_d = (LargeData *)((char *)p_d + 4);
 }
 while ( p_d != (LargeData *)&v5 );
 *(__m128i *)retstr->data = _mm_load_si128((const __m128i *)&d);
 *(__m128i *)&retstr->data[4] = _mm_load_si128((const __m128i *)&d.data[4]);
 *(__m128i *)&retstr->data[8] = _mm_load_si128((const __m128i *)&d.data[8]);
 *(__m128i *)&retstr->data[12] = _mm_load_si128((const __m128i *)&d.data[12]);
 return result;
}


/* Function: call_ret_large_struct @ 0x1BF0 */
int call_ret_large_struct()
{
 LargeData d; // [rsp+0h] [rbp-58h] BYREF
 unsigned long long v2; // [rsp+48h] [rbp-10h]

 v2 = __readfsqword(0x28u);
 ret_large_struct(&d, 100);
 return d.data[0] + d.data[15];
}


/* Function: ret_func_ptr @ 0x1C36 */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // rax

 result = func_b;
 if ( !selector )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1C4F */
int call_ret_func_ptr()
{
 return func_b(5);
}


/* Function: ret_opaque_handle @ 0x1C5E */
void * ret_opaque_handle(int type)
{
 void *result; // rax

 result = &handle1_1;
 if ( type )
 return &handle2_0;
 return result;
}


/* Function: call_ret_opaque @ 0x1C77 */
int call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x1C82 */
int ret_complex_expr(int x, int y, int z)
{
 int result; // eax
 int v4; // edx

 result = 2 * z;
 v4 = z + 10;
 if ( x <= y )
 return v4;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1C92 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1C9C */
int ret_multi_branch(int op)
{
 int result; // eax

 result = 20;
 if ( op != 1 )
 {
 result = 30;
 if ( op != 2 )
 return op == 0 ? 10 : -1;
 }
 return result;
}


/* Function: call_ret_multi_branch @ 0x1CC0 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1CCA */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x1CD4 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1CDE */
void test_return_values()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax

 puts(asc_22BD);
 __printf_chk(1, aRetL101D, 42);
 v0 = call_ret_pointer();
 __printf_chk(1, aRetL102D, v0);
 v1 = call_ret_small_struct();
 __printf_chk(1, aRetL103D, v1);
 v2 = call_ret_large_struct();
 __printf_chk(1, aRetL104D, v2);
 v3 = call_ret_func_ptr();
 __printf_chk(1, aRetL201D, v3);
 __printf_chk(1, aRetL202D, (unsigned int)handle1_1);
 __printf_chk(1, aRetL301D, 40);
 __printf_chk(1, aRetL302D, 60);
 __printf_chk(1, aRetL303D, 21);
}


/* Function: main @ 0x1E07 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: .term_proc @ 0x1E38 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4028 */

/* FAILED to decompile: puts @ 0x4030 */

/* FAILED to decompile: strlen @ 0x4038 */

/* FAILED to decompile: __stack_chk_fail @ 0x4040 */

/* FAILED to decompile: __printf_chk @ 0x4048 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4050 */

/* FAILED to decompile: __gmon_start__ @ 0x4060 */

/* Total functions decompiled: 83, failed: 7 */
