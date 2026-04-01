// Angr Decompilation of 7_clang_Os_no_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>

/* CRT stub function _init removed by preprocessor */

/* Global variable definitions */
void (*g_403ff4)() = NULL;
unsigned int g_402008 = 0;
unsigned int g_402028 = 0;
unsigned int div_zero_caught = 0;
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
unsigned int segv_caught = 0;
char g_402048 = 0;
char g_402064 = 0;
char g_402080 = 0;
char g_40209d = 0;
char g_4020b9 = 0;
char g_4020e3 = 0;
char g_402108 = 0;
char g_40212e = 0;
char g_40214e = 0;
char g_40216a = 0;
char g_402187 = 0;
char g_4021a4 = 0;
char g_4021d5 = 0;
char g_4021f2 = 0;
char g_402219 = 0;
char param_string_encryption_encrypted = 0;

typedef struct struct_0 {
    char padding_0[10000];
    char padding_2e47[10000];
    unsigned int field_2ea7;
} struct_0;

extern void (*g_403ff4)();
unsigned int __do_global_ctors_aux(void);
unsigned int register_tm_clones(void);
unsigned int __do_global_dtors_aux(void);
void frame_dummy(void);

static int _init()
{
 if (g_403ff4)
 g_403ff4();
 frame_dummy();
 return (int)__do_global_ctors_aux();
}

void frame_dummy()
{
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return ptr[2];
}


// Function: sub_4010c0 at 0x4010c0
int sub_4010c0()
{
 int* v1; // ebx

 return v1[16];
}


// Function: sub_4010c6 at 0x4010c6
void sub_4010c6()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010fb at 0x4010fb
void sub_4010fb()
{
 return;
}


// Function: sub_4010fc at 0x4010fc
void sub_4010fc()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x401100
int __x86_get_pc_thunk_bx()
{
 return 0;
}


// Function: sub_401104 at 0x401104
void sub_401104()
{
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

unsigned int deregister_tm_clones(void);
int __x86_get_pc_thunk_dx(void);
unsigned int register_tm_clones(void)
{
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v0 = v4;
 return v0;
}


// Function: sub_401197 at 0x401197
void sub_401197()
{
 __do_global_dtors_aux();
 return;
}


unsigned int __do_global_dtors_aux(void);
unsigned int __do_global_dtors_aux(void)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 0;
 v0 = 0;
 return v0;
}


// Function: sub_40122a at 0x40122a
void sub_40122a()
{
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */


// Function: __x86_get_pc_thunk_dx at 0x401239
int __x86_get_pc_thunk_dx()
{
 return 0;
}


// Function: __x86_get_pc_thunk_di at 0x40123d
int __x86_get_pc_thunk_di()
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401241 at 0x401241
int param_fake_branch(unsigned int a0);
void sub_401241(unsigned int a0)
{
 param_fake_branch(0);
 return;
}


// Function: param_fake_branch at 0x401244
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: call_fake_branch at 0x401249
unsigned int call_fake_branch()
{
 return 10;
}


// Function: param_opaque_predicate at 0x40124f
int param_opaque_predicate(unsigned int a0)
{
 unsigned int v3; // ebx
 unsigned int v4; // edi
 unsigned int v13; // ebx
 unsigned int v14; // eax
 unsigned int result; // edx
 unsigned int v5; // esi
 unsigned int v6; // esi
 unsigned int v7; // edi
 unsigned int v8; // edi
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = a0;
 v7 = v6;
 v8 = v7 + 1;
 if (v8 == 0)
 {
 v13 = 4294967295;
 }
 else
 {
 v14 = v6;
 result = v8;
 do
 {
 v13 = result;
 v14 = v13;
 result = v14 / v13;
 } while (result != 0);
 }
 if (v13 != 1 || (v8 * v8 ^ (v6 * 2 | 1) + v6 * v6))
 return v6 * 3 + 20;
 return v6 * 2 + 10;
}


// Function: call_opaque_predicate at 0x401298
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
 flag1 = v2 / result;
 v2 = result;
 } while (flag1);
 if (result != 1)
 return 35;
 return 20;
}


// Function: param_instruction_substitution at 0x4012be
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 21 + (a0 & 15) + (a0 >> 1);
}


// Function: call_instruction_substitution at 0x4012d4
unsigned int call_instruction_substitution()
{
 return 225;
}


