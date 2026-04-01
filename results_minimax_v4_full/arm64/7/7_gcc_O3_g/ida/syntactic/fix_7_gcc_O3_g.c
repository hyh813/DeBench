/* Auto-injected type definitions by preprocessor */
/* uint64_t is already defined by system headers */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif
/* int64_t is already defined by system headers */
/* uint64_t already defined above - removed duplicate typedef */
#ifndef size_t
typedef unsigned long size_t;
#endif
#ifndef ssize_t
typedef long ssize_t;
#endif
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
// intmax_t and uintmax_t are already defined by system headers

/* Standard library includes */
#include <setjmp.h>
#include <signal.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* LOBYTE macro - get low byte of a word */
#define LOBYTE(x) (*(unsigned char*)&(x))
#define HIBYTE(x) (*((unsigned char*)&(x) + 1))

/* __break - ARM breakpoint instruction (used to trigger exception) */
static inline void __break(unsigned int imm) {
    __asm__ volatile ("brk %0" : : "I"(imm));
}

/* __longjmp_chk wrapper */
static inline void __longjmp_chk(jmp_buf env, int val) {
    longjmp(env, val);
}

/* Format string type fix */
typedef const char * fmt_str;

/* ARM NEON types - use system headers if available, otherwise use fallback */
#ifdef __ARM_NEON
#include <arm_neon.h>
#else
/* Fallback: define int32x4_t as a proper struct for compatibility with the code */
#ifndef int32x4_t
typedef struct { uint64_t n128_u64[2]; } int32x4_t;
#endif

/* Fallback NEON intrinsics */
static inline int32x4_t vaddq_s32(int32x4_t a, int32x4_t b) {
    int32x4_t result;
    result.n128_u64[0] = a.n128_u64[0] + b.n128_u64[0];
    result.n128_u64[1] = a.n128_u64[1] + b.n128_u64[1];
    return result;
}
static inline int32x4_t vdupq_n_s32(int32_t val) {
    int32x4_t result;
    uint64_t packed = ((uint64_t)(uint32_t)val << 32) | (uint32_t)val;
    result.n128_u64[0] = packed;
    result.n128_u64[1] = packed;
    return result;
}
static inline int32_t vaddvq_s32(int32x4_t a) {
    return (int32_t)(a.n128_u64[0] & 0xFFFFFFFF) + (int32_t)(a.n128_u64[0] >> 32)
         + (int32_t)(a.n128_u64[1] & 0xFFFFFFFF) + (int32_t)(a.n128_u64[1] >> 32);
}
#endif

/* Global jump buffers */
static jmp_buf jmp_buffer;
static jmp_buf segv_buffer;
static volatile int div_zero_caught = 0;
static volatile int segv_caught = 0;

/* Forward declarations */
void test_obf_opt_edge(void);
int call_weak_fn(void);

/* JUMPOUT macro for jump tables */
#define JUMPOUT(addr) ((void (*)(void))addr)()

/* Data constants */
static const char encrypted_0[] = "\x2F\x3A\x2C\x3E\x2B\x09\x08\x0D\x0A\x16\x1B\x0E\x0F\x0C\x1A\x0B\x18\x19\x1C\x05\x17\x1D\x06\x03\x01\x14\x00\x1F\x0A\x04\x02";

static const int32x4_t xmmword_1870 = { -3, -2, -1, 0 };

/* Format strings */
static const char asc_1638[] = "Test: Opaque Predicate (call)\n";
static const char unk_1668[] = "  fibonacci(10) = %d\n";
static const char unk_1688[] = "  fibonacci(5) = %lld\n";
static const char unk_16A8[] = "  instruction_substitution() = %d\n";
static const char unk_16C8[] = "  string_encryption() = %d\n";
static const char unk_16E8[] = "  tail_call_optimized(1000) = %d\n";
static const char unk_1718[] = "  non_tail_call(100) = %d\n";
static const char unk_1740[] = "  vectorized_loop() = %d\n";
static const char unk_1768[] = "  link_time_optimization(5) = %d\n";
static const char unk_1788[] = "  division_by_zero() = %d\n";
static const char unk_17A8[] = "  null_pointer_deref() = %d\n";
static const char unk_17C8[] = "  buffer_overflow() = %lld\n";
static const char unk_17E8[] = "  integer_overflow() = %d\n";
static const char unk_1820[] = "  undefined_behavior() = %d\n";
static const char unk_1840[] = "  implementation_defined() = %lld\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/7/7_gcc_O3_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x848 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_860 @ 0x860 */
void sub_860()
{
 JUMPOUT(0);
}


