// Angr Decompilation of 7_clang_Os_no_g
// Platform: ARMEL

#include <stddef.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

extern int armg_calculate_condition(int, unsigned int, unsigned int, unsigned int);

/* Stub implementation for angr's opaque predicate function */
int armg_calculate_condition(int cond, unsigned int a, unsigned int b, unsigned int c)
{
    return cond;
}

/* CRT stub function _init removed by preprocessor */



// Function: sub_4004b8 at 0x4004b8
static void g_412008() {}

int sub_4004b8()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 ((void (*)(void))g_412008)();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4005a0 at 0x4005a0
void sub_4005a0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_fake_branch at 0x4006d0
int param_fake_branch()
{
 unsigned int v0; // r0

 return v0;
}


// Function: call_fake_branch at 0x4006d4
unsigned int call_fake_branch()
{
 return 10;
}


// Function: param_opaque_predicate at 0x4006dc
int param_opaque_predicate(unsigned int a0)
{
 unsigned int v5; // lr
 unsigned int v6; // r7
 unsigned int v15; // r1
 unsigned int v7; // r6
 unsigned int v8; // r5
 unsigned int v9; // r4
 unsigned int v10; // r4
 unsigned int v11; // r7
 unsigned int v12; // r5
 unsigned int v13; // r0
 unsigned int result; // r1
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = v6;
 v2 = v7;
 v1 = v8;
 v0 = v9;
 v10 = a0;
 v11 = a0 + 1;
 v12 = 4294967295;
 if (!((char)armg_calculate_condition(33, a0, 1, 0)))
 {
 v13 = v10;
 result = v11;
 do
 {
 v12 = result;
 __aeabi_idivmod(v13, result);
 v13 = v12;
 result = v15;
 } while (result);
 }
 if (((a0 * 2 | 1) + v10 * v10 ^ v11 * v11) || v12 != 1)
 return v10 * 3 + 20;
 return a0 * 2 + 10;
}


// Function: call_opaque_predicate at 0x40073c
unsigned int call_opaque_predicate()
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int result; // r1
 unsigned int v7; // r0
 unsigned int v8; // r1
 unsigned int v9; // r1
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 result = 6;
 v7 = 5;
 do
 {
 v8 = result;
 __aeabi_idivmod(v7, v8);
 result = v9;
 v7 = v8;
 } while (result);
 return (v8 == 1 ? 20 : 35);
}


// Function: param_instruction_substitution at 0x400770
int param_instruction_substitution(unsigned int a0)
{
 return (a0 & 15) + (a0 >> 1) + a0 * 21;
}


// Function: call_instruction_substitution at 0x400788
unsigned int call_instruction_substitution()
{
 return 225;
}


// Function: decrypt_string at 0x400790
char *decrypt_string(char *a0, char *ptr, unsigned int n, char a3)
{
 unsigned int result; // r0
 char *cur;

 strncpy(ptr, a0, n);
 ptr[1 + n] = 0;
 result = *(ptr);
 if (!result)
 return ptr;
 cur = ptr + 1;
 do
 {
 cur[1] = (char)result ^ a3;
 result = cur[0];
 cur = &cur[1];
 } while (result);
 return ptr;
}


// Function: param_string_encryption at 0x4007ec
static char param_string_encryption_encrypted[] = "\x9e\x87\x87\x8d\xcd\x99\x9c\x8c\x9a\xcb\x81\x9a\x8a\xcb\x8f\x9e\x8b\xcb\x84\x9e\x9d\x8a\x8c\x8e\x9f\xcb\x8b\x9a\x99\x9e\x8b";

int param_string_encryption()
{
 char *dst;
 unsigned int result; // r1
 unsigned int v4; // r4
 char *cur;
 char v0[31]; // [bp-0x28]
 char flag1; // [bp-0x9]

 dst = strncpy(&v0, &param_string_encryption_encrypted, 32);
 result = (unsigned int)v0;
 v4 = 0;
 flag1 = 0;
 if (result)
 {
 cur = &dst[1];
 do
 {
 cur[1] = (char)result ^ 90;
 result = cur[0];
 cur = &cur[1];
 } while (result);
 v4 = (unsigned int)v0;
 }
 return strlen(&v0) + v4;
}


// Function: call_string_encryption at 0x400858
unsigned int call_string_encryption()
{
 unsigned int v0; // r0

 v0 = param_string_encryption();
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x40085c
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 if (a0 >= 1)
 {
 v0 = v1;
 a1 = a1 + a0 + (a0 - 1) * (a0 - 1) - (((a0 - 1) * (a0 - 2) >> 32 & 1) * 0x80000000 | (a0 - 1) * (a0 - 2) >> 1);
 }
 return a1;
}


// Function: call_tail_call_optimized at 0x400898
unsigned int call_tail_call_optimized()
{
 return 500500;
}


