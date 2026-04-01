// Angr Decompilation of 7_gcc_Os_g
// Platform: AMD64

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>

/* CRT stub function _init removed by preprocessor */

/* CRT stub function definitions */
void frame_dummy() {}
void register_tm_clones() {}
void deregister_tm_clones() {}

/* Global variables */
unsigned int div_zero_caught = 0;
unsigned int segv_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;


// Function: sub_401020 at 0x401020
extern unsigned long long g_403f78;
extern unsigned long long g_403f80;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_403f78;
 /* computed goto - not supported in C */
 exit(0);
}


// Function: sub_40102d at 0x40102d
void sub_40102d()
{
 sub_401030();
 return;
}


// Function: sub_401030 at 0x401030
void sub_401030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_401020();
 return;
}


// Function: sub_40103f at 0x40103f
void sub_40103f()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_401020();
 return;
}


// Function: sub_40104f at 0x40104f
void sub_40104f()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_401020();
 return;
}


// Function: sub_40105f at 0x40105f
void sub_40105f()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
void sub_401060()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 3;
 sub_401020();
 return;
}


// Function: sub_40106f at 0x40106f
void sub_40106f()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
void sub_401070()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 4;
 sub_401020();
 return;
}


// Function: sub_40107f at 0x40107f
void sub_40107f()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
void sub_401080()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 5;
 sub_401020();
 return;
}


// Function: sub_40108f at 0x40108f
void sub_40108f()
{
 sub_401090();
 return;
}


// Function: sub_401090 at 0x401090
void sub_401090()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 6;
 sub_401020();
 return;
}


// Function: sub_40109f at 0x40109f
void sub_40109f()
{
 sub_4010a0();
 return;
}


// Function: sub_4010a0 at 0x4010a0
void sub_4010a0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 7;
 sub_401020();
 return;
}


// Function: sub_4010af at 0x4010af
void sub_4010af()
{
 sub_4010b0();
 return;
}


// Function: sub_4010b0 at 0x4010b0
void sub_4010b0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 8;
 sub_401020();
 return;
}


// Function: sub_4010bf at 0x4010bf
void sub_4010bf()
{
 sub_4010c0();
 return;
}


// Function: sub_4010c0 at 0x4010c0
void sub_4010c0()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 9;
 sub_401020();
 return;
}


// Function: sub_4010cf at 0x4010cf
void sub_4010cf()
{
 __cxa_finalize();
 return;
}


// Function: main at 0x401180
unsigned int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011b5 at 0x4011b5
void sub_4011b5()
{
 /* [D] Unsupported jumpkind Ijk_SigTRAP at address 4198837 */
}


// Function: sub_4011b6 at 0x4011b6
void sub_4011b6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4011e9 at 0x4011e9
void sub_4011e9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */







// Function: sub_401265 at 0x401265
void sub_401265()
{
}


// Function: sub_401269 at 0x401269
void sub_401269()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: div_zero_handler at 0x401279
extern unsigned int div_zero_caught;
extern jmp_buf jmp_buffer;

long long div_zero_handler()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 div_zero_caught = 1;
 __longjmp_chk(&jmp_buffer, 1); /* do not return */
}


// Function: segv_handler at 0x40129b
extern jmp_buf segv_buffer;
extern unsigned int segv_caught;

long long segv_handler()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 segv_caught = 1;
 __longjmp_chk(&segv_buffer, 1); /* do not return */
}


// Function: param_fake_branch at 0x4012bd
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: call_fake_branch at 0x4012c4
unsigned long long call_fake_branch()
{
 return 10;
}


// Function: param_opaque_predicate at 0x4012ce
int param_opaque_predicate(unsigned int a0)
{
 unsigned long long v1; // rcx
 unsigned int v2; // eax
 unsigned long long v3; // rcx
 unsigned long long v4; // rcx
 unsigned int v5; // eax

 v1 = a0 + 1;
 v2 = a0;
 v3 = v1;
 while (true)
 {
 v4 = v3;
 v5 = v2;
 if (!(unsigned int)v4)
 break;
 v2 = v4;
 v3 = ((((((unsigned long long)v5 >> 31) << 32) | (unsigned long long)v5) % (v4 & 4294967295)) | ((((unsigned long long)v5 >> 31) << 32) | (unsigned long long)v5) / (v4 & 4294967295)) >> 32;
 }
 if (v5 == 1 && a0 * 2 + a0 * a0 + 1 == (unsigned int)v1 * (unsigned int)v1)
 return a0 * 2 + 10;
 return a0 * 3 + 20;
}


// Function: call_opaque_predicate at 0x40130f
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x40131a
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 6 + (a0 >> 1) + (a0 & 15) + a0 * 15;
}


// Function: call_instruction_substitution at 0x401334
unsigned long long call_instruction_substitution()
{
 return 225;
}