// Function: decrypt_string at 0x4012da
char *decrypt_string(char *a0, char *p, unsigned int n, char a3)
{
 char v0; // al
 char *ptr; // edx

 strncpy(p, a0, n);
 p[1 + n] = 0;
 v0 = *(p);
 if (!*(p))
 return p;
 ptr = p + 1;
 do
 {
 ptr[1] = v0 ^ a3;
 v0 = ptr[0];
 ptr = &ptr[1];
 } while (ptr[0]);
 return p;
}


// Function: param_string_encryption at 0x401326
extern char param_string_encryption_encrypted;

int param_string_encryption()
{
 void* ptr; // ecx
 char v5; // al
 unsigned int v8; // edi
 char v0[1]; // [bp-0x2c]
 char v1; // [bp-0x2b]
 char result; // [bp-0xd]

 strncpy(&v0, &param_string_encryption_encrypted, 32);
 result = 0;
 if (*(v0))
 {
 ptr = &v1;
 v5 = *(v0);
 do
 {
 *((char *)&ptr[1]) = v5 ^ 90;
 v5 = *((char *)ptr);
 ptr += 1;
 } while (*((char *)ptr));
 v8 = *(v0);
 }
 else
 {
 v8 = 0;
 }
 return strlen(&v0) + v8;
}


// Function: call_string_encryption at 0x401388
unsigned int call_string_encryption()
{
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x4013a2
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 if (a0 > 0)
 a1 = a1 + a0 + (a0 - 1) * (a0 - 1) - (unsigned int)(((unsigned long long)(a0 - 1) * (a0 - 2)) * 0x80000000 >> 32);
 return a1;
}


// Function: call_tail_call_optimized at 0x4013cc
unsigned int call_tail_call_optimized()
{
 return 500500;
}


// Function: param_non_tail_call at 0x4013d2
unsigned int param_non_tail_call(unsigned int a0)
{
 return (a0 <= 0 ? 0 : (a0 - 1) * (a0 - 1) + a0 - (unsigned int)(((unsigned long long)(a0 - 1) * (a0 - 2)) * 0x80000000 >> 32));
}


// Function: call_non_tail_call at 0x4013f8
unsigned int call_non_tail_call()
{
 return 5050;
}


// Function: param_vectorized_loop at 0x4013fe
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int ptr, unsigned int i)
{
 unsigned int idx; // edi
 unsigned int index; // esi
 unsigned int v2; // eax

 if (i <= 0)
 return 0;
 idx = 0;
 do
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a1 + idx * 4)) + *((int *)(a0 + idx * 4));
 idx += 1;
 } while (i != idx);
 if (i > 0)
 {
 index = 0;
 v2 = 0;
 do
 {
 v2 += *((int *)(ptr + index * 4));
 index += 1;
 } while (i != index);
 return v2;
 }
 return 0;
}


// Function: call_vectorized_loop at 0x40143d
extern unsigned int g_402008;
extern unsigned int g_402028;

unsigned int call_vectorized_loop()
{
 unsigned int index; // eax
 unsigned int *v4; // ecx
 unsigned int *v5; // edx
 unsigned int idx; // ecx
 unsigned int v7; // eax
 unsigned int result; // [bp-0x24]
 char v1; // [bp-0x20]

 index = 0;
 memset(&v1, 0, 28);
 result = 0;
 v4 = &g_402028;
 v5 = &g_402008;
 do
 {
 (&result)[index] = *(v4) + *(v5);
 index += 1;
 v4 += 1;
 v5 += 1;
 } while (index != 8);
 idx = 0;
 v7 = 0;
 do
 {
 v7 += (&result)[idx];
 idx += 1;
 } while (idx != 8);
 return v7;
}


// Function: param_link_time_optimization at 0x40149f
int param_link_time_optimization(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: call_link_time_optimization at 0x4014a9
unsigned int call_link_time_optimization()
{
 return 20;
}


// Function: div_zero_handler at 0x4014af
extern unsigned int div_zero_caught;
extern jmp_buf jmp_buffer;

int div_zero_handler()
{
 unsigned int v2; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = v2;
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1); /* do not return */
}


// Function: param_division_by_zero at 0x4014d8
extern jmp_buf jmp_buffer;

unsigned int param_division_by_zero()
{
 unsigned int v0; // [bp+0x4]

 signal(8, div_zero_handler);
 return (!_setjmp(jmp_buffer) ? (10 % v0) + (10 / v0) : 4294967295);
}


// Function: call_division_by_zero at 0x401526
int call_division_by_zero()
{
 unsigned int v1; // eax
 unsigned int v2; // eax

 v1 = param_division_by_zero();
 v2 = param_division_by_zero();
 signal(8, NULL);
 return v2 + v1;
}


