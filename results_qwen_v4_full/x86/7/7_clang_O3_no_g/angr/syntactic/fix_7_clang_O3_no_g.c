// Angr Decompilation of 7_clang_O3_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
    char padding_0[512];
} struct_0;

extern struct_0 *g_403ff4;
struct_0 *g_403ff4 = NULL;

unsigned int div_zero_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
unsigned int segv_caught = 0;

void frame_dummy() {}
unsigned int __do_global_ctors_aux();
void deregister_tm_clones() {}
unsigned int register_tm_clones();
unsigned int __do_global_dtors_aux(void);
int param_fake_branch(unsigned int a0);
unsigned int call_fake_branch();
int param_opaque_predicate(unsigned int a0);
unsigned int call_opaque_predicate();
int param_instruction_substitution(unsigned int a0);
unsigned int call_instruction_substitution();
char* decrypt_string(char *a0, char *p, unsigned int a2, char a3);
int param_string_encryption();
int call_string_encryption();
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1);
unsigned int call_tail_call_optimized();
unsigned int param_non_tail_call(unsigned int a0);
unsigned int call_non_tail_call();
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int ptr, unsigned int a3);
unsigned int call_vectorized_loop();
int param_link_time_optimization(unsigned int a0);
unsigned int call_link_time_optimization();
void div_zero_handler(int sig);
unsigned int param_division_by_zero(unsigned int a0);
int call_division_by_zero();
void segv_handler(int sig);
unsigned int param_null_pointer_deref(unsigned int *a0);
int call_null_pointer_deref();
int param_buffer_overflow_stack(unsigned int a0);
int param_buffer_overflow_heap(unsigned int a0);
unsigned int call_buffer_overflow();
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1);
unsigned int call_integer_overflow();
unsigned int param_undefined_behavior(unsigned int a0);
unsigned int call_undefined_behavior();
unsigned int param_implementation_defined();
unsigned int call_implementation_defined();
int test_obf_opt_edge();
unsigned int main();

static int _init()
{
 if (g_403ff4)
 ((void(*)())g_403ff4)();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 ptr[0] = 0;
 ptr[1] = 0;
 ptr[2] = 0;
 v0 = ptr[1];
 return ptr[2];
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 void* v1; // ebx
 int dummy[20];

 v1 = dummy;
 return ((int*)v1)[16];
}


// Function: sub_4010c6 at 0x4010c6
void sub_4010c6()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010fb at 0x4010fb
void sub_4010fb()
{
}


// Function: sub_4010fc at 0x4010fc
void sub_4010fc(void)
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401100
void __x86_get_pc_thunk_bx(void)
{
 return;
}


// Function: sub_401104 at 0x401104
void sub_401104()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401143 at 0x401143
void sub_401143()
{
}


// Function: sub_401149 at 0x401149
void sub_401149()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int register_tm_clones()
{
 return 0;
}


// Function: sub_401197 at 0x401197
void sub_401197(void)
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int __do_global_dtors_aux(void)
{
 return 0;
}


// Function: sub_40122a at 0x40122a
void sub_40122a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401239
void* __x86_get_pc_thunk_dx()
{
 static int dummy = 0;
 return &dummy;
}


// Function: __x86_get_pc_thunk_di at 0x40123d
unsigned int* __x86_get_pc_thunk_di(unsigned int a0, char* a1)
{
 unsigned int v0 = 0; // eax

 return (unsigned int*)&v0;
}


// Function: sub_401241 at 0x401241
void sub_401241(unsigned int a0)
{
 param_fake_branch(a0);
 return;
}


// Function: param_fake_branch at 0x401250
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: sub_401255 at 0x401255
void sub_401255()
{
 call_fake_branch();
 return;
}


// Function: call_fake_branch at 0x401260
unsigned int call_fake_branch()
{
 return 10;
}


// Function: sub_401266 at 0x401266
void sub_401266()
{
 param_opaque_predicate(0);
 return;
}


