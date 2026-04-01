// Angr Decompilation of 7_gcc_O0_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <setjmp.h>


/* CRT stub function _init removed by preprocessor */
struct struct_0;

extern struct struct_0 *g_403fe8;




// Function: sub_401020 at 0x401020
extern unsigned long long g_403f78;
extern unsigned long long g_403f80;
unsigned long long g_403f78;
unsigned long long g_403f80;

static const char g_402010[] = "Testing obfuscation and optimization edge cases\n";
static const char g_40203d[] = "fake_branch: %u\n";
static const char g_402059[] = "opaque_predicate: %u\n";
static const char g_402075[] = "instruction_substitution: %u\n";
static const char g_402092[] = "string_encryption: %u\n";
static const char g_4020b0[] = "tail_call_optimized: %u\n";
static const char g_4020e0[] = "non_tail_call: %llu\n";
static const char g_402108[] = "vectorized_loop: %u\n";
static const char g_402130[] = "link_time_optimization: %u\n";
static const char g_402150[] = "division_by_zero: %u\n";
static const char g_40216c[] = "null_pointer_deref: %lld\n";
static const char g_402189[] = "buffer_overflow: %u\n";
static const char g_4021a8[] = "integer_overflow: %u\n";
static const char g_4021d9[] = "undefined_behavior: %u\n";
static const char g_4021f8[] = "implementation_defined: %u\n";

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_403f78;
 /* goto g_403f80; */ /* Invalid decompilation - removed */
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



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011a5 at 0x4011a5
void sub_4011a5()
{
 __builtin_trap();
}






// Function: param_fake_branch at 0x401269
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: call_fake_branch at 0x40128a
int call_fake_branch()
{
 return param_fake_branch(10);
}


// Function: param_opaque_predicate at 0x40129e
unsigned int param_opaque_predicate(unsigned int a0)
{
 unsigned int i; // [bp-0x20]
 unsigned int flag3; // [bp-0x1c]
 unsigned int flag2; // [bp-0x18]
 unsigned int flag1; // [bp-0x14]
 unsigned int result; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 flag2 = a0 * 2 + a0 * a0 + 1 == (a0 + 1) * (a0 + 1);
 i = a0;
 for (flag3 = a0 + 1; flag3; i = v5)
 {
 v5 = flag3;
 flag3 = ((unsigned long long)i / (unsigned long long)flag3) & 0xFFFFFFFF;
 }
 flag1 = i == 1;
 result = 1;
 if (flag2 && flag1 && result)
 return (a0 + 5) * 2;
 return a0 * 3 + 20;
}


// Function: call_opaque_predicate at 0x401340
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x401354
int param_instruction_substitution(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v0 = a0 * 6;
 v1 = a0 >> 1;
 v2 = a0 & 15;
 v3 = a0 * 15;
 return v3 + v0 + v1 + v2;
}


// Function: call_instruction_substitution at 0x4013b3
int call_instruction_substitution()
{
 return param_instruction_substitution(10);
}


// Function: decrypt_string at 0x4013c7
char * decrypt_string(char *a0, char *a1, unsigned long n, char a3)
{
 char *cur; // [bp-0x10]

 strncpy(a1, a0, n);
 a1[1 + n] = 0;
 for (cur = a1; *(cur); cur += 1)
 {
 *(cur) = *(cur) ^ a3;
 }
 return a1;
}


// Function: param_string_encryption at 0x40143f
static const char encrypted_0[32] = {0xAA, 0x92, 0xAA, 0x92, 0xAA, 0x92, 0xAA, 0x92,
                                     0xAA, 0x92, 0xAA, 0x92, 0xAA, 0x92, 0xAA, 0x92,
                                     0xAA, 0x92, 0xAA, 0x92, 0xAA, 0x92, 0xAA, 0x92,
                                     0xAA, 0x92, 0xAA, 0x92, 0xAA, 0x92, 0xAA, 0x92};

long long param_string_encryption()
{
 char v0[40]; // [bp-0x38]

 decrypt_string(&encrypted_0, &v0, 32, 90);
 return (unsigned long long)v0 + (strlen(&v0) & 4294967295);
}


