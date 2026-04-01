// Angr Decompilation of 4_clang_O0_no_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

/* Ensure abort is available */
#ifndef abort
#define abort() __builtin_abort()
#endif

/* __int128_t is GCC/Clang specific, define alternative for portability */
#ifdef __SIZEOF_INT128__
typedef __int128_t int128_t;
#else
/* For compilers without 128-bit support, use a struct with alignment */
struct __int128_compat {
    unsigned long long lo;
    unsigned long long hi;
} __attribute__((aligned(16)));
typedef struct __int128_compat int128_t;
#endif

/* Forward declarations for functions called before definition */
int cdecl_func(unsigned int a0, unsigned int a1);
int stdcall_func(unsigned int a0, unsigned int a1);
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2);
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5);
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
int callback_func(unsigned int a0);
long long func_a(unsigned int a0);
long long func_b(unsigned int a0);
long long (*ret_func_ptr(unsigned int a0))(unsigned int);

/* Forward declaration for struct_0 */
struct struct_0;

/* Define struct_0 typedef before it's used in forward declarations */
typedef struct struct_0 {
 unsigned int field_0;
} struct_0;

/* Additional forward declarations */
int call_cdecl(void);
int call_stdcall(void);
void sub_4024f1(void);
int call_fastcall(void);
unsigned long long call_thiscall(void);
int call_arm_aapcs(void);
int call_mips(void);
int call_amd64_sysv(void);
int call_ms_x64(void);
int call_vectorcall(void);
unsigned int mixed_conventions_test(void);
unsigned int varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, ...);
unsigned long long func_no_args(void);
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7);
int func_mixed_args(unsigned int a0, char *a1, unsigned long a2);
unsigned long long func_struct_byval(void);
unsigned int func_struct_byptr(unsigned int *a0);
int test_calling_conventions(void);
unsigned int param_by_value_int(unsigned int a0);
int call_by_value_int(void);
unsigned long long param_by_value_ptr(unsigned int *a0);
int call_by_value_ptr(void);
unsigned long long param_array_decay(unsigned long a0, unsigned long a1);
unsigned long long call_array_decay(void);
int param_string(char *a0);
int call_string_param(void);
unsigned int param_ptr_array(unsigned long a0, unsigned int a1);
int call_ptr_array(void);
unsigned int param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, ...);
int call_varargs_param(unsigned int v6, unsigned int v7, unsigned int v8, unsigned int v9, unsigned int v10, unsigned long long v11);
int param_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1);
int call_func_ptr_param(void);
unsigned int param_double_ptr(struct_0 **ptr, unsigned int a1);
long long call_double_ptr(void);
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1);
int call_complex_cast(void);
int param_struct_byval(void);
long long call_struct_byval(void);
int param_order_dep(unsigned int a0, unsigned int a1);
int call_order_dep(void);
int test_parameter_passing(void);
unsigned int ret_basic_type(unsigned int a0);
int call_ret_basic(void);
long long ret_pointer(unsigned long a0);
int call_ret_pointer(void);
unsigned long long ret_small_struct(unsigned int a0, unsigned long a1);
int call_ret_small_struct(void);
long long ret_large_struct(void *ptr, unsigned int a1);
int call_ret_large_struct(void);
long long func_a(unsigned int a0);
long long func_b(unsigned int a0);
int call_ret_func_ptr(void);
unsigned long long ret_opaque_handle(unsigned int a0);
int call_ret_opaque(void);
unsigned int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2);
int call_ret_complex_expr(void);
unsigned int ret_multi_branch(unsigned int a0);
unsigned int call_ret_multi_branch(void);
unsigned int * ret_void(unsigned int a0, unsigned int *ptr);
int call_ret_void(void);
int test_return_values(void);
unsigned int main(void);

/* CRT function stubs */
void deregister_tm_clones(void) {}
void register_tm_clones(void) {}
void __do_global_dtors_aux(void) {}
void frame_dummy(void) {}

/* Helper function for atomic operations */
static inline unsigned int AddV(unsigned int a, unsigned int b) {
    return a + b;
}

/* Function pointer typedef for ret_func_ptr */
typedef long long (*func_ptr_t)(unsigned int);

struct_0 *g_405fe8 = NULL;

unsigned long long * init_func(void)
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_405fe8;
 if (g_405fe8)
 v1 = (unsigned long long *)g_405fe8;
 return v1;
}


// Function: sub_401020 at 0x401020
unsigned long long g_406008 = 0;
unsigned long long g_406010 = 0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_406008;
 ((void (*)(void))g_406010)();
}


