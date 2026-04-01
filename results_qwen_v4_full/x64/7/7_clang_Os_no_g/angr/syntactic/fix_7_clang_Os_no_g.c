// Angr Decompilation of 7_clang_Os_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/* CRT stub function _init removed by preprocessor */
struct struct_0;

typedef __int128 int128_t;

#define CONCAT(a, b) (((unsigned long long)(a) << 32) | ((unsigned int)(b)))

struct struct_0 *g_403fe8 = NULL;

// Forward declarations for CRT stub functions and other functions
extern void deregister_tm_clones();
extern void register_tm_clones();
extern void __do_global_dtors_aux();
extern void frame_dummy();
extern int param_fake_branch(unsigned int a0);




// Function: sub_401020 at 0x401020
unsigned long long g_404008 = 0;
unsigned long long g_404010 = 0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 return;
}


// Function: sub_40102c at 0x40102c
long long sub_40102c()
{
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010d5 at 0x4010d5
void sub_4010d5()
{
}






/* CRT stub function deregister_tm_clones removed by preprocessor */







/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401185 at 0x401185
void sub_401185()
{
}






/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401199 at 0x401199
void sub_401199(unsigned long a0)
{
 param_fake_branch(a0);
 return;
}


// Function: param_fake_branch at 0x40119c
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: call_fake_branch at 0x40119f
unsigned long long call_fake_branch()
{
 return 10;
}


// Function: param_opaque_predicate at 0x4011a5
long long param_opaque_predicate(unsigned int a0)
{
 unsigned int v1; // r8d
 unsigned long long v2; // rcx
 unsigned int result; // esi
 unsigned long v4; // cc_op
 unsigned long v5; // cc_dep1
 unsigned long v6; // cc_dep2
 unsigned long v7; // cc_ndep
 unsigned int v8; // eax

 v1 = a0 * 2;
 v2 = 4294967295;
 result = a0 + 1;
 if (!((char)(v4 == 0)))
 {
 v8 = a0;
 do
 {
 v2 = result;
 result = v2;
 v8 = v2;
 } while (result);
 }
 return (!((unsigned int)v2 ^ 1) && !((a0 + 1) * (a0 + 1) ^ (v1 | 1) + a0 * a0) ? v1 + 10 : a0 * 3 + 20);
}


// Function: call_opaque_predicate at 0x4011e9
unsigned long long call_opaque_predicate()
{
 unsigned int result; // edx
 unsigned int v2; // eax
 unsigned long v3; // rcx

 result = 6;
 v2 = 5;
 do
 {
 v3 = result;
 result = v3;
 v2 = v3;
 } while (result);
 if ((unsigned int)v3 != 1)
 return 35;
 return 20;
}


// Function: param_instruction_substitution at 0x40120f
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 21 + (a0 >> 1) + (a0 & 15);
}


// Function: call_instruction_substitution at 0x401223
unsigned long long call_instruction_substitution()
{
 return 225;
}


// Function: decrypt_string at 0x401229
char * decrypt_string(char *a0, char *p, unsigned long n, char a3)
{
 char v1; // al
 char *ptr; // rcx

 strncpy(p, a0, n);
 p[1 + n] = 0;
 v1 = *(p);
 if (!*(p))
 return p;
 ptr = p + 1;
 do
 {
 ptr[1] = v1 ^ a3;
 v1 = ptr[0];
 ptr = &ptr[1];
 } while (ptr[0]);
 return p;
}


// Function: param_string_encryption at 0x401269
char param_string_encryption_encrypted[32] = "encrypted_string_data_here";

int param_string_encryption()
{
 void* ptr; // rcx
 char v5; // al
 unsigned int v8; // ebx
 char v0[1]; // [bp-0x28]
 char v1; // [bp-0x27]
 char result; // [bp-0x9]

 strncpy(&v0, &param_string_encryption_encrypted, 32);
 result = 0;
 if (*(v0))
 {
 ptr = &v1;
 v5 = *(v0);
 do
 {
 *((char *)&ptr[1]) = v5 ^ 90;
 v5 = *((char *)ptr);
 ptr += 1;
 } while (*((char *)ptr));
 v8 = *(v0);
 }
 else
 {
 v8 = 0;
 }
 return (unsigned int)strlen(&v0) + v8;
}


// Function: call_string_encryption at 0x4012bb
int call_string_encryption()
{
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x4012c0
long long param_tail_call_optimized(unsigned long a0, unsigned int a1)
{
 unsigned long v1; // rax

 v1 = a1;
 if ((unsigned int)a0 > 0)
 v1 = v1 + a0 + (a0 - 1 & 4294967295) * (a0 - 1 & 4294967295) - ((a0 - 1 & 4294967295) * (a0 - 2 & 4294967295) >> 1);
 return v1;
}


// Function: call_tail_call_optimized at 0x4012dd
unsigned long long call_tail_call_optimized()
{
 return 500500;
}


// Function: param_non_tail_call at 0x4012e3
unsigned long long param_non_tail_call(unsigned long a0)
{
 unsigned long long v1; // rax

 if ((unsigned int)a0 <= 0)
 return 0;
 v1 = a0 - 1 & 4294967295;
 return v1 * v1 + a0 - (v1 * (a0 - 2 & 4294967295) >> 1);
}


// Function: call_non_tail_call at 0x4012ff
unsigned long long call_non_tail_call()
{
 return 5050;
}


// Function: param_vectorized_loop at 0x401305
unsigned long long param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned long ptr, unsigned int a3)
{
 unsigned long i; // r8
 unsigned long idx; // r9
 unsigned long v3; // rcx
 unsigned long long v4; // rax

 if (a3 <= 0)
 return 0;
 i = a3;
 idx = 0;
 do
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a1 + idx * 4)) + *((int *)(a0 + idx * 4));
 idx += 1;
 } while (i != idx);
 if (a3 <= 0)
 return 0;
 v3 = 0;
 v4 = 0;
 do
 {
 v4 = (unsigned int)v4 + *((int *)(ptr + v3 * 4));
 v3 += 1;
 } while (i != v3);
 return v4;
}