// Function: call_string_encryption at 0x4014a7
unsigned long long call_string_encryption()
{
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x4014bb
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 return (a0 <= 0 ? a1 : (unsigned int)param_tail_call_optimized(a0 - 1, a1 + a0 & 4294967295));
}


// Function: call_tail_call_optimized at 0x4014f1
int call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


// Function: param_non_tail_call at 0x40150a
unsigned long long param_non_tail_call(unsigned int a0)
{
 return (a0 <= 0 ? 0 : param_non_tail_call(a0 - 1) + a0);
}


// Function: call_non_tail_call at 0x40153a
unsigned long long call_non_tail_call()
{
 return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x40154e
unsigned int param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned long ptr, unsigned int a3)
{
 unsigned int i; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int j; // [bp-0xc]

 for (i = 0; i < a3; i += 1)
 {
 *((int *)(ptr + i * 4)) = *((int *)(a1 + i * 4)) + *((int *)(a0 + i * 4));
 }
 v1 = 0;
 for (j = 0; j < a3; j += 1)
 {
 v1 += *((int *)(ptr + j * 4));
 }
 return v1;
}


// Function: call_vectorized_loop at 0x4015f8
int call_vectorized_loop()
{
 unsigned int result; // [bp-0x78]
 unsigned int v1; // [bp-0x74]
 unsigned int v2; // [bp-0x70]
 unsigned int v3; // [bp-0x6c]
 unsigned int v4; // [bp-0x68]
 unsigned int v5; // [bp-0x64]
 unsigned int v6; // [bp-0x60]
 unsigned int v7; // [bp-0x5c]
 unsigned int v8; // [bp-0x58]
 unsigned int v9; // [bp-0x54]
 unsigned int v10; // [bp-0x50]
 unsigned int v11; // [bp-0x4c]
 unsigned int v12; // [bp-0x48]
 unsigned int v13; // [bp-0x44]
 unsigned int v14; // [bp-0x40]
 unsigned int flag1; // [bp-0x3c]
 char v16; // [bp-0x38]

 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = 6;
 v6 = 7;
 v7 = 8;
 v8 = 8;
 v9 = 7;
 v10 = 6;
 v11 = 5;
 v12 = 4;
 v13 = 3;
 v14 = 2;
 flag1 = 1;
 memset(&v16, 0, 32);
 return param_vectorized_loop(&result, &v8, &v16, 8);
}


// Function: lto_target_func at 0x4016d2
unsigned int lto_target_func(unsigned int a0)
{
 return (a0 + 5) * 2;
}


// Function: param_link_time_optimization at 0x4016e3
int param_link_time_optimization(unsigned int a0)
{
 return lto_target_func(a0);
}


// Function: call_link_time_optimization at 0x4016fe
int call_link_time_optimization()
{
 return param_link_time_optimization(5);
}


// Function: div_zero_handler at 0x401712
unsigned int div_zero_caught;
jmp_buf jmp_buffer;

long long div_zero_handler(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 div_zero_caught = 1;
 longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: param_division_by_zero at 0x40173f

unsigned long long param_division_by_zero(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 signal(8, div_zero_handler);
 if (_setjmp(&jmp_buffer))
 return 4294967295;
 v0 = 10 / a0;
 return v0;
}


// Function: call_division_by_zero at 0x401791
int call_division_by_zero()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = param_division_by_zero(5);
 v1 = param_division_by_zero(0);
 signal(8, NULL);
 return v1 + v0;
}


// Function: segv_handler at 0x4017d0
jmp_buf segv_buffer;
unsigned int segv_caught;

long long segv_handler(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 segv_caught = 1;
 longjmp(&segv_buffer, 1); /* do not return */
}


// Function: param_null_pointer_deref at 0x4017fd

unsigned long long param_null_pointer_deref(unsigned int *ptr)
{
 unsigned int v0; // [bp-0xc]

 signal(11, segv_handler);
 if (_setjmp(&segv_buffer))
 return 4294967295;
 v0 = *(ptr);
 return v0;
}


