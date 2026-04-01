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
typedef int bool;
typedef void (*__sighandler_t)(int);
typedef long jmp_buf[20];

/* Missing function declarations */
extern int _printf_chk(int, const char *, ...);
extern void _longjmp_chk(jmp_buf, int);
extern int setjmp(jmp_buf);
extern void longjmp(jmp_buf, int);
extern __sighandler_t signal(int, __sighandler_t);
extern void *malloc(size_t);
extern void free(void *);
extern size_t strlen(const char *);
extern char *strncpy(char *, const char *, size_t);
extern int puts(const char *);

/* Missing macros */
#define JUMPOUT(x) return

/* Missing function definitions */
static int call_weak_fn() { return 0; }
static void __und(int x) { raise(8); }
int _printf_chk(int flag, const char *format, ...) { return 0; }
void _longjmp_chk(jmp_buf env, int val) { longjmp(env, val); }

/* Global variable declarations */
static jmp_buf jmp_buffer;
static jmp_buf segv_buffer;
static int div_zero_caught;
static int segv_caught;
static char encrypted_0[32];
static char *s;
static char unk_111B8[] = "%d\n";
static char unk_111D4[] = "%d\n";
static char unk_111F0[] = "%d\n";
static char unk_11210[] = "%d\n";
static char unk_1122C[] = "%d\n";
static char unk_11258[] = "%d\n";
static char unk_11280[] = "%d\n";
static char unk_112A8[] = "%d\n";
static char unk_112C8[] = "%d\n";
static char unk_112E4[] = "%d\n";
static char unk_11304[] = "%d\n";
static char unk_11324[] = "%d\n";
static char unk_11358[] = "%d\n";
static char unk_11378[] = "%d\n";
static char *s = "Hello";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/7/7_gcc_O3_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x104E4 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_104F0 @ 0x104F0 */
void sub_104F0()
{
 JUMPOUT(0);
}


/* Function: main @ 0x105AC */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge(argc, argv, envp);
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: div_zero_handler @ 0x106B4 */
void div_zero_handler(int a1)
{
 div_zero_caught = 1;
 _longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x106CC */
void segv_handler(int a1)
{
 segv_caught = 1;
 _longjmp_chk(segv_buffer, 1);
}


/* Function: param_division_by_zero.constprop.0 @ 0x106E8 */
int param_division_by_zero_constprop_0()
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( !setjmp(jmp_buffer) )
 __und(0);
 return -1;
}


/* Function: param_division_by_zero.constprop.1 @ 0x1071C */
int param_division_by_zero_constprop_1()
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( setjmp(jmp_buffer) )
 return -1;
 else
 return 2;
}


/* Function: param_fake_branch @ 0x1074C */
void param_fake_branch()
{
 ;
}


/* Function: call_fake_branch @ 0x10750 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x10758 */
int param_opaque_predicate(int a1)
{
 int v1; // r1
 int v2; // r5
 int v3; // r6
 bool v4; // r7
 int v5; // r4

 v1 = a1 + 1;
 v2 = a1;
 v3 = 2 * a1;
 v4 = a1 * a1 + 2 * a1 + 1 == (a1 + 1) * (a1 + 1);
 if ( a1 == -1 )
 return v3 + v2 + 20;
 do
 {
 v5 = v1;
 v1 = a1 % v1;
 a1 = v5;
 }
 while ( v1 );
 if ( v5 != 1 || !v4 )
 return v3 + v2 + 20;
 else
 return v3 + 10;
}


