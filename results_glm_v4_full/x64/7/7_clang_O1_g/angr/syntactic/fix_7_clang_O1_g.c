// Angr Decompilation of 7_clang_O1_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <stdlib.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 { void *dummy; } struct_0;

/* Forward declarations for functions called before definition */
long long sub_40102c(char *dest, char *src, unsigned long n);
int param_fake_branch(unsigned int a0);
unsigned long long call_fake_branch();
long long param_opaque_predicate(unsigned int a0);
unsigned long long call_opaque_predicate();
int param_instruction_substitution(unsigned int a0);
unsigned long long call_instruction_substitution();
char* decrypt_string(char *a0, char *p, unsigned long a2, char a3);
int param_string_encryption();
int call_string_encryption();
long long param_tail_call_optimized(unsigned int a0, unsigned int a1);
unsigned long long call_tail_call_optimized();
unsigned long long param_non_tail_call(unsigned int a0);
unsigned long long call_non_tail_call();
unsigned long long param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned long ptr, unsigned int a3);
unsigned long long call_vectorized_loop();
int param_link_time_optimization(unsigned int a0);
unsigned long long call_link_time_optimization();
void div_zero_handler(int sig);
unsigned int param_division_by_zero(unsigned long a0);
int call_division_by_zero();
void segv_handler(int sig);
unsigned int param_null_pointer_deref(unsigned int *a0);
int call_null_pointer_deref();
int param_buffer_overflow_stack(unsigned int a0);
int param_buffer_overflow_heap(unsigned int a0);
unsigned long long call_buffer_overflow();
unsigned long long param_integer_overflow(unsigned int a0, unsigned int a1);
unsigned long long call_integer_overflow();
unsigned int param_undefined_behavior(unsigned int a0);
unsigned long long call_undefined_behavior();
unsigned long long param_implementation_defined();
unsigned long long call_implementation_defined();
int test_obf_opt_edge();
unsigned int main();

/* CRT stub function declarations */
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

/* Global variable definitions */
unsigned int div_zero_caught = 0;
jmp_buf jmp_buffer;
unsigned int segv_caught = 0;
jmp_buf segv_buffer;

/* Global data definitions */
const int g_402010[8] = {1, 2, 3, 4, 5, 6, 7, 8};
const int g_402030[8] = {10, 20, 30, 40, 50, 60, 70, 80};
const char g_402050[] = "%d\n";
const char g_40206c[] = "%d\n";
const char g_402088[] = "%d\n";
const char g_4020a5[] = "%s\n";
const char g_4020c1[] = "%llu\n";
const char g_4020eb[] = "%llu\n";
const char g_402110[] = "%u\n";
const char g_402136[] = "%d\n";
const char g_402156[] = "%u\n";
const char g_402172[] = "%u\n";
const char g_40218f[] = "%d\n";
const char g_4021ac[] = "%llu\n";
const char g_4021dd[] = "%d\n";
const char g_4021fa[] = "%d\n";
const char g_402221[] = "Testing obfuscation and optimization edge cases:\n";
char param_string_encryption_encrypted[32] = {0};

extern unsigned long long g_404008;
extern unsigned long long g_404010;

// Function: sub_401020 at 0x401020
extern unsigned long long g_404008;
extern unsigned long long g_404010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 sub_40102c(NULL, NULL, 0);
}


