// Angr Decompilation of 7_gcc_O1_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>


/* CRT stub function _init removed by preprocessor */

extern unsigned long long g_403fe8;
unsigned long long g_403fe8 = 0;

/* CRT stub function _init removed by preprocessor */


// Function: sub_401020 at 0x401020
extern unsigned long long g_403f78;
extern unsigned long long g_403f80;
unsigned long long g_403f78 = 0;
unsigned long long g_403f80 = 0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_403f78;
 return;
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






/* CRT stub function _start removed by preprocessor */



// Function: sub_4011a5 at 0x4011a5
void sub_4011a5()
{
 // Unsupported jumpkind Ijk_SigTRAP at address 4198821
}






/* CRT stub function deregister_tm_clones removed by preprocessor */







/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401255 at 0x401255
void sub_401255()
{
}






/* CRT stub function frame_dummy removed by preprocessor */



// Function: div_zero_handler at 0x401269
extern unsigned int div_zero_caught;
extern unsigned long long jmp_buffer;
unsigned int div_zero_caught = 0;
unsigned long long jmp_buffer = 0;

long long div_zero_handler()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 div_zero_caught = 1;
 __longjmp_chk(&jmp_buffer, 1); /* do not return */
}


// Function: segv_handler at 0x40128e
extern unsigned long long segv_buffer;
extern unsigned int segv_caught;
unsigned long long segv_buffer = 0;
unsigned int segv_caught = 0;

long long segv_handler()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 segv_caught = 1;
 __longjmp_chk(&segv_buffer, 1); /* do not return */
}


// Function: param_fake_branch at 0x4012b3
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: call_fake_branch at 0x4012ba
unsigned long long call_fake_branch()
{
 return 10;
}


// Function: param_opaque_predicate at 0x4012c4
int param_opaque_predicate(unsigned int a0)
{
 unsigned long v1; // rcx
 unsigned long v2; // rcx
 unsigned int v3; // eax
 unsigned int result; // esi
 unsigned int flag1; // edx
 unsigned long v6; // rcx

 v1 = a0 + 1;
 if ((unsigned int)v1)
 {
 v2 = v1;
 v3 = a0;
 do
 {
 v6 = ((long long)(int)v3) / (v2 & 4294967295);
 v2 = v6;
 v3 = v2;
 } while (flag1);
 if (result == 1 && a0 * 2 + a0 * a0 + 1 == (unsigned int)v1 * (unsigned int)v1)
 return a0 * 2 + 10;
 }
 return a0 * 3 + 20;
}


// Function: call_opaque_predicate at 0x40130b
int call_opaque_predicate()
{
 return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x40131a
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 6 + (a0 >> 1) + (a0 & 15) + a0 * 15;
}


// Function: call_instruction_substitution at 0x401338
unsigned long long call_instruction_substitution()
{
 return 225;
}


// Function: decrypt_string at 0x401342
char * decrypt_string(char *a0, char *a1, unsigned long n, char a3)
{
 char *p; // rbp
 char v2; // al
 char *ptr; // rdx
 char *addr; // rdx

 p = a1;
 strncpy(p, a0, n);
 p[1 + n] = 0;
 v2 = p[0];
 if (!p[0])
 return p;
 ptr = p;
 do
 {
 ptr[0] = v2 ^ a3;
 addr = &ptr[1];
 v2 = addr[0];
 ptr = addr;
 } while (ptr[0]);
 return p;
}


// Function: param_string_encryption at 0x401385
extern char encrypted_0[32];
char encrypted_0[32] = "Hello, World!";

long long param_string_encryption()
{
 char v0[40]; // [bp-0x38]

 decrypt_string(&encrypted_0, &v0, 32, 90);
 return (unsigned long long)v0 + strlen(&v0);
}


