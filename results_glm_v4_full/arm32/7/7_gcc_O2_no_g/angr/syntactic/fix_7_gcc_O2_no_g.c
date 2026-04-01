// Angr Decompilation of 7_gcc_O2_no_g
// Platform: ARMEL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>

#define NULL ((void*)0)

/* CRT stub function _init removed by preprocessor */



// Function: sub_10514 at 0x10514
extern unsigned int g_22008;

unsigned int div_zero_caught;
unsigned int segv_caught;

int sub_10514()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}


// Function: main at 0x105dc
unsigned int main()
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10624 at 0x10624
void sub_10624()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: div_zero_handler at 0x106e4
extern unsigned int div_zero_caught;
extern unsigned int jmp_buffer;

int div_zero_handler()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 div_zero_caught = 1;
 __longjmp_chk(0x22070, 1); /* do not return */
}


// Function: segv_handler at 0x106fc
extern unsigned int segv_buffer;
extern unsigned int segv_caught;

int segv_handler()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 segv_caught = 1;
 __longjmp_chk(0x22200, 1); /* do not return */
}


// Function: param_fake_branch at 0x10718
int param_fake_branch()
{
 unsigned int v0; // r0

 return v0;
}


// Function: call_fake_branch at 0x1071c
unsigned int call_fake_branch()
{
 return 10;
}


// Helper function: Count Leading Zeros
static unsigned int Clz(unsigned int x)
{
 if (x == 0) return 32;
 unsigned int n = 0;
 if (x <= 0x0000FFFF) { n += 16; x <<= 16; }
 if (x <= 0x00FFFFFF) { n += 8; x <<= 8; }
 if (x <= 0x0FFFFFFF) { n += 4; x <<= 4; }
 if (x <= 0x3FFFFFFF) { n += 2; x <<= 2; }
 if (x <= 0x7FFFFFFF) { n += 1; }
 return n;
}

// Helper function: ARM condition code calculation (Angr decompilation artifact)
static unsigned int armg_calculate_condition(unsigned int cond, unsigned int cc_dep1, unsigned int cc_dep2, unsigned int cc_ndep)
{
 // Simplified stub that returns reasonable values for common conditions
 switch (cond) {
 case 0: return cc_dep1 & cc_dep2;  // EQ
 case 1: return !(cc_dep1 & cc_dep2); // NE
 case 2: return (int)cc_dep1 < (int)cc_dep2;  // CS/HS
 case 3: return (int)cc_dep1 >= (int)cc_dep2; // CC/LO
 case 4: return cc_dep1 < cc_dep2;  // MI
 case 5: return cc_dep1 >= cc_dep2; // PL
 case 6: return cc_dep1 && cc_dep2;  // VS
 case 7: return !(cc_dep1 && cc_dep2); // VC
 case 8: return cc_dep1 > cc_dep2;  // HI
 case 9: return cc_dep1 <= cc_dep2; // LS
 case 10: return (int)cc_dep1 > (int)cc_dep2; // GE
 case 11: return (int)cc_dep1 <= (int)cc_dep2; // LT
 case 12: return cc_dep1 > cc_dep2;  // GT
 case 13: return cc_dep1 <= cc_dep2; // LE
 case 14: return 1; // AL
 case 15: return 0; // NV
 case 18: return cc_dep1 == 1; // Specific case seen in code
 case 194: return cc_dep1 > 0; // Specific case seen in code
 case 210: return (cc_dep1 + cc_dep2) > 0; // Overflow check
 default: return 0;
 }
}

// Function: param_opaque_predicate at 0x10724
int param_opaque_predicate(unsigned int a0)
{
 unsigned int v0; // r1
 unsigned int v1; // r7
 unsigned int result; // r1
 unsigned int flag2; // r4
 unsigned int v4; // r1
 unsigned int flag1; // r3

 v0 = a0 + 1;
 v1 = a0 * a0 + a0 * 2 + 1 - v0 * v0;
 result = v0;
 if (!result)
 return a0 * 3 + 20;
 do
 {
 flag2 = result;
 __aeabi_idivmod();
 result = v4;
 } while (result);
 if (flag2 != 1)
 {
 flag1 = 0;
 if (!armg_calculate_condition(2, flag2, 1, 0))
 goto LABEL_10776;
LABEL_10775:
 flag1 = (!v1 ? 32 : Clz(v1)) >> 5 & 1;
 }
 else
 {
 if (armg_calculate_condition(2, flag2, 1, 0))
 goto LABEL_10775;
LABEL_10776:
 ;
 }
 if (flag1)
 return a0 * 2 + 10;
 return a0 * 3 + 20;
}