// Function: param_opaque_predicate at 0x401270
int param_opaque_predicate(unsigned int a0)
{
 unsigned int v3; // ebx
 unsigned int v4; // edi
 unsigned int v13; // cc_ndep
 unsigned int v14; // eax
 unsigned int result; // edx
 unsigned int v5; // esi
 unsigned int v6; // esi
 unsigned int v7; // edi
 unsigned int v8; // ebx
 unsigned int v9; // edi
 unsigned int v10; // cc_op
 unsigned int v11; // cc_dep1
 unsigned int v12; // cc_dep2
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = a0;
 v7 = v6;
 v8 = 4294967295;
 v9 = v7 + 1;
 if (0)
 {
 v14 = v6;
 result = v9;
 do
 {
 v8 = result;
 v14 = v8;
 result = v14 % v8;
 } while (result);
 }
 if (v8 != 1 || (v9 * v9 ^ (v6 * 2 | 1) + v6 * v6))
 return v6 * 3 + 20;
 return v6 * 2 + 10;
}


// Function: sub_4012c1 at 0x4012c1
void sub_4012c1()
{
 call_opaque_predicate();
 return;
}


// Function: call_opaque_predicate at 0x4012d0
unsigned int call_opaque_predicate()
{
 unsigned int flag1; // edx
 unsigned int v2; // eax
 unsigned int result; // ecx

 flag1 = 6;
 v2 = 5;
 do
 {
 result = flag1;
 flag1 = v2 % result;
 v2 = result;
 } while (flag1);
 if (result != 1)
 return 35;
 return 20;
}


// Function: sub_4012fc at 0x4012fc
void sub_4012fc(unsigned int a0)
{
 param_instruction_substitution(a0);
 return;
}


// Function: param_instruction_substitution at 0x401300
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 21 + (a0 & 15) + (a0 >> 1);
}


// Function: sub_401316 at 0x401316
void sub_401316()
{
 call_instruction_substitution();
 return;
}


// Function: call_instruction_substitution at 0x401320
unsigned int call_instruction_substitution()
{
 return 225;
}


// Function: sub_401326 at 0x401326
int sub_401326()
{
 return 0;
}


// Function: decrypt_string at 0x401330
char* decrypt_string(char *a0, char *p, unsigned int a2, char a3)
{
 unsigned int dst; // eax
 char v1; // al
 char *ptr; // edx

 dst = (unsigned int)strncpy(p, a0, a2);
 p[1 + a2] = 0;
 v1 = *(p);
 if (!*(p))
 return p;
 ptr = p + 1;
 do
 {
 ptr[1] = v1 ^ a3;
 v1 = ptr[0];
 ptr = &ptr[1];
 } while (ptr[0]);
 return p;
}


// Function: sub_401385 at 0x401385
int sub_401385()
{
 return param_string_encryption();
}


// Function: param_string_encryption at 0x401390
int param_string_encryption()
{
 char *ptr; // ecx
 char v5; // al
 unsigned int v8; // edi
 char flag1; // [bp-0x2c]
 char v1; // [bp-0x2b]
 char result; // [bp-0xd]

 result = 0;
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
 return strlen(&flag1) + v8;
}


// Function: sub_4013fc at 0x4013fc
int sub_4013fc()
{
 return call_string_encryption();
}


// Function: call_string_encryption at 0x401400
int call_string_encryption()
{
 char *ptr; // ecx
 char v5; // al
 unsigned int v8; // edi
 char flag1; // [bp-0x2c]
 char v1; // [bp-0x2b]
 char result; // [bp-0xd]

 result = 0;
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
 return strlen(&flag1) + v8;
}


// Function: sub_40146c at 0x40146c
void sub_40146c(unsigned int a0, unsigned int a1)
{
 param_tail_call_optimized(a0, a1);
 return;
}


