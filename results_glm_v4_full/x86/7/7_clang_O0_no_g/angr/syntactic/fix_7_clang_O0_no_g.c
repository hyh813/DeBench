// Angr Decompilation of 7_clang_O0_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>
#include <stdint.h>
#include <unistd.h>
#include <stddef.h>
#include <link.h>

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
    unsigned int padding_0[100];
    unsigned int padding_1[100];
} struct_0;

extern struct_0 *g_404ff4;

/* Global variable definitions */
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
unsigned int div_zero_caught = 0;
unsigned int segv_caught = 0;
char param_string_encryption_encrypted[32] = "encrypted_string_placeholder";
char g_40320c[32] = "global_data_placeholder";
char g_40300d[32] = "Test output format string\n";

/* Global variable declarations */
extern char *_GLOBAL_OFFSET_TABLE_;

/* Forward declarations */
unsigned int param_fake_branch(unsigned int a0);
int call_fake_branch(void);
int param_opaque_predicate(unsigned int a0);
int call_opaque_predicate(void);
int param_instruction_substitution(unsigned int a0);
int call_instruction_substitution(void);
char *decrypt_string(char *a0, char *a1, unsigned int n, char a3);
unsigned int param_string_encryption(void);
int call_string_encryption(void);
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1);
unsigned int call_tail_call_optimized(void);
unsigned int param_non_tail_call(unsigned int a0);
int call_non_tail_call(void);
unsigned int param_vectorized_loop(unsigned int *a0, unsigned int *a1, unsigned int *ptr, unsigned int a3);
unsigned int call_vectorized_loop(void);
unsigned int param_link_time_optimization(unsigned int a0);
int lto_target_func(int a0, int a1);
unsigned int call_link_time_optimization(void);
void div_zero_handler(int sig);
unsigned int param_division_by_zero(unsigned int a0);
unsigned int call_division_by_zero(void);
void segv_handler(int sig);
unsigned int param_null_pointer_deref(unsigned int *ptr);
unsigned int call_null_pointer_deref(void);
unsigned int param_buffer_overflow_stack(unsigned int a0);
unsigned int param_buffer_overflow_heap(unsigned int a0);
int call_buffer_overflow(void);
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1);
int call_integer_overflow(void);
unsigned int param_undefined_behavior(unsigned int a0);
int call_undefined_behavior(void);
unsigned int param_implementation_defined(void);
unsigned int call_implementation_defined(void);
int test_obf_opt_edge(void);
unsigned int __do_global_dtors_aux(void);
void sub_4010f0(int arg);

/* Function declarations */
void frame_dummy(void);
unsigned int __do_global_ctors_aux(void);
void deregister_tm_clones(void);
unsigned int register_tm_clones(void);
unsigned int __x86_get_pc_thunk_dx(void);
int __x86_get_pc_thunk_di(int arg);
unsigned int __x86_get_pc_thunk_bx(void);
unsigned int __x86_get_pc_thunk_dx_inline(void);

int _init()
{
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3] = {0}; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 /* goto ptr[2]; - indirect jump not supported in C */
 return 0;
}


// Function: sub_4010f0 at 0x4010f0
void sub_4010f0(int arg)
{
 (void)arg;
 void* v1; // ebx

 /* goto (int)v1[16]; - indirect jump not supported in C */
 return;
}


// Function: sub_4010f6 at 0x4010f6
void sub_4010f6()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40112b at 0x40112b
void sub_40112b()
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4198699 */
}


// Function: sub_40112c at 0x40112c
void sub_40112c()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401130
unsigned int __x86_get_pc_thunk_bx(void)
{
 extern unsigned int _GLOBAL_OFFSET_TABLE_;
 return (unsigned int)(uintptr_t)&_GLOBAL_OFFSET_TABLE_;
}


// Function: sub_401134 at 0x401134
void sub_401134()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401173 at 0x401173
void sub_401173()
{
}


// Function: sub_401179 at 0x401179
void sub_401179()
{
 register_tm_clones();
 return;
}



typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int register_tm_clones()
{
 struct_0 *v2 = g_404ff4; // edx
 struct_0 *v3; // edx
 unsigned int v4 = 0; // ebx
 unsigned int v0; // [bp-0x8]

 v0 = __x86_get_pc_thunk_dx();
 v3 = (struct_0 *)((char *)v2 + 60);
 v0 = v4;
 if (!(&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1)
 {
 return (&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1;
 }
 else if (v3 && *((int *)&v3->padding_0[4]))
 {
 /* Function pointer call commented out */
 /* return (*((int *)&v3->padding_0[4]))(&v3->padding_0[72], (&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1); */
 return (&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1;
 }
 else
 {
 return (&v3->padding_0[72] - &v3->padding_0[72] >> 31) + (&v3->padding_0[72] - &v3->padding_0[72] >> 2) >> 1;
 }
}


// Function: sub_4011c7 at 0x4011c7
void sub_4011c7()
{
 __do_global_dtors_aux();
}



unsigned int __do_global_dtors_aux()
{
 struct_0 *v6 = NULL; // edi
 struct_0 *ptr; // edi
 unsigned int v8 = 0; // esi
 unsigned int v9 = 0; // ebx
 struct_0 *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2 = 0; // [bp-0x8]
 char v3; // [bp+0x0]

 __x86_get_pc_thunk_di(*((int *)&v2));
 ptr = (struct_0 *)((char *)v6 + 44);
 v1 = v8;
 v0 = v9;
 if (ptr && ptr->padding_0[72])
 return 0;
 if (ptr && *((int *)&ptr->padding_0[16]))
 sub_4010f0(*((int *)&ptr->padding_0[60]));
 v10 = &ptr->padding_0[236];
 v11 = *((int *)&ptr->padding_0[76]);
 i = (&ptr->padding_0[232] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[76]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[76]) = v13;
 /* (*((int *)&v10->padding_0[4 * v13]))();  // Function pointer call commented out */
 v11 = *((int *)&ptr->padding_0[76]);
 } while (*((int *)&ptr->padding_0[76]) < i);
 }
 v14 = (unsigned int)deregister_tm_clones();
 if (ptr)
 ptr->padding_0[72] = 1;
 return v14;
}


// Function: sub_40125a at 0x40125a
void sub_40125a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401269
unsigned int __x86_get_pc_thunk_dx(void)
{
 extern unsigned int _GLOBAL_OFFSET_TABLE_;
 return (unsigned int)(uintptr_t)&_GLOBAL_OFFSET_TABLE_;
}


// Function: __x86.get_pc_thunk_di at 0x40126d
int __x86_get_pc_thunk_di(int arg)
{
 (void)arg;
 extern unsigned int _GLOBAL_OFFSET_TABLE_;
 return (int)(uintptr_t)&_GLOBAL_OFFSET_TABLE_;
}


// Function: __x86_get_pc_thunk_dx_inline at 0x401271
unsigned int __x86_get_pc_thunk_dx_inline(void)
{
 extern unsigned int _GLOBAL_OFFSET_TABLE_;
 return (unsigned int)(uintptr_t)&_GLOBAL_OFFSET_TABLE_;
}


// Function: sub_401271 at 0x401271
int sub_401271()
{
 param_fake_branch(10);
 return 0;
}


// Function: param_fake_branch at 0x401280

unsigned int param_fake_branch(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v0 = (unsigned int)(uintptr_t)_GLOBAL_OFFSET_TABLE_;
 v2 = a0;
 if (a0 * a0 < 0)
 v2 = v2 * 2 - 559038737;
 v1 = v0 - 8184;
 if (strlen(v1) >= 0)
 return v2;
 v2 += 1000;
 return v2;
}


// Function: sub_4012f2 at 0x4012f2
int sub_4012f2()
{
 call_fake_branch();
 return 0;
}


// Function: call_fake_branch at 0x401300
int call_fake_branch()
{
 return param_fake_branch(10);
}


// Function: sub_401323 at 0x401323
void sub_401323(unsigned int a0)
{
 param_opaque_predicate(a0);
 return;
}


// Function: param_opaque_predicate at 0x401330
int param_opaque_predicate(unsigned int a0)
{
 unsigned int flag1; // [bp-0x20]
 unsigned int result; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int flag3; // [bp-0x14]
 unsigned int i; // [bp-0x10]
 unsigned int flag2; // [bp-0xc]
 unsigned int v6; // [bp-0x8]

 flag2 = a0 * a0 + a0 * 2 + 1 == (a0 + 1) * (a0 + 1);
 i = a0;
 for (flag3 = a0 + 1; flag3; i = v2)
 {
 v2 = flag3;
 flag3 = ((int)(((int64_t)i) % flag3)) >> 32;
 }
 result = i == 1;
 flag1 = (a0 ^ 2863311530 ^ 2863311530) == a0;
 if (flag2 && result && flag1)
 {
 v6 = a0 * 2 + 10;
 return v6;
 }
 v6 = a0 * 3 + 20;
 return v6;
}


// Function: sub_401406 at 0x401406
int sub_401406()
{
 call_opaque_predicate();
 return 0;
}


// Function: call_opaque_predicate at 0x401410
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


// Function: sub_401433 at 0x401433
void sub_401433(unsigned int a0)
{
 param_instruction_substitution(a0);
 return;
}


// Function: param_instruction_substitution at 0x401440
int param_instruction_substitution(unsigned int a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0x8]

 v3 = a0 * 6;
 v2 = a0 >> 1;
 v1 = a0 & 15;
 v0 = a0 * 15;
 return v3 + v2 + v1 + v0;
}


