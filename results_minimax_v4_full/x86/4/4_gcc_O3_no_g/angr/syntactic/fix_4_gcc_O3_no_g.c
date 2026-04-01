// Angr Decompilation of 4_gcc_O3_no_g
// Platform: X86


/* CRT stub function _init removed by preprocessor */

// Define struct_0 for CRT stub functions - use large padding array for pointer arithmetic
// This struct is used with large offsets in register_tm_clones and __do_global_ctors_aux
struct struct_0 {
    char padding_0[12000];  // Large enough to accommodate offsets up to ~12000
};

// Compiler intrinsics for getting PC values
// Forward declarations for PC thunk functions
void __x86_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_dx(void);
void __x86_get_pc_thunk_di(unsigned int *a, char *b);
void __x86_get_pc_thunk_ax(void);

// Define g_403ff4 as a function pointer type
typedef void (*func_ptr_t)(void);
func_ptr_t g_403ff4;

// Define NULL if not available
#ifndef NULL
#define NULL ((void*)0)
#endif

// Define nan
static const unsigned int nan = 0x7FC00000;

int _init()
{
 if (g_403ff4)
 g_403ff4();
 // frame_dummy() is a CRT stub that was removed by preprocessor
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
// This function uses a jump table for computed goto
int sub_401030(unsigned int index)
{
 // Jump table - indices 0, 8, 16, 24 map to different code paths
 static const void *jump_table[] = {
  &&case_0, &&case_8, &&case_16, &&case_24
 };
 
 if (index > 24)
 return 0;
 
 goto *jump_table[index / 8];

case_0:
 return 0;
case_8:
 return 8;
case_16:
 return 16;
case_24:
 return 24;
}


// Function: sub_40103c at 0x40103c
void sub_40103c()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
 sub_401030(0);
 return;
}


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
int sub_401050()
{
 sub_401030(8);
 return;
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
 sub_401030(16);
 return;
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
 sub_401030(24);
 return;
}


// Function: sub_40107e at 0x40107e
int sub_40107e()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
// Use a larger padding to accommodate the field_20 access
struct struct_0_with_32 {
 char padding_0[32];
 unsigned int field_20;
};

int sub_401080()
{
 struct struct_0_with_32 *v1 = (struct struct_0_with_32 *)0;

 return v1->field_20;
}


// Function: sub_40108a at 0x40108a
int sub_40108a()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
typedef struct struct_0_12 {
 char padding_0[12];
 unsigned int field_c;
} struct_0_12;

int sub_401090()
{
 struct struct_0_12 *v1; // ebx

 return v1->field_c;
}

// Function: sub_40109a at 0x40109a


// Function: sub_40109a at 0x40109a
int sub_40109a()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
typedef struct struct_0_16 {
 char padding_0[16];
 unsigned int field_10;
} struct_0_16;

unsigned int sub_4010a0()
{
 struct struct_0_16 *v1; // ebx

 return v1->field_10;
}


// Function: sub_4010aa at 0x4010aa
int sub_4010aa()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
typedef struct struct_0_20 {
 char padding_0[20];
 unsigned int field_14;
} struct_0_20;

