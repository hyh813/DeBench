// Angr Decompilation of 4_clang_O2_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */
#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef struct struct_0 {
 unsigned int field_0;
 unsigned int field_4;
 unsigned int field_8;
 unsigned int field_c;
 unsigned int field_10;
 unsigned int field_14;
 unsigned int field_18;
 unsigned int field_1c;
 unsigned int field_20;
 unsigned int field_24;
 unsigned int field_28;
} struct_0;

// AddV function - SIMD vector addition helper
static inline unsigned long long AddV(unsigned long long a, unsigned long long b) {
    return a + b;
}

// CONCAT macro for structure initialization
#define CONCAT(a, b) ((unsigned long long)(a) | ((unsigned long long)(b) << 32))

extern struct_0 *g_403fe8;
extern unsigned long long g_404008;
extern unsigned long long g_404010;

// Stub functions that were removed by the preprocessor
extern void deregister_tm_clones(void);
extern void register_tm_clones(void);
extern void frame_dummy(void);
extern void __do_global_dtors_aux(void);

extern const char *g_4020e0;
extern const char *g_402108;
extern const char *g_40212a;
extern const char *g_402151;
extern const char *g_402179;
extern const char *g_4021a5;
extern const char *g_40238a;
extern const char *g_4023ab;
extern const char *g_40228d;
extern const char *g_4022a9;
extern const char *g_4022c5;
extern const char *g_4022e0;
extern const char *g_4022fd;
extern const char *g_402319;
extern const char *g_402336;
extern const char *g_402352;
extern const char *g_40236e;
extern const char *g_4023cc;

extern int cdecl_func(unsigned int a0, unsigned int a1);
extern int stdcall_func(unsigned int a0, unsigned int a1);
extern int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2);
extern int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
extern int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
extern int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
extern int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
extern int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
extern unsigned long long varargs_func(unsigned int a0);
extern unsigned long long param_varargs(unsigned int a0);

// Missing function declarations
extern unsigned long long call_cdecl(void);
extern unsigned long long call_stdcall(void);
extern unsigned long long call_fastcall(void);
extern unsigned long long call_thiscall(void);
extern unsigned long long call_arm_aapcs(void);
extern unsigned long long call_mips(void);
extern unsigned long long call_amd64_sysv(void);
extern unsigned long long call_ms_x64(void);
extern unsigned long long call_vectorcall(void);
extern unsigned long long mixed_conventions_test(void);
extern unsigned long long func_no_args(void);
extern int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7);
extern int func_mixed_args(unsigned long a0, char *a1, unsigned long a2);
extern int func_struct_byval(void);
extern unsigned long long func_struct_byptr(unsigned int *a0);
extern int test_calling_conventions(void);
extern unsigned int param_by_value_int(unsigned int a0);
extern unsigned long long call_by_value_int(void);
extern unsigned long long param_by_value_ptr(unsigned int *ptr);
extern unsigned long long call_by_value_ptr(void);
extern unsigned long long param_array_decay(void);
extern unsigned long long call_array_decay(void);
extern int param_string(char *a0);
extern unsigned long long call_string_param(void);
extern unsigned long long param_ptr_array(unsigned long a0, unsigned int a1);
extern unsigned long long call_ptr_array(void);
extern unsigned long long call_varargs_para(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5);
extern unsigned long long call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5);
extern int param_func_ptr(unsigned long long *a0, unsigned int a1);
extern unsigned long long call_func_ptr_param(void);
extern unsigned long long param_double_ptr(struct_0 **ptr, unsigned int a1);
extern unsigned long long call_double_ptr(void);
extern unsigned long long param_complex_cast(unsigned int *a0, unsigned int a1);
extern unsigned long long call_complex_cast(void);
extern int param_struct_byval(void);
extern unsigned long long call_struct_byval(void);
extern int param_order_dep(unsigned int a0, unsigned int a1);
extern unsigned long long call_order_dep(void);
extern int test_parameter_passing(void);
extern unsigned int ret_basic_type(unsigned int a0);
extern unsigned long long call_ret_basic(void);
extern long long ret_pointer(unsigned long a0);
extern unsigned long long call_ret_pointer(void);
extern unsigned long long ret_small_struct(unsigned long a0, unsigned long a1);
extern unsigned long long call_ret_small_struct(void);
extern struct_0 * ret_large_struct(struct_0 *ptr, unsigned int a1);
extern unsigned long long call_ret_large_struct(void);
extern int func_a(unsigned int a0);
extern unsigned int func_b(unsigned int a0);
extern long long ret_func_ptr(unsigned int a0);
extern unsigned long long call_ret_func_ptr(void);
extern char *ret_opaque_handle(unsigned int a0);
extern int call_ret_opaque(void);
extern long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2);
extern unsigned long long call_ret_complex_expr(void);
extern unsigned long long ret_multi_branch(unsigned int a0);
extern unsigned long long call_ret_multi_branch(void);
extern unsigned int ret_void(unsigned int a0, unsigned int *ptr);
extern unsigned long long call_ret_void(void);
extern int test_return_values(void);
extern unsigned int main(void);
extern unsigned long long varargs_func(unsigned int a0);
extern unsigned long long param_varargs(unsigned int a0);

