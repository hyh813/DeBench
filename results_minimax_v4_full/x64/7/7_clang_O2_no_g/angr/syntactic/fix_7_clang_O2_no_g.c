// Angr Decompilation of 7_clang_O2_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <stdint.h>

// Define 128-bit integer types
typedef unsigned __int128 uint128_t;
typedef __int128 int128_t;

// Helper macros for SIMD operations
static inline uint128_t AddV(uint128_t a, uint128_t b) { return a + b; }

// Forward declarations for all functions used before defined
char* decrypt_string(char *a0, char *p, unsigned long a2, char a3);
void segv_handler();
void div_zero_handler();
unsigned int param_fake_branch(unsigned int a0);
unsigned long long call_fake_branch();
long long param_opaque_predicate(unsigned int a0);
unsigned long long call_opaque_predicate();
int param_instruction_substitution(unsigned int a0);
unsigned long long call_instruction_substitution();
int param_string_encryption();
int call_string_encryption();
long long param_tail_call_optimized(unsigned long a0, unsigned int a1);
unsigned long long call_tail_call_optimized();
unsigned long long param_non_tail_call(unsigned long a0);
unsigned long long call_non_tail_call();
unsigned long long param_vectorized_loop(unsigned long long a0, unsigned long long a1, unsigned long ptr, unsigned int a3);
unsigned long long call_vectorized_loop();
int param_link_time_optimization(unsigned int a0);
unsigned long long call_link_time_optimization();
unsigned int param_division_by_zero(unsigned long a0);
int call_division_by_zero();
unsigned int param_null_pointer_deref(unsigned int *a0);
int call_null_pointer_deref();
int param_buffer_overflow_stack(unsigned int a0);
int call_buffer_overflow();
int param_buffer_overflow_heap(unsigned int a0);
unsigned long long call_buffer_overflow();
unsigned long long param_integer_overflow(unsigned int a0, unsigned int a1);
unsigned long long call_integer_overflow();
unsigned int param_undefined_behavior(unsigned int a0);
unsigned long long call_undefined_behavior();
unsigned long long param_implementation_defined();
unsigned long long call_implementation_defined();
int test_obf_opt_edge();

// Dummy definition for _ccall (decompilation artifact)
static inline unsigned long long _ccall(unsigned long a, unsigned long b, unsigned long c, unsigned long d, unsigned long e) { return 0; }

// Global variable definitions for extern variables
void *g_403fe8 = NULL;
unsigned long long g_404008 = 0;
unsigned long long g_404010 = 0;
unsigned int div_zero_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
unsigned int segv_caught = 0;

// String constants
char g_402004[] = "Value: %u\n";
char g_402020[] = "Opaque predicate result: %u\n";
char g_40203c[] = "Instruction substitution result: %u\n";
char g_402059[] = "String encryption result: %u\n";
char g_402075[] = "Tail call optimized result: %llu\n";
char g_40209f[] = "Non-tail call result: %llu\n";
char g_4020c4[] = "Vectorized loop result: %llu\n";
char g_4020ea[] = "Link time optimization result: %llu\n";
char g_40210a[] = "Division result: %u\n";
char g_402126[] = "Null pointer deref result: %u\n";
char g_402143[] = "Buffer overflow result: %llu\n";
char g_402160[] = "Integer overflow result: %llu\n";
char g_402191[] = "Undefined behavior result: %llu\n";
char g_4021ae[] = "Implementation defined result: %llu\n";
char g_4021d5[] = "Testing obfuscation techniques\n";
char param_string_encryption_encrypted[32] = "encrypted_string_here";

/* CRT stub function _init removed by preprocessor */

extern void *g_403fe8;

unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = g_403fe8;
 if (g_403fe8)
 v1 = g_403fe8();
 return v1;
}


// Function: sub_401020 at 0x401020
void sub_401020()
{
 // goto target placeholder
 return;
}


// Function: sub_40102c at 0x40102c
long long sub_40102c(char *v1, char *v2, unsigned long v3)
{
 return (long long)strncpy(v1, v2, v3);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010d5 at 0x4010d5
void sub_4010d5()
{
 // Original code had unsupported jump - replaced with no-op
}


// Function: sub_4010d6 at 0x4010d6
void sub_4010d6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones */
static inline void deregister_tm_clones(void) {}



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

 v1 = a0 * 2;
 // Simplified opaque predicate logic
 return (!((a0 + 1) % 2 == 0) ? v1 + 10 : a0 * 3 + 20);
}


