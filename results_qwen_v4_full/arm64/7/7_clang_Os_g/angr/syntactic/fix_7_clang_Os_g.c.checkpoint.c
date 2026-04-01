// Angr Decompilation of 7_clang_Os_g
// Platform: AARCH64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <setjmp.h>
#include <stddef.h>

/* CRT stub function _init removed by preprocessor */

// Define int128_t type
typedef __int128 int128_t;

// Define __ROL__ macro for rotate left
#define __ROL__(val, n) (((val) << (n)) | ((val) >> (64 - (n))))

// Forward declarations for CRT stub functions
long long arm64g_calculate_condition(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3);
int128_t AddV(int128_t a, int128_t b);

// Implementation of arm64g_calculate_condition (ARM64 condition code simulation)
long long arm64g_calculate_condition(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    // a0 = condition code, a1/a2 = operands, a3 = flags
    switch (a0) {
        case 1: // EQ (equal)
            return (a1 == a2) ? 1 : 0;
        case 49: // GE (greater or equal)
            return (a1 >= a2) ? 1 : 0;
        case 195: // Some comparison
            return (a1 >= a2) ? 1 : 0;
        default:
            return 0;
    }
}

// Implementation of AddV (vector addition for int128)
int128_t AddV(int128_t a, int128_t b)
{
    return a + b;
}

// Global jmp_buf variables
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
unsigned int segv_caught;


// Function: __dollar_x at 0x400730
long long __dollar_x()
{
 return 0;
}


