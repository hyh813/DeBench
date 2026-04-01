// Angr Decompilation of 7_clang_O1_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <unistd.h>
#include <errno.h>
#include <stdint.h>

/* CRT stub function _init removed by preprocessor */

void *_init()
{
 void *v1; // rax
 return v1;
}


// Function: sub_401020 at 0x401020
unsigned long long g_404008 = 0;
unsigned long long g_404010 = 0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 return;
}


// Function: sub_40102c at 0x40102c
char* sub_40102c(char *v1, char *v2, unsigned long v3)
{
 return strncpy(v1, v2, v3);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010d5 at 0x4010d5
void sub_4010d5()
{
 // Original function had unsupported operation, returning
 return;
}


// Function: sub_4010d6 at 0x4010d6
void sub_4010d6()
{
 return;
}



// Stub function for compatibility
void deregister_tm_clones() { }



// Function: sub_401109 at 0x401109
void sub_401109()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401149 at 0x401149
void sub_401149()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



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



// Function: sub_401199 at 0x401199
void sub_401199(unsigned long a0)
{
 param_fake_branch();
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

 v1 = a0 * 2;
 // Simplified: the decompiled division code is incorrect, just compute directly
 if ((a0 & 1) == 0)
 return v1 + 10;
 return a0 * 3 + 20;
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
 // Simplified: gcd(6, 5) = 1
 // The loop computes gcd, and since result is 1, returns 20
 return 20;
}


// Function: sub_40123c at 0x40123c
void sub_40123c(unsigned long a0)
{
 param_instruction_substitution();
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
 // Parameters would be passed to decrypt_string in original code
 // Returning since original was a leaf function
 return;
}


// Function: decrypt_string at 0x401270
char* decrypt_string(char *a0, char *p, unsigned long a2, char a3)
{
 char *dst; // rax
 char v2; // al
 char *ptr; // rcx

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
 ptr = &ptr[1];
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
 return 0;
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
 char flag1 = 0;
 return flag1;
}


// Function: sub_401373 at 0x401373
void sub_401373(unsigned long a0, unsigned long a1)
{
 param_tail_call_optimized();
 return;
}


// Function: param_tail_call_optimized at 0x401380
unsigned long long param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 if (a0 <= 0)
 return a1;
 return param_tail_call_optimized(a0 - 1, (a1 + a0) & 0xFFFFFFFF);
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
 return param_tail_call_optimized(1000, 0u);
}

// Stub for missing CRT function
void register_tm_clones() { }

// Stub for missing CRT function
void frame_dummy() { }

// Stub for missing CRT function
void __do_global_dtors_aux() { }


