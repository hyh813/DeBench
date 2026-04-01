// Angr Decompilation of 7_clang_O3_no_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <stdlib.h>
#include <unistd.h>

// Forward declarations
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
int param_fake_branch(unsigned int a0);
unsigned int div_zero_caught;
jmp_buf jmp_buffer;
unsigned int segv_caught;
jmp_buf segv_buffer;
unsigned long long call_fake_branch(void);
long long param_opaque_predicate(unsigned int a0);
unsigned long long call_opaque_predicate(void);
int param_instruction_substitution(unsigned int a0);
unsigned long long call_instruction_substitution(void);
char *decrypt_string(char *a0, char *p, unsigned long a2, char a3);
int param_string_encryption(void);
int call_string_encryption(void);
long long param_tail_call_optimized(unsigned long a0, unsigned int a1);
unsigned long long call_tail_call_optimized(void);
unsigned long long param_non_tail_call(unsigned long a0);
unsigned long long call_non_tail_call(void);
unsigned long long param_vectorized_loop(unsigned long long a0, unsigned long long a1, unsigned long ptr, unsigned int a3);
unsigned long long call_vectorized_loop(void);
int param_link_time_optimization(unsigned int a0);
unsigned long long call_link_time_optimization(void);
void div_zero_handler(int sig);
unsigned int param_division_by_zero(unsigned long a0);
int call_division_by_zero(void);
void segv_handler(int sig);
unsigned int param_null_pointer_deref(unsigned int *a0);
int call_null_pointer_deref(void);
int param_buffer_overflow_stack(unsigned int a0);
int param_buffer_overflow_heap(unsigned int a0);
unsigned long long call_buffer_overflow(void);
unsigned long long param_integer_overflow(unsigned int a0, unsigned int a1);
unsigned long long call_integer_overflow(void);
unsigned int param_undefined_behavior(unsigned int a0);
unsigned long long call_undefined_behavior(void);
unsigned long long param_implementation_defined(void);
unsigned long long call_implementation_defined(void);
int test_obf_opt_edge(void);
int main(void);


/* CRT stub function _init removed by preprocessor */

unsigned long long g_403fe8;


// Function: sub_401020 at 0x401020
unsigned long long g_404008;
unsigned long long g_404010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
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
}


// Function: sub_4010d6 at 0x4010d6
void sub_4010d6()
{
 deregister_tm_clones();
 return;
}



void deregister_tm_clones() {}



// Function: sub_401109 at 0x401109
void sub_401109()
{
 register_tm_clones();
 return;
}



void register_tm_clones() {}



// Function: sub_401149 at 0x401149
void sub_401149()
{
 __do_global_dtors_aux();
 return;
}



void __do_global_dtors_aux() {}



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



void frame_dummy() {}



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
 unsigned long long v2; // rcx
 unsigned int result; // esi
 unsigned int v8; // eax

 v1 = a0 * 2;
 v2 = 4294967295;
 result = a0 + 1;
 if (!((char)(a0 + 1)))
 {
 v8 = a0;
 do
 {
 v2 = result;
 result = v8 % (v2 & 4294967295);
 v8 = v2;
 } while (result);
 }
 return (!((unsigned int)v2 ^ 1) && !((a0 + 1) * (a0 + 1) ^ (v1 | 1) + a0 * a0) ? v1 + 10 : a0 * 3 + 20);
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
 result = v2 % (v3 & 4294967295);
 v2 = v3;
 } while (result);
 if ((unsigned int)v3 != 1)
 return 35;
 return 20;
}


// Function: sub_40124c at 0x40124c
void sub_40124c(unsigned long a0)
{
 param_instruction_substitution((unsigned int)a0);
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
 decrypt_string((char *)a0, (char *)a1, a2, (char)a3);
 return;
}


