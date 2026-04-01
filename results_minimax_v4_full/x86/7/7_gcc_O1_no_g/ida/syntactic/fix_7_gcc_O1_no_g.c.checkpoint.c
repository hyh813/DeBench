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
/* _Bool is built-in in C99+, no typedef needed */
typedef _Bool bool;
typedef void (*__sighandler_t)(int);
typedef int jmp_buf[11];

/* x86 intrinsic for reading GS segment register (stack canary) */
static inline unsigned int __readgsdword(unsigned int offset)
{
 unsigned int value;
 __asm__ volatile ("movl %%gs:%1, %0" : "=r" (value) : "m" (*(const unsigned int *)offset));
 return value;
}

/* External declarations */
void _gmon_start__(void);
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
int div_zero_caught;
int segv_caught;

/* CRT stub function */
void _do_global_dtors_aux(void)
{
}

/* String constants from .rodata section */
char encrypted_0[32] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
char asc_2008[] = "Testing obfuscation optimizations:\n";
char unk_212F[] = "Opaque predicate: %d\n";
char unk_214B[] = "Instruction substitution: %d\n";
char unk_2167[] = "String encryption: %d\n";
char unk_2184[] = "String encryption (runtime): %ld\n";
char unk_2038[] = "Tail call optimization: %d\n";
char unk_2064[] = "Non-tail call: %d\n";
char unk_208C[] = "Vectorized loop: %d\n";
char unk_20B4[] = "Link-time optimization: %d\n";
char unk_21A0[] = "Division by zero: %d\n";
char unk_21BC[] = "Null pointer dereference: %ld\n";
char unk_21D9[] = "Buffer overflow: %d\n";
char unk_20D4[] = "Integer overflow: %u\n";
char unk_21F6[] = "Undefined behavior: %d\n";
char unk_2108[] = "Implementation-defined: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/7/7_gcc_O1_no_g
 * Processor: pc
 */

/* CRT stub function init_proc removed by preprocessor */


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *%%ebx" : : "b" (8));
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
void div_zero_handler()
{
 div_zero_caught = 1;
 __longjmp_chk(&jmp_buffer, 1);
}


/* Function: segv_handler @ 0x134C */
void segv_handler()
{
 segv_caught = 1;
 __longjmp_chk(&segv_buffer, 1);
}


/* Function: param_fake_branch @ 0x1377 */
int param_fake_branch(int a1)
{
 return a1;
}


/* Function: call_fake_branch @ 0x1380 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x138A */
int param_opaque_predicate(int a1)
{
 int v1; // ecx
 bool v2; // bp
 int v3; // eax
 int v4; // ebx

 v1 = a1 + 1;
 if ( a1 == -1 )
 return 3 * a1 + 20;
 v2 = 2 * a1 + a1 * a1 + 1 == v1 * v1;
 v3 = a1;
 do
 {
 v4 = v1;
 v1 = v3 % v1;
 v3 = v4;
 }
 while ( v1 );
 if ( v4 == 1 && v2 )
 return 2 * a1 + 10;
 else
 return 3 * a1 + 20;
}


/* Function: call_opaque_predicate @ 0x13DD */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x13EC */
int param_instruction_substitution(unsigned int a1)
{
 return 15 * a1 + (a1 & 0xF) + (a1 >> 1) + 6 * a1;
}


/* Function: call_instruction_substitution @ 0x140E */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x1418 */
char * decrypt_string(char *src, char *dest, size_t n, char a4)
{
 char v4; // al
 char *v5; // edx

 strncpy(dest, src, n);
 dest[n - 1] = 0;
 v4 = *dest;
 if ( *dest )
 {
 v5 = dest;
 do
 {
 *v5++ = a4 ^ v4;
 v4 = *v5;
 }
 while ( *v5 );
 }
 return dest;
}


/* Function: param_string_encryption @ 0x146F */
long long param_string_encryption()
{
 size_t v0; // eax
 unsigned int v1; // eax
 char dest[32]; // [esp+1Ch] [ebp-30h] BYREF
 unsigned int v3; // [esp+3Ch] [ebp-10h]
 unsigned int canary; // [esp+3Ch] [ebp-10h]
 long long result; // rax

 canary = __readgsdword(0x14u);
 decrypt_string(encrypted_0, dest, 0x20u, 90);
 v0 = strlen(dest);
 v1 = (unsigned int)(v0 + dest[0]);
 result = (unsigned int)(v0 + dest[0]) | ((long long)(canary - __readgsdword(0x14u)) << 32);
 return result;
}


/* Function: call_string_encryption @ 0x14D0 */
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x14E0 */
int param_tail_call_optimized(int a1, int a2)
{
 int result; // eax

 result = a2;
 if ( a1 > 0 )
 return param_tail_call_optimized(a1 - 1, a1 + a2);
 return result;
}


/* Function: call_tail_call_optimized @ 0x150B */
int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


/* Function: param_non_tail_call @ 0x1522 */
int param_non_tail_call(int a1)
{
 int result; // eax

 result = 0;
 if ( a1 > 0 )
 return a1 + param_non_tail_call(a1 - 1);
 return result;
}