// Function: param_tail_call_optimized at 0x401470
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 if (a0 > 0)
 a1 = a1 + a0 + (a0 - 1) * (a0 - 1);
 return a1;
}


// Function: sub_40149a at 0x40149a
void sub_40149a()
{
 call_tail_call_optimized();
 return;
}


// Function: call_tail_call_optimized at 0x4014a0
unsigned int call_tail_call_optimized()
{
 return 500500;
}


// Function: sub_4014a6 at 0x4014a6
void sub_4014a6(unsigned int a0)
{
 param_non_tail_call(a0);
 return;
}


// Function: param_non_tail_call at 0x4014b0
unsigned int param_non_tail_call(unsigned int a0)
{
 unsigned int v0; // eax

 if (a0 <= 0)
 return 0;
 v0 = a0 - 1;
 return v0 * v0 + a0;
}


// Function: sub_4014d8 at 0x4014d8
void sub_4014d8()
{
 call_non_tail_call();
 return;
}


// Function: call_non_tail_call at 0x4014e0
unsigned int call_non_tail_call()
{
 return 5050;
}


// Function: sub_4014e6 at 0x4014e6
int sub_4014e6()
{
 return param_vectorized_loop(0, 0, 0, 0);
}


// Function: param_vectorized_loop at 0x4014f0
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int ptr, unsigned int a3)
{
 unsigned int v1; // eax
 unsigned int result; // esi
 unsigned int idx; // ebp
 unsigned int index; // ebp
 unsigned int flag1; // esi
 unsigned int off; // edi
 unsigned int v7; // eax
 unsigned int pos; // edx
 unsigned int v0; // [bp-0x14]

 v0 = 0;
 if (a3 <= 0)
 return 0;
 result = a3 & 3;
 idx = 0;
 v0 = a3 - 1;
 if (v0 >= 3)
 {
 idx = 0;
 do
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a1 + idx * 4)) + *((int *)(a0 + idx * 4));
 *((int *)(ptr + idx * 4 + 4)) = *((int *)(a1 + idx * 4 + 4)) + *((int *)(a0 + idx * 4 + 4));
 *((int *)(ptr + idx * 4 + 8)) = *((int *)(a1 + idx * 4 + 8)) + *((int *)(a0 + idx * 4 + 8));
 *((int *)(ptr + idx * 4 + 12)) = *((int *)(a1 + idx * 4 + 12)) + *((int *)(a0 + idx * 4 + 12));
 idx += 4;
 } while ((a3 & 0xfffffffc) != idx);
 }
 if (result)
 {
 index = 0;
 do
 {
 *((int *)(ptr + idx * 4 + index * 4)) = *((int *)(a1 + idx * 4 + index * 4)) + *((int *)(a0 + idx * 4 + index * 4));
 index += 1;
 } while (result != index);
 }
 if (a3 > 0)
 {
 flag1 = a3 & 7;
 if (v0 < 7)
 {
 off = 0;
 v7 = 0;
 }
 else
 {
 off = 0;
 v7 = 0;
 do
 {
 v7 = v7 + *((int *)(ptr + off * 4)) + *((int *)(ptr + off * 4 + 4)) + *((int *)(ptr + off * 4 + 8)) + *((int *)(ptr + off * 4 + 12)) + *((int *)(ptr + off * 4 + 16)) + *((int *)(ptr + off * 4 + 20)) + *((int *)(ptr + off * 4 + 24)) + *((int *)(ptr + off * 4 + 28));
 off += 8;
 } while ((a3 & 0xfffffff8) != off);
 }
 if (!flag1)
 return v7;
 pos = 0;
 do
 {
 v7 += *((int *)(ptr + off * 4 + pos * 4));
 pos += 1;
 } while (flag1 != pos);
 return v7;
 }
 return 0;
}


// Function: sub_401602 at 0x401602
void sub_401602()
{
 call_vectorized_loop();
 return;
}


