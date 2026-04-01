/* Auto-injected type definitions by preprocessor */
#include <signal.h>
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
// Include standard headers for size_t, ptrdiff_t, etc.
#include <stddef.h>
#include <setjmp.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Declare missing external functions
void _gmon_start(void);

// Declare missing external data
extern char _gmon_start__;
extern char encrypted_0;
extern char unk_2020;
extern char unk_2040;
extern char unk_208D;
extern char unk_20A9;
extern char unk_20C5;
extern char unk_20E2;
extern char unk_20FE;
extern char unk_2128;
extern char unk_214D;
extern char unk_2173;
extern char unk_2193;
extern char unk_21AF;
extern char unk_21CC;
extern char unk_21E9;
extern char unk_221A;
extern char unk_2237;
extern char asc_2060;

// Declare missing variables
int div_zero_caught = 0;
int segv_caught = 0;

// jmp_buf is defined by setjmp.h (included above)
jmp_buf main_jmp_buffer;
jmp_buf segv_jmp_buffer;
jmp_buf jmp_buffer;  // for param_division_by_zero

// CRT functions needed
void _do_global_ctors_aux(void);
void _do_global_dtors_aux(void);
void frame_dummy(void);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/7/7_gcc_Os_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm { jmp dword ptr [ebx+8] }
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
 uintptr_t tmp;
 __asm__("mov %%ebx, %0" : "=r"(tmp));
 (void)tmp;
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


/* Function: div_zero_handler @ 0x1341 */
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 __longjmp_chk(main_jmp_buffer, 1);
}


/* Function: segv_handler @ 0x136F */
void segv_handler(int sig)
{
 segv_caught = 1;
 __longjmp_chk(segv_jmp_buffer, 1);
}


/* Function: param_fake_branch @ 0x139D */
int param_fake_branch(int x)
{
 return x;
}


/* Function: call_fake_branch @ 0x13A9 */
int call_fake_branch()
{
 return 10;
}


/* Function: param_opaque_predicate @ 0x13B3 */
int param_opaque_predicate(int x)
{
 int v1; // esi
 int v2; // eax
 bool v3; // bl
 int v4; // edx
 int result; // eax

 v1 = x + 1;
 v2 = x;
 v3 = 2 * x + x * x + 1 == v1 * v1;
 while ( v1 )
 {
 v4 = v2 % v1;
 v2 = v1;
 v1 = v4;
 }
 if ( v2 != 1 )
 return 3 * x + 20;
 result = 2 * x + 10;
 if ( !v3 )
 return 3 * x + 20;
 return result;
}


/* Function: call_opaque_predicate @ 0x13FD */
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


/* Function: param_instruction_substitution @ 0x1413 */
int param_instruction_substitution(int x)
{
 return 15 * x + (x & 0xF) + ((unsigned int)x >> 1) + 6 * x;
}


/* Function: call_instruction_substitution @ 0x1434 */
int call_instruction_substitution()
{
 return 225;
}


/* Function: decrypt_string @ 0x143E */
const char * decrypt_string(const char *encrypted, char *buffer, size_t len, char key)
{
 char *i; // ecx
 char v5; // al

 strncpy(buffer, encrypted, len);
 buffer[len - 1] = 0;
 v5 = 0;
 for ( i = buffer; *i; i++ )
 {
 char tmp = key ^ *i;
 // Fix: this was a decompilation issue - *(i-1) isn't valid lvalue
 // Original code likely used a different variable
 v5 = tmp;
 }
 *buffer = v5;
 return buffer;
}


/* Function: param_string_encryption @ 0x1491 */
long long param_string_encryption()
{
 size_t v0; // eax
 long long result; // rax
 char decrypted[32]; // [esp+0h] [ebp-2Ch] BYREF
 unsigned int v3; // [esp+20h] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 decrypt_string(encrypted_0, decrypted, 0x20u, 90);
 v0 = strlen(decrypted);
 result = (long long)(unsigned int)(decrypted[0] + v0);
 return result;
}


/* Function: call_string_encryption @ 0x14F0 */
long long call_string_encryption()
{
 return param_string_encryption();
}


/* Function: param_tail_call_optimized @ 0x14F6 */
int param_tail_call_optimized(int n, int acc)
{
 int result; // eax

 result = acc;
 while ( n > 0 )
 result += n--;
 return result;
}


/* Function: call_tail_call_optimized @ 0x150E */
int call_tail_call_optimized()
{
 return 500500;
}


/* Function: param_non_tail_call @ 0x1518 */
int param_non_tail_call(int n)
{
 int v1; // edx

 v1 = 0;
 while ( n > 0 )
 v1 += n--;
 return v1;
}


/* Function: call_non_tail_call @ 0x1531 */
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


/* Function: param_vectorized_loop @ 0x1547 */
int param_vectorized_loop(int *a, int *b, int *c, int n)
{
 int i; // eax
 int v5; // eax
 int v6; // edx

 for ( i = 0; i < n; ++i )
 c[i] = a[i] + b[i];
 v5 = 0;
 v6 = 0;
 while ( v5 < n )
 v6 += c[v5++];
 return v6;
}


