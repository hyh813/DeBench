/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/4/4_gcc_O3_g
 * Processor: pc
 */

#include <stdarg.h>

/* External weak symbol from CRT */
extern void *_gmon_start__ __attribute__((weak));

/* LODWORD macro for extracting low 32 bits */
#define LODWORD(x) ((int)(x))

/* CRT stub function declarations */
extern void frame_dummy(void) __attribute__((weak));
extern int _do_global_ctors_aux(void) __attribute__((weak));
extern void _do_global_dtors_aux(void) __attribute__((weak));

/* External string constants */
static char asc_2008[] = "Testing calling conventions";
static char asc_2124[] = "Testing parameter passing";
static char asc_22A0[] = "Testing return values";
static char unk_202C[] = "VARARGS-01: %d\n";
static char unk_2054[] = "VARARGS-02: %d\n";
static char unk_2078[] = "VARARGS-03: %d\n";
static char unk_20A0[] = "VARARGS-04: %d\n";
static char unk_20C8[] = "VARARGS-05: %d\n";
static char unk_20F4[] = "CALL-L1-11: %d\n";
static char unk_22BE[] = "RET-L1-01: %d\n";
static char unk_22DA[] = "RET-L1-02: %d\n";
static char unk_22F6[] = "RET-L1-03: %d\n";
static char unk_2311[] = "RET-L1-04: %d\n";
static char unk_232E[] = "RET-L1-05: %d\n";
static char unk_234A[] = "RET-L1-06: %d\n";
static char unk_2367[] = "RET-L1-07: %d\n";
static char unk_2383[] = "RET-L1-08: %d\n";
static char unk_239F[] = "RET-L1-09: %d\n";

/* External handle variables */
static int handle1_1 = 42;
static int handle2_0 = 100;

/* Type definitions */
typedef int (*func_ptr_t)(int);

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

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 return;
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
int sub_1080(int a1)
{
 return (*(int (**)(void))(a1 + 32))();
}


/* Function: main @ 0x10D0 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_111C @ 0x111C */
void sub_111C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1120 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1259 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x125D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: func_a @ 0x1270 */
int func_a(int x)
{
 return x + 10;
}


/* Function: param_varargs_0 @ 0x1280 */
int param_varargs_0(int count, ...)
{
 int v2; // [esp+8h] [ebp+8h]
 int v3; // [esp+Ch] [ebp+Ch]
 int v4; // [esp+10h] [ebp+10h]
 int v5; // [esp+14h] [ebp+14h]
 va_list va; // [esp+18h] [ebp+18h] BYREF

 va_start(va, count);
 v2 = va_arg(va, unsigned int);
 v3 = va_arg(va, unsigned int);
 v4 = va_arg(va, unsigned int);
 v5 = va_arg(va, unsigned int);
 return v5 + v4 + v2 + v3;
}


/* Function: varargs_func_0 @ 0x12A0 */
int varargs_func_0(int count, ...)
{
 int v2; // [esp+8h] [ebp+8h]
 int v3; // [esp+Ch] [ebp+Ch]
 int v4; // [esp+10h] [ebp+10h]
 int v5; // [esp+14h] [ebp+14h]
 int v6; // [esp+18h] [ebp+18h]
 va_list va; // [esp+1Ch] [ebp+1Ch] BYREF

 va_start(va, count);
 v2 = va_arg(va, unsigned int);
 v3 = va_arg(va, unsigned int);
 v4 = va_arg(va, unsigned int);
 v5 = va_arg(va, unsigned int);
 v6 = va_arg(va, unsigned int);
 return v6 + v5 + v4 + v2 + v3;
}


/* Function: func_b @ 0x12C0 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: cdecl_func @ 0x12D0 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x12E0 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x12F0 */
int stdcall_func(int a, int b)
{
 return a * b;
}


/* Function: call_stdcall @ 0x1300 */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x1310 */
int fastcall_func(int a, int b, int c)
{
 return c + a + b;
}