int sub_4010b0()
{
 struct_0_20 *v1; // ebx

 return v1->field_14;
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
// This function uses computed goto - treat as void for practical purposes
void sub_4010c0(int dummy, char *fmt, unsigned int value)
{
 // This is a printf-like function that uses computed goto internally
 // For compilation purposes, treat as void
 printf(fmt, value);
 return;
}


// Function: sub_4010ca at 0x4010ca
void sub_4010ca()
{
 main();
 return;
}


// Function: main at 0x4010d0
int main()
{
 char v0; // [bp+0x0]

 test_calling_conventions(&v0);
 test_parameter_passing(&v0);
 test_return_values();
 return 0;
}


// Function: sub_4010ed at 0x4010ed
void sub_4010ed()
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40111c at 0x40111c
void sub_40111c()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401120
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401124 at 0x401124
void sub_401124()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
// Note: struct_0 is defined at the top of the file

unsigned int * deregister_tm_clones()
{
 unsigned int *ptr; // edx

 __x86_get_pc_thunk_dx();
 return (char *)&ptr[2999] + 3;
}


// Function: sub_401163 at 0x401163
void sub_401163()
{
}


// Function: sub_401169 at 0x401169
void sub_401169()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */
// Note: struct_0 is defined at the top of the file

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int register_tm_clones()
{
 struct struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 // Fix: v3 is properly used pointer
 v3 = (struct struct_0 *)((char *)&v3->padding_0[11867]);
 v0 = v4;
 if (!(&v3->padding_0[68] - &v3->padding_0[68] >> 31) + (&v3->padding_0[68] - &v3->padding_0[68] >> 2) >> 1)
 {
 return (&v3->padding_0[68] - &v3->padding_0[68] >> 31) + (&v3->padding_0[68] - &v3->padding_0[68] >> 2) >> 1;
 }
 else if (*((int *)&v3->padding_0[44]))
 {
 return (*((int *)&v3->padding_0[44]))(&v3->padding_0[68], (&v3->padding_0[68] - &v3->padding_0[68] >> 31) + (&v3->padding_0[68] - &v3->padding_0[68] >> 2) >> 1);
 }
 else
 {
 return (&v3->padding_0[68] - &v3->padding_0[68] >> 31) + (&v3->padding_0[68] - &v3->padding_0[68] >> 2) >> 1;
 }
}


// Function: sub_4011b7 at 0x4011b7
void sub_4011b7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
 /* struct_0 is already defined at the top of the file */

unsigned int * __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86_get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = &v6->padding_0[11779];
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[68])
 return v5;
 if (*((int *)&ptr->padding_0[32]))
 sub_401080(*((int *)&ptr->padding_0[52]));
 v10 = &ptr->padding_0[224];
 v11 = *((int *)&ptr->padding_0[72]);
 i = (&ptr->padding_0[220] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[72]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[72]) = v13;
 (*((int *)&v10->padding_0[4 * v13]))();
 v11 = *((int *)&ptr->padding_0[72]);
 } while (*((int *)&ptr->padding_0[72]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[68] = 1;
 return v14;
}


// Function: sub_40124a at 0x40124a
void sub_40124a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401259
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40125d
int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401261 at 0x401261
void sub_401261(unsigned int a0)
{
 func_a();
 return;
}


// Function: func_a at 0x401270
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: sub_40127c at 0x40127c
void sub_40127c(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 param_varargs_constprop_0();
 return;
}


// Function: param_varargs_constprop_0 at 0x401280
int param_varargs_constprop_0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a2 + a1 + a3 + a4;
}


// Function: sub_401291 at 0x401291
void sub_401291(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 varargs_func_constprop_0();
 return;
}


// Function: varargs_func_constprop_0 at 0x4012a0
int varargs_func_constprop_0(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a2 + a1 + a3 + a4 + a5;
}


// Function: sub_4012b5 at 0x4012b5
void sub_4012b5(unsigned int a0)
{
 func_b();
 return;
}


// Function: func_b at 0x4012c0
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_4012cb at 0x4012cb
void sub_4012cb(unsigned int a0, unsigned int a1)
{
 cdecl_func();
 return;
}


// Function: cdecl_func at 0x4012d0
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: sub_4012dd at 0x4012dd
void sub_4012dd()
{
 call_cdecl();
 return;
}


// Function: call_cdecl at 0x4012e0
unsigned int call_cdecl()
{
 return 15;
}


// Function: sub_4012ea at 0x4012ea
void sub_4012ea(unsigned int a0, unsigned int a1)
{
 stdcall_func();
 return;
}


// Function: stdcall_func at 0x4012f0
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a0 * a1;
}


