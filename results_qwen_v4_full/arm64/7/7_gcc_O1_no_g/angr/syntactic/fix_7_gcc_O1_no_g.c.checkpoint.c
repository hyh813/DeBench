// Angr Decompilation of 7_gcc_O1_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stdint.h>

// glibc internal function declaration
void __printf_chk(int flag, const char *format, ...);

// Standard library function declaration
int puts(const char *s);

// Additional standard library function declarations
void *memset(void *s, int c, size_t n);
void *malloc(size_t size);
void free(void *ptr);
size_t strlen(const char *s);
void (*signal(int sig, void (*func)(int)))(int);
int vprintf(const char *format, va_list ap);

// glibc __printf_chk stub implementation
void __printf_chk(int flag, const char *format, ...)
{
 va_list args;
 va_start(args, format);
 vprintf(format, args);
 va_end(args);
}

// Macro for rotate left
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

// VEX/Angr helper function declaration
long long arm64g_calculate_condition(unsigned long long cc_op, unsigned long long cc_dep1, unsigned long long cc_dep2, unsigned long long cc_ndep);

// VEX/Angr helper function stub implementation
long long arm64g_calculate_condition(unsigned long long cc_op, unsigned long long cc_dep1, unsigned long long cc_dep2, unsigned long long cc_ndep)
{
 return 0;
}

// glibc internal function declaration
void __longjmp_chk(jmp_buf env, int val, ...);

// glibc __longjmp_chk stub implementation
void __longjmp_chk(jmp_buf env, int val, ...)
{
 longjmp(env, val);
}

// glibc stack protection function declaration
void __stack_chk_fail(void);

// glibc __stack_chk_fail stub implementation
void __stack_chk_fail(void)
{
 fprintf(stderr, "stack smashing detected\n");
 abort();
}

// setjmp declaration
int _setjmp(jmp_buf env);

// _setjmp stub implementation
int _setjmp(jmp_buf env)
{
 return setjmp(env);
}

// CRT stub function forward declarations
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
unsigned long long frame_dummy(void);

// Forward declaration for decrypt_string
char *decrypt_string(char *a0, char *a1, unsigned long n, char a3);


/* CRT stub function _init removed by preprocessor */



// Global variables for printf format strings
const char g_4011b0[] = "%d\n";

// Missing global variable definitions
unsigned long long g_411f50 = 0;
unsigned int div_zero_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
unsigned int segv_caught = 0;
uintptr_t __stack_chk_guard = 0;
char encrypted_0[32] = "Zm9vYmFyYmF6cXV4Y29ycmdlZm9vYmFy";
const char g_4011d0[] = "%d\n";
const char g_4011f0[] = "%d\n";
const char g_401210[] = "%d\n";
const char g_401230[] = "%d\n";
const char g_401260[] = "%d\n";
const char g_401288[] = "%d\n";
const char g_4012b0[] = "%d\n";
const char g_4012d0[] = "%d\n";
const char g_4012f0[] = "%d\n";
const char g_401310[] = "%d\n";
const char g_401330[] = "%d\n";
const char g_401368[] = "%d\n";
const char g_401388[] = "%d\n";
const char test_output_msgs[] = "Test Output:\n";

// Function: __dollar_x at 0x400860

long long __dollar_x()
{
 return g_411f50;
}


// Function: sub_400874 at 0x400874
long long sub_400874()
{
 return 0;
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



// CRT stub function implementation
void deregister_tm_clones()
{
 return;
}




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_400a3c at 0x400a3c
void sub_400a3c()
{
 __do_global_dtors_aux();
 return;
}



// CRT stub function implementation
void __do_global_dtors_aux()
{
 return;
}



// Function: sub_400a88 at 0x400a88
long long sub_400a88()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



// CRT stub function implementation
unsigned long long frame_dummy()
{
 return 0;
}



// Function: div_zero_handler at 0x400a94

void div_zero_handler(int sig)
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1); /* do not return */
}


// Function: segv_handler at 0x400ab4

void segv_handler(int sig)
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1); /* do not return */
}


// Function: param_fake_branch at 0x400ad4
long long param_fake_branch()
{
 return 0;
}


// Function: call_fake_branch at 0x400ad8
unsigned long long call_fake_branch()
{
 return 10;
}


// Function: param_opaque_predicate at 0x400ae0
int param_opaque_predicate(unsigned int a0)
{
 unsigned int flag1; // w1
 unsigned int v1; // w2
 unsigned int v2; // w3
 unsigned long v3; // cc_dep1
 unsigned long v4; // cc_dep2
 unsigned int result; // w6
 unsigned int v6; // w2
 unsigned long v7; // x3

 flag1 = a0 + 1;
 v1 = (__ROL__(a0, 1) & 4294967294) + a0 * a0 + 1;
 v2 = flag1 * flag1;
 v3 = v1;
 v4 = v2;
 if (v1 != v2)
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
 return a0 * 3 + 20;
}


