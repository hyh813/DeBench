/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/4/4_gcc_O2_g
 * Processor: pc
 */

#include <stdarg.h>

typedef struct {
    unsigned long long data[16];
} LargeStruct;

typedef struct {
    int x;
    int y;
} SmallStruct;

typedef struct {
    unsigned int data[16];
} BigStruct;

typedef struct {
    int x;
    int y;
} SmallPoint;

typedef int (*func_ptr_t)(int);

/* Stack canary intrinsic */
static inline unsigned int __readgsdword(unsigned int offset)
{
  unsigned int value;
  __asm__ volatile ("mov %%gs:%1, %0"
                    : "=r" (value)
                    : "m" (*(unsigned int *)offset));
  return value;
}

/* Global variables */
static int *handle1_1;
static int *handle2_0;
static const char asc_2008[] = "Testing calling conventions:";
static const char asc_202C[] = "VARARGS: %d\n";
static const char asc_2054[] = "NO-ARGS: %d\n";
static const char asc_2078[] = "MANY-ARGS: %d\n";
static const char asc_20A0[] = "MIXED-ARGS: %d\n";
static const char asc_20C8[] = "STRUCT-BYVAL: %d\n";
static const char asc_20F4[] = "STRUCT-BYPTR: %d\n";
static const char asc_2124[] = "Testing parameter passing:";
static const char asc_22BE[] = "RET-L1-01: %d\n";
static const char asc_22DA[] = "RET-L1-02: %d\n";
static const char asc_22F6[] = "RET-L2-01: %d\n";
static const char asc_2311[] = "RET-L2-02: %d\n";
static const char asc_232E[] = "RET-L3-01: %d\n";
static const char asc_234A[] = "RET-L3-02: %p\n";
static const char asc_2367[] = "RET-L3-03: %d\n";
static const char asc_2383[] = "RET-L3-04: %d\n";
static const char asc_239F[] = "RET-L3-05: %d\n";




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *8(%%ebx)" ::: "memory");
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
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
int sub_1090(int a1)
{
 return (*(int (**)(void))(a1 + 36))();
}


/* Function: main @ 0x10F0 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_113C @ 0x113C */
void sub_113C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1140 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1279 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x127D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: func_a @ 0x1290 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x12A0 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: cdecl_func @ 0x12B0 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x12C0 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x12D0 */
int stdcall_func(int a, int b)
{
 return a * b;
}


/* Function: call_stdcall @ 0x12E0 */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x12F0 */
int fastcall_func(int a, int b, int c)
{
 return c + a + b;
}


/* Function: call_fastcall @ 0x1300 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x1310 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1320 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return e + d + c + a + b;
}


/* Function: call_arm_aapcs @ 0x1340 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x1350 */
int mips_func(int a, int b, int c, int d)
{
 return d + c + a + b;
}


/* Function: call_mips @ 0x1370 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x1380 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return f + e + d + c + a + b;
}


/* Function: call_amd64_sysv @ 0x13A0 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x13B0 */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a1 + a2;
}


/* Function: call_ms_x64 @ 0x13D0 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x13E0 */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a1 + a2;
}


/* Function: call_vectorcall @ 0x1400 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x1410 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x1420 */
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


/* Function: func_no_args @ 0x1460 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1470 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + f + e + d + c + a + b;
}


/* Function: func_mixed_args @ 0x14A0 */
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


/* Function: func_struct_byval @ 0x1520 */
int func_struct_byval(LargeStruct s)
{
 long long v1; // rcx
 LargeStruct *p_s; // edx
 char v4; // [esp+88h] [ebp+84h] BYREF

 v1 = 0;
 p_s = &s;
 do
 {
 v1 += p_s->data[0];
 p_s = (LargeStruct *)((char *)p_s + 8);
 }
 while ( p_s != (LargeStruct *)&v4 );
 return v1;
}


/* Function: func_struct_byptr @ 0x1550 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x1570 */
void test_calling_conventions()
{
 int v0; // eax
 long long i; // rax
 unsigned int *v2; // eax
 long long v3; // kr08_8
 LargeStruct large; // [esp+14h] [ebp-110h] BYREF
 unsigned char v5[128]; // [esp+94h] [ebp-90h] BYREF
 unsigned int v6; // [esp+114h] [ebp-10h] BYREF

 v6 = __readgsdword(0x14u);
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
 v0 = varargs_func(5, 1, 2, 3, 4, 5);
 __printf_chk(1, asc_202C, v0);
 __printf_chk(1, asc_2054, 42);
 __printf_chk(1, asc_2078, 36);
 __printf_chk(1, asc_20A0, 117);
 for ( i = 1; i != 17; ++i )
 large.data[i - 1] = i;
 v2 = (unsigned int *)v5;
 memcpy(v5, &large, sizeof(v5));
 v3 = 0;
 do
 {
 v3 += *(unsigned long long *)v2;
 v2 += 2;
 }
 while ( &v6 != v2 );
 __printf_chk(1, asc_20C8, v3);
 __printf_chk(1, asc_20F4, 50);
}