// Function: decrypt_string at 0x401280
char *decrypt_string(char *a0, char *p, unsigned long a2, char a3)
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
 char* ptr; // rcx
 char v5; // al
 unsigned int v8; // ebx
 char flag1; // [bp-0x28]
 char v1; // [bp-0x27]
 char result; // [bp-0x9]

 result = 0;
 flag1 = 't';
 if (flag1)
 {
 ptr = &v1;
 v5 = flag1;
 do
 {
 ptr[1] = v5 ^ 90;
 v5 = ptr[0];
 ptr += 1;
 } while (ptr[0]);
 v8 = flag1;
 }
 else
 {
 v8 = 0;
 }
 return (unsigned int)strlen(&flag1) + v8;
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
 char* ptr; // rcx
 char v5; // al
 unsigned int v8; // ebx
 char v0; // [bp-0x28]
 char v1; // [bp-0x27]
 char result; // [bp-0x9]

 result = 0;
 v0 = 't';
 if (v0)
 {
 ptr = &v1;
 v5 = v0;
 do
 {
 ptr[1] = v5 ^ 90;
 v5 = ptr[0];
 ptr += 1;
 } while (ptr[0]);
 v8 = v0;
 }
 else
 {
 v8 = 0;
 }
 return (unsigned int)strlen(&v0) + v8;
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
 param_non_tail_call(a0);
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
 param_vectorized_loop(a0, a1, a2, a3);
 return;
}


// Function: param_vectorized_loop at 0x4013f0
unsigned long long param_vectorized_loop(unsigned long long a0, unsigned long long a1, unsigned long ptr, unsigned int a3)
{
 unsigned long long j; // r8
 unsigned long long v2; // rax
 unsigned long long v12; // r10
 unsigned long long i; // r10
 unsigned long long v14; // rax
 unsigned long long index; // rax
 unsigned long long v16; // rax
 unsigned long long pos; // rax
 unsigned long long v19; // rcx
 unsigned long long v20; // rax
 unsigned long long v3; // r10
 unsigned long long v4; // rbx
 unsigned long v5; // r9
 unsigned long long v22; // rdi
 unsigned long long v23; // rax
 unsigned long long off; // rsi
 unsigned long long l; // rdi
 unsigned long long v29; // rsi
 unsigned long long m; // rdi
 unsigned long long v31; // rax
 unsigned long long v24; // rax
 unsigned long long v26; // rax
 unsigned long long k; // r11
 unsigned long long idx; // r10

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
 ((int *)(ptr + idx * 4))[0] = ((int *)(a1 + idx * 4))[0] + ((int *)(a0 + idx * 4))[0];
 ((int *)(ptr + idx * 4))[1] = ((int *)(a1 + idx * 4))[1] + ((int *)(a0 + idx * 4))[1];
 ((int *)(ptr + idx * 4))[2] = ((int *)(a1 + idx * 4))[2] + ((int *)(a0 + idx * 4))[2];
 ((int *)(ptr + idx * 4))[3] = ((int *)(a1 + idx * 4))[3] + ((int *)(a0 + idx * 4))[3];
 ((int *)(ptr + idx * 4 + 16))[0] = ((int *)(a1 + idx * 4 + 16))[0] + ((int *)(a0 + idx * 4 + 16))[0];
 ((int *)(ptr + idx * 4 + 16))[1] = ((int *)(a1 + idx * 4 + 16))[1] + ((int *)(a0 + idx * 4 + 16))[1];
 ((int *)(ptr + idx * 4 + 16))[2] = ((int *)(a1 + idx * 4 + 16))[2] + ((int *)(a0 + idx * 4 + 16))[2];
 ((int *)(ptr + idx * 4 + 16))[3] = ((int *)(a1 + idx * 4 + 16))[3] + ((int *)(a0 + idx * 4 + 16))[3];
 ((int *)(ptr + idx * 4 + 32))[0] = ((int *)(a1 + idx * 4 + 32))[0] + ((int *)(a0 + idx * 4 + 32))[0];
 ((int *)(ptr + idx * 4 + 32))[1] = ((int *)(a1 + idx * 4 + 32))[1] + ((int *)(a0 + idx * 4 + 32))[1];
 ((int *)(ptr + idx * 4 + 32))[2] = ((int *)(a1 + idx * 4 + 32))[2] + ((int *)(a0 + idx * 4 + 32))[2];
 ((int *)(ptr + idx * 4 + 32))[3] = ((int *)(a1 + idx * 4 + 32))[3] + ((int *)(a0 + idx * 4 + 32))[3];
 ((int *)(ptr + idx * 4 + 48))[0] = ((int *)(a1 + idx * 4 + 48))[0] + ((int *)(a0 + idx * 4 + 48))[0];
 ((int *)(ptr + idx * 4 + 48))[1] = ((int *)(a1 + idx * 4 + 48))[1] + ((int *)(a0 + idx * 4 + 48))[1];
 ((int *)(ptr + idx * 4 + 48))[2] = ((int *)(a1 + idx * 4 + 48))[2] + ((int *)(a0 + idx * 4 + 48))[2];
 ((int *)(ptr + idx * 4 + 48))[3] = ((int *)(a1 + idx * 4 + 48))[3] + ((int *)(a0 + idx * 4 + 48))[3];
 idx += 16;
 k -= 2;
 } while (k != 2);
 }
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
 v22 = (v19 - 8 >> 3) + 1;
 v23 = (unsigned int)v22 & 3;
 v24 = 0;
 off = 0;
 v26 = 0;
 if (v23)
 {
 v29 = ptr + off * 4 + 16;
 m = 0;
 do
 {
 v24 = v24 + *((unsigned long long *)(v29 + m - 16));
 v26 = v26 + *((unsigned long long *)(v29 + m));
 m += 32;
 } while (v23 * 32 != m);
 }
 v31 = v24 + v26;
 v20 = v31;
 if (v19 == j)
 return v31;
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
 param_link_time_optimization((unsigned int)a0);
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
 div_zero_handler(8); /* do not return */
}


