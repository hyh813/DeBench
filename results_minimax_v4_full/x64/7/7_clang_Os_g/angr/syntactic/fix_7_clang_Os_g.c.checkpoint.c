// Angr Decompilation of 7_clang_Os_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

// Forward declarations for functions
unsigned int param_fake_branch(unsigned int a0);

// Stub declarations for CRT functions
extern void *g_403fe8;
extern unsigned long long g_404008;
extern unsigned long long g_404010;

// Stub definitions for CRT functions that were removed by preprocessor
static void deregister_tm_clones(void) { }
static void register_tm_clones(void) { }
static void __do_global_dtors_aux(void) { }
static void frame_dummy(void) { }

// Global string variables
extern char g_402010[];
extern char g_402030[];
extern char g_402050[];
extern char g_40206c[];
extern char g_402088[];
extern char g_4020a5[];
extern char g_4020c1[];
extern char g_4020eb[];
extern char g_402110[];
extern char g_402136[];
extern char g_402156[];
extern char g_402172[];
extern char g_40218f[];
extern char g_4021ac[];
extern char g_4021dd[];
extern char g_4021fa[];
extern char g_402221[];

// jmp_buf type for setjmp/longjmp - must be before extern declarations
#include <setjmp.h>
typedef jmp_buf jmp_buf_array;

// Other extern variables
extern char param_string_encryption_encrypted[32];
extern unsigned int div_zero_caught;

// Define missing global variables that are referenced but not defined
// These are data symbols from the original binary
unsigned int segv_caught = 0;
unsigned int div_zero_caught = 0;
char param_string_encryption_encrypted[32] = {0};

// jmp_buf buffers for setjmp/longjmp
jmp_buf_array jmp_buffer;
jmp_buf_array segv_buffer;

// _ccall function stub - simulates calls in angr decompilation
unsigned long long _ccall(unsigned long a, unsigned long b, unsigned long c, unsigned long d, unsigned long e)
{
    return 0;
}
char g_402010[32] = {0};
char g_402030[32] = {0};
char g_402050[256] = "%d\n";
char g_40206c[256] = "%d\n";
char g_402088[256] = "%d\n";
char g_4020a5[256] = "%d\n";
char g_4020c1[256] = "%d\n";
char g_4020eb[256] = "%d\n";
char g_402110[256] = "%d\n";
char g_402136[256] = "%d\n";
char g_402156[256] = "%d\n";
char g_402172[256] = "%d\n";
char g_40218f[256] = "%d\n";
char g_4021ac[256] = "%d\n";
char g_4021dd[256] = "%d\n";
char g_4021fa[256] = "%d\n";
char g_402221[256] = "test_obf_opt_edge\n";

// Custom macros and types for decompiled code
// Using compound literal to allow CONCAT to be used as an infix operator
typedef unsigned long long int128_t __attribute__((mode(TI)));

// Wrapper to fix the "CONCAT expr" pattern - converts "x CONCAT y" to CONCAT(x, y)
// by using a variadic macro that captures the left side before CONCAT
#define CONCAT_VAL(x) (x)
#define CONCAT_HELPER2(a,b) CONCAT(a,b)
#define CONCAT_HELPER1(x) CONCAT_VAL(x)
#define CONCAT_INFIX(x,op,y) CONCAT_HELPER2(CONCAT_VAL(x),CONCAT_VAL(y))

// Fixed CONCAT macro that handles operator precedence properly
// Use parentheses around each argument and the result
// Note: Using >> 32 shifts requires proper parentheses around the entire expression
#define CONCAT(a, b) (((unsigned long long)(a) << 32) | (unsigned long long)(b))

// Inline wrapper for SIMD addition
static inline int128_t AddV(int128_t a, int128_t b) {
    return a + b;
}

// Helper for ccall simulation (simplified)
// Note: _ccall is used to simulate calls in angr - we define it to return 0
unsigned long long _ccall(unsigned long a, unsigned long b, unsigned long c, unsigned long d, unsigned long e);




// Function: sub_401020 at 0x401020
extern unsigned long long g_404008;
extern unsigned long long g_404010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 return;
}


