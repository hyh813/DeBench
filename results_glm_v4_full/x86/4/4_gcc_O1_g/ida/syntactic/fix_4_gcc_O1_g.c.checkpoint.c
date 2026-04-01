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

#include <stdarg.h>

/* Stack canary intrinsic for stack protection */
static inline unsigned int __readgsdword(unsigned int offset)
{
    unsigned int result;
    __asm__ volatile ("mov %%gs:%1, %0" : "=r" (result) : "m" (*(unsigned int *)(offset)));
    return result;
}

/* Custom type definitions */
typedef int (*func_ptr_t)(int);

typedef struct _UNKNOWN {
    char data[1];
} _UNKNOWN;

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

int handle1_1;
int handle2_0;

/* String constants */
const char asc_2008[] = "=== Testing Calling Conventions ===\n";
const char unk_202C[] = "CALL-L1-11: %d\n";
const char unk_2054[] = "CALL-L1-12: %d\n";
const char unk_2078[] = "CALL-L1-13: %d\n";
const char unk_20A0[] = "CALL-L1-14: %d\n";
const char unk_20C8[] = "CALL-L1-15: %d\n";
const char unk_20F4[] = "CALL-L1-16: %d\n";

const char asc_2124[] = "=== Testing Parameter Passing ===\n";
const char asc_22AC[] = "=== Testing Return Values ===\n";
const char unk_22CA[] = "RET-L1-01: %d\n";
const char unk_22E6[] = "RET-L1-02: %d\n";
const char unk_2302[] = "RET-L1-03: %d\n";
const char unk_231D[] = "RET-L1-04: %d\n";
const char unk_233A[] = "RET-L1-05: %d\n";
const char unk_2356[] = "RET-L1-06: %d\n";
const char unk_2373[] = "RET-L1-07: %d\n";
const char unk_238F[] = "RET-L1-08: %d\n";
const char unk_23AB[] = "RET-L1-09: %d\n";



/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/4/4_gcc_O1_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *%0" : : "m"(*(void **)(0)));
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


/* Function: callback_func @ 0x1261 */
int callback_func(int x)
{
 return 2 * x;
}


/* Function: func_a @ 0x126C */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x1278 */
int func_b(int x)
{
 return 2 * x;
}


/* Function: cdecl_func @ 0x1283 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x1290 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x129A */
int stdcall_func(int a, int b)
{
 return a * b;
}


/* Function: call_stdcall @ 0x12AA */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x12B4 */
int fastcall_func(int a, int b, int c)
{
 return c + a + b;
}


/* Function: call_fastcall @ 0x12C2 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x12CC */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x12D6 */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return e + d + c + a + b;
}


/* Function: call_arm_aapcs @ 0x12EF */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x12F9 */
int mips_func(int a, int b, int c, int d)
{
 return d + c + a + b;
}


/* Function: call_mips @ 0x130E */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x1318 */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return f + e + d + c + a + b;
}


/* Function: call_amd64_sysv @ 0x1335 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x133F */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return e + d + c + a + b;
}


/* Function: call_ms_x64 @ 0x1358 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1362 */
int vectorcall_func(int a, int b, int c, int d)
{
 return d + c + a + b;
}


/* Function: call_vectorcall @ 0x1377 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x1381 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x138B */
int varargs_func(int count, ...)
{
 int v2; // edx
 int v3; // ecx
 unsigned int v4; // ebx
 va_list va; // [esp+10h] [ebp+8h] BYREF

 va_start(va, count);
 if ( count <= 0 )
 return 0;
 v2 = 0;
 v3 = 0;
 do
 {
 v4 = va_arg(va, unsigned int);
 v3 += v4;
 ++v2;
 }
 while ( count != v2 );
 return v3;
}


/* Function: func_no_args @ 0x13C1 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x13CB */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + f + e + d + c + a + b;
}


/* Function: func_mixed_args @ 0x13F0 */
int func_mixed_args(int x, char *s, double d, long long ll)
{
 size_t v4; // eax

 v4 = 0;
 if ( s )
 v4 = strlen(s);
 return (int)((long double)(int)(x + v4) + d + (long double)ll);
}