/* Function: call_fastcall @ 0x1320 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x1330 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1340 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return e + d + c + a + b;
}


/* Function: call_arm_aapcs @ 0x1360 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x1370 */
int mips_func(int a, int b, int c, int d)
{
 return d + c + a + b;
}


/* Function: call_mips @ 0x1390 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x13A0 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return f + e + d + c + a + b;
}


/* Function: call_amd64_sysv @ 0x13C0 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x13D0 */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a1 + a2;
}


/* Function: call_ms_x64 @ 0x13F0 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1400 */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a1 + a2;
}


/* Function: call_vectorcall @ 0x1420 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x1430 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x1440 */
int varargs_func(int count, ...)
{
 int v1; // eax
 int v2; // edx
 va_list va; // [esp+Ch] [ebp+8h]

 va_start(va, count);
 if ( count <= 0 )
 return 0;
 v1 = 0;
 v2 = 0;
 do
 v2 += *((unsigned int *)va + v1++);
 while ( count != v1 );
 return v2;
}


/* Function: func_no_args @ 0x1480 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1490 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + f + e + d + c + a + b;
}


/* Function: func_mixed_args @ 0x14C0 */
int func_mixed_args(int x, char *s, double d, long long ll)
{
 long double v4; // fst7

 v4 = d;
 if ( s )
 {
 v4 = d;
 x += strlen(s);
 }
 return (int)(v4 + (long double)x + (long double)ll);
}


/* Function: func_struct_byval @ 0x1540 */
int func_struct_byval(LargeStruct s)
{
 return LODWORD(s.data[15])
 + LODWORD(s.data[14])
 + LODWORD(s.data[13])
 + LODWORD(s.data[12])
 + LODWORD(s.data[11])
 + LODWORD(s.data[10])
 + LODWORD(s.data[9])
 + LODWORD(s.data[8])
 + LODWORD(s.data[7])
 + LODWORD(s.data[6])
 + LODWORD(s.data[5])
 + LODWORD(s.data[4])
 + LODWORD(s.data[3])
 + LODWORD(s.data[2])
 + LODWORD(s.data[0])
 + LODWORD(s.data[1]);
}


/* Function: func_struct_byptr @ 0x1590 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x15B0 */
void test_calling_conventions()
{
 int v0; // eax

 puts(asc_2008);
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
 v0 = varargs_func_0(5, 1, 2, 3, 4, 5);
 __printf_chk(1, &unk_202C, v0);
 __printf_chk(1, &unk_2054, 42);
 __printf_chk(1, &unk_2078, 36);
 __printf_chk(1, &unk_20A0, 117);
 __printf_chk(1, &unk_20C8, 136);
 __printf_chk(1, &unk_20F4, 50);
}


/* Function: param_by_value_int @ 0x1720 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x1730 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x1740 */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x1750 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x1760 */
int param_array_decay(int *arr, int n)
{
 return 4;
}


/* Function: call_array_decay @ 0x1770 */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x1780 */
int param_string(const char *str)
{
 return str[1] + *str;
}


/* Function: call_string_param @ 0x17A0 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x17B0 */
int param_ptr_array(char **arr, int n)
{
 char **v2; // eax
 int v3; // edx
 char *v4; // ecx

 if ( n <= 0 )
 return 0;
 v2 = arr;
 v3 = 0;
 do
 {
 v4 = *v2++;
 v3 += *v4;
 }
 while ( &arr[n] != v2 );
 return v3;
}


/* Function: call_ptr_array @ 0x17F0 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x1800 */
int param_varargs(int count, ...)
{
 int v1; // eax
 int v2; // edx
 va_list va; // [esp+Ch] [ebp+8h]

 va_start(va, count);
 if ( count <= 0 )
 return 0;
 v1 = 0;
 v2 = 0;
 do
 v2 += *((unsigned int *)va + v1++);
 while ( count != v1 );
 return v2;
}