// Function: sub_40102c at 0x40102c
long long sub_40102c(char *v1)
{
 return strlen(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401095 at 0x401095
void sub_401095()
{
 abort();
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


// Function: sub_401172 at 0x401172
void sub_401172()
{
 call_cdecl();
 return;
}


// Function: call_cdecl at 0x401180
int call_cdecl()
{
 return cdecl_func(5, 10);
}


// Function: sub_401195 at 0x401195
void sub_401195(unsigned long a0, unsigned long a1)
{
 stdcall_func(0, 0);
 return;
}


// Function: stdcall_func at 0x4011a0
int stdcall_func(unsigned int a0, unsigned int a1)
{
 return a1 * a0;
}


// Function: sub_4011b3 at 0x4011b3
void sub_4011b3()
{
 call_stdcall();
 return;
}


// Function: call_stdcall at 0x4011c0
int call_stdcall()
{
 return stdcall_func(5, 10);
}


// Function: sub_4011d5 at 0x4011d5
void sub_4011d5(unsigned long a0, unsigned long a1, unsigned long a2)
{
 fastcall_func(0, 0, 0);
 return;
}


// Function: fastcall_func at 0x4011e0
int fastcall_func(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return a0 + a1 + a2;
}


// Function: sub_4011f8 at 0x4011f8
void sub_4011f8()
{
 call_fastcall();
 return;
}


// Function: call_fastcall at 0x401200
int call_fastcall()
{
 return fastcall_func(1, 2, 3);
}


// Function: sub_40121a at 0x40121a
void sub_40121a()
{
 call_thiscall();
 return;
}


// Function: call_thiscall at 0x401220
unsigned long long call_thiscall()
{
 return 15;
}


// Function: sub_40122b at 0x40122b
void sub_40122b(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 arm_aapcs_func(0, 0, 0, 0, 0);
 return;
}


// Function: arm_aapcs_func at 0x401230
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: sub_401255 at 0x401255
void sub_401255()
{
 call_arm_aapcs();
 return;
}


// Function: call_arm_aapcs at 0x401260
int call_arm_aapcs()
{
 return arm_aapcs_func(1, 2, 3, 4, 5);
}


// Function: sub_401285 at 0x401285
void sub_401285(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 mips_func(0, 0, 0, 0);
 return;
}


// Function: mips_func at 0x401290
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: sub_4012ae at 0x4012ae
void sub_4012ae()
{
 call_mips();
 return;
}


// Function: call_mips at 0x4012b0
int call_mips()
{
 return mips_func(10, 20, 30, 40);
}


// Function: sub_4012cf at 0x4012cf
void sub_4012cf(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 amd64_sysv_func(0, 0, 0, 0, 0, 0);
 return;
}


// Function: amd64_sysv_func at 0x4012d0
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0 + a1 + a2 + a3 + a4 + a5;
}


// Function: sub_4012fc at 0x4012fc
void sub_4012fc()
{
 call_amd64_sysv();
 return;
}


// Function: call_amd64_sysv at 0x401300
int call_amd64_sysv()
{
 return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


// Function: sub_40132b at 0x40132b
void sub_40132b(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
 ms_x64_func(0, 0, 0, 0, 0);
 return;
}


// Function: ms_x64_func at 0x401330
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
 return a0 + a1 + a2 + a3 + a4;
}


// Function: sub_401355 at 0x401355
void sub_401355()
{
 call_ms_x64();
 return;
}


// Function: call_ms_x64 at 0x401360
int call_ms_x64()
{
 return ms_x64_func(1, 2, 3, 4, 5);
}


// Function: sub_401385 at 0x401385
void sub_401385(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 vectorcall_func(0, 0, 0, 0);
 return;
}


// Function: vectorcall_func at 0x401390
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return a0 + a1 + a2 + a3;
}


// Function: sub_4013ae at 0x4013ae
void sub_4013ae()
{
 call_vectorcall();
 return;
}


// Function: call_vectorcall at 0x4013b0
int call_vectorcall()
{
 return vectorcall_func(1, 2, 3, 4);
}


// Function: sub_4013cf at 0x4013cf
void sub_4013cf()
{
 mixed_conventions_test();
 return;
}


// Function: mixed_conventions_test at 0x4013d0
unsigned int mixed_conventions_test()
{
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 v0 += cdecl_func(1, 2);
 v0 += stdcall_func(3, 4);
 v0 += fastcall_func(5, 6, 7);
 return v0;
}


// Function: sub_40142c at 0x40142c
void sub_40142c()
{
 varargs_func();
 return;
}


// Function: varargs_func at 0x401430
unsigned int varargs_func(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, ...)
{
 char result = 0; // al
 unsigned long long v25 = 0; // xmm0
 char *v34; // rax
 char *v35; // rdx
 unsigned long long v26 = 0; // xmm1
 unsigned long long v27 = 0; // xmm2
 unsigned long long v28 = 0; // xmm3
 unsigned long long v29 = 0; // xmm4
 unsigned long long v30 = 0; // xmm5
 unsigned long long v31 = 0; // xmm6
 unsigned long long v32 = 0; // xmm7
 unsigned long v33; // rdx
 char v1; // [bp-0xf8]
 unsigned int v2; // [bp-0xec]
 char v3; // [bp-0xe8]
 unsigned long long v4; // [bp-0xe0]
 unsigned long long v5; // [bp-0xd8]
 unsigned long long v6; // [bp-0xd0]
 unsigned long long v7; // [bp-0xc8]
 unsigned long long v8; // [bp-0xc0]
 unsigned long long v9; // [bp-0xb8]
 unsigned long long v10; // [bp-0xa8]
 unsigned long long v11; // [bp-0x98]
 unsigned long long v12; // [bp-0x88]
 unsigned long long v13; // [bp-0x78]
 unsigned long long v14; // [bp-0x68]
 unsigned long long v15; // [bp-0x58]
 unsigned long long v16; // [bp-0x48]
 unsigned int i; // [bp-0x30]
 unsigned int v18; // [bp-0x2c]
 unsigned int v19; // [bp-0x28]
 unsigned int v20; // [bp-0x24]
 char v21[4]; // [bp-0x20]
 char *v22; // [bp-0x18]
 unsigned long v23; // [bp+0x8]

 if (result)
 {
 v9 = v25;
 v10 = v26;
 v11 = v27;
 v12 = v28;
 v13 = v29;
 v14 = v30;
 v15 = v31;
 v16 = v32;
 }
 v8 = a5;
 v7 = a4;
 v6 = a3;
 v5 = a2;
 v4 = a1;
 v18 = 0;
 v22 = &v3;
 *((unsigned long **)&v21) = &v23;
 v20 = 48;
 v19 = 8;
 for (i = 0; i < a0; i += 1)
 {
 v1 = v19;
 v2 = v19;
 if (v19 <= 40)
 {
 v33 = v2;
 v34 = (char *)((unsigned long)v22 + (v33 & 4294967295));
 v19 = (unsigned int)v33 + 8;
 v18 = *(unsigned long *)(v34) + v18;
 }
 else
 {
 v35 = v21;
 *((unsigned long **)&v21) = (unsigned long long *)((char *)v35 + 2);
 v18 = *(unsigned long *)(v35) + v18;
 }
 }
 return v18;
}


// Function: sub_401558 at 0x401558
void sub_401558()
{
 func_no_args();
 return;
}


// Function: func_no_args at 0x401560
unsigned long long func_no_args()
{
 return 42;
}


// Function: sub_40156b at 0x40156b
void sub_40156b(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned int a6, unsigned int a7)
{
 func_many_args();
 return;
}


// Function: func_many_args at 0x401570
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
 return a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: sub_4015a8 at 0x4015a8
void sub_4015a8(unsigned long a0, unsigned long a1, unsigned long a2)
{
 func_mixed_args();
 return;
}


// Function: func_mixed_args at 0x4015b0
int func_mixed_args(unsigned int a0, char *a1, unsigned long a2)
{
 unsigned long v0; // [bp-0x38]
 unsigned int v1; // [bp-0x2c]

 v0 = (!a1 ? 0 : strlen(a1));
 v1 = (unsigned int)v0;
 return (int)(a0 + v1 + (unsigned int)a2);
}


// Function: sub_40161a at 0x40161a
void sub_40161a()
{
 func_struct_byval();
 return;
}


// Function: func_struct_byval at 0x401620
unsigned long long func_struct_byval()
{
 unsigned long long data[16]; // [bp-0x80]
 unsigned int i; // [bp-0x14]
 unsigned long long v2; // [bp-0x10]

 v2 = 0;
 for (i = 0; i < 16; i += 1)
 {
 v2 += data[i];
 }
 return 4294967295 & v2;
}


// Function: sub_401677 at 0x401677
void sub_401677(unsigned long a0)
{
 func_struct_byptr();
 return;
}


// Function: func_struct_byptr at 0x401680
unsigned int func_struct_byptr(unsigned int *a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = (!a0 ? 4294967295 : a0[1] * *(a0));
 return v0;
}


// Function: sub_4016b5 at 0x4016b5
void sub_4016b5()
{
 test_calling_conventions();
 return;
}


// Function: test_calling_conventions at 0x4016c0
char g_403020[] = "\n=== Testing Calling Conventions ===\n";
char g_4030e2[] = "CALL-L1-11: %d\n";
char g_40310a[] = "CALL-L1-12: %d\n";
char g_40312c[] = "CALL-L1-13: %d\n";
char g_403158[] = "CALL-L1-14: %d\n";
char g_403180[] = "CALL-L1-15: %d\n";
char g_4031ac[] = "CALL-L1-16: %d\n";

int test_calling_conventions()
{
 int v0; // [bp-0x148], Other Possible Types: unsigned int
 char v1; // [bp-0x138]
 char v2; // [bp-0x128]
 char v3; // [bp-0x118]
 char v4; // [bp-0x108]
 char v5; // [bp-0xf8]
 char v6; // [bp-0xe8]
 char v7; // [bp-0xd8]
 unsigned int v8; // [bp-0xbc]
 unsigned int v9[2]; // [bp-0xb8]
 unsigned int v10; // [bp-0xb0]
 unsigned int i; // [bp-0xac]
 unsigned long v12; // [bp-0xa8]
 char v13; // [bp-0x98]
 char v14; // [bp-0x88]
 char v15; // [bp-0x78]
 char v16; // [bp-0x68]
 char v17; // [bp-0x58]
 char v18; // [bp-0x48]
 char v19; // [bp-0x38]
 unsigned int v20; // [bp-0x24]
 char *v21; // [bp-0x20]
 unsigned int v22; // [bp-0x14]
 unsigned int v23; // [bp-0x10]
 unsigned int v24; // [bp-0xc]

 printf(g_403020);
 printf("CALL-L1-01: %d\n", call_cdecl() & 4294967295);
 printf("CALL-L1-02: %d\n", call_stdcall() & 4294967295);
 printf("CALL-L1-03: %d\n", call_fastcall() & 4294967295);
 printf("CALL-L1-04: %d\n", call_thiscall() & 4294967295);
 printf("CALL-L1-05: %d\n", call_arm_aapcs() & 4294967295);
 printf("CALL-L1-06: %d\n", call_mips() & 4294967295);
 printf("CALL-L1-07: %d\n", call_amd64_sysv() & 4294967295);
 printf("CALL-L1-08: %d\n", call_ms_x64() & 4294967295);
 printf("CALL-L1-09: %d\n", call_vectorcall() & 4294967295);
 printf("CALL-L1-10: %d\n", mixed_conventions_test() & 4294967295);
 v24 = varargs_func(5, 1, 2, 3, 4, 5);
 printf(g_4030e2, v24);
 v23 = func_no_args();
 printf(g_40310a, v23);
 v0 = 7;
 v22 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
 printf(g_40312c, v22);
 v21 = "test";
 v20 = func_mixed_args(10, v21, 100);
 printf(g_403158, v20);
 for (i = 0; i < 16; i += 1)
 {
 (&v12)[i] = i + 1;
 }
 memcpy(&v7, &v19, 16);
 memcpy(&v6, &v18, 16);
 memcpy(&v5, &v17, 16);
 memcpy(&v4, &v16, 16);
 memcpy(&v3, &v15, 16);
 memcpy(&v2, &v14, 16);
 memcpy(&v1, &v13, 16);
 memcpy(&v0, &v12, 16);
 v10 = func_struct_byval();
 printf(g_403180, v10);
 *(&v9) = 4294967295;
 v8 = func_struct_byptr(&v9);
 return printf(g_4031ac, v8);
}


// Function: sub_401969 at 0x401969
void sub_401969(unsigned long a0)
{
 param_by_value_int();
 return;
}


// Function: param_by_value_int at 0x401970
unsigned int param_by_value_int(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 v0 *= 2;
 return v0;
}


// Function: sub_401985 at 0x401985
void sub_401985()
{
 call_by_value_int();
 return;
}


// Function: call_by_value_int at 0x401990
int call_by_value_int()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 5;
 v0 = param_by_value_int(v1);
 return v1 + v0;
}


