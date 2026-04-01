/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/4/4_gcc_O2_no_g
 * Processor: pc
 */

/* Global variable forward declarations */
extern int *handle1_1;

/* GCC builtin for reading from GS segment (stack canary) */
static unsigned int __readgsdword(unsigned int offset)
{
 return 0;
}

/* GCC builtin for quick memcpy */
static void *qmemcpy(void *dest, const void *src, unsigned int n)
{
 return memcpy(dest, src, n);
}
extern int *handle2_0;
extern char *asc_2008;
extern char *unk_202C;
extern char *unk_2054;
extern char *unk_2078;
extern char *unk_20A0;
extern char *unk_20C8;
extern char *unk_20F4;
extern char *asc_2124;
extern char *asc_22A0;
extern char *unk_22BE;
extern char *unk_22DA;
extern char *unk_22F6;
extern char *unk_2311;
extern char *unk_232E;
extern char *unk_234A;
extern char *unk_2367;
extern char *unk_2383;
extern char *unk_239F;




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 ;
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


/* Function forward declarations */
unsigned int test_calling_conventions();
unsigned int test_parameter_passing();
int test_return_values();

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
int func_a(int a1)
{
 return a1 + 10;
}


/* Function: func_b @ 0x12A0 */
int func_b(int a1)
{
 return 2 * a1;
}


/* Function: cdecl_func @ 0x12B0 */
int cdecl_func(int a1, int a2)
{
 return a1 + a2;
}


/* Function: call_cdecl @ 0x12C0 */
int call_cdecl()
{
 return 15;
}


/* Function: stdcall_func @ 0x12D0 */
int stdcall_func(int a1, int a2)
{
 return a1 * a2;
}


/* Function: call_stdcall @ 0x12E0 */
int call_stdcall()
{
 return 50;
}


/* Function: fastcall_func @ 0x12F0 */
int fastcall_func(int a1, int a2, int a3)
{
 return a3 + a1 + a2;
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
int arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
 return a5 + a4 + a3 + a1 + a2;
}


/* Function: call_arm_aapcs @ 0x1340 */
int call_arm_aapcs()
{
 return 15;
}


/* Function: mips_func @ 0x1350 */
int mips_func(int a1, int a2, int a3, int a4)
{
 return a4 + a3 + a1 + a2;
}


/* Function: call_mips @ 0x1370 */
int call_mips()
{
 return 100;
}


/* Function: amd64_sysv_func @ 0x1380 */
int amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
 return a6 + a5 + a4 + a3 + a1 + a2;
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
int varargs_func(int a1, char a2)
{
 int v2; // eax
 int v3; // edx

 if ( a1 <= 0 )
 return 0;
 v2 = 0;
 v3 = 0;
 do
 v3 += *((unsigned int *)&a2 + v2++);
 while ( a1 != v2 );
 return v3;
}


/* Function: func_no_args @ 0x1460 */
int func_no_args()
{
 return 42;
}


/* Function: func_many_args @ 0x1470 */
int func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
 return a8 + a7 + a6 + a5 + a4 + a3 + a1 + a2;
}


/* Function: func_mixed_args @ 0x14A0 */
int func_mixed_args(int a1, char *s, double a3, long long a4)
{
 long double v4; // fst7
 double v5;
 long long v6;

 v5 = a3;
 v6 = a4;
 v4 = v5;
 if ( s )
 {
 v4 = v5;
 a1 += strlen(s);
 }
 return (int)(v4 + (long double)a1 + (long double)v6);
}


/* Function: func_struct_byval @ 0x1520 */
int func_struct_byval(
 char a1,
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
 int a31,
 int a32,
 char a33)
{
 long long v33; // rcx
 char *v34; // edx

 v33 = 0;
 v34 = &a1;
 do
 {
 v33 += *(unsigned long long *)v34;
 v34 += 8;
 }
 while ( v34 != &a33 );
 return v33;
}


