#include <stdbool.h>
#include <signal.h>
#include <setjmp.h>
#include <stddef.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* External symbols */
extern void _gmon_start__(void);

/* Global variables for signal handling */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;

/* Stack canary intrinsic */
static inline unsigned int __readgsdword(unsigned int offset) {
    unsigned int value;
    __asm__ volatile("movl %%gs:%1,%0" : "=r" (value) : "m" (*(volatile unsigned int *)(offset)));
    return value;
}

/* Encrypted string placeholder */
extern const char asc_2008[];
extern const char unk_212F[];
extern const char unk_214B[];
extern const char unk_2167[];
extern const char unk_2184[];
extern const char unk_2038[];
extern const char unk_2064[];
extern const char unk_208C[];
extern const char unk_20B4[];
extern const char unk_21A0[];
extern const char unk_21BC[];
extern const char unk_21D9[];
extern const char unk_20D4[];
extern const char unk_21F6[];
extern const char unk_2108[];

/* Dummy encrypted string (placeholder for decompiled data) */
const char encrypted_0[] = {
  0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59,
  0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49,
  0x00
};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/7/7_gcc_O1_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *8(%%ebx)" : : : "memory");
 __builtin_unreachable();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
int sub_10F0(int a1)
{
 return (*(int (**)(void))(a1 + 60))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11DC @ 0x11DC */
void sub_11DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1319 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x131D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: div_zero_handler @ 0x1321 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x134C */
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x1377 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x1380 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x138A */
int param_opaque_predicate(int x)
{
 int v1; // ecx
 bool v2; // bp
 int v3; // eax
 int v4; // ebx

 v1 = x + 1;
 if ( x == -1 )
 return 3 * x + 20;
 v2 = 2 * x + x * x + 1 == v1 * v1;
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


/* Function: call_opaque_predicate @ 0x13DD */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x13EC */
int param_instruction_substitution(int x)
{
 return 15 * x + (x & 0xF) + ((unsigned int)x >> 1) + 6 * x;
}


/* Function: call_instruction_substitution @ 0x140E */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x1418 */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char v4; // al
 char *v5; // edx

 strncpy(buffer, encrypted, len);
 buffer[len - 1] = 0;
 v4 = *buffer;
 if ( *buffer )
 {
 v5 = buffer;
 do
 {
 *v5++ = key ^ v4;
 v4 = *v5;
 }
 while ( *v5 );
 }
 return buffer;
}


/* Function: param_string_encryption @ 0x146F */
long long param_string_encryption()
{
 size_t v0; // eax
 long long result; // rax
 char decrypted[32]; // [esp+1Ch] [ebp-30h] BYREF
 unsigned int v3; // [esp+3Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 decrypt_string(encrypted_0, decrypted, 0x20u, 90);
 v0 = strlen(decrypted);
 result = ((unsigned long long)(v0 + decrypted[0])) | ((unsigned long long)(v3 - __readgsdword(0x14u)) << 32);
 return result;
}


/* Function: call_string_encryption @ 0x14D0 */
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x14E0 */
int param_tail_call_optimized(int n, int acc)
{
 int result; // eax

 result = acc;
 if ( n > 0 )
 return param_tail_call_optimized(n - 1, n + acc);
 return result;
}


/* Function: call_tail_call_optimized @ 0x150B */
int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x1522 */
int param_non_tail_call(int n)
{
 int result; // eax

 result = 0;
 if ( n > 0 )
 return n + param_non_tail_call(n - 1);
 return result;
}


/* Function: call_non_tail_call @ 0x154D */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x155F */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 int i; // eax
 int *v5; // edx
 int *v6; // ecx
 int result; // eax

 if ( n <= 0 )
 return 0;
 for ( i = 0; i != n; ++i )
 c[i] = a[i] + b[i];
 v5 = c;
 v6 = &c[i];
 result = 0;
 do
 result += *v5++;
 while ( v5 != v6 );
 return result;
}