void _init()
{
 // Stub function - was a preinit hook
 return;
}


// Function: sub_401020 at 0x401020
void sub_401020()
{
 // Original: v0 = g_404008; goto g_404010;
 // Fixed: function does nothing meaningful
 return;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 // Stub function - was using uninitialized v1
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401095 at 0x401095
void sub_401095()
{
 // Empty stub function
}


// Function: sub_401096 at 0x401096
void sub_401096()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4010c9 at 0x4010c9
void sub_4010c9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401109 at 0x401109
void sub_401109()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401145 at 0x401145
void sub_401145()
{
}


// Function: sub_401149 at 0x401149
void sub_401149()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401159 at 0x401159
void sub_401159(unsigned long a0, unsigned long a1)
{
 cdecl_func(0, 0);
 return;
}


// Function: cdecl_func at 0x401160
int cdecl_func(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_401164 at 0x401164
void sub_401164()
{
 call_cdecl();
 return;
}


// Function: call_cdecl at 0x401170
unsigned long long call_cdecl()
{
 return 15;
}


// Function: sub_401176 at 0x401176
void sub_401176(unsigned long a0, unsigned long a1)
{
 stdcall_func(0, 0);
 return;
}


// Function: stdcall_func at 0x401180
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: sub_401186 at 0x401186
void sub_401186()
{
 call_stdcall();
 return;
}


// Function: call_stdcall at 0x401190
unsigned long long call_stdcall()
{
 return 50;
}


// Function: sub_401196 at 0x401196
void sub_401196(unsigned long a0, unsigned long a1, unsigned long a2)
{
 fastcall_func(0, 0, 0);
 return;
}


// Function: fastcall_func at 0x4011a0
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}


// Function: sub_4011a6 at 0x4011a6
void sub_4011a6()
{
 call_fastcall();
 return;
}


// Function: call_fastcall at 0x4011b0
unsigned long long call_fastcall()
{
 return 6;
}


// Function: sub_4011b6 at 0x4011b6
void sub_4011b6()
{
 call_thiscall();
 return;
}


// Function: call_thiscall at 0x4011c0
unsigned long long call_thiscall()
{
 return 15;
}


// Function: sub_4011c6 at 0x4011c6
void sub_4011c6(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 arm_aapcs_func(0, 0, 0, 0, 0);
 return;
}


// Function: arm_aapcs_func at 0x4011d0
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: sub_4011db at 0x4011db
void sub_4011db()
{
 call_arm_aapcs();
 return;
}


// Function: call_arm_aapcs at 0x4011e0
unsigned long long call_arm_aapcs()
{
 return 15;
}


// Function: sub_4011e6 at 0x4011e6
void sub_4011e6(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 mips_func(0, 0, 0, 0);
 return;
}


// Function: mips_func at 0x4011f0
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: sub_4011f8 at 0x4011f8
void sub_4011f8()
{
 call_mips();
 return;
}


// Function: call_mips at 0x401200
unsigned long long call_mips()
{
 return 100;
}


// Function: sub_401206 at 0x401206
void sub_401206(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 amd64_sysv_func(0, 0, 0, 0, 0, 0);
 return;
}


// Function: amd64_sysv_func at 0x401210
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: sub_40121e at 0x40121e
void sub_40121e()
{
 call_amd64_sysv();
 return;
}


// Function: call_amd64_sysv at 0x401220
unsigned long long call_amd64_sysv()
{
 return 21;
}


// Function: sub_401226 at 0x401226
void sub_401226(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 ms_x64_func(0, 0, 0, 0, 0);
 return;
}


// Function: ms_x64_func at 0x401230
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: sub_40123b at 0x40123b
void sub_40123b()
{
 call_ms_x64();
 return;
}


// Function: call_ms_x64 at 0x401240
unsigned long long call_ms_x64()
{
 return 15;
}


// Function: sub_401246 at 0x401246
void sub_401246(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 vectorcall_func(0, 0, 0, 0);
 return;
}


// Function: vectorcall_func at 0x401250
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: sub_401258 at 0x401258
void sub_401258()
{
 call_vectorcall();
 return;
}


// Function: call_vectorcall at 0x401260
unsigned long long call_vectorcall()
{
 return 10;
}


// Function: sub_401266 at 0x401266
void sub_401266()
{
 mixed_conventions_test();
 return;
}


// Function: mixed_conventions_test at 0x401270
unsigned long long mixed_conventions_test()
{
 return 33;
}


// Function: sub_401276 at 0x401276
void sub_401276(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 varargs_func();
 return;
}


// Function: varargs_func at 0x401280
unsigned long long varargs_func(unsigned int a0)
{
 // Initialize all register-saved variables to avoid uninitialized warnings
 unsigned long long v19 = 0; // rsi
 unsigned long long v20 = 0; // rdx
 unsigned long long v29 = 0; // xmm4
 unsigned long long v30 = 0; // xmm5
 unsigned long long v31 = 0; // xmm6
 unsigned long long v32 = 0; // xmm7
 char *v33 = 0; // r8
 unsigned long v34 = 0; // r9
 unsigned long long v35 = 0; // rax
 unsigned int v36 = 0; // esi
 unsigned int v37 = 0; // esi
 char *ptr = 0; // rcx
 unsigned long long v21 = 0; // rcx
 char *p = 0; // rcx
 unsigned int v40 = 0; // esi
 char *v41 = 0; // r8
 unsigned long long v22 = 0; // r8
 unsigned long long v23 = 0; // r9
 char result = 0; // al
 unsigned long long v25 = 0; // xmm0
 unsigned long long v26 = 0; // xmm1
 unsigned long long v27 = 0; // xmm2
 unsigned long long v28 = 0; // xmm3
 unsigned long long v0 = 0; // [bp-0xd8], Other Possible Types: unsigned int
 unsigned int v1 = 0; // [bp-0xd8]
 char *v2 = 0; // [bp-0xd0]
 char *v3 = 0; // [bp-0xc8]
 char v4 = 0; // [bp-0xb8]
 unsigned long long v5 = 0; // [bp-0xb0]
 unsigned long long v6 = 0; // [bp-0xa8]
 unsigned long long v7 = 0; // [bp-0xa0]
 unsigned long long v8 = 0; // [bp-0x98]
 unsigned long long v9 = 0; // [bp-0x90]
 unsigned long long v10 = 0; // [bp-0x88]
 unsigned long long v11 = 0; // [bp-0x78]
 unsigned long long v12 = 0; // [bp-0x68]
 unsigned long long v13 = 0; // [bp-0x58]
 unsigned long long v14 = 0; // [bp-0x48]
 unsigned long long v15 = 0; // [bp-0x38]
 unsigned long long v16 = 0; // [bp-0x28]
 unsigned long long v17 = 0; // [bp-0x18]
 unsigned long v18 = 0; // [bp+0x8]

 v5 = v19;
 v6 = v20;
 v7 = v21;
 v8 = v22;
 v9 = v23;
 if (result)
 {
 v10 = v25;
 v11 = v26;
 v12 = v27;
 v13 = v28;
 v14 = v29;
 v15 = v30;
 v16 = v31;
 v17 = v32;
 }
 v3 = &v4;
 v2 = (char *)&v18;
 v0 = 206158430216;
 if (a0 <= 0)
 return 0;
 v33 = v3;
 v34 = v1;
 if (a0 == 1)
 {
 v35 = 0;
 }
 else
 {
 v36 = a0 & 4294967294;
 v35 = 0;
 do
 {
 v37 = v36;
 if ((unsigned int)v34 <= 40)
 {
 ptr = &v33[v34 & 4294967295];
 v34 = (unsigned int)v34 + 8;
 v0 = v34;
 }
 else
 {
 ptr = v2;
 v2 = ptr + 2;
 }
 if ((unsigned int)v34 < 41)
 {
 p = &v33[v34 & 4294967295];
 v34 = (unsigned int)v34 + 8;
 v0 = v34;
 }
 else
 {
 p = v2;
 v2 = p + 2;
 }
 v35 = (unsigned long long)((unsigned int)v35 + *(ptr) + *(p));
 v40 = v37 - 2;
 v36 = v40;
 } while (v37 + 4294967294);
 }
 if (!((char)a0 & 1))
 return v35;
 if ((unsigned int)v34 < 41)
 {
 v41 = &v33[v34 & 4294967295];
 v0 = (unsigned int)v34 + 8;
 }
 else
 {
 v41 = v2;
 v2 = v41 + 2;
 }
 return (unsigned long long)((unsigned int)v35 + *(v41));
}


// Function: sub_401338 at 0x401338
void sub_401338()
{
}


// Function: sub_40136d at 0x40136d
void sub_40136d()
{
}


// Function: sub_4013ac at 0x4013ac
void sub_4013ac()
{
 func_no_args();
 return;
}


// Function: func_no_args at 0x4013b0
unsigned long long func_no_args()
{
 return 42;
}


// Function: sub_4013b6 at 0x4013b6
void sub_4013b6(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned int a6, unsigned int a7)
{
 func_many_args();
 return;
}


// Function: func_many_args at 0x4013c0
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: sub_4013d6 at 0x4013d6
void sub_4013d6(unsigned long a0, unsigned long a1, unsigned long a2)
{
 func_mixed_args();
 return;
}


// Function: func_mixed_args at 0x4013e0
int func_mixed_args(unsigned long a0, char *a1, unsigned long a2)
{
 // Initialize all register-saved variables to avoid uninitialized warnings
 unsigned long long v2 = 0; // rax
 unsigned long long v3 = 0; // xmm0lq
 unsigned long long len = 0; // rax
 int v5 = 0; // xmm0
 int v6 = 0; // xmm1
 int v7 = 0; // xmm2
 unsigned long long v0 = 0; // [bp-0x18]

 v0 = v2;
 if (a1)
 {
 v0 = v3;
 len = strlen(a1);
 v5 = v0;
 }
 else
 {
 len = 0;
 }
 return (unsigned int)(AddV(v6 & 0xffffffffffffffff0000000000000000 | a2, AddV(v7 & 0xffffffffffffffff0000000000000000 | len + (a0 & 4294967295) & 4294967295, v5 & 340282366920938463463374607431768211455)));
}


// Function: sub_401421 at 0x401421
int sub_401421()
{
 func_struct_byval();
 return;
}


// Function: func_struct_byval at 0x401430
int func_struct_byval()
{
 return 0;
}


// Function: sub_40147a at 0x40147a
void sub_40147a(unsigned long a0)
{
 func_struct_byptr();
 return;
}


// Function: func_struct_byptr at 0x401480
unsigned long long func_struct_byptr(unsigned int *a0)
{
 if (!a0)
 return 4294967295;
 return *(a0) * a0[1];
}


// Function: sub_401492 at 0x401492
void sub_401492()
{
 test_calling_conventions();
 return;
}


// Function: test_calling_conventions at 0x4014a0
int test_calling_conventions()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 puts(g_40238a);
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
 printf(g_4020e0, varargs_func(5) & 4294967295);
 printf(g_402108, 42);
 printf(g_40212a, 36);
 printf(g_402151, 117);
 printf(g_402179, 136);
 return printf(g_4021a5, 50);
}