// Function: call_stdcall at 0x401300
unsigned int call_stdcall()
{
 return 50;
}


// Function: sub_40130a at 0x40130a
void sub_40130a(unsigned int a0)
{
 fastcall_func();
 return;
}


// Function: fastcall_func at 0x401310
int fastcall_func(unsigned int a0)
{
 unsigned int v0; // ecx
 unsigned int v1; // edx

 return v0 + v1 + a0;
}


// Function: sub_40131e at 0x40131e
void sub_40131e()
{
 call_fastcall();
 return;
}


// Function: call_fastcall at 0x401320
unsigned int call_fastcall()
{
 return 6;
}


// Function: sub_40132a at 0x40132a
void sub_40132a()
{
 call_thiscall();
 return;
}


// Function: call_thiscall at 0x401330
unsigned int call_thiscall()
{
 return 15;
}


// Function: sub_40133a at 0x40133a
void sub_40133a(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 arm_aapcs_func();
 return;
}


// Function: arm_aapcs_func at 0x401340
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: sub_401359 at 0x401359
void sub_401359()
{
 call_arm_aapcs();
 return;
}


// Function: call_arm_aapcs at 0x401360
unsigned int call_arm_aapcs()
{
 return 15;
}


// Function: sub_40136a at 0x40136a
void sub_40136a(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 mips_func();
 return;
}


// Function: mips_func at 0x401370
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: sub_401385 at 0x401385
void sub_401385()
{
 call_mips();
 return;
}


// Function: call_mips at 0x401390
unsigned int call_mips()
{
 return 100;
}


// Function: sub_40139a at 0x40139a
void sub_40139a(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 amd64_sysv_func();
 return;
}


// Function: amd64_sysv_func at 0x4013a0
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a1 + a0 + a2 + a3 + a4 + a5;
}


// Function: sub_4013bd at 0x4013bd
void sub_4013bd()
{
 call_amd64_sysv();
 return;
}


// Function: call_amd64_sysv at 0x4013c0
unsigned int call_amd64_sysv()
{
 return 21;
}


// Function: sub_4013ca at 0x4013ca
void sub_4013ca(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 ms_x64_func();
 return;
}


// Function: ms_x64_func at 0x4013d0
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a1 + a0 + a2 + a3 + a4;
}


// Function: sub_4013e9 at 0x4013e9
void sub_4013e9()
{
 call_ms_x64();
 return;
}


// Function: call_ms_x64 at 0x4013f0
unsigned int call_ms_x64()
{
 return 15;
}


// Function: sub_4013fa at 0x4013fa
void sub_4013fa(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 vectorcall_func();
 return;
}


// Function: vectorcall_func at 0x401400
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a1 + a0 + a2 + a3;
}


// Function: sub_401415 at 0x401415
void sub_401415()
{
 call_vectorcall();
 return;
}


// Function: call_vectorcall at 0x401420
unsigned int call_vectorcall()
{
 return 10;
}


// Function: sub_40142a at 0x40142a
void sub_40142a()
{
 mixed_conventions_test();
 return;
}


// Function: mixed_conventions_test at 0x401430
unsigned int mixed_conventions_test()
{
 return 33;
}


// Function: sub_40143a at 0x40143a
int sub_40143a()
{
 varargs_func();
 return;
}


// Function: varargs_func at 0x401440
unsigned int varargs_func(unsigned int i)
{
 unsigned int idx; // eax
 unsigned int v2; // edx
 char v0; // [bp+0x8]

 if (i <= 0)
 return 0;
 idx = 0;
 v2 = 0;
 do
 {
 v2 += *((int *)&(&v0)[4 * idx]);
 idx += 1;
 } while (i != idx);
 return v2;
}


// Function: sub_401466 at 0x401466
void sub_401466()
{
}


// Function: sub_401476 at 0x401476
void sub_401476()
{
 func_no_args();
 return;
}


