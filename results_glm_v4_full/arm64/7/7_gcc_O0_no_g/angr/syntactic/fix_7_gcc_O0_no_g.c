// Angr Decompilation of 7_gcc_O0_no_g
// Platform: AARCH64

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <stdio.h>

// Function declarations for CRT stub functions
void deregister_tm_clones(void);
void frame_dummy(void);
void __stack_chk_fail(void);

// Global buffer definitions for signal handling
jmp_buf div_buffer;
jmp_buf segv_buffer;

// Data for string encryption
char __dollar_d[32];

// External function stubs
void g_412f50(void) {}

// CRT function implementations
void deregister_tm_clones(void) {}
void frame_dummy(void) {}

// Rotate left macro/function
static inline unsigned long long __ROL__(unsigned long long value, int shift) {
    return (value << shift) | (value >> (64 - shift));
}


/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x400860
extern void g_412f50(void);

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 g_412f50();
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



/* CRT stub function _start removed by preprocessor */



// Function: sub_4009b0 at 0x4009b0
void sub_4009b0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_4009c8 at 0x4009c8
void sub_4009c8()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

void deregister_tm_clones(void);


/* CRT stub function register_tm_clones removed by preprocessor */



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400a88 at 0x400a88
long long sub_400a88()
{
 unsigned long long v0; // x0

 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_fake_branch at 0x400a94
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: call_fake_branch at 0x400abc
int call_fake_branch()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_fake_branch(10);
}


// Function: param_opaque_predicate at 0x400ad4
int param_opaque_predicate(unsigned int a0)
{
 char v6; // x0
 char v7; // x0
 unsigned int flag2; // [bp-0x18]
 unsigned int flag3; // [bp-0x14]
 unsigned int flag4; // [bp-0x10]
 unsigned int flag1; // [bp-0xc]
 unsigned int result; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 if (a0 * a0 + (__ROL__(a0, 1) & 4294967294) + 1 != (a0 + 1) * (a0 + 1))
 v6 = 0;
 else
 v6 = 1;
 flag4 = v6;
 flag2 = a0;
 for (flag3 = a0 + 1; flag3; flag2 = v5)
 {
 v5 = flag3;
 flag3 = flag2 - flag3 * flag2 / flag3;
 }
 if (flag2 != 1)
 v7 = 0;
 else
 v7 = 1;
 flag1 = v7;
 result = 1;
 if (flag4 && flag1 && result)
 return ((a0 + 5) * 2 | a0 + 5 >> 31) & 4294967294;
 return ((a0 * 2 | a0 >> 31) & 4294967294) + a0 + 20;
}


// Function: call_opaque_predicate at 0x400bd4
int call_opaque_predicate()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x400bec
int param_instruction_substitution(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v0 = ((a0 * 8 | a0 >> 29) & 0xfffffff8) - ((a0 * 2 | a0 >> 31) & 4294967294);
 v1 = (a0 * 0x80000000 | a0 >> 1) & 2147483647;
 v2 = a0 & 15;
 v3 = ((a0 * 16 | a0 >> 28) & 0xfffffff0) - a0;
 return v0 + v1 + v2 + v3;
}


// Function: call_instruction_substitution at 0x400c6c
int call_instruction_substitution()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_instruction_substitution(10);
}


// Function: decrypt_string at 0x400c84
char * decrypt_string(char *a0, char *a1, unsigned long n, char a3)
{
 char *v0; // [bp-0x40]
 char *cur; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 strncpy(a1, a0, n);
 a1[1 + n] = 0;
 for (cur = a1; *(cur); cur += 1)
 {
 *(cur) = *(cur) ^ a3;
 }
 return a1;
}


// Function: param_string_encryption at 0x400d10
extern char __dollar_d[32];
extern char __stack_chk_guard;

unsigned long long param_string_encryption()
{
 unsigned long long len; // x0
 char *v0; // [bp-0x40]
 char v1[32]; // [bp-0x28]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 decrypt_string(__dollar_d, v1, 32, 90);
 len = strlen(v1);
 if (v2 == *((long long *)&__stack_chk_guard))
 return (len & 4294967295) + (unsigned long long)v1 & 4294967295;
 __stack_chk_fail(); /* do not return */
}


// Function: call_string_encryption at 0x400d8c
unsigned long long call_string_encryption()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_string_encryption();
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x400da0
int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (0 < a0)
 return param_tail_call_optimized(a0 - 1, a1 + a0 & 4294967295);
 return a1;
}


// Function: call_tail_call_optimized at 0x400dec
int call_tail_call_optimized()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_tail_call_optimized(1000, 0);
}


// Function: param_non_tail_call at 0x400e08
unsigned long long param_non_tail_call(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (0 < a0)
 return (param_non_tail_call(a0 - 1) & 4294967295) + a0;
 return 0;
}


