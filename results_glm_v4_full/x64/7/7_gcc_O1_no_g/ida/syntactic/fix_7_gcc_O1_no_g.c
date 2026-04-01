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

/* Additional type definitions */
typedef unsigned char bool;
typedef void (*__sighandler_t)(int);

/* Global variable declarations */
typedef long long __jmp_buf[6];
static __jmp_buf jmp_buffer;
static __jmp_buf segv_buffer;
static int div_zero_caught;
static int segv_caught;
static char encrypted_0[32] = "encrypted_data_placeholder";
static const char *s = "Test: Opaque Predicate";
extern const char unk_2137[];
extern const char unk_2153[];
extern const char unk_216F[];
extern const char unk_218C[];
extern const char unk_2038[];
extern const char unk_2068[];
extern const char unk_2090[];
extern const char unk_20B8[];
extern const char unk_21A8[];
extern const char unk_21C4[];
extern const char unk_21E1[];
extern const char unk_20D8[];
extern const char unk_21FE[];
extern const char unk_2110[];

/* Stack canary function */
static inline unsigned long long __readfsqword(unsigned long offset)
{
    unsigned long long value;
    __asm__ volatile ("movq %%fs:%1, %0" : "=r" (value) : "m" (*(const unsigned long long *)offset));
    return value;
}
extern const char unk_2137[];
extern const char unk_2153[];
extern const char unk_216F[];
extern const char unk_218C[];
extern const char unk_2038[];
extern const char unk_2068[];
extern const char unk_2090[];
extern const char unk_20B8[];
extern const char unk_21A8[];
extern const char unk_21C4[];
extern const char unk_21E1[];
extern const char unk_20D8[];
extern const char unk_21FE[];
extern const char unk_2110[];

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/7/7_gcc_O1_no_g
 * Processor: pc
 */


/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0x1269 */
void div_zero_handler()
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x128E */
void segv_handler()
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x12B3 */
long long param_fake_branch(unsigned int a1)
{
 return a1;
}


/* Function: call_fake_branch @ 0x12BA */
long long call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x12C4 */
long long param_opaque_predicate(int a1)
{
 int v1; // ecx
 bool v2; // r9
 int v3; // eax
 int v4; // esi

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


/* Function: call_opaque_predicate @ 0x130B */
long long call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x131A */
long long param_instruction_substitution(unsigned int a1)
{
 return 15 * a1 + (a1 & 0xF) + (a1 >> 1) + 6 * a1;
}


/* Function: call_instruction_substitution @ 0x1338 */
long long call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x1342 */
char * decrypt_string(char *src, char *dest, size_t a3, char a4)
{
 char v6; // al
 char *v7; // rdx

 strncpy(dest, src, a3);
 dest[a3 - 1] = 0;
 v6 = *dest;
 if ( *dest )
 {
 v7 = dest;
 do
 {
 *v7++ = a4 ^ v6;
 v6 = *v7;
 }
 while ( *v7 );
 }
 return dest;
}


/* Function: param_string_encryption @ 0x1385 */
long long param_string_encryption()
{
 int v0; // eax
 char v2[40]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v3; // [rsp+28h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 decrypt_string(&encrypted_0, v2, 0x20u, 90);
 v0 = strlen(v2);
 return (unsigned int)(v0 + v2[0]);
}


/* Function: call_string_encryption @ 0x13E6 */
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x13FD */
long long param_tail_call_optimized(int a1, unsigned int a2)
{
 long long result; // rax

 result = a2;
 if ( a1 > 0 )
 return param_tail_call_optimized((unsigned int)(a1 - 1), a1 + a2);
 return result;
}


/* Function: call_tail_call_optimized @ 0x141B */
long long call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x1437 */
long long param_non_tail_call(int a1)
{
 long long result; // rax

 result = 0;
 if ( a1 > 0 )
 return a1 + (unsigned int)param_non_tail_call((unsigned int)(a1 - 1));
 return result;
}


/* Function: call_non_tail_call @ 0x1454 */
long long call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x146B */
long long param_vectorized_loop(long long a1, long long a2, unsigned int *a3, int a4)
{
 long long i; // rax
 unsigned int *v5; // rax
 long long v6; // rcx
 unsigned int v7; // edx

 if ( a4 <= 0 )
 {
 return 0;
 }
 else
 {
 for ( i = 0; i != a4; ++i )
 a3[i] = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 v5 = a3;
 v6 = (long long)&a3[a4 - 1 + 1];
 v7 = 0;
 do
 v7 += *v5++;
 while ( v5 != (unsigned int *)v6 );
 }
 return v7;
}


/* Function: call_vectorized_loop @ 0x14B5 */
long long call_vectorized_loop()
{
 unsigned int v1[8]; // [rsp+0h] [rbp-78h] BYREF
 unsigned int v2[8]; // [rsp+20h] [rbp-58h] BYREF
 unsigned long long v3[7]; // [rsp+40h] [rbp-38h] BYREF

 v3[5] = __readfsqword(0x28u);
 v1[0] = 1;
 v1[1] = 2;
 v1[2] = 3;
 v1[3] = 4;
 v1[4] = 5;
 v1[5] = 6;
 v1[6] = 7;
 v1[7] = 8;
 v2[0] = 8;
 v2[1] = 7;
 v2[2] = 6;
 v2[3] = 5;
 v2[4] = 4;
 v2[5] = 3;
 v2[6] = 2;
 v2[7] = 1;
 memset(v3, 0, 32);
 return param_vectorized_loop((long long)v1, (long long)v2, v3, 8);
}


/* Function: param_link_time_optimization @ 0x15A1 */
long long param_link_time_optimization(int a1)
{
 return (unsigned int)(2 * a1 + 10);
}


/* Function: call_link_time_optimization @ 0x15AA */
long long call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x15B4 */
long long param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return 0xFFFFFFFFLL;
 else
 return (unsigned int)(10 / a1);
}