/* Function: call_non_tail_call @ 0x154D */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x155F */
int param_vectorized_loop(int a1, int a2, unsigned int *a3, int a4)
{
 int i; // eax
 unsigned int *v5; // edx
 unsigned int *v6; // ecx
 int result; // eax

 if ( a4 <= 0 )
 return 0;
 for ( i = 0; i != a4; ++i )
 a3[i] = *(unsigned int *)(a1 + 4 * i) + *(unsigned int *)(a2 + 4 * i);
 v5 = a3;
 v6 = &a3[i];
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
 unsigned int v2[8]; // [esp+Ch] [ebp-70h] BYREF
 unsigned int v3[8]; // [esp+2Ch] [ebp-50h] BYREF
 unsigned int v4[12]; // [esp+4Ch] [ebp-30h] BYREF

 v4[8] = __readgsdword(0x14u);
 v0 = 0;
 v2[0] = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 v2[5] = 6;
 v2[6] = 7;
 v2[7] = 8;
 v3[0] = 8;
 v3[1] = 7;
 v3[2] = 6;
 v3[3] = 5;
 v3[4] = 4;
 v3[5] = 3;
 v3[6] = 2;
 v3[7] = 1;
 do
 v4[v0++] = 0;
 while ( v0 < 8 );
 return param_vectorized_loop((int)v2, (int)v3, v4, 8);
}


/* Function: param_link_time_optimization @ 0x1684 */
int param_link_time_optimization(int a1)
{
 return 2 * a1 + 10;
}


/* Function: call_link_time_optimization @ 0x1691 */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x169B */
int param_division_by_zero(int a1)
{
 signal(8, (__sighandler_t)div_zero_handler);
 if ( _setjmp(&jmp_buffer) )
 return -1;
 else
 return 10 / a1;
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
int param_null_pointer_deref(int a1)
{
 signal(11, (__sighandler_t)segv_handler);
 if ( _setjmp(&segv_buffer) )
 return -1;
 else
 return *(unsigned int *)a1;
}


/* Function: call_null_pointer_deref @ 0x1779 */
long long call_null_pointer_deref()
{
 int v0; // esi
 int v1; // edi
 union { long long ll; unsigned int i[2]; } result; // rax
 int v3; // [esp+18h] [ebp-14h] BYREF
 unsigned int v4; // [esp+1Ch] [ebp-10h]

 v4 = __readgsdword(0x14u);
 v3 = 42;
 v0 = param_null_pointer_deref((int)&v3);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 result.i[0] = v0 + v1;
 result.i[1] = v4 - __readgsdword(0x14u);
 return result.ll;
}


/* Function: param_buffer_overflow_stack @ 0x17E7 */
int param_buffer_overflow_stack(int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x17F0 */
int param_buffer_overflow_heap(int a1)
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
 return a1;
}


/* Function: call_buffer_overflow @ 0x183A */
int call_buffer_overflow()
{
 return param_buffer_overflow_heap(20) + 10;
}


/* Function: param_integer_overflow @ 0x184F */
int param_integer_overflow(int a1, int a2)
{
 int result; // eax

 result = a1 + a2;
 if ( a2 > 0 && a1 > 0 && result < 0 )
 return -1;
 if ( (a2 & a1) < 0 && result > 0 )
 return -2;
 return result;
}


/* Function: call_integer_overflow @ 0x1890 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x189A */
int param_undefined_behavior(int a1)
{
 return 2 * a1;
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


/* Function: test_obf_opt_edge @ 0x18C3 */
int test_obf_opt_edge()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax

 puts(asc_2008);
 __printf_chk(1, &unk_212F, 10);
 v0 = call_opaque_predicate();
 __printf_chk(1, &unk_214B, v0);
 __printf_chk(1, &unk_2167, 225);
 v1 = param_string_encryption();
 __printf_chk(1, &unk_2184, v1);
 v2 = call_tail_call_optimized();
 __printf_chk(1, &unk_2038, v2);
 v3 = call_non_tail_call();
 __printf_chk(1, &unk_2064, v3);
 v4 = call_vectorized_loop();
 __printf_chk(1, &unk_208C, v4);
 __printf_chk(1, &unk_20B4, 20);
 v5 = call_division_by_zero();
 __printf_chk(1, &unk_21A0, v5);
 v6 = call_null_pointer_deref();
 __printf_chk(1, &unk_21BC, v6);
 v7 = call_buffer_overflow();
 __printf_chk(1, &unk_21D9, v7);
 __printf_chk(1, &unk_20D4, 2000000000);
 __printf_chk(1, &unk_21F6, 10);
 return __printf_chk(1, &unk_2108, 43);
}


/* Function: main @ 0x1A17 */
int main(int argc, const char **argv, const char **envp)
{
 test_obf_opt_edge();
 return 0;
}


/* Function: __stack_chk_fail_local @ 0x1A30 */
void _stack_chk_fail_local()
{
 /* Empty stub - original contained complex GOT reference */
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1A9C */
void term_proc()
{
 _do_global_dtors_aux();
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