// Function: call_non_tail_call at 0x400e48
unsigned long long call_non_tail_call()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_non_tail_call(100);
 return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x400e60
unsigned int param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned long a2, unsigned int a3)
{
 unsigned int i; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int j; // [bp-0x4]

 for (i = 0; i < a3; i += 1)
 {
 *((int *)(a2 + (__ROL__(i, 2) & 18446744073709551612))) = *((int *)(a0 + (__ROL__(i, 2) & 18446744073709551612))) + *((int *)(a1 + (__ROL__(i, 2) & 18446744073709551612)));
 }
 v1 = 0;
 for (j = 0; j < a3; j += 1)
 {
 v1 += *((int *)(a2 + (__ROL__(j, 2) & 18446744073709551612)));
 }
 return v1;
}


// Function: call_vectorized_loop at 0x400f2c
extern char __stack_chk_guard;

long long call_vectorized_loop()
{
 unsigned int v8; // w0
 char *v0; // [bp-0x80]
 int v1; // [bp-0x68]
 unsigned long long v2; // [bp-0x58]
 int v3; // [bp-0x48]
 unsigned long long v4; // [bp-0x38]
 char v5; // [bp-0x28]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 v1 = 316912650112397582603894390785;
 v2 = 633825300243241909290088267781;
 v3 = 396140812682002152440041832456;
 v4 = 79228162551157825753847955460;
 memset(&v5, 0, 32);
 v8 = param_vectorized_loop((unsigned long)&v1, (unsigned long)&v3, (unsigned long)&v5, 8);
 if (v6 == *((long long *)&__stack_chk_guard))
 return v8;
 __stack_chk_fail(); /* do not return */
}


// Function: lto_target_func at 0x400fbc
unsigned int lto_target_func(unsigned int a0)
{
 return ((a0 + 5) * 2 | a0 + 5 >> 31) & 4294967294;
}


// Function: param_link_time_optimization at 0x400fd8
int param_link_time_optimization(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return lto_target_func(a0);
}


// Function: call_link_time_optimization at 0x400ff4
int call_link_time_optimization()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_link_time_optimization(5);
}


// Function: div_zero_handler at 0x40100c
extern jmp_buf div_buffer;
unsigned int div_zero_caught;

void div_zero_handler(int a0)
{
 unsigned long long v4; // x30
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned int v2; // [bp-0x4]
 char v3; // [bp+0x0]

 v0 = &v3;
 v1 = v4;
 v2 = a0;
 div_zero_caught = 1;
 longjmp(div_buffer, 1); /* do not return */
}


// Function: param_division_by_zero at 0x401038
extern jmp_buf div_buffer;

unsigned long long param_division_by_zero(unsigned int a0)
{
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 signal(SIGFPE, (__sighandler_t)div_zero_handler);
 if (_setjmp(div_buffer))
 return 4294967295;
 v1 = 10 / a0;
 return v1;
}


// Function: call_division_by_zero at 0x40108c
int call_division_by_zero()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]
 char v3; // [bp+0x0]

 v0 = &v3;
 v1 = param_division_by_zero(5);
 v2 = param_division_by_zero(0);
 signal(8, NULL);
 return v1 + v2;
}


// Function: segv_handler at 0x4010cc
extern jmp_buf segv_buffer;
unsigned int segv_caught;

void segv_handler(int a0)
{
 unsigned long long v4; // x30
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned int v2; // [bp-0x4]
 char v3; // [bp+0x0]

 v0 = &v3;
 v1 = v4;
 v2 = a0;
 segv_caught = 1;
 longjmp(segv_buffer, 1); /* do not return */
}


// Function: param_null_pointer_deref at 0x4010f8
extern jmp_buf segv_buffer;

unsigned long long param_null_pointer_deref(unsigned int *ptr)
{
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 signal(SIGSEGV, (__sighandler_t)segv_handler);
 if (_setjmp(segv_buffer))
 return 4294967295;
 v1 = *(ptr);
 return v1;
}


// Function: call_null_pointer_deref at 0x401148
extern char __stack_chk_guard;

unsigned long long call_null_pointer_deref()
{
 char *v0; // [bp-0x30]
 unsigned int v1[1]; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v1[0] = 42;
 v2 = param_null_pointer_deref(v1);
 v3 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 if (v4 == *((long long *)&__stack_chk_guard))
 return v2 + v3 & 4294967295;
 __stack_chk_fail(); /* do not return */
}


// Function: param_buffer_overflow_stack at 0x4011cc
extern char __stack_chk_guard;