// Function: sub_40102c at 0x40102c
long long sub_40102c(char *dest, char *src, unsigned long n)
{
 return (long long)strncpy(dest, src, n);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010d5 at 0x4010d5
void sub_4010d5()
{
 __builtin_trap();
}


// Function: sub_4010d6 at 0x4010d6
void sub_4010d6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

void deregister_tm_clones(void) {}

/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401109 at 0x401109
void sub_401109()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

void register_tm_clones(void) {}

/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401149 at 0x401149
void sub_401149()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux(void) {}

/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401185 at 0x401185
void sub_401185()
{
}


// Function: sub_401189 at 0x401189
void sub_401189()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */

void frame_dummy(void) {}



// Function: sub_401199 at 0x401199
void sub_401199(unsigned long a0)
{
 param_fake_branch((unsigned int)a0);
 return;
}


// Function: param_fake_branch at 0x4011a0
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: sub_4011a3 at 0x4011a3
void sub_4011a3()
{
 call_fake_branch();
 return;
}


// Function: call_fake_branch at 0x4011b0
unsigned long long call_fake_branch()
{
 return 10;
}


// Function: sub_4011b6 at 0x4011b6
void sub_4011b6(unsigned long a0)
{
 param_opaque_predicate((unsigned int)a0);
 return;
}


// Function: param_opaque_predicate at 0x4011c0
long long param_opaque_predicate(unsigned int a0)
{
 unsigned int v1; // r8d
 unsigned long v2; // rcx
 unsigned int result; // esi
 unsigned int v8; // eax

 v1 = a0 * 2;
 v2 = a0;
 result = a0 + 1;
 v8 = a0;
 do
 {
 v2 = result;
 result = (unsigned int)(((long long)v8 / (long long)(v2 & 4294967295)));
 v8 = v2;
 } while (result);
 return (!((unsigned int)v2 ^ 1) && !((a0 + 1) * (a0 + 1) ^ (v1 | 1) + a0 * a0) ? v1 + 10 : a0 * 3 + 20);
}


// Function: sub_401201 at 0x401201
void sub_401201()
{
 call_opaque_predicate();
 return;
}


// Function: call_opaque_predicate at 0x401210
unsigned long long call_opaque_predicate()
{
 unsigned int result; // edx
 unsigned int v2; // eax
 unsigned long v3; // rcx
 unsigned long long temp1;
 unsigned long long temp2;

 result = 6;
 v2 = 5;
 do
 {
 v3 = result;
 temp1 = ((unsigned long long)v2 << 32) | (unsigned int)v2;
 temp2 = temp1 % (v3 & 4294967295);
 temp1 = temp1 / (v3 & 4294967295);
 result = (unsigned int)(temp1 >> 32);
 v2 = v3;
 } while (result);
 if ((unsigned int)v3 != 1)
 return 35;
 return 20;
}


// Function: sub_40123c at 0x40123c
void sub_40123c(unsigned long a0)
{
 param_instruction_substitution((unsigned int)a0);
 return;
}


// Function: param_instruction_substitution at 0x401240
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 21 + (a0 >> 1) + (a0 & 15);
}


// Function: sub_401254 at 0x401254
void sub_401254()
{
 call_instruction_substitution();
 return;
}


// Function: call_instruction_substitution at 0x401260
unsigned long long call_instruction_substitution()
{
 return 225;
}


// Function: sub_401266 at 0x401266
void sub_401266(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 decrypt_string((char *)a0, (char *)a1, a2, (char)a3);
 return;
}


// Function: decrypt_string at 0x401270
char* decrypt_string(char *a0, char *p, unsigned long a2, char a3)
{
 char *dst; // rax
 char v2; // al
 char *ptr;

 dst = strncpy(p, a0, a2);
 p[1 + a2] = 0;
 v2 = *(p);
 if (!*(p))
 return p;
 ptr = p + 1;
 do
 {
 ptr[1] = v2 ^ a3;
 v2 = ptr[0];
 ptr = ptr + 1;
 } while (ptr[0]);
 return p;
}


// Function: sub_4012b9 at 0x4012b9
void sub_4012b9()
{
 param_string_encryption();
 return;
}


// Function: param_string_encryption at 0x4012c0
int param_string_encryption()
{
 char *ptr; // rcx
 char v5; // al
 char flag1[32]; // [bp-0x28]
 char v1[32]; // [bp-0x27]
 char result; // [bp-0x9]

 result = 0;
 flag1[0] = 'H'; flag1[1] = 'e'; flag1[2] = 'l'; flag1[3] = 'l'; flag1[4] = 'o'; flag1[5] = 0;
 if (flag1[0])
 {
 ptr = v1;
 v5 = flag1[0];
 do
 {
 *(ptr + 1) = v5 ^ 90;
 v5 = *ptr;
 ptr = ptr + 1;
 } while (*ptr);
 }
 return (unsigned int)strlen((char*)flag1) + flag1[0];
}


