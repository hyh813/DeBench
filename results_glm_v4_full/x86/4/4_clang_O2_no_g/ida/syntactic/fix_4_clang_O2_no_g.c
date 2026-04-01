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

/* String constants */
static const char asc_2352[] = "=== Calling Conventions Test ===";
static const char aCallL206[] = "CALL-L2-06: %d\n";
static const char aCallL207[] = "CALL-L2-07: %d\n";
static const char aCallL208[] = "CALL-L2-08: %d\n";
static const char aCallL209[] = "CALL-L2-09: %d\n";
static const char aCallL210[] = "CALL-L2-10: %d\n";
static const char aCallL211[] = "CALL-L2-11: %d\n";
static const char asc_2373[] = "=== Parameter Passing Test ===";
static const char asc_2394[] = "=== Return Values Test ===";
static const char aRetL101D[] = "RET-L1-01: %d\n";
static const char aRetL102D[] = "RET-L1-02: %d\n";
static const char aRetL103D[] = "RET-L1-03: %d\n";
static const char aRetL104D[] = "RET-L1-04: %d\n";
static const char aRetL201D[] = "RET-L2-01: %d\n";
static const char aRetL202D[] = "RET-L2-02: %d\n";
static const char aRetL301D[] = "RET-L3-01: %d\n";
static const char aRetL302D[] = "RET-L3-02: %d\n";
static const char aRetL303D[] = "RET-L3-03: %d\n";

/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *8(%%ebx)" ::: "memory");
}


/* Function: sub_1080 @ 0x1080 */
int sub_1080(int a1)
{
 return (*(int (**)(void))((void *)(a1 - 16)))();
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
 __asm__ volatile("movl (%%esp), %%ebx" ::: "memory");
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x11F9 */
void _x86_get_pc_thunk_dx()
{
 __asm__ volatile("movl (%%esp), %%edx" ::: "memory");
}


/* Function: __x86.get_pc_thunk.di @ 0x11FD */
void _x86_get_pc_thunk_di()
{
 __asm__ volatile("movl (%%esp), %%edi" ::: "memory");
}


/* Function: cdecl_func @ 0x1210 */
int cdecl_func(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_cdecl @ 0x1220 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x1230 */
int stdcall_func(int a1, int a2)
{
 return a1 * a2;
}


/* Function: call_stdcall @ 0x1240 */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x1250 */
int fastcall_func(int a1, int a2, int a3)
{
 return a3 + a1 + a2;
}


/* Function: call_fastcall @ 0x1260 */
int call_fastcall()
{
 return 6;
}


/* Function: call_thiscall @ 0x1270 */
int call_thiscall()
{
 return 15;
}


/* Function: arm_aapcs_func @ 0x1280 */
int arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a1 + a2;
}


/* Function: call_arm_aapcs @ 0x12A0 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x12B0 */
int mips_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a1 + a2;
}


/* Function: call_mips @ 0x12D0 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x12E0 */
int amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return a6 + a5 + a4 + a3 + a1 + a2;
}


/* Function: call_amd64_sysv @ 0x1300 */
int call_amd64_sysv()
{
 return 21;
}


/* Function: ms_x64_func @ 0x1310 */
int ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a1 + a2;
}


/* Function: call_ms_x64 @ 0x1330 */
int call_ms_x64()
{
 return 15;
}


/* Function: vectorcall_func @ 0x1340 */
int vectorcall_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a1 + a2;
}


/* Function: call_vectorcall @ 0x1360 */
int call_vectorcall()
{
 return 10;
}


/* Function: mixed_conventions_test @ 0x1370 */
int mixed_conventions_test()
{
 return 33;
}


/* Function: varargs_func @ 0x1380 */
int varargs_func(int a1, char a2)
{
 char *v2; // edx
 int v3; // ecx
 int result; // eax
 int v5; // esi
 char *v6; // edi
 char *v7; // edx

 if ( a1 <= 0 )
 return 0;
 v2 = &a2;
 v3 = a1 & 3;
 if ( (unsigned int)(a1 - 1) >= 3 )
 {
 v5 = a1 & 0x7FFFFFFC;
 result = 0;
 v6 = &a2;
 do
 {
 v2 = v6 + 16;
 result += *((unsigned int *)v6 + 3) + *((unsigned int *)v6 + 2) + *((unsigned int *)v6 + 1) + *(unsigned int *)v6;
 v6 += 16;
 v5 -= 4;
 }
 while ( v5 );
 }
 else
 {
 result = 0;
 }
 if ( (a1 & 3) != 0 )
 {
 v7 = v2 + 4;
 do
 {
 result += *((unsigned int *)v7 - 1);
 v7 += 4;
 --v3;
 }
 while ( v3 );
 }
 return result;
}


/* Function: func_no_args @ 0x1420 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1430 */
int func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return a8 + a7 + a6 + a5 + a4 + a3 + a1 + a2;
}


