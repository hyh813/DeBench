/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
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
/* int64_t is system-defined, not redefining */
#ifndef size_t
typedef unsigned long size_t;
#endif
#ifndef ssize_t
typedef long ssize_t;
#endif
#ifndef uintptr_t
typedef unsigned long uintptr_t;
#endif
#ifndef intptr_t
typedef long intptr_t;
#endif
#ifndef ptrdiff_t
typedef unsigned long ptrdiff_t;
#endif
#ifndef intmax_t
typedef long long intmax_t;
#endif
#ifndef uintmax_t

typedef unsigned long long uintmax_t;
#endif

/* Define __m128i union for member access */
typedef union __m128i_u {
    char m128i_i8[16];
    short m128i_i16[8];
    int m128i_i32[4];
    long long m128i_i64[2];
    unsigned char m128i_u8[16];
    unsigned short m128i_u16[8];
    unsigned int m128i_u32[4];
    unsigned long long m128i_u64[2];
} __m128i_u_t;

#include <emmintrin.h>
#include <signal.h>
#include <setjmp.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Global variable definitions */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;

/* Local data definitions */
static const char encrypted_0[] = "EncryptedStringXXXXXXXXXXXXXXXXXXXX";
static const char s[] = "Obfuscation & Optimization Edge Cases Test:\n";
static const char unk_2038[] = "Tail Call Optimized: %d\n";
static const char unk_2068[] = "Non-Tail Call: %d\n";
static const char unk_20B8[] = "Link Time Optimization: %d\n";
static const char unk_20D8[] = "Integer Overflow: %d\n";
static const char unk_2090[] = "Vectorized Loop: %d\n";
static const char unk_2110[] = "Implementation Defined: %d\n";
static const char unk_2137[] = "Opaque Predicate: %d\n";
static const char unk_2153[] = "Fake Branch: %d\n";
static const char unk_216F[] = "Instruction Substitution: %d\n";
static const char unk_218C[] = "String Encryption: %d\n";
static const char unk_21A8[] = "Division By Zero: %d\n";
static const char unk_21C4[] = "Null Pointer Dereference: %d\n";
static const char unk_21E1[] = "Buffer Overflow: %d\n";
static const char unk_21FE[] = "Undefined Behavior: %d\n";

/* SIMD constants */
static const __m128i xmmword_2220 = {0};
static const __m128i xmmword_2230 = {1, 1, 1, 1};

/* Forward declarations */
long long test_obf_opt_edge(int argc, const char **argv, const char **envp);

/* Helper macros */
#define LODWORD(x) (*((unsigned int*)&(x)))
#define LOBYTE(x) (*((unsigned char*)&(x)))

/* Missing CRT functions */
void JUMPOUT(long long target)
{
    /* Non-returning jump instruction - stub implementation */
    for(;;);  /* Infinite loop */
}

int _setjmp(jmp_buf env);
void __longjmp_chk(jmp_buf env, int val);

/* BUG() function to trigger SIGFPE */
void BUG(void)
{
    volatile int x = 1;
    volatile int y = 0;
    (void)(x / y);  /* Triggers SIGFPE - division by zero */
}

/* __readfsqword intrinsic for stack canary reading */
static inline unsigned long long __readfsqword(unsigned long offset)
{
    unsigned long long value;
    asm volatile ("movq %%fs:%1, %0" : "=r" (value) : "m" (*(const unsigned long long *)(offset)));
    return value;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/7/7_gcc_O3_no_g
 * Processor: pc
 */




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1020();
}


/* Function: main @ 0x1180 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge(argc, argv, envp);
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0x1290 */
void div_zero_handler()
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x12C0 */
void segv_handler()
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
}


/* Function: param_division_by_zero.constprop.0 @ 0x12F0 */
long long param_division_by_zero_constprop_0()
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( !_setjmp(jmp_buffer) )
 BUG();
 return 0xFFFFFFFFLL;
}


/* Function: param_division_by_zero.constprop.1 @ 0x1330 */
long long param_division_by_zero_constprop_1()
{
 signal(8, (__sighandler_t)div_zero_handler);
 return _setjmp(jmp_buffer) == 0 ? 2 : -1;
}