// Function: sub_4019b6 at 0x4019b6
void sub_4019b6(unsigned long a0)
{
 param_by_value_ptr();
 return;
}


// Function: param_by_value_ptr at 0x4019c0
unsigned long long param_by_value_ptr(unsigned int *a0)
{
 unsigned int *ptr; // [bp-0x10], Other Possible Types: unsigned long long

 ptr = a0;
 *(ptr) = *(ptr) * 2;
 ptr = 0;
 if (ptr)
 return 0;
 return 1;
}


// Function: sub_4019f3 at 0x4019f3
void sub_4019f3()
{
 call_by_value_ptr();
 return;
}


// Function: call_by_value_ptr at 0x401a00
int call_by_value_ptr()
{
 unsigned int v0; // [bp-0x1c]
 char *v1; // [bp-0x18]
 unsigned int v2; // [bp-0xc]

 v2 = 5;
 v1 = &v2;
 v0 = param_by_value_ptr(v1);
 return v2 + v0;
}


// Function: sub_401a2f at 0x401a2f
void sub_401a2f(unsigned long a0, unsigned long a1)
{
 param_array_decay();
 return;
}


// Function: param_array_decay at 0x401a30
unsigned long long param_array_decay(unsigned long a0, unsigned long a1)
{
 return 8;
}