// Function: sub_401313 at 0x401313
void sub_401313()
{
 call_string_encryption();
 return;
}


// Function: call_string_encryption at 0x401320
int call_string_encryption()
{
 char *ptr; // rcx
 char v5; // al
 char flag1[32]; // [bp-0x28]
 char v1[32]; // [bp-0x27]
 char result; // [bp-0x9]

 result = 0;
 flag1[0] = 'H'; flag1[1] = 'e'; flag1[2] = 'l'; flag1[3] = 'l'; flag1[4] = 'o'; flag1[5] = 0;
 if (flag1[0])
 {
 ptr = v1;
 v5 = flag1[0];
 do
 {
 *((char *)ptr + 1) = v5 ^ 90;
 v5 = *((char *)ptr);
 ptr = ptr + 1;
 } while (*((char *)ptr));
 }
 return (unsigned int)strlen((char*)flag1) + flag1[0];
}


// Function: sub_401373 at 0x401373
void sub_401373(unsigned long a0, unsigned long a1)
{
 param_tail_call_optimized((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: param_tail_call_optimized at 0x401380
long long param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 if (a0 <= 0)
 return a1;
 return param_tail_call_optimized(a0 - 1, (a1 + a0) & 4294967295);
}


// Function: sub_401398 at 0x401398
void sub_401398()
{
 call_tail_call_optimized();
 return;
}


// Function: call_tail_call_optimized at 0x4013a0
unsigned long long call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


// Function: sub_4013af at 0x4013af
void sub_4013af(unsigned long a0)
{
 param_non_tail_call((unsigned int)a0);
 return;
}


// Function: param_non_tail_call at 0x4013b0
unsigned long long param_non_tail_call(unsigned int a0)
{
 if (a0 <= 0)
 return 0;
 return param_non_tail_call(a0 - 1) + a0;
}


// Function: sub_4013c6 at 0x4013c6
void sub_4013c6()
{
 call_non_tail_call();
 return;
}


// Function: call_non_tail_call at 0x4013d0
unsigned long long call_non_tail_call()
{
 return param_non_tail_call(100);
}


// Function: sub_4013dd at 0x4013dd
void sub_4013dd(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 param_vectorized_loop(a0, a1, (unsigned long)a2, (unsigned int)a3);
 return;
}


// Function: param_vectorized_loop at 0x4013e0
unsigned long long param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned long ptr, unsigned int a3)
{
 unsigned long i; // r8
 unsigned long idx; // r9
 unsigned long v3; // rcx
 unsigned long long v4; // rax

 i = a3;
 if (a3 > 0)
 {
 idx = 0;
 do
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a1 + idx * 4)) + *((int *)(a0 + idx * 4));
 idx += 1;
 } while (i != idx);
 }
 if (a3 <= 0)
 return 0;
 v3 = 0;
 v4 = 0;
 do
 {
 v4 = (unsigned int)v4 + *((int *)(ptr + v3 * 4));
 v3 += 1;
 } while (i != v3);
 return v4;
}




unsigned long long call_vectorized_loop()
{
 unsigned long long idx; // rax
 unsigned long long j; // rcx
 unsigned long long v5; // rax
 int flag1[8]; // [bp-0x28]

 idx = 0;
 do
 {
 ((int *)flag1)[idx/4] = ((int *)&g_402030)[idx/4] + ((int *)&g_402010)[idx/4];
 idx += 4;
 } while (idx != 32);
 j = 0;
 v5 = 0;
 do
 {
 v5 = (unsigned int)v5 + ((int *)flag1)[j];
 j += 1;
 } while (j != 8);
 return v5;
}


// Function: sub_40146f at 0x40146f
void sub_40146f(unsigned long a0)
{
 param_link_time_optimization((unsigned int)a0);
 return;
}