// Function: sub_401495 at 0x401495
int sub_401495()
{
 call_instruction_substitution();
 return 0;
}


// Function: call_instruction_substitution at 0x4014a0
int call_instruction_substitution()
{
 return param_instruction_substitution(10);
}


// Function: sub_4014c3 at 0x4014c3
int sub_4014c3()
{
 char buf[32];
 decrypt_string("test", buf, 4, 90);
 return 0;
}


// Function: decrypt_string at 0x4014d0
char * decrypt_string(char *a0, char *a1, unsigned int n, char a3)
{
 char *v0; // [bp-0xc]

 strncpy(a1, a0, n);
 a1[1 + n] = 0;
 for (v0 = a1; *(v0); v0 += 1)
 {
 *(v0) = *(v0) ^ a3;
 }
 return a1;
}


// Function: sub_40154c at 0x40154c
int sub_40154c()
{
 param_string_encryption();
 return;
}


// Function: param_string_encryption at 0x401550
unsigned int param_string_encryption()
{
 unsigned int v0; // [bp-0x2c]
 char v1[32]; // [bp-0x28]

 v0 = (unsigned int)(uintptr_t)_GLOBAL_OFFSET_TABLE_;
 decrypt_string(param_string_encryption_encrypted, v1, 32, 90);
 return (unsigned int)(strlen(v1) + (int)(uintptr_t)v1);
}


// Function: sub_4015a6 at 0x4015a6
int sub_4015a6()
{
 call_string_encryption();
 return 0;
}


// Function: call_string_encryption at 0x4015b0
int call_string_encryption()
{
 return param_string_encryption();
}


// Function: sub_4015cc at 0x4015cc
int sub_4015cc()
{
 param_tail_call_optimized(100, 0);
 return 0;
}


// Function: param_tail_call_optimized at 0x4015d0

unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = (unsigned int)(uintptr_t)_GLOBAL_OFFSET_TABLE_;
 v1 = (a0 <= 0 ? a1 : param_tail_call_optimized(a0 - 1, a1 + a0));
 return v1;
}


// Function: sub_401628 at 0x401628
int sub_401628()
{
 call_tail_call_optimized();
 return 0;
}


// Function: call_tail_call_optimized at 0x401630
unsigned int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