/* Function: func_struct_byptr @ 0x1550 */
int func_struct_byptr(unsigned int *a1)
{
 if ( a1 )
 return a1[1] * *a1;
 else
 return -1;
}


/* Function: test_calling_conventions @ 0x1570 */
unsigned int test_calling_conventions()
{
 int v0; // eax
 long long i; // rax
 unsigned int *v2; // eax
 long long v3; // kr08_8
 unsigned long long v5[16]; // [esp+0h] [ebp-110h] BYREF
 unsigned char v6[128]; // [esp+80h] [ebp-90h] BYREF
 unsigned int v7; // [esp+100h] [ebp-10h] BYREF

 v7 = __readgsdword(0x14u);
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
 v0 = varargs_func(5, 1);
 __printf_chk(1, &unk_202C, v0);
 __printf_chk(1, &unk_2054, 42);
 __printf_chk(1, &unk_2078, 36);
 __printf_chk(1, &unk_20A0, 117);
 for ( i = 1; i != 17; ++i )
 v5[(int)i - 1] = i;
 v2 = (unsigned int *)v6;
 qmemcpy(v6, v5, sizeof(v6));
 v3 = 0;
 do
 {
 v3 += *(unsigned long long *)v2;
 v2 += 2;
 }
 while ( &v7 != v2 );
 __printf_chk(1, &unk_20C8, v3);
 __printf_chk(1, &unk_20F4, 50);
 return v7 - __readgsdword(0x14u);
}


/* Function: param_by_value_int @ 0x1770 */
int param_by_value_int(int a1)
{
 return 2 * a1;
}


/* Function: call_by_value_int @ 0x1780 */
int call_by_value_int()
{
 return 15;
}


/* Function: param_by_value_ptr @ 0x1790 */
int param_by_value_ptr(unsigned int *a1)
{
 *a1 *= 2;
 return 1;
}


/* Function: call_by_value_ptr @ 0x17A0 */
int call_by_value_ptr()
{
 return 11;
}


/* Function: param_array_decay @ 0x17B0 */
int param_array_decay()
{
 return 4;
}


/* Function: call_array_decay @ 0x17C0 */
int call_array_decay()
{
 return 4;
}


/* Function: param_string @ 0x17D0 */
int param_string(char *a1)
{
 return a1[1] + *a1;
}


/* Function: call_string_param @ 0x17F0 */
int call_string_param()
{
 return 173;
}


/* Function: param_ptr_array @ 0x1800 */
int param_ptr_array(char **a1, int a2)
{
 char **v2; // eax
 int v3; // edx
 char *v4; // ecx

 if ( a2 <= 0 )
 return 0;
 v2 = a1;
 v3 = 0;
 do
 {
 v4 = *v2++;
 v3 += *v4;
 }
 while ( &a1[a2] != v2 );
 return v3;
}


/* Function: call_ptr_array @ 0x1840 */
int call_ptr_array()
{
 return 300;
}


/* Function: param_varargs @ 0x1850 */
int param_varargs(int a1, char a2)
{
 int v2; // eax
 int v3; // edx

 if ( a1 <= 0 )
 return 0;
 v2 = 0;
 v3 = 0;
 do
 v3 += *((unsigned int *)&a2 + v2++);
 while ( a1 != v2 );
 return v3;
}


/* Function: call_varargs_param @ 0x1890 */
int call_varargs_param()
{
 return param_varargs(4, 10);
}


/* Function: param_func_ptr @ 0x18B0 */
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
int param_double_ptr(unsigned int *a1, int a2)
{
 if ( !a1 || !*a1 )
 return -1;
 *(unsigned int *)*a1 = a2;
 *a1 = 0;
 return 1;
}


/* Function: call_double_ptr @ 0x1910 */
int call_double_ptr()
{
 return 21;
}


/* Function: param_complex_cast @ 0x1920 */
int param_complex_cast(unsigned int *a1, int a2)
{
 if ( !a2 )
 return *a1;
 if ( a2 == 1 )
 return *a1 + a1[1];
 return -1;
}