// Function: call_vectorized_loop at 0x401610
unsigned int call_vectorized_loop()
{
 return 72;
}


// Function: sub_401616 at 0x401616
void sub_401616(unsigned int a0)
{
 param_link_time_optimization(a0);
 return;
}


// Function: param_link_time_optimization at 0x401620
int param_link_time_optimization(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: sub_40162a at 0x40162a
void sub_40162a()
{
 call_link_time_optimization();
 return;
}


// Function: call_link_time_optimization at 0x401630
unsigned int call_link_time_optimization()
{
 return 20;
}


// Function: sub_401636 at 0x401636
void sub_401636()
{
 div_zero_handler(8); /* do not return */
}


// Function: div_zero_handler at 0x401640
void div_zero_handler(int sig)
{
    div_zero_caught = 1;
    longjmp(jmp_buffer, 1); /* do not return */
}


// Function: sub_40166b at 0x40166b
void sub_40166b()
{
 param_division_by_zero(1);
 return;
}


// Function: param_division_by_zero at 0x401670
unsigned int param_division_by_zero(unsigned int a0)
{
    signal(8, div_zero_handler);
    if (!setjmp(jmp_buffer))
    return 10 / a0;
 return 4294967295;
}


// Function: sub_4016c9 at 0x4016c9
int sub_4016c9()
{
 call_division_by_zero();
 return 0;
}


// Function: call_division_by_zero at 0x4016d0
int call_division_by_zero()
{
 unsigned int v1; // eax
 unsigned int v2; // eax

 v1 = param_division_by_zero(5);
 v2 = param_division_by_zero(0);
 signal(8, NULL);
 return v2 + v1;
}


// Function: sub_40171d at 0x40171d
void sub_40171d()
{
 segv_handler(11); /* do not return */
}


// Function: segv_handler at 0x401720
void segv_handler(int sig)
{
    segv_caught = 1;
    longjmp(segv_buffer, 1); /* do not return */
}


// Function: sub_40174b at 0x40174b
void sub_40174b()
{
 unsigned int val = 42;
 param_null_pointer_deref(&val);
 return;
}


// Function: param_null_pointer_deref at 0x401750
unsigned int param_null_pointer_deref(unsigned int *a0)
{
    signal(11, segv_handler);
    if (!setjmp(segv_buffer))
    return *(a0);
 return 4294967295;
}


// Function: sub_4017a2 at 0x4017a2
int sub_4017a2()
{
 call_null_pointer_deref();
 return 0;
}


// Function: call_null_pointer_deref at 0x4017b0
int call_null_pointer_deref()
{
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v0[1]; // [bp-0x10]

 v0[0] = 42;
 v2 = param_null_pointer_deref(&v0);
 v3 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 return v3 + v2;
}


// Function: sub_401805 at 0x401805
void sub_401805(unsigned int a0)
{
 param_buffer_overflow_stack(a0);
 return;
}


// Function: param_buffer_overflow_stack at 0x401810
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: sub_401815 at 0x401815
void sub_401815(unsigned int a0)
{
 param_buffer_overflow_heap(a0);
 return;
}


// Function: param_buffer_overflow_heap at 0x401820
int param_buffer_overflow_heap(unsigned int a0)
{
 return a0;
}


// Function: sub_401825 at 0x401825
void sub_401825()
{
 call_buffer_overflow();
 return;
}


// Function: call_buffer_overflow at 0x401830
unsigned int call_buffer_overflow()
{
 return 30;
}


// Function: sub_401836 at 0x401836
void sub_401836(unsigned int a0, unsigned int a1)
{
 param_integer_overflow(a0, a1);
 return;
}


// Function: param_integer_overflow at 0x401840
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // ecx
 unsigned int v1; // eax
 unsigned int v3; // eax

 v0 = a1 + a0;
 if (a0 > 0 && a1 > 0 && v0 < a0)
 return 4294967295;
 if (v0 == 0)
 v1 = v0;
 else
 v1 = 4294967294;
 v3 = v1;
 if ((a0 & a1) == 0)
 return v3;
 return v0;
}