// Function: segv_handler at 0x40156f
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


// Function: param_null_pointer_deref at 0x401598
extern jmp_buf segv_buffer;

unsigned int param_null_pointer_deref()
{
 unsigned int *v0; // [bp+0x4]

 signal(11, segv_handler);
 return (!_setjmp(segv_buffer) ? *(v0) : 4294967295);
}


// Function: call_null_pointer_deref at 0x4015e1
int call_null_pointer_deref()
{
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v0; // [bp-0x14]

 v0 = 42;
 v2 = param_null_pointer_deref();
 v3 = param_null_pointer_deref();
 signal(11, NULL);
 return v3 + v2;
}


// Function: param_buffer_overflow_stack at 0x401630
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: param_buffer_overflow_heap at 0x401635
int param_buffer_overflow_heap(unsigned int a0)
{
 return a0;
}


// Function: call_buffer_overflow at 0x40163a
unsigned int call_buffer_overflow()
{
 return 30;
}


// Function: param_integer_overflow at 0x401640
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


// Function: call_integer_overflow at 0x40166e
unsigned int call_integer_overflow()
{
 return 0x77359400;
}


// Function: param_undefined_behavior at 0x401674
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_undefined_behavior at 0x40167b
unsigned int call_undefined_behavior()
{
 return 10;
}


// Function: param_implementation_defined at 0x401681
unsigned int param_implementation_defined()
{
 return 43;
}


// Function: call_implementation_defined at 0x401687
unsigned int call_implementation_defined()
{
 return 43;
}


// Function: test_obf_opt_edge at 0x40168d
extern unsigned int g_402008;
extern unsigned int g_402028;
extern char g_402048;
extern char g_402064;
extern char g_402080;
extern char g_40209d;
extern char g_4020b9;
extern char g_4020e3;
extern char g_402108;
extern char g_40212e;
extern char g_40214e;
extern char g_40216a;
extern char g_402187;
extern char g_4021a4;
extern char g_4021d5;
extern char g_4021f2;
extern char g_402219;

int test_obf_opt_edge()
{
 unsigned int result; // edx
 unsigned int v4; // eax
 unsigned int v5; // ecx
 unsigned int index; // eax
 unsigned int *v7; // ecx
 unsigned int *v8; // edx
 unsigned int idx; // ecx
 unsigned int v10; // eax
 unsigned int v0; // [bp-0x38]
 char v1; // [bp-0x28]

 puts(&g_402219);
 v0 = 10;
 printf(&g_402048);
 result = 6;
 v4 = 5;
 do
 {
 v5 = result;
 result = v4 / v5;
 v4 = v5;
 } while (result);
 v0 = (v5 == 1 ? 20 : 35);
 printf(&g_402064);
 v0 = 225;
 printf(&g_402080);
 v0 = param_string_encryption();
 printf(&g_40209d);
 v0 = 500500;
 printf(&g_4020b9);
 v0 = 5050;
 printf(&g_4020e3);
 index = 0;
 memset(&v1, 0, 32);
 v7 = &g_402028;
 v8 = &g_402008;
 do
 {
 *((unsigned int *)&(&v1)[4 * index]) = *(v7) + *(v8);
 index += 1;
 v7 += 1;
 v8 += 1;
 } while (index != 8);
 idx = 0;
 v10 = 0;
 do
 {
 v10 += *((int *)&(&v1)[4 * idx]);
 idx += 1;
 } while (idx != 8);
 v0 = v10;
 printf(&g_402108);
 v0 = 20;
 printf(&g_40212e);
 v0 = call_division_by_zero();
 printf(&g_40214e);
 v0 = call_null_pointer_deref();
 printf(&g_40216a);
 v0 = 30;
 printf(&g_402187);
 v0 = 0x77359400;
 printf(&g_4021a4);
 v0 = 10;
 printf(&g_4021d5);
 v0 = 43;
 return printf(&g_4021f2);
}


// Function: main at 0x401856
unsigned int main()
{
 test_obf_opt_edge();
 return 0;
}


// Function: sub_401872 at 0x401872
void sub_401872()
{
 return;
}



unsigned int __do_global_ctors_aux(void)
{
 unsigned int v0; // [bp-0x8]

 v0 = 0;
 return v0;
}


// Function: sub_4018c2 at 0x4018c2
void sub_4018c2()
{
}



/* CRT stub function _fini removed by preprocessor */