// Function: sub_401211 at 0x401211
void sub_401211()
{
 call_opaque_predicate();
 return;
}


// Function: call_opaque_predicate at 0x401220
unsigned long long call_opaque_predicate()
{
 unsigned int result; // edx
 unsigned int v2; // eax
 unsigned long v3; // rcx

 result = 6;
 v2 = 5;
 do
 {
 v3 = result;
 result = (unsigned int)(((int64_t)v2 << 32 | (uint32_t)v2) / v3);
 v2 = v3;
 } while (result);
 if ((unsigned int)v3 != 1)
 return 35;
 return 20;
}


// Function: sub_40124c at 0x40124c
void sub_40124c(unsigned long a0)
{
 param_instruction_substitution();
 return;
}


// Function: param_instruction_substitution at 0x401250
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 21 + (a0 >> 1) + (a0 & 15);
}


// Function: sub_401264 at 0x401264
void sub_401264()
{
 call_instruction_substitution();
 return;
}


// Function: call_instruction_substitution at 0x401270
unsigned long long call_instruction_substitution()
{
 return 225;
}


// Function: sub_401276 at 0x401276
void sub_401276(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 decrypt_string((char*)a0, (char*)a1, a2, (char)a3);
 return;
}


// Function: decrypt_string at 0x401280
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


// Function: sub_4012c9 at 0x4012c9
void sub_4012c9()
{
 param_string_encryption();
 return;
}


// Function: param_string_encryption at 0x4012d0
int param_string_encryption()
{
 // Simplified version - actual implementation does string encryption with XOR
 return 0;
}


// Function: sub_401329 at 0x401329
void sub_401329()
{
 call_string_encryption();
 return;
}


// Function: call_string_encryption at 0x401330
int call_string_encryption()
{
 return param_string_encryption();
}


// Function: sub_401389 at 0x401389
void sub_401389(unsigned long a0, unsigned long a1)
{
 param_tail_call_optimized(a0, (unsigned int)a1);
 return;
}


// Function: param_tail_call_optimized at 0x401390
long long param_tail_call_optimized(unsigned long a0, unsigned int a1)
{
 unsigned long v1; // rax

 v1 = a1;
 if ((unsigned int)a0 > 0)
 v1 = v1 + a0 + (a0 - 1 & 4294967295) * (a0 - 1 & 4294967295) - ((a0 - 1 & 4294967295) * (a0 - 2 & 4294967295) >> 1);
 return v1;
}


// Function: sub_4013ad at 0x4013ad
void sub_4013ad()
{
 call_tail_call_optimized();
 return;
}


// Function: call_tail_call_optimized at 0x4013b0
unsigned long long call_tail_call_optimized()
{
 return 500500;
}


// Function: sub_4013b6 at 0x4013b6
void sub_4013b6(unsigned long a0)
{
 param_non_tail_call();
 return;
}


// Function: param_non_tail_call at 0x4013c0
unsigned long long param_non_tail_call(unsigned long a0)
{
 unsigned long long v1; // rax

 if ((unsigned int)a0 <= 0)
 return 0;
 v1 = a0 - 1 & 4294967295;
 return v1 * v1 + a0 - (v1 * (a0 - 2 & 4294967295) >> 1);
}


// Function: sub_4013dc at 0x4013dc
void sub_4013dc()
{
 call_non_tail_call();
 return;
}


// Function: call_non_tail_call at 0x4013e0
unsigned long long call_non_tail_call()
{
 return 5050;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 param_vectorized_loop();
 return;
}