// Function: func_no_args at 0x401480
unsigned int func_no_args()
{
 return 42;
}


// Function: sub_40148a at 0x40148a
void sub_40148a(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 func_many_args();
 return;
}


// Function: func_many_args at 0x401490
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: sub_4014b5 at 0x4014b5
int sub_4014b5()
{
 func_mixed_args();
 return;
}


// Function: func_mixed_args at 0x4014c0
int func_mixed_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 unsigned int v6; // edi
 unsigned int v7; // esi
 unsigned int v8; // ebx
 unsigned int v9; // eax
 unsigned int v10; // fpround
 unsigned int v0; // [bp-0x2c]
 double v1; // [bp-0x1c], Other Possible Types: unsigned int, unsigned long
 unsigned short v2; // [bp-0xe]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = v8;
 // Note: Complex SIMD/vector operations omitted - incomplete decompilation
 if (a1)
 {
 *((unsigned long long *)&v1) = nan;
 v0 = a1;
 v9 = sub_4010b0();
 // Note: Complex SIMD/vector operations omitted
 a0 += v9;
 }
 v2 = _ccall(v10);
 // Note: Complex SIMD/vector operations omitted
 v1 = nan;
 return v1;
}


// Function: sub_401537 at 0x401537
void sub_401537(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15, unsigned int a16, unsigned int a17, unsigned int a18, unsigned int a19, unsigned int a20, unsigned int a21, unsigned int a22, unsigned int a23, unsigned int a24, unsigned int a25, unsigned int a26, unsigned int a27, unsigned int a28, unsigned int a29, unsigned int a30)
{
 func_struct_byval();
 return;
}


// Function: func_struct_byval at 0x401540
int func_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15, unsigned int a16, unsigned int a17, unsigned int a18, unsigned int a19, unsigned int a20, unsigned int a21, unsigned int a22, unsigned int a23, unsigned int a24, unsigned int a25, unsigned int a26, unsigned int a27, unsigned int a28, unsigned int a29, unsigned int a30)
{
 return a2 + a0 + a4 + a6 + a8 + a10 + a12 + a14 + a16 + a18 + a20 + a22 + a24 + a26 + a28 + a30;
}


// Function: sub_401585 at 0x401585
void sub_401585(unsigned int a0)
{
 func_struct_byptr();
 return;
}


// Function: func_struct_byptr at 0x401590
unsigned int func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return a0[1] * *(a0);
}


// Function: sub_4015a9 at 0x4015a9
int sub_4015a9()
{
 test_calling_conventions();
 return;
}


// Function: test_calling_conventions at 0x4015b0
extern unsigned int g_402008;
extern unsigned int g_40202c;
extern unsigned int g_402054;
extern unsigned int g_402078;
extern unsigned int g_4020a0;
extern unsigned int g_4020c8;
extern unsigned int g_4020f4;

int test_calling_conventions()
{
 sub_4010a0(&g_402008);
 sub_4010c0(1, "CALL-L1-01: %d\n", 15);
 sub_4010c0(1, "CALL-L1-02: %d\n", 50);
 sub_4010c0(1, "CALL-L1-03: %d\n", 6);
 sub_4010c0(1, "CALL-L1-04: %d\n", 15);
 sub_4010c0(1, "CALL-L1-05: %d\n", 15);
 sub_4010c0(1, "CALL-L1-06: %d\n", 100);
 sub_4010c0(1, "CALL-L1-07: %d\n", 21);
 sub_4010c0(1, "CALL-L1-08: %d\n", 15);
 sub_4010c0(1, "CALL-L1-09: %d\n", 10);
 sub_4010c0(1, "CALL-L1-10: %d\n", 33);
 sub_4010c0(1, &g_40202c, varargs_func_constprop_0(5, 1, 2, 3, 4, 5));
 sub_4010c0(1, &g_402054, 42);
 sub_4010c0(1, &g_402078, 36);
 sub_4010c0(1, &g_4020a0, 117);
 sub_4010c0(1, &g_4020c8, 136);
 return sub_4010c0(1, &g_4020f4, 50);
}