// Function: sub_401a42 at 0x401a42
void sub_401a42()
{
 call_array_decay();
 return;
}


// Function: call_array_decay at 0x401a50
unsigned long long call_array_decay()
{
 char v0; // [bp-0x38]

 memset(&v0, 0, 40);
 return param_array_decay(&v0, 10);
}


// Function: sub_401a7c at 0x401a7c
void sub_401a7c(unsigned long a0)
{
 param_string();
 return;
}


// Function: param_string at 0x401a80
int param_string(char *a0)
{
 return *(a0) + a0[1];
}


// Function: sub_401a9b at 0x401a9b
void sub_401a9b()
{
 call_string_param();
 return;
}


// Function: call_string_param at 0x401aa0
int call_string_param()
{
 return param_string("Hello");
}


// Function: sub_401ab2 at 0x401ab2
void sub_401ab2(unsigned long a0, unsigned long a1)
{
 param_ptr_array();
 return;
}


// Function: param_ptr_array at 0x401ac0
unsigned int param_ptr_array(unsigned long a0, unsigned int a1)
{
 unsigned int i; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]

 v1 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v1 += *((char *)*((long long *)(a0 + i * 8)));
 }
 return v1;
}


// Function: sub_401b0d at 0x401b0d
void sub_401b0d()
{
 call_ptr_array();
 return;
}