// Function: call_opaque_predicate at 0x400b38
int call_opaque_predicate()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x400b50
int param_instruction_substitution(unsigned int a0)
{
 return ((a0 * 8 | a0 >> 29) & 0xfffffff8) - a0 * 2 + (a0 >> 1) + (a0 & 15) + ((a0 * 16 | a0 >> 28) & 0xfffffff0) - a0;
}


// Function: call_instruction_substitution at 0x400b74
unsigned long long call_instruction_substitution()
{
 return 225;
}


// Function: decrypt_string at 0x400b7c
char* decrypt_string(char *a0, char *a1, unsigned long n, char a3)
{
 char *p; // x20
 unsigned int result; // w2
 char *ptr; // x3
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 p = a1;
 strncpy(p, a0, n);
 p[n] = 0;
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


// Function: param_string_encryption at 0x400bdc

long long param_string_encryption()
{
 unsigned long long len; // x0
 char *v0; // [bp-0x50]
 char v1[32]; // [bp-0x28]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 decrypt_string(encrypted_0, v1, 32, 90);
 len = strlen(v1);
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return (unsigned long long)v1 + len;
}


// Function: call_string_encryption at 0x400c54
unsigned long long call_string_encryption()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_string_encryption();
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x400c68
int param_tail_call_optimized(unsigned long a0, unsigned long a1)
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if ((unsigned int)a0 <= 0)
 return a1;
 v0 = &v2;
 v1 = v3;
 return param_tail_call_optimized((unsigned int)a0 - 1, a0 + a1);
}


// Function: call_tail_call_optimized at 0x400c94
int call_tail_call_optimized()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_tail_call_optimized(1000, 0);
}


// Function: param_non_tail_call at 0x400cb0
unsigned long long param_non_tail_call(unsigned long a0)
{
 unsigned long long v4; // x30
 unsigned long long v5; // x19
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 char v3; // [bp+0x0]

 if ((unsigned int)a0 <= 0)
 return 0;
 v0 = &v3;
 v1 = v4;
 v2 = v5;
 return param_non_tail_call((unsigned int)a0 - 1) + (a0 & 4294967295);
}


// Function: call_non_tail_call at 0x400ce8
unsigned long long call_non_tail_call()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_non_tail_call(100);
 return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x400d00
unsigned long long param_vectorized_loop(unsigned long* a0, unsigned long* a1, unsigned long* ptr, unsigned int i)
{
 unsigned long long idx; // x4
 unsigned long long v1; // x1
 unsigned long long v2; // x0

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
 v2 += *((int *)(ptr + v1 * 4));
 v1 += 1;
 } while ((unsigned int)v1 < i);
 return v2;
}


// Function: call_vectorized_loop at 0x400d50

unsigned long long call_vectorized_loop()
{
 unsigned long long v8; // x0
 char *v0; // [bp-0x80]
 unsigned long long v1; // [bp-0x68]
 unsigned long long v2; // [bp-0x58]
 unsigned long long v3; // [bp-0x48]
 unsigned long long v4; // [bp-0x38]
 char v5; // [bp-0x28]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 unsigned long arr1[8] = {1, 2, 3, 4, 5, 6, 7, 8};
 unsigned long arr2[8] = {10, 20, 30, 40, 50, 60, 70, 80};
 unsigned long arr3[8] = {100, 200, 300, 400, 500, 600, 700, 800};
 unsigned long arr4[8] = {1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000};
 memset(&v5, 0, 32);
 v8 = param_vectorized_loop(arr1, arr3, (unsigned long*)&v5, 8);
 if (v6 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v8;
}


// Function: param_link_time_optimization at 0x400dc8
unsigned int param_link_time_optimization(unsigned int a0)
{
 return ((a0 + 5) * 2 | a0 + 5 >> 31) & 4294967294;
}


// Function: call_link_time_optimization at 0x400dd4
unsigned long long call_link_time_optimization()
{
 return 20;
}


// Function: param_division_by_zero at 0x400ddc

unsigned long long param_division_by_zero(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 signal(8, div_zero_handler);
 if (_setjmp(jmp_buffer))
 return 4294967295;
 return 10 / a0;
}


// Function: call_division_by_zero at 0x400e28
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


// Function: param_null_pointer_deref at 0x400e68

unsigned long long param_null_pointer_deref(unsigned int *a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 signal(11, segv_handler);
 if (_setjmp(segv_buffer))
 return 4294967295;
 return *(a0);
}


// Function: call_null_pointer_deref at 0x400eb0

long long call_null_pointer_deref()
{
 unsigned long long v4; // x0
 unsigned long long v5; // x0
 char *v0; // [bp-0x30]
 unsigned int v1[1]; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 v1[0] = 42;
 v4 = param_null_pointer_deref(v1);
 v5 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return (v4 & 4294967295) + (v5 & 4294967295);
}


// Function: param_buffer_overflow_stack at 0x400f2c
long long param_buffer_overflow_stack()
{
 unsigned long v0; // x0

 return v0;
}


// Function: param_buffer_overflow_heap at 0x400f30
unsigned int param_buffer_overflow_heap(unsigned int a0)
{
 void* ptr; // x0
 unsigned int result; // w1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(16);
 if (!ptr)
 return 4294967294;
 result = 33;
 do
 {
 result -= 1;
 } while (result != 1);
 free(ptr);
 return a0;
}


// Function: call_buffer_overflow at 0x400f74
int call_buffer_overflow()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_buffer_overflow_heap(20) + 10;
}


