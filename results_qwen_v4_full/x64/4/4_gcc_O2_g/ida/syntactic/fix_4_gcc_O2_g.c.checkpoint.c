/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/4/4_gcc_O2_g
 * Processor: pc
 */

#include <emmintrin.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

/* Type definitions */
typedef long long (*func_ptr_t)(int);

typedef struct {
 long long data[16];
} LargeStruct;

typedef struct {
 int data[16];
} LargeData;

typedef struct {
 int data[16];
} BigStruct;

typedef struct {
 int x;
 int y;
} SmallStruct;

typedef long long SmallPoint;

/* Global variables */
int handle1_1 = 42;
int handle2_0 = 43;
static const char *s = "test";
static const char *asc_2130 = "test";
static const char *asc_22AC = "test";
static const char *aCallL206 = "CALL-L2-06: %d\n";
static const char *aCallL207 = "CALL-L2-07: %d\n";
static const char *aCallL208 = "CALL-L2-08: %d\n";
static const char *aCallL209 = "CALL-L2-09: %d\n";
static const char *aCallL210 = "CALL-L2-10: %d\n";
static const char *aCallL211 = "CALL-L2-11: %d\n";
static const char *aRetL101D = "RET-L1-01: %d\n";
static const char *aRetL102D = "RET-L1-02: %d\n";
static const char *aRetL103D = "RET-L1-03: %d\n";
static const char *aRetL104D = "RET-L1-04: %d\n";
static const char *aRetL201D = "RET-L2-01: %d\n";
static const char *aRetL202D = "RET-L2-02: %d\n";
static const char *aRetL301D = "RET-L3-01: %d\n";
static const char *aRetL302D = "RET-L3-02: %d\n";
static const char *aRetL303D = "RET-L3-03: %d\n";

/* External functions */
extern int puts(const char *s);
extern int __printf_chk(int flag, const char *format, ...);
extern size_t strlen(const char *s);
unsigned long long __readfsqword(unsigned int offset)
{
 return 0;
}
extern __m128i _mm_load_si128(const __m128i *p);



















/* Function: main @ 0x10C0 */
int main(int argc, const char **argv, const char **envp)
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




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: func_a @ 0x11E0 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x11F0 */
long long func_b(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: cdecl_func @ 0x1200 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x1210 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x1220 */
int stdcall_func(int a, int b)
{
 return b * a;
}


/* Function: call_stdcall @ 0x1230 */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x1240 */
int fastcall_func(int a, int b, int c)
{
 return b + a + c;
}


/* Function: call_fastcall @ 0x1250 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x1260 */
long long call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1270 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return d + c + b + a + e;
}


/* Function: call_arm_aapcs @ 0x1280 */
long long call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x1290 */
int mips_func(int a, int b, int c, int d)
{
 return c + b + a + d;
}


/* Function: call_mips @ 0x12A0 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x12B0 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return e + d + c + b + a + f;
}


/* Function: call_amd64_sysv @ 0x12D0 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x12E0 */
long long ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return (unsigned int)(a4 + a3 + a2 + a1 + a5);
}


/* Function: call_ms_x64 @ 0x12F0 */
long long call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1300 */
long long vectorcall_func(int a1, int a2, int a3, int a4)
{
 return (unsigned int)(a3 + a2 + a1 + a4);
}