/* Function: param_fake_branch @ 0x1370 */
long long param_fake_branch(unsigned int a1)
{
 return a1;
}


/* Function: call_fake_branch @ 0x1380 */
long long call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x1390 */
long long param_opaque_predicate(int a1)
{
 int v1; // edx
 bool v2; // r8
 int v3; // eax
 int v4; // ecx

 v1 = a1 + 1;
 v2 = 2 * a1 + a1 * a1 + 1 == v1 * v1;
 if ( a1 == -1 )
 return (unsigned int)(3 * a1 + 20);
 v3 = a1;
 do
 {
 v4 = v1;
 v1 = v3 % v1;
 v3 = v4;
 }
 while ( v1 );
 if ( v4 == 1 && v2 )
 return (unsigned int)(2 * a1 + 10);
 else
 return (unsigned int)(3 * a1 + 20);
}


/* Function: call_opaque_predicate @ 0x13E0 */
long long call_opaque_predicate()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 long long result; // rax

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


/* Function: param_instruction_substitution @ 0x1410 */
long long param_instruction_substitution(unsigned int a1)
{
 return 15 * a1 + (a1 & 0xF) + (a1 >> 1) + 6 * a1;
}


/* Function: call_instruction_substitution @ 0x1430 */
long long call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x1440 */
char * decrypt_string(char *src, char *dest, size_t a3, char a4)
{
 char *v6; // rax
 char *v7; // r8
 char v8; // al
 char *v9; // rdx

 v6 = strncpy(dest, src, a3);
 v6[a3 - 1] = 0;
 v7 = v6;
 v8 = *v6;
 if ( v8 )
 {
 v9 = v7;
 do
 {
 *v9++ = a4 ^ v8;
 v8 = *v9;
 }
 while ( *v9 );
 }
 return v7;
}


/* Function: param_string_encryption @ 0x1490 */
long long param_string_encryption()
{
 char *v0; // rax
 int v1; // ebx
 const char *v2; // rdi
 char v4[40]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v0 = strncpy(v4, &encrypted_0, 0x1Fu);
 v1 = v4[0];
 v4[31] = 0;
 v2 = v0;
 if ( v4[0] )
 {
 do
 {
 *v0++ = v1 ^ 0x5A;
 LOBYTE(v1) = *v0;
 }
 while ( *v0 );
 v1 = v4[0];
 }
 return v1 + (unsigned int)strlen(v2);
}


/* Function: call_string_encryption @ 0x1510 */
long long call_string_encryption()
{
 char *v0; // rax
 int v1; // ebx
 const char *v2; // rdi
 char v4[40]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v5; // [rsp+28h] [rbp-10h]

 v5 = __readfsqword(0x28u);
 v0 = strncpy(v4, &encrypted_0, 0x1Fu);
 v1 = v4[0];
 v4[31] = 0;
 v2 = v0;
 if ( v4[0] )
 {
 do
 {
 *v0++ = v1 ^ 0x5A;
 LOBYTE(v1) = *v0;
 }
 while ( *v0 );
 v1 = v4[0];
 }
 return v1 + (unsigned int)strlen(v2);
}


