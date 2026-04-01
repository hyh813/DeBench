// Angr Decompilation of 7_clang_Os_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include <signal.h>

/* CRT stub function _init removed by preprocessor */

typedef struct { char dummy; } struct_0;

extern struct_0 *g_403fe8;

/* Function declarations for missing CRT functions */
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

/* Forward declarations */
int param_fake_branch(unsigned int a0);

/* Global string constants */
extern const char g_402050[];
extern const char g_40206c[];
extern const char g_402136[];
extern const char g_4021fa[];
extern const char g_4021dd[];

/* Helper functions for decompiler artifacts */
/* CONCAT macro - can be used with 1 or 2 arguments */
#define CONCAT1(x) (x)
#define CONCAT2(x, y) ((unsigned long long)(x) | ((unsigned long long)(y) << 32))
#define CONCAT_GET_MACRO(_1, _2, NAME, ...) NAME
#define CONCAT(...) CONCAT_GET_MACRO(__VA_ARGS__, CONCAT2, CONCAT1)(__VA_ARGS__)

static inline long long _ccall(unsigned long a, unsigned long b, unsigned long long c, unsigned long d, unsigned long long e) {
    return e;
}

static inline __int128 AddV(__int128 a, __int128 b) {
    return a + b;
}




// Function: sub_401020 at 0x401020
extern unsigned long long g_404008;
extern unsigned long long g_404010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
}