// Function: sub_40165f at 0x40165f
int sub_40165f()
{
 param_non_tail_call(100);
 return 0;
}


// Function: param_non_tail_call at 0x401660
unsigned int param_non_tail_call(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = (unsigned int)(uintptr_t)_GLOBAL_OFFSET_TABLE_;
 v1 = (a0 <= 0 ? 0 : a0 + param_non_tail_call(a0 - 1));
 return v1;
}


// Function: sub_4016b9 at 0x4016b9
int sub_4016b9()
{
 call_non_tail_call();
 return;
}


// Function: call_non_tail_call at 0x4016c0
int call_non_tail_call()
{
 return param_non_tail_call(100);
}


// Function: sub_4016e3 at 0x4016e3
void sub_4016e3(void)
{
 unsigned int a0 = 0;
 unsigned int v3[1] = {0};
 param_vectorized_loop(&a0, &a0, v3, 8);
 return;
}


// Function: param_vectorized_loop at 0x4016f0
unsigned int param_vectorized_loop(unsigned int *a0, unsigned int *a1, unsigned int *ptr, unsigned int a3)
{
 unsigned int index; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int idx; // [bp-0x8]

 for (idx = 0; idx < a3; idx += 1)
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a0 + idx * 4)) + *((int *)(a1 + idx * 4));
 }
 v1 = 0;
 for (index = 0; index < a3; index += 1)
 {
 v1 += *((int *)(ptr + index * 4));
 }
 return v1;
}


// Function: sub_40177d at 0x40177d
int sub_40177d()
{
 call_vectorized_loop();
 return;
}


// Function: call_vectorized_loop at 0x401780
unsigned int call_vectorized_loop()
{
 unsigned int v0; // [bp-0x6c]
 char v1[32]; // [bp-0x68]
 char v2[32]; // [bp-0x48]
 char v3[32]; // [bp-0x28]

 v0 = (unsigned int)(uintptr_t)_GLOBAL_OFFSET_TABLE_;
 memcpy(&v3, &g_40320c, 32);
 memcpy(&v2, (char*)((uintptr_t)v0 - 7636), 32);
 memset(&v1, 0, 32);
 return param_vectorized_loop((unsigned int*)&v3, (unsigned int*)&v2, (unsigned int*)&v1, 8);
}


// Function: sub_40181d at 0x40181d
int sub_40181d()
{
 param_link_time_optimization(0);
 return 0;
}


// Function: param_link_time_optimization at 0x401820
unsigned int param_link_time_optimization(unsigned int a0)
{
 return lto_target_func(a0, 0);
}


// Function: sub_401845 at 0x401845
int sub_401845(unsigned int a1)
{
 (void)a1;
 return lto_target_func(0, 0);
}


// Function: lto_target_func at 0x401850
int lto_target_func(int a0, int a1)
{
 return a0 * 2 + 10;
}


// Function: sub_401861 at 0x401861
int sub_401861()
{
 return call_link_time_optimization();
}


// Function: call_link_time_optimization at 0x401870
unsigned int call_link_time_optimization()
{
 return (unsigned int)param_link_time_optimization(5);
}


// Function: sub_401893 at 0x401893
int sub_401893()
{
 div_zero_handler(0); /* do not return */
 return 0;
}


// Function: div_zero_handler at 0x4018a0
void div_zero_handler(int sig)
{
 (void)sig;
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1); /* do not return */
}


// Function: sub_4018d6 at 0x4018d6
int sub_4018d6()
{
 return param_division_by_zero(0);
}


// Function: param_division_by_zero at 0x4018e0

unsigned int param_division_by_zero(unsigned int a0)
{
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 signal(8, (void (*)(int))div_zero_handler);
 if (setjmp(jmp_buffer))
 {
 v2 = 4294967295;
 return v2;
 }
 if (a0 == 0)
 {
 v2 = 4294967295;
 }
 else
 {
 v1 = (10 % a0) + (10 / a0);
 v2 = v1;
 }
 return v2;
}


// Function: call_division_by_zero at 0x401950