// Function: call_ptr_array at 0x401b10
char *g_405de0 = "Hello";
char *g_405de8 = "World";
char *g_405df0 = "Test";

int call_ptr_array()
{
 char *v0; // [bp-0x28]
 char *v1; // [bp-0x20]
 char *v2; // [bp-0x18]

 v0 = g_405de0;
 v1 = g_405de8;
 v2 = g_405df0;
 return param_ptr_array((unsigned long)&v0, 3);
}


// Function: sub_401b4d at 0x401b4d
void sub_401b4d()
{
 param_varargs();
 return;
}


// Function: param_varargs at 0x401b50
unsigned int param_varargs(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, ...)
{
 char result = 0; // al
 unsigned long long v25 = 0; // xmm0
 char *v34; // rax
 char *v35; // rdx
 unsigned long long v26 = 0; // xmm1
 unsigned long long v27 = 0; // xmm2
 unsigned long long v28 = 0; // xmm3
 unsigned long long v29 = 0; // xmm4
 unsigned long long v30 = 0; // xmm5
 unsigned long long v31 = 0; // xmm6
 unsigned long long v32 = 0; // xmm7
 unsigned long v33; // rdx
 char *ptr; // [bp-0x100]
 char v1; // [bp-0xf8]
 unsigned int v2; // [bp-0xec]
 char v3; // [bp-0xe8]
 unsigned long long v4; // [bp-0xe0]
 unsigned long long v5; // [bp-0xd8]
 unsigned long long v6; // [bp-0xd0]
 unsigned long long v7; // [bp-0xc8]
 unsigned long long v8; // [bp-0xc0]
 unsigned long long v9; // [bp-0xb8]
 unsigned long long v10; // [bp-0xa8]
 unsigned long long v11; // [bp-0x98]
 unsigned long long v12; // [bp-0x88]
 unsigned long long v13; // [bp-0x78]
 unsigned long long v14; // [bp-0x68]
 unsigned long long v15; // [bp-0x58]
 unsigned long long v16; // [bp-0x48]
 unsigned int i; // [bp-0x30]
 unsigned int v18; // [bp-0x2c]
 unsigned int v19; // [bp-0x28]
 unsigned int v20; // [bp-0x24]
 char v21[4]; // [bp-0x20]
 char *v22; // [bp-0x18]
 unsigned long v23; // [bp+0x8]

 if (result)
 {
 v9 = v25;
 v10 = v26;
 v11 = v27;
 v12 = v28;
 v13 = v29;
 v14 = v30;
 v15 = v31;
 v16 = v32;
 }
 v8 = a5;
 v7 = a4;
 v6 = a3;
 v5 = a2;
 v4 = a1;
 v22 = &v3;
 *((unsigned long **)&v21) = &v23;
 v20 = 48;
 v19 = 8;
 v18 = 0;
 for (i = 0; i < a0; i += 1)
 {
 v1 = (char)v19;
 v2 = v19;
 if (v19 <= 40)
 {
 v33 = v2;
 v34 = (char *)((unsigned long)v22 + (v33 >> 3));
 v19 = (unsigned int)v33 + 8;
 ptr = v34;
 }
 else
 {
 v35 = v21;
 *((unsigned long **)&v21) = (unsigned long long *)((char *)v35 + 2);
 ptr = v35;
 }
 *(char *)&v18 = *(ptr) + v18;
 }
 return v18;
}


// Function: sub_401c78 at 0x401c78
void sub_401c78()
{
 call_varargs_param();
 return;
}


// Function: call_varargs_param at 0x401c80
int call_varargs_param(unsigned int v6, unsigned int v7, unsigned int v8, unsigned int v9, unsigned int v10, unsigned long long v11)
{
 return param_varargs(4, v6, v7, v8, v9, v10);
}


// Function: sub_401ca7 at 0x401ca7
void sub_401ca7(unsigned long a0, unsigned long a1)
{
 param_func_ptr();
 return;
}


// Function: param_func_ptr at 0x401cb0
int param_func_ptr(unsigned int (*a0)(unsigned int), unsigned int a1)
{
 return a0(a1) + 10;
}


// Function: sub_401cd1 at 0x401cd1
void sub_401cd1()
{
 call_func_ptr_param();
 return;
}


// Function: call_func_ptr_param at 0x401ce0
int call_func_ptr_param()
{
 return param_func_ptr(callback_func, 5);
}