// Function: call_opaque_predicate at 0x10794
unsigned int call_opaque_predicate()
{
 unsigned int flag1; // r0
 unsigned int v4; // lr
 unsigned int v5; // r4
 unsigned int result; // r1
 unsigned int v7; // r1
 unsigned int v8; // r1
 unsigned int v10; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 flag1 = 5;
 v1 = v4;
 v0 = v5;
 result = 6;
 do
 {
 v7 = result;
 __aeabi_idivmod(flag1, v7);
 flag1 = v7;
 result = v8;
 } while (result);
 if (flag1 == 1)
 {
 v10 = 20;
 if (!armg_calculate_condition(18, flag1, 1, 0))
 return v10;
 }
 else
 {
 v10 = flag1;
 if (!armg_calculate_condition(18, v10, 1, 0))
 return v10;
 }
 return 35;
}


// Function: param_instruction_substitution at 0x107c4
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 6 + (a0 >> 1) + (a0 & 15) + a0 * 15;
}


// Function: call_instruction_substitution at 0x107e4
unsigned int call_instruction_substitution()
{
 return 225;
}


// Function: decrypt_string at 0x107ec
char *decrypt_string(char *a0, char *a1, unsigned int n, char a3)
{
 char *p;
 unsigned int result;
 char *ptr;

 p = a1;
 strncpy(p, a0, n);
 p[1 + n] = 0;
 result = p[0];
 if (!result)
 return p;
 ptr = p;
 do
 {
 ptr[0] = (char)result ^ a3;
 result = ptr[1];
 ptr = &ptr[1];
 } while (result);
 return p;
}


// Function: param_string_encryption at 0x10840
extern unsigned int __glibc___stack_chk_guard;
extern char encrypted_0;