// Function: div_zero_handler at 0x4016f0
void div_zero_handler(int sig)
{
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1); /* do not return */
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
 signal(8, (void (*)(int))div_zero_handler);
 if (!setjmp(jmp_buffer))
 return (int)(10 % (a0 & 4294967295)) + (int)(10 / (a0 & 4294967295));
 return 4294967295;
}


// Function: sub_40174c at 0x40174c
void sub_40174c()
{
 call_division_by_zero();
 return;
}


// Function: call_division_by_zero at 0x401750
int call_division_by_zero()
{
 unsigned int v3;
 unsigned int v4;

 v3 = param_division_by_zero(5);
 v4 = param_division_by_zero(0);
 signal(8, NULL);
 return v4 + v3;
}


// Function: sub_40177f at 0x40177f
void sub_40177f()
{
 segv_handler(11); /* do not return */
}


// Function: segv_handler at 0x401780
void segv_handler(int sig)
{
 segv_caught = 1;
 longjmp(segv_buffer, 1); /* do not return */
}


// Function: sub_40179c at 0x40179c
void sub_40179c(unsigned long a0)
{
 param_null_pointer_deref((unsigned int *)a0);
 return;
}


// Function: param_null_pointer_deref at 0x4017a0
unsigned int param_null_pointer_deref(unsigned int *a0)
{
 signal(11, (void (*)(int))segv_handler);
 if (!setjmp(segv_buffer))
 return *(a0);
 return 4294967295;
}


// Function: sub_4017d4 at 0x4017d4
void sub_4017d4()
{
 call_null_pointer_deref();
 return;
}


// Function: call_null_pointer_deref at 0x4017e0
int call_null_pointer_deref()
{
 unsigned int v4;
 unsigned int v5;
 unsigned int v1[1];

 v1[0] = 42;
 v4 = param_null_pointer_deref(&v1);
 v5 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 return v5 + v4;
}


// Function: sub_401817 at 0x401817
void sub_401817(unsigned long a0)
{
 param_buffer_overflow_stack((unsigned int)a0);
 return;
}


// Function: param_buffer_overflow_stack at 0x401820
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: sub_401823 at 0x401823
void sub_401823(unsigned long a0)
{
 param_buffer_overflow_heap((unsigned int)a0);
 return;
}


// Function: param_buffer_overflow_heap at 0x401830
int param_buffer_overflow_heap(unsigned int a0)
{
 return a0;
}


// Function: sub_401833 at 0x401833
void sub_401833()
{
 call_buffer_overflow();
 return;
}


// Function: call_buffer_overflow at 0x401840
unsigned long long call_buffer_overflow()
{
 return 30;
}


// Function: sub_401846 at 0x401846
void sub_401846(unsigned long a0, unsigned long a1)
{
 param_integer_overflow((unsigned int)a0, (unsigned int)a1);
 return;
}


