// Angr Decompilation of 7_gcc_O2_g
// Platform: AARCH64

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include <signal.h>
#include <stdio.h>

/* CRT stub function _init removed by preprocessor */

// Forward declarations
long long test_obf_opt_edge(void);
long long div_zero_handler(int sig);
void __longjmp_chk(void *, int, void *);
int param_opaque_predicate(unsigned int a0);
unsigned long long call_opaque_predicate(void);
char *decrypt_string(char *a0, char *a1, unsigned long a2, char a3);
void __stack_chk_fail(void);
unsigned long long call_string_encryption(void);
unsigned long long call_tail_call_optimized(void);
unsigned long long param_non_tail_call(unsigned int a0);
unsigned long long param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned long ptr, unsigned int i);
long long call_vectorized_loop(void);
unsigned int param_link_time_optimization(unsigned int a0);
unsigned long long call_link_time_optimization(void);
unsigned long long param_division_by_zero(unsigned int a0);
int call_division_by_zero(void);
unsigned long long param_null_pointer_deref(unsigned int *a0);
long long call_null_pointer_deref(void);
long long param_buffer_overflow_stack(void);
unsigned long long call_buffer_overflow(void);
unsigned long long param_integer_overflow(unsigned long a0, unsigned long a1);
unsigned int param_undefined_behavior(unsigned int a0);
unsigned long long call_undefined_behavior(void);
unsigned long long param_implementation_defined(void);
unsigned long long call_implementation_defined(void);
void _start(void);

// Helper macros and functions for decompilation
#define __ROL__(value, shift) (((value) << (shift)) | ((value) >> (32 - (shift))))

// Valgrind/VEX helper stub
unsigned long arm64g_calculate_condition(unsigned long cc_op, unsigned long cc_dep1, unsigned long cc_dep2, unsigned long cc_ndep)
{
 // Simple stub implementation - return true for common conditions
 return 1;
}

// Global variables defined here
unsigned int div_zero_caught = 0;
unsigned int segv_caught = 0;
jmp_buf jmp_buffer;
char encrypted_0[32] = "encrypted_string_placeholder_0";
unsigned long long g_411f50 = 0;

// Function: __dollar_x at 0x400860

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 g_411f50: ;
 return 0;
}


// Function: sub_400874 at 0x400874
long long sub_400874()
{
 char *v0; // x0
 unsigned long long len; // x0

 len = strlen(v0);
 return strlen(v0);
}


// Function: main at 0x400980
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_obf_opt_edge();
 return 0;
}


// Function: sub_400998 at 0x400998
void sub_400998(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4009f0 at 0x4009f0
void sub_4009f0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */







// Function: sub_400ad4 at 0x400ad4
void sub_400ad4()
{
 div_zero_handler(0); /* do not return */
}


// Function: div_zero_handler at 0x400ae0
extern unsigned long long __data_start;

long long div_zero_handler(int sig)
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 (void)sig;
 v0 = &v2;
 v1 = v3;
 div_zero_caught = 1;
 __longjmp_chk(&jmp_buffer, 1, &__data_start); /* do not return */
}


// Function: segv_handler at 0x400b00
jmp_buf segv_buffer;

long long segv_handler(int sig)
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 (void)sig;
 v0 = &v2;
 v1 = v3;
 segv_caught = 1;
 __longjmp_chk(&segv_buffer, 1, &div_zero_caught); /* do not return */
}


// Function: param_fake_branch at 0x400b20
long long param_fake_branch()
{
 unsigned long v0; // x0

 return v0;
}


// Function: call_fake_branch at 0x400b24
unsigned long long call_fake_branch()
{
 return 10;
}


// Function: sub_400b2c at 0x400b2c
long long sub_400b2c(unsigned long a0)
{
 unsigned long long v0; // x0

 v0 = param_opaque_predicate(a0);
 return param_opaque_predicate(a0);
}


