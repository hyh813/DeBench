// Angr Decompilation of 7_clang_O3_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <stdlib.h>
#include <stdint.h>

/* CRT stub function _init removed by preprocessor */

// Forward declarations for CRT functions
void frame_dummy(void);
int __do_global_ctors_aux(void);
void deregister_tm_clones(void);
unsigned int register_tm_clones(void);
unsigned int * __do_global_dtors_aux(void);

typedef struct struct_0 {
    char padding_0[10000];
    int field_2ea7;
    char padding_2e47[1000];
} struct_0;

extern void (*g_403ff4)(void);

int _init()
{
 if (g_403ff4)
 g_403ff4();
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 // goto ptr[2]; // Invalid indirect jump removed
 return 0;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 void* v1; // ebx

 // goto (int)v1[16]; // Invalid indirect jump removed
 return 0;
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
void sub_4010fc()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401100
void __x86_get_pc_thunk_bx()
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

static int _ccall(unsigned int op, unsigned int dep1, unsigned int dep2, unsigned int ndep) {
    return 0;
}

unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 char *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 v2 = (struct_0 *)0x403000;
 v3 = (char *)&v2->field_2ea7 + 3;
 v0 = v4;
 if (!(&v3[60] - &v3[60] >> 31) + (&v3[60] - &v3[60] >> 2) >> 1)
 {
 return (&v3[60] - &v3[60] >> 31) + (&v3[60] - &v3[60] >> 2) >> 1;
 }
 else if (*((int *)&v3[4]))
 {
 return ((int (*)(void))(*((int *)&v3[4])))();
 }
 else
 {
 return (&v3[60] - &v3[60] >> 31) + (&v3[60] - &v3[60] >> 2) >> 1;
 }
}


// Function: sub_401197 at 0x401197
void sub_401197()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int * __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 *v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = (unsigned int *)0x403000;
 v6 = (struct_0 *)0x403000;
 ptr = (struct_0 *)(void *)&v6->padding_2e47[11];
 v1 = v8;
 v0 = v9;
 if ((char)((char *)ptr)[60])
 v1 = v8;
 v0 = v9;
 if (((char *)ptr)[60])
 return v5;
 if (*((int *)&ptr->padding_0[16]))
 sub_4010c0(*((int *)&ptr->padding_0[48]));
 v10 = (struct_0 *)&ptr->padding_0[236];
 v11 = *((int *)&ptr->padding_0[64]);
 i = (&ptr->padding_0[232] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[64]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[64]) = v13;
 ((void (*)(void))(*((int *)&v10->padding_0[4 * v13])))();
 v11 = *((int *)&ptr->padding_0[64]);
 } while (*((int *)&ptr->padding_0[64]) < i);
 }
 deregister_tm_clones();
 ptr->padding_0[60] = 1;
 return v5;
}


// Function: sub_40122a at 0x40122a
void sub_40122a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401239
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86_get_pc_thunk_di at 0x40123d
int __x86_get_pc_thunk_di(int a0, int a1)
{
 unsigned int v0; // eax

 return v0;
}


// Forward declarations
int param_fake_branch(unsigned int a0);
unsigned int call_fake_branch(void);
int param_opaque_predicate(unsigned int a0);
unsigned int call_opaque_predicate(void);
int param_instruction_substitution(unsigned int a0);
unsigned int call_instruction_substitution(void);
char * decrypt_string(char *a0, char *p, unsigned int a2, char a3);
int param_string_encryption(void);
int call_string_encryption(void);
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1);
unsigned int call_tail_call_optimized(void);
unsigned int param_non_tail_call(unsigned int a0);
unsigned int call_non_tail_call(void);
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int ptr, unsigned int a3);
unsigned int call_vectorized_loop(void);
int param_link_time_optimization(unsigned int a0);
unsigned int call_link_time_optimization(void);
int div_zero_handler(void);
unsigned int param_division_by_zero(unsigned int a0);
int call_division_by_zero(void);
int segv_handler(void);
unsigned int param_null_pointer_deref(unsigned int *a0);
int call_null_pointer_deref(void);
int param_buffer_overflow_stack(unsigned int a0);
int param_buffer_overflow_heap(unsigned int a0);
unsigned int call_buffer_overflow(void);
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1);
unsigned int call_integer_overflow(void);
unsigned int param_undefined_behavior(unsigned int a0);
unsigned int call_undefined_behavior(void);
unsigned int param_implementation_defined(void);
unsigned int call_implementation_defined(void);
int test_obf_opt_edge(void);