// Function: sub_40102c at 0x40102c
char *sub_40102c()
{
 char *v1; // rdi
 char *v2; // rsi
 unsigned long v3; // rdx

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



/* CRT stub function deregister_tm_clones */
void deregister_tm_clones(void)
{
}



// Function: sub_401109 at 0x401109
void sub_401109()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones */
void register_tm_clones(void)
{
}







// Function: sub_401199 at 0x401199
void sub_401199(unsigned long a0)
{
 param_fake_branch(0);
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
 if (!((char)_ccall(4, 23, (unsigned long long)(a0 + 1), 0, _ccall(v4, v5, v6, v7, 0))))
 {
 v8 = a0;
 do
 {
 v2 = result;
 result = CONCAT((int)((CONCAT(v8 >> 31, v8)) % (v2 & 4294967295)), (int)((CONCAT(v8 >> 31, v8)) / (v2 & 4294967295))) >> 32;
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
 result = CONCAT((int)((CONCAT(v2 >> 31, v2)) % (v3 & 4294967295)), (int)((CONCAT(v2 >> 31, v2)) / (v3 & 4294967295))) >> 32;
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
char *decrypt_string(char *a0, char *p, unsigned long n, char a3)
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
extern const char param_string_encryption_encrypted[32];

int param_string_encryption()
{
 void* ptr; // rcx
 char v5; // al
 unsigned int v8; // ebx
 char v0[32]; // [bp-0x28]
 char v1; // [bp-0x27]
 char result; // [bp-0x9]

 strncpy(v0, &param_string_encryption_encrypted, 32);
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
 return (unsigned int)strlen(v0) + v8;
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


/* Helper function for horizontal 32-bit addition of a 128-bit value */
static inline unsigned int hadd_v4i1(__int128 a)
{
 return (unsigned int)((((unsigned int)(a >> 96) & 0xFFFFFFFF) +
                        ((unsigned int)(a >> 64) & 0xFFFFFFFF) +
                        ((unsigned int)(a >> 32) & 0xFFFFFFFF) +
                        ((unsigned int)a & 0xFFFFFFFF)));
}

// Function: call_vectorized_loop at 0x40133a
extern const char g_402010[32];
extern const char g_402030[32];

int call_vectorized_loop()
{
 unsigned long long idx; // rax
 __int128 v4; // xmm0
 __int128 flag1; // [bp-0x28]
 unsigned long long result; // [bp-0x18]

 *((unsigned long long*)&result) = 0;
 flag1 = 0;
 idx = 0;
 do
 {
 *((__int128 *)((char *)&flag1 + idx)) = AddV(*((__int128 *)&(&g_402030)[idx]), *((__int128 *)&(&g_402010)[idx]));
 idx += 16;
 } while (idx != 32);
 v4 = AddV(result, flag1);
 return hadd_v4i1(v4);
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
extern unsigned long long jmp_buffer[1];

void div_zero_handler()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 0;
 div_zero_caught = 1;
 longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: param_division_by_zero at 0x4013c0
extern unsigned long long jmp_buffer[1];

unsigned int param_division_by_zero(unsigned long a0)
{
 signal(8, div_zero_handler);
 if (_setjmp(&jmp_buffer))
 return 4294967295;
 return CONCAT((int)((CONCAT(0, 10)) % (a0 & 4294967295)), (int)((CONCAT(0, 10)) / (a0 & 4294967295)));
}


// Function: call_division_by_zero at 0x4013f8
int call_division_by_zero()
{
 unsigned long long v2; // rax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned long long v0; // [bp-0x18]

 v3 = param_division_by_zero(5);
 v4 = param_division_by_zero(0);
 signal(8, NULL);
 return v4 + v3;
}


// Function: segv_handler at 0x401427
extern unsigned long long segv_buffer[1];
extern unsigned int segv_caught;

void segv_handler()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 0;
 segv_caught = 1;
 longjmp(&segv_buffer, 1); /* do not return */
}


// Function: param_null_pointer_deref at 0x401443
extern unsigned long long segv_buffer[1];

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
extern const char g_402050[];
extern const char g_40206c[];
extern const char g_402088[];
extern const char g_4020a5[];
extern const char g_4020c1[];
extern const char g_4020eb[];
extern const char g_402110[];
extern const char g_402136[];
extern const char g_402156[];
extern const char g_402172[];
extern const char g_40218f[];
extern const char g_4021ac[];
extern const char g_4021dd[];
extern const char g_4021fa[];
extern const char g_402221[];

int test_obf_opt_edge()
{
 unsigned long long v2; // rax
 unsigned int result; // edx
 unsigned int v4; // eax
 unsigned long v5; // rcx
 unsigned long long v0; // [bp-0x8]

 puts(&g_402221);
 printf(&g_402050, 10);
 result = 6;
 v4 = 5;
 do
 {
 v5 = result;
 result = CONCAT((int)((CONCAT(v4 >> 31, v4)) % (v5 & 4294967295)), (int)((CONCAT(v4 >> 31, v4)) / (v5 & 4294967295))) >> 32;
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
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 test_obf_opt_edge();
 return 0;
}

/* String constant definitions */
const char g_402050[] = "%d\n";
const char g_40206c[] = "%d\n";
const char g_402088[] = "%d\n";
const char g_4020a5[] = "%d\n";
const char g_4020c1[] = "%d\n";
const char g_4020eb[] = "%d\n";
const char g_402110[] = "%d\n";
const char g_402136[] = "%d\n";
const char g_402156[] = "%d\n";
const char g_402172[] = "%d\n";
const char g_40218f[] = "%d\n";
const char g_4021ac[] = "%d\n";
const char g_4021dd[] = "%d\n";
const char g_4021fa[] = "%d\n";
const char g_402221[] = "test_obf_opt_edge:\n";

/* Data array for vectorized loop operations */
const char g_402010[32] = {0};
const char g_402030[32] = {0};

/* Encrypted string for param_string_encryption */
const char param_string_encryption_encrypted[32] = {0};

/* Jump buffers for signal handlers */
unsigned long long jmp_buffer[1] = {0};
unsigned long long segv_buffer[1] = {0};

/* Flag for division by zero detection */
unsigned int div_zero_caught = 0;

/* Flag for segmentation fault detection */
unsigned int segv_caught = 0;



/* CRT stub function _fini removed by preprocessor */