/* Function: call_varargs_param @ 0x1840 */
int call_varargs_param()
{
 return param_varargs_0(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1860 */
int param_func_ptr(int (*callback)(int), int x)
{
 return callback(x) + 10;
}


/* Function: call_func_ptr_param @ 0x1880 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x1890 */
int param_double_ptr(int **pp, int new_val)
{
 if ( !pp || !*pp )
 return -1;
 **pp = new_val;
 *pp = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x18C0 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x18D0 */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 return -1;
}


/* Function: call_complex_cast @ 0x1900 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1910 */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1920 */
int call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x1930 */
int param_order_dep(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_order_dep @ 0x1940 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x1950 */
void test_parameter_passing()
{
 int v0; // eax

 puts(asc_2124);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 4);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 __printf_chk(1, "PARAM-L2-03: %d\n", 300);
 v0 = param_varargs_0(4, 10, 20, 30, 40);
 __printf_chk(1, "PARAM-L2-04: %d\n", v0);
 __printf_chk(1, "PARAM-L3-01: %d\n", 20);
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 __printf_chk(1, "PARAM-L3-04: %d\n", 15);
 __printf_chk(1, "PARAM-L3-05: %d\n", 4);
}


/* Function: ret_basic_type @ 0x1A70 */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0x1A80 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1A90 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x1AA0 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1AB0 */
SmallPoint * ret_small_struct(SmallPoint *retstr, int x, int y)
{
 SmallPoint *result; // eax

 result = retstr;
 retstr->x = x;
 retstr->y = y;
 return result;
}


/* Function: call_ret_small_struct @ 0x1AD0 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1AE0 */
LargeData *ret_large_struct(LargeData *retstr, int seed)
{
 LargeData *result; // eax

 retstr->data[0] = seed;
 retstr->data[1] = seed + 1;
 retstr->data[2] = seed + 2;
 retstr->data[3] = seed + 3;
 retstr->data[4] = seed + 4;
 retstr->data[5] = seed + 5;
 retstr->data[6] = seed + 6;
 retstr->data[7] = seed + 7;
 retstr->data[8] = seed + 8;
 retstr->data[9] = seed + 9;
 retstr->data[10] = seed + 10;
 retstr->data[11] = seed + 11;
 retstr->data[12] = seed + 12;
 retstr->data[13] = seed + 13;
 retstr->data[15] = seed + 15;
 result = retstr;
 retstr->data[14] = seed + 14;
 return result;
}


/* Function: call_ret_large_struct @ 0x1B50 */
int call_ret_large_struct()
{
 return 215;
}


/* Function: ret_func_ptr @ 0x1B60 */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // eax

 result = func_b;
 if ( !selector )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1B90 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1BA0 */
void * ret_opaque_handle(int type)
{
 void *result; // eax

 result = &handle1_1;
 if ( type )
 return &handle2_0;
 return result;
}


/* Function: call_ret_opaque @ 0x1BD0 */
int *call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x1BF0 */
int ret_complex_expr(int x, int y, int z)
{
 int result; // eax

 result = z + 10;
 if ( x > y )
 return 2 * z;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1C10 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1C20 */
int ret_multi_branch(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op <= 2 )
 return 2 * (5 * op + 5);
 return result;
}


/* Function: call_ret_multi_branch @ 0x1C40 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1C50 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x1C70 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1C80 */
void test_return_values()
{
 puts(asc_22A0);
 __printf_chk(1, &unk_22BE, 42);
 __printf_chk(1, &unk_22DA, 20);
 __printf_chk(1, &unk_22F6, 7);
 __printf_chk(1, &unk_2311, 215);
 __printf_chk(1, &unk_232E, 10);
 __printf_chk(1, &unk_234A, handle1_1);
 __printf_chk(1, &unk_2367, 40);
 __printf_chk(1, &unk_2383, 60);
 __printf_chk(1, &unk_239F, 21);
}


/* Function: __x86.get_pc_thunk.ax @ 0x1D56 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1DAC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x4020 */

/* FAILED to decompile: __cxa_finalize @ 0x4024 */

/* FAILED to decompile: puts @ 0x4028 */

/* FAILED to decompile: strlen @ 0x402C */

/* FAILED to decompile: __printf_chk @ 0x4030 */

/* Total functions decompiled: 91, failed: 5 */