// Function: sub_401719 at 0x401719
void sub_401719(unsigned int a0)
{
 param_by_value_int();
 return;
}


// Function: param_by_value_int at 0x401720
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_40172b at 0x40172b
void sub_40172b()
{
 call_by_value_int();
 return;
}


// Function: call_by_value_int at 0x401730
unsigned int call_by_value_int()
{
 return 15;
}


// Function: sub_40173a at 0x40173a
void sub_40173a(unsigned int a0)
{
 param_by_value_ptr();
 return;
}


// Function: param_by_value_ptr at 0x401740
unsigned int param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2;
 return 1;
}


// Function: call_by_value_ptr at 0x401750
unsigned int call_by_value_ptr()
{
 return 11;
}


// Function: sub_40175a at 0x40175a
void sub_40175a()
{
 param_array_decay();
 return;
}


// Function: param_array_decay at 0x401760
unsigned int param_array_decay()
{
 return 4;
}


// Function: sub_40176a at 0x40176a
void sub_40176a()
{
 call_array_decay();
 return;
}


// Function: call_array_decay at 0x401770
unsigned int call_array_decay()
{
 return 4;
}


// Function: sub_40177a at 0x40177a
void sub_40177a(unsigned int a0)
{
 param_string();
 return;
}


// Function: param_string at 0x401780
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: sub_401792 at 0x401792
void sub_401792()
{
 call_string_param();
 return;
}


// Function: call_string_param at 0x4017a0
unsigned int call_string_param()
{
 return 173;
}


// Function: sub_4017aa at 0x4017aa
int sub_4017aa()
{
 param_ptr_array();
 return;
}


// Function: param_ptr_array at 0x4017b0
// Use a local struct for this function's pointer arithmetic
typedef struct struct_ptr_array {
 char padding_0[1];  // For compatibility with other code using padding_0
 char field_0;
} struct_ptr_array;

unsigned int param_ptr_array(struct_ptr_array **a0, unsigned int a1)
{
 unsigned int v0; // edx
 struct_ptr_array **i; // eax
 struct_ptr_array **v2; // eax
 unsigned int v3; // edx
 struct_ptr_array **v4; // eax
 unsigned int v5; // edx

 if (a1 <= 0)
 return 0;
 v0 = 0;
 i = a0;
 do
 {
 v2 = i;
 v3 = v0;
 v4 = v2 + 1;
 v5 = v3 + *(v2)->field_0;
 v0 = v5;
 i = v4;
 } while (&a0[a1] != i);
 return v3 + *(v2)->field_0;
}


// Function: sub_4017e2 at 0x4017e2
void sub_4017e2()
{
}


// Function: sub_4017ee at 0x4017ee
void sub_4017ee()
{
 call_ptr_array();
 return;
}


// Function: call_ptr_array at 0x4017f0
unsigned int call_ptr_array()
{
 return 300;
}


// Function: sub_4017fa at 0x4017fa
int sub_4017fa()
{
 param_varargs();
 return;
}


// Function: param_varargs at 0x401800
unsigned int param_varargs(unsigned int i)
{
 unsigned int idx; // eax
 unsigned int v2; // edx
 char v0; // [bp+0x8]

 if (i <= 0)
 return 0;
 idx = 0;
 v2 = 0;
 do
 {
 v2 += *((int *)&(&v0)[4 * idx]);
 idx += 1;
 } while (i != idx);
 return v2;
}


// Function: sub_401826 at 0x401826
void sub_401826()
{
}


// Function: sub_401836 at 0x401836
void sub_401836()
{
 call_varargs_param();
 return;
}


// Function: call_varargs_param at 0x401840
unsigned int call_varargs_param()
{
 return param_varargs_constprop_0(4, 10, 20, 30, 40);
}