unsigned int call_division_by_zero()
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v0 = (unsigned int)(uintptr_t)_GLOBAL_OFFSET_TABLE_;
 v2 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, (void (*)(int))NULL);
 return v2 + v1;
}


// Function: sub_4019ae at 0x4019ae
int sub_4019ae()
{
 segv_handler(0); /* do not return */
 return 0;
}


// Function: segv_handler at 0x4019b0
void segv_handler(int sig)
{
 (void)sig;
 segv_caught = 1;
 longjmp(segv_buffer, 1); /* do not return */
}


// Function: sub_4019e6 at 0x4019e6
int sub_4019e6()
{
 unsigned int v3[1] = {42};
 return param_null_pointer_deref(&v3);
}


// Function: param_null_pointer_deref at 0x4019f0

unsigned int param_null_pointer_deref(unsigned int *ptr)
{
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 signal(11, (void (*)(int))segv_handler);
 if (setjmp(segv_buffer))
 {
 v2 = 4294967295;
 return v2;
 }
 v1 = *(ptr);
 v2 = v1;
 return v2;
}


// Function: sub_401a5c at 0x401a5c
int sub_401a5c()
{
 call_null_pointer_deref();
 return;
}


// Function: call_null_pointer_deref at 0x401a60

unsigned int call_null_pointer_deref()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3[1]; // [bp-0xc]

 v0 = (unsigned int)(uintptr_t)_GLOBAL_OFFSET_TABLE_;
 v3[0] = 42;
 v2 = param_null_pointer_deref(&v3);
 v1 = param_null_pointer_deref(NULL);
 signal(11, (void (*)(int))NULL);
 return v2 + v1;
}


// Function: sub_401ac4 at 0x401ac4
void sub_401ac4(void)
{
 param_buffer_overflow_stack(0);
 return;
}


// Function: param_buffer_overflow_stack at 0x401ad0
unsigned int param_buffer_overflow_stack(unsigned int a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int i; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned long v3; // [bp-0xc]

 v2 = 305419896;
 for (i = 0; i <= 16; i += 1)
 {
 *((char *)&v3 + i) = 65;
 }
 v0 = (v2 == 305419896 ? a0 : 4294967295);
 return v0;
}


// Function: sub_401b34 at 0x401b34
int
sub_401b34()
{
 param_buffer_overflow_heap(20);
 return;
}


// Function: param_buffer_overflow_heap at 0x401b40

unsigned int param_buffer_overflow_heap(unsigned int a0)
{
 unsigned int v0; // [bp-0x18]
 unsigned int i; // [bp-0x14]
 void* ptr; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v0 = (unsigned int)(uintptr_t)_GLOBAL_OFFSET_TABLE_;
 ptr = malloc(16);
 if (!ptr)
 {
 v3 = 4294967294;
 return v3;
 }
 for (i = 0; i <= 32; i += 1)
 {
 *((char *)ptr + i) = 66;
 }
 free(ptr);
 v3 = a0;
 return v3;
}


// Function: sub_401bc4 at 0x401bc4
int sub_401bc4()
{
 call_buffer_overflow();
 return;
}


// Function: call_buffer_overflow at 0x401bd0

int call_buffer_overflow()
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v0 = (unsigned int)(uintptr_t)_GLOBAL_OFFSET_TABLE_;
 v2 = param_buffer_overflow_stack(10);
 v1 = param_buffer_overflow_heap(20);
 return v2 + v1;
}


// Function: sub_401c13 at 0x401c13
void sub_401c13(void)
{
 param_integer_overflow(0, 0);
 return;
}


// Function: param_integer_overflow at 0x401c20
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 v1 = a0 + a1;
 v0 = a0 + a1;
 if (a0 > 0 && a1 > 0 && v1 < 0)
 {
 v2 = 4294967295;
 return v2;
 }
 if (a0 < 0 && a1 < 0 && v1 > 0)
 {
 v2 = 4294967294;
 return v2;
 }
 v2 = v0;
 return v2;
}