// Function: param_non_tail_call at 0x4008a4
unsigned int param_non_tail_call(unsigned int a0)
{
 unsigned int result; // r0
 unsigned int v1; // r0

 if (a0 < 1)
 {
 result = 0;
 if (!((char)armg_calculate_condition(178, a0, 1, 0)))
 goto LABEL_4008b0;
 return 0;
 v1 = result;
 }
 else
 {
 if (!((char)armg_calculate_condition(178, a0, 1, 0)))
 goto LABEL_4008b0;
 return a0;
 v1 = a0;
 }
LABEL_4008b0:
 return v1 + (v1 - 1) * (v1 - 1) - (((v1 - 1) * (v1 - 2) >> 32 & 1) * 0x80000000 | (v1 - 1) * (v1 - 2) >> 1);
}


// Function: call_non_tail_call at 0x4008d4
unsigned int call_non_tail_call()
{
 return 5050;
}


// Function: param_vectorized_loop at 0x4008e0
unsigned int param_vectorized_loop(unsigned int *a0, unsigned int *a1, unsigned int *ptr, unsigned int j)
{
 unsigned int result; // r4
 unsigned int *v1; // r12
 unsigned int *v2; // r1
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int *v5; // r2
 unsigned int v6; // r3

 if (j < 1)
 return 0;
 result = j;
 do
 {
 v1 = a0 + 1;
 v2 = a1 + 1;
 v3 = result - 1;
 *((unsigned int *)ptr) = *(a1) + *(a0);
 ptr = ptr + 1;
 result = v3;
 a0 = v1;
 a1 = v2;
 } while (result != 1);
 if (j < 1)
 return 0;
 v4 = 0;
 do
 {
 v5 = ptr + 1;
 v6 = j - 1;
 v4 += *(ptr);
 ptr = v5;
 j = v6;
 } while (j != 1);
 return v4;
}


// Function: call_vectorized_loop at 0x400938
static unsigned int g_401010[8] = {1, 2, 3, 4, 5, 6, 7, 8};
static unsigned int g_401030[8] = {10, 20, 30, 40, 50, 60, 70, 80};

int call_vectorized_loop()
{
 unsigned int idx; // r5
 unsigned int j; // r1
 unsigned int v3; // r0
 unsigned int v4; // r0
 unsigned int index; // r1
 unsigned int v6; // r1
 unsigned int v7; // r0
 char v0; // [bp-0x30]

 idx = 0;
 memset(&v0, 0, 32);
 do
 {
 *((unsigned int *)&(&v0)[4 * idx]) = g_401030[idx] + g_401010[idx];
 idx += 1;
 } while (idx != 8);
 j = 0;
 v3 = 0;
 do
 {
 v4 = v3;
 index = j;
 v6 = index + 1;
 v7 = *((int *)&(&v0)[4 * index]) + v4;
 j = v6;
 v3 = v7;
 } while (j != 8);
 return *((int *)&(&v0)[4 * index]) + v4;
}


// Function: param_link_time_optimization at 0x4009b4
int param_link_time_optimization(unsigned int a0)
{
 return 10 + a0 * 2;
}


// Function: call_link_time_optimization at 0x4009c0
unsigned int call_link_time_optimization()
{
 return 20;
}


// Function: div_zero_handler at 0x4009c8
static unsigned int div_zero_caught;
static jmp_buf jmp_buffer;

int div_zero_handler()
{
 div_zero_caught = 1;
 longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: param_division_by_zero at 0x4009f0

unsigned int param_division_by_zero(unsigned int a0)
{
 unsigned int v0; // r0

 signal(8, div_zero_handler);
 if (_setjmp(&jmp_buffer))
 return 4294967295;
 v0 = __divsi3(10, a0);
 return __divsi3(10, a0);
}


// Function: call_division_by_zero at 0x400a40
int call_division_by_zero()
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, NULL);
 return v1 + v0;
}


// Function: segv_handler at 0x400a74
unsigned int segv_buffer;
unsigned int segv_caught;

int segv_handler()
{
 segv_caught = 1;
 longjmp(&segv_buffer, 1); /* do not return */
}


// Function: param_null_pointer_deref at 0x400a9c
extern unsigned int segv_buffer;

int param_null_pointer_deref(unsigned int *a0)
{
 signal(11, segv_handler);
 _setjmp(&segv_buffer);
 return *(a0);
}


// Function: call_null_pointer_deref at 0x400ae0
int call_null_pointer_deref()
{
 unsigned int v1; // r0
 unsigned int v2; // r0
 unsigned int v0[1]; // [bp-0x14]

 *((unsigned int *)v0) = 42;
 v1 = param_null_pointer_deref(&v0);
 v2 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 return v2 + v1;
}