// Function: decrypt_string at 0x40133e
void* decrypt_string(char *a0, char *a1, unsigned long a2, unsigned int a3, unsigned long long a4)
{
 void* dst; // rax
 void* cur; // rdx
 void* v4; // rax
 void* v5; // rax
 void* v6; // rax
 unsigned long long v0; // [bp-0x18]

 v0 = a4;
 dst = strncpy(a1, a0, a2);
 *(-1 + (char *)dst + a2) = 0;
 cur = dst;
 v4 = dst;
 while (true)
 {
 v5 = v4;
 if (!*((char *)cur))
 break;
 v6 = ((unsigned int)v5 & 0xffffff00 | *((char *)cur)) ^ a3;
 cur += 1;
 *((char *)&cur[1]) = (char)v6;
 v4 = v6;
 }
 return dst;
}


// Function: param_string_encryption at 0x40137b
extern char encrypted_0;

long long param_string_encryption(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long long a4)
{
 char v0[32]; // [bp-0x30]
 char encrypted_0[32] = "EncryptedStringDataPlaceholder"; // Placeholder for encrypted data

 decrypt_string(encrypted_0, &v0, 32, 90, a4);
 return (unsigned long long)v0 + strlen(&v0);
}


// Function: call_string_encryption at 0x4013e0
unsigned long long call_string_encryption()
{
 unsigned int v1; // rdi
 unsigned int v2; // rsi
 unsigned int v3; // rdx
 unsigned int v4; // rcx
 unsigned long long v5; // r8

 return param_string_encryption(v1, v2, v3, v4, v5);
}


// Function: param_tail_call_optimized at 0x4013e8
int param_tail_call_optimized(unsigned long long i, unsigned int a1)
{
 unsigned long v1; // rax

 for (v1 = a1; (unsigned int)i > 0; i = (unsigned int)i - 1)
 {
 v1 += i;
 }
 return v1;
}


// Function: call_tail_call_optimized at 0x4013f9
unsigned long long call_tail_call_optimized()
{
 return 500500;
}


// Function: param_non_tail_call at 0x401403
unsigned long long param_non_tail_call(unsigned long long i)
{
 unsigned long long v1; // rax

 for (v1 = 0; (unsigned int)i > 0; i = (unsigned int)i - 1)
 {
 v1 += i;
 }
 return v1;
}


// Function: call_non_tail_call at 0x401414
unsigned long long call_non_tail_call()
{
 return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x40141f
unsigned int param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned long ptr, unsigned int a3)
{
 unsigned long long idx; // rax
 unsigned long long index; // rax
 unsigned int v3; // r8d

 for (idx = 0; a3 > (unsigned int)idx; idx += 1)
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a1 + idx * 4)) + *((int *)(a0 + idx * 4));
 }
 index = 0;
 for (v3 = 0; a3 > (unsigned int)index; index += 1)
 {
 v3 += *((int *)(ptr + index * 4));
 }
 return v3;
}


// Function: call_vectorized_loop at 0x401450
int call_vectorized_loop()
{
 unsigned long long v10; // rcx
 unsigned int *cur; // rdi
 unsigned long v0; // [bp-0x70]
 unsigned long long v1; // [bp-0x68]
 unsigned long long v2; // [bp-0x60]
 unsigned long long v3; // [bp-0x58]
 unsigned long long v4; // [bp-0x50]
 unsigned long long v5; // [bp-0x48]
 unsigned long long v6; // [bp-0x40]
 unsigned long long v7; // [bp-0x38]
 char v8; // [bp-0x30]

 v10 = 8;
 cur = &v8;
 v0 = 8589934593;
 v1 = 17179869187;
 v2 = 25769803781;
 v3 = 34359738375;
 v4 = 30064771080;
 v5 = 21474836486;
 v6 = 12884901892;
 for (v7 = 4294967298; v10; cur += 1)
 {
 v10 -= 1;
 *(cur) = 0;
 }
 return param_vectorized_loop(&v0, &v4, &v8, 8);
}