// Function: sub_401cf7 at 0x401cf7
void sub_401cf7(unsigned long a0)
{
 callback_func();
 return;
}


// Function: callback_func at 0x401d00
int callback_func(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401d0f at 0x401d0f
void sub_401d0f(unsigned long a0, unsigned long a1)
{
 param_double_ptr();
 return;
}


// Function: param_double_ptr at 0x401d10
unsigned int param_double_ptr(struct_0 **ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 if (ptr && *(ptr))
 {
 (*ptr)->field_0 = a1;
 *(ptr) = NULL;
 v0 = 1;
 return v0;
 }
 v0 = 4294967295;
 return v0;
}


// Function: sub_401d63 at 0x401d63
void sub_401d63()
{
 call_double_ptr();
 return;
}


// Function: call_double_ptr at 0x401d70
long long call_double_ptr()
{
 unsigned int v0; // [bp-0x1c]
 char *v1; // [bp-0x18]
 unsigned int v2; // [bp-0xc]

 v2 = 10;
 v1 = &v2;
 v0 = param_double_ptr(&v1, 20);
 return v2 + (!v1 ? 1 : 0);
}


// Function: sub_401db5 at 0x401db5
void sub_401db5(unsigned long a0, unsigned long a1)
{
 param_complex_cast();
 return;
}


// Function: param_complex_cast at 0x401dc0
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1)
{
 unsigned int ptr[2]; // [bp-0x40]
 unsigned int p[2]; // [bp-0x38]
 unsigned int v2[2]; // [bp-0x30]
 unsigned int v3[2]; // [bp-0x28]
 unsigned int v4; // [bp-0xc]

 if (!a1)
 {
 *(unsigned int **)&v3[0] = (unsigned int *)a0;
 *(unsigned int **)&v2[0] = (unsigned int *)&v3[0];
 *(unsigned int **)&p[0] = (unsigned int *)&v2[0];
 v4 = p[0];
 return v4;
 }
 else if (a1 == 1)
 {
 *(unsigned int **)&ptr[0] = (unsigned int *)a0;
 v4 = ptr[0] + ptr[1];
 return v4;
 }
 else
 {
 v4 = 4294967295;
 return v4;
 }
}


// Function: sub_401e33 at 0x401e33
void sub_401e33()
{
 call_complex_cast();
 return;
}


// Function: call_complex_cast at 0x401e40
int call_complex_cast()
{
 unsigned int v0[3]; // [bp-0x18]
 unsigned int v1; // [bp-0xc]

 v1 = 305419896;
 v0[0] = 858993459300 & 0xFFFFFFFF;
 v0[1] = (858993459300 >> 32) & 0xFFFFFFFF;
 param_complex_cast(&v0, 1);
 return param_complex_cast(&v1, 0);
}


// Function: sub_401e79 at 0x401e79
int sub_401e79()
{
 param_struct_byval();
 return;
}


// Function: param_struct_byval at 0x401e80
int param_struct_byval()
{
 return 0;
}


// Function: sub_401e8f at 0x401e8f
void sub_401e8f()
{
 call_struct_byval();
 return;
}


// Function: call_struct_byval at 0x401e90
long long call_struct_byval()
{
 char v0; // [bp-0x98]
 char v1; // [bp-0x88]
 char v2; // [bp-0x78]
 char v3; // [bp-0x68]
 unsigned int i; // [bp-0x4c]
 unsigned long v5; // [bp-0x48]
 char v6; // [bp-0x38]
 char v7; // [bp-0x28]
 char v8; // [bp-0x18]

 for (i = 0; i < 16; i += 1)
 {
 *((unsigned int *)((char *)&v5 + 4 * i)) = i;
 }
 memcpy(&v3, &v8, 16);
 memcpy(&v2, &v7, 16);
 memcpy(&v1, &v6, 16);
 memcpy(&v0, &v5, 16);
 return param_struct_byval();
}


// Function: sub_401ef5 at 0x401ef5
void sub_401ef5(unsigned long a0, unsigned long a1)
{
 param_order_dep();
 return;
}


// Function: param_order_dep at 0x401f00
int param_order_dep(unsigned int a0, unsigned int a1)
{
 return a0 + a1;
}


// Function: sub_401f12 at 0x401f12
void sub_401f12()
{
 call_order_dep();
 return;
}


// Function: call_order_dep at 0x401f20
int call_order_dep()
{
 unsigned int result; // [bp-0xc]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0xc]

 result = 0;
 v1 = result + 1;
 v2 = v1 + 1;
 return param_order_dep(result + 1, v1 + 1);
}


// Function: sub_401f4c at 0x401f4c
void sub_401f4c()
{
 test_parameter_passing();
 return;
}


// Function: test_parameter_passing at 0x401f50
char g_4031eb[] = "\n=== Testing Parameter Passing ===\n";