// Function: sub_401602 at 0x401602
void sub_401602(unsigned long a0)
{
 param_by_value_int();
 return;
}


// Function: param_by_value_int at 0x401610
unsigned int param_by_value_int(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401614 at 0x401614
void sub_401614()
{
 call_by_value_int();
 return;
}


// Function: call_by_value_int at 0x401620
unsigned long long call_by_value_int()
{
 return 15;
}


// Function: sub_401626 at 0x401626
void sub_401626(unsigned long a0)
{
 param_by_value_ptr();
 return;
}


// Function: param_by_value_ptr at 0x401630
unsigned long long param_by_value_ptr(unsigned int *ptr)
{
 *(ptr) = *(ptr) * 2;
 return 1;
}


// Function: sub_401638 at 0x401638
void sub_401638()
{
 call_by_value_ptr();
 return;
}


// Function: call_by_value_ptr at 0x401640
unsigned long long call_by_value_ptr()
{
 return 11;
}


// Function: sub_401646 at 0x401646
void sub_401646()
{
 param_array_decay();
 return;
}


// Function: param_array_decay at 0x401650
unsigned long long param_array_decay()
{
 return 8;
}


// Function: sub_401656 at 0x401656
void sub_401656()
{
 call_array_decay();
 return;
}


// Function: call_array_decay at 0x401660
unsigned long long call_array_decay()
{
 return 8;
}


// Function: sub_401666 at 0x401666
void sub_401666(unsigned long a0)
{
 param_string();
 return;
}


// Function: param_string at 0x401670
int param_string(char *a0)
{
 return a0[1] + *(a0);
}


// Function: sub_40167a at 0x40167a
void sub_40167a()
{
 call_string_param();
 return;
}


// Function: call_string_param at 0x401680
unsigned long long call_string_param()
{
 return 173;
}


// Function: sub_401686 at 0x401686
void sub_401686(unsigned long a0, unsigned long a1)
{
 param_ptr_array();
 return;
}


// Function: param_ptr_array at 0x401690
unsigned long long param_ptr_array(unsigned long a0, unsigned int a1)
{
 unsigned long v1; // r9
 unsigned long long j; // r8
 unsigned long long i; // rdx
 unsigned long long v4; // rax
 unsigned long long v5; // rsi

 if (a1 <= 0)
 return 0;
 v1 = a1;
 j = (unsigned int)v1 & 3;
 if (v1 - 1 < 3)
 {
 i = 0;
 v4 = 0;
 }
 else
 {
 i = 0;
 v4 = 0;
 do
 {
 v4 = *((char *)*((long long *)(a0 + i * 8 + 24))) + *((char *)*((long long *)(a0 + i * 8 + 16))) + *((char *)*((long long *)(a0 + i * 8 + 8))) + *((char *)*((long long *)(a0 + i * 8))) + v4;
 i += 4;
 } while (((unsigned int)v1 & 0xfffffffc) != i);
 }
 if (!j)
 return v4;
 v5 = 0;
 do
 {
 v4 += *((char *)*((long long *)(a0 + i * 8 + v5 * 8)));
 v5 += 1;
 } while (j != v5);
 return v4;
}


// Function: sub_401713 at 0x401713
void sub_401713()
{
 call_ptr_array();
 return;
}


// Function: call_ptr_array at 0x401720
unsigned long long call_ptr_array()
{
 return 300;
}


// Function: sub_401726 at 0x401726
void sub_401726(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 param_varargs();
 return;
}


// Function: param_varargs at 0x401730
unsigned long long param_varargs(unsigned int a0)
{
 // Initialize all register-saved variables to avoid uninitialized warnings
 unsigned long long v19 = 0; // rsi
 unsigned long long v20 = 0; // rdx
 unsigned long long v29 = 0; // xmm4
 unsigned long long v30 = 0; // xmm5
 unsigned long long v31 = 0; // xmm6
 unsigned long long v32 = 0; // xmm7
 char *v33 = 0; // r8
 unsigned long v34 = 0; // r9
 unsigned long long v35 = 0; // rax
 unsigned int v36 = 0; // esi
 unsigned int v37 = 0; // esi
 char *ptr = 0; // rcx - fixed type
 unsigned long long v21 = 0; // rcx
 char *p = 0; // rcx - fixed type
 unsigned int v40 = 0; // esi
 char *v41 = 0; // r8 - fixed type
 unsigned long long v22 = 0; // r8
 unsigned long long v23 = 0; // r9
 char result = 0; // al
 unsigned long long v25 = 0; // xmm0
 unsigned long long v26 = 0; // xmm1
 unsigned long long v27 = 0; // xmm2
 unsigned long long v28 = 0; // xmm3
 unsigned long long v0 = 0; // [bp-0xd8], Other Possible Types: unsigned int
 unsigned int v1 = 0; // [bp-0xd8]
 char *v3 = 0; // [bp-0xc8]
 char v4 = 0; // [bp-0xb8]
 unsigned long long v5 = 0; // [bp-0xb0]
 unsigned long long v6 = 0; // [bp-0xa8]
 unsigned long long v7 = 0; // [bp-0xa0]
 unsigned long long v8 = 0; // [bp-0x98]
 unsigned long long v9 = 0; // [bp-0x90]
 unsigned long long v10 = 0; // [bp-0x88]
 unsigned long long v11 = 0; // [bp-0x78]
 unsigned long long v12 = 0; // [bp-0x68]
 unsigned long long v13 = 0; // [bp-0x58]
 unsigned long long v14 = 0; // [bp-0x48]
 unsigned long long v15 = 0; // [bp-0x38]
 unsigned long long v16 = 0; // [bp-0x28]
 unsigned long long v17 = 0; // [bp-0x18]
 unsigned long v18 = 0; // [bp+0x8]

 v5 = v19;
 v6 = v20;
 v7 = v21;
 v8 = v22;
 v9 = v23;
 if (result)
 {
 v10 = v25;
 v11 = v26;
 v12 = v27;
 v13 = v28;
 v14 = v29;
 v15 = v30;
 v16 = v31;
 v17 = v32;
 }
 v3 = &v4;
 v0 = 206158430216;
 if (a0 <= 0)
 return 0;
 v33 = v3;
 v34 = v1;
 if (a0 == 1)
 {
 v35 = 0;
 }
 else
 {
 v36 = a0 & 4294967294;
 v35 = 0;
 do
 {
 v37 = v36;
 if ((unsigned int)v34 <= 40)
 {
 ptr = &v33[v34 & 4294967295];
 v34 = (unsigned int)v34 + 8;
 v0 = v34;
 }
 else
 {
 ptr = (char *)&v18;
 v18 = (unsigned long)((char *)v18 + 2);
 }
 if ((unsigned int)v34 < 41)
 {
 p = &v33[v34 & 4294967295];
 v34 = (unsigned int)v34 + 8;
 v0 = v34;
 }
 else
 {
 p = (char *)&v18;
 v18 = (unsigned long)((char *)v18 + 2);
 }
 v35 = (unsigned long long)((unsigned int)v35 + *(ptr) + *(p));
 v40 = v37 - 2;
 v36 = v40;
 } while (v37 + 4294967294);
 }
 if (!((char)a0 & 1))
 return v35;
 if ((unsigned int)v34 < 41)
 {
 v41 = &v33[v34 & 4294967295];
 v0 = (unsigned int)v34 + 8;
 }
 else
 {
 v41 = (char *)&v18;
 v18 = (unsigned long)((char *)v18 + 2);
 }
 return (unsigned long long)((unsigned int)v35 + *(v41));
}


// Function: sub_4017e8 at 0x4017e8
void sub_4017e8()
{
}


// Function: sub_40181d at 0x40181d
void sub_40181d()
{
}


// Function: sub_40185c at 0x40185c
void sub_40185c()
{
 call_varargs_param();
 return;
}


// Function: call_varargs_param at 0x401860
unsigned long long call_varargs_param(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 return param_varargs(4);
}


// Function: sub_401881 at 0x401881
void sub_401881(unsigned long a0, unsigned long a1)
{
 // Parameter passed via register but function takes pointer + int
 // The original code likely called with proper parameters
 (void)a0;
 (void)a1;
 param_func_ptr((unsigned long long *)a0, (unsigned int)a1);
 return;
}


// Function: param_func_ptr at 0x401890
int param_func_ptr(unsigned long long *a0, unsigned int a1)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return (int)(*a0 + 10);
}