/* Function: call_vectorcall @ 0x1310 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x1320 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x1330 */
int varargs_func(int count, ...)
{
 long long v1; // rdx
 long long v2; // rcx
 long long v3; // rsi
 long long v4; // r8
 long long v5; // r9
 unsigned int v6; // ecx
 char *v7; // rsi
 int v8; // eax
 int v9; // r8d
 long long v10; // rdx
 char *v11; // rdx
 unsigned char v13[8]; // [rsp+20h] [rbp-38h]
 long long v14; // [rsp+28h] [rbp-30h]
 long long v15; // [rsp+30h] [rbp-28h]
 long long v16; // [rsp+38h] [rbp-20h]
 long long v17; // [rsp+40h] [rbp-18h]
 long long v18; // [rsp+48h] [rbp-10h]
 char v19; // [rsp+60h] [rbp+8h] BYREF

 v14 = v3;
 v15 = v1;
 v16 = v2;
 v17 = v4;
 v18 = v5;
 if ( count <= 0 )
 return 0;
 v6 = 8;
 v7 = &v19;
 v8 = 0;
 v9 = 0;
 do
 {
 while ( v6 <= 0x2F )
 {
 v10 = v6;
 ++v8;
 v6 += 8;
 v9 += *(unsigned int *)&v13[v10];
 if ( count == v8 )
 return v9;
 }
 v11 = v7;
 ++v8;
 v7 += 8;
 v9 += *(unsigned int *)v11;
 }
 while ( count != v8 );
 return v9;
}


/* Function: func_no_args @ 0x13F0 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1400 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + e + d + c + b + a + f;
}


/* Function: func_mixed_args @ 0x1420 */
long long func_mixed_args(int x, char *s, double d, long long ll)
{
 double v4; // xmm1_8
 int v5; // ebp
 int v6; // ebx

 v4 = d;
 v5 = ll;
 v6 = x;
 if ( s )
 {
 v4 = d;
 v6 = strlen(s) + x;
 }
 return (unsigned int)(int)((double)v6 + v4 + (double)v5);
}


/* Function: func_struct_byval @ 0x1480 */
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


/* Function: func_struct_byptr @ 0x14B0 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x14D0 */
void test_calling_conventions()
{
 unsigned int v0; // eax
 long long i; // rax
 __m128i si128; // xmm1
 long long v3; // rdx
 unsigned char *v4; // rax
 __m128i v5; // xmm2
 __m128i v6; // xmm3
 __m128i v7; // xmm4
 __m128i v8; // xmm5
 __m128i v9; // xmm6
 __m128i v10; // xmm7
 LargeStruct large; // [rsp+0h] [rbp-118h] BYREF
 __m128i v12[8]; // [rsp+80h] [rbp-98h] BYREF
 unsigned char v13[8]; // [rsp+100h] [rbp-18h] BYREF
 unsigned long long v14; // [rsp+108h] [rbp-10h]

 v14 = __readfsqword(0x28u);
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
 __printf_chk(1, aCallL209, 117);
 for ( i = 1; i != 17; ++i )
 large.data[i - 1] = i;
 si128 = _mm_load_si128((const __m128i *)&large.data[2]);
 v3 = 0;
 v4 = v12;
 v5 = _mm_load_si128((const __m128i *)&large.data[4]);
 v6 = _mm_load_si128((const __m128i *)&large.data[6]);
 v7 = _mm_load_si128((const __m128i *)&large.data[8]);
 v8 = _mm_load_si128((const __m128i *)&large.data[10]);
 v12[0] = _mm_load_si128((const __m128i *)&large);
 v9 = _mm_load_si128((const __m128i *)&large.data[12]);
 v10 = _mm_load_si128((const __m128i *)&large.data[14]);
 v12[1] = si128;
 v12[2] = v5;
 v12[3] = v6;
 v12[4] = v7;
 v12[5] = v8;
 v12[6] = v9;
 v12[7] = v10;
 do
 {
 v3 += *(unsigned long long *)v4;
 v4 += 8;
 }
 while ( v13 != v4 );
 __printf_chk(1, aCallL210, v3, v13);
 __printf_chk(1, aCallL211, 50);
}


/* Function: param_by_value_int @ 0x1770 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x1780 */
long long call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x1790 */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x17A0 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x17B0 */
int param_array_decay(int *arr, int n)
{
 return 8;
}


/* Function: call_array_decay @ 0x17C0 */
int call_array_decay()
{
 return 8;
}