// Function: sub_401241 at 0x401241
void sub_401241(unsigned int a0)
{
 param_fake_branch(0);
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
int sub_401266()
{
 param_opaque_predicate(0);
 return 0;
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
 if (!((char)_ccall(4, 18, v7 + 1, 0)))
 {
 v14 = v6;
 result = v9;
 do
 {
 v8 = result;
 v14 = v8;
 result = ((int)((v14 >> 31 | v14) % v8) | (int)((v14 >> 31 | v14) / v8)) >> 32;
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
 flag1 = ((int)((v2 >> 31 | v2) % result) | (int)((v2 >> 31 | v2) / result)) >> 32;
 v2 = result;
 } while (flag1);
 if (result != 1)
 return 35;
 return 20;
}


// Function: sub_4012fc at 0x4012fc
void sub_4012fc(unsigned int a0)
{
 param_instruction_substitution(0);
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
 decrypt_string(0, 0, 0, 0);
 return 0;
}


// Function: decrypt_string at 0x401330
char * decrypt_string(char *a0, char *p, unsigned int a2, char a3)
{
 unsigned int dst; // eax
 char v1; // al
 char *ptr; // edx

 dst = strncpy(p, a0, a2);
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
 param_string_encryption();
 return 0;
}


// Function: param_string_encryption at 0x401390
int param_string_encryption()
{
 void* ptr; // ecx
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
 *((char *)&ptr[1]) = v5 ^ 90;
 v5 = *((char *)ptr);
 ptr += 1;
 } while (*((char *)ptr));
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
 call_string_encryption();
 return 0;
}


// Function: call_string_encryption at 0x401400
int call_string_encryption()
{
 void* ptr; // ecx
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
 *((char *)&ptr[1]) = v5 ^ 90;
 v5 = *((char *)ptr);
 ptr += 1;
 } while (*((char *)ptr));
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
 param_tail_call_optimized(0, 0);
 return;
}


// Function: param_tail_call_optimized at 0x401470
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 if (a0 > 0)
 a1 = a1 + a0 + (a0 - 1) * (a0 - 1) - (unsigned int)(((a0 - 1) * (a0 - 2) >> 32 | (a0 - 1) * (a0 - 2)) * 0x80000000 >> 32);
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
 param_non_tail_call(0);
 return;
}


// Function: param_non_tail_call at 0x4014b0
unsigned int param_non_tail_call(unsigned int a0)
{
 unsigned int v0; // eax

 if (a0 <= 0)
 return 0;
 v0 = a0 - 1;
 return v0 * v0 + a0 - (unsigned int)((v0 * (a0 - 2) >> 32 | v0 * (a0 - 2)) * 0x80000000 >> 32);
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
 param_vectorized_loop(0, 0, 0, 0);
 return 0;
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

 v0 = v1;
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
 param_link_time_optimization(0);
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
int sub_401636()
{
 div_zero_handler(); /* do not return */
 return 0;
}


// Function: div_zero_handler at 0x401640
extern unsigned int div_zero_caught;
extern jmp_buf jmp_buffer;

int div_zero_handler()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1); /* do not return */
 return 0;
}


// Function: sub_40166b at 0x40166b
int sub_40166b()
{
 param_division_by_zero(0);
 return 0;
}


// Function: param_division_by_zero at 0x401670
extern jmp_buf jmp_buffer;