// Function: sub_400744 at 0x400744
long long sub_400744()
{
 char *v0; // x0
 unsigned long long len; // x0

 len = strlen(v0);
 return strlen(v0);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400830 at 0x400830
void sub_400830()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */








/* CRT stub function register_tm_clones removed by preprocessor */











// Function: param_fake_branch at 0x400914
long long param_fake_branch()
{
 unsigned long v0; // x0

 return v0;
}


// Function: call_fake_branch at 0x400918
unsigned long long call_fake_branch()
{
 return 10;
}


// Function: param_opaque_predicate at 0x400920
long long param_opaque_predicate(unsigned long a0)
{
 unsigned long v0; // x9
 unsigned long long v1; // cc_dep1
 unsigned int flag1; // w10
 unsigned int v3; // w11
 unsigned int result; // w12
 unsigned long v5; // x9
 unsigned long v6; // x11
 unsigned long long v7; // cc_op
 unsigned long long v8; // cc_dep1
 unsigned long long v9; // cc_dep2

 v0 = (unsigned int)a0 + 1;
 v1 = a0 & 4294967295;
 if (!((char)arm64g_calculate_condition(49, a0 & 4294967295, 1, 0)))
 {
 flag1 = 4294967295;
 }
 else
 {
 v3 = a0;
 result = v0;
 do
 {
 flag1 = result;
 result = v3 - flag1 * v3 / result;
 v3 = flag1;
 } while (result);
 }
 v5 = v0 * v0;
 v6 = (((unsigned int)a0 * 2 | (unsigned int)a0 >> 31) & 4294967294 | 1) + (unsigned int)a0 * (unsigned int)a0;
 if (flag1 == 1)
 {
 v7 = 3;
 v8 = ((char)arm64g_calculate_condition(1, v1, 1, 0) ? v6 & 4294967295 : 0);
 v9 = ((char)arm64g_calculate_condition(1, v1, 1, 0) ? v5 & 4294967295 : 0);
 }
 else
 {
 v7 = 0;
 v8 = ((char)arm64g_calculate_condition(1, v1, 1, 0) ? v6 & 4294967295 : 0);
 v9 = ((char)arm64g_calculate_condition(1, v1, 1, 0) ? v5 & 4294967295 : 0);
 }
 if (!((char)arm64g_calculate_condition(v7, v8, v9, 0)))
 return (unsigned int)a0 * 3 + 20;
 return (((unsigned int)a0 * 2 | (unsigned int)a0 >> 31) & 4294967294) + 10;
}


// Function: call_opaque_predicate at 0x400978
unsigned long long call_opaque_predicate()
{
 unsigned int flag1; // w8
 unsigned int v1; // w9
 unsigned int result; // w10

 flag1 = 6;
 v1 = 5;
 do
 {
 result = flag1;
 flag1 = v1 - result * v1 / flag1;
 v1 = result;
 } while (flag1);
 if (result != 1)
 return 35;
 return 20;
}


// Function: param_instruction_substitution at 0x4009a8
int param_instruction_substitution(unsigned int a0)
{
 return (a0 & 15) + (a0 >> 1) + 21 * a0;
}


// Function: call_instruction_substitution at 0x4009bc
unsigned long long call_instruction_substitution()
{
 return 225;
}


// Define global format strings and data
char g_400f30[64] = {0};
char g_400f6c[] = "%llu\n";
char g_400f88[] = "%d\n";
char g_400fa5[] = "%d\n";
char g_400fc1[] = "%d\n";
char g_400feb[] = "%d\n";
char g_401010[] = "%d\n";
char g_401036[] = "%d\n";
char g_401056[] = "%d\n";
char g_401072[] = "%d\n";
char g_40108f[] = "%d\n";
char g_4010ac[] = "%d\n";
char g_4010dd[] = "%d\n";
char g_4010fa[] = "%d\n";
char g_401121[] = "Starting tests...\n";
char __dollar_d_1[32] = {0};
char __dollar_d_2[64] = {0};
char __dollar_d_3 = 0;
char __dollar_d_4[] = "%d\n";

// Function: decrypt_string at 0x4009c4
char* decrypt_string(char *a0, char *ptr, unsigned long n, char a3)
{
 unsigned int result; // w8
 char *cur; // x10
 unsigned int v4; // w8
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 strncpy(ptr, a0, n);
 ptr[1 + n] = 0;
 result = *(ptr);
 if (!result)
 return ptr;
 cur = ptr + 1;
 do
 {
 v4 = cur[0];
 cur[1] = (char)result ^ a3;
 cur = &cur[1];
 result = v4;
 } while (result);
 return ptr;
}


// Function: param_string_encryption at 0x400a2c
int param_string_encryption()
{
 unsigned int result; // w8
 void* cur; // x9
 unsigned int v6; // w8
 unsigned int v7; // w19
 char v0[31]; // [bp-0x40]
 char flag1; // [bp-0x21]
 char *v2; // [bp-0x20]
 char v3; // [bp+0x0]

 v2 = &v3;
 strncpy(v0, __dollar_d_1, 32);
 result = (unsigned int)v0;
 flag1 = 0;
 if (result)
 {
 cur = v0;
 do
 {
 v6 = *((char *)cur);
 *((char *)&cur[1]) = (char)result ^ 90;
 cur += 1;
 result = v6;
 } while (result);
 v7 = (unsigned int)v0;
 }
 else
 {
 v7 = 0;
 }
 return (unsigned int)strlen(v0) + v7;
}


// Function: call_string_encryption at 0x400aa4
int call_string_encryption()
{
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x400aa8
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 if (a0 >= 1)
 a1 = a1 + a0 + (a0 - 1) * (a0 - 1) - (__ROL__((a0 - 1) * (a0 - 2), 63) & 9223372036854775807);
 return a1;
}


// Function: call_tail_call_optimized at 0x400ad0
unsigned long long call_tail_call_optimized()
{
 return 500500;
}


// Function: param_non_tail_call at 0x400adc
unsigned long long param_non_tail_call(unsigned int a0)
{
 unsigned int v0; // w8

 v0 = a0 - 1;
 if (a0 < 1)
 return 0;
 return a0 + v0 * v0 - (__ROL__(v0 * (a0 - 2), 63) & 9223372036854775807);
}


// Function: call_non_tail_call at 0x400b04
unsigned long long call_non_tail_call()
{
 return 5050;
}


// Function: param_vectorized_loop at 0x400b0c
unsigned long long param_vectorized_loop(unsigned int *a0, unsigned int *a1, unsigned int *cur, unsigned int a3)
{
 unsigned long j; // x8
 unsigned int *ptr; // x10
 unsigned long long v11; // x0
 unsigned long i; // x9
 unsigned int *v3; // x0
 unsigned int *v4; // x1
 unsigned long v5; // x9
 unsigned long long v7; // x0
 unsigned long long v8; // x0
 unsigned long v9; // x9

 if (a3 < 1)
 return 0;
 j = a3;
 ptr = cur;
 i = j;
 do
 {
 v3 = a0 + 1;
 v4 = a1 + 1;
 v5 = i - 1;
 *(ptr) = *(a1) + *(a0);
 ptr += 1;
 i = v5;
 a0 = v3;
 a1 = v4;
 } while (i != 1);
 if (a3 < 1)
 return 0;
 v7 = 0;
 do
 {
 v8 = v7;
 cur += 1;
 v11 = *(cur) + v8;
 j -= 1;
 v7 = v11;
 } while (j != 1);
 return v9 + v8;
}


// Function: call_vectorized_loop at 0x400b60
int call_vectorized_loop()
{
 unsigned long long idx; // x8
 unsigned long long result; // [bp-0x20]
 unsigned long long flag1; // [bp-0x10]

 idx = 0;
 result = 0;
 flag1 = 0;
 do
 {
 *((int128_t *)((char *)&result + idx)) = AddV(*((int128_t *)&(&g_400f30)[idx]), *((int128_t *)&(&__dollar_d_2)[idx]));
 idx += 16;
 } while (idx != 32);
 return (int)result;
}


// Function: param_link_time_optimization at 0x400bb4
int param_link_time_optimization(unsigned int a0)
{
 return ((a0 * 2 | a0 >> 31) & 4294967294) + 10;
}


// Function: call_link_time_optimization at 0x400bc0
unsigned long long call_link_time_optimization()
{
 return 20;
}


// Function: div_zero_handler at 0x400bc8
void div_zero_handler(int sig)
{
 __dollar_d_3 = 1;
 longjmp(jmp_buffer, 1); /* do not return */
}


// Function: param_division_by_zero at 0x400bec
unsigned long long param_division_by_zero(unsigned long a0)
{
 signal(8, div_zero_handler);
 if (!_setjmp(jmp_buffer))
 return 10 / (a0 & 4294967295);
 return 4294967295;
}


// Function: call_division_by_zero at 0x400c38
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
 return v3 + v2;
}