int param_string_encryption()
{
 unsigned int result; // r4
 char *cur;
 unsigned int len;
 char v0[31];
 char flag1;
 unsigned int v2;

 v2 = __glibc___stack_chk_guard;
 strncpy(&v0, 0x22058, 31);
 result = (unsigned int)v0;
 flag1 = 0;
 if (result)
 {
 cur = &v0;
 do
 {
 cur[0] = (char)result ^ 90;
 result = cur[1];
 cur = &cur[1];
 } while (result);
 result = (unsigned int)v0;
 }
 len = strlen(&v0);
 if ((v2 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return result + len;
}


// Function: call_string_encryption at 0x108d0
unsigned int call_string_encryption()
{
 unsigned int v0; // r0

 v0 = param_string_encryption();
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x108d4
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r0
 unsigned int result; // r3
 unsigned int v3; // r0

 if (a0 > 0)
 goto LABEL_108e0;
 return a1;
 do
 {
LABEL_108e0:
 result = a0;
 v3 = a1 + result;
 a0 = result - 1;
 a1 = v3;
 } while (result != 1);
 return v0 + result;
}


// Function: call_tail_call_optimized at 0x108f4
unsigned int call_tail_call_optimized()
{
 return 500500;
}


// Function: param_non_tail_call at 0x10900
unsigned int param_non_tail_call(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int result; // r3
 unsigned int v4; // r0

 v0 = 0;
 if (a0 > 0)
 goto LABEL_1090c;
 return 0;
 do
 {
LABEL_1090c:
 result = a0;
 v4 = v0 + result;
 a0 = result - 1;
 v0 = v4;
 } while (result != 1);
 return v1 + result;
}


// Function: call_non_tail_call at 0x10920
unsigned int call_non_tail_call()
{
 return 5050;
}


// Function: param_vectorized_loop at 0x1092c
unsigned int param_vectorized_loop(unsigned int *a0, unsigned int *a1, unsigned int *a2, unsigned int a3)
{
 unsigned int *v0; // r3
 unsigned int *v1; // r0
 unsigned int v10; // r0
 unsigned int *pos; // r1
 unsigned int *ptr; // r2
 unsigned int *index; // r0
 unsigned int *v5; // r0
 unsigned int *v6; // r1
 unsigned int *v7; // r2
 unsigned int v8; // r0
 unsigned int v9; // r0
 unsigned int *vvar_69;
 unsigned int *vvar_52;
 unsigned int *vvar_14;

 if (a3 <= 0)
 return 0;
 v0 = a2 + 1;
 vvar_69 = v0;
 v1 = a0 + 1;
 pos = a1 + 1;
 ptr = v0;
 index = v1;
 do
 {
 v5 = index + 1;
 v6 = pos + 1;
 v7 = ptr + 1;
 ptr[1] = index[1] + pos[1];
 ptr = v7;
 index = v5;
 pos = v6;
 } while (index != &v1[a3]);
 v8 = 0;
 do
 {
 v9 = v8;
 vvar_52 = vvar_69 + 4;
 v10 = v9 + *((int *)(vvar_69 + 4));
 vvar_69 = vvar_52;
 v8 = v10;
 } while (&v0[a3] != vvar_69);
 return v9 + *((int *)(vvar_14 + 4));
}


// Function: call_vectorized_loop at 0x10990
extern unsigned int __glibc___stack_chk_guard;

int call_vectorized_loop()
{
 char *v18; // r0
 char *j; // r2
 char *v28; // r2
 unsigned int v29; // r0
 char *p; // r12
 char *i; // r1
 char *v22; // r1
 char *v23; // r0
 char *v24; // r12
 unsigned int v25; // r0
 char *ptr; // r2
 unsigned int v27; // r0
 unsigned int result; // [bp-0x6c]
 unsigned int v1; // [bp-0x68]
 unsigned int v2; // [bp-0x64]
 unsigned int v3; // [bp-0x60]
 unsigned int v4; // [bp-0x5c]
 unsigned int v5; // [bp-0x58]
 unsigned int v6; // [bp-0x54]
 unsigned int v7; // [bp-0x50]
 unsigned int v8; // [bp-0x4c]
 unsigned int v9; // [bp-0x48]
 unsigned int v10; // [bp-0x44]
 unsigned int v11; // [bp-0x40]
 unsigned int v12; // [bp-0x3c]
 unsigned int v13; // [bp-0x38]
 unsigned int v14; // [bp-0x34]
 unsigned int flag1; // [bp-0x30]
 char v16; // [bp-0x2c]
 unsigned int v17; // [bp-0xc]

 v17 = __glibc___stack_chk_guard;
 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = 6;
 v6 = 7;
 v7 = 8;
 v8 = 8;
 v9 = 7;
 v10 = 6;
 v11 = 5;
 v12 = 4;
 v13 = 3;
 v14 = 2;
 flag1 = 1;
 memset(&v16, 0, 32);
 v18 = &v8;
 j = &v16;
 p = &v16;
 i = &result;
 do
 {
 v22 = i + 1;
 v23 = v18 + 1;
 v24 = p + 1;
 *(p) = *(i) + *(v18);
 p = v24;
 v18 = v23;
 i = v22;
 } while (i != &v8);
 v25 = 0;
 do
 {
 v27 = v25;
 v28 = j + 1;
 v29 = v27 + *(j);
 v25 = v29;
 j = v28;
 } while (&v17 != j);
 if ((v17 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v27 + *(ptr);
}


// Function: param_link_time_optimization at 0x10a58
unsigned int param_link_time_optimization(unsigned int a0)
{
 return (a0 + 5) * 2;
}


// Function: call_link_time_optimization at 0x10a64
unsigned int call_link_time_optimization()
{
 return 20;
}


// Function: param_division_by_zero at 0x10a6c
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero(unsigned int a0)
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 signal(8, div_zero_handler);
 return (_setjmp(0x22070) ? 4294967295 : __aeabi_idiv(10, a0));
}


// Function: call_division_by_zero at 0x10abc
int call_division_by_zero()
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, NULL);
 return v0 + v1;
}


// Function: param_null_pointer_deref at 0x10aec

int param_null_pointer_deref(unsigned int *a0)
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 signal(11, segv_handler);
 return *(a0);
}


// Function: call_null_pointer_deref at 0x10b30
extern unsigned int __glibc___stack_chk_guard;

int call_null_pointer_deref()
{
 unsigned int v2; // r0
 unsigned int v3; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = __glibc___stack_chk_guard;
 v0 = 42;
 v2 = param_null_pointer_deref(&v0);
 v3 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v2 + v3;
}


// Function: param_buffer_overflow_stack at 0x10ba0
int param_buffer_overflow_stack()
{
 unsigned int v0; // r0

 return v0;
}


// Function: param_buffer_overflow_heap at 0x10ba4
unsigned int param_buffer_overflow_heap(unsigned int a0)
{
 void* ptr; // r0

 ptr = malloc(16);
 if (!ptr)
 return 4294967294;
 free(ptr);
 return a0;
}


// Function: call_buffer_overflow at 0x10bd0
unsigned int call_buffer_overflow()
{
 void* ptr; // r0

 ptr = malloc(16);
 if (!ptr)
 return 8;
 free(ptr);
 return 30;
}