// Function: param_link_time_optimization at 0x40151b
int param_link_time_optimization(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: call_link_time_optimization at 0x401524
unsigned long long call_link_time_optimization()
{
 return 20;
}


// Function: param_division_by_zero at 0x40152e
extern jmp_buf jmp_buffer;

unsigned long long param_division_by_zero(unsigned int a0)
{
 signal(8, div_zero_handler);
 if (_setjmp(&jmp_buffer))
 return 4294967295;
 return ((unsigned long long)((((0ULL << 32) | 10ULL) % a0) | (((0ULL << 32) | 10ULL) / a0))) & 4294967295;
}


// Function: call_division_by_zero at 0x401575
int call_division_by_zero()
{
 unsigned long long v2; // rax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned long long v0; // [bp-0x18]

 v0 = v2;
 v3 = param_division_by_zero(5);
 v4 = param_division_by_zero(0);
 signal(8, NULL);
 return v3 + v4;
}


// Function: param_null_pointer_deref at 0x4015a4
extern jmp_buf segv_buffer;

unsigned long long param_null_pointer_deref(unsigned int *a0)
{
 signal(11, segv_handler);
 if (_setjmp(&segv_buffer))
 return 4294967295;
 return *(a0);
}


// Function: call_null_pointer_deref at 0x4015e9
long long call_null_pointer_deref()
{
 unsigned long long v2; // rax
 unsigned long long v3; // rax
 unsigned int v0; // [bp-0x24]

 v0 = 42;
 v2 = param_null_pointer_deref(&v0);
 v3 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 return (v2 & 4294967295) + (v3 & 4294967295);
}


// Function: param_buffer_overflow_stack at 0x40164b
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: param_buffer_overflow_heap at 0x401652
unsigned long long param_buffer_overflow_heap(unsigned int a0)
{
 void* ptr; // rax

 ptr = malloc(16);
 if (!ptr)
 return 4294967294;
 free(ptr);
 return a0;
}


// Function: call_buffer_overflow at 0x401679
int call_buffer_overflow()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 return (unsigned int)param_buffer_overflow_heap(20) + 10;
}


// Function: param_integer_overflow at 0x40168d
unsigned long long param_integer_overflow(unsigned long a0, unsigned long a1)
{
 unsigned long long v1; // rax

 v1 = a0 + a1;
 if ((unsigned int)a0 > 0 && (unsigned int)a1 > 0)
 {
 if ((unsigned int)v1 < 0)
 return 4294967295;
 return v1 & 4294967295;
 }
 if (((unsigned int)a1 & (unsigned int)a0) >= 0)
 {
 return v1;
 }
 else if ((unsigned int)v1 > 0)
 {
 return 4294967294;
 }
 else
 {
 return v1 & 4294967295;
 }
}


// Function: call_integer_overflow at 0x4016b6
unsigned long long call_integer_overflow()
{
 return 0x77359400;
}


// Function: param_undefined_behavior at 0x4016c0
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_undefined_behavior at 0x4016c8
unsigned long long call_undefined_behavior()
{
 return 10;
}


// Function: param_implementation_defined at 0x4016d2
unsigned long long param_implementation_defined()
{
 return 47;
}


// Function: call_implementation_defined at 0x4016dc
unsigned long long call_implementation_defined()
{
 return 47;
}


// Function: test_obf_opt_edge at 0x4016e6
static char g_402004[] = "Test: obf_opt_edge\n";
static char g_402031[] = "Fake branch result: %d\n";
static char g_40204d[] = "Opaque predicate result: %d\n";
static char g_402069[] = "Instruction substitution: %d\n";
static char g_402086[] = "String encryption: %d\n";
static char g_4020f1[] = "Vectorized loop result: %d\n";
static char g_402117[] = "Link time optimization: %d\n";
static char g_402137[] = "Division by zero result: %d\n";
static char g_402153[] = "Null pointer deref result: %d\n";
static char g_402170[] = "Buffer overflow result: %d\n";
static char g_40218d[] = "Integer overflow result: %d\n";
static char g_4021be[] = "Undefined behavior: %d\n";
static char g_4021db[] = "Implementation defined: %d\n";

int test_obf_opt_edge()
{
 unsigned long long v2; // rax
 unsigned int v4; // rdi
 char *v5; // rsi
 unsigned int v6; // rdx
 unsigned int v7; // rcx
 unsigned long long v8; // r8
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 puts(&g_402004);
 __printf_chk(1, &g_402031, 10);
 __printf_chk(1, &g_40204d, call_opaque_predicate() & 4294967295);
 __printf_chk(1, &g_402069, 225);
 __printf_chk(1, &g_402086, param_string_encryption(v4, v5, v6, v7, v8) & 4294967295);
 call_tail_call_optimized();
 __printf_chk(v4, v5);
 call_non_tail_call();
 __printf_chk(1, v5);
 __printf_chk(1, &g_4020f1, call_vectorized_loop() & 4294967295);
 __printf_chk(1, &g_402117, 20);
 __printf_chk(1, &g_402137, call_division_by_zero() & 4294967295);
 __printf_chk(1, &g_402153, call_null_pointer_deref() & 4294967295);
 __printf_chk(1, &g_402170, call_buffer_overflow() & 4294967295);
 __printf_chk(1, &g_40218d, 0x77359400);
 __printf_chk(1, &g_4021be, 10);
 return __printf_chk(1, &g_4021db, 47);
}



/* CRT stub function _fini removed by preprocessor */


