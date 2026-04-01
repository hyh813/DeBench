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
typedef _Bool bool;

#include <setjmp.h>
#include <signal.h>

static jmp_buf jmp_buffer;
static jmp_buf segv_buffer;
static volatile int div_zero_caught = 0;
static volatile int segv_caught = 0;

/* GCC built-in for reading FS segment (stack canary) */
static inline unsigned long long __readfsqword(unsigned long offset)
{
 unsigned long long ret;
 __asm__ volatile ("movq %%fs:%1, %0" : "=r" (ret) : "m" (*(const unsigned long long *)(offset)));
 return ret;
}
static const char encrypted_0[] = "Encrypted string";
static const char s[] = "test";
static const char unk_2038[] = "tail_call_optimized: %d\n";
static const char unk_2068[] = "non_tail_call: %d\n";
static const char unk_2090[] = "vectorized_loop: %d\n";
static const char unk_20B8[] = "link_time_optimization: %d\n";
static const char unk_20D8[] = "integer_overflow: %d\n";
static const char unk_2110[] = "implementation_defined: %d\n";
static const char unk_2137[] = "opaque_predicate: %d\n";
static const char unk_2153[] = "opaque_predicate: %d\n";
static const char unk_216F[] = "instruction_substitution: %d\n";
static const char unk_218C[] = "string_encryption: %d\n";
static const char unk_21A8[] = "division_by_zero: %d\n";
static const char unk_21C4[] = "null_pointer_deref: %d\n";
static const char unk_21E1[] = "buffer_overflow: %d\n";
static const char unk_21FE[] = "undefined_behavior: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/7/7_gcc_O2_g
 * Processor: pc
 */


/* Function: main @ 0x1180 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0x1290 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x12C0 */
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x12F0 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x1300 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x1310 */
int param_opaque_predicate(int x)
{
 int v1; // edx
 bool v2; // r8
 int v3; // eax
 int v4; // ecx

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
 if ( v4 == 1 && v2 )
 return 2 * x + 10;
 else
 return 3 * x + 20;
}


/* Function: call_opaque_predicate @ 0x1360 */
int call_opaque_predicate()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 int result; // eax

 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v0;
 v0 = v1 % v0;
 v1 = v2;
 }
 while ( v0 );
 result = 20;
 if ( v2 != 1 )
 return 35;
 return result;
}


/* Function: param_instruction_substitution @ 0x1390 */
int param_instruction_substitution(int x)
{
 return 15 * x + (x & 0xF) + ((unsigned int)x >> 1) + 6 * x;
}


/* Function: call_instruction_substitution @ 0x13B0 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x13C0 */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char *v6; // rax
 const char *v7; // r8
 char v8; // al
 char *v9; // rdx

 v6 = strncpy(buffer, encrypted, len);
 v6[len - 1] = 0;
 v7 = v6;
 v8 = *v6;
 if ( v8 )
 {
 v9 = (char *)v7;
 do
 {
 *v9++ = key ^ v8;
 v8 = *v9;
 }
 while ( *v9 );
 }
 return v7;
}


/* Function: param_string_encryption @ 0x1410 */
int param_string_encryption()
{
 char *v0; // rax
 int v1; // ebx
 const char *v2; // rdi
 char decrypted[40]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v0 = strncpy(decrypted, encrypted_0, 0x1Fu);
 v1 = decrypted[0];
 decrypted[31] = 0;
 v2 = v0;
 if ( decrypted[0] )
 {
 do
 {
 *v0++ = v1 ^ 0x5A;
 v1 = *v0;
 }
 while ( *v0 );
 v1 = decrypted[0];
 }
 return v1 + strlen(v2);
}


/* Function: call_string_encryption @ 0x1490 */
int call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x14A0 */
int param_tail_call_optimized(int n, int acc)
{
 int result; // eax

 result = acc;
 if ( n > 0 )
 {
 do
 result += n--;
 while ( n );
 }
 return result;
}


/* Function: call_tail_call_optimized @ 0x14C0 */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x14D0 */
int param_non_tail_call(int n)
{
 int result; // eax

 result = 0;
 if ( n > 0 )
 {
 do
 result += n--;
 while ( n );
 }
 return result;
}


/* Function: call_non_tail_call @ 0x14F0 */
int call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0x1500 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 long long i; // rax
 int *v5; // rcx
 int result; // eax

 if ( n <= 0 )
 return 0;
 for ( i = 0; i != n; ++i )
 c[i] = a[i] + b[i];
 v5 = &c[n - 1 + 1];
 result = 0;
 do
 result += *c++;
 while ( v5 != c );
 return result;
}


/* Function: call_vectorized_loop @ 0x1550 */
int call_vectorized_loop()
{
 int v0; // esi
 int v1; // ecx
 long long i; // rax
 int *v3; // rax
 int v4; // r8d
 int a[8]; // [rsp+0h] [rbp-78h]
 int b[8]; // [rsp+20h] [rbp-58h]
 int c[8]; // [rsp+40h] [rbp-38h] BYREF
 char v9; // [rsp+60h] [rbp-18h] BYREF
 unsigned long long v10; // [rsp+68h] [rbp-10h]

 v0 = 8;
 v1 = 1;
 v10 = __readfsqword(0x28u);
 memset(c, 0, sizeof(c));
 *(unsigned long long *)a = 0x200000001LL;
 *(unsigned long long *)&a[2] = 0x400000003LL;
 *(unsigned long long *)&a[4] = 0x600000005LL;
 *(unsigned long long *)&a[6] = 0x800000007LL;
 *(unsigned long long *)b = 0x700000008LL;
 *(unsigned long long *)&b[2] = 0x500000006LL;
 *(unsigned long long *)&b[4] = 0x300000004LL;
 *(unsigned long long *)&b[6] = 0x100000002LL;
 for ( i = 0; ; v0 = b[i] )
 {
 c[i++] = v0 + v1;
 if ( i == 8 )
 break;
 v1 = a[i];
 }
 v3 = c;
 v4 = 0;
 do
 v4 += *v3++;
 while ( &v9 != (char *)v3 );
 return v4;
}