/* Function: param_string @ 0x17D0 */
int param_string(const char *str)
{
 return str[1] + *str;
}


/* Function: call_string_param @ 0x17E0 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x17F0 */
int param_ptr_array(char **arr, int n)
{
 char **v2; // rcx
 int result; // eax
 char *v4; // rdx

 if ( n <= 0 )
 return 0;
 v2 = &arr[(unsigned int)(n - 1) + 1];
 result = 0;
 do
 {
 v4 = *arr++;
 result += *v4;
 }
 while ( arr != v2 );
 return result;
}


/* Function: call_ptr_array @ 0x1830 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x1840 */
int param_varargs(int count, ...)
{
 long long v1; // rdx
 long long v2; // rcx
 long long v3; // rsi
 long long v4; // r8
 long long v5; // r9
 unsigned int v6; // ecx
 char *v7; // rsi
 int v8; // eax
 int v9; // r8d
 long long v10; // rdx
 char *v11; // rdx
 unsigned char v13[8]; // [rsp+20h] [rbp-38h]
 long long v14; // [rsp+28h] [rbp-30h]
 long long v15; // [rsp+30h] [rbp-28h]
 long long v16; // [rsp+38h] [rbp-20h]
 long long v17; // [rsp+40h] [rbp-18h]
 long long v18; // [rsp+48h] [rbp-10h]
 char v19; // [rsp+60h] [rbp+8h] BYREF

 v14 = v3;
 v15 = v1;
 v16 = v2;
 v17 = v4;
 v18 = v5;
 if ( count <= 0 )
 return 0;
 v6 = 8;
 v7 = &v19;
 v8 = 0;
 v9 = 0;
 do
 {
 while ( v6 <= 0x2F )
 {
 v10 = v6;
 ++v8;
 v6 += 8;
 v9 += *(unsigned int *)&v13[v10];
 if ( count == v8 )
 return v9;
 }
 v11 = v7;
 ++v8;
 v7 += 8;
 v9 += *(unsigned int *)v11;
 }
 while ( count != v8 );
 return v9;
}


/* Function: call_varargs_param @ 0x1900 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1930 */
int param_func_ptr(int (*callback)(int), int x)
{
 return ((long long ( *)(unsigned long long))callback)((unsigned int)x) + 10;
}


/* Function: call_func_ptr_param @ 0x1950 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x1960 */
int param_double_ptr(int **pp, int new_val)
{
 int result; // eax

 if ( !pp || !*pp )
 return -1;
 **pp = new_val;
 result = 1;
 *pp = 0;
 return result;
}


/* Function: call_double_ptr @ 0x1990 */
long long call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x19A0 */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 return -1;
}


/* Function: call_complex_cast @ 0x19D0 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x19E0 */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x19F0 */
int call_struct_byval()
{
 long long i; // rax
 BigStruct s; // [rsp+0h] [rbp-58h]
 unsigned long long v3; // [rsp+48h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 for ( i = 0; i != 16; ++i )
 s.data[i] = i;
 return s.data[0] + s.data[15];
}


/* Function: param_order_dep @ 0x1A40 */
long long param_order_dep(int a1, int a2)
{
 return (unsigned int)(a1 + a2);
}