/* Function: param_by_value_int @ 0x1770 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x1780 */
int call_by_value_int()
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
 return 4;
}


/* Function: call_array_decay @ 0x17C0 */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x17D0 */
int param_string(const char *str)
{
 return str[1] + *str;
}


/* Function: call_string_param @ 0x17F0 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x1800 */
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


/* Function: call_ptr_array @ 0x1840 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x1850 */
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


/* Function: call_varargs_param @ 0x1890 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x18B0 */
int param_func_ptr(int (*callback)(int), int x)
{
 return callback(x) + 10;
}


/* Function: call_func_ptr_param @ 0x18D0 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x18E0 */
int param_double_ptr(int **pp, int new_val)
{
 if ( !pp || !*pp )
 return -1;
 **pp = new_val;
 *pp = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x1910 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x1920 */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 return -1;
}


/* Function: call_complex_cast @ 0x1950 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1960 */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1970 */
long long call_struct_byval()
{
 int i; // eax
 long long result; // rax
 BigStruct s; // [esp+Ch] [ebp-50h]
 unsigned int v3; // [esp+4Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 for ( i = 0; i != 16; ++i )
 s.data[i] = i;
 result = (unsigned int)(s.data[0] + s.data[15]) | ((long long)(v3 - __readgsdword(0x14u)) << 32);
 return result;
}


/* Function: param_order_dep @ 0x19C0 */
int param_order_dep(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_order_dep @ 0x19D0 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x19E0 */
void test_parameter_passing()
{
 int v0; // eax
 int i; // eax
 unsigned int v2[20]; // [esp+1Ch] [ebp-50h]

 v2[16] = __readgsdword(0x14u);
 puts(asc_2124);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 4);
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


/* Function: ret_basic_type @ 0x1B40 */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0x1B50 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1B60 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x1B70 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1B80 */
SmallPoint * ret_small_struct(SmallPoint *retstr, int x, int y)
{
 SmallPoint *result; // eax

 result = retstr;
 retstr->x = x;
 retstr->y = y;
 return result;
}


/* Function: call_ret_small_struct @ 0x1BA0 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1BB0 */
LargeStruct *ret_large_struct(LargeStruct *retstr, int seed)
{
 int v2; // eax
 LargeStruct d; // [esp+Ch] [ebp-50h] BYREF
 unsigned int v5; // [esp+4Ch] [ebp-10h]

 v5 = __readgsdword(0x14u);
 v2 = seed;
 do
 {
 d.data[v2 - seed] = v2;
 ++v2;
 }
 while ( v2 != seed + 16 );
 *retstr = d;
 return retstr;
}


/* Function: call_ret_large_struct @ 0x1C70 */
long long call_ret_large_struct()
{
 int i; // eax
 long long result; // rax
 unsigned int v2[16]; // [esp+Ch] [ebp-50h] BYREF
 unsigned int v3; // [esp+4Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 for ( i = 100; i != 116; ++i )
 v2[i - 100] = i;
 result = (unsigned int)(v2[0] + v2[15]) | ((long long)(v3 - __readgsdword(0x14u)) << 32);
 return result;
}


/* Function: ret_func_ptr @ 0x1CC0 */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // eax

 result = func_b;
 if ( !selector )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1CF0 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1D00 */
void * ret_opaque_handle(int type)
{
 void *result; // eax

 result = &handle1_1;
 if ( type )
 return &handle2_0;
 return result;
}


/* Function: call_ret_opaque @ 0x1D30 */
int *call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x1D50 */
int ret_complex_expr(int x, int y, int z)
{
 int result; // eax

 result = z + 10;
 if ( x > y )
 return 2 * z;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1D70 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1D80 */
int ret_multi_branch(int op)
{
 int result; // eax

 result = -1;
 if ( (unsigned int)op <= 2 )
 return 2 * (5 * op + 5);
 return result;
}


/* Function: call_ret_multi_branch @ 0x1DA0 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1DB0 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x1DD0 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1DE0 */
void test_return_values()
{
 int v0; // eax

 puts(asc_2124);
 __printf_chk(1, asc_22BE, 42);
 __printf_chk(1, asc_22DA, 20);
 __printf_chk(1, asc_22F6, 7);
 v0 = call_ret_large_struct();
 __printf_chk(1, asc_2311, v0);
 __printf_chk(1, asc_232E, 10);
 __printf_chk(1, asc_234A, handle1_1);
 __printf_chk(1, asc_2367, 40);
 __printf_chk(1, asc_2383, 60);
 __printf_chk(1, asc_239F, 21);
}


/* Function: __x86.get_pc_thunk.ax @ 0x1EB7 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __stack_chk_fail_local @ 0x1EC0 */
void _stack_chk_fail_local()
{
 ;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __libc_start_main @ 0x5020 */

/* FAILED to decompile: __stack_chk_fail @ 0x5024 */

/* FAILED to decompile: __cxa_finalize @ 0x5028 */

/* FAILED to decompile: puts @ 0x502C */

/* FAILED to decompile: strlen @ 0x5030 */

/* FAILED to decompile: __printf_chk @ 0x5034 */

/* Total functions decompiled: 91, failed: 6 */
