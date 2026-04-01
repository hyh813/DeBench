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

/* Missing type definitions */
typedef unsigned long __sigset_t;
typedef struct { unsigned long __val[2]; } __fsid_t;
typedef void (*__sighandler_t)(int);
typedef _Bool bool;

typedef struct __jmp_buf_tag {
    __sigset_t __old;
    int __count;
    struct __jmp_buf_tag *__prev;
} __jmp_buf_tag;

typedef struct __jmp_buf_tag jmp_buf[1];

/* Forward declarations for missing CRT symbols */

/* Inline intrinsic for GS segment register read (stack canary) */
static inline unsigned int __readgsdword(unsigned int offset)
{
    unsigned int result;
    __asm__ volatile("movl %%gs:%1,%0" : "=r" (result) : "m" (*(unsigned int *)(offset)));
    return result;
}

/* Global variables */
int div_zero_caught;
int segv_caught;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
const char encrypted_0[] = "\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x42\x00";

/* Data symbol references */
static const char asc_2008[] = "Starting optimization tests...";
static const char unk_212F[] = "Opaque predicate: %d\n";
static const char unk_214B[] = "Instruction substitution: %d\n";
static const char unk_2167[] = "Vectorized loop: %d\n";
static const char unk_2184[] = "String encryption: %d\n";
static const char unk_2038[] = "Tail call optimized: %d\n";
static const char unk_2064[] = "Non-tail call: %d\n";
static const char unk_208C[] = "Link time optimization: %d\n";
static const char unk_20B4[] = "Division by zero: %d\n";
static const char unk_21A0[] = "Null pointer deref: %d\n";
static const char unk_21BC[] = "Buffer overflow: %d\n";
static const char unk_21D9[] = "Integer overflow: %d\n";
static const char unk_20D4[] = "Undefined behavior: %d\n";
static const char unk_21F6[] = "Implementation defined: %d\n";
static const char unk_2108[] = "All tests completed!\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/7/7_gcc_O2_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *8(%ebx)");
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


/* Function: main @ 0x11B0 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_11FC @ 0x11FC */
void sub_11FC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1200 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1339 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x133D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: div_zero_handler @ 0x1350 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(jmp_buffer, 1);
}


/* Function: segv_handler @ 0x1380 */
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x13B0 */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x13C0 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x13D0 */
int param_opaque_predicate(int x)
{
 int v1; // edx
 bool v2; // di
 int v3; // eax
 int v4; // ecx

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


/* Function: call_opaque_predicate @ 0x1430 */
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


/* Function: param_instruction_substitution @ 0x1460 */
int param_instruction_substitution(int x)
{
 return 15 * x + (x & 0xF) + ((unsigned int)x >> 1) + 6 * x;
}


/* Function: call_instruction_substitution @ 0x1490 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x14A0 */
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


/* Function: param_string_encryption @ 0x1500 */
long long param_string_encryption()
{
 char v0; // dl
 char *v1; // eax
 long long result; // rax
 char decrypted[32]; // [esp+Eh] [ebp-30h] BYREF
 unsigned int v4; // [esp+2Eh] [ebp-10h]

 v4 = __readgsdword(0x14u);
 strncpy(decrypted, encrypted_0, 0x1Fu);
 v0 = decrypted[0];
 decrypted[31] = 0;
 if ( decrypted[0] )
 {
 v1 = decrypted;
 do
 {
 *v1++ = v0 ^ 0x5A;
 v0 = *v1;
 }
 while ( *v1 );
 v0 = decrypted[0];
 }
 result = v0 + strlen(decrypted);
 return result;
}


/* Function: call_string_encryption @ 0x15A0 */
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x15B0 */
int param_tail_call_optimized(int n, int acc)
{
 int v2; // eax

 v2 = n;
 if ( n > 0 )
 {
 do
 acc += v2--;
 while ( v2 );
 }
 return acc;
}


/* Function: call_tail_call_optimized @ 0x15D0 */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x15E0 */
int param_non_tail_call(int n)
{
 int v1; // eax
 int v2; // edx

 v1 = n;
 v2 = 0;
 if ( n > 0 )
 {
 do
 v2 += v1--;
 while ( v1 );
 }
 return v2;
}


/* Function: call_non_tail_call @ 0x1600 */
int call_non_tail_call()
{
 return 5050;
}


/* Function: param_vectorized_loop @ 0x1610 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 int i; // eax
 int *v5; // eax
 int v6; // edx

 if ( n <= 0 )
 return 0;
 for ( i = 0; i != n; ++i )
 c[i] = a[i] + b[i];
 v5 = c;
 v6 = 0;
 do
 v6 += *v5++;
 while ( &c[n] != v5 );
 return v6;
}


/* Function: call_vectorized_loop @ 0x1670 */
int call_vectorized_loop()
{
 unsigned int v0; // eax
 int v1; // ebx
 int v2; // ecx
 int i; // eax
 int *v4; // eax
 int v5; // edx
 int a[8]; // [esp+Ch] [ebp-70h]
 int b[8]; // [esp+2Ch] [ebp-50h]
 int c[8]; // [esp+4Ch] [ebp-30h] BYREF
 unsigned int v10; // [esp+6Ch] [ebp-10h] BYREF

 v10 = __readgsdword(0x14u);
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
 v1 = 8;
 v2 = 1;
 for ( i = 0; ; v1 = b[i] )
 {
 c[i++] = v1 + v2;
 if ( i == 8 )
 break;
 v2 = a[i];
 }
 v4 = c;
 v5 = 0;
 do
 v5 += *v4++;
 while ( &v10 != (unsigned int *)v4 );
 return v5;
}


/* Function: param_link_time_optimization @ 0x1770 */
int param_link_time_optimization(int x)
{
 return 2 * x + 10;
}


/* Function: call_link_time_optimization @ 0x1780 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x1790 */
int param_division_by_zero(int x)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(jmp_buffer) )
 return -1;
 else
 return 10 / x;
}