// Function: param_link_time_optimization at 0x401470
int param_link_time_optimization(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: sub_401477 at 0x401477
void sub_401477()
{
 call_link_time_optimization();
 return;
}


// Function: call_link_time_optimization at 0x401480
unsigned long long call_link_time_optimization()
{
 return 20;
}


// Function: sub_401486 at 0x401486
void sub_401486()
{
 div_zero_handler(0); /* do not return */
}


// Function: div_zero_handler at 0x401490
void div_zero_handler(int sig)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 (void)sig;
 v0 = v2;
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1); /* do not return */
}


// Function: sub_4014ac at 0x4014ac
void sub_4014ac(unsigned long a0)
{
 param_division_by_zero(a0);
 return;
}


// Function: param_division_by_zero at 0x4014b0

unsigned int param_division_by_zero(unsigned long a0)
{
 signal(SIGFPE, (void (*)(int))div_zero_handler);
 if (setjmp(jmp_buffer))
 return 4294967295;
 unsigned long long dividend = 10;
 return (dividend % (a0 & 4294967295)) / (dividend / (a0 & 4294967295));
}


// Function: sub_4014e8 at 0x4014e8
void sub_4014e8()
{
 call_division_by_zero();
 return;
}


// Function: call_division_by_zero at 0x4014f0
int call_division_by_zero()
{
 unsigned int v3; // eax
 unsigned int v4; // eax

 v3 = param_division_by_zero(5);
 v4 = param_division_by_zero(0);
 signal(SIGFPE, NULL);
 return v4 + v3;
}


// Function: sub_40151f at 0x40151f
void sub_40151f()
{
 segv_handler(0); /* do not return */
}


// Function: segv_handler at 0x401520
void segv_handler(int sig)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 (void)sig;
 v0 = v2;
 segv_caught = 1;
 longjmp(segv_buffer, 1); /* do not return */
}


// Function: sub_40153c at 0x40153c
void sub_40153c(unsigned long a0)
{
 param_null_pointer_deref((unsigned int *)a0);
 return;
}


// Function: param_null_pointer_deref at 0x401540

unsigned int param_null_pointer_deref(unsigned int *a0)
{
 signal(SIGSEGV, (void (*)(int))segv_handler);
 if (setjmp(segv_buffer))
 return 4294967295;
 return *(a0);
}


// Function: call_null_pointer_deref at 0x401570
int call_null_pointer_deref()
{
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v1[1]; // [bp-0x14]

 v1[0] = 42;
 v4 = param_null_pointer_deref(&v1[0]);
 v5 = param_null_pointer_deref(NULL);
 signal(SIGSEGV, NULL);
 return v5 + v4;
}


// Function: sub_4015a7 at 0x4015a7
void sub_4015a7(unsigned long a0)
{
 param_buffer_overflow_stack((unsigned int)a0);
 return;
}


// Function: param_buffer_overflow_stack at 0x4015b0
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: sub_4015b3 at 0x4015b3
void sub_4015b3(unsigned long a0)
{
 param_buffer_overflow_heap((unsigned int)a0);
 return;
}


// Function: param_buffer_overflow_heap at 0x4015c0
int param_buffer_overflow_heap(unsigned int a0)
{
 return a0;
}


// Function: sub_4015c3 at 0x4015c3
void sub_4015c3()
{
 call_buffer_overflow();
 return;
}


// Function: call_buffer_overflow at 0x4015d0
unsigned long long call_buffer_overflow()
{
 return 30;
}


