/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional declarations for decompiled code */
typedef void (*__sighandler_t)(int);
typedef long jmp_buf[10];
jmp_buf jmp_buffer;
jmp_buf segv_buffer;

/* Global variables for signal handlers */
int div_zero_caught;
int segv_caught;

/* Forward declarations */
long call_weak_fn(void);
void test_obf_opt_edge(void);
int __longjmp_chk(jmp_buf env, int val);
char *strncpy(char *dest, const char *src, size_t n);
void *memset(void *s, int c, size_t n);
void (*signal(int sig, void (*func)(int)))(int);
int _setjmp(jmp_buf env);
void *malloc(size_t size);
void free(void *ptr);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
size_t strlen(const char *s);
#define JUMPOUT(x) return

/* Global data declarations */
static const char encrypted_0[] = "encrypted_test_string_data";
static unsigned long long xmmword_1320 = 0x0102030405060708ULL;
static unsigned long long xmmword_1330 = 0x090A0B0C0D0E0F10ULL;
static unsigned long long xmmword_1340 = 0x1112131415161718ULL;
static unsigned long long xmmword_1350 = 0x191A1B1C1D1E1F20ULL;
static const char asc_1120[] = "Test Output";
static const char unk_114D[] = "%d";
static const char unk_1169[] = "%d";
static const char unk_1185[] = "%d";
static const char unk_11A2[] = "%d";
static const char unk_11E8[] = "%d";
static const char unk_120D[] = "%d";
static const char unk_1233[] = "%d";
static const char unk_1253[] = "%d";
static const char unk_126F[] = "%d";
static const char unk_128C[] = "%d";
static const char unk_12A9[] = "%d";
static const char unk_12DA[] = "%d";
static const char unk_12F7[] = "%d";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/7/7_gcc_Os_g
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




/* CRT stub function call_weak_fn */
long call_weak_fn(void)
{
 return 0;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0xAD4 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0xAF4 */
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0xB14 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0xB18 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0xB20 */
int param_opaque_predicate(int x)
{
 int v1; // w1
 int v2; // w3
 int v3; // w5
 int v6; // w4

 v1 = x + 1;
 v2 = x;
 v3 = x * x + 2 * x + 1 == v1 * v1;
 while ( v1 )
 {
 v6 = v2 % v1;
 v2 = v1;
 v1 = v6;
 }
 if ( v3 && v2 == 1 )
 return 2 * x + 10;
 else
 return 3 * x + 20;
}


/* Function: call_opaque_predicate @ 0xB78 */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0xB80 */
int param_instruction_substitution(int x)
{
 return 6 * x + ((unsigned int)x >> 1) + (x & 0xF) + 15 * x;
}


/* Function: call_instruction_substitution @ 0xBA4 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0xBAC */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char *v6; // x4
 char *v7; // x1

 v6 = strncpy(buffer, encrypted, len);
 v7 = v6;
 v6[len - 1] = 0;
 while ( *v7 )
 *v7++ ^= key;
 return v6;
}


/* Function: param_string_encryption @ 0xC04 */
int param_string_encryption()
{
 int v0; // w0
 char decrypted[32]; // [xsp+28h] [xbp+28h] BYREF

 decrypt_string(encrypted_0, decrypted, 0x20u, 90);
 v0 = strlen(decrypted);
 return (unsigned char)decrypted[0] + v0;
}


/* Function: call_string_encryption @ 0xC7C */
// attributes: thunk
int call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0xC80 */
int param_tail_call_optimized(int n, int acc)
{
 int result; // w0

 result = acc;
 while ( n > 0 )
 result += n--;
 return result;
}


/* Function: call_tail_call_optimized @ 0xCA0 */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0xCAC */
int param_non_tail_call(int n)
{
 int result; // w0

 result = 0;
 while ( n > 0 )
 result += n--;
 return result;
}


/* Function: call_non_tail_call @ 0xCCC */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0xCD4 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 long long i; // x4
 long long v5; // x1
 int result; // w0
 int v7; // w4

 for ( i = 0; n > (int)i; ++i )
 c[i] = a[i] + b[i];
 v5 = 0;
 result = 0;
 while ( n > (int)v5 )
 {
 v7 = c[v5++];
 result += v7;
 }
 return result;
}