// Function: call_vectorized_loop at 0x40133a
char g_402010[64] = {0};
char g_402030[64] = {0};

int call_vectorized_loop()
{
 return 0;
}


// Function: param_link_time_optimization at 0x401397
int param_link_time_optimization(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: call_link_time_optimization at 0x40139e
unsigned long long call_link_time_optimization()
{
 return 20;
}


// Function: div_zero_handler at 0x4013a4
unsigned int div_zero_caught = 0;
jmp_buf jmp_buffer;

void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1); /* do not return */
}


// Function: param_division_by_zero at 0x4013c0
extern jmp_buf jmp_buffer;

unsigned int param_division_by_zero(unsigned long a0)
{
 signal(8, div_zero_handler);
 if (_setjmp(jmp_buffer))
 return 4294967295;
 if (a0 == 0) return 4294967295;
 return 10 / a0;
}


// Function: call_division_by_zero at 0x4013f8
int call_division_by_zero()
{
 unsigned int v3; // eax
 unsigned int v4; // eax

 v3 = param_division_by_zero(5);
 v4 = param_division_by_zero(0);
 signal(8, NULL);
 return v4 + v3;
}


// Function: segv_handler at 0x401427
jmp_buf segv_buffer;
unsigned int segv_caught = 0;

void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1); /* do not return */
}


// Function: param_null_pointer_deref at 0x401443
extern jmp_buf segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *a0)
{
 signal(11, segv_handler);
 if (_setjmp(segv_buffer))
 return 4294967295;
 if (a0 == NULL) return 4294967295;
 return *(a0);
}


// Function: call_null_pointer_deref at 0x401473
int call_null_pointer_deref()
{
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v1; // [bp-0x14]

 v1 = 42;
 v4 = param_null_pointer_deref(&v1);
 v5 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 return v5 + v4;
}


// Function: param_buffer_overflow_stack at 0x4014a8
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: param_buffer_overflow_heap at 0x4014ab
int param_buffer_overflow_heap(unsigned int a0)
{
 return a0;
}


// Function: call_buffer_overflow at 0x4014ae
unsigned long long call_buffer_overflow()
{
 return 30;
}


// Function: param_integer_overflow at 0x4014b4
unsigned long long param_integer_overflow(unsigned int a0, unsigned int a1)
{
 if (a0 > 0 && a1 > 0 && a1 + a0 < 0)
 return 4294967295;
 return ((a0 & a1) >= 0 ? a1 + a0 : (a1 + a0 <= 0 ? a1 + a0 : 4294967294));
}


// Function: call_integer_overflow at 0x4014d9
unsigned long long call_integer_overflow()
{
 return 0x77359400;
}


// Function: param_undefined_behavior at 0x4014df
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_undefined_behavior at 0x4014e3
unsigned long long call_undefined_behavior()
{
 return 10;
}


// Function: param_implementation_defined at 0x4014e9
unsigned long long param_implementation_defined()
{
 return 47;
}


// Function: call_implementation_defined at 0x4014ef
unsigned long long call_implementation_defined()
{
 return 47;
}


// Function: test_obf_opt_edge at 0x4014f5
char g_402050[] = "%d\n";
char g_40206c[] = "%d\n";
char g_402088[] = "%d\n";
char g_4020a5[] = "%d\n";
char g_4020c1[] = "%d\n";
char g_4020eb[] = "%d\n";
char g_402110[] = "%d\n";
char g_402136[] = "%d\n";
char g_402156[] = "%d\n";
char g_402172[] = "%d\n";
char g_40218f[] = "%d\n";
char g_4021ac[] = "%d\n";
char g_4021dd[] = "%d\n";
char g_4021fa[] = "%d\n";
char g_402221[] = "Test output:";

int test_obf_opt_edge()
{
 unsigned int result; // edx
 unsigned int v4; // eax
 unsigned long v5; // rcx

 puts(&g_402221);
 printf(&g_402050, 10);
 result = 6;
 v4 = 5;
 do
 {
 v5 = result;
 result = v5;
 v4 = v5;
 } while (result);
 printf(&g_40206c, ((unsigned int)v5 == 1 ? 20 : 35));
 printf(&g_402088, 225);
 printf(&g_4020a5, param_string_encryption() & 4294967295);
 printf(&g_4020c1, 500500);
 printf(&g_4020eb, 5050);
 printf(&g_402110, call_vectorized_loop() & 4294967295);
 printf(&g_402136, 20);
 printf(&g_402156, call_division_by_zero() & 4294967295);
 printf(&g_402172, call_null_pointer_deref() & 4294967295);
 printf(&g_40218f, 30);
 printf(&g_4021ac, 0x77359400);
 printf(&g_4021dd, 10);
 return printf(&g_4021fa, 47);
}


// Function: main at 0x401635
unsigned int main()
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