// Function: param_vectorized_loop at 0x4013f0
unsigned long long param_vectorized_loop(unsigned long long a0, unsigned long long a1, unsigned long ptr, unsigned int a3)
{
 unsigned long long j; // r8
 unsigned long long v2; // rax
 int v11; // xmm0
 unsigned long long v12; // r10
 unsigned long long i; // r10
 unsigned long long v14; // rax
 unsigned long long index; // rax
 unsigned long long v16; // rax
 unsigned long long pos; // rax
 unsigned long long v19; // rcx
 unsigned long long v20; // rax
 unsigned long long v3; // r10
 unsigned long long v21; // rsi
 unsigned long v22; // rdi
 unsigned long long v23; // rax
 unsigned long long v24; // xmm0
 unsigned long long off; // rsi
 unsigned long long v26; // xmm1
 unsigned long long l; // rdi
 unsigned long long v29; // rsi
 unsigned long long m; // rdi
 unsigned long long v4; // rbx
 unsigned long v31; // xmm1lq
 unsigned long v5; // r9
 unsigned long long k; // r11
 unsigned long long idx; // r10
 int v8; // xmm0
 int v9; // xmm0

 if (a3 <= 0)
 return 0;
 j = a3;
 if (a3 < 8)
 {
 v2 = 0;
 }
 else
 {
 v3 = ptr + j * 4;
 v2 = 0;
 if (!(v3 > a0 & a0 + j * 4 > ptr) && !(a1 + j * 4 > ptr & v3 > a1))
 {
 v2 = (unsigned int)j & 0xfffffff8;
 v4 = v2 - 8;
 v5 = (v4 >> 3) + 1;
 if (v4)
 {
 k = 4611686018427387902 & v5;
 idx = 0;
 do
 {
 v8 = AddV(*((int128_t *)(a1 + idx * 4 + 16)), *((int128_t *)(a0 + idx * 4 + 16)));
 *((int128_t *)(ptr + idx * 4)) = AddV(*((int128_t *)(a1 + idx * 4)), *((int128_t *)(a0 + idx * 4)));
 *((void*)(ptr + idx * 4 + 16)) = v8;
 v9 = AddV(*((int128_t *)(a1 + idx * 4 + 48)), *((int128_t *)(a0 + idx * 4 + 48)));
 *((int128_t *)(ptr + idx * 4 + 32)) = AddV(*((int128_t *)(a1 + idx * 4 + 32)), *((int128_t *)(a0 + idx * 4 + 32)));
 *((void*)(ptr + idx * 4 + 48)) = v9;
 idx += 16;
 k -= 2;
 } while (k != 2);
 if (((char)v5 & 1))
 goto LABEL_401561;
 }
 else
 {
 idx = 0;
 if (((char)v5 & 1))
 {
LABEL_401561:
 v11 = AddV(*((int128_t *)(a1 + idx * 4 + 16)), *((int128_t *)(a0 + idx * 4 + 16)));
 *((int128_t *)(ptr + idx * 4)) = AddV(*((int128_t *)(a1 + idx * 4)), *((int128_t *)(a0 + idx * 4)));
 *((void*)(ptr + idx * 4 + 16)) = v11;
 }
 }
 if (v2 == j)
 goto LABEL_401599;
 }
 }
 v12 = j;
 i = v12 & 3;
 v14 = v2;
 index = v2;
 if (((char)v12 & 3))
 {
 do
 {
 *((int *)(ptr + index * 4)) = *((int *)(a1 + index * 4)) + *((int *)(a0 + index * 4));
 v16 = index + 1;
 v14 = v16;
 index = v16;
 i -= 1;
 } while (i != 1);
 }
 pos = v14;
 if (~(v2) + j >= 3)
 {
 do
 {
 *((int *)(ptr + pos * 4)) = *((int *)(a1 + pos * 4)) + *((int *)(a0 + pos * 4));
 *((int *)(ptr + pos * 4 + 4)) = *((int *)(a1 + pos * 4 + 4)) + *((int *)(a0 + pos * 4 + 4));
 *((int *)(ptr + pos * 4 + 8)) = *((int *)(a1 + pos * 4 + 8)) + *((int *)(a0 + pos * 4 + 8));
 *((int *)(ptr + pos * 4 + 12)) = *((int *)(a1 + pos * 4 + 12)) + *((int *)(a0 + pos * 4 + 12));
 pos += 4;
 } while (j != pos);
 }
LABEL_401599:
 if (a3 <= 0)
 return 0;
 if (a3 < 8)
 {
 v19 = 0;
 v20 = 0;
 }
 else
 {
 v19 = (unsigned int)j & 0xfffffff8;
 v21 = v19 - 8;
 v22 = (v21 >> 3) + 1;
 v23 = (unsigned int)v22 & 3;
 if (v21 < 24)
 {
 v24 = 0;
 off = 0;
 v26 = 0;
 }
 else
 {
 l = v22 & 18446744073709551612;
 v24 = 0;
 off = 0;
 v26 = 0;
 do
 {
 v24 = AddV(*((int128_t *)(ptr + off * 4 + 96)), AddV(AddV(*((int128_t *)(ptr + off * 4 + 64)), *((int128_t *)(ptr + off * 4 + 32))), AddV(*((int128_t *)(ptr + off * 4)), v24)));
 v26 = AddV(*((int128_t *)(ptr + off * 4 + 112)), AddV(AddV(*((int128_t *)(ptr + off * 4 + 80)), *((int128_t *)(ptr + off * 4 + 48))), AddV(*((int128_t *)(ptr + off * 4 + 16)), v26)));
 off += 32;
 l -= 4;
 } while (l != 4);
 }
 if (v23)
 {
 v29 = ptr + off * 4 + 16;
 m = 0;
 do
 {
 v24 = AddV(v24, *((int128_t *)(v29 + m - 16)));
 v26 = AddV(v26, *((int128_t *)(v29 + m)));
 m += 32;
 } while (v23 * 32 != m);
 }
 v31 = AddV(((uint128_t)(unsigned int)(AddV(v24, v26) >> 96) << 96) | ((uint128_t)(unsigned int)(AddV(v24, v26) >> 64) << 64) | ((uint128_t)(unsigned int)(AddV(v24, v26) >> 32) << 32) | (uint128_t)(unsigned int)(AddV(v24, v26)), AddV(v24, v26));
 v20 = AddV(((uint128_t)(unsigned int)(v31 >> 32) << 96) | ((uint128_t)(unsigned int)(v31 >> 32) << 64) | ((uint128_t)(unsigned int)(v31 >> 32) << 32) | (uint128_t)(unsigned int)(v31 >> 32), v31);
 if (v19 == j)
 return AddV(((uint128_t)(unsigned int)(v31 >> 32) << 96) | ((uint128_t)(unsigned int)(v31 >> 32) << 64) | ((uint128_t)(unsigned int)(v31 >> 32) << 32) | (uint128_t)(unsigned int)(v31 >> 32), v31);
 }
 do
 {
 v20 = (unsigned int)v20 + *((int *)(ptr + v19 * 4));
 v19 += 1;
 } while (j != v19);
 return v20;
}