/* Function: func_struct_byval @ 0x146E */
int func_struct_byval(LargeStruct s)
{
 LargeStruct *p_s; // edx
 long long v2; // rcx
 char v4; // [esp+88h] [ebp+84h] BYREF

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


/* Function: func_struct_byptr @ 0x1498 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->y * p->x;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x14B1 */
void test_calling_conventions()
{
 int v0; // eax
 long long i; // rax
 unsigned int *v2; // eax
 long long v3; // kr00_8
 LargeStruct large; // [esp+18h] [ebp-110h] BYREF
 unsigned char v5[128]; // [esp+98h] [ebp-90h] BYREF
 unsigned int v6; // [esp+118h] [ebp-10h] BYREF

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
 __printf_chk(1, &unk_202C, v0);
 __printf_chk(1, &unk_2054, 42);
 __printf_chk(1, &unk_2078, 36);
 __printf_chk(1, &unk_20A0, 117);
 for ( i = 1; i != 17; ++i )
 large.data[i - 1] = i;
 memcpy(v5, &large, sizeof(v5));
 v2 = (unsigned int *)v5;
 v3 = 0;
 do
 {
 v3 += *(unsigned long long *)v2;
 v2 += 2;
 }
 while ( &v6 != v2 );
 __printf_chk(1, &unk_20C8, v3);
 __printf_chk(1, &unk_20F4, 50);
}


/* Function: param_by_value_int @ 0x16AF */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x16BA */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x16C4 */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x16D4 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x16DE */
int param_array_decay(int *arr, int n)
{
 return 4;
}


/* Function: call_array_decay @ 0x16E8 */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x16F2 */
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
 char **v2; // eax
 int v3; // edx

 if ( n <= 0 )
 return 0;
 v2 = arr;
 v3 = 0;
 do
 v3 += **v2++;
 while ( v2 != &arr[n] );
 return v3;
}