// Function: param_opaque_predicate at 0x400b30
int param_opaque_predicate(unsigned int a0)
{
 unsigned int flag1; // w1
 unsigned int v1; // w3
 unsigned int v2; // w2
 unsigned long v3; // cc_dep1
 unsigned long v4; // cc_dep2
 unsigned int result; // w6
 unsigned int v6; // w2
 unsigned long v7; // x3

 flag1 = a0 + 1;
 v1 = flag1 * flag1;
 v2 = (__ROL__(a0, 1) & 4294967294) + a0 * a0 + 1;
 v3 = v2;
 v4 = v1;
 if (v2 != v1)
 result = 0;
 else
 result = 1;
 if (flag1)
 {
 v6 = a0;
 do
 {
 flag1 = v6 - flag1 * v6 / flag1;
 v6 = flag1;
 } while (flag1);
 if (result)
 {
 if (!((char)arm64g_calculate_condition(19, ((char)arm64g_calculate_condition(19, v3, v4, 0) ? v7 & 4294967295 : 0), ((char)arm64g_calculate_condition(19, v3, v4, 0) ? 1 : 0), 0)))
 return (__ROL__(a0, 1) & 4294967294) + 10;
 }
 else
 {
 if (!((char)arm64g_calculate_condition(16, ((char)arm64g_calculate_condition(19, v3, v4, 0) ? v7 & 4294967295 : 0), ((char)arm64g_calculate_condition(19, v3, v4, 0) ? 1 : 0), 0)))
 return (__ROL__(a0, 1) & 4294967294) + 10;
 }
 }
 return (__ROL__(a0, 1) & 4294967294) + a0 + 20;
}


// Function: sub_400b8c at 0x400b8c
void sub_400b8c()
{
 call_opaque_predicate();
 return;
}


// Function: call_opaque_predicate at 0x400b90
unsigned long long call_opaque_predicate()
{
 unsigned int flag1; // w0
 unsigned int v1; // w1
 unsigned int result; // w2

 flag1 = 6;
 v1 = 5;
 do
 {
 flag1 = v1 - flag1 * v1 / flag1;
 v1 = flag1;
 } while (flag1);
 if (result != 1)
 return 35;
 return 20;
}


// Function: param_instruction_substitution at 0x400bc0
int param_instruction_substitution(unsigned int a0)
{
 return ((a0 * 8 | a0 >> 29) & 0xfffffff8) - a0 * 2 + (a0 >> 1) + (a0 & 15) + ((a0 * 16 | a0 >> 28) & 0xfffffff0) - a0;
}


// Function: call_instruction_substitution at 0x400be4
unsigned long long call_instruction_substitution()
{
 return 225;
}


// Function: sub_400bec at 0x400bec
void sub_400bec(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 decrypt_string((char *)0, (char *)0, 0, 0);
 return;
}


// Function: decrypt_string at 0x400bf0
char *decrypt_string(char *a0, char *a1, unsigned long a2, char a3)
{
 char *p; // x0
 unsigned int result; // w2
 char *ptr; // x4
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 p = strncpy(a1, a0, a2);
 p[a2] = 0;
 result = p[0];
 if (!result)
 return p;
 ptr = p;
 do
 {
 ptr[0] = a3 ^ (char)result;
 result = ptr[1];
 ptr = &ptr[1];
 } while (result);
 return p;
}


// Function: param_string_encryption at 0x400c50
extern char __stack_chk_guard;

