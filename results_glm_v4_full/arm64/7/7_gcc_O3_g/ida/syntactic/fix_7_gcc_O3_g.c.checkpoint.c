/* Standard library includes */
#include <stdlib.h>
#include <setjmp.h>
#include <arm_neon.h>

/* Forward declarations */
long long call_weak_fn(void);
void JUMPOUT(unsigned long);
void test_obf_opt_edge(void);
void __longjmp_chk(jmp_buf buf);
typedef void (*__sighandler_t)(int);
__sighandler_t signal(int, __sighandler_t);
int _setjmp(jmp_buf);
void __break(unsigned int);
char *strncpy(char *, const char *, size_t);
int strlen(const char *);
int puts(const char *);
int __printf_chk(int, const char *, ...);

/* Decompiler helper macros */
#define LOBYTE(x) (*((uint8_t*)&(x)))

/* Additional type definitions for decompiled code */

/* Global state variables */
int div_zero_caught = 0;
int segv_caught = 0;

/* Global variables */
const char encrypted_0[] = {0x7B, 0x22, 0x33, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 0x00};
int32x4_t xmmword_1870 = {0, 0};
const char asc_1638[] = "Testing obfuscation and optimization edge cases:\n";
const char unk_1668[] = "  param_fake_branch: %d\n";
const char unk_1688[] = "  param_opaque_predicate: %d\n";
const char unk_16A8[] = "  param_instruction_substitution: %d\n";
const char unk_16C8[] = "  param_string_encryption: %u\n";
const char unk_16E8[] = "  param_tail_call_optimized: %d\n";
const char unk_1718[] = "  param_non_tail_call: %d\n";
const char unk_1740[] = "  param_vectorized_loop: %d\n";
const char unk_1768[] = "  param_link_time_optimization: %d\n";
const char unk_1788[] = "  param_division_by_zero: %u\n";
const char unk_17A8[] = "  param_null_pointer_deref: %u\n";
const char unk_17C8[] = "  param_buffer_overflow: %lld\n";
const char unk_17E8[] = "  param_integer_overflow: %d\n";
const char unk_1820[] = "  param_undefined_behavior: %d\n";
const char unk_1840[] = "  param_implementation_defined: %d\n";

/* Global jump buffers */
typedef struct __jmp_buf_tag jmp_buf[1];
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Signal handler type */
typedef void (*__sighandler_t)(int);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/7/7_gcc_O3_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x848 */
long long init_proc()
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
 __longjmp_chk(jmp_buffer);
}


/* Function: segv_handler @ 0xB00 */
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer);
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
char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char *result; // x0
 char v7; // w2
 char *v8; // x4
 int v9; // t1

 result = strncpy(buffer, encrypted, len);
 result[len - 1] = 0;
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
 v5 = vdupq_n_s32(0);
 v6 = 0;
 v7 = vdupq_n_s32(0x300000003);
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
 v4 = vdupq_n_s32(0);
 v5 = 0;
 int32x4_t const_vec = vdupq_n_s32(1);
 v6 = const_vec;
 v7 = vaddq_s32(vdupq_n_s32(n), xmmword_1870);
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
 __printf_chk(1, unk_1668, 10);
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
 __printf_chk(1, unk_1688, v3);
 __printf_chk(1, unk_16A8, 225);
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
 v4 = v6;
 }
 while ( v6 );
 v4 = (unsigned char)v16[0];
 }
 v7 = strlen(v16);
 __printf_chk(1, unk_16C8, (unsigned int)(v4 + v7));
 __printf_chk(1, unk_16E8, 500500);
 __printf_chk(1, unk_1718, 5050);
 __printf_chk(1, unk_1740, 72);
 v8 = __printf_chk(1, unk_1768, 20);
 v9 = param_division_by_zero_1(v8);
 v10 = param_division_by_zero_0(v9);
 signal(8, 0);
 __printf_chk(1, unk_1788, (unsigned int)(v9 + v10));
 p = 42;
 v11 = param_null_pointer_deref(&p);
 v12 = param_null_pointer_deref(0);
 signal(11, 0);
 __printf_chk(1, unk_17A8, (unsigned int)(v11 + v12));
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
 __printf_chk(1, unk_17C8, v14);
 __printf_chk(1, unk_17E8, 2000000000);
 __printf_chk(1, unk_1820, 10);
 __printf_chk(1, unk_1840, 48);
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