/* Function: call_division_by_zero @ 0x15FB */
long long call_division_by_zero()
{
 int v0; // ebx
 int v1; // ebp

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return (unsigned int)(v0 + v1);
}


/* Function: param_null_pointer_deref @ 0x1636 */
long long param_null_pointer_deref(unsigned int *a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return 0xFFFFFFFFLL;
 else
 return *a1;
}


/* Function: call_null_pointer_deref @ 0x167B */
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


/* Function: param_buffer_overflow_stack @ 0x16E3 */
long long param_buffer_overflow_stack(unsigned int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x16EA */
long long param_buffer_overflow_heap(unsigned int a1)
{
 void *v2; // rax
 int v3; // edx

 v2 = malloc(0x10u);
 if ( v2 )
 {
 v3 = 33;
 do
 --v3;
 while ( v3 );
 free(v2);
 }
 else
 {
 return (unsigned int)-2;
 }
 return a1;
}


/* Function: call_buffer_overflow @ 0x171D */
long long call_buffer_overflow()
{
 return (unsigned int)param_buffer_overflow_heap(0x14u) + 10;
}


/* Function: param_integer_overflow @ 0x1737 */
long long param_integer_overflow(int a1, int a2)
{
 long long result; // rax

 result = (unsigned int)(a1 + a2);
 if ( a2 > 0 && a1 > 0 && (int)result < 0 )
 return 0xFFFFFFFFLL;
 if ( (a2 & a1) < 0 && (int)result > 0 )
 return 4294967294LL;
 return result;
}


/* Function: call_integer_overflow @ 0x1765 */
long long call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x176F */
long long param_undefined_behavior(int a1)
{
 return (unsigned int)(2 * a1);
}


/* Function: call_undefined_behavior @ 0x1777 */
long long call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x1781 */
long long param_implementation_defined()
{
 return 47;
}


/* Function: call_implementation_defined @ 0x178B */
long long call_implementation_defined()
{
 return 47;
}


/* Function: test_obf_opt_edge @ 0x1795 */
long long test_obf_opt_edge()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax

 puts(s);
 printf("param_opaque_predicate(5) = %d\n", 10);
 v0 = call_opaque_predicate();
 printf("param_string_encryption() = %d\n", v0);
 printf("param_instruction_substitution(10) = %d\n", 225);
 v1 = param_string_encryption();
 printf("param_string_encryption() = %d\n", v1);
 v2 = call_tail_call_optimized();
 printf("param_tail_call_optimized(1000, 0) = %d\n", v2);
 v3 = call_non_tail_call();
 printf("param_non_tail_call(100) = %d\n", v3);
 v4 = call_vectorized_loop();
 printf("param_vectorized_loop(...) = %d\n", v4);
 printf("param_link_time_optimization(5) = %d\n", 20);
 v5 = call_division_by_zero();
 printf("param_division_by_zero(0) = %d\n", v5);
 v6 = call_null_pointer_deref();
 printf("param_null_pointer_deref(0) = %d\n", v6);
 v7 = call_buffer_overflow();
 printf("param_buffer_overflow_heap(20) = %d\n", v7);
 printf("param_integer_overflow(INT_MAX, 1) = %d\n", 2000000000);
 printf("param_undefined_behavior(5) = %d\n", 10);
 return printf("param_implementation_defined() = %d\n", 47);
}


/* Function: main @ 0x1960 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge(argc, argv, envp);
 return 0;
}


/* Function: .term_proc @ 0x197C */
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