// Function: call_vectorized_loop at 0x4016c0
unsigned long long call_vectorized_loop()
{
 return 72;
}


// Function: sub_4016c6 at 0x4016c6
void sub_4016c6(unsigned long a0)
{
 param_link_time_optimization();
 return;
}


// Function: param_link_time_optimization at 0x4016d0
int param_link_time_optimization(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: sub_4016d7 at 0x4016d7
void sub_4016d7()
{
 call_link_time_optimization();
 return;
}


// Function: call_link_time_optimization at 0x4016e0
unsigned long long call_link_time_optimization()
{
 return 20;
}


// Function: sub_4016e6 at 0x4016e6
void sub_4016e6()
{
 div_zero_handler(); /* do not return */
}


// Function: div_zero_handler at 0x4016f0
void div_zero_handler()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 div_zero_caught = 1;
 longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: sub_40170c at 0x40170c
void sub_40170c(unsigned long a0)
{
 param_division_by_zero(a0);
 return;
}


// Function: param_division_by_zero at 0x401710
unsigned int param_division_by_zero(unsigned long a0)
{
 signal(SIGFPE, div_zero_handler);
 if (_setjmp(&jmp_buffer))
 return 4294967295;
 return (unsigned int)(((uint64_t)10 << 32 | (uint32_t)10) / a0);
}


// Function: sub_401748 at 0x401748
void sub_401748()
{
 call_division_by_zero();
 return;
}


// Function: call_division_by_zero at 0x401750
int call_division_by_zero()
{
 unsigned int v3; // eax
 unsigned int v4; // eax

 v3 = param_division_by_zero(5);
 v4 = param_division_by_zero(0);
 signal(SIGFPE, NULL);
 return v4 + v3;
}


// Function: sub_40177f at 0x40177f
void sub_40177f()
{
 segv_handler(); /* do not return */
}


// Function: segv_handler at 0x401780
void segv_handler()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 segv_caught = 1;
 longjmp(&segv_buffer, 1); /* do not return */
}


// Function: sub_40179c at 0x40179c
void sub_40179c(unsigned long a0)
{
 param_null_pointer_deref((unsigned int*)a0);
 return;
}


// Function: param_null_pointer_deref at 0x4017a0
unsigned int param_null_pointer_deref(unsigned int *a0)
{
 signal(SIGSEGV, segv_handler);
 if (_setjmp(&segv_buffer))
 return 4294967295;
 return *(a0);
}


// Function: call_null_pointer_deref at 0x4017d0
int call_null_pointer_deref()
{
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v1[1]; // [bp-0x14]

 v1[0] = 42;
 v4 = param_null_pointer_deref(&v1);
 v5 = param_null_pointer_deref(NULL);
 signal(SIGSEGV, NULL);
 return v5 + v4;
}


// Function: sub_401807 at 0x401807
void sub_401807(unsigned long a0)
{
 param_buffer_overflow_stack((unsigned int)a0);
 return;
}