// Function: sub_401857 at 0x401857
void sub_401857(unsigned int a0, unsigned int a1)
{
 param_func_ptr();
 return;
}


// Function: param_func_ptr at 0x401860
int param_func_ptr(unsigned int *a0, unsigned int a1)
{
 return a0(a1) + 10;
}


// Function: sub_401876 at 0x401876
void sub_401876()
{
 call_func_ptr_param();
 return;
}


// Function: call_func_ptr_param at 0x401880
unsigned int call_func_ptr_param()
{
 return 20;
}


// Function: sub_40188a at 0x40188a
void sub_40188a(unsigned int a0)
{
 param_double_ptr();
 return;
}


// Function: param_double_ptr at 0x401890
typedef struct struct_0_dp {
 char padding_0[1];  // For compatibility with global struct_0
 unsigned int field_0;
} struct_0_dp;

unsigned int param_double_ptr(struct_0_dp **ptr, unsigned int a1)
{
 if (!ptr)
 {
 return 4294967295;
 }
 else if (*(ptr))
 {
 (*ptr)->field_0 = a1;
 *(ptr) = NULL;
 return 1;
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4018b4 at 0x4018b4
void sub_4018b4()
{
}


// Function: sub_4018be at 0x4018be
void sub_4018be()
{
 call_double_ptr();
 return;
}


// Function: call_double_ptr at 0x4018c0
unsigned int call_double_ptr()
{
 return 21;
}


// Function: sub_4018ca at 0x4018ca
void sub_4018ca(unsigned int a0, unsigned int a1)
{
 param_complex_cast();
 return;
}


// Function: param_complex_cast at 0x4018d0
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1)
{
 if (!a1)
 {
 return *(a0);
 }
 else if (a1 == 1)
 {
 return a0[1] + *(a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_4018eb at 0x4018eb
void sub_4018eb()
{
}


// Function: sub_4018f3 at 0x4018f3
void sub_4018f3()
{
}


// Function: sub_4018fe at 0x4018fe
void sub_4018fe()
{
 call_complex_cast();
 return;
}


// Function: call_complex_cast at 0x401900
unsigned int call_complex_cast()
{
 return 305419896;
}


// Function: sub_40190a at 0x40190a
void sub_40190a(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 param_struct_byval();
 return;
}


// Function: param_struct_byval at 0x401910
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
 return a15 + a0;
}


// Function: sub_40191d at 0x40191d
void sub_40191d()
{
 call_struct_byval();
 return;
}


// Function: call_struct_byval at 0x401920
unsigned int call_struct_byval()
{
 return 15;
}


// Function: sub_40192a at 0x40192a
void sub_40192a(unsigned int a0, unsigned int a1)
{
 param_order_dep();
 return;
}


// Function: param_order_dep at 0x401930
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a1 + a0;
}


// Function: sub_40193d at 0x40193d
void sub_40193d()
{
 call_order_dep();
 return;
}


// Function: call_order_dep at 0x401940
unsigned int call_order_dep()
{
 return 4;
}


// Function: sub_40194a at 0x40194a
int sub_40194a()
{
 test_parameter_passing();
 return;
}


// Function: test_parameter_passing at 0x401950
extern unsigned int g_402124;

int test_parameter_passing()
{
 sub_4010a0(&g_402124);
 sub_4010c0(1, "PARAM-L1-01: %d\n", 15);
 sub_4010c0(1, "PARAM-L1-02: %d\n", 11);
 sub_4010c0(1, "PARAM-L2-01: %d\n", 4);
 sub_4010c0(1, "PARAM-L2-02: %d\n", 173);
 sub_4010c0(1, "PARAM-L2-03: %d\n", 300);
 sub_4010c0(1, "PARAM-L2-04: %d\n", param_varargs_constprop_0(4, 10, 20, 30, 40));
 sub_4010c0(1, "PARAM-L3-01: %d\n", 20);
 sub_4010c0(1, "PARAM-L3-02: %d\n", 21);
 sub_4010c0(1, "PARAM-L3-03: %d\n", 305419896);
 sub_4010c0(1, "PARAM-L3-04: %d\n", 15);
 return sub_4010c0(1, "PARAM-L3-05: %d\n", 4);
}


// Function: sub_401a61 at 0x401a61
void sub_401a61(unsigned int a0)
{
 ret_basic_type();
 return;
}


// Function: ret_basic_type at 0x401a70
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401a7b at 0x401a7b
void sub_401a7b()
{
 call_ret_basic();
 return;
}


// Function: call_ret_basic at 0x401a80
unsigned int call_ret_basic()
{
 return 42;
}


// Function: sub_401a8a at 0x401a8a
void sub_401a8a(unsigned int a0)
{
 ret_pointer();
 return;
}


// Function: ret_pointer at 0x401a90
int ret_pointer(unsigned int a0)
{
 return a0 + 4;
}


// Function: sub_401a9c at 0x401a9c
void sub_401a9c()
{
 call_ret_pointer();
 return;
}


// Function: call_ret_pointer at 0x401aa0
unsigned int call_ret_pointer()
{
 return 20;
}


// Function: sub_401aaa at 0x401aaa
void sub_401aaa(unsigned int a0, unsigned int a1, unsigned int a2)
{
 ret_small_struct();
 return;
}


// Function: ret_small_struct at 0x401ab0
unsigned int* ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
 *(ptr) = a1;
 ptr[1] = a2;
 return ptr;
}


// Function: sub_401ac8 at 0x401ac8
void sub_401ac8()
{
 call_ret_small_struct();
 return;
}


// Function: call_ret_small_struct at 0x401ad0
unsigned int call_ret_small_struct()
{
 return 7;
}


// Function: sub_401ada at 0x401ada
void sub_401ada(unsigned int a0, unsigned int a1)
{
 ret_large_struct();
 return;
}


// Function: ret_large_struct at 0x401ae0
unsigned int* ret_large_struct(unsigned int *ptr, unsigned int a1)
{
 *(ptr) = a1;
 ptr[1] = a1 + 1;
 ptr[2] = a1 + 2;
 ptr[3] = a1 + 3;
 ptr[4] = a1 + 4;
 ptr[5] = a1 + 5;
 ptr[6] = a1 + 6;
 ptr[7] = a1 + 7;
 ptr[8] = a1 + 8;
 ptr[9] = a1 + 9;
 ptr[10] = a1 + 10;
 ptr[11] = a1 + 11;
 ptr[12] = a1 + 12;
 ptr[13] = a1 + 13;
 ptr[15] = a1 + 15;
 ptr[14] = a1 + 14;
 return ptr;
}


// Function: sub_401b4d at 0x401b4d
void sub_401b4d()
{
 call_ret_large_struct();
 return;
}


// Function: call_ret_large_struct at 0x401b50
unsigned int call_ret_large_struct()
{
 return 215;
}


// Function: sub_401b5a at 0x401b5a
void sub_401b5a()
{
 ret_func_ptr();
 return;
}


// Function: ret_func_ptr at 0x401b60
unsigned int ret_func_ptr(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = __x86_get_pc_thunk_ax() + 9319;
 if (a0)
 return v0 - 11536;
 return v0 - 11616;
}


// Function: sub_401b84 at 0x401b84
void sub_401b84()
{
 call_ret_func_ptr();
 return;
}


// Function: call_ret_func_ptr at 0x401b90
unsigned int call_ret_func_ptr()
{
 return 10;
}


// Function: sub_401b9a at 0x401b9a
void sub_401b9a()
{
 ret_opaque_handle();
 return;
}


// Function: ret_opaque_handle at 0x401ba0
unsigned int ret_opaque_handle(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = __x86_get_pc_thunk_ax() + 9255;
 if (!a0)
 return v0 + 64;
 return v0 + 56;
}


// Function: sub_401bc4 at 0x401bc4
void sub_401bc4()
{
 call_ret_opaque();
 return;
}


// Function: call_ret_opaque at 0x401bd0
int call_ret_opaque()
{
 return *((int *)(__x86_get_pc_thunk_ax() + 9271));
}


// Function: sub_401be5 at 0x401be5
void sub_401be5(unsigned int a0, unsigned int a1, unsigned int a2)
{
 ret_complex_expr();
 return;
}


// Function: ret_complex_expr at 0x401bf0
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 if (a0 <= a1)
 return a2 + 10;
 return a2 * 2;
}