/* Function: call_order_dep @ 0x1A50 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x1A60 */
void test_parameter_passing()
{
 int v0; // eax
 long long i; // rax
 unsigned int v2[18]; // [rsp+0h] [rbp-58h]
 unsigned long long v3; // [rsp+48h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 puts(asc_2130);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 8);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 __printf_chk(1, "PARAM-L2-03: %d\n", 300);
 v0 = param_varargs(4, 10, 20, 30, 40);
 __printf_chk(1, "PARAM-L2-04: %d\n", v0);
 __printf_chk(1, "PARAM-L3-01: %d\n", 20);
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 for ( i = 0; i != 16; ++i )
 v2[i] = i;
 __printf_chk(1, "PARAM-L3-04: %d\n", v2[0] + v2[15]);
 __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x1BE0 */
long long ret_basic_type(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_ret_basic @ 0x1BF0 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1C00 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x1C10 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1C20 */
// local variable allocation has failed, the output may be wrong!
SmallPoint ret_small_struct(int x, int y)
{
 return (SmallPoint)((*(unsigned long long *)&y << 32) | (unsigned int)x);
}


/* Function: call_ret_small_struct @ 0x1C30 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1C40 */
LargeData * ret_large_struct(LargeData *retstr, int seed)
{
 LargeData *result; // rax
 LargeData *p_d; // rdx
 __m128i si128; // xmm1
 __m128i v5; // xmm2
 __m128i v6; // xmm3
 LargeData d; // [rsp+0h] [rbp-58h] BYREF
 char v8; // [rsp+40h] [rbp-18h] BYREF
 unsigned long long v9; // [rsp+48h] [rbp-10h]

 result = retstr;
 v9 = __readfsqword(0x28u);
 p_d = &d;
 do
 {
 p_d->data[0] = seed;
 p_d = (LargeData *)((char *)p_d + 4);
 ++seed;
 }
 while ( p_d != (LargeData *)&v8 );
 si128 = _mm_load_si128((const __m128i *)&d.data[4]);
 v5 = _mm_load_si128((const __m128i *)&d.data[8]);
 v6 = _mm_load_si128((const __m128i *)&d.data[12]);
 *(__m128i *)retstr->data = _mm_load_si128((const __m128i *)&d);
 *(__m128i *)&retstr->data[4] = si128;
 *(__m128i *)&retstr->data[8] = v5;
 *(__m128i *)&retstr->data[12] = v6;
 return result;
}


/* Function: call_ret_large_struct @ 0x1CC0 */
int call_ret_large_struct()
{
 int v0; // edx
 LargeData *p_d; // rax
 LargeData d; // [rsp+0h] [rbp-58h] BYREF
 char v4; // [rsp+40h] [rbp-18h] BYREF
 unsigned long long v5; // [rsp+48h] [rbp-10h]

 v0 = 100;
 v5 = __readfsqword(0x28u);
 p_d = &d;
 do
 {
 p_d->data[0] = v0;
 p_d = (LargeData *)((char *)p_d + 4);
 ++v0;
 }
 while ( p_d != (LargeData *)&v4 );
 return d.data[0] + d.data[15];
}


/* Function: ret_func_ptr @ 0x1D20 */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // rax

 result = (func_ptr_t)func_b;
 if ( !selector )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1D40 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1D50 */
void * ret_opaque_handle(int type)
{
 void *result; // rax

 result = &handle1_1;
 if ( type )
 return &handle2_0;
 return result;
}


/* Function: call_ret_opaque @ 0x1D70 */
int call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x1D80 */
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


/* Function: call_ret_complex_expr @ 0x1D90 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1DA0 */
int ret_multi_branch(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op <= 2 )
 return 2 * (5 * op + 5);
 return result;
}


/* Function: call_ret_multi_branch @ 0x1DC0 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1DD0 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x1DE0 */
long long call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1DF0 */
void test_return_values()
{
 unsigned int v0; // eax

 puts(asc_22AC);
 __printf_chk(1, aRetL101D, 42);
 __printf_chk(1, aRetL102D, 20);
 __printf_chk(1, aRetL103D, 7);
 v0 = call_ret_large_struct();
 __printf_chk(1, aRetL104D, v0);
 __printf_chk(1, aRetL201D, 10);
 __printf_chk(1, aRetL202D, (unsigned int)handle1_1);
 __printf_chk(1, aRetL301D, 40);
 __printf_chk(1, aRetL302D, 60);
 __printf_chk(1, aRetL303D, 21);
}


/* Function: .term_proc @ 0x1EE8 */
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

/* Total functions decompiled: 82, failed: 7 */