/* Function: call_opaque_predicate @ 0x107C8 */
int call_opaque_predicate()
{
 int v0; // r1
 int v1; // r0
 int v2; // r4

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


/* Function: param_instruction_substitution @ 0x107F8 */
int param_instruction_substitution(unsigned int a1)
{
 return 6 * a1 + (a1 >> 1) + (a1 & 0xF) + 15 * a1;
}


/* Function: call_instruction_substitution @ 0x10818 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x10820 */
char * decrypt_string(char *src, char *dest, size_t a3, char a4)
{
 char v7; // r2
 char *v8; // r12
 int v9; // t1

 strncpy(dest, src, a3);
 dest[a3 - 1] = 0;
 v7 = *dest;
 if ( *dest )
 {
 v8 = dest;
 do
 {
 *v8 = v7 ^ a4;
 v9 = (unsigned char)*++v8;
 v7 = v9;
 }
 while ( v9 );
 }
 return dest;
}


/* Function: param_string_encryption @ 0x10874 */
size_t param_string_encryption()
{
 int v0; // r4
 char *v1; // r3
 int v2; // t1
 char dest[32]; // [sp+4h] [bp-2Ch] BYREF

 strncpy(dest, &encrypted_0, 0x1Fu);
 v0 = (unsigned char)dest[0];
 dest[31] = 0;
 if ( dest[0] )
    {
 v1 = dest;
 do
 {
 *v1 = v0 ^ 0x5A;
 v2 = (unsigned char)*++v1;
 v0 = (unsigned char)v2;
 }
 while ( v2 );
 v0 = (unsigned char)dest[0];
 }
 return v0 + strlen(dest);
}


/* Function: call_string_encryption @ 0x10904 */
size_t call_string_encryption()
{
 int v0; // r4
 char *v1; // r3
 int v2; // t1
 char dest[32]; // [sp+4h] [bp-2Ch] BYREF

 strncpy(dest, &encrypted_0, 0x1Fu);
 v0 = (unsigned char)dest[0];
 dest[31] = 0;
 if ( dest[0] )
    {
 v1 = dest;
 do
 {
 *v1 = v0 ^ 0x5A;
 v2 = (unsigned char)*++v1;
 v0 = (unsigned char)v2;
 }
 while ( v2 );
 v0 = (unsigned char)dest[0];
 }
 return v0 + strlen(dest);
}


/* Function: param_tail_call_optimized @ 0x10994 */
int param_tail_call_optimized(int a1, int a2)
{
 bool v2; // cc
 int v3; // r3
 int result; // r0
 int v5; // r2

 v3 = a1;
 v2 = a1 <= 0;
 result = a2;
 if ( !v2 )
 {
 do
 {
 v5 = v3--;
 result += v5;
 }
 while ( v3 );
 }
 return result;
}


/* Function: call_tail_call_optimized @ 0x109B4 */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x109C0 */
int param_non_tail_call(int a1)
{
 bool v1; // cc
 int v2; // r3
 int result; // r0
 int v4; // r2

 v2 = a1;
 v1 = a1 <= 0;
 result = 0;
 if ( !v1 )
 {
 do
 {
 v4 = v2--;
 result += v4;
 }
 while ( v2 );
 }
 return result;
}


/* Function: call_non_tail_call @ 0x109E0 */
int call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0x109EC */
int param_vectorized_loop(int a1, int a2, int a3, int a4)
{
 int v5; // r3
 int v6; // lr
 int v7; // r2
 int v8; // r0
 int v9; // r6
 int v10; // r1
 int v11; // r5
 int v12; // r12
 int v13; // t1
 int v14; // t1
 int result; // r0
 int v16; // r3
 int v17; // t1

 if ( a4 <= 0 )
 return 0;
 v5 = a3 - 4;
 v6 = a3 - 4;
 v7 = a3 - 4;
 v8 = a1 - 4;
 v9 = 4 * a4;
 v10 = a2 - 4;
 v11 = v8 + 4 * a4;
 do
 {
 v13 = *(unsigned int *)(v8 + 4);
 v8 += 4;
 v12 = v13;
 v14 = *(unsigned int *)(v10 + 4);
 v10 += 4;
 *(unsigned int *)(v7 + 4) = v12 + v14;
 v7 += 4;
 }
 while ( v8 != v11 );
 result = 0;
 v16 = v5 + v9;
 do
 {
 v17 = *(unsigned int *)(v6 + 4);
 v6 += 4;
 result += v17;
 }
 while ( v16 != v6 );
 return result;
}


/* Function: call_vectorized_loop @ 0x10A50 */
int call_vectorized_loop()
{
 return 72;
}


/* Function: param_link_time_optimization @ 0x10A58 */
int param_link_time_optimization(int a1)
{
 return 2 * (a1 + 5);
}


/* Function: call_link_time_optimization @ 0x10A64 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x10A6C */
int param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / a1;
}