int test_parameter_passing()
{
 unsigned long long v11; // r9
 unsigned int v6; // rdi
 unsigned int v7; // rsi
 unsigned int v8; // rdx
 unsigned int v9; // rcx
 unsigned int v10; // r8

 v6 = 10;
 v7 = 20;
 v8 = 30;
 v9 = 40;
 v10 = 50;
 v11 = 60;

 printf(g_4031eb);
 printf("PARAM-L1-01: %d\n", call_by_value_int() & 4294967295);
 printf("PARAM-L1-02: %d\n", call_by_value_ptr() & 4294967295);
 printf("PARAM-L2-01: %d\n", call_array_decay() & 4294967295);
 printf("PARAM-L2-02: %d\n", call_string_param() & 4294967295);
 printf("PARAM-L2-03: %d\n", call_ptr_array() & 4294967295);
 printf("PARAM-L2-04: %d\n", call_varargs_param(v6, v7, v8, v9, v10, v11) & 4294967295);
 printf("PARAM-L3-01: %d\n", call_func_ptr_param() & 4294967295);
 printf("PARAM-L3-02: %d\n", call_double_ptr() & 4294967295);
 printf("PARAM-L3-03: %d\n", call_complex_cast() & 4294967295);
 printf("PARAM-L3-04: %d\n", call_struct_byval() & 4294967295);
 return printf("PARAM-L3-05: %d\n", call_order_dep() & 4294967295);
}


// Function: sub_40204b at 0x40204b
void sub_40204b(unsigned long a0)
{
 ret_basic_type();
 return;
}


// Function: ret_basic_type at 0x402050
unsigned int ret_basic_type(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_40205f at 0x40205f
void sub_40205f()
{
 call_ret_basic();
 return;
}


// Function: call_ret_basic at 0x402060
int call_ret_basic()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 21;
 v0 = ret_basic_type(v1);
 return v0;
}


// Function: sub_402083 at 0x402083
void sub_402083(unsigned long a0)
{
 ret_pointer();
 return;
}


// Function: ret_pointer at 0x402090
unsigned long long ret_pointer(unsigned long a0)
{
 return a0 + 4;
}


// Function: sub_4020a2 at 0x4020a2
void sub_4020a2()
{
 call_ret_pointer();
 return;
}


// Function: call_ret_pointer at 0x4020b0
int call_ret_pointer()
{
 unsigned int *v0; // [bp-0x20]
 unsigned long v1; // [bp-0x14]
 unsigned int v2; // [bp-0xc]

 v1 = 85899345930;
 v2 = 30;
 v0 = (unsigned int *)ret_pointer(v1);
 return *(v0);
}


// Function: sub_4020e5 at 0x4020e5
void sub_4020e5(unsigned long a0, unsigned long a1)
{
 ret_small_struct();
 return;
}


// Function: ret_small_struct at 0x4020f0
unsigned long long ret_small_struct(unsigned int a0, unsigned long a1)
{
 unsigned int v0; // [bp-0x10]

 v0 = a0;
 return *((long long *)&v0);
}


// Function: sub_40210c at 0x40210c
void sub_40210c()
{
 call_ret_small_struct();
 return;
}


// Function: call_ret_small_struct at 0x402110
int call_ret_small_struct()
{
 unsigned long v0; // [bp-0x10]

 v0 = ret_small_struct(3, 4);
 return (int)v0 + *((int *)((char *)&v0 + 4));
}


// Function: sub_402137 at 0x402137
void sub_402137(unsigned long a0, unsigned long a1)
{
 ret_large_struct();
 return;
}


// Function: ret_large_struct at 0x402140
long long ret_large_struct(void *ptr, unsigned int a1)
{
 unsigned int i; // [bp-0x10]
 unsigned char *p = (unsigned char *)ptr;

 for (i = 0; i < 16; i += 1)
 {
 *((unsigned int *)(p + i * 4)) = a1 + i;
 }
 return (long long)ptr;
}


// Function: sub_402185 at 0x402185
void sub_402185()
{
 call_ret_large_struct();
 return;
}


// Function: call_ret_large_struct at 0x402190
int call_ret_large_struct()
{
 char v0[64]; // [bp-0x40]
 unsigned int v1; // [bp-0x4]

 ret_large_struct(v0, 100);
 v1 = *((unsigned int *)((char *)v0 + 4));
 return *((int *)v0) + v1;
}


// Function: sub_4021b2 at 0x4021b2
void sub_4021b2(unsigned long a0)
{
 func_a();
 return;
}


// Function: func_a at 0x4021c0
long long func_a(unsigned int a0)
{
 return (long long)(a0 + 10);
}


// Function: sub_4021cf at 0x4021cf
void sub_4021cf(unsigned long a0)
{
 func_b();
 return;
}


// Function: func_b at 0x4021d0
long long func_b(unsigned int a0)
{
 return (long long)(a0 * 2);
}


// Function: sub_4021df at 0x4021df
void sub_4021df(unsigned long a0)
{
 ret_func_ptr();
 return;
}