/* Function: param_tail_call_optimized @ 0x1590 */
long long param_tail_call_optimized(signed int a1, unsigned int a2)
{
 signed int v2; // edx
 __m128i si128; // xmm3
 int v4; // ecx
 __m128i v5; // xmm1
 __m128i v6; // xmm0
 __m128i v7; // xmm2
 __m128i v8; // xmm0
 long long result; // rax

 v2 = a1;
 if ( a1 <= 0 )
 return a2;
 if ( a1 <= 10 )
 {
 result = a2;
 }
 else
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_2230);
 v4 = 0;
 v5 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(a1), 0), _mm_load_si128((const __m128i *)&xmmword_2220));
 v6 = _mm_setzero_si128();
 do
 {
 v7 = v5;
 ++v4;
 v5 = _mm_add_epi32(v5, si128);
 v6 = _mm_add_epi32(v6, v7);
 }
 while ( (unsigned int)a1 >> 2 != v4 );
 v8 = _mm_add_epi32(v6, _mm_srli_si128(v6, 8));
 result = _mm_cvtsi128_si32(_mm_add_epi32(v8, _mm_srli_si128(v8, 4))) + a2;
 v2 = a1 - (a1 & 0xFFFFFFFC);
 if ( a1 == (a1 & 0xFFFFFFFC) )
 return result;
 }
 result = (unsigned int)(v2 + result);
 if ( v2 != 1 )
 {
 result = (unsigned int)(v2 - 1 + result);
 if ( v2 != 2 )
 {
 result = (unsigned int)(v2 - 2 + result);
 if ( v2 != 3 )
 {
 result = (unsigned int)(v2 - 3 + result);
 if ( v2 != 4 )
 {
 result = (unsigned int)(v2 - 4 + result);
 if ( v2 != 5 )
 {
 result = (unsigned int)(v2 - 5 + result);
 if ( v2 != 6 )
 {
 result = (unsigned int)(v2 - 6 + result);
 if ( v2 != 7 )
 {
 result = (unsigned int)(v2 - 7 + result);
 if ( v2 != 8 )
 return (unsigned int)(v2 + v2 - 8 + result - 9);
 }
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: call_tail_call_optimized @ 0x1670 */
long long call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x1680 */
long long param_non_tail_call(signed int a1)
{
 signed int v1; // ecx
 __m128i si128; // xmm3
 int v3; // eax
 __m128i v4; // xmm1
 __m128i v5; // xmm0
 __m128i v6; // xmm2
 int v7; // edx
 __m128i v8; // xmm0
 long long result; // rax

 if ( a1 <= 0 )
 return 0;
 v1 = a1;
 if ( a1 <= 10 )
 {
 result = 0;
 }
 else
 {
 si128 = _mm_load_si128((const __m128i *)&xmmword_2230);
 v3 = 0;
 v4 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(a1), 0), _mm_load_si128((const __m128i *)&xmmword_2220));
 v5 = _mm_setzero_si128();
 do
 {
 v6 = v4;
 ++v3;
 v4 = _mm_add_epi32(v4, si128);
 v5 = _mm_add_epi32(v5, v6);
 }
 while ( (unsigned int)a1 >> 2 != v3 );
 v7 = a1 & 0x7FFFFFFC;
 v8 = _mm_add_epi32(v5, _mm_srli_si128(v5, 8));
 a1 -= a1 & 0xFFFFFFFC;
 result = (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(v8, _mm_srli_si128(v8, 4)));
 if ( v1 == v7 )
 return result;
 }
 result = (unsigned int)(a1 + result);
 if ( a1 != 1 )
 {
 result = (unsigned int)(a1 - 1 + result);
 if ( a1 != 2 )
 {
 result = (unsigned int)(a1 - 2 + result);
 if ( a1 != 3 )
 {
 result = (unsigned int)(a1 - 3 + result);
 if ( a1 != 4 )
 {
 result = (unsigned int)(a1 - 4 + result);
 if ( a1 != 5 )
 {
 result = (unsigned int)(a1 - 5 + result);
 if ( a1 != 6 )
 {
 result = (unsigned int)(a1 - 6 + result);
 if ( a1 != 7 )
 {
 result = (unsigned int)(a1 - 7 + result);
 if ( a1 != 8 )
 return (unsigned int)(a1 + result + a1 - 8 - 9);
 }
 }
 }
 }
 }
 }
 }
 return result;
}


/* Function: call_non_tail_call @ 0x1760 */
long long call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0x1770 */
long long param_vectorized_loop(long long a1, long long a2, __m128i *a3, int a4)
{
 unsigned int v5; // r9d
 int v6; // r10d
 long long v7; // rax
 long long v8; // rcx
 int v9; // eax
 const __m128i *v10; // rax
 __m128i v11; // xmm0
 __m128i v12; // xmm2
 signed int v13; // ecx
 __m128i v14; // xmm0
 long long result; // rax
 long long v16; // rdi
 long long i; // rax

 if ( a4 <= 0 )
 return 0;
 if ( (unsigned long long)a3 - a2 - 4 > 8 && (unsigned long long)a3 - a1 - 4 > 8 && a4 != 1 )
 {
 v5 = a4 - 1;
 v6 = a4;
 if ( (unsigned int)(a4 - 1) <= 2 )
 {
 v8 = 0;
 v9 = 0;
 }
 else
 {
 v7 = 0;
 do
 {
 a3[v7] = _mm_add_epi32(
 _mm_loadu_si128((const __m128i *)(a1 + v7 * 16)),
 _mm_loadu_si128((const __m128i *)(a2 + v7 * 16)));
 ++v7;
 }
 while ( (unsigned int)a4 >> 2 != v7 );
 v8 = a4 & 0xFFFFFFFC;
 v9 = v8;
 if ( a4 == (unsigned int)v8 )
 {
LABEL_12:
 v10 = a3;
 v11 = _mm_setzero_si128();
 do
 {
 v12 = _mm_loadu_si128(v10++);
 v11 = _mm_add_epi32(v11, v12);
 }
 while ( v10 != &a3[(unsigned int)a4 >> 2] );
 v13 = a4 & 0xFFFFFFFC;
 v14 = _mm_add_epi32(v11, _mm_srli_si128(v11, 8));
 result = (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(v14, _mm_srli_si128(v14, 4)));
 if ( (a4 & 3) == 0 )
 return result;
 goto LABEL_15;
 }
 v6 = a4 - v8;
 if ( a4 - (unsigned int)v8 == 1 )
 {
LABEL_10:
 ((__m128i_u_t *)a3)[v9].m128i_i32[0] = *(unsigned int *)(a1 + 4LL * v9) + *(unsigned int *)(a2 + 4LL * v9);
 goto LABEL_11;
 }
 }
 {
 __m128i tmp = _mm_add_epi32(_mm_loadl_epi64((const __m128i *)(a1 + 4 * v8)), _mm_loadl_epi64((const __m128i *)(a2 + 4 * v8)));
 *(long long *)((char *)a3 + 4 * v8) = _mm_cvtsi128_si64(tmp);
 }
 v9 += v6 & 0xFFFFFFFE;
 if ( v6 == (v6 & 0xFFFFFFFE) )
 goto LABEL_11;
 goto LABEL_10;
 }
 for ( i = 0; i != a4; ++i )
 ((__m128i_u_t *)a3)[i].m128i_i32[0] = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 v5 = a4 - 1;
LABEL_11:
 if ( v5 > 2 )
 goto LABEL_12;
 v13 = 0;
 result = 0;
LABEL_15:
 v16 = v13;
 result = (unsigned int)(((__m128i_u_t *)a3)[v16].m128i_i32[0] + result);
 if ( v13 + 1 < a4 )
 {
 result = (unsigned int)(((__m128i_u_t *)a3)[v16 + 1].m128i_i32[0] + result);
 if ( v13 + 2 < a4 )
 return (unsigned int)(((__m128i_u_t *)a3)[v16 + 2].m128i_i32[0] + result);
 }
 return result;
}


/* Function: call_vectorized_loop @ 0x1900 */
long long call_vectorized_loop()
{
 return 72;
}


/* Function: param_link_time_optimization @ 0x1910 */
long long param_link_time_optimization(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: call_link_time_optimization @ 0x1920 */
long long call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x1930 */
long long param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)(10 / a1);
}


/* Function: call_division_by_zero @ 0x1980 */
long long call_division_by_zero()
{
 int v0; // ebx
 int v1; // ebp

 v0 = param_division_by_zero_constprop_1();
 v1 = param_division_by_zero_constprop_0();
 signal(8, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: param_null_pointer_deref @ 0x19B0 */
long long param_null_pointer_deref(unsigned int *a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return 0xFFFFFFFFLL;
 else
 return *a1;
}


/* Function: call_null_pointer_deref @ 0x1A00 */
long long call_null_pointer_deref()
{
 int v0; // ebx
 int v1; // ebp
 unsigned int v3; // [rsp+4h] [rbp-24h] BYREF
 unsigned long long v4; // [rsp+8h] [rbp-20h]

 v4 = __readfsqword(0x28u);
 v3 = 42;
 v0 = param_null_pointer_deref(&v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: param_buffer_overflow_stack @ 0x1A70 */
long long param_buffer_overflow_stack(unsigned int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1A80 */
long long param_buffer_overflow_heap(unsigned int a1)
{
 void *v1; // rax

 v1 = malloc(0x10u);
 if ( !v1 )
 return 4294967294LL;
 free(v1);
 return a1;
}


/* Function: call_buffer_overflow @ 0x1AB0 */
long long call_buffer_overflow()
{
 void *v0; // rax

 v0 = malloc(0x10u);
 if ( !v0 )
 return 8;
 free(v0);
 return 30;
}


/* Function: param_integer_overflow @ 0x1AE0 */
long long param_integer_overflow(int a1, int a2)
{
 long long result; // rax

 result = (unsigned int)(a1 + a2);
 if ( a1 <= 0 || a2 <= 0 )
 {
 if ( (a2 & a1) < 0 && (int)result > 0 )
 return 4294967294LL;
 }
 else if ( (int)result < 0 )
 {
 return 0xFFFFFFFFLL;
 }
 return result;
}


/* Function: call_integer_overflow @ 0x1B10 */
long long call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1B20 */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0x1B30 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x1B40 */
long long param_implementation_defined()
{
 return 47;
}


/* Function: call_implementation_defined @ 0x1B50 */
long long call_implementation_defined()
{
 return 47;
}


/* Function: test_obf_opt_edge @ 0x1B60 */
long long test_obf_opt_edge(int argc, const char **argv, const char **envp)
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 long long v3; // rdx
 char *v4; // rax
 int v5; // ebx
 const char *v6; // rdi
 (void)argc;
 (void)argv;
 (void)envp;
 int v7; // eax
 unsigned int v8; // eax
 int v9; // ebx
 int v10; // ebp
 int v11; // ebx
 int v12; // ebp
 void *v13; // rdi
 long long v14; // rdx
 unsigned int v16; // [rsp+Ch] [rbp-4Ch] BYREF
 char dest[40]; // [rsp+10h] [rbp-48h] BYREF
 unsigned long long v18; // [rsp+38h] [rbp-20h]

 v18 = __readfsqword(0x28u);
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
 v4 = strncpy(dest, &encrypted_0, 0x1Fu);
 v5 = dest[0];
 dest[31] = 0;
 v6 = v4;
 if ( dest[0] )
 {
 do
 {
 *v4++ = v5 ^ 0x5A;
 LOBYTE(v5) = *v4;
 }
 while ( *v4 );
 v5 = dest[0];
 }
 v7 = strlen(v6);
 __printf_chk(1, &unk_218C, (unsigned int)(v5 + v7));
 __printf_chk(1, &unk_2038, 500500);
 __printf_chk(1, &unk_2068, 5050);
 v8 = call_vectorized_loop(1, &unk_2090);
 __printf_chk(1, &unk_2090, v8);
 __printf_chk(1, &unk_20B8, 20);
 v9 = param_division_by_zero_constprop_1();
 v10 = param_division_by_zero_constprop_0();
 signal(8, 0);
 __printf_chk(1, &unk_21A8, (unsigned int)(v9 + v10));
 v16 = 42;
 v11 = param_null_pointer_deref(&v16);
 v12 = param_null_pointer_deref(0);
 signal(11, 0);
 __printf_chk(1, &unk_21C4, (unsigned int)(v11 + v12));
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
 __printf_chk(1, &unk_21E1, v14);
 __printf_chk(1, &unk_20D8, 2000000000);
 __printf_chk(1, &unk_21FE, 10);
 return __printf_chk(1, &unk_2110, 47);
}


/* Function: .term_proc @ 0x1DC0 */
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

/* Total functions decompiled: 54, failed: 13 */