// Function: param_integer_overflow at 0x400f90
unsigned long long param_integer_overflow(unsigned long a0, unsigned long a1)
{
 unsigned int v0; // w2
 unsigned long long v1; // x0
 unsigned long v10; // cc_dep2
 unsigned long v11; // cc_ndep
 unsigned long long v16; // cc_op
 unsigned long long v17; // cc_dep1
 unsigned long long v2; // cc_op
 unsigned long long v26; // cc_op
 unsigned long long v27; // cc_dep1
 unsigned long v3; // cc_op
 unsigned long v4; // cc_dep1
 unsigned long v5; // cc_dep2
 unsigned long v6; // cc_ndep
 unsigned long long v7; // cc_dep1
 unsigned long v8; // cc_op
 unsigned long v9; // cc_dep1

 v0 = a0;
 v1 = a0 + a1;
 if (0 < v0)
 {
 v2 = 3;
 v7 = ((char)arm64g_calculate_condition(v3 | 192, v4, v5, v6) ? a1 & 4294967295 : 0x40000000);
 if (!((char)arm64g_calculate_condition(195, v7, 0, 0)))
 goto LABEL_400fa2;
LABEL_400fa1:
 v16 = 3;
 v17 = ((char)arm64g_calculate_condition(v2 | 192, v7, 0, 0) ? v1 & 4294967295 : 0);
 if ((char)arm64g_calculate_condition(179, v17, 0, 0))
 return 4294967295;
 }
 else
 {
 v2 = 0;
 v7 = ((char)arm64g_calculate_condition(v8 | 192, v9, v10, v11) ? a1 & 4294967295 : 0x40000000);
 if ((char)arm64g_calculate_condition(192, v7, 0, 0))
 goto LABEL_400fa1;
LABEL_400fa2:
 v16 = 0;
 v17 = ((char)arm64g_calculate_condition(v2 | 192, v7, 0, 0) ? v1 & 4294967295 : 0);
 if ((char)arm64g_calculate_condition(176, v17, 0, 0))
 return 4294967295;
 }
 if ((char)arm64g_calculate_condition(73, (unsigned long long)(v0 & (unsigned int)a1), 0, 0))
 {
 v26 = 3;
 v27 = ((char)arm64g_calculate_condition(v16 | 64, v17, 0, 0) ? v1 & 4294967295 : 0x40000000);
 }
 else
 {
 v26 = 0;
 v27 = ((char)arm64g_calculate_condition(v16 | 64, v17, 0, 0) ? v1 & 4294967295 : 0x40000000);
 }
 if (!((char)arm64g_calculate_condition(v26 | 208, v27, 0, 0)))
 return 4294967294;
 return v1 & 4294967295;
}


// Function: call_integer_overflow at 0x400fc4
unsigned long long call_integer_overflow()
{
 return 0x77359400;
}


// Function: param_undefined_behavior at 0x400fd0
unsigned int param_undefined_behavior(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_undefined_behavior at 0x400fd8
unsigned long long call_undefined_behavior()
{
 return 10;
}


// Function: param_implementation_defined at 0x400fe0
unsigned long long param_implementation_defined()
{
 return 48;
}


// Function: call_implementation_defined at 0x400fe8
unsigned long long call_implementation_defined()
{
 return 48;
}


// Function: test_obf_opt_edge at 0x400ff0

int test_obf_opt_edge()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(test_output_msgs);
 __printf_chk(1, g_4011b0, 10);
 __printf_chk(1, g_4011d0, call_opaque_predicate() & 4294967295);
 __printf_chk(1, g_4011f0, 225);
 __printf_chk(1, g_401210, param_string_encryption() & 4294967295);
 __printf_chk(1, g_401230, call_tail_call_optimized() & 4294967295);
 __printf_chk(1, g_401260, call_non_tail_call() & 4294967295);
 __printf_chk(1, g_401288, call_vectorized_loop() & 4294967295);
 __printf_chk(1, g_4012b0, 20);
 __printf_chk(1, g_4012d0, call_division_by_zero() & 4294967295);
 __printf_chk(1, g_4012f0, call_null_pointer_deref() & 4294967295);
 __printf_chk(1, g_401310, call_buffer_overflow() & 4294967295);
 __printf_chk(1, g_401330, 0x77359400);
 __printf_chk(1, g_401368, 10);
 __printf_chk(1, g_401388, 48);
 return 0;
}


// Function: main at 0x401148
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