long long param_buffer_overflow_stack(unsigned int a0)
{
 unsigned int v5; // w0
 char *v0; // [bp-0x40]
 unsigned int i; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned long v6; // [bp-0x10]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 v2 = 305419896;
 for (i = 0; i <= 16; i += 1)
 {
 *((char *)&v6 + i) = 65;
 }
 if (v2 == 305419896)
 v5 = a0;
 else
 v5 = 4294967295;
 if (v3 == *((long long *)&__stack_chk_guard))
 return v5;
 __stack_chk_fail(); /* do not return */
}


// Function: param_buffer_overflow_heap at 0x401278
unsigned long long param_buffer_overflow_heap(unsigned int a0)
{
 char *v0; // [bp-0x30]
 unsigned int i; // [bp-0xc]
 void* ptr; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 ptr = malloc(16);
 if (!ptr)
 return 4294967294;
 for (i = 0; i <= 32; i += 1)
 {
 *((char *)ptr + i) = 66;
 }
 free(ptr);
 return a0;
}


// Function: call_buffer_overflow at 0x4012ec
int call_buffer_overflow()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]
 char v3; // [bp+0x0]

 v0 = &v3;
 v1 = param_buffer_overflow_stack(10);
 v2 = param_buffer_overflow_heap(20);
 return v1 + v2;
}


// Function: param_integer_overflow at 0x401320
unsigned long long param_integer_overflow(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0x4]

 v0 = a0 + a1;
 v1 = a0 + a1;
 if (a0 > 0 && a1 > 0 && 0 > v0)
 return 4294967295;
 if (0 > a0 && 0 > a1 && v0 > 0)
 return 4294967294;
 return v1;
}


// Function: call_integer_overflow at 0x4013c0
int call_integer_overflow()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]
 char v3; // [bp+0x0]

 v0 = &v3;
 v1 = param_integer_overflow(0x3b9aca00, 0x3b9aca00);
 v2 = param_integer_overflow(4294967295, 1);
 return v1 + v2;
}


// Function: param_undefined_behavior at 0x401404
unsigned int param_undefined_behavior(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_undefined_behavior at 0x401424
int call_undefined_behavior()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = param_undefined_behavior(5);
 return v1;
}


// Function: param_implementation_defined at 0x401444
unsigned int param_implementation_defined()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v1 = 0;
 v1 += 2;
 v2 = 0xfffffff8;
 v1 += v2 >> 31 & 0x80000000 | __ROL__(v2, 31) & 2147483647;
 v0 |= 7;
 v0 |= 248;
 v0 = v0 & 255 | __ROL__(1193046, 8) & 0xffffff00;
 v1 += ((int)*((long long *)&v0) & 7 & 255) + (((int)*((long long *)&v0) * 0 | (int)(*((long long *)&v0) >> 3)) & 31 & 255);
 v1 += 12;
 return v1;
}


// Function: call_implementation_defined at 0x4014ec
int call_implementation_defined()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_implementation_defined();
}


// Function: test_obf_opt_edge at 0x401500
static const char g_4016b8[] = "Testing obfuscation and optimization transformations:\n";
static const char g_4016e8[] = "  fake_branch: %d\n";
static const char g_401708[] = "  opaque_predicate: %d\n";
static const char g_401728[] = "  instruction_substitution: %d\n";
static const char g_401748[] = "  string_encryption: %llu\n";
static const char g_401768[] = "  tail_call_optimized: %d\n";
static const char g_401798[] = "  non_tail_call: %llu\n";
static const char g_4017c0[] = "  vectorized_loop: %d\n";
static const char g_4017e8[] = "  link_time_optimization: %d\n";
static const char g_401808[] = "  division_by_zero: %d\n";
static const char g_401828[] = "  null_pointer_deref: %llu\n";
static const char g_401848[] = "  buffer_overflow: %d\n";
static const char g_401868[] = "  integer_overflow: %d\n";
static const char g_4018a0[] = "  undefined_behavior: %d\n";
static const char g_4018c0[] = "  implementation_defined: %d\n";

int test_obf_opt_edge()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_4016b8);
 printf(g_4016e8, call_fake_branch() & 4294967295);
 printf(g_401708, call_opaque_predicate() & 4294967295);
 printf(g_401728, call_instruction_substitution() & 4294967295);
 printf(g_401748, call_string_encryption() & 4294967295);
 printf(g_401768, call_tail_call_optimized() & 4294967295);
 printf(g_401798, call_non_tail_call() & 4294967295);
 printf(g_4017c0, call_vectorized_loop() & 4294967295);
 printf(g_4017e8, call_link_time_optimization() & 4294967295);
 printf(g_401808, call_division_by_zero() & 4294967295);
 printf(g_401828, call_null_pointer_deref() & 4294967295);
 printf(g_401848, call_buffer_overflow() & 4294967295);
 printf(g_401868, call_integer_overflow() & 4294967295);
 printf(g_4018a0, call_undefined_behavior() & 4294967295);
 return printf(g_4018c0, call_implementation_defined() & 4294967295);
}


// Function: main at 0x401638
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