// Function: sub_4015d6 at 0x4015d6
void sub_4015d6(unsigned long a0, unsigned long a1)
{
 param_integer_overflow((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: param_integer_overflow at 0x4015e0
unsigned long long param_integer_overflow(unsigned int a0, unsigned int a1)
{
 if (a0 > 0 && a1 > 0 && a1 + a0 < 0)
 return 4294967295;
 return ((a0 & a1) >= 0 ? a1 + a0 : (a1 + a0 <= 0 ? a1 + a0 : 4294967294));
}


// Function: sub_401605 at 0x401605
void sub_401605()
{
 call_integer_overflow();
 return;
}


// Function: call_integer_overflow at 0x401610
unsigned long long call_integer_overflow()
{
 return 0x77359400;
}


// Function: sub_401616 at 0x401616
void sub_401616(unsigned long a0)
{
 param_undefined_behavior((unsigned int)a0);
 return;
}


// Function: param_undefined_behavior at 0x401620
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401624 at 0x401624
void sub_401624()
{
 call_undefined_behavior();
 return;
}


// Function: call_undefined_behavior at 0x401630
unsigned long long call_undefined_behavior()
{
 return 10;
}


// Function: sub_401636 at 0x401636
void sub_401636()
{
 param_implementation_defined();
 return;
}


// Function: param_implementation_defined at 0x401640
unsigned long long param_implementation_defined()
{
 return 47;
}


// Function: sub_401646 at 0x401646
void sub_401646()
{
 call_implementation_defined();
 return;
}


// Function: call_implementation_defined at 0x401650
unsigned long long call_implementation_defined()
{
 return 47;
}


// Function: sub_401656 at 0x401656
void sub_401656()
{
 test_obf_opt_edge();
 return;
}


// Function: test_obf_opt_edge at 0x401660
int test_obf_opt_edge()
{
 unsigned int flag1; // edx
 unsigned int v6; // eax
 unsigned long long index; // rax
 unsigned int v17; // esi
 unsigned long long v18; // rax
 unsigned long long v19; // rax
 unsigned long long v20; // rax
 unsigned long long v21; // rax
 unsigned long v7; // rcx
 char* ptr; // rcx
 char v9; // al
 unsigned long long idx; // rbx
 int v0[8]; // [bp-0x38]
 char v1; // [bp-0x37]
 int v2; // [bp-0x28]
 char result; // [bp-0x19]

 puts(g_402221);
 printf(&g_402050, 10);
 flag1 = 6;
 v6 = 5;
 do
 {
 v7 = flag1;
 long long v6_ext = (long long)(int)v6;
 long long v7_ext = (long long)(int)v7;
 flag1 = (unsigned int)((v6_ext % v7_ext) >> 32);
 v6 = v7;
 } while (flag1);
 printf(&g_40206c, ((unsigned int)v7 == 1 ? 20 : 35));
 printf(&g_402088, 225);
 strncpy(v0, param_string_encryption_encrypted, 32);
 result = 0;
 if (v0[0])
 {
 ptr = &v1;
 v9 = v0[0];
 do
 {
 *(ptr + 1) = v9 ^ 90;
 v9 = *ptr;
 ptr += 1;
 } while (*ptr);
 }
 idx = 0;
 printf(&g_4020a5, (unsigned long long)v0 + strlen(v0));
 printf(&g_4020c1, param_tail_call_optimized(1000, 0) & 4294967295);
 printf(&g_4020eb, param_non_tail_call(100) & 4294967295);
 v2 = 0;
 *((unsigned long long *)&v0) = 0;
 do
 {
 *((int *)(&v0[idx])) = *((int *)(&g_402030[idx])) + *((int *)(&g_402010[idx]));
 idx += 4;
 } while (idx != 32);
 index = 0;
 v17 = 0;
 do
 {
 v17 += *((int *)&(&v0)[4 * index]);
 index += 1;
 } while (index != 8);
 printf(&g_402110, v17);
 printf(&g_402136, 20);
 v18 = param_division_by_zero(5);
 v19 = param_division_by_zero(0);
 signal(SIGFPE, NULL);
 printf(&g_402156, (v19 & 4294967295) + (v18 & 4294967295) & 4294967295);
 *((unsigned int *)&v0) = 42;
 v20 = param_null_pointer_deref(&v0);
 v21 = param_null_pointer_deref(NULL);
 signal(SIGSEGV, NULL);
 printf(&g_402172, (v21 & 4294967295) + (v20 & 4294967295) & 4294967295);
 printf(&g_40218f, 30);
 printf(&g_4021ac, 0x77359400);
 printf(&g_4021dd, 10);
 return printf(&g_4021fa, 47);
}


// Function: sub_40188c at 0x40188c
void sub_40188c()
{
 main();
 return;
}


// Function: main at 0x401890
unsigned int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v2 = 0;
 v0 = v2;
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