/* Function: main @ 0x980 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0xAE0 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0xB00 */
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
}


/* Function: param_division_by_zero_0 @ 0xB20 */
long long param_division_by_zero_0(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( !_setjmp(jmp_buffer) )
 __break(0x3E8u);
 return 0xFFFFFFFFLL;
}


/* Function: param_division_by_zero_1 @ 0xB60 */
long long param_division_by_zero_1(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return 0xFFFFFFFFLL;
 else
 return 2;
}


/* Function: param_fake_branch @ 0xBA0 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0xBA4 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0xBB0 */
int param_opaque_predicate(int x)
{
 int v1; // w1
 int v2; // w6
 int v3; // w2
 int v4; // w3

 v1 = x + 1;
 v2 = 2 * x + x * x + 1 == v1 * v1;
 if ( x == -1 )
 return 3 * x + 20;
 v3 = x;
 do
 {
 v4 = v1;
 v1 = v3 % v1;
 v3 = v4;
 }
 while ( v1 );
 if ( v2 && v4 == 1 )
 return 2 * x + 10;
 else
 return 3 * x + 20;
}


/* Function: call_opaque_predicate @ 0xC10 */
int call_opaque_predicate()
{
 int v0; // w0
 int v1; // w1
 int v2; // w2

 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v0;
 v0 = v1 % v0;
 v1 = v2;
 }
 while ( v0 );
 if ( v2 == 1 )
 return 20;
 else
 return 35;
}


/* Function: param_instruction_substitution @ 0xC40 */
int param_instruction_substitution(int x)
{
 return 6 * x + ((unsigned int)x >> 1) + (x & 0xF) + 15 * x;
}


/* Function: call_instruction_substitution @ 0xC64 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0xC70 */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 const char *result; // x0
 char v7; // w2
 char *v8; // x4
 int v9; // t1

 char *result = strncpy(buffer, encrypted, len);
 buffer[len - 1] = 0;
 v7 = *result;
 if ( *result )
 {
 v8 = (char *)result;
 do
 {
 *v8 = key ^ v7;
 v9 = (unsigned char)*++v8;
 v7 = v9;
 }
 while ( v9 );
 }
 return result;
}


/* Function: param_string_encryption @ 0xCD0 */
int param_string_encryption()
{
 char *v0; // x0
 int v1; // w19
 const char *v2; // x4
 int v3; // t1
 char decrypted[32]; // [xsp+28h] [xbp+28h] BYREF

 v0 = strncpy(decrypted, encrypted_0, 0x1Fu);
 v1 = (unsigned char)decrypted[0];
 decrypted[31] = 0;
 v2 = v0;
 if ( decrypted[0] )
 {
 do
 {
 *v0 = v1 ^ 0x5A;
 v3 = (unsigned char)*++v0;
 LOBYTE(v1) = v3;
 }
 while ( v3 );
 v1 = (unsigned char)decrypted[0];
 }
 return v1 + strlen(v2);
}


/* Function: call_string_encryption @ 0xD70 */
int call_string_encryption()
{
 char *v0; // x0
 int v1; // w19
 const char *v2; // x4
 int v3; // t1
 char dest[32]; // [xsp+28h] [xbp+28h] BYREF

 v0 = strncpy(dest, encrypted_0, 0x1Fu);
 v1 = (unsigned char)dest[0];
 dest[31] = 0;
 v2 = v0;
 if ( dest[0] )
 {
 do
 {
 *v0 = v1 ^ 0x5A;
 v3 = (unsigned char)*++v0;
 LOBYTE(v1) = v3;
 }
 while ( v3 );
 v1 = (unsigned char)dest[0];
 }
 return v1 + strlen(v2);
}