// Function: call_null_pointer_deref at 0x40184d
long long call_null_pointer_deref()
{
 unsigned int v0[1]; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 v0[0] = 42;
 v1 = param_null_pointer_deref(&v0);
 v2 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 return v2 + v1;
}


// Function: param_buffer_overflow_stack at 0x4018b8
unsigned long long param_buffer_overflow_stack(unsigned int a0)
{
 unsigned int i; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned long v3; // [bp-0x18]

 v1 = 305419896;
 for (i = 0; i <= 16; i += 1)
 {
 *((char *)&v3 + i) = 65;
 }
 return (v1 == 305419896 ? a0 : 4294967295);
}


// Function: param_buffer_overflow_heap at 0x401923
unsigned long long param_buffer_overflow_heap(unsigned int a0)
{
 unsigned int i; // [bp-0x14]
 void* ptr; // [bp-0x10]

 ptr = malloc(16);
 if (!ptr)
 return 4294967294;
 for (i = 0; i <= 32; i += 1)
 {
 *((char *)ptr + i) = 66;
 }
 free(ptr);
 return a0;
}


// Function: call_buffer_overflow at 0x401982
int call_buffer_overflow()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = param_buffer_overflow_stack(10);
 v1 = param_buffer_overflow_heap(20);
 return v1 + v0;
}


// Function: param_integer_overflow at 0x4019b2
unsigned long long param_integer_overflow(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0xc]

 v0 = a1 + a0;
 v1 = a1 + a0;
 if (a0 > 0 && a1 > 0 && v0 < 0)
 return 4294967295;
 if (a0 < 0 && a1 < 0 && v0 > 0)
 return 4294967294;
 return v1;
}


// Function: call_integer_overflow at 0x401a19
int call_integer_overflow()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = param_integer_overflow(0x3b9aca00, 0x3b9aca00);
 v1 = param_integer_overflow(4294967295, 1);
 return v1 + v0;
}


// Function: param_undefined_behavior at 0x401a53
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_undefined_behavior at 0x401a6c
int call_undefined_behavior()
{
 unsigned int v0; // [bp-0xc]

 v0 = param_undefined_behavior(5);
 return v0;
}


// Function: param_implementation_defined at 0x401a8a
int param_implementation_defined()
{
 char v0; // [bp-0x15]
 char v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v2 = 0;
 v0 = 255;
 v2 += (v0 < 0 ? 1 : 2);
 v3 = 0xfffffff8;
 v2 += v3 >> 1;
 v1 |= 7;
 v1 |= 248;
 v2 += (v1 >> 3) + (v1 & 7);
 v2 += 12;
 return v2;
}


// Function: call_implementation_defined at 0x401b0a
int call_implementation_defined()
{
 return param_implementation_defined();
}


// Function: test_obf_opt_edge at 0x401b1e
int test_obf_opt_edge()
{
 puts(&g_402010);
 printf(&g_40203d, call_fake_branch() & 4294967295);
 printf(&g_402059, call_opaque_predicate() & 4294967295);
 printf(&g_402075, call_instruction_substitution() & 4294967295);
 printf(&g_402092, call_string_encryption() & 4294967295);
 printf(&g_4020b0, call_tail_call_optimized() & 4294967295);
 printf(&g_4020e0, call_non_tail_call() & 4294967295);
 printf(&g_402108, call_vectorized_loop() & 4294967295);
 printf(&g_402130, call_link_time_optimization() & 4294967295);
 printf(&g_402150, call_division_by_zero() & 4294967295);
 printf(&g_40216c, call_null_pointer_deref() & 4294967295);
 printf(&g_402189, call_buffer_overflow() & 4294967295);
 printf(&g_4021a8, call_integer_overflow() & 4294967295);
 printf(&g_4021d9, call_undefined_behavior() & 4294967295);
 return printf(&g_4021f8, call_implementation_defined() & 4294967295);
}


// Function: main at 0x401cf8
unsigned int main()
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