/* Function: call_division_by_zero @ 0x17F0 */
int call_division_by_zero()
{
 int v0; // esi
 int v1; // edi

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0x1840 */
int param_null_pointer_deref(int *p)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(segv_buffer) )
 return -1;
 else
 return *p;
}


/* Function: call_null_pointer_deref @ 0x1890 */
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
 result = v0 + v1;
 return result;
}


/* Function: param_buffer_overflow_stack @ 0x1900 */
int param_buffer_overflow_stack(int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x1910 */
int param_buffer_overflow_heap(int x)
{
 void *v1; // eax

 v1 = malloc(0x10u);
 if ( !v1 )
 return -2;
 free(v1);
 return x;
}


/* Function: call_buffer_overflow @ 0x1950 */
int call_buffer_overflow()
{
 void *v0; // eax

 v0 = malloc(0x10u);
 if ( !v0 )
 return 8;
 free(v0);
 return 30;
}


/* Function: param_integer_overflow @ 0x1990 */
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


/* Function: call_integer_overflow @ 0x19D0 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x19E0 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0x19F0 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x1A00 */
int param_implementation_defined()
{
 return 43;
}


/* Function: call_implementation_defined @ 0x1A10 */
int call_implementation_defined()
{
 return 43;
}


/* Function: test_obf_opt_edge @ 0x1A20 */
void test_obf_opt_edge()
{
 int v0; // edx
 int v1; // eax
 int v2; // ecx
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // esi
 int v7; // esi
 int v8; // esi
 int v9; // esi
 void *v10; // eax
 int v11; // eax
 int p[5]; // [esp+18h] [ebp-14h] BYREF

 p[1] = __readgsdword(0x14u);
 puts(asc_2008);
 __printf_chk(1, &unk_212F, 10);
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
 __printf_chk(1, &unk_214B, v3);
 __printf_chk(1, &unk_2167, 225);
 v4 = param_string_encryption();
 __printf_chk(1, &unk_2184, v4);
 __printf_chk(1, &unk_2038, 500500);
 __printf_chk(1, &unk_2064, 5050);
 v5 = call_vectorized_loop();
 __printf_chk(1, &unk_208C, v5);
 __printf_chk(1, &unk_20B4, 20);
 v6 = param_division_by_zero(5);
 v7 = param_division_by_zero(0) + v6;
 signal(8, 0);
 __printf_chk(1, &unk_21A0, v7);
 p[0] = 42;
 v8 = param_null_pointer_deref(p);
 v9 = param_null_pointer_deref(0) + v8;
 signal(11, 0);
 __printf_chk(1, &unk_21BC, v9);
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
 __printf_chk(1, &unk_21D9, v11);
 __printf_chk(1, &unk_20D4, 2000000000);
 __printf_chk(1, &unk_21F6, 10);
 __printf_chk(1, &unk_2108, 43);
}


/* Function: __stack_chk_fail_local @ 0x1C40 */
void _stack_chk_fail_local()
{
 __asm__ volatile("addl $_GLOBAL_OFFSET_TABLE_-., %ebx");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






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
