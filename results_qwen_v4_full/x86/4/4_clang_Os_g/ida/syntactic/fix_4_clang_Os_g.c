/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

typedef unsigned char uint8_t;

/* Forward declarations for external symbols */
extern void *_gmon_start__;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Missing type definitions */
typedef int (*func_ptr_t)(int);

typedef struct {
    unsigned int data[16];
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

typedef struct {
    unsigned int data[16];
} LargeData;

/* Missing global variables */
extern char asc_2352[];
extern char asc_2373[];
extern char asc_2394[];
extern char aCallL206[];
extern char aCallL207[];
extern char aCallL208[];
extern char aCallL209[];
extern char aCallL210[];
extern char aCallL211[];
extern char aRetL101D[];
extern char aRetL102D[];
extern char aRetL103D[];
extern char aRetL104D[];
extern char aRetL201D[];
extern char aRetL202D[];
extern char aRetL301D[];
extern char aRetL302D[];
extern char aRetL303D[];
extern int ret_opaque_handle_handle1[];
extern int ret_opaque_handle_handle2[];
extern int dword_64;
extern int dword_74;
extern char loc_18E5;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/4/4_clang_Os_g
 * Processor: pc
 */

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
 __asm__ volatile ("jmp dword ptr [ebx+8]");
}


/* Function: sub_1080 @ 0x1080 */
int sub_1080(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_10BC @ 0x10BC */
void sub_10BC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x10C0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x11F9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x11FD */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: cdecl_func @ 0x1204 */
int cdecl_func(int a, int b)
{
 return a + b;
}


/* Function: call_cdecl @ 0x120D */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x1213 */
int stdcall_func(int a, int b)
{
 return a * b;
}


/* Function: call_stdcall @ 0x121F */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x1225 */
int fastcall_func(int a, int b, int c)
{
 return c + a + b;
}


/* Function: call_fastcall @ 0x122F */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x1235 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x123B */
int arm_aapcs_func(int a, int b, int c, int d, int e)
{
 return e + d + c + a + b;
}


/* Function: call_arm_aapcs @ 0x1250 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x1256 */
int mips_func(int a, int b, int c, int d)
{
 return d + c + a + b;
}


/* Function: call_mips @ 0x1267 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x126D */
int amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
 return f + e + d + c + a + b;
}


/* Function: call_amd64_sysv @ 0x1286 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x128C */
int ms_x64_func(int a, int b, int c, int d, int e)
{
 return e + d + c + a + b;
}


/* Function: call_ms_x64 @ 0x12A1 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x12A7 */
int vectorcall_func(int a, int b, int c, int d)
{
 return d + c + a + b;
}


/* Function: call_vectorcall @ 0x12B8 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x12BE */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x12C4 */
int varargs_func(int count, ...)
{
 int v1;
 int result;
 int v4;
 va_list counta;

 va_start(counta, count);
 v4 = va_arg(counta, unsigned int);
 v1 = count;
 if ( count <= 0 )
 {
 va_end(counta);
 return 0;
 }
 result = 0;
 do
 {
 result += va_arg(counta, unsigned int);
 --v1;
 }
 while ( v1 );
 va_end(counta);
 return result;
}


/* Function: func_no_args @ 0x12EE */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x12F4 */
int func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
 return h + g + f + e + d + c + a + b;
}


/* Function: func_mixed_args @ 0x1315 */
int func_mixed_args(int x, char *s, int d, long long ll_val)
{
 unsigned int v5;
 int result;
 int d_int;

 if ( s )
 {
 v5 = (unsigned int)strlen(s);
 }
 else
 {
 v5 = 0;
 }
 d_int = d;
 result = d_int;
 result += x;
 result += (int)v5;
 result += (int)(ll_val);
 return result;
}


/* Function: func_struct_byval @ 0x1397 */
int func_struct_byval(LargeStruct s)
{
 int v1; // ecx
 long long v2; // kr00_8
 int result; // eax

 v1 = 0;
 v2 = 0;
 do
 {
 v2 += s.data[v1];
 result = v2;
 ++v1;
 }
 while ( v1 != 16 );
 return result;
}