// Function: param_integer_overflow at 0x401850
unsigned long long param_integer_overflow(unsigned int a0, unsigned int a1)
{
 if (a0 > 0 && a1 > 0 && a1 + a0 < 0)
 return 4294967295;
 return ((a0 & a1) >= 0 ? a1 + a0 : (a1 + a0 <= 0 ? a1 + a0 : 4294967294));
}


// Function: sub_401875 at 0x401875
void sub_401875()
{
 call_integer_overflow();
 return;
}


// Function: call_integer_overflow at 0x401880
unsigned long long call_integer_overflow()
{
 return 0x77359400;
}


// Function: sub_401886 at 0x401886
void sub_401886(unsigned long a0)
{
 param_undefined_behavior((unsigned int)a0);
 return;
}


// Function: param_undefined_behavior at 0x401890
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401894 at 0x401894
void sub_401894()
{
 call_undefined_behavior();
 return;
}


// Function: call_undefined_behavior at 0x4018a0
unsigned long long call_undefined_behavior()
{
 return 10;
}


// Function: sub_4018a6 at 0x4018a6
void sub_4018a6()
{
 param_implementation_defined();
 return;
}


// Function: param_implementation_defined at 0x4018b0
unsigned long long param_implementation_defined()
{
 return 47;
}


// Function: sub_4018b6 at 0x4018b6
void sub_4018b6()
{
 call_implementation_defined();
 return;
}


// Function: call_implementation_defined at 0x4018c0
unsigned long long call_implementation_defined()
{
 return 47;
}


// Function: sub_4018c6 at 0x4018c6
void sub_4018c6()
{
 test_obf_opt_edge();
 return;
}


// Function: test_obf_opt_edge at 0x4018d0
char g_402004[] = "%d\n";
char g_402020[] = "%d\n";
char g_40203c[] = "%d\n";
char g_402059[] = "%d\n";
char g_402075[] = "%d\n";
char g_40209f[] = "%d\n";
char g_4020c4[] = "%d\n";
char g_4020ea[] = "%d\n";
char g_40210a[] = "%d\n";
char g_402126[] = "%d\n";
char g_402143[] = "%d\n";
char g_402160[] = "%d\n";
char g_402191[] = "%d\n";
char g_4021ae[] = "%d\n";
char g_4021d5[] = "Starting test\n";
char param_string_encryption_encrypted[] = "test_string_encryption";

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
 char v0[33]; // [bp-0x38]
 char v1; // [bp-0x37]
 char result; // [bp-0x19]

 puts(g_4021d5);
 printf(g_402004, 10);
 flag1 = 6;
 v5 = 5;
 do
 {
 v6 = flag1;
 flag1 = v5 % (v6 & 4294967295);
 v5 = v6;
 } while (flag1);
 v7 = 0;
 printf(g_402020, ((unsigned int)v6 == 1 ? 20 : 35));
 printf(g_40203c, 225);
 strncpy(v0, param_string_encryption_encrypted, 32);
 v0[32] = 0;
 result = 0;
 if (v0[0])
 {
 ptr = &v1;
 v9 = v0[0];
 do
 {
 *((char *)&((char *)ptr)[1]) = v9 ^ 90;
 v9 = *((char *)ptr);
 ptr = (char *)ptr + 1;
 } while (*((char *)ptr));
 v7 = (unsigned int)v0[0];
 }
 printf(g_402059, v7 + (strlen(v0) & 4294967295) & 4294967295);
 printf(g_402075, 500500);
 printf(g_40209f, 5050);
 printf(g_4020c4, 72);
 printf(g_4020ea, 20);
 v13 = param_division_by_zero(5);
 v14 = param_division_by_zero(0);
 signal(8, NULL);
 printf(g_40210a, (v14 & 4294967295) + (v13 & 4294967295) & 4294967295);
 *((unsigned int *)v0) = 42;
 v15 = param_null_pointer_deref((unsigned int *)v0);
 v16 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 printf(g_402126, (v16 & 4294967295) + (v15 & 4294967295) & 4294967295);
 printf(g_402143, 30);
 printf(g_402160, 0x77359400);
 printf(g_402191, 10);
 return printf(g_4021ae, 47);
}


// Function: sub_401aa9 at 0x401aa9
void sub_401aa9()
{
 main();
 return;
}


// Function: main at 0x401ab0
int main()
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