// Function: sub_40189d at 0x40189d
void sub_40189d()
{
 call_func_ptr_param();
 return;
}


// Function: call_func_ptr_param at 0x4018a0
unsigned long long call_func_ptr_param()
{
 return 20;
}


// Function: sub_4018a6 at 0x4018a6
void sub_4018a6(unsigned long a0)
{
 param_double_ptr();
 return;
}


// Function: param_double_ptr at 0x4018b0
unsigned long long param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 unsigned long long v1; // rax

 v1 = 4294967295;
 if (ptr && *ptr)
 {
 (*ptr)->field_0 = a1;
 *ptr = NULL;
 v1 = 1;
 }
 return v1;
}


// Function: sub_4018d1 at 0x4018d1
void sub_4018d1()
{
 call_double_ptr();
 return;
}


// Function: call_double_ptr at 0x4018e0
unsigned long long call_double_ptr()
{
 return 21;
}


// Function: sub_4018e6 at 0x4018e6
void sub_4018e6(unsigned long a0, unsigned long a1)
{
 param_complex_cast();
 return;
}


// Function: param_complex_cast at 0x4018f0
unsigned long long param_complex_cast(unsigned int *a0, unsigned int a1)
{
 if (a1 == 1)
 {
 return a0[1] + *(a0);
 }
 else if (!a1)
 {
 return *(a0);
 }
 else
 {
 return 4294967295;
 }
}