// Function: sub_401cac at 0x401cac
int sub_401cac()
{
 call_integer_overflow();
 return;
}


// Function: call_integer_overflow at 0x401cb0
int call_integer_overflow()
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v0 = (unsigned int)(uintptr_t)_GLOBAL_OFFSET_TABLE_;
 v2 = param_integer_overflow(0x3b9aca00, 0x3b9aca00);
 v1 = param_integer_overflow(4294967295, 1);
 return v2 + v1;
}


// Function: sub_401d03 at 0x401d03
void sub_401d03(void)
{
 param_undefined_behavior(5);
 return;
}


// Function: param_undefined_behavior at 0x401d10
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401d29 at 0x401d29
int sub_401d29()
{
 call_undefined_behavior();
 return;
}


// Function: call_undefined_behavior at 0x401d30
int call_undefined_behavior()
{
 unsigned int v0; // [bp-0xc]

 v0 = param_undefined_behavior(5);
 return v0;
}


// Function: sub_401d5b at 0x401d5b
void sub_401d5b()
{
 param_implementation_defined();
 return;
}


// Function: param_implementation_defined at 0x401d60
unsigned int param_implementation_defined()
{
 unsigned int v0 = 0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 char v2; // [bp-0x9]
 unsigned int v3; // [bp-0x8]

 v3 = 0;
 v2 = 255;
 v3 += (v2 < 0 ? 1 : 2);
 v1 = 0xfffffff8;
 v3 += v1 >> 1;
 v0 = v0 & 0xfffffff8 | 7;
 v0 = v0 & 4294967047 | 248;
 v0 = v0 & 255 | 0x12345600;
 v3 += (v0 & 7) + (v0 >> 3 & 31);
 v3 += 8;
 return v3;
}


// Function: sub_401df2 at 0x401df2
int sub_401df2()
{
 call_implementation_defined();
 return;
}


// Function: call_implementation_defined at 0x401e00
unsigned int call_implementation_defined()
{
 return param_implementation_defined();
}


// Function: sub_401e1c at 0x401e1c
int sub_401e1c()
{
 test_obf_opt_edge();
 return;
}


// Function: test_obf_opt_edge at 0x401e20
int test_obf_opt_edge()
{
 unsigned int t; // [bp-0x18]
 char *v1; // [bp-0xc]

 v1 = (char*)_GLOBAL_OFFSET_TABLE_;
 printf(&g_40300d);
 t = call_fake_branch();
 printf(v1 + 8133);
 t = call_opaque_predicate();
 printf(v1 + 8105);
 t = call_instruction_substitution();
 printf(v1 + 8077);
 t = call_string_encryption();
 printf(v1 + 8048);
 t = call_tail_call_optimized();
 printf(v1 + 8020);
 t = call_non_tail_call();
 printf(v1 + 7978);
 t = call_vectorized_loop();
 printf(v1 + 7941);
 t = call_link_time_optimization();
 printf(v1 + 7903);
 t = call_division_by_zero();
 printf(v1 + 7871);
 t = call_null_pointer_deref();
 printf(v1 + 7843);
 t = call_buffer_overflow();
 printf(v1 + 7814);
 t = call_integer_overflow();
 printf(v1 + 7785);
 t = call_undefined_behavior();
 printf(v1 + 7736);
 t = call_implementation_defined();
 return printf(v1 + 7707);
}


// Function: main at 0x401fe0
int main()
{
 unsigned int v0; // [bp-0xc]

 v0 = 0;
 test_obf_opt_edge();
 return 0;
}


// Function: sub_402005 at 0x402005
void sub_402005()
{
 __do_global_ctors_aux();
 return;
}



unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = &v2[1].padding_0[239];
 v4 = *((int *)&ptr->padding_0[244]);
 if (*((int *)&ptr->padding_0[244]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[244];
 do
 {
 p = v6;
 v4();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_402052 at 0x402052
void sub_402052()
{
}



/* CRT stub function _fini removed by preprocessor */