/* Function: call_complex_cast @ 0x1950 */
int call_complex_cast()
{
 return 305419896;
}


/* Function: param_struct_byval @ 0x1960 */
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


/* Function: call_struct_byval @ 0x1970 */
long long call_struct_byval()
{
 int i; // eax
 long long result; // rax
 unsigned int v2[16]; // [esp+Ch] [ebp-50h]
 unsigned int v3; // [esp+4Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 for ( i = 0; i != 16; ++i )
 v2[i] = i;
 result = (long long)(v2[0] + v2[15]) | ((long long)(v3 - __readgsdword(0x14u)) << 32);
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
unsigned int test_parameter_passing()
{
 int v0; // eax
 int i; // eax
 unsigned int v3[16]; // [esp+1Ch] [ebp-50h]
 unsigned int v4; // [esp+5Ch] [ebp-10h]

 v4 = __readgsdword(0x14u);
 puts(asc_2124);
 __printf_chk(1, "PARAM-L1-01: %d\n", 15);
 __printf_chk(1, "PARAM-L1-02: %d\n", 11);
 __printf_chk(1, "PARAM-L2-01: %d\n", 4);
 __printf_chk(1, "PARAM-L2-02: %d\n", 173);
 __printf_chk(1, "PARAM-L2-03: %d\n", 300);
 v0 = param_varargs(4, 10);
 __printf_chk(1, "PARAM-L2-04: %d\n", v0);
 __printf_chk(1, "PARAM-L3-01: %d\n", 20);
 __printf_chk(1, "PARAM-L3-02: %d\n", 21);
 __printf_chk(1, "PARAM-L3-03: %d\n", 305419896);
 for ( i = 0; i != 16; ++i )
 v3[i] = i;
 __printf_chk(1, "PARAM-L3-04: %d\n", v3[0] + v3[15]);
 __printf_chk(1, "PARAM-L3-05: %d\n", 4);
 return v4 - __readgsdword(0x14u);
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
int ret_pointer(int a1)
{
 return a1 + 4;
}


/* Function: call_ret_pointer @ 0x1B70 */
int call_ret_pointer()
{
 return 20;
}


/* Function: ret_small_struct @ 0x1B80 */
unsigned int * ret_small_struct(unsigned int *a1, int a2, int a3)
{
 unsigned int *result; // eax

 result = a1;
 *a1 = a2;
 a1[1] = a3;
 return result;
}


/* Function: call_ret_small_struct @ 0x1BA0 */
int call_ret_small_struct()
{
 return 7;
}


/* Function: ret_large_struct @ 0x1BB0 */
unsigned int * ret_large_struct(unsigned int *a1, int a2)
{
 int v2; // eax
 int v3; // eax
 unsigned int v4[20]; // [esp+Ch] [ebp-50h] BYREF

 v4[16] = __readgsdword(0x14u);
 v3 = 0;
 v2 = a2;
 do
 {
 v4[v3] = v2;
 ++v3;
 ++v2;
 }
 while ( v2 != a2 + 16 );
 *a1 = v4[0];
 a1[1] = v4[1];
 a1[2] = v4[2];
 a1[3] = v4[3];
 a1[4] = v4[4];
 a1[5] = v4[5];
 a1[6] = v4[6];
 a1[7] = v4[7];
 a1[8] = v4[8];
 a1[9] = v4[9];
 a1[10] = v4[10];
 a1[11] = v4[11];
 a1[12] = v4[12];
 a1[13] = v4[13];
 a1[14] = v4[14];
 a1[15] = v4[15];
 return a1;
}


/* Function: call_ret_large_struct @ 0x1C70 */
long long call_ret_large_struct()
{
 int i; // eax
 int j; // eax
 long long result; // rax
 unsigned int v2[16]; // [esp+Ch] [ebp-50h] BYREF
 unsigned int v3; // [esp+4Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 j = 0;
 for ( i = 100; i != 116; ++i )
 {
 v2[j] = i;
 ++j;
 }
 result = ((long long)(v3 - __readgsdword(0x14u)) << 32) | (unsigned int)(v2[0] + v2[15]);
 return result;
}


/* Function: ret_func_ptr @ 0x1CC0 */
int ( * ret_func_ptr(int a1))(int)
{
 int ( *result)(int); // eax

 result = func_b;
 if ( !a1 )
 return func_a;
 return result;
}


/* Function: call_ret_func_ptr @ 0x1CF0 */
int call_ret_func_ptr()
{
 return 10;
}


/* Function: ret_opaque_handle @ 0x1D00 */
int ** ret_opaque_handle(int a1)
{
 int **result; // eax

 result = &handle1_1;
 if ( a1 )
 return (int **)&handle2_0;
 return result;
}

/* Global variables */
int *handle1_1 = (int *)0x1;
int *handle2_0 = (int *)0x2;
char *asc_2008 = "Calling Conventions Test";
char *unk_202C = "PARAM-L2-04: %d\n";
char *unk_2054 = "PARAM-L2-05: %d\n";
char *unk_2078 = "PARAM-L2-06: %d\n";
char *unk_20A0 = "PARAM-L2-07: %d\n";
char *unk_20C8 = "PARAM-L2-08: %d\n";
char *unk_20F4 = "PARAM-L2-09: %d\n";
char *asc_2124 = "Parameter Passing Test";
char *asc_22A0 = "Return Values Test";
char *unk_22BE = "RET-L1-01: %d\n";
char *unk_22DA = "RET-L1-02: %d\n";
char *unk_22F6 = "RET-L1-03: %d\n";
char *unk_2311 = "RET-L1-04: %d\n";
char *unk_232E = "RET-L2-01: %d\n";
char *unk_234A = "RET-L2-02: %d\n";
char *unk_2367 = "RET-L2-03: %d\n";
char *unk_2383 = "RET-L2-04: %d\n";
char *unk_239F = "RET-L2-05: %d\n";


/* Function: call_ret_opaque @ 0x1D30 */
int *call_ret_opaque()
{
 return handle1_1;
}


/* Function: ret_complex_expr @ 0x1D50 */
int ret_complex_expr(int a1, int a2, int a3)
{
 int result; // eax

 result = a3 + 10;
 if ( a1 > a2 )
 return 2 * a3;
 return result;
}


/* Function: call_ret_complex_expr @ 0x1D70 */
int call_ret_complex_expr()
{
 return 40;
}


/* Function: ret_multi_branch @ 0x1D80 */
int ret_multi_branch(unsigned int a1)
{
 int result; // eax

 result = -1;
 if ( a1 <= 2 )
 return 2 * (5 * a1 + 5);
 return result;
}


/* Function: call_ret_multi_branch @ 0x1DA0 */
int call_ret_multi_branch()
{
 return 60;
}


/* Function: ret_void @ 0x1DB0 */
unsigned int * ret_void(int a1, unsigned int *a2)
{
 unsigned int *result; // eax

 result = a2;
 *a2 = 3 * a1;
 return result;
}


/* Function: call_ret_void @ 0x1DD0 */
int call_ret_void()
{
 return 21;
}


/* Function: test_return_values @ 0x1DE0 */
int test_return_values()
{
 int v0; // eax

 puts(asc_22A0);
 __printf_chk(1, &unk_22BE, 42);
 __printf_chk(1, &unk_22DA, 20);
 __printf_chk(1, &unk_22F6, 7);
 v0 = call_ret_large_struct();
 __printf_chk(1, &unk_2311, v0);
 __printf_chk(1, &unk_232E, 10);
 __printf_chk(1, &unk_234A, handle1_1);
 __printf_chk(1, &unk_2367, 40);
 __printf_chk(1, &unk_2383, 60);
 return __printf_chk(1, &unk_239F, 21);
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