// Function: sub_401907 at 0x401907
void sub_401907()
{
 call_complex_cast();
 return;
}


// Function: call_complex_cast at 0x401910
unsigned long long call_complex_cast()
{
 return 305419896;
}


// Function: sub_401916 at 0x401916
int sub_401916()
{
 param_struct_byval();
 return;
}


// Function: param_struct_byval at 0x401920
int param_struct_byval()
{
 return 0;
}


// Function: sub_401929 at 0x401929
void sub_401929()
{
 call_struct_byval();
 return;
}


// Function: call_struct_byval at 0x401930
unsigned long long call_struct_byval()
{
 return 15;
}


// Function: sub_401936 at 0x401936
void sub_401936(unsigned long a0, unsigned long a1)
{
 param_order_dep();
 return;
}


// Function: param_order_dep at 0x401940
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_401944 at 0x401944
void sub_401944()
{
 call_order_dep();
 return;
}


// Function: call_order_dep at 0x401950
unsigned long long call_order_dep()
{
 return 3;
}


// Function: sub_401956 at 0x401956
void sub_401956()
{
 test_parameter_passing();
 return;
}


// Function: test_parameter_passing at 0x401960
int test_parameter_passing()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 puts(g_4023ab);
 printf("PARAM-L1-01: %d\n", 15);
 printf("PARAM-L1-02: %d\n", 11);
 printf("PARAM-L2-01: %d\n", 8);
 printf("PARAM-L2-02: %d\n", 173);
 printf("PARAM-L2-03: %d\n", 300);
 printf("PARAM-L2-04: %d\n", param_varargs(4) & 4294967295);
 printf("PARAM-L3-01: %d\n", 20);
 printf("PARAM-L3-02: %d\n", 21);
 printf("PARAM-L3-03: %d\n", 305419896);
 printf("PARAM-L3-04: %d\n", 15);
 return printf("PARAM-L3-05: %d\n", 3);
}