// Function: param_buffer_overflow_stack at 0x400b24
int param_buffer_overflow_stack()
{
 unsigned int v0; // r0

 return v0;
}


// Function: param_buffer_overflow_heap at 0x400b28
int param_buffer_overflow_heap()
{
 unsigned int v0; // r0

 return v0;
}


// Function: call_buffer_overflow at 0x400b2c
unsigned int call_buffer_overflow()
{
 return 30;
}


// Function: param_integer_overflow at 0x400b34
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r3
 unsigned int v1; // cc_dep1
 unsigned int v14; // r2
 unsigned int v15; // r2
 unsigned int v16; // r2
 unsigned int v2; // cc_dep2
 unsigned int v3; // cc_ndep
 unsigned int v4; // cc_dep1
 unsigned int v5; // cc_dep2
 unsigned int v6; // cc_ndep

 v0 = a1 + a0;
 if (1 <= a0)
 {
 if ((char)armg_calculate_condition(162, (armg_calculate_condition(162, v1, v2, v3) ? a1 : v1), (armg_calculate_condition(162, v1, v2, v3) ? 1 : v2), (armg_calculate_condition(162, v1, v2, v3) ? 0 : v3)))
 goto LABEL_400b60;
 }
 else
 {
 if ((char)armg_calculate_condition(162, (armg_calculate_condition(162, v4, v5, v6) ? a1 : v4), (armg_calculate_condition(162, v4, v5, v6) ? 1 : v5), (armg_calculate_condition(162, v4, v5, v6) ? 0 : v6)))
 {
LABEL_400b60:
 if (!((char)armg_calculate_condition(82, v0, 0, 0)))
 return 4294967295;
 }
 }
 if (0 < v0)
 v14 = 4294967294;
 else
 v14 = v0;
 v15 = v14;
 if (armg_calculate_condition(82, a1 & a0, 0, 0))
 v16 = v0;
 else
 v16 = v15;
 return v16;
}


// Function: call_integer_overflow at 0x400b74
unsigned int call_integer_overflow()
{
 return 0x77359400;
}


// Function: param_undefined_behavior at 0x400b80
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_undefined_behavior at 0x400b88
unsigned int call_undefined_behavior()
{
 return 10;
}


// Function: param_implementation_defined at 0x400b90
unsigned int param_implementation_defined()
{
 return 44;
}


// Function: call_implementation_defined at 0x400b98
unsigned int call_implementation_defined()
{
 return 44;
}


// Function: test_obf_opt_edge at 0x400ba0
static char g_401050[] = "fake_branch: %u\n";
static char g_40106c[] = "opaque_predicate: %u\n";
static char g_401088[] = "instruction_substitution: %u\n";
static char g_4010a5[] = "string_encryption: %u\n";
static char g_4010c1[] = "tail_call_optimized: %u\n";
static char g_4010eb[] = "non_tail_call: %u\n";
static char g_401110[] = "vectorized_loop: %u\n";
static char g_401136[] = "link_time_optimization: %u\n";
static char g_401156[] = "division_by_zero: %u\n";
static char g_401172[] = "null_pointer_deref: %u\n";
static char g_40118f[] = "buffer_overflow: %u\n";
static char g_4011ac[] = "integer_overflow: %u\n";
static char g_4011dd[] = "undefined_behavior: %u\n";
static char g_4011fa[] = "implementation_defined: %u\n";
static char g_401221[] = "Testing optimization and security features:\n";

int test_obf_opt_edge()
{
 unsigned int v1; // r0
 unsigned int v10; // r0
 unsigned int result; // r1
 unsigned int v3; // r4
 unsigned int v4; // r1
 unsigned int v5; // r1

 puts(&g_401221);
 printf(&g_401050, 10);
 v1 = 5;
 result = 6;
 do
 {
 v3 = result;
 __aeabi_idivmod(v1, result);
 v1 = v3;
 result = v4;
 } while (result);
 v5 = (v3 == 1 ? 20 : 35);
 printf(&g_40106c, (v3 == 1 ? 20 : 35));
 printf(&g_401088, 225);
 printf(&g_4010a5, param_string_encryption());
 printf(&g_4010c1, 500500);
 printf(&g_4010eb, 5050);
 printf(&g_401110, call_vectorized_loop());
 printf(&g_401136, 20);
 printf(&g_401156, call_division_by_zero());
 printf(&g_401172, call_null_pointer_deref());
 printf(&g_40118f, 30);
 printf(&g_4011ac, 0x77359400);
 printf(&g_4011dd, 10);
 v10 = printf(&g_4011fa, 44);
 return printf(&g_4011fa, 44);
}


// Function: main at 0x400d10
unsigned int main()
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function _divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */




/* CRT stub function _fini removed by preprocessor */



// Function: sub_400f78 at 0x400f78
int sub_400f78(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
 return a0;
}