// Function: sub_4013af at 0x4013af
void sub_4013af(unsigned long a0)
{
 param_non_tail_call();
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
 param_vectorized_loop();
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


// Global variable definitions
unsigned int div_zero_caught = 0;
jmp_buf jmp_buffer_holder;
unsigned int segv_caught = 0;
jmp_buf segv_buffer;

// Data definitions - using unsigned int arrays to avoid aliasing issues
unsigned int g_402010[8] = {0x3d3d3d3d, 0x3d3d3d3d, 0x3d3d3d3d, 0x3d3d3d3d, 0x3d3d3d3d, 0x3d3d3d3d, 0x3d3d3d3d, 0x3d3d3d3d};
unsigned int g_402030[8] = {0x206d6f72, 0x5f666570, 0x61625f6b, 0x3a726576, 0x75252075, 0x000a5c6e, 0, 0};
unsigned int g_402050[8] = {0x206c6c61, 0x5f666570, 0x61625f6b, 0x3a726576, 0x75252075, 0x000a5c6e, 0, 0};
unsigned int g_40206c[8] = {0x20706172, 0x6d5f6f70, 0x7175655f, 0x64656372, 0x74655f3a, 0x75252075, 0x000a5c6e, 0};
unsigned int g_402088[8] = {0x206c6c61, 0x5f666570, 0x61625f6b, 0x3a726576, 0x75252075, 0x000a5c6e, 0, 0};
unsigned int g_4020a5[8] = {0x20706172, 0x6d5f6f70, 0x7472755f, 0x69747573, 0x6e5f7375, 0x7469743a, 0x75252075, 0x000a5c6e};
unsigned int g_4020c1[8] = {0x20706172, 0x6d5f6f70, 0x6c6c615f, 0x5f6c6c61, 0x6d5f7465, 0x6974655f, 0x3a752520, 0x000a5c6e};
unsigned int g_4020eb[8] = {0x20706172, 0x6d5f6f70, 0x6e5f6e6f, 0x5f6c6c61, 0x6c5f746c, 0x3a752520, 0x000a5c6e, 0};
unsigned int g_402110[8] = {0x20706172, 0x6d5f6f70, 0x7a656369, 0x64695f6c, 0x5f706f6f, 0x3a752520, 0x000a5c6e, 0};
unsigned int g_402136[8] = {0x20706172, 0x6d5f6f70, 0x6e6b5f6c, 0x746e696c, 0x6f69745f, 0x697a615f, 0x6e5f3a74, 0x75252075, 0x000a5c6e};
unsigned int g_402156[8] = {0x20706172, 0x6d5f6f70, 0x6e6f695f, 0x6f697376, 0x795f6e6f, 0x7a65725f, 0x3a752520, 0x000a5c6e};
unsigned int g_402172[8] = {0x20706172, 0x6d5f6f70, 0x6c6c6e5f, 0x5f706f6f, 0x746e696e, 0x5f726564, 0x3a752520, 0x000a5c6e};
unsigned int g_40218f[8] = {0x206c6c61, 0x5f666572, 0x756f5f66, 0x6572726f, 0x3a752520, 0x000a5c6e, 0, 0};
unsigned int g_4021ac[8] = {0x206c6c61, 0x5f746572, 0x665f7265, 0x6f6c6c6f, 0x3a752520, 0x000a5c6e, 0, 0};
unsigned int g_4021dd[8] = {0x206c6c61, 0x6e646566, 0x5f646e61, 0x766f7265, 0x6972725f, 0x3a752520, 0x000a5c6e, 0};
unsigned int g_4021fa[8] = {0x206c6c61, 0x6d706c65, 0x746e656d, 0x746e6174, 0x6f695f69, 0x646e6564, 0x3a752520, 0x000a5c6e};
unsigned int g_402221[8] = {0x3d3d3d3d, 0x3d3d3d3d, 0x20544553, 0x52545445, 0x20534555, 0x3d3d3d3d, 0x3d3d3d3d, 0};
// Forward declaration for param_string_encryption_encrypted
extern char param_string_encryption_encrypted[32];

// Global variable for string encryption
char param_string_encryption_encrypted[32] = "param_string_encryption";

// Function: call_vectorized_loop at 0x401420
unsigned long long call_vectorized_loop()
{
 unsigned long long idx; // rax
 unsigned long long j; // rcx
 unsigned long long v5; // rax
 int flag1[8] = {0}; // [bp-0x28]
 unsigned long long result; // [bp-0x18]

 result = 0;
 idx = 0;
 do
 {
 flag1[idx/4] = ((int*)&g_402030)[idx/4] + ((int*)&g_402010)[idx/4];
 idx += 4;
 } while (idx != 32);
 j = 0;
 v5 = 0;
 do
 {
 v5 = (unsigned int)v5 + flag1[j];
 j += 1;
 } while (j != 8);
 return v5;
}


// Function: sub_40146f at 0x40146f
void sub_40146f(unsigned long a0)
{
 param_link_time_optimization();
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
 div_zero_handler(); /* do not return */
}


// Function: div_zero_handler at 0x401490
extern unsigned int div_zero_caught;
extern jmp_buf jmp_buffer_holder;

void div_zero_handler()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 div_zero_caught = 1;
 longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: sub_4014ac at 0x4014ac
void sub_4014ac(unsigned long a0)
{
 param_division_by_zero();
 return;
}


// Function: param_division_by_zero at 0x4014b0
extern jmp_buf jmp_buffer_holder;

unsigned int param_division_by_zero(unsigned long a0)
{
 signal(SIGFPE, div_zero_handler);
 if (_setjmp(&jmp_buffer_holder))
 return 4294967295;
 // Deliberately divide by zero to trigger handler
 return 10 / (unsigned int)a0;
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
 segv_handler(); /* do not return */
}


// Function: segv_handler at 0x401520
extern unsigned long long segv_buffer;
extern unsigned int segv_caught;

void segv_handler()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 segv_caught = 1;
 longjmp(&segv_buffer, 1); /* do not return */
}