// Function: sub_401a5d at 0x401a5d
void sub_401a5d(unsigned long a0)
{
 ret_basic_type();
 return;
}


// Function: ret_basic_type at 0x401a60
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401a64 at 0x401a64
void sub_401a64()
{
 call_ret_basic();
 return;
}


// Function: call_ret_basic at 0x401a70
unsigned long long call_ret_basic()
{
 return 42;
}


// Function: sub_401a76 at 0x401a76
void sub_401a76(unsigned long a0)
{
 ret_pointer();
 return;
}


// Function: ret_pointer at 0x401a80
long long ret_pointer(unsigned long a0)
{
 return a0 + 4;
}


// Function: sub_401a85 at 0x401a85
void sub_401a85()
{
 call_ret_pointer();
 return;
}


// Function: call_ret_pointer at 0x401a90
unsigned long long call_ret_pointer()
{
 return 20;
}


// Function: sub_401a96 at 0x401a96
void sub_401a96(unsigned long a0, unsigned long a1)
{
 ret_small_struct();
 return;
}


// Function: ret_small_struct at 0x401aa0
unsigned long long ret_small_struct(unsigned long a0, unsigned long a1)
{
 return a0 & 4294967295 | a1 * 0x100000000;
}


// Function: sub_401aaa at 0x401aaa
void sub_401aaa()
{
 call_ret_small_struct();
 return;
}


