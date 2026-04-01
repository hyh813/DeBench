// Angr Decompilation of 7_clang_O2_no_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/* CRT stub function _init removed by preprocessor */

// Forward declarations
struct struct_0 {
 char padding_0[256];
 unsigned int field_2ea7;
 unsigned int field_4;
 unsigned int field_10;
 unsigned int field_30;
 unsigned int field_3c;
 unsigned int field_40;
 unsigned int field_48;
 unsigned int field_64;
 unsigned int field_EC;
 unsigned int field_F0;
 unsigned int field_F4;
 char padding_2e47[11];
};
void frame_dummy(void);
unsigned int *deregister_tm_clones(void);
unsigned int register_tm_clones(void);
unsigned int __do_global_dtors_aux(void);
unsigned int __do_global_ctors_aux(void);
void __x86_get_pc_thunk_dx(void);
unsigned int __x86_get_pc_thunk_di(void);
void param_fake_branch(unsigned int);
unsigned int call_fake_branch(void);
int param_opaque_predicate(unsigned int);
unsigned int call_opaque_predicate(void);
int param_instruction_substitution(unsigned int);
unsigned int call_instruction_substitution(void);
int param_string_encryption(void);
int call_string_encryption(void);
unsigned int param_tail_call_optimized(unsigned int, unsigned int);
unsigned int call_tail_call_optimized(void);
unsigned int param_non_tail_call(unsigned int);
unsigned int call_non_tail_call(void);
unsigned int param_vectorized_loop(unsigned int, unsigned int, unsigned int, unsigned int);
unsigned int call_vectorized_loop(void);
int param_link_time_optimization(unsigned int);
unsigned int call_link_time_optimization(void);
void div_zero_handler(void);
unsigned int param_division_by_zero(unsigned int);
int call_division_by_zero(void);
void segv_handler(void);
unsigned int param_null_pointer_deref(unsigned int *);
int call_null_pointer_deref(void);
int param_buffer_overflow_stack(unsigned int);
int param_buffer_overflow_heap(unsigned int);
unsigned int call_buffer_overflow(void);
unsigned int param_integer_overflow(unsigned int, unsigned int);
unsigned int call_integer_overflow(void);
unsigned int param_undefined_behavior(unsigned int);
unsigned int call_undefined_behavior(void);
unsigned int param_implementation_defined(void);
unsigned int call_implementation_defined(void);
int test_obf_opt_edge(void);
unsigned int main(void);
char *decrypt_string(char *a0, char *p, unsigned int a2, char a3);
// External globals
extern unsigned int div_zero_caught;
extern jmp_buf jmp_buffer;
extern jmp_buf segv_buffer;
extern unsigned int segv_caught;
extern char g_402008[];
extern char g_402024[];
extern char g_402040[];
extern char g_40205d[];
extern char g_402079[];
extern char g_4020a3[];
extern char g_4020c8[];
extern char g_4020ee[];
extern char g_40210e[];
extern char g_40212a[];
extern char g_402147[];
extern char g_402164[];
extern char g_402195[];
extern char g_4021b2[];
extern char g_4021d9[];
extern char param_string_encryption_encrypted[];

struct struct_0 *g_403ff4;

int _init()
{
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 return 0;
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 // Empty function - original was likely unreachable
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
 // Empty function - original had unsupported operation
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



typedef struct struct_0 struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

unsigned int register_tm_clones()
{
 // Empty function - original was CRT stub
 return 0;
}


// Function: sub_401197 at 0x401197
void sub_401197()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

/* CRT stub function __do_global_dtors_aux - simplified */
unsigned int __do_global_dtors_aux()
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
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40123d
int __x86.get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax

 return v0;
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
 call_fake_branch(10);
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
 return param_opaque_predicate(0);
}


// Function: param_opaque_predicate at 0x401270
int param_opaque_predicate(unsigned int a0)
{
 unsigned int v6; // esi
 unsigned int v7; // edi
 unsigned int v8; // ebx
 unsigned int v9; // edi
 unsigned int v14; // eax
 unsigned int result; // edx

 v6 = a0;
 v7 = v6;
 v8 = 4294967295;
 v9 = v7 + 1;
 // Simplified condition - original decompiled condition was complex
 v14 = v6;
 result = v9;
 do
 {
 v8 = result;
 v14 = v8;
 result = (unsigned int)(((int64_t)v14) / v8);
 } while (result);
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
 flag1 = (unsigned int)(((int64_t)v2) / result);
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
void sub_401326()
{
 // decrypt_string was called but result not used - empty stub
 return;
}


// Function: decrypt_string at 0x401330
char *decrypt_string(char *a0, char *p, unsigned int a2, char a3)
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
 return;
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
 return;
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
 param_tail_call_optimized(a0, a1);
 return;
}