// Function: call_integer_overflow at 0x401870
unsigned int call_integer_overflow()
{
 return 0x77359400;
}


// Function: sub_401876 at 0x401876
void sub_401876(unsigned int a0)
{
 param_undefined_behavior(a0);
 return;
}


// Function: param_undefined_behavior at 0x401880
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401887 at 0x401887
void sub_401887()
{
 call_undefined_behavior();
 return;
}


// Function: call_undefined_behavior at 0x401890
unsigned int call_undefined_behavior()
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
unsigned int param_implementation_defined()
{
 return 43;
}


// Function: sub_4018a6 at 0x4018a6
void sub_4018a6()
{
 call_implementation_defined();
 return;
}


// Function: call_implementation_defined at 0x4018b0
unsigned int call_implementation_defined()
{
 return 43;
}


char g_402008[] = "Test 1\n";
char g_402024[] = "Test 2\n";
char g_402040[] = "Test 3\n";
char g_40205d[] = "Test 4\n";
char g_402079[] = "Test 5\n";
char g_4020a3[] = "Test 6\n";
char g_4020c8[] = "Test 7\n";
char g_4020ee[] = "Test 8\n";
char g_40210e[] = "Test 9\n";
char g_40212a[] = "Test 10\n";
char g_402147[] = "Test 11\n";
char g_402164[] = "Test 12\n";
char g_402195[] = "Test 13\n";
char g_4021b2[] = "Test 14\n";
char g_4021d9[] = "Starting tests...\n";
char param_string_encryption_encrypted[32] = "encrypted_string_here!";

// Function: sub_4018b6 at 0x4018b6
int sub_4018b6()
{
 test_obf_opt_edge();
 return 0;
}


// Function: test_obf_opt_edge at 0x4018c0
int test_obf_opt_edge()
{
 unsigned int flag2; // edx
 unsigned int v5; // eax
 unsigned int flag1; // ecx
 void* ptr; // ecx
 char v8; // al
 char v0[1]; // [bp-0x30]
 char v1; // [bp-0x2f]
 char result; // [bp-0x11]

 puts(g_4021d9);
 printf(g_402008);
 flag2 = 6;
 v5 = 5;
 do
 {
 flag1 = flag2;
 flag2 = v5 % flag1;
 v5 = flag1;
 } while (flag2);
 printf(g_402024);
 printf(g_402040);
 strncpy(&v0, param_string_encryption_encrypted, 32);
 result = 0;
 if (v0[0])
 {
 ptr = &v1;
 v8 = v0[0];
 do
 {
 *((char *)&ptr[1]) = v8 ^ 90;
 v8 = *((char *)ptr);
 ptr += 1;
 } while (*((char *)ptr));
 }
 strlen(&v0);
 printf(g_40205d);
 printf(g_402079);
 printf(g_4020a3);
 printf(g_4020c8);
 printf(g_4020ee);
 param_division_by_zero(5);
 param_division_by_zero(0);
 signal(8, NULL);
 printf(g_40210e);
 *((unsigned int *)&v0) = 42;
 param_null_pointer_deref((unsigned int*)&v0);
 param_null_pointer_deref(NULL);
 signal(11, NULL);
 printf(g_40212a);
 printf(g_402147);
 printf(g_402164);
 printf(g_402195);
 return printf(g_4021b2);
}


// Function: sub_401b08 at 0x401b08
int sub_401b08()
{
 main();
 return 0;
}


// Function: main at 0x401b10
unsigned int main()
{
 test_obf_opt_edge();
 return 0;
}


// Function: sub_401b2c at 0x401b2c
void sub_401b2c()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_401b72 at 0x401b72
void sub_401b72()
{
}



/* CRT stub function _fini removed by preprocessor */