// Function: ret_func_ptr at 0x4021e0
long long (*ret_func_ptr(unsigned int a0))(unsigned int)
{
 if (!a0)
 return func_a;
 return func_b;
}


// Function: sub_402201 at 0x402201
void sub_402201()
{
 call_ret_func_ptr();
 return;
}


// Function: call_ret_func_ptr at 0x402210
long long call_ret_func_ptr()
{
 long long (*v0)(unsigned int); // [bp-0x10]

 v0 = ret_func_ptr(1);
 return v0(5);
}


// Function: sub_402234 at 0x402234
void sub_402234(unsigned long a0)
{
 ret_opaque_handle();
 return;
}


// Function: ret_opaque_handle at 0x402240
char ret_opaque_handle_handle2 = 0;

unsigned long long ret_opaque_handle(unsigned int a0)
{
 if (a0)
 return (unsigned long long)&ret_opaque_handle_handle2;
 return (unsigned long long)"d";
}


// Function: sub_402261 at 0x402261
void sub_402261()
{
 call_ret_opaque();
 return;
}


// Function: call_ret_opaque at 0x402270
int call_ret_opaque()
{
 char *v0; // [bp-0x10]

 v0 = (char *)ret_opaque_handle(0);
 return *(v0);
}


// Function: sub_40228f at 0x40228f
void sub_40228f(unsigned long a0, unsigned long a1, unsigned long a2)
{
 ret_complex_expr();
 return;
}


// Function: ret_complex_expr at 0x402290
unsigned int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x18]

 v0 = (a0 <= a1 ? a2 + 10 : a2 * 2);
 return v0;
}


// Function: sub_4022c5 at 0x4022c5
void sub_4022c5()
{
 call_ret_complex_expr();
 return;
}


// Function: call_ret_complex_expr at 0x4022d0
int call_ret_complex_expr()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = ret_complex_expr(5, 3, 10);
 v0 = ret_complex_expr(3, 5, 10);
 return v1 + v0;
}


// Function: sub_402312 at 0x402312
void sub_402312(unsigned long a0)
{
 ret_multi_branch();
 return;
}


// Function: ret_multi_branch at 0x402320
unsigned int ret_multi_branch(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = (!a0 ? 10 : (a0 == 1 ? 20 : (a0 == 2 ? 30 : 4294967295)));
 return v0;
}


// Function: sub_40238c at 0x40238c
void sub_40238c()
{
 call_ret_multi_branch();
 return;
}


// Function: call_ret_multi_branch at 0x402390
unsigned int call_ret_multi_branch()
{
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 v0 += ret_multi_branch(0);
 v0 += ret_multi_branch(1);
 v0 += ret_multi_branch(2);
 return v0;
}


// Function: sub_4023d5 at 0x4023d5
void sub_4023d5(unsigned long a0, unsigned long a1)
{
 ret_void();
 return;
}


// Function: ret_void at 0x4023e0
unsigned int * ret_void(unsigned int a0, unsigned int *ptr)
{
 *(ptr) = a0 * 3;
 return ptr;
}


// Function: sub_4023f7 at 0x4023f7
void sub_4023f7()
{
 call_ret_void();
 return;
}


// Function: call_ret_void at 0x402400
int call_ret_void()
{
 unsigned int v0; // [bp-0xc]

 ret_void(7, &v0);
 return v0;
}


// Function: sub_40241f at 0x40241f
void sub_40241f()
{
 test_return_values();
 return;
}


// Function: test_return_values at 0x402420
char g_4032c8[] = "\n=== Testing Return Values ===\n";
char g_4032e7[] = "RET-L1-01: %d\n";
char g_403303[] = "RET-L1-02: %d\n";
char g_40331f[] = "RET-L1-03: %d\n";
char g_40333a[] = "RET-L1-04: %d\n";
char g_403357[] = "RET-L1-05: %d\n";
char g_403373[] = "RET-L1-06: %d\n";
char g_403390[] = "RET-L1-07: %d\n";
char g_4033ac[] = "RET-L1-08: %d\n";
char g_4033c8[] = "RET-L1-09: %d\n";

int test_return_values()
{
 printf(g_4032c8);
 printf(g_4032e7, call_ret_basic() & 4294967295);
 printf(g_403303, call_ret_pointer() & 4294967295);
 printf(g_40331f, call_ret_small_struct() & 4294967295);
 printf(g_40333a, call_ret_large_struct() & 4294967295);
 printf(g_403357, call_ret_func_ptr() & 4294967295);
 printf(g_403373, call_ret_opaque() & 4294967295);
 printf(g_403390, call_ret_complex_expr() & 4294967295);
 printf(g_4033ac, call_ret_multi_branch() & 4294967295);
 return printf(g_4033c8, call_ret_void() & 4294967295);
}


// Function: sub_4024f1 at 0x4024f1
void sub_4024f1()
{
 main();
 return;
}


// Function: main at 0x402500
unsigned int main()
{
 unsigned int result; // [bp-0xc]

 result = 0;
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