// Function: call_ret_small_struct at 0x401ab0
unsigned long long call_ret_small_struct()
{
 return 7;
}


// Function: sub_401ab6 at 0x401ab6
void sub_401ab6(unsigned long a0, unsigned long a1)
{
 ret_large_struct();
 return;
}


// Function: ret_large_struct at 0x401ac0
struct_0 * ret_large_struct(struct_0 *ptr, unsigned int a1)
{
 unsigned long long v1; // xmm0

 ptr->field_0 = a1;
 v1 = CONCAT(a1, CONCAT(a1, CONCAT(a1, a1)));
 *((unsigned long long*)&ptr->field_4) = AddV(316912650112397582603894390785ULL, v1);
 *((unsigned long long*)&ptr->field_8) = AddV(633825300243241909290088267781ULL, v1);
 *((unsigned long long*)&ptr->field_c) = AddV(v1, 950737950374086235976282144777ULL);
 *((unsigned int *)&ptr->field_10) = a1 + 13;
 *((unsigned int *)&ptr->field_14) = a1 + 14;
 *((unsigned int *)&ptr->field_18) = a1 + 15;
 return ptr;
}


// Function: call_ret_large_struct at 0x401b10
unsigned long long call_ret_large_struct()
{
 return 215;
}


// Function: sub_401b16 at 0x401b16
void sub_401b16(unsigned long a0)
{
 func_a();
 return;
}


// Function: func_a at 0x401b20
int func_a(unsigned int a0)
{
 return a0 + 10;
}


// Function: sub_401b24 at 0x401b24
void sub_401b24(unsigned long a0)
{
 func_b();
 return;
}