// Function: param_tail_call_optimized at 0x401470
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 if (a0 > 0)
 a1 = a1 + a0 + (a0 - 1) * (a0 - 1) - (unsigned int)(((int64_t)(a0 - 1) * (a0 - 2)) * 0x80000000 >> 32);
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
 if (a0 <= 0)
 return 0;
 return (a0 - 1) * (a0 - 1) + a0 - (unsigned int)(((int64_t)(a0 - 1) * (a0 - 2)) * 0x80000000 >> 32);
}


// Function: sub_4014d6 at 0x4014d6
void sub_4014d6()
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
 // Call with test values (4, 5, result_ptr, 4)
 unsigned int result_ptr[16];
 param_vectorized_loop(1, 2, (unsigned int)result_ptr, 4);
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
int sub_401636()
{
 div_zero_handler(); /* do not return */
}


// Function: div_zero_handler at 0x401640
int div_zero_handler()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 div_zero_caught = 1;
 longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: sub_40166b at 0x40166b
int sub_40166b()
{
 param_division_by_zero(1);
 return 0;
}


// Function: param_division_by_zero at 0x401670
// Note: jmp_buffer is declared globally as extern jmp_buf

unsigned int param_division_by_zero(unsigned int a0)
{
 signal(8, div_zero_handler);
 if (_setjmp(&jmp_buffer))
 return 4294967295;
 // 10 as 64-bit value: (10 % a0) | ((10 / a0) << 32)
 return (unsigned int)(((int64_t)10 % a0) | (((int64_t)10 / a0) << 32));
}


// Function: sub_4016c2 at 0x4016c2
int sub_4016c2()
{
 call_division_by_zero();
 return;
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
}


// Function: segv_handler at 0x401720

int segv_handler()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 segv_caught = 1;
 longjmp(&segv_buffer, 1); /* do not return */
}


// Function: sub_40174b at 0x40174b
int sub_40174b()
{
 unsigned int val = 0;
 param_null_pointer_deref(&val);
 return 0;
}


// Function: param_null_pointer_deref at 0x401750
extern unsigned int segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *a0)
{
 signal(11, segv_handler);
 if (_setjmp(&segv_buffer))
 return 4294967295;
 return *(a0);
}


// Function: sub_40179b at 0x40179b
int sub_40179b()
{
 return call_null_pointer_deref();
}


// Function: call_null_pointer_deref at 0x4017a0
int call_null_pointer_deref()
{
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v0; // [bp-0x10]

 v0 = 42;
 v2 = param_null_pointer_deref(&v0);
 v3 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 return v3 + v2;
}


// Function: sub_4017f5 at 0x4017f5
void sub_4017f5(unsigned int a0)
{
 param_buffer_overflow_stack(a0);
 return;
}


// Function: param_buffer_overflow_stack at 0x401800
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: sub_401805 at 0x401805
void sub_401805(unsigned int a0)
{
 param_buffer_overflow_heap(a0);
 return;
}


// Function: param_buffer_overflow_heap at 0x401810
int param_buffer_overflow_heap(unsigned int a0)
{
 return a0;
}


// Function: sub_401815 at 0x401815
void sub_401815()
{
 call_buffer_overflow();
 return;
}


// Function: call_buffer_overflow at 0x401820
unsigned int call_buffer_overflow()
{
 return 30;
}


// Function: sub_401826 at 0x401826
void sub_401826(unsigned int a0, unsigned int a1)
{
 param_integer_overflow(a0, a1);
 return;
}


// Function: param_integer_overflow at 0x401830
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


// Function: call_integer_overflow at 0x401860
unsigned int call_integer_overflow()
{
 return 0x77359400;
}


// Function: sub_401866 at 0x401866
void sub_401866(unsigned int a0)
{
 param_undefined_behavior(a0);
 return;
}


// Function: param_undefined_behavior at 0x401870
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401877 at 0x401877
void sub_401877()
{
 call_undefined_behavior();
 return;
}


// Function: call_undefined_behavior at 0x401880
unsigned int call_undefined_behavior()
{
 return 10;
}


// Function: sub_401886 at 0x401886
void sub_401886()
{
 param_implementation_defined();
 return;
}


// Function: param_implementation_defined at 0x401890
unsigned int param_implementation_defined()
{
 return 43;
}


// Function: sub_401896 at 0x401896
void sub_401896()
{
 call_implementation_defined();
 return;
}


// Function: call_implementation_defined at 0x4018a0
unsigned int call_implementation_defined()
{
 return 43;
}


// Function: sub_4018a6 at 0x4018a6
int sub_4018a6()
{
 return test_obf_opt_edge();
}


// Function: test_obf_opt_edge at 0x4018b0
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
 flag2 = (unsigned int)(((int64_t)v5) / flag1);
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


// Function: sub_401af8 at 0x401af8
int sub_401af8()
{
 main();
 return 0;
}


// Function: main at 0x401b00
unsigned int main()
{
 test_obf_opt_edge();
 return 0;
}


// Function: sub_401b1c at 0x401b1c
void sub_401b1c()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

// __do_global_ctors_aux - simplified to just return (empty CRT stub)
unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_401b62 at 0x401b62
void sub_401b62()
{
}



/* CRT stub function _fini removed by preprocessor */