/* Function: call_division_by_zero @ 0x10ABC */
int call_division_by_zero()
{
 int v0; // r5
 int v1; // r4

 v0 = param_division_by_zero_constprop_1();
 v1 = param_division_by_zero_constprop_0();
 signal(8, 0);
 return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0x10AE4 */
int param_null_pointer_deref(int a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( setjmp(segv_buffer) )
 return -1;
 else
 return *(unsigned int *)a1;
}


/* Function: call_null_pointer_deref @ 0x10B28 */
int call_null_pointer_deref()
{
 int v0; // r4
 int v1; // r5
 int v3; // [sp+0h] [bp-18h] BYREF

 v3 = 42;
 v0 = param_null_pointer_deref((int)&v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 return v0 + v1;
}


/* Function: param_buffer_overflow_stack @ 0x10B98 */
void param_buffer_overflow_stack()
{
 ;
}


/* Function: param_buffer_overflow_heap @ 0x10B9C */
int param_buffer_overflow_heap(int a1)
{
 void *v2; // r0

 v2 = malloc(0x10u);
 if ( !v2 )
 return -2;
 free(v2);
 return a1;
}


/* Function: call_buffer_overflow @ 0x10BC8 */
int call_buffer_overflow()
{
 void *v0; // r0

 v0 = malloc(0x10u);
 if ( !v0 )
 return 8;
 free(v0);
 return 30;
}


/* Function: param_integer_overflow @ 0x10BF0 */
int param_integer_overflow(int a1, int a2)
{
 bool v2; // cc
 int result; // r0

 v2 = a1 <= 0;
 if ( a1 > 0 )
 v2 = a2 <= 0;
 result = a1 + a2;
 if ( !v2 )
 return result | (result >> 31);
 if ( ((result > 0) & ((a2 & (unsigned int)a1) >> 31)) != 0 )
 return -2;
 return result;
}


/* Function: call_integer_overflow @ 0x10C28 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x10C34 */
int param_undefined_behavior(int a1)
{
 return 2 * a1;
}


/* Function: call_undefined_behavior @ 0x10C3C */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x10C44 */
int param_implementation_defined()
{
 return 44;
}


/* Function: call_implementation_defined @ 0x10C4C */
int call_implementation_defined()
{
 return 44;
}


/* Function: test_obf_opt_edge @ 0x10C54 */
int test_obf_opt_edge()
{
 int v0; // r5
 int v1; // r0
 int v2; // r1
 int v3; // r2
 int v4; // r4
 char *v5; // r3
 int v6; // t1
 size_t v7; // r0
 int v8; // r0
 int v9; // r5
 int v10; // r4
 int v11; // r5
 int v12; // r4
 void *v13; // r0
 int v14; // r2
 int v16; // [sp+0h] [bp-38h] BYREF
 char dest[32]; // [sp+4h] [bp-34h] BYREF

 puts(s);
 _printf_chk(1, &unk_111B8, 10);
 v0 = 6;
 v1 = 5;
 do
 {
 v2 = v1 % v0;
 v1 = v0;
 v0 = v2;
 }
 while ( v2 );
 if ( v1 == 1 )
 v3 = 20;
 else
 v3 = 35;
 _printf_chk(1, &unk_111D4, v3);
 _printf_chk(1, &unk_111F0, 225);
 strncpy(dest, &encrypted_0, 0x1Fu);
 v4 = (unsigned char)dest[0];
 dest[31] = 0;
 if ( dest[0] )
 {
 v5 = dest;
 do
 {
 *v5 = v4 ^ 0x5A;
 v6 = (unsigned char)*++v5;
 v4 = (unsigned char)v6;
 }
 while ( v6 );
 v4 = (unsigned char)dest[0];
 }
 v7 = strlen(dest);
 _printf_chk(1, &unk_11210, v4 + v7);
 _printf_chk(1, &unk_1122C, 500500);
 _printf_chk(1, &unk_11258, 5050);
 v8 = call_vectorized_loop();
 _printf_chk(1, &unk_11280, v8);
 _printf_chk(1, &unk_112A8, 20);
 v9 = param_division_by_zero_constprop_1();
 v10 = param_division_by_zero_constprop_0();
 signal(8, 0);
 _printf_chk(1, &unk_112C8, v9 + v10);
 v16 = 42;
 v11 = param_null_pointer_deref((int)&v16);
 v12 = param_null_pointer_deref(0);
 signal(11, 0);
 _printf_chk(1, &unk_112E4, v11 + v12);
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
 _printf_chk(1, &unk_11304, v14);
 _printf_chk(1, &unk_11324, 2000000000);
 _printf_chk(1, &unk_11358, 10);
 return _printf_chk(1, &unk_11378, 44);
}



/* CRT stub function __divsi3 removed by preprocessor */




/* CRT stub function .divsi3_skip_div0_test removed by preprocessor */




/* CRT stub function __aeabi_idivmod removed by preprocessor */




/* CRT stub function __aeabi_ldiv0 removed by preprocessor */



/* Function: .term_proc @ 0x110EC */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_puts @ 0x2238C */

/* FAILED to decompile: __imp_strlen @ 0x22390 */

/* FAILED to decompile: __imp___longjmp_chk @ 0x22394 */

/* FAILED to decompile: __imp_raise @ 0x22398 */

/* FAILED to decompile: __imp__setjmp @ 0x2239C */

/* FAILED to decompile: __imp_free @ 0x223A0 */

/* FAILED to decompile: __imp_signal @ 0x223A4 */

/* FAILED to decompile: __imp_malloc @ 0x223A8 */

/* FAILED to decompile: __imp_strncpy @ 0x223AC */

/* FAILED to decompile: __imp___printf_chk @ 0x223B0 */

/* FAILED to decompile: __imp_abort @ 0x223B4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x223B8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x223BC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x223C0 */

/* Total functions decompiled: 49, failed: 14 */