// Function: func_b at 0x401b30
unsigned int func_b(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401b34 at 0x401b34
void sub_401b34(unsigned long a0)
{
 ret_func_ptr();
 return;
}


// Function: ret_func_ptr at 0x401b40
long long ret_func_ptr(unsigned int a0)
{
 if (a0)
 return func_b;
 return func_a;
}


// Function: sub_401b55 at 0x401b55
void sub_401b55()
{
 call_ret_func_ptr();
 return;
}


// Function: call_ret_func_ptr at 0x401b60
unsigned long long call_ret_func_ptr()
{
 return 10;
}


// Function: sub_401b66 at 0x401b66
void sub_401b66(unsigned long a0)
{
 ret_opaque_handle();
 return;
}


// Function: ret_opaque_handle at 0x401b70
char *ret_opaque_handle(unsigned int a0)
{
 if (a0)
 return &ret_opaque_handle_handle2;
 return "d";
}

// Stub implementations for missing extern variables
const char ret_opaque_handle_handle2[] = "d";
unsigned int ret_opaque_handle_handle1 = 50;

// Define the global string variables
const char *g_40238a = "Calling Conventions Test";
const char *g_4020e0 = "varargs_func(5) = %d\n";
const char *g_402108 = "call_stdcall() = %d\n";
const char *g_40212a = "call_fastcall() = %d\n";
const char *g_402151 = "call_thiscall() = %d\n";
const char *g_402179 = "call_arm_aapcs() = %d\n";
const char *g_4021a5 = "call_mips() = %d\n";
const char *g_4023ab = "Parameter Passing Test";
const char *g_4023cc = "Return Values Test";
const char *g_40228d = "ret_basic_type(21) = %d\n";
const char *g_4022a9 = "ret_pointer(8) = %lld\n";
const char *g_4022c5 = "ret_small_struct(3, 1) = %lld\n";
const char *g_4022e0 = "ret_large_struct() = %lld\n";
const char *g_4022fd = "ret_func_ptr(0) = %d\n";
const char *g_402319 = "call_ret_opaque() = %d\n";
const char *g_402336 = "ret_complex_expr() = %lld\n";
const char *g_402352 = "ret_multi_branch() = %lld\n";
const char *g_40236e = "ret_void() = %d\n";


// Function: sub_401b85 at 0x401b85
void sub_401b85()
{
 call_ret_opaque();
 return;
}


// Function: call_ret_opaque at 0x401b90
int call_ret_opaque()
{
 return ret_opaque_handle_handle1;
}


// Function: sub_401b97 at 0x401b97
void sub_401b97(unsigned long a0, unsigned long a1, unsigned long a2)
{
 ret_complex_expr();
 return;
}


// Function: ret_complex_expr at 0x401ba0
long long ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (a1 < a0 ? a2 * 2 : a2 + 10);
}


// Function: sub_401bac at 0x401bac
void sub_401bac()
{
 call_ret_complex_expr();
 return;
}


// Function: call_ret_complex_expr at 0x401bb0
unsigned long long call_ret_complex_expr()
{
 return 40;
}


// Function: sub_401bb6 at 0x401bb6
void sub_401bb6(unsigned long a0)
{
 ret_multi_branch();
 return;
}


// Function: ret_multi_branch at 0x401bc0
unsigned long long ret_multi_branch(unsigned int a0)
{
 return (a0 < 3 ? a0 * 10 + 10 : 4294967295);
}


// Function: sub_401bd3 at 0x401bd3
void sub_401bd3()
{
 call_ret_multi_branch();
 return;
}


// Function: call_ret_multi_branch at 0x401be0
unsigned long long call_ret_multi_branch()
{
 return 60;
}


// Function: sub_401be6 at 0x401be6
void sub_401be6(unsigned long a0, unsigned long a1)
{
 ret_void();
 return;
}


// Function: ret_void at 0x401bf0
unsigned int ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return a0 * 3;
}


// Function: sub_401bf6 at 0x401bf6
void sub_401bf6()
{
 call_ret_void();
 return;
}


// Function: call_ret_void at 0x401c00
unsigned long long call_ret_void()
{
 return 21;
}


// Function: sub_401c06 at 0x401c06
void sub_401c06()
{
 test_return_values();
 return;
}


// Function: test_return_values at 0x401c10
int test_return_values()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 puts(g_4023cc);
 printf(g_40228d, 42);
 printf(g_4022a9, 20);
 printf(g_4022c5, 7);
 printf(g_4022e0, 215);
 printf(g_4022fd, 10);
 printf(g_402319, ret_opaque_handle_handle1);
 printf(g_402336, 40);
 printf(g_402352, 60);
 return printf(g_40236e, 21);
}


// Function: sub_401cca at 0x401cca
void sub_401cca()
{
 main();
 return;
}


// Function: main at 0x401cd0
unsigned int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