/* Function: call_vectorized_loop @ 0x15AD */
int call_vectorized_loop()
{
 unsigned int v0; // eax
 int a[8]; // [esp+Ch] [ebp-70h] BYREF
 int b[8]; // [esp+2Ch] [ebp-50h] BYREF
 int c[8]; // [esp+4Ch] [ebp-30h] BYREF
 unsigned int v5; // [esp+6Ch] [ebp-10h]

 v5 = __readgsdword(0x14u);
 v0 = 0;
 a[0] = 1;
 a[1] = 2;
 a[2] = 3;
 a[3] = 4;
 a[4] = 5;
 a[5] = 6;
 a[6] = 7;
 a[7] = 8;
 b[0] = 8;
 b[1] = 7;
 b[2] = 6;
 b[3] = 5;
 b[4] = 4;
 b[5] = 3;
 b[6] = 2;
 b[7] = 1;
 do
 c[v0++] = 0;
 while ( v0 < 8 );
 return param_vectorized_loop(a, b, c, 8);
}


/* Function: param_link_time_optimization @ 0x1684 */
int param_link_time_optimization(int x)
{
 return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0x1691 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x169B */
int param_division_by_zero(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0x16EB */
int call_division_by_zero()
{
 int v0; // esi
 int v1; // edi

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0x172D */
int param_null_pointer_deref(int *p)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0x1779 */
long long call_null_pointer_deref()
{
 int v0; // esi
 int v1; // edi
 long long result; // rax
 int valid; // [esp+18h] [ebp-14h] BYREF
 unsigned int v4; // [esp+1Ch] [ebp-10h]

 v4 = __readgsdword(0x14u);
 valid = 42;
 v0 = param_null_pointer_deref(&valid);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 result = ((unsigned long long)(v0 + v1)) | ((unsigned long long)(v4 - __readgsdword(0x14u)) << 32);
 return result;
}


/* Function: param_buffer_overflow_stack @ 0x17E7 */
int param_buffer_overflow_stack(int x)
{
 return x;
}


/* Function: param_buffer_overflow_heap @ 0x17F0 */
int param_buffer_overflow_heap(int x)
{
 void *v1; // eax
 int v2; // edx

 v1 = malloc(0x10u);
 if ( !v1 )
 return -2;
 v2 = 33;
 do
 --v2;
 while ( v2 );
 free(v1);
 return x;
}


/* Function: call_buffer_overflow @ 0x183A */
int call_buffer_overflow()
{
 return param_buffer_overflow_heap(20) + 10;
}


/* Function: param_integer_overflow @ 0x184F */
int param_integer_overflow(int a, int b)
{
 int result; // eax

 result = a + b;
 if ( b > 0 && a > 0 && result < 0 )
 return -1;
 if ( (b & a) < 0 && result > 0 )
 return -2;
 return result;
}


/* Function: call_integer_overflow @ 0x1890 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x189A */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0x18A5 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x18AF */
int param_implementation_defined()
{
 return 43;
}


/* Function: call_implementation_defined @ 0x18B9 */
int call_implementation_defined()
{
 return 43;
}





/* Function: main @ 0x1A17 */
int main(int argc, const char **argv, const char **envp)
{
 return 0;
}


/* Function: __stack_chk_fail_local @ 0x1A30 */
void _stack_chk_fail_local()
{
 __asm__ volatile("" : : : "ebx");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1A9C */
void term_proc()
{
 /* CRT stub removed */
}


/* FAILED to decompile: __libc_start_main @ 0x41A0 */

/* FAILED to decompile: _setjmp @ 0x41A4 */

/* FAILED to decompile: free @ 0x41A8 */

/* FAILED to decompile: signal @ 0x41AC */

/* FAILED to decompile: __stack_chk_fail @ 0x41B0 */

/* FAILED to decompile: __cxa_finalize @ 0x41B4 */

/* FAILED to decompile: malloc @ 0x41B8 */

/* FAILED to decompile: puts @ 0x41BC */

/* FAILED to decompile: strlen @ 0x41C0 */

/* FAILED to decompile: strncpy @ 0x41C4 */

/* FAILED to decompile: __printf_chk @ 0x41C8 */

/* FAILED to decompile: __longjmp_chk @ 0x41CC */

/* Total functions decompiled: 60, failed: 12 */