// Function: sub_401c0a at 0x401c0a
void sub_401c0a()
{
 call_ret_complex_expr();
 return;
}


// Function: call_ret_complex_expr at 0x401c10
unsigned int call_ret_complex_expr()
{
 return 40;
}


// Function: sub_401c1a at 0x401c1a
void sub_401c1a(unsigned int a0)
{
 ret_multi_branch();
 return;
}


// Function: ret_multi_branch at 0x401c20
unsigned int ret_multi_branch(unsigned int a0)
{
 unsigned int v0; // eax

 v0 = 4294967295;
 if (a0 <= 2)
 v0 = (a0 * 5 + 5) * 2;
 return v0;
}


// Function: sub_401c39 at 0x401c39
void sub_401c39()
{
 call_ret_multi_branch();
 return;
}


// Function: call_ret_multi_branch at 0x401c40
unsigned int call_ret_multi_branch()
{
 return 60;
}


// Function: sub_401c4a at 0x401c4a
void sub_401c4a(unsigned int a0, unsigned int a1)
{
 ret_void();
 return;
}


// Function: ret_void at 0x401c50
unsigned int * ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return ptr;
}


// Function: sub_401c62 at 0x401c62
void sub_401c62()
{
 call_ret_void();
 return;
}


// Function: call_ret_void at 0x401c70
unsigned int call_ret_void()
{
 return 21;
}