long long param_string_encryption()
{
 char *dst; // x0
 unsigned long v6; // x19
 char *ptr; // x0
 unsigned long long len; // x0
 char *v0; // [bp-0x50]
 char v1[31]; // [bp-0x28]
 char result; // [bp-0x9]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 dst = strncpy(v1, encrypted_0, 31);
 v6 = (unsigned long long)v1;
 result = 0;
 if ((unsigned int)v6)
 {
 ptr = dst;
 do
 {
 ptr[0] = (char)v6 ^ 90;
 v6 = ptr[1];
 ptr = &ptr[1];
 } while ((unsigned int)v6);
 v6 = (unsigned long long)v1;
 }
 len = strlen(dst);
 if (v3 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6 + len;
}


// Function: sub_400cec at 0x400cec
long long sub_400cec()
{
 unsigned long long v0; // x0

 v0 = call_string_encryption();
 return call_string_encryption();
}


// Function: call_string_encryption at 0x400cf0
unsigned long long call_string_encryption()
{
 unsigned long long v0; // x0

 v0 = param_string_encryption();
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x400cf4
long long param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 unsigned int result; // w2
 unsigned long v1; // x0

 result = a0;
 v1 = a1;
 if (result > 0)
 {
 do
 {
 v1 += result;
 result -= 1;
 } while (result != 1);
 }
 return v1;
}


// Function: sub_400d1c at 0x400d1c
void sub_400d1c()
{
 call_tail_call_optimized();
 return;
}


// Function: call_tail_call_optimized at 0x400d20
unsigned long long call_tail_call_optimized()
{
 return 500500;
}


// Function: sub_400d2c at 0x400d2c
void sub_400d2c(unsigned long a0)
{
 param_non_tail_call(0);
 return;
}


// Function: param_non_tail_call at 0x400d30
unsigned long long param_non_tail_call(unsigned int a0)
{
 unsigned int result; // w1
 unsigned long long v1; // x0

 result = a0;
 v1 = 0;
 if (result > 0)
 {
 do
 {
 v1 += result;
 result -= 1;
 } while (result != 1);
 }
 return v1;
}


// Function: call_non_tail_call at 0x400d54
unsigned long long call_non_tail_call()
{
 return 5050;
}


// Function: sub_400d5c at 0x400d5c
long long sub_400d5c(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 unsigned long long v0; // x0

 v0 = param_vectorized_loop(a0, a1, a2, a3);
 return param_vectorized_loop(a0, a1, a2, a3);
}


// Function: param_vectorized_loop at 0x400d60
unsigned long long param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned long ptr, unsigned int i)
{
 unsigned long long idx; // x4
 unsigned long long v1; // x1
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 unsigned long v4; // x4
 unsigned long long v5; // x0

 if (i <= 0)
 return 0;
 idx = 0;
 do
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a0 + idx * 4)) + *((int *)(a1 + idx * 4));
 idx += 1;
 } while ((unsigned int)idx < i);
 v1 = 0;
 v2 = 0;
 do
 {
 v3 = v2;
 v1 += 1;
 v5 = v3 + *((int *)(ptr + v1 * 4));
 v2 = v5;
 } while ((unsigned int)v1 < i);
 return v3 + v4;
}


// Function: sub_400db8 at 0x400db8
void sub_400db8()
{
 call_vectorized_loop();
 return;
}


// Function: call_vectorized_loop at 0x400dc0
extern char __stack_chk_guard;