// Function: sub_40102c at 0x40102c
char* sub_40102c(char *v1, char *v2, unsigned long v3)
{
 return strncpy(v1, v2, v3);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010d5 at 0x4010d5
void sub_4010d5()
{
}


// Function: sub_4010d6 at 0x4010d6
void sub_4010d6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401109 at 0x401109
void sub_401109()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401149 at 0x401149
void sub_401149()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401185 at 0x401185
void sub_401185()
{
}


// Function: sub_401189 at 0x401189
void sub_401189()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401199 at 0x401199
void sub_401199(unsigned long a0)
{
 param_fake_branch((unsigned int)a0);
 return;
}


// Function: param_fake_branch at 0x40119c
// Note: forward declaration above takes unsigned int
unsigned int param_fake_branch(unsigned int a0)
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
 // Fixed: pass 0 as 5th argument instead of calling _ccall recursively
 if (!((char)_ccall(4, 23, (unsigned long long)(a0 + 1), 0, 0)))
 {
 v8 = a0;
 do
 {
 v2 = result;
 result = ((int)((((unsigned long long)v8 >> 31) | v8) % (v2 & 4294967295)) | (int)((((unsigned long long)v8 >> 31) | v8) / (v2 & 4294967295)) << 32) >> 32;
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
 // v2 >> 31 CONCAT v2 is sign extension: (signed) v2 extended to 64 bits
 result = ((int)((((unsigned long long)(v2 >> 31) << 32) | (unsigned long long)v2) % (v3 & 4294967295)) | (int)((((unsigned long long)(v2 >> 31) << 32) | (unsigned long long)v2) / (v3 & 4294967295)) << 32) >> 32;
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
char* decrypt_string(char *a0, char *p, unsigned long n, char a3)
{
 char v1; // al
 char *ptr; // rcx

 strncpy(p, a0, n);
 p[n] = 0;
 v1 = *p;
 if (!*p)
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
extern char param_string_encryption_encrypted[32];

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
// Note: g_402010 and g_402030 are declared as arrays at file scope

int call_vectorized_loop()
{
 unsigned long long idx; // rax
 int v4; // xmm0
 int flag1; // [bp-0x28]
 unsigned long long result; // [bp-0x18]

 result = 0;
 flag1 = 0;
 idx = 0;
 do
 {
 // Need to cast arrays to proper pointer types with known size
 *((int128_t *)((char *)g_402030 + idx)) = AddV(*((int128_t *)((char *)g_402030 + idx)), *((int128_t *)((char *)g_402010 + idx)));
 idx += 16;
 } while (idx != 32);
 v4 = AddV(result, flag1);
 // Fixed: manually expand CONCAT infix operators
 // v4 >> 96 CONCAT v4 >> 64 becomes ((v4 >> 96) << 32) | (v4 >> 64)
 // Then the whole chain of 4 CONCATs combines them
 {
   unsigned int part1 = (unsigned int)(v4 >> 96);
   unsigned int part2 = (unsigned int)(v4 >> 64);
   unsigned int part3 = (unsigned int)(v4 >> 96);
   unsigned int part4 = (unsigned int)(v4 >> 64);
   unsigned long long concat1 = (((unsigned long long)part1) << 32) | part2;
   unsigned long long concat2 = (((unsigned long long)part3) << 32) | part4;
   unsigned long long inner = AddV((unsigned int)(concat1 >> 32), (unsigned int)concat1);
   unsigned long long inner2 = AddV((unsigned int)(concat2 >> 32), (unsigned int)concat2);
   unsigned long long outer_concat1 = (((unsigned long long)(inner >> 32)) << 32) | (inner & 0xFFFFFFFF);
   unsigned long long outer_concat2 = (((unsigned long long)(inner2 >> 32)) << 32) | (inner2 & 0xFFFFFFFF);
   return (unsigned int)(AddV((unsigned int)(outer_concat1 >> 32), outer_concat1));
 }
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
extern unsigned int div_zero_caught;
extern jmp_buf_array jmp_buffer;

void div_zero_handler()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 div_zero_caught = 1;
 longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: param_division_by_zero at 0x4013c0
extern jmp_buf_array jmp_buffer;

unsigned int param_division_by_zero(unsigned long a0)
{
 signal(8, div_zero_handler);
 if (_setjmp(&jmp_buffer))
 return 4294967295;
 // Fixed: expand CONCAT - 0 CONCAT 10 becomes ((0 << 32) | 10)
 return (int)((((unsigned long long)0 << 32) | 10) % (a0 & 4294967295)) | 
        (unsigned int)(((((unsigned long long)0 << 32) | 10) / (a0 & 4294967295)) >> 32) << 32;
}


// Function: call_division_by_zero at 0x4013f8
int call_division_by_zero()
{
 unsigned long long v2; // rax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v3 = param_division_by_zero(5);
 v4 = param_division_by_zero(0);
 signal(8, NULL);
 return v4 + v3;
}


// Function: segv_handler at 0x401427
extern jmp_buf_array segv_buffer;
extern unsigned int segv_caught;

void segv_handler()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 segv_caught = 1;
 longjmp(&segv_buffer, 1); /* do not return */
}


// Function: param_null_pointer_deref at 0x401443
extern jmp_buf_array segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *a0)
{
 signal(11, segv_handler);
 if (_setjmp(&segv_buffer))
 return 4294967295;
 return *(a0);
}


// Function: call_null_pointer_deref at 0x401473
int call_null_pointer_deref()
{
 unsigned long v3; // rax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned long v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v0 = v3;
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
// Note: g_402xxx variables are declared earlier as extern char g_402xxx[]

int test_obf_opt_edge()
{
 unsigned long long v2; // rax
 unsigned int result; // edx
 unsigned int v4; // eax
 unsigned long v5; // rcx
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 puts(g_402221);
 printf(g_402050, 10);
 result = 6;
 v4 = 5;
 do
 {
 v5 = result;
 // Fixed: v4 >> 31 CONCAT v4 becomes ((v4 >> 31) << 32) | v4
 result = ((int)(((((unsigned long long)(v4 >> 31)) << 32) | (unsigned long long)v4) % (v5 & 4294967295)) | (int)(((((unsigned long long)(v4 >> 31)) << 32) | (unsigned long long)v4) / (v5 & 4294967295)) << 32) >> 32;
 v4 = v5;
 } while (result);
 printf(g_40206c, ((unsigned int)v5 == 1 ? 20 : 35));
 printf(g_402088, 225);
 printf(g_4020a5, param_string_encryption() & 4294967295);
 printf(g_4020c1, 500500);
 printf(g_4020eb, 5050);
 printf(g_402110, call_vectorized_loop() & 4294967295);
 printf(g_402136, 20);
 printf(g_402156, call_division_by_zero() & 4294967295);
 printf(g_402172, call_null_pointer_deref() & 4294967295);
 printf(g_40218f, 30);
 printf(g_4021ac, 0x77359400);
 printf(g_4021dd, 10);
 return printf(g_4021fa, 47);
}


// Function: main at 0x401635
unsigned int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