// Function: segv_handler at 0x400c78
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1); /* do not return */
}


// Function: param_null_pointer_deref at 0x400c9c
unsigned long long param_null_pointer_deref(unsigned int *a0)
{
 signal(11, segv_handler);
 if (!_setjmp(segv_buffer))
 return *(a0);
 return 4294967295;
}


// Function: call_null_pointer_deref at 0x400ce4
int call_null_pointer_deref()
{
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v0; // [bp-0x24]
 char *v1; // [bp-0x20]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = 42;
 v3 = param_null_pointer_deref(&v0);
 v4 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 return v4 + v3;
}


// Function: param_buffer_overflow_stack at 0x400d34
long long param_buffer_overflow_stack()
{
 unsigned long v0; // x0

 return v0;
}


// Function: param_buffer_overflow_heap at 0x400d38
long long param_buffer_overflow_heap()
{
 unsigned long v0; // x0

 return v0;
}


// Function: call_buffer_overflow at 0x400d3c
unsigned long long call_buffer_overflow()
{
 return 30;
}


// Function: param_integer_overflow at 0x400d44
unsigned long long param_integer_overflow(unsigned long a0, unsigned long a1)
{
 unsigned long long v0; // x8
 unsigned long long v1; // cc_dep1
 unsigned long v2; // x9
 unsigned long long v3; // cc_op
 unsigned long long v4; // cc_dep1

 v0 = a1 + a0;
 v1 = a0 & 4294967295;
 if ((unsigned int)a0 >= 1)
 {
 v1 = a1 & 4294967295;
 if ((unsigned int)a1 >= 1 && ((char)(v0 >> 31) & 1))
 return 4294967295;
 }
 v2 = (unsigned int)a1 & (unsigned int)a0;
 if (0 < (unsigned int)v0)
 {
 v3 = 3;
 v4 = ((char)arm64g_calculate_condition(195, v1, 1, 0) ? v2 & 4294967295 : 0);
 }
 else
 {
 v3 = 0;
 v4 = ((char)arm64g_calculate_condition(195, v1, 1, 0) ? v2 & 4294967295 : 0);
 }
 if (!((char)arm64g_calculate_condition(v3 | 176, v4, 0, 0)))
 return v0 & 4294967295;
 return 4294967294;
}


// Function: call_integer_overflow at 0x400d7c
unsigned long long call_integer_overflow()
{
 return 0x77359400;
}


// Function: param_undefined_behavior at 0x400d88
unsigned int param_undefined_behavior(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_undefined_behavior at 0x400d90
unsigned long long call_undefined_behavior()
{
 return 10;
}


// Function: param_implementation_defined at 0x400d98
unsigned long long param_implementation_defined()
{
 return 48;
}


// Function: call_implementation_defined at 0x400da0
unsigned long long call_implementation_defined()
{
 return 48;
}


// Function: test_obf_opt_edge at 0x400da8
int test_obf_opt_edge()
{
 unsigned int flag1; // w8
 unsigned int v3; // w9
 unsigned int result; // w10
 unsigned long long v5; // x1
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 puts(g_401121);
 printf(__dollar_d_4, 10);
 flag1 = 6;
 v3 = 5;
 do
 {
 result = flag1;
 flag1 = v3 - result * v3 / flag1;
 v3 = result;
 } while (flag1);
 if (result == 1)
 v5 = 20;
 else
 v5 = 35;
 printf(g_400f6c, v5);
 printf(g_400f88, 225);
 printf(g_400fa5, param_string_encryption() & 4294967295);
 printf(g_400fc1, 500500);
 printf(g_400feb, 5050);
 printf(g_401010, call_vectorized_loop() & 4294967295);
 printf(g_401036, 20);
 printf(g_401056, call_division_by_zero() & 4294967295);
 printf(g_401072, call_null_pointer_deref() & 4294967295);
 printf(g_40108f, 30);
 printf(g_4010ac, 0x77359400);
 printf(g_4010dd, 10);
 return printf(g_4010fa, 48);
}


// Function: main at 0x400ee0
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