// Function: sub_401c7a at 0x401c7a
int sub_401c7a()
{
 test_return_values();
 return;
}


// Function: test_return_values at 0x401c80
extern unsigned int g_4022a0;
extern unsigned int g_4022be;
extern unsigned int g_4022da;
extern unsigned int g_4022f6;
extern unsigned int g_402311;
extern unsigned int g_40232e;
extern unsigned int g_40234a;
extern unsigned int g_402367;
extern unsigned int g_402383;
extern unsigned int g_40239f;
extern unsigned int handle1_1;

int test_return_values()
{
 sub_4010a0(&g_4022a0);
 sub_4010c0(1, &g_4022be, 42);
 sub_4010c0(1, &g_4022da, 20);
 sub_4010c0(1, &g_4022f6, 7);
 sub_4010c0(1, &g_402311, 215);
 sub_4010c0(1, &g_40232e, 10);
 sub_4010c0(1, &g_40234a, handle1_1);
 sub_4010c0(1, &g_402367, 40);
 sub_4010c0(1, &g_402383, 60);
 return sub_4010c0(1, &g_40239f, 21);
}


// Function: __x86_get_pc_thunk_ax at 0x401d56
unsigned int __x86_get_pc_thunk_ax()
{
 char v0; // [bp+0x0]

 return *((int *)&v0);
}


// Function: sub_401d5a at 0x401d5a
void sub_401d5a()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */
// Note: struct_0 is defined at the top of the file

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int __do_global_ctors_aux()
{
 struct struct_0 *v2; // edx
 struct struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct struct_0 *v6; // ebx
 struct struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = &v2->padding_0[227];
 v4 = *((int *)&ptr->padding_0[232]);
 if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[232];
 do
 {
 p = v6;
 v4();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401da2 at 0x401da2
void sub_401da2()
{
}



/* CRT stub function _fini removed by preprocessor */