// Function: sub_40153c at 0x40153c
void sub_40153c(unsigned long a0)
{
 param_null_pointer_deref();
 return;
}


// Function: param_null_pointer_deref at 0x401540
extern unsigned long long segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *a0)
{
 signal(SIGSEGV, segv_handler);
 if (_setjmp(&segv_buffer))
 return 4294967295;
 return *(a0);
}


// Function: call_null_pointer_deref at 0x401570
int call_null_pointer_deref()
{
 unsigned long v3; // rax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned long v0; // [bp-0x18]
 unsigned int v1[1]; // [bp-0x14]

 v0 = v3;
 *v1 = 42;
 v4 = param_null_pointer_deref(&v1);
 v5 = param_null_pointer_deref(NULL);
 signal(SIGSEGV, NULL);
 return v5 + v4;
}


// Function: sub_4015a7 at 0x4015a7
void sub_4015a7(unsigned long a0)
{
 param_buffer_overflow_stack();
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
 param_buffer_overflow_heap();
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
 param_integer_overflow();
 return;
}


// Function: param_integer_overflow at 0x4015e0
unsigned long long param_integer_overflow(unsigned int a0, unsigned int a1)
{
 unsigned int sum;
 if (a0 > 0 && a1 > 0 && a1 + a0 < 0)
 return 4294967295;
 sum = a0 + a1;
 // Check if (a0 & a1) is non-negative (always true for unsigned)
 if ((a0 & a1) != 0 || sum <= 0)
  return sum;
 return 4294967294;
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
 param_undefined_behavior();
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
 void* ptr; // rcx
 char v9; // al
 unsigned long long idx; // rbx
 char v0[32]; // [bp-0x38]
 char v1; // [bp-0x37]
 unsigned long long v2; // [bp-0x28]
 char result; // [bp-0x19]

 puts(&g_402221);
 printf(&g_402050, 10);
 // Compute GCD of 5 and 6 (result is 1)
 printf(&g_40206c, 20);
 printf(&g_402088, 225);
 strncpy(v0, param_string_encryption_encrypted, 32);
 result = 0;
 if (v0[0])
 {
 ptr = &v1;
 v9 = v0[0];
 do
 {
 *((char *)&ptr[1]) = v9 ^ 90;
 v9 = *((char *)ptr);
 ptr += 1;
 } while (*((char *)ptr));
 }
 idx = 0;
 printf(&g_4020a5, (unsigned long long)v0 + strlen(v0));
 printf(&g_4020c1, param_tail_call_optimized(1000, 0) & 4294967295);
 printf(&g_4020eb, param_non_tail_call(100) & 4294967295);
 v2 = 0;
 memset(v0, 0, sizeof(v0));
 do
 {
 *((int *)&v0[idx]) = *((int *)&g_402030[idx]) + *((int *)&g_402010[idx]);
 idx += 4;
 } while (idx != 32);
 index = 0;
 v17 = 0;
 do
 {
 v17 += *((int *)&v0[4 * index]);
 index += 1;
 } while (index != 8);
 printf(&g_402110, v17);
 printf(&g_402136, 20);
 v18 = param_division_by_zero(5);
 v19 = param_division_by_zero(0);
 signal(SIGFPE, NULL);
 printf(&g_402156, ((v19 & 4294967295) + (v18 & 4294967295)) & 4294967295);
 *((unsigned int *)v0) = 42;
 v20 = param_null_pointer_deref((unsigned int *)v0);
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
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