/* Function: func_mixed_args @ 0x1460 */
int func_mixed_args(int a1, char *s, double a3, long long a4)
{
 long double v4; // fst7
 size_t v5; // eax

 v4 = a3;
 if ( s )
 {
 v5 = strlen(s);
 v4 = a3;
 }
 else
 {
 v5 = 0;
 }
 return (int)(v4 + (long double)(int)(a1 + v5) + (long double)a4);
}


/* Function: func_struct_byval @ 0x14F0 */
int func_struct_byval(
 int a1,
 int a2,
 int a3,
 int a4,
 int a5,
 int a6,
 int a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 int a14,
 int a15,
 int a16,
 int a17,
 int a18,
 int a19,
 int a20,
 int a21,
 int a22,
 int a23,
 int a24,
 int a25,
 int a26,
 int a27,
 int a28,
 int a29,
 int a30,
 int a31)
{
 return a31 + a29 + a27 + a25 + a23 + a21 + a19 + a17 + a15 + a13 + a11 + a9 + a7 + a5 + a1 + a3;
}


/* Function: func_struct_byptr @ 0x1540 */
int func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return *a1 * a1[1];
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x1560 */
int test_calling_conventions()
{
 int v0; // eax

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
 v0 = varargs_func(5, 1);
 printf(aCallL206, v0);
 printf(aCallL207, 42);
 printf(aCallL208, 36);
 printf(aCallL209, 117);
 printf(aCallL210, 136);
 return printf(aCallL211, 50);
}


/* Function: param_by_value_int @ 0x16B0 */
int param_by_value_int(int a1)
{
 return 2 * a1;
}


/* Function: call_by_value_int @ 0x16C0 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x16D0 */
int param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x16E0 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x16F0 */
int param_array_decay()
{
 return 4;
}


/* Function: call_array_decay @ 0x1700 */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x1710 */
int param_string(char *a1)
{
 return *a1 + a1[1];
}


/* Function: call_string_param @ 0x1720 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x1730 */
int param_ptr_array(int a1, int a2)
{
 int v2; // esi
 int result; // eax
 int v4; // edx
 int v5; // esi

 if ( a2 <= 0 )
 return 0;
 if ( (unsigned int)(a2 - 1) >= 3 )
 {
 v2 = 0;
 result = 0;
 do
 {
 result += **(char **)(a1 + 4 * v2)
 + **(char **)(a1 + 4 * v2 + 4)
 + **(char **)(a1 + 4 * v2 + 8)
 + **(char **)(a1 + 4 * v2 + 12);
 v2 += 4;
 }
 while ( (a2 & 0x7FFFFFFC) != v2 );
 }
 else
 {
 v2 = 0;
 result = 0;
 }
 if ( (a2 & 3) != 0 )
 {
 v4 = a1 + 4 * v2;
 v5 = 0;
 do
 result += **(char **)(v4 + 4 * v5++);
 while ( (a2 & 3) != v5 );
 }
 return result;
}


/* Function: call_ptr_array @ 0x17C0 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x17D0 */
int param_varargs(int a1, char a2)
{
 char *v2; // edx
 int v3; // ecx
 int result; // eax
 int v5; // esi
 char *v6; // edi
 char *v7; // edx

 if ( a1 <= 0 )
 return 0;
 v2 = &a2;
 v3 = a1 & 3;
 if ( (unsigned int)(a1 - 1) >= 3 )
 {
 v5 = a1 & 0x7FFFFFFC;
 result = 0;
 v6 = &a2;
 do
 {
 v2 = v6 + 16;
 result += *((unsigned int *)v6 + 3) + *((unsigned int *)v6 + 2) + *((unsigned int *)v6 + 1) + *(unsigned int *)v6;
 v6 += 16;
 v5 -= 4;
 }
 while ( v5 );
 }
 else
 {
 result = 0;
 }
 if ( (a1 & 3) != 0 )
 {
 v7 = v2 + 4;
 do
 {
 result += *((unsigned int *)v7 - 1);
 v7 += 4;
 --v3;
 }
 while ( v3 );
 }
 return result;
}


/* Function: call_varargs_param @ 0x1870 */
int call_varargs_param()
{
 return param_varargs(4, 10);
}


/* Function: param_func_ptr @ 0x18A0 */
int param_func_ptr(int ( *a1)(int), int a2)
{
 return a1(a2) + 10;
}


/* Function: call_func_ptr_param @ 0x18D0 */
int call_func_ptr_param()
{
 return 20;
}


/* Function: param_double_ptr @ 0x18E0 */
int param_double_ptr(unsigned int **a1, int a2)
{
 int result; // eax

 result = -1;
 if ( a1 )
 {
 if ( *a1 )
 {
 **a1 = a2;
 *a1 = 0;
 return 1;
 }
 }
 return result;
}


/* Function: call_double_ptr @ 0x1910 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x1920 */
int param_complex_cast(unsigned int *a1, int a2)
{
 int result; // eax

 if ( a2 == 1 )
 return *a1 + a1[1];
 result = -1;
 if ( !a2 )
 return *a1;
 return result;
}