/* Function: call_vectorized_loop @ 0x1584 */
int call_vectorized_loop()
{
 int a[8]; // [esp+0h] [ebp-70h] BYREF
 int b[8]; // [esp+20h] [ebp-50h] BYREF
 int c[8]; // [esp+40h] [ebp-30h] BYREF
 unsigned int v4; // [esp+60h] [ebp-10h]

 v4 = __readgsdword(0x14u);
 memcpy(a, &unk_2020, sizeof(a));
 memcpy(b, &unk_2040, sizeof(b));
 memset(c, 0, sizeof(c));
 return param_vectorized_loop(a, b, c, 8);
}


/* Function: param_link_time_optimization @ 0x15FD */
int param_link_time_optimization(int x)
{
 return 2 * (x + 5);
}


/* Function: call_link_time_optimization @ 0x160E */
int call_link_time_optimization()
{
 return 20;
}


/* Function: param_division_by_zero @ 0x1618 */
int param_division_by_zero(int x)
{
 int v1; // edx
 int result; // eax

 signal(8, div_zero_handler);
 v1 = setjmp(jmp_buffer);
 result = -1;
 if ( !v1 )
 return 10 / x;
 return result;
}


/* Function: call_division_by_zero @ 0x1668 */
int call_division_by_zero()
{
 int v0; // esi
 int v1; // edi

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, 0);
 return v0 + v1;
}


/* Function: param_null_pointer_deref @ 0x16AD */
int param_null_pointer_deref(int *p)
{
 int v1; // edx
 int result; // eax

 signal(11, segv_handler);
 v1 = setjmp(segv_jmp_buffer);
 result = -1;
 if ( !v1 )
 return *p;
 return result;
}


/* Function: call_null_pointer_deref @ 0x16F9 */
long long call_null_pointer_deref()
{
 int v0; // esi
 int v1; // edi
 long long result; // rax
 int valid; // [esp+0h] [ebp-20h] BYREF
 unsigned int v4; // [esp+4h] [ebp-1Ch]

 v4 = __readgsdword(0x14u);
 valid = 42;
 v0 = param_null_pointer_deref(&valid);
 v1 = param_null_pointer_deref(0);
 signal(11, 0);
 result = (long long)(unsigned int)(v0 + v1);
 return result;
}


/* Function: param_buffer_overflow_stack @ 0x1763 */
int param_buffer_overflow_stack(int a1)
{
 return a1;
}


/* Function: param_buffer_overflow_heap @ 0x176F */
int param_buffer_overflow_heap(int x)
{
 void *v1; // eax
 int v2; // edx

 v1 = malloc(0x10u);
 v2 = -2;
 if ( v1 )
 {
 free(v1);
 return x;
 }
 return v2;
}


/* Function: call_buffer_overflow @ 0x17AE */
int call_buffer_overflow()
{
 return param_buffer_overflow_heap(20) + 10;
}


/* Function: param_integer_overflow @ 0x17C4 */
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


/* Function: call_integer_overflow @ 0x17F8 */
int call_integer_overflow()
{
 return 2000000000;
}


/* Function: param_undefined_behavior @ 0x1802 */
int param_undefined_behavior(int i)
{
 return 2 * i;
}


/* Function: call_undefined_behavior @ 0x1810 */
int call_undefined_behavior()
{
 return 10;
}


/* Function: param_implementation_defined @ 0x181A */
int param_implementation_defined()
{
 return 43;
}


/* Function: call_implementation_defined @ 0x1824 */
int call_implementation_defined()
{
 return 43;
}


/* Function: test_obf_opt_edge @ 0x182E */
void test_obf_opt_edge()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax

 puts(asc_2060);
 printf(&unk_208D, 10);
 v0 = call_opaque_predicate();
 printf(&unk_20A9, v0);
 printf(&unk_20C5, 225);
 v1 = param_string_encryption();
 printf(&unk_20E2, v1);
 v2 = call_tail_call_optimized();
 printf(&unk_20FE, v2);
 v3 = call_non_tail_call();
 printf(&unk_2128, v3);
 v4 = call_vectorized_loop();
 printf(&unk_214D, v4);
 printf(&unk_2173, 20);
 v5 = call_division_by_zero();
 printf(&unk_2193, v5);
 v6 = call_null_pointer_deref();
 printf(&unk_21AF, v6);
 v7 = call_buffer_overflow();
 printf(&unk_21CC, v7);
 printf(&unk_21E9, 2000000000);
 printf(&unk_221A, 10);
 printf(&unk_2237, 43);
}


/* Function: __stack_chk_fail_local @ 0x1990 */
void _stack_chk_fail_local()
{
 /* Stack protection violation - abort */
 while(1) {}
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x19FC */
void term_proc()
{
 _do_global_dtors_aux();
}