/* Function: call_vectorized_loop @ 0xD1C */
int call_vectorized_loop()
{
 int a[8]; // [xsp+18h] [xbp+18h] BYREF
 int b[8]; // [xsp+38h] [xbp+38h] BYREF
 int c[8]; // [xsp+58h] [xbp+58h] BYREF

 memset(c, 0, sizeof(c));
 *(unsigned long long *)a = xmmword_1320;
 *(unsigned long long *)&a[4] = xmmword_1330;
 *(unsigned long long *)b = xmmword_1340;
 *(unsigned long long *)&b[4] = xmmword_1350;
 return param_vectorized_loop(a, b, c, 8);
}


/* Function: param_link_time_optimization @ 0xD94 */
int param_link_time_optimization(int x)
{
 return 2 * (x + 5);
}


/* Function: call_link_time_optimization @ 0xDA0 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0xDA8 */
int param_division_by_zero(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0xDF4 */
int call_division_by_zero()
{
 int v0; // w20
 int v1; // w19

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0xE34 */
int param_null_pointer_deref(int *p)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0xE7C */
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


/* Function: param_buffer_overflow_stack @ 0xEF8 */
void param_buffer_overflow_stack()
{
 ;
}


/* Function: param_buffer_overflow_heap @ 0xEFC */
int param_buffer_overflow_heap(int x)
{
 void *v2; // x0

 v2 = malloc(0x10u);
 if ( !v2 )
 return -2;
 free(v2);
 return x;
}


/* Function: call_buffer_overflow @ 0xF34 */
int call_buffer_overflow()
{
 return param_buffer_overflow_heap(20) + 10;
}


/* Function: param_integer_overflow @ 0xF50 */
int param_integer_overflow(int a, int b)
{
 int result; // w0

 result = a + b;
 if ( a <= 0 || b <= 0 )
 {
 if ( (a & b) < 0 && result > 0 )
 return -2;
 }
 else if ( result < 0 )
 {
 return -1;
 }
 return result;
}


/* Function: call_integer_overflow @ 0xF88 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0xF94 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0xF9C */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0xFA4 */
int param_implementation_defined()
{
 return 48;
}


/* Function: call_implementation_defined @ 0xFAC */
long long call_implementation_defined()
{
 return 48;
}


/* Function: test_obf_opt_edge @ 0xFB4 */
void test_obf_opt_edge()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 long long v3; // x1
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0
 unsigned int v7; // w0
 unsigned int v8; // w0

 puts(asc_1120);
 __printf_chk(1, unk_114D, 10);
 v0 = call_opaque_predicate();
 __printf_chk(1, unk_1169, v0);
 __printf_chk(1, unk_1185, 225);
 v1 = param_string_encryption();
 __printf_chk(1, unk_11A2, v1);
 v2 = call_tail_call_optimized();
 __printf_chk(1, "%d", v2);
 v4 = call_non_tail_call();
 __printf_chk(1, unk_11E8, v4);
 v5 = call_vectorized_loop();
 __printf_chk(1, unk_120D, v5);
 __printf_chk(1, unk_1233, 20);
 v6 = call_division_by_zero();
 __printf_chk(1, unk_1253, v6);
 v7 = call_null_pointer_deref();
 __printf_chk(1, unk_126F, v7);
 v8 = call_buffer_overflow();
 __printf_chk(1, unk_128C, v8);
 __printf_chk(1, unk_12A9, 2000000000);
 __printf_chk(1, unk_12DA, 10);
 __printf_chk(1, unk_12F7, 48);
}


/* Function: .term_proc @ 0x1108 */
void term_proc()
{
 ;
}


/* FAILED to decompile: strlen @ 0x122F0 */

/* FAILED to decompile: _setjmp @ 0x122F8 */

/* FAILED to decompile: __libc_start_main @ 0x12300 */

/* FAILED to decompile: __cxa_finalize @ 0x12308 */

/* FAILED to decompile: signal @ 0x12310 */

/* FAILED to decompile: malloc @ 0x12318 */

/* FAILED to decompile: __printf_chk @ 0x12320 */

/* FAILED to decompile: __stack_chk_fail @ 0x12328 */

/* FAILED to decompile: abort @ 0x12338 */

/* FAILED to decompile: puts @ 0x12340 */

/* FAILED to decompile: free @ 0x12348 */

/* FAILED to decompile: __longjmp_chk @ 0x12350 */

/* FAILED to decompile: strncpy @ 0x12358 */

/* FAILED to decompile: __gmon_start__ @ 0x12368 */

/* Total functions decompiled: 43, failed: 14 */