// Function: param_integer_overflow at 0x10bf8
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // cc_dep1
 unsigned int v1; // cc_dep2
 unsigned int v12; // r0
 unsigned int v2; // cc_ndep
 unsigned int v3; // cc_dep1
 unsigned int v4; // cc_dep2
 unsigned int v5; // cc_ndep
 unsigned int v6; // cc_dep1
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep

 if (0 < a0)
 {
 v3 = (armg_calculate_condition(194, v0, v1, v2) ? a1 : v0);
 v4 = (armg_calculate_condition(194, v0, v1, v2) ? 0 : v1);
 v5 = (armg_calculate_condition(194, v0, v1, v2) ? 0 : v2);
 }
 else
 {
 v3 = (armg_calculate_condition(194, v6, v7, v8) ? a1 : v6);
 v4 = (armg_calculate_condition(194, v6, v7, v8) ? 0 : v7);
 v5 = (armg_calculate_condition(194, v6, v7, v8) ? 0 : v8);
 }
 v12 = a0 + a1;
 if (!((char)armg_calculate_condition(210, v3, v4, v5)))
 return v12 | v12 >> 31;
 if (v12 <= 0)
 {
 a2 = 0;
 if (!armg_calculate_condition(194, v12, 0, 0))
 goto LABEL_10c1e;
LABEL_10c1d:
 a2 = 1;
 }
 else
 {
 if (armg_calculate_condition(194, v12, 0, 0))
 goto LABEL_10c1d;
LABEL_10c1e:
 ;
 }
 if (!(a2 & (a1 & a0) >> 31))
 return v12;
 return 4294967294;
}


// Function: call_integer_overflow at 0x10c30
unsigned int call_integer_overflow()
{
 return 0x77359400;
}


// Function: param_undefined_behavior at 0x10c3c
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_undefined_behavior at 0x10c44
unsigned int call_undefined_behavior()
{
 return 10;
}


// Function: param_implementation_defined at 0x10c4c
unsigned int param_implementation_defined()
{
 return 44;
}


// Function: call_implementation_defined at 0x10c54
unsigned int call_implementation_defined()
{
 return 44;
}


// Function: test_obf_opt_edge at 0x10c5c
extern unsigned int __glibc___stack_chk_guard;
extern char g_11154;
extern char g_11184;
extern char g_111a0;
extern char g_111bc;
extern char g_111dc;
extern char g_111f8;
extern char g_11224;
extern char g_1124c;
extern char g_11274;
extern char g_11294;
extern char g_112b0;
extern char g_112d0;
extern char g_112f0;
extern char g_11324;
extern char g_11344;

int test_obf_opt_edge()
{
 void* v2; // r4
 void* flag1; // r0
 void* ptr; // r0
 unsigned int v13; // r2
 unsigned int v14; // r0
 void* result; // r1
 unsigned int v5; // r2
 unsigned int v8; // r0
 unsigned int v9; // r0
 unsigned int v10; // r0
 unsigned int v11; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = __glibc___stack_chk_guard;
 puts(0x11154);
 __printf_chk(1, 0x11184, 10);
 v2 = 0x6;
 flag1 = 0x5;
 do
 {
 __aeabi_idivmod(flag1, v2);
 flag1 = v2;
 v2 = result;
 } while (result);
 if (flag1 == 0x1)
 {
 v5 = 20;
 if (!armg_calculate_condition(18, flag1, 1, 0))
 goto LABEL_10cb2;
LABEL_10cb1:
 v5 = 35;
 }
 else
 {
 if (armg_calculate_condition(18, flag1, 1, 0))
 goto LABEL_10cb1;
LABEL_10cb2:
 ;
 }
 __printf_chk(1, 0x111a0, v5);
 __printf_chk(1, 0x111bc, 225);
 __printf_chk(1, 0x111dc, param_string_encryption());
 __printf_chk(1, 0x111f8, 500500);
 __printf_chk(1, 0x11224, 5050);
 __printf_chk(1, 0x1124c, call_vectorized_loop());
 __printf_chk(1, 0x11274, 20);
 v8 = param_division_by_zero(5);
 v9 = param_division_by_zero(v2);
 signal(8, v2);
 __printf_chk(1, 0x11294, v8 + v9);
 v0 = 42;
 v10 = param_null_pointer_deref(&v0);
 v11 = param_null_pointer_deref(v2);
 signal(11, v2);
 __printf_chk(1, 0x112b0, v10 + v11);
 ptr = malloc(16);
 if (ptr)
 {
 free(ptr);
 v13 = 30;
 }
 else
 {
 v13 = 8;
 }
 __printf_chk(1, 0x112d0, v13);
 __printf_chk(1, 0x112f0, 0x77359400);
 __printf_chk(1, 0x11324, 10);
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v14 = __printf_chk(1, 0x11344, 44);
 return __printf_chk(1, 0x11344, 44);
}



/* CRT stub function __aeabi_idiv removed by preprocessor */




/* CRT stub function _divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */



// Function: __aeabi_idiv0 at 0x110a8
int __aeabi_idiv0(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // lr
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = a1;
}



/* CRT stub function _fini removed by preprocessor */



// Function: sub_110bc at 0x110bc
int sub_110bc(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0;
}