/* Function: call_complex_cast @ 0x1940 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1950 */
int param_struct_byval(
 int a1,
 int a2,
 int a3,
 int a4,
 int a5,
 int a6,
 int a7,
 int a8,
 int a9,
 int a10,
 int a11,
 int a12,
 int a13,
 int a14,
 int a15,
 int a16)
{
 return a1 + a16;
}


/* Function: call_struct_byval @ 0x1960 */
int call_struct_byval()
{
 return 15;
}


/* Function: param_order_dep @ 0x1970 */
int param_order_dep(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_order_dep @ 0x1980 */
int call_order_dep()
{
 return 3;
}


/* Function: test_parameter_passing @ 0x1990 */
int test_parameter_passing()
{
 int v0; // eax

 puts(asc_2373);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 4);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n");
 v0 = param_varargs(4, 10);
 printf("PARAM-L2-04: %d\n", v0);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 printf("PARAM-L3-04: %d\n", 15);
 return printf("PARAM-L3-05: %d\n", 3);
}


/* Function: ret_basic_type @ 0x1A90 */
int ret_basic_type(int a1)
{
 return 2 * a1;
}


/* Function: call_ret_basic @ 0x1AA0 */
int call_ret_basic()
{
 return 42;
}


/* Function: ret_pointer @ 0x1AB0 */
int ret_pointer(int a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x1AC0 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1AD0 */
unsigned int * ret_small_struct(unsigned int *a1, int a2, int a3)
{
 unsigned int *result; // eax

 result = a1;
 *a1 = a2;
 a1[1] = a3;
 return result;
}


/* Function: call_ret_small_struct @ 0x1AF0 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1B00 */
unsigned int * ret_large_struct(unsigned int *a1, int a2)
{
 unsigned int *result; // eax

 result = a1;
 *a1 = a2;
 a1[1] = a2 + 1;
 a1[2] = a2 + 2;
 a1[3] = a2 + 3;
 a1[4] = a2 + 4;
 a1[5] = a2 + 5;
 a1[6] = a2 + 6;
 a1[7] = a2 + 7;
 a1[8] = a2 + 8;
 a1[9] = a2 + 9;
 a1[10] = a2 + 10;
 a1[11] = a2 + 11;
 a1[12] = a2 + 12;
 a1[13] = a2 + 13;
 a1[14] = a2 + 14;
 a1[15] = a2 + 15;
 return result;
}


/* Function: call_ret_large_struct @ 0x1B70 */
int call_ret_large_struct()
{
 return 215;
}


/* Function: func_a @ 0x1B80 */
int func_a(int a1)
{
 return a1 + 10;
}


/* Function: func_b @ 0x1B90 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: ret_func_ptr @ 0x1BA0 */
int ( * ret_func_ptr(int a1))(int a1)
{
 int ( *result)(int); // eax

 result = func_b;
 if ( !a1 )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1BD0 */
int call_ret_func_ptr()
{
 return 10;
}


/* Global handles for ret_opaque_handle function */
static int *ret_opaque_handle_handle1[1] = { (int *)10 };
static int *ret_opaque_handle_handle2[1] = { (int *)20 };

/* Function: ret_opaque_handle @ 0x1BE0 */
int ** ret_opaque_handle(int a1)
{
 int **result; // eax

 result = (int **)&ret_opaque_handle_handle2;
 if ( !a1 )
 return ret_opaque_handle_handle1;
 return result;
}


/* Function: call_ret_opaque @ 0x1C10 */
int *call_ret_opaque()
{
 return ret_opaque_handle_handle1[0];
}


/* Function: ret_complex_expr @ 0x1C30 */
int ret_complex_expr(int a1, int a2, int a3)
{
 int result; // eax

 result = a3 + 10;
 if ( a1 > a2 )
 return 2 * a3;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1C50 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1C60 */
int ret_multi_branch(unsigned int a1)
{
 int result; // eax

 result = -1;
 if ( a1 < 3 )
 return 10 * a1 + 10;
 return result;
}


/* Function: call_ret_multi_branch @ 0x1C80 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1C90 */
unsigned int * ret_void(int a1, unsigned int *a2)
{
 unsigned int *result; // eax

 result = a2;
 *a2 = 3 * a1;
 return result;
}


/* Function: call_ret_void @ 0x1CA0 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1CB0 */
int test_return_values()
{
 puts(asc_2394);
 printf(aRetL101D, 42);
 printf(aRetL102D, 20);
 printf(aRetL103D, 7);
 printf(aRetL104D, 215);
 printf(aRetL201D, 10);
 printf(aRetL202D, ret_opaque_handle_handle1[0]);
 printf(aRetL301D, 40);
 printf(aRetL302D, 60);
 return printf(aRetL303D, 21);
}


/* Function: main @ 0x1DA0 */
int main(int argc, const char **argv, const char **envp)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* FAILED to decompile: __libc_start_main @ 0x4044 */

/* FAILED to decompile: printf @ 0x4048 */

/* FAILED to decompile: __cxa_finalize @ 0x404C */

/* FAILED to decompile: puts @ 0x4050 */

/* FAILED to decompile: strlen @ 0x4054 */

/* Total functions decompiled: 84, failed: 5 */