/* Function: param_link_time_optimization @ 0x1660 */
int param_link_time_optimization(int x)
{
 return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0x1670 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x1680 */
int param_division_by_zero(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0x16D0 */
int call_division_by_zero()
{
 int v0; // ebx
 int v1; // ebp

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0x1710 */
int param_null_pointer_deref(int *p)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0x1760 */
int call_null_pointer_deref()
{
 int v0; // ebx
 int v1; // ebp
 int valid; // [rsp+4h] [rbp-24h] BYREF
 unsigned long long v4; // [rsp+8h] [rbp-20h]

 v4 = __readfsqword(0x28u);
 valid = 42;
 v0 = param_null_pointer_deref(&valid);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v0 + v1;
}


/* Function: param_buffer_overflow_stack @ 0x17D0 */
long long param_buffer_overflow_stack(unsigned int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x17E0 */
int param_buffer_overflow_heap(int x)
{
 void *v1; // rax

 v1 = malloc(0x10u);
 if ( !v1 )
 return -2;
 free(v1);
 return x;
}


/* Function: call_buffer_overflow @ 0x1810 */
int call_buffer_overflow()
{
 void *v0; // rax

 v0 = malloc(0x10u);
 if ( !v0 )
 return 8;
 free(v0);
 return 30;
}


/* Function: param_integer_overflow @ 0x1840 */
int param_integer_overflow(int a, int b)
{
 int result; // eax

 result = a + b;
 if ( a <= 0 || b <= 0 )
 {
 if ( (b & a) < 0 && result > 0 )
 return -2;
 }
 else if ( result < 0 )
 {
 return -1;
 }
 return result;
}


/* Function: call_integer_overflow @ 0x1870 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1880 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0x1890 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x18A0 */
int param_implementation_defined()
{
 return 47;
}


/* Function: call_implementation_defined @ 0x18B0 */
long long call_implementation_defined()
{
 return 47;
}


/* Function: test_obf_opt_edge @ 0x18C0 */
void test_obf_opt_edge()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 long long v3; // rdx
 unsigned int v4; // eax
 unsigned int v5; // eax
 int v6; // ebx
 int v7; // ebp
 int v8; // ebx
 int v9; // ebp
 void *v10; // rdi
 long long v11; // rdx
 int p; // [rsp+4h] [rbp-24h] BYREF
 unsigned long long v13; // [rsp+8h] [rbp-20h]

 v13 = __readfsqword(0x28u);
 puts(s);
 __printf_chk(1, &unk_2137, 10);
 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v0;
 v0 = v1 % v0;
 v1 = v2;
 }
 while ( v0 );
 v3 = 20;
 if ( v2 != 1 )
 v3 = 35;
 __printf_chk(1, &unk_2153, v3);
 __printf_chk(1, &unk_216F, 225);
 v4 = param_string_encryption();
 __printf_chk(1, &unk_218C, v4);
 __printf_chk(1, &unk_2038, 500500);
 __printf_chk(1, &unk_2068, 5050);
 v5 = call_vectorized_loop();
 __printf_chk(1, &unk_2090, v5);
 __printf_chk(1, &unk_20B8, 20);
 v6 = param_division_by_zero(5);
 v7 = param_division_by_zero(0);
 signal(8, 0);
 __printf_chk(1, &unk_21A8, (unsigned int)(v6 + v7));
 p = 42;
 v8 = param_null_pointer_deref(&p);
 v9 = param_null_pointer_deref(0);
 signal(11, 0);
 __printf_chk(1, &unk_21C4, (unsigned int)(v8 + v9));
 v10 = malloc(0x10u);
 if ( v10 )
 {
 free(v10);
 v11 = 30;
 }
 else
 {
 v11 = 8;
 }
 __printf_chk(1, &unk_21E1, v11);
 __printf_chk(1, &unk_20D8, 2000000000);
 __printf_chk(1, &unk_21FE, 10);
 __printf_chk(1, &unk_2110, 47);
}


/* Function: .term_proc @ 0x1AE8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: free @ 0x4210 */

/* FAILED to decompile: __libc_start_main @ 0x4218 */

/* FAILED to decompile: strncpy @ 0x4220 */

/* FAILED to decompile: puts @ 0x4228 */

/* FAILED to decompile: strlen @ 0x4230 */

/* FAILED to decompile: __stack_chk_fail @ 0x4238 */

/* FAILED to decompile: _setjmp @ 0x4240 */

/* FAILED to decompile: signal @ 0x4248 */

/* FAILED to decompile: malloc @ 0x4250 */

/* FAILED to decompile: __printf_chk @ 0x4258 */

/* FAILED to decompile: __longjmp_chk @ 0x4260 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4268 */

/* FAILED to decompile: __gmon_start__ @ 0x4278 */

/* Total functions decompiled: 52, failed: 13 */