unsigned int param_division_by_zero(unsigned int a0)
{
 signal(8, div_zero_handler);
 if (!_setjmp(jmp_buffer))
 return (int)((0 | 10) % a0) | (int)((0 | 10) / a0);
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
int sub_40171d()
{
 segv_handler(); /* do not return */
 return 0;
}


// Function: segv_handler at 0x401720
extern jmp_buf segv_buffer;
extern unsigned int segv_caught;

int segv_handler()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 segv_caught = 1;
 longjmp(segv_buffer, 1); /* do not return */
}


// Function: sub_40174b at 0x40174b
int sub_40174b()
{
 param_null_pointer_deref(0);
 return 0;
}


// Function: param_null_pointer_deref at 0x401750
extern jmp_buf segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *a0)
{
 signal(11, segv_handler);
 if (!_setjmp(segv_buffer))
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
 param_buffer_overflow_stack(0);
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
 param_buffer_overflow_heap(0);
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
 param_integer_overflow(0, 0);
 return;
}


// Function: param_integer_overflow at 0x401840
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // ecx
 unsigned int v1; // eax
 unsigned int v3; // eax

 v0 = a1 + a0;
 if (a0 > 0 && a1 > 0 && v0 < 0)
 return 4294967295;
 if (v0 <= 0)
 v1 = v0;
 else
 v1 = 4294967294;
 v3 = v1;
 if ((a0 & a1) < 0)
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
 param_undefined_behavior(0);
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


// Function: sub_4018b6 at 0x4018b6
int sub_4018b6()
{
 test_obf_opt_edge();
 return 0;
}


// Function: test_obf_opt_edge at 0x4018c0
extern char g_402008;
extern char g_402024;
extern char g_402040;
extern char g_40205d;
extern char g_402079;
extern char g_4020a3;
extern char g_4020c8;
extern char g_4020ee;
extern char g_40210e;
extern char g_40212a;
extern char g_402147;
extern char g_402164;
extern char g_402195;
extern char g_4021b2;
extern char g_4021d9;
extern char param_string_encryption_encrypted;

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

 puts(&g_4021d9);
 printf(&g_402008);
 flag2 = 6;
 v5 = 5;
 do
 {
 flag1 = flag2;
 flag2 = ((int)((v5 >> 31 | v5) % flag1) | (int)((v5 >> 31 | v5) / flag1)) >> 32;
 v5 = flag1;
 } while (flag2);
 printf(&g_402024);
 printf(&g_402040);
 strncpy(&v0, &param_string_encryption_encrypted, 32);
 result = 0;
 if (v0)
 {
 ptr = &v1;
 v8 = v0;
 do
 {
 *((char *)&ptr[1]) = v8 ^ 90;
 v8 = *((char *)ptr);
 ptr += 1;
 } while (*((char *)ptr));
 }
 strlen(&v0);
 printf(&g_40205d);
 printf(&g_402079);
 printf(&g_4020a3);
 printf(&g_4020c8);
 printf(&g_4020ee);
 param_division_by_zero(5);
 param_division_by_zero(0);
 signal(8, NULL);
 printf(&g_40210e);
 *((unsigned int *)&v0) = 42;
 param_null_pointer_deref(&v0);
 param_null_pointer_deref(NULL);
 signal(11, NULL);
 printf(&g_40212a);
 printf(&g_402147);
 printf(&g_402164);
 printf(&g_402195);
 return printf(&g_4021b2);
}


// Function: sub_401b08 at 0x401b08
int sub_401b08()
{
 main();
 return 0;
}


// Function: main at 0x401b10
int main()
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

int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 void (*v4)(void); // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 v2 = (struct_0 *)0x403000;
 ptr = &v2->padding_0[239];
 v4 = (void (*)(void))*((int *)&ptr->padding_0[244]);
 if (*((int *)&ptr->padding_0[244]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[244];
 do
 {
 p = v6;
 v4();
 v4 = (void (*)(void))*((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401b72 at 0x401b72
void sub_401b72()
{
}



/* CRT stub function _fini removed by preprocessor */