/* Function: func_struct_byptr @ 0x13B1 */
int func_struct_byptr(SmallStruct *p)
{
 if ( p )
 return p->x * p->y;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x13C4 */
void test_calling_conventions()
{
 int v0; // eax
 int i; // eax
 int v2; // ecx
 int v3; // eax
 unsigned int v5[34] = {5073};
 puts(asc_2352);
 printf("CALL-L1-01: %d\n", 15);
 printf("CALL-L1-02: %d\n", 50);
 printf("CALL-L1-03: %d\n", 6);
 printf("CALL-L1-04: %d\n", 15);
 printf("CALL-L1-05: %d\n", 15);
 printf("CALL-L1-06: %d\n", 100);
 printf("CALL-L1-07: %d\n", 21);
 printf("CALL-L1-08: %d\n", 15);
 printf("CALL-L1-09: %d\n", 10);
 printf("CALL-L1-10: %d\n", 33);
 v0 = varargs_func(5, 1, 2, 3, 4, 5);
 printf(aCallL206, v0);
 printf(aCallL207, 42);
 printf(aCallL208, 36);
 printf(aCallL209, 117);
 for ( i = 1; i != 17; ++i )
 {
 v5[2 * i] = 0;
 v5[2 * i - 1] = i;
 }
 v2 = 0;
 v3 = 0;
 do
 v3 += v5[2 * v2++ + 1];
 while ( v2 != 16 );
 printf(aCallL210, v3);
 printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x1541 */
int param_by_value_int(int x)
{
 return 2 * x;
}


/* Function: call_by_value_int @ 0x1548 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x154E */
int param_by_value_ptr(int *p)
{
 *p *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x1558 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x155E */
int param_array_decay()
{
 return 4;
}


/* Function: call_array_decay @ 0x1564 */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x156A */
int param_string(const char *str)
{
 return *str + str[1];
}


/* Function: call_string_param @ 0x1578 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x157E */
int param_ptr_array(char **arr, int n)
{
 int v2; // esi
 int result; // eax

 if ( n <= 0 )
 return 0;
 v2 = 0;
 result = 0;
 do
 result += *arr[v2++];
 while ( n != v2 );
 return result;
}


/* Function: call_ptr_array @ 0x15A4 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x15AA */
int param_varargs(int count, ...)
{
 int v1; // ecx
 va_list v2; // edx
 int result; // eax
 int v4; // [esp+Ch] [ebp+8h]
 va_list counta; // [esp+10h] [ebp+Ch] BYREF

 va_start(counta, count);
 v4 = va_arg(counta, unsigned int);
 v1 = count;
 if ( count <= 0 )
 return 0;
 va_copy(v2, counta);
 result = 0;
 do
 {
 result += *((unsigned int *)v2 - 1);
 v2 += 4;
 --v1;
 }
 while ( v1 );
 return result;
}


/* Function: call_varargs_param @ 0x15D4 */
int call_varargs_param()
{
 return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x15FB */
int param_func_ptr(int (*callback)(int), int x)
{
 return callback(x) + 10;
}


/* Function: call_func_ptr_param @ 0x161E */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x1624 */
int param_double_ptr(int **pp, int new_val)
{
 int result; // eax

 result = -1;
 if ( pp )
 {
 if ( *pp )
 {
 **pp = new_val;
 *pp = 0;
 return 1;
 }
 }
 return result;
}


/* Function: call_double_ptr @ 0x1645 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x164B */
int param_complex_cast(void *p, int type)
{
 if ( type == 1 )
 return *(unsigned int *)p + *((unsigned int *)p + 1);
 if ( type )
 return -1;
 return *(unsigned int *)p;
}


/* Function: call_complex_cast @ 0x1669 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x166F */
int param_struct_byval(BigStruct s)
{
 return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1678 */
int call_struct_byval()
{
 int i; // eax
 unsigned int v2[17]; // [esp+0h] [ebp-44h]

 for ( i = 0; i != 16; ++i )
 v2[i] = i;
 return v2[0] + v2[15];
}


/* Function: param_order_dep @ 0x1691 */
int param_order_dep(int a, int b)
{
 return a + b;
}


/* Function: call_order_dep @ 0x169A */
int call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0x16A0 */
void test_parameter_passing()
{
 int v0; // eax
 int i; // eax
 unsigned int v2[19]; // [esp+0h] [ebp-4Ch]

 puts(asc_2373);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 4);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 4);
 v0 = param_varargs(4, 10, 20, 30, 40);
 printf("PARAM-L2-04: %d\n", v0);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 for ( i = 0; i != 16; ++i )
 v2[i] = i;
 printf("PARAM-L3-04: %d\n", v2[0] + v2[15]);
 printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0x17B7 */
int ret_basic_type(int x)
{
 return 2 * x;
}


/* Function: call_ret_basic @ 0x17BE */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x17C4 */
int * ret_pointer(int *p)
{
 return p + 1;
}


/* Function: call_ret_pointer @ 0x17CC */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x17D2 */
SmallPoint *ret_small_struct(SmallPoint *retstr, int x, int y)
{
 SmallPoint *result;

 result = retstr;
 retstr->x = x;
 retstr->y = y;
 return result;
}


/* Function: call_ret_small_struct @ 0x17E6 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x17EC */
LargeData *ret_large_struct(LargeData *retstr, int seed)
{
 LargeData *result; // eax
 int i; // ecx

 result = retstr;
 for ( i = 0; i != 16; ++i )
 retstr->data[i] = seed + i;
 return result;
}


/* Function: call_ret_large_struct @ 0x1807 */
int call_ret_large_struct()
{
 int i; // eax
 unsigned int v2[117]; // [esp+0h] [ebp-1D4h]

 for ( i = 100; i != 116; ++i )
 v2[i] = i;
 return v2[100] + v2[115];
}


/* Function: func_a @ 0x1827 */
int func_a(int x)
{
 return x + 10;
}


/* Function: func_b @ 0x182F */
int func_b(int x)
{
 return 2 * x;
}


/* Function: ret_func_ptr @ 0x1836 */
func_ptr_t ret_func_ptr(int selector)
{
 func_ptr_t result; // eax

 result = func_b;
 if ( !selector )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1857 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x185D */
int ** ret_opaque_handle(int type)
{
 int **result; // eax

 result = (int **)&ret_opaque_handle_handle2;
 if ( !type )
 return ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x187E */
int *call_ret_opaque()
{
 return ret_opaque_handle_handle1[0];
}


/* Function: ret_complex_expr @ 0x1891 */
int ret_complex_expr(int x, int y, int z)
{
 int result; // eax

 result = z + 10;
 if ( x > y )
 return 2 * z;
 return result;
}


/* Function: call_ret_complex_expr @ 0x18A7 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x18AD */
int ret_multi_branch(int op)
{
 int result; // eax

 result = 10 * op + 10;
 if ( (unsigned int)op >= 3 )
 return -1;
 return result;
}


/* Function: call_ret_multi_branch @ 0x18C2 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x18C8 */
void ret_void(int x, int *out)
{
 *out = 3 * x;
}


/* Function: call_ret_void @ 0x18D6 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x18DC */
void test_return_values()
{
 char *v0; // eax
 char *v1[117]; // [esp+0h] [ebp-1D4h]

 v1[97] = (unsigned char *)&loc_18E5;
 puts(asc_2394);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 v0 = (char *)&dword_64;
 do
 {
 v1[(unsigned int)v0] = v0;
 ++v0;
 }
 while ( v0 != (char *)&dword_74 );
 printf(aRetL104D, &v1[100][(unsigned int)v1[115]]);
 printf(aRetL201D, 10);
 printf(aRetL202D, ret_opaque_handle_handle1[0]);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 printf(aRetL303D, 21);
}


/* Function: main @ 0x19DD */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1A5C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x4044 */

/* FAILED to decompile: printf @ 0x4048 */

/* FAILED to decompile: __cxa_finalize @ 0x404C */

/* FAILED to decompile: puts @ 0x4050 */

/* FAILED to decompile: strlen @ 0x4054 */

/* Total functions decompiled: 84, failed: 5 */