long long call_vectorized_loop()
{
 unsigned long long i; // x1
 unsigned long long v9; // x1
 unsigned long long j; // x1
 unsigned long long v11; // x0
 unsigned long long v12; // x0
 unsigned long long v13; // x1
 unsigned long v14; // x2
 unsigned long long v15; // x0
 char *v0; // [bp-0x80]
 unsigned int v16; // [bp-0x6c]
 unsigned long long v1; // [bp-0x68]
 unsigned long long v2; // [bp-0x58]
 unsigned int v17; // [bp-0x4c]
 unsigned long long v3; // [bp-0x48]
 unsigned long long v4; // [bp-0x38]
 unsigned long v18; // [bp-0x2c]
 char v5; // [bp-0x28]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 i = 1;
 memset(&v5, 0, 32);
 v1 = 316912650112397582603894390785;
 v2 = 633825300243241909290088267781;
 v3 = 396140812682002152440041832456;
 v4 = 79228162551157825753847955460;
 do
 {
 v9 = i + 1;
 *((int *)((char *)&v18 + (__ROL__(i, 2) & 18446744073709551612))) = *((int *)((char *)&v16 + (__ROL__(i, 2) & 18446744073709551612))) + *((int *)((char *)&v17 + (__ROL__(i, 2) & 18446744073709551612)));
 i = v9;
 } while (i != 9);
 j = 1;
 v11 = 0;
 do
 {
 v12 = v11;
 v13 = j + 1;
 v15 = v12 + *((int *)((char *)&v18 + 4 * j));
 j = v13;
 v11 = v15;
 } while (j != 9);
 if (v6 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v12 + v14;
}


// Function: sub_400e88 at 0x400e88
void sub_400e88(unsigned long a0)
{
 param_link_time_optimization(a0);
 return;
}


// Function: param_link_time_optimization at 0x400e90
unsigned int param_link_time_optimization(unsigned int a0)
{
 return ((a0 + 5) * 2 | a0 + 5 >> 31) & 4294967294;
}


// Function: sub_400e9c at 0x400e9c
void sub_400e9c()
{
 call_link_time_optimization();
 return;
}


// Function: call_link_time_optimization at 0x400ea0
unsigned long long call_link_time_optimization()
{
 return 20;
}


// Function: sub_400ea8 at 0x400ea8
void sub_400ea8(unsigned long a0)
{
 param_division_by_zero(a0);
 return;
}


// Function: param_division_by_zero at 0x400eb0

unsigned long long param_division_by_zero(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 signal(8, (void (*)(int))div_zero_handler);
 if (_setjmp(jmp_buffer))
 return 4294967295;
 return 10 / a0;
}


// Function: sub_400efc at 0x400efc
void sub_400efc()
{
 call_division_by_zero();
 return;
}


// Function: call_division_by_zero at 0x400f00
int call_division_by_zero()
{
 unsigned int v2; // w0
 unsigned int v3; // w0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_division_by_zero(5);
 v3 = param_division_by_zero(0);
 signal(8, NULL);
 return v2 + v3;
}


// Function: param_null_pointer_deref at 0x400f40
extern jmp_buf segv_buffer;

unsigned long long param_null_pointer_deref(unsigned int *a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 signal(11, (void (*)(int))segv_handler);
 if (_setjmp(segv_buffer))
 return 4294967295;
 return *(a0);
}


// Function: sub_400f88 at 0x400f88
void sub_400f88()
{
 call_null_pointer_deref();
 return;
}


// Function: call_null_pointer_deref at 0x400f90
extern char __stack_chk_guard;

long long call_null_pointer_deref()
{
 unsigned long long v4; // x0
 unsigned long long v5; // x0
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 v1 = 42;
 v4 = param_null_pointer_deref(&v1);
 v5 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return (v4 & 4294967295) + (v5 & 4294967295);
}


// Function: sub_40100c at 0x40100c
long long sub_40100c()
{
 unsigned long long v0; // x0

 v0 = param_buffer_overflow_stack();
 return param_buffer_overflow_stack();
}


// Function: param_buffer_overflow_stack at 0x401010
long long param_buffer_overflow_stack()
{
 unsigned long v0; // x0

 return v0;
}


// Function: param_buffer_overflow_heap at 0x401014
unsigned long long param_buffer_overflow_heap(unsigned int a0)
{
 void* ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(16);
 if (!ptr)
 return 4294967294;
 free(ptr);
 return a0;
}


// Function: sub_40104c at 0x40104c
void sub_40104c()
{
 call_buffer_overflow();
 return;
}


// Function: call_buffer_overflow at 0x401050
unsigned long long call_buffer_overflow()
{
 void* ptr; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(16);
 if (!ptr)
 return 8;
 free(ptr);
 return 30;
}


// Function: sub_40107c at 0x40107c
void sub_40107c(unsigned long a0, unsigned long a1)
{
 param_integer_overflow(a0, a1);
 return;
}


// Function: param_integer_overflow at 0x401080
unsigned long long param_integer_overflow(unsigned long a0, unsigned long a1)
{
 unsigned long long v0; // cc_op
 unsigned long v1; // cc_op
 unsigned long long v14; // x0
 unsigned long v2; // cc_dep1
 unsigned long v3; // cc_dep2
 unsigned long v4; // cc_ndep
 unsigned long long v5; // cc_dep1
 unsigned long v6; // cc_op
 unsigned long v7; // cc_dep1
 unsigned long v8; // cc_dep2
 unsigned long v9; // cc_ndep

 if (0 < (unsigned int)a0)
 {
 v0 = 3;
 v5 = ((char)arm64g_calculate_condition(v1 | 192, v2, v3, v4) ? a1 & 4294967295 : 0x40000000);
 }
 else
 {
 v0 = 0;
 v5 = ((char)arm64g_calculate_condition(v6 | 192, v7, v8, v9) ? a1 & 4294967295 : 0x40000000);
 }
 v14 = a0 + a1;
 if ((char)arm64g_calculate_condition(v0 | 208, v5, 0, 0))
 {
 if ((char)arm64g_calculate_condition(73, (unsigned long long)((unsigned int)a0 & (unsigned int)a1), 0, 0))
 {
 if (!((char)arm64g_calculate_condition(211, ((char)arm64g_calculate_condition(v0 | 64, v5, 0, 0) ? v14 & 4294967295 : 0x40000000), 0, 0)))
 return 4294967294;
 }
 else
 {
 if (!((char)arm64g_calculate_condition(208, ((char)arm64g_calculate_condition(v0 | 64, v5, 0, 0) ? v14 & 4294967295 : 0x40000000), 0, 0)))
 return 4294967294;
 }
 return v14 & 4294967295;
 }
 else if (0 <= (unsigned int)v14)
 {
 return v14 & 4294967295;
 }
 else
 {
 return 4294967295;
 }
}


// Function: call_integer_overflow at 0x4010b4
unsigned long long call_integer_overflow()
{
 return 0x77359400;
}


// Function: param_undefined_behavior at 0x4010c0
unsigned int param_undefined_behavior(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: sub_4010c8 at 0x4010c8
void sub_4010c8()
{
 call_undefined_behavior();
 return;
}


// Function: call_undefined_behavior at 0x4010d0
unsigned long long call_undefined_behavior()
{
 return 10;
}


// Function: sub_4010d8 at 0x4010d8
void sub_4010d8()
{
 param_implementation_defined();
 return;
}


// Function: param_implementation_defined at 0x4010e0
unsigned long long param_implementation_defined()
{
 return 48;
}


// Function: sub_4010e8 at 0x4010e8
void sub_4010e8()
{
 call_implementation_defined();
 return;
}


// Function: call_implementation_defined at 0x4010f0
unsigned long long call_implementation_defined()
{
 return 48;
}


// Function: sub_4010f8 at 0x4010f8
void sub_4010f8()
{
 test_obf_opt_edge();
 return;
}


// Function: test_obf_opt_edge at 0x401100
extern char __stack_chk_guard;
const char __dollar_d[] = "%u\n";
const char g_401358[] = "%u\n";
const char g_401378[] = "%u\n";
const char g_401398[] = "%u\n";
const char g_4013b8[] = "%u\n";
const char g_4013d8[] = "%u\n";
const char g_401408[] = "%u\n";
const char g_401430[] = "%u\n";
const char g_401458[] = "%u\n";
const char g_401478[] = "%u\n";
const char g_401498[] = "%u\n";
const char g_4014b8[] = "%u\n";
const char g_4014d8[] = "%u\n";
const char g_401510[] = "%u\n";
const char g_401530[] = "%u\n";

long long test_obf_opt_edge()
{
 unsigned int flag1; // w0
 unsigned int v5; // w1
 void* ptr; // x0
 unsigned long long v15; // x2
 unsigned long long v16; // x0
 unsigned int result; // w2
 unsigned long long v7; // x2
 unsigned long long v10; // x0
 unsigned long long v11; // x0
 unsigned long long v12; // x0
 unsigned long long v13; // x0
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 puts(__dollar_d);
 __printf_chk(1, g_401358, 10);
 flag1 = 6;
 v5 = 5;
 do
 {
 flag1 = v5 - flag1 * v5 / flag1;
 v5 = flag1;
 } while (flag1);
 if (result == 1)
 v7 = 20;
 else
 v7 = 35;
 __printf_chk(1, g_401378, v7);
 __printf_chk(1, g_401398, 225);
 __printf_chk(1, g_4013b8, param_string_encryption() & 4294967295);
 __printf_chk(1, g_4013d8, 500500);
 __printf_chk(1, g_401408, 5050);
 __printf_chk(1, g_401430, call_vectorized_loop() & 4294967295);
 __printf_chk(1, g_401458, 20);
 v10 = param_division_by_zero(5);
 v11 = param_division_by_zero(0);
 signal(8, NULL);
 __printf_chk(1, g_401478, (v10 & 4294967295) + (v11 & 4294967295));
 v1 = 42;
 v12 = param_null_pointer_deref(&v1);
 v13 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 __printf_chk(1, g_401498, (v12 & 4294967295) + (v13 & 4294967295));
 ptr = malloc(16);
 if (ptr)
 {
 free(ptr);
 v15 = 30;
 }
 else
 {
 v15 = 8;
 }
 __printf_chk(1, g_4014b8, v15);
 __printf_chk(1, g_4014d8, 0x77359400);
 __printf_chk(1, g_401510, 10);
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v16 = __printf_chk(1, g_401530, 48);
 return __printf_chk(1, g_401530, 48);
}



/* CRT stub function _fini removed by preprocessor */