/* Function: call_ptr_array @ 0x1742 */
int call_ptr_array()
{
 char *strs[3]; // [esp+0h] [ebp-1Ch] BYREF
 unsigned int v2; // [esp+Ch] [ebp-10h]

 v2 = __readgsdword(0x14u);
 strs[0] = "abc";
 strs[1] = "def";
 strs[2] = "ghi";
 return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x17A2 */
int param_varargs(int count, ...)
{
 int v2; // edx
 int v3; // ecx
 unsigned int v4; // ebx
 va_list va; // [esp+10h] [ebp+8h] BYREF

 va_start(va, count);
 if ( count <= 0 )
 return 0;
 v2 = 0;
 v3 = 0;
 do
 {
 v4 = va_arg(va, unsigned int);
 v3 += v4;
 ++v2;
 }
 while ( count != v2 );
 return v3;
}


/* Function: call_varargs_param @ 0x17D8 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x17EF */
int param_func_ptr(int (*callback)(int), int x)
{
 return callback(x) + 10;
}


/* Function: call_func_ptr_param @ 0x1805 */
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


/* Function: param_double_ptr @ 0x1828 */
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


/* Function: call_double_ptr @ 0x1858 */
long long call_double_ptr()
{
 long long result; // rax
 int val; // [esp+4h] [ebp-18h] BYREF
 int *ptr; // [esp+8h] [ebp-14h] BYREF
 unsigned int v3; // [esp+Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 val = 10;
 ptr = &val;
 param_double_ptr(&ptr, 20);
 result = (long long)(unsigned int)(val + (ptr == 0)) | ((long long)(v3 - __readgsdword(0x14u)) << 32);
 return result;
}


/* Function: param_complex_cast @ 0x18AF */
int param_complex_cast(void *p, int type)
{
 if ( !type )
 return *(unsigned int *)p;
 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 return -1;
}


/* Function: call_complex_cast @ 0x18D3 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x18DD */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x18EA */
long long call_struct_byval()
{
 int i; // eax
 long long result; // rax
 BigStruct s; // [esp+Ch] [ebp-50h]
 unsigned int v3; // [esp+4Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 for ( i = 0; i != 16; ++i )
 s.data[i] = i;
 result = ((unsigned long long)(unsigned int)(s.data[15] + s.data[0])) |
          (((unsigned long long)(unsigned int)(v3 - __readgsdword(0x14u))) << 32);
 return result;
}


/* Function: param_order_dep @ 0x1927 */
int param_order_dep(int a, int b)
{
 return a + b;
}


/* Function: call_order_dep @ 0x1934 */
int call_order_dep()
{
 return 4;
}


/* Function: test_parameter_passing @ 0x193E */
void test_parameter_passing()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax

 puts(asc_2124);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 v0 = call_by_value_ptr();
 __printf_chk(1, "PARAM-L1-02: %d\n", v0);
 __printf_chk(1, "PARAM-L2-01: %d\n", 4);
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


/* Function: ret_basic_type @ 0x1A52 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x1A5D */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1A67 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x1A73 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1A7D */
SmallPoint * ret_small_struct(SmallPoint *retstr, int x, int y)
{
 SmallPoint *result; // eax

 result = retstr;
 retstr->x = x;
 retstr->y = y;
 return result;
}


/* Function: call_ret_small_struct @ 0x1A95 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1A9F */
LargeData *ret_large_struct(LargeData *retstr, int seed)
{
 int v2; // eax
 LargeData d; // [esp+Ch] [ebp-50h] BYREF
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


/* Function: call_ret_large_struct @ 0x1B5A */
long long call_ret_large_struct()
{
 long long result; // rax
 LargeData d; // [esp+Ch] [ebp-50h] BYREF
 unsigned int v2; // [esp+4Ch] [ebp-10h]

 v2 = __readgsdword(0x14u);
 ret_large_struct(&d, 100);
 result = (unsigned int)(d.data[0] + d.data[15]) & 0xFFFFFFFF;
 return result;
}


/* Function: ret_func_ptr @ 0x1B9D */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // eax

 result = func_b;
 if ( !selector )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1BC0 */
int call_ret_func_ptr()
{
 return func_b(5);
}


/* Function: ret_opaque_handle @ 0x1BCF */
void * ret_opaque_handle(int type)
{
 void *result; // eax

 result = &handle1_1;
 if ( type )
 return &handle2_0;
 return result;
}


/* Function: call_ret_opaque @ 0x1BF2 */
int *call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x1C07 */
int ret_complex_expr(int x, int y, int z)
{
 int result; // eax

 result = z + 10;
 if ( x > y )
 return 2 * z;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1C21 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1C2B */
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


/* Function: call_ret_multi_branch @ 0x1C53 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1C5D */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x1C6F */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1C79 */
void test_return_values()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax

 puts(asc_22AC);
 __printf_chk(1, &unk_22CA, 42);
 v0 = call_ret_pointer();
 __printf_chk(1, &unk_22E6, v0);
 v1 = call_ret_small_struct();
 __printf_chk(1, &unk_2302, v1);
 v2 = call_ret_large_struct();
 __printf_chk(1, &unk_231D, v2);
 v3 = call_ret_func_ptr();
 __printf_chk(1, &unk_233A, v3);
 __printf_chk(1, &unk_2356, handle1_1);
 __printf_chk(1, &unk_2373, 40);
 __printf_chk(1, &unk_238F, 60);
 __printf_chk(1, &unk_23AB, 21);
}


/* Function: main @ 0x1D5C */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x1D7C */
void *_x86_get_pc_thunk_ax()
{
 _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __stack_chk_fail_local @ 0x1D80 */
void _stack_chk_fail_local()
{
 __asm__ volatile("addl $_GLOBAL_OFFSET_TABLE_ - (.-2), %%ebx" : : : "ebx");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __libc_start_main @ 0x5020 */

/* FAILED to decompile: __stack_chk_fail @ 0x5024 */

/* FAILED to decompile: __cxa_finalize @ 0x5028 */

/* FAILED to decompile: puts @ 0x502C */

/* FAILED to decompile: strlen @ 0x5030 */

/* FAILED to decompile: __printf_chk @ 0x5034 */

/* Total functions decompiled: 92, failed: 6 */