// Function: call_string_encryption at 0x4013e6
unsigned long long call_string_encryption()
{
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x4013fd
unsigned long long param_tail_call_optimized(unsigned long a0, unsigned long a1)
{
 if ((unsigned int)a0 <= 0)
 return a1 & 4294967295;
 return param_tail_call_optimized((unsigned int)a0 - 1, a1 + a0);
}


// Function: call_tail_call_optimized at 0x40141b
unsigned long long call_tail_call_optimized()
{
 return param_tail_call_optimized(1000, 0);
}


// Function: param_non_tail_call at 0x401437
unsigned long long param_non_tail_call(unsigned long a0)
{
 unsigned long long v2; // rbx
 unsigned long long v0; // [bp-0x8]

 if ((unsigned int)a0 <= 0)
 return 0;
 v0 = v2;
 return param_non_tail_call(a0 - 1 & 4294967295) + (a0 & 4294967295);
}


// Function: call_non_tail_call at 0x401454
unsigned long long call_non_tail_call()
{
 return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x40146b
unsigned int param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned int *p, unsigned long a3)
{
 unsigned long long idx; // rax
 unsigned int v2; // edx
 unsigned int *ptr; // rax

 if ((unsigned int)a3 <= 0)
 return 0;
 idx = 0;
 do
 {
 p[idx] = *((int *)(a1 + idx * 4)) + *((int *)(a0 + idx * 4));
 idx += 1;
 } while (idx != (a3 & 4294967295));
 v2 = 0;
 ptr = p;
 do
 {
 v2 += *(ptr);
 ptr += 1;
 } while (ptr != &p[(a3 - 1 & 4294967295) + 1]);
 return v2;
}


// Function: call_vectorized_loop at 0x4014b5
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


// Function: param_link_time_optimization at 0x4015a1
int param_link_time_optimization(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: call_link_time_optimization at 0x4015aa
unsigned long long call_link_time_optimization()
{
 return 20;
}


// Function: param_division_by_zero at 0x4015b4
extern unsigned long long jmp_buffer;

unsigned long long param_division_by_zero(unsigned int a0)
{
 signal(8, div_zero_handler);
 return (!_setjmp(&jmp_buffer) ? (10 % a0) & 4294967295 : 4294967295);
}


// Function: call_division_by_zero at 0x4015fb
int call_division_by_zero()
{
 unsigned int v1; // eax
 unsigned int v2; // eax

 v1 = param_division_by_zero(5);
 v2 = param_division_by_zero(0);
 signal(8, NULL);
 return v1 + v2;
}


// Function: param_null_pointer_deref at 0x401636
extern unsigned long long segv_buffer;

unsigned long long param_null_pointer_deref(unsigned int *a0)
{
 signal(11, segv_handler);
 return (!_setjmp(&segv_buffer) ? *(a0) : 4294967295);
}


// Function: call_null_pointer_deref at 0x40167b
long long call_null_pointer_deref()
{
 unsigned long long v2; // rax
 unsigned long long v3; // rax
 unsigned int v0[1]; // [bp-0x24]

 *((unsigned int *)v0) = 42;
 v2 = param_null_pointer_deref(&v0);
 v3 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 return (v2 & 4294967295) + (v3 & 4294967295);
}


// Function: param_buffer_overflow_stack at 0x4016e3
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: param_buffer_overflow_heap at 0x4016ea
unsigned int param_buffer_overflow_heap(unsigned int a0)
{
 void* ptr; // rax
 unsigned int result; // edx

 ptr = malloc(16);
 if (!ptr)
 return 4294967294;
 result = 33;
 do
 {
 result -= 1;
 } while (result != 1);
 free(ptr);
 return a0;
}


// Function: call_buffer_overflow at 0x40171d
int call_buffer_overflow()
{
 return param_buffer_overflow_heap(20) + 10;
}


// Function: param_integer_overflow at 0x401737
unsigned long long param_integer_overflow(unsigned long a0, unsigned long a1)
{
 unsigned long long v1; // rax

 v1 = a0 + a1;
 if (((unsigned int)a1 > 0 & (unsigned int)a0 > 0) && (unsigned int)v1 < 0)
 return 4294967295;
 if (((unsigned int)a1 & (unsigned int)a0) >= 0)
 {
 return v1;
 }
 else if ((unsigned int)v1 > 0)
 {
 return 4294967294;
 }
 else
 {
 return v1 & 4294967295;
 }
}


// Function: call_integer_overflow at 0x401765
unsigned long long call_integer_overflow()
{
 return 0x77359400;
}


// Function: param_undefined_behavior at 0x40176f
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: call_undefined_behavior at 0x401777
unsigned long long call_undefined_behavior()
{
 return 10;
}


// Function: param_implementation_defined at 0x401781
unsigned long long param_implementation_defined()
{
 return 47;
}


// Function: call_implementation_defined at 0x40178b
unsigned long long call_implementation_defined()
{
 return 47;
}


// Function: test_obf_opt_edge at 0x401795
extern char g_402008[];
extern char g_402038[];
extern char g_402068[];
extern char g_402090[];
extern char g_4020b8[];
extern char g_4020d8[];
extern char g_402110[];
extern char g_402137[];
extern char g_402153[];
extern char g_40216f[];
extern char g_40218c[];
extern char g_4021a8[];
extern char g_4021c4[];
extern char g_4021e1[];
extern char g_4021fe[];
char g_402008[] = "Test output";
char g_402038[] = "tail_call: %d\n";
char g_402068[] = "non_tail_call: %d\n";
char g_402090[] = "vectorized_loop: %d\n";
char g_4020b8[] = "link_time_opt: %d\n";
char g_4020d8[] = "integer_overflow: %d\n";
char g_402110[] = "implementation_defined: %d\n";
char g_402137[] = "opaque_predicate: %d\n";
char g_402153[] = "opaque_predicate_result: %d\n";
char g_40216f[] = "instruction_substitution: %d\n";
char g_40218c[] = "string_encryption: %d\n";
char g_4021a8[] = "division_by_zero: %d\n";
char g_4021c4[] = "null_pointer_deref: %d\n";
char g_4021e1[] = "buffer_overflow: %d\n";
char g_4021fe[] = "undefined_behavior: %d\n";

int test_obf_opt_edge()
{
 puts(&g_402008);
 __printf_chk(1, &g_402137, 10);
 __printf_chk(1, &g_402153, call_opaque_predicate() & 4294967295);
 __printf_chk(1, &g_40216f, 225);
 __printf_chk(1, &g_40218c, param_string_encryption() & 4294967295);
 __printf_chk(1, &g_402038, call_tail_call_optimized() & 4294967295);
 __printf_chk(1, &g_402068, call_non_tail_call() & 4294967295);
 __printf_chk(1, &g_402090, call_vectorized_loop() & 4294967295);
 __printf_chk(1, &g_4020b8, 20);
 __printf_chk(1, &g_4021a8, call_division_by_zero() & 4294967295);
 __printf_chk(1, &g_4021c4, call_null_pointer_deref() & 4294967295);
 __printf_chk(1, &g_4021e1, call_buffer_overflow() & 4294967295);
 __printf_chk(1, &g_4020d8, 0x77359400);
 __printf_chk(1, &g_4021fe, 10);
 return __printf_chk(1, &g_402110, 47);
}


// Function: main at 0x401960
unsigned int main()
{
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