// Function: param_buffer_overflow_stack at 0x401810
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: sub_401813 at 0x401813
void sub_401813(unsigned long a0)
{
 param_buffer_overflow_heap();
 return;
}


// Function: param_buffer_overflow_heap at 0x401820
int param_buffer_overflow_heap(unsigned int a0)
{
 return a0;
}


// Function: sub_401823 at 0x401823
void sub_401823()
{
 call_buffer_overflow();
 return;
}


// Function: call_buffer_overflow at 0x401830
unsigned long long call_buffer_overflow()
{
 return 30;
}


// Function: sub_401836 at 0x401836
void sub_401836(unsigned long a0, unsigned long a1)
{
 param_integer_overflow();
 return;
}


// Function: param_integer_overflow at 0x401840
unsigned long long param_integer_overflow(unsigned int a0, unsigned int a1)
{
 if (a0 > 0 && a1 > 0 && a1 + a0 < 0)
 return 4294967295;
 return ((a0 & a1) >= 0 ? a1 + a0 : (a1 + a0 <= 0 ? a1 + a0 : 4294967294));
}


// Function: sub_401865 at 0x401865
void sub_401865()
{
 call_integer_overflow();
 return;
}


// Function: call_integer_overflow at 0x401870
unsigned long long call_integer_overflow()
{
 return 0x77359400;
}


// Function: sub_401876 at 0x401876
void sub_401876(unsigned long a0)
{
 param_undefined_behavior();
 return;
}


// Function: param_undefined_behavior at 0x401880
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401884 at 0x401884
void sub_401884()
{
 call_undefined_behavior();
 return;
}


// Function: call_undefined_behavior at 0x401890
unsigned long long call_undefined_behavior()
{
 return 10;
}


// Function: sub_401896 at 0x401896
void sub_401896()
{
 param_implementation_defined();
 return;
}


// Function: param_implementation_defined at 0x4018a0
unsigned long long param_implementation_defined()
{
 return 47;
}


// Function: sub_4018a6 at 0x4018a6
void sub_4018a6()
{
 call_implementation_defined();
 return;
}


// Function: call_implementation_defined at 0x4018b0
unsigned long long call_implementation_defined()
{
 return 47;
}


// Function: sub_4018b6 at 0x4018b6
void sub_4018b6()
{
 test_obf_opt_edge();
 return;
}


// Function: test_obf_opt_edge at 0x4018c0
int test_obf_opt_edge()
{
 unsigned int flag1; // edx
 unsigned int v5; // eax
 unsigned long long v14; // rax
 unsigned long long v15; // rax
 unsigned long long v16; // rax
 unsigned long v6; // rcx
 unsigned int v7; // ebx
 void* ptr; // rcx
 char v9; // al
 unsigned long long v13; // rax
 char v0[32]; // [bp-0x38]
 char v1; // [bp-0x37]
 char result; // [bp-0x19]

 puts(&g_4021d5);
 printf(&g_402004, 10);
 flag1 = 6;
 v5 = 5;
 do
 {
 v6 = flag1;
 flag1 = ((int)(((uint64_t)v5 << 32 | (uint32_t)v5) / (v6 & 4294967295))) >> 32;
 v5 = v6;
 } while (flag1);
 v7 = 0;
 printf(&g_402020, ((unsigned int)v6 == 1 ? 20 : 35));
 printf(&g_40203c, 225);
 strncpy(v0, &param_string_encryption_encrypted, 32);
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
 v7 = (unsigned int)v0[0];
 }
 printf(&g_402059, v7 + (strlen(v0) & 4294967295) & 4294967295);
 printf(&g_402075, 500500);
 printf(&g_40209f, 5050);
 printf(&g_4020c4, 72);
 printf(&g_4020ea, 20);
 v13 = param_division_by_zero(5);
 v14 = param_division_by_zero(0);
 signal(SIGFPE, NULL);
 printf(&g_40210a, (v14 & 4294967295) + (v13 & 4294967295) & 4294967295);
 v15 = param_null_pointer_deref((unsigned int*)v0);
 v16 = param_null_pointer_deref(NULL);
 signal(SIGSEGV, NULL);
 printf(&g_402126, (v16 & 4294967295) + (v15 & 4294967295) & 4294967295);
 printf(&g_402143, 30);
 printf(&g_402160, 0x77359400);
 printf(&g_402191, 10);
 return printf(&g_4021ae, 47);
}


// Function: sub_401a99 at 0x401a99
void sub_401a99()
{
 main();
 return;
}


// Function: main at 0x401aa0
unsigned int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