/* Function: param_tail_call_optimized @ 0xE10 */
int param_tail_call_optimized(int n, int acc)
{
 int result; // w0
 int v4; // w5
 int32x4_t v5; // q1
 int v6; // w3
 int32x4_t v7; // q3
 int32x4_t v8; // q0
 int32x4_t v9; // q2
 int v10; // w4
 bool v11; // zf
 int v12; // w2

 result = acc;
 if ( n > 0 )
 {
 v4 = n;
 if ( n <= 8 )
 goto LABEL_6;
 v5 = (int32x4_t){ .n128_u64 = { 0, 0 } };
 v6 = 0;
 v7 = (int32x4_t){ .n128_u64 = { 0x300000003LL, 0x300000003LL } };
 v8 = vaddq_s32(vdupq_n_s32(n), (int32x4_t)xmmword_1870);
 do
 {
 v9 = v8;
 ++v6;
 v8 = vaddq_s32(v8, v7);
 v5 = vaddq_s32(v5, v9);
 }
 while ( (unsigned int)n >> 2 != v6 );
 v10 = n & 0x7FFFFFFC;
 n -= n & 0xFFFFFFFC;
 result = acc + vaddvq_s32(v5);
 if ( v4 != v10 )
 {
LABEL_6:
 result += n;
 if ( n != 1 )
 {
 result += n - 1;
 if ( n != 2 )
 {
 result += n - 2;
 if ( n != 3 )
 {
 result += n - 3;
 if ( n != 4 )
 {
 result += n - 4;
 if ( n != 5 )
 {
 result += n - 5;
 v11 = n == 6;
 v12 = n - 7 + n - 6 + result;
 if ( !v11 )
 return v12;
 }
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: call_tail_call_optimized @ 0xEE0 */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0xEF0 */
int param_non_tail_call(int n)
{
 int result; // w0
 int v3; // w3
 int32x4_t v4; // q0
 int v5; // w0
 int32x4_t v6; // q3
 int32x4_t v7; // q1
 int32x4_t v8; // q2
 int v9; // w2
 bool v10; // zf
 int v11; // w1

 result = 0;
 if ( n > 0 )
 {
 v3 = n;
 if ( n <= 8 )
 {
 result = 0;
 }
 else
 {
 v4 = (int32x4_t){ .n128_u64 = { 0, 0 } };
 v5 = 0;
 v6 = (int32x4_t){ .n128_u64 = { 0x300000003LL, 0x300000003LL } };
 v7 = vaddq_s32(vdupq_n_s32(n), (int32x4_t)xmmword_1870);
 do
 {
 v8 = v7;
 ++v5;
 v7 = vaddq_s32(v7, v6);
 v4 = vaddq_s32(v4, v8);
 }
 while ( (unsigned int)n >> 2 != v5 );
 v9 = n & 0x7FFFFFFC;
 n -= n & 0xFFFFFFFC;
 result = vaddvq_s32(v4);
 if ( v3 == v9 )
 return result;
 }
 result += n;
 if ( n != 1 )
 {
 result += n - 1;
 if ( n != 2 )
 {
 result += n - 2;
 if ( n != 3 )
 {
 result += n - 3;
 if ( n != 4 )
 {
 result += n - 4;
 if ( n != 5 )
 {
 result += n - 5;
 v10 = n == 6;
 v11 = n - 7 + n - 6 + result;
 if ( !v10 )
 return v11;
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: call_non_tail_call @ 0xFC0 */
int call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0xFD0 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 unsigned int v4; // w7
 unsigned int v7; // w5
 long long v8; // x4
 unsigned int v9; // w4
 long long v10; // x6
 int32x4_t v11; // q0
 int *v12; // x0
 int32x4_t v13; // t1
 unsigned int v14; // w1
 int result; // w0
 int *v16; // x2
 long long v17; // x4

 if ( n <= 0 )
 return 0;
 v4 = n - 1;
 if ( (unsigned long long)((char *)c - (char *)(a + 1)) > 8
 && (unsigned long long)((char *)c - (char *)(b + 1)) > 8
 && v4 > 3 )
 {
 v7 = (unsigned int)n >> 2;
 v8 = 0;
 do
 {
 *(int32x4_t *)&c[v8] = vaddq_s32(*(int32x4_t *)&a[v8], *(int32x4_t *)&b[v8]);
 v8 += 4;
 }
 while ( v8 != 4LL * ((unsigned int)n >> 2) );
 v9 = n & 0x7FFFFFFC;
 if ( (n & 3) != 0 )
 {
 v10 = v9;
 c[v10] = b[v10] + a[v10];
 if ( n > (int)(v9 + 1) )
 {
 c[v10 + 1] = a[v10 + 1] + b[v10 + 1];
 if ( n > (int)(v9 + 2) )
 c[v10 + 2] = a[v10 + 2] + b[v10 + 2];
 }
 }
LABEL_16:
 v11 = vdupq_n_s32(0);
 v12 = c;
 do
 {
 v13 = *(int32x4_t *)v12;
 v12 += 4;
 v11 = vaddq_s32(v11, v13);
 }
 while ( v12 != &c[4 * v7] );
 v14 = v9;
 result = vaddvq_s32(v11);
 if ( v9 == n )
 return result;
 goto LABEL_19;
 }
 v17 = 0;
 do
 {
 c[v17] = a[v17] + b[v17];
 ++v17;
 }
 while ( n > (int)v17 );
 if ( v4 > 2 )
 {
 v7 = (unsigned int)n >> 2;
 v9 = n & 0xFFFFFFFC;
 goto LABEL_16;
 }
 v14 = 0;
 result = 0;
LABEL_19:
 result += c[v14];
 if ( (int)(v14 + 1) < n )
 {
 v16 = &c[v14];
 result += v16[1];
 if ( (int)(v14 + 2) < n )
 result += v16[2];
 }
 return result;
}


/* Function: call_vectorized_loop @ 0x1154 */
int call_vectorized_loop()
{
 return 72;
}


/* Function: param_link_time_optimization @ 0x1160 */
int param_link_time_optimization(int x)
{
 return 2 * (x + 5);
}


/* Function: call_link_time_optimization @ 0x1170 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x1180 */
int param_division_by_zero(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0x11D0 */
int call_division_by_zero()
{
 int v0; // w0
 int v1; // w20
 int v2; // w19

 v1 = param_division_by_zero_1(v0);
 v2 = param_division_by_zero_0(v1);
 signal(8, 0);
 return v1 + v2;
}


/* Function: param_null_pointer_deref @ 0x1210 */
int param_null_pointer_deref(int *p)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0x1260 */
int call_null_pointer_deref()
{
 int v0; // w19
 int v1; // w20
 int valid; // [xsp+24h] [xbp+24h] BYREF

 valid = 42;
 v0 = param_null_pointer_deref(&valid);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v0 + v1;
}


/* Function: param_buffer_overflow_stack @ 0x12E0 */
void param_buffer_overflow_stack()
{
 ;
}


/* Function: param_buffer_overflow_heap @ 0x12E4 */
int param_buffer_overflow_heap(int x)
{
 void *v2; // x0

 v2 = malloc(0x10u);
 if ( !v2 )
 return -2;
 free(v2);
 return x;
}


/* Function: call_buffer_overflow @ 0x1320 */
int call_buffer_overflow()
{
 void *v0; // x0

 v0 = malloc(0x10u);
 if ( !v0 )
 return 8;
 free(v0);
 return 30;
}


/* Function: param_integer_overflow @ 0x1350 */
int param_integer_overflow(int a, int b)
{
 bool v3; // zf
 bool v4; // nf
 int result; // w0
 bool v6; // zf
 bool v7; // nf

 if ( a > 0 )
 {
 v3 = b == 0;
 v4 = b < 0;
 }
 else
 {
 v3 = 1;
 v4 = 0;
 }
 result = a + b;
 if ( v4 || v3 )
 {
 if ( (a & b) < 0 )
 {
 v6 = result == 0;
 v7 = result < 0;
 }
 else
 {
 v6 = 1;
 v7 = 0;
 }
 if ( !v7 && !v6 )
 return -2;
 }
 else if ( result < 0 )
 {
 return -1;
 }
 return result;
}


/* Function: call_integer_overflow @ 0x1384 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1390 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0x13A0 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x13B0 */
int param_implementation_defined()
{
 return 48;
}


/* Function: call_implementation_defined @ 0x13C0 */
long long call_implementation_defined()
{
 return 48;
}


/* Function: test_obf_opt_edge @ 0x13D0 */
void test_obf_opt_edge()
{
 int v0; // w0
 int v1; // w1
 int v2; // w2
 long long v3; // x2
 int v4; // w19
 char *v5; // x0
 int v6; // t1
 int v7; // w0
 int v8; // w0
 int v9; // w20
 int v10; // w19
 int v11; // w20
 int v12; // w19
 void *v13; // x0
 long long v14; // x2
 int p; // [xsp+24h] [xbp+24h] BYREF
 char v16[32]; // [xsp+28h] [xbp+28h] BYREF

 puts(asc_1638);
 printf(unk_1668, 10);
 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v0;
 v0 = v1 % v0;
 v1 = v2;
 }
 while ( v0 );
 if ( v2 == 1 )
 v3 = 20;
 else
 v3 = 35;
 printf(unk_1688, v3);
 printf(unk_16A8, 225);
 strncpy(v16, encrypted_0, 0x1Fu);
 v4 = (unsigned char)v16[0];
 v16[31] = 0;
 if ( v16[0] )
 {
 v5 = v16;
 do
 {
 *v5 = v4 ^ 0x5A;
 v6 = (unsigned char)*++v5;
 LOBYTE(v4) = v6;
 }
 while ( v6 );
 v4 = (unsigned char)v16[0];
 }
 v7 = strlen(v16);
 printf(unk_16C8, (unsigned int)(v4 + v7));
 printf(unk_16E8, 500500);
 printf(unk_1718, 5050);
 printf(unk_1740, 72);
 v8 = printf(unk_1768, 20);
 v9 = param_division_by_zero_1(v8);
 v10 = param_division_by_zero_0(v9);
 signal(8, 0);
 printf(unk_1788, (unsigned int)(v9 + v10));
 p = 42;
 v11 = param_null_pointer_deref(&p);
 v12 = param_null_pointer_deref(0);
 signal(11, 0);
 printf(unk_17A8, (unsigned int)(v11 + v12));
 v13 = malloc(0x10u);
 if ( v13 )
 {
 free(v13);
 v14 = 30;
 }
 else
 {
 v14 = 8;
 }
 printf(unk_17C8, v14);
 printf(unk_17E8, 2000000000);
 printf(unk_1820, 10);
 printf(unk_1840, 48);
}


/* Function: .term_proc @ 0x1618 */
void term_proc()
{
 ;
}


/* FAILED to decompile: strlen @ 0x132F0 */

/* FAILED to decompile: _setjmp @ 0x132F8 */

/* FAILED to decompile: __libc_start_main @ 0x13300 */

/* FAILED to decompile: __cxa_finalize @ 0x13308 */

/* FAILED to decompile: signal @ 0x13310 */

/* FAILED to decompile: malloc @ 0x13318 */

/* FAILED to decompile: __printf_chk @ 0x13320 */

/* FAILED to decompile: __stack_chk_fail @ 0x13328 */

/* FAILED to decompile: abort @ 0x13338 */

/* FAILED to decompile: puts @ 0x13340 */

/* FAILED to decompile: free @ 0x13348 */

/* FAILED to decompile: __longjmp_chk @ 0x13350 */

/* FAILED to decompile: strncpy @ 0x13358 */

/* FAILED to decompile: __gmon_start__ @ 0x13368 */

/* Total functions decompiled: 45, failed: 14 */
