// Angr Decompilation of 7_gcc_O2_no_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <setjmp.h>
#include <signal.h>

struct _0 {
    int unused;
};
typedef struct _0 struct_0;

extern struct_0 *g_403fe8;

void * _init()
{
 void *v1; // rax

 v1 = (void *)g_403fe8;
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_403f78;

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


// Function: sub_4010cf at 0x4010cf
void sub_4010cf()
{
 __cxa_finalize();
 return;
}


// Function: main at 0x401180
unsigned int main()
{
 test_obf_opt_edge();
 return 0;
}


// Function: sub_401196 at 0x401196
void sub_401196(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4011c5 at 0x4011c5
void sub_4011c5()
{
}


// Function: sub_4011c6 at 0x4011c6
void sub_4011c6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4011f9 at 0x4011f9
void sub_4011f9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401239 at 0x401239
void sub_401239()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401275 at 0x401275
void sub_401275()
{
}


// Function: sub_401279 at 0x401279
void sub_401279()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401289 at 0x401289
void sub_401289()
{
 div_zero_handler(); /* do not return */
}


// Function: div_zero_handler at 0x401290
extern unsigned int div_zero_caught;
extern unsigned long long jmp_buffer;

void div_zero_handler()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 div_zero_caught = 1;
 __longjmp_chk(&jmp_buffer, 1); /* do not return */
}


// Function: sub_4012b5 at 0x4012b5
void sub_4012b5()
{
 segv_handler(); /* do not return */
}


// Function: segv_handler at 0x4012c0
extern unsigned long long segv_buffer;
extern unsigned int segv_caught;

void segv_handler()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 segv_caught = 1;
 __longjmp_chk(&segv_buffer, 1); /* do not return */
}


// Function: sub_4012e5 at 0x4012e5
void sub_4012e5(unsigned long a0)
{
 param_fake_branch();
 return;
}


// Function: param_fake_branch at 0x4012f0
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: sub_4012f7 at 0x4012f7
extern unsigned long long call_fake_branch();

void sub_4012f7()
{
 call_fake_branch();
 return;
}


// Function: call_fake_branch at 0x401300
extern unsigned long long call_fake_branch();

unsigned long long call_fake_branch()
{
 return 10ULL;
}


// Function: sub_40130a at 0x40130a
void sub_40130a(unsigned long a0)
{
 param_opaque_predicate();
 return;
}


// Function: param_opaque_predicate at 0x401310
int param_opaque_predicate(unsigned int a0)
{
 unsigned int result; // edx
 unsigned int v2; // eax
 unsigned int flag1; // edx
 unsigned long v4; // rcx

 result = a0 + 1;
 if (result)
 {
 v2 = a0;
 flag1 = result;
 do
 {
 v4 = flag1;
 v2 = v4;
 flag1 = (unsigned int)(((unsigned long long)(v2 >> 31) * 2 + v2) % (v4 & 4294967295u) >> 32);
 } while (flag1);
 if ((unsigned int)v4 == 1 && a0 * 2 + a0 * a0 + 1 == result * result)
 return a0 * 2 + 10;
 }
 return a0 * 3 + 20;
}


// Function: sub_401351 at 0x401351
void sub_401351()
{
}


// Function: sub_40135d at 0x40135d
extern unsigned long long call_opaque_predicate();

void sub_40135d()
{
 call_opaque_predicate();
 return;
}


// Function: call_opaque_predicate at 0x401360

unsigned long long call_opaque_predicate()
{
 unsigned long long result; // edx
 unsigned int v2; // eax
 unsigned long v3; // rcx

 result = 6;
 v2 = 5;
 do
 {
 v3 = result;
 result = (unsigned int)(((unsigned long long)(v2 >> 31) * 2 + v2) / (v3 & 4294967295u) >> 32);
 v2 = v3;
 } while (result);
 if ((unsigned int)v3 == 1)
 return 20ULL;
 return 35ULL;
}


// Function: sub_40138c at 0x40138c
void sub_40138c(unsigned long a0)
{
 param_instruction_substitution();
 return;
}


// Function: param_instruction_substitution at 0x401390
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 6 + (a0 >> 1) + (a0 & 15) + a0 * 15;
}


// Function: sub_4013ae at 0x4013ae
void sub_4013ae()
{
 call_instruction_substitution();
 return;
}


// Function: call_instruction_substitution at 0x4013b0
unsigned long long call_instruction_substitution(void)
{
 return 225ULL;
}


// Function: sub_4013ba at 0x4013ba
void sub_4013ba(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 decrypt_string();
 return;
}


// Function: decrypt_string at 0x4013c0
char* decrypt_string(char *a0, char *a1, unsigned long long a2, unsigned char a3)
{
 char *p; // rax
 char v2; // al
 char *addr; // rdx
 char *ptr; // rdx

 p = strncpy(a1, a0, a2);
 p[1 + a2] = 0;
 v2 = p[0];
 if (!p[0])
 return p;
 addr = p;
 do
 {
 ptr = &addr[1];
 ptr[1] = v2 ^ a3;
 v2 = ptr[0];
 addr = ptr;
 } while (addr[0]);
 return p;
}


// Function: sub_40140a at 0x40140a
void sub_40140a()
{
 param_string_encryption();
 return;
}


// Function: param_string_encryption at 0x401410
extern char encrypted_0;

long long param_string_encryption(void)
{
 char *dst; // rax
 unsigned long v4; // rbx
 char *v5; // rax
 char *ptr; // rax
 char v0[31]; // [bp-0x38]
 char result; // [bp-0x19]

 dst = strncpy(&v0, &encrypted_0, 31);
 v4 = (unsigned long long)v0;
 result = 0;
 v5 = dst;
 if ((char)v4)
 {
 do
 {
 ptr = &v5[1];
 ptr[1] = (char)v4 ^ 90;
 v4 = ptr[0];
 v5 = ptr;
 } while ((char)v4);
 v4 = (unsigned long long)v0;
 }
 return strlen(dst) + v4;
}


// Function: sub_401487 at 0x401487
void sub_401487()
{
 call_string_encryption();
 return;
}


// Function: call_string_encryption at 0x401490
extern long long call_string_encryption(void);

long long call_string_encryption(void)
{
 return param_string_encryption();
}


// Function: sub_40149b at 0x40149b
void sub_40149b(unsigned long a0, unsigned long a1)
{
 param_tail_call_optimized();
 return;
}


// Function: param_tail_call_optimized at 0x4014a0
extern long long param_tail_call_optimized(unsigned long long a0, unsigned int a1);

long long param_tail_call_optimized(unsigned long long a0, unsigned int a1)
{
 unsigned long v1; // rax

 v1 = a1;
 if ((unsigned int)a0 > 0)
 {
 do
 {
 v1 += a0;
 a0 = (unsigned int)a0 - 1;
 } while ((unsigned int)a0 != 1);
 }
 return v1;
}


// Function: sub_4014b8 at 0x4014b8
void sub_4014b8()
{
 call_tail_call_optimized();
 return;
}


// Function: call_tail_call_optimized at 0x4014c0
unsigned long long call_tail_call_optimized()
{
 return 500500;
}


// Function: sub_4014ca at 0x4014ca
void sub_4014ca(unsigned long a0)
{
 param_non_tail_call();
 return;
}


// Function: param_non_tail_call at 0x4014d0
unsigned long long param_non_tail_call(unsigned long long a0)
{
 unsigned long long v1; // rax

 v1 = 0;
 if ((unsigned int)a0 > 0)
 {
 do
 {
 v1 += a0;
 a0 = (unsigned int)a0 - 1;
 } while ((unsigned int)a0 != 1);
 }
 return v1;
}


// Function: sub_4014e8 at 0x4014e8
void sub_4014e8()
{
 call_non_tail_call();
 return;
}


// Function: call_non_tail_call at 0x4014f0
unsigned long long call_non_tail_call()
{
 return 5050;
}


// Function: sub_4014fa at 0x4014fa
void sub_4014fa(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 param_vectorized_loop();
 return;
}


// Function: param_vectorized_loop at 0x401500
unsigned long long param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned int *p, unsigned long a3)
{
 unsigned long long idx; // rax
 unsigned long long v2; // rax
 unsigned int *ptr; // rdx

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
 v2 = (unsigned int)v2 + *(ptr);
 ptr += 1;
 } while (&p[(a3 - 1 & 4294967295) + 1] != ptr);
 return v2;
}


// Function: sub_40153c at 0x40153c
void sub_40153c()
{
}


// Function: sub_401543 at 0x401543
void sub_401543()
{
 call_vectorized_loop();
 return;
}


// Function: call_vectorized_loop at 0x401550
long long call_vectorized_loop()
{
 unsigned int v13; // esi
 unsigned int v14; // ecx
 char *cur; // rdx
 unsigned long long v16; // rax
 unsigned int v17; // r8d
 unsigned long v0; // [bp-0x78]
 unsigned long long v1; // [bp-0x70]
 unsigned long long v2; // [bp-0x68]
 unsigned long long v3; // [bp-0x60]
 unsigned long v4; // [bp-0x58]
 unsigned long long v5; // [bp-0x50]
 unsigned long long v6; // [bp-0x48]
 unsigned long long v7; // [bp-0x40]
 char v8; // [bp-0x38]
 unsigned long long result; // [bp-0x38]
 unsigned long long flag1; // [bp-0x28]
 char v11; // [bp-0x18]

 v13 = 8;
 v14 = 1;
 cur = &v8;
 result = 0;
 flag1 = 0;
 v0 = 8589934593;
 v1 = 17179869187;
 v2 = 25769803781;
 v3 = 34359738375;
 v4 = 30064771080;
 v5 = 21474836486;
 v6 = 12884901892;
 v7 = 4294967298;
 v16 = 0;
 while (true)
 {
 *((unsigned int *)&(&v8)[v16]) = v14 + v13;
 v16 += 4;
 if (v16 == 32)
 break;
 v14 = *((int *)((char *)&v0 + v16));
 v13 = *((int *)((char *)&v4 + v16));
 }
 v17 = 0;
 do
 {
 v17 += *(cur);
 cur += 1;
 } while (&v11 != cur);
 return v17;
}


// Function: sub_4015fe at 0x4015fe
void sub_4015fe()
{
}


// Function: sub_401651 at 0x401651
void sub_401651(unsigned long a0)
{
 param_link_time_optimization();
 return;
}


// Function: param_link_time_optimization at 0x401660
int param_link_time_optimization(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: sub_401669 at 0x401669
void sub_401669()
{
 call_link_time_optimization();
 return;
}


// Function: call_link_time_optimization at 0x401670
unsigned long long call_link_time_optimization()
{
 return 20;
}


// Function: sub_40167a at 0x40167a
void sub_40167a(unsigned long a0)
{
 param_division_by_zero();
 return;
}


// Function: param_division_by_zero at 0x401680
extern unsigned long long jmp_buffer;

unsigned long long param_division_by_zero(unsigned int a0)
{
 signal(8, div_zero_handler);
 return (!_setjmp(&jmp_buffer) ? ((int)((0 CONCAT 10) % a0) CONCAT (int)((0 CONCAT 10) / a0)) & 4294967295 : 4294967295);
}


// Function: sub_4016c7 at 0x4016c7
void sub_4016c7()
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
 return v1 + v2;
}


// Function: sub_401705 at 0x401705
void sub_401705(unsigned long a0)
{
 param_null_pointer_deref();
 return;
}


// Function: param_null_pointer_deref at 0x401710
extern unsigned long long segv_buffer;

unsigned long long param_null_pointer_deref(unsigned int *a0)
{
 signal(11, segv_handler);
 return (!_setjmp(&segv_buffer) ? *(a0) : 4294967295);
}


// Function: sub_40174e at 0x40174e
void sub_40174e()
{
}


// Function: sub_401757 at 0x401757
void sub_401757()
{
 call_null_pointer_deref();
 return;
}


// Function: call_null_pointer_deref at 0x401760
long long call_null_pointer_deref()
{
 unsigned long long v2; // rax
 unsigned long long v3; // rax
 unsigned int v0; // [bp-0x24]

 v0 = 42;
 v2 = param_null_pointer_deref(&v0);
 v3 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 return (v2 & 4294967295) + (v3 & 4294967295);
}


// Function: sub_4017c2 at 0x4017c2
void sub_4017c2(unsigned long a0)
{
 param_buffer_overflow_stack();
 return;
}


// Function: param_buffer_overflow_stack at 0x4017d0
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: sub_4017d7 at 0x4017d7
void sub_4017d7(unsigned long a0)
{
 param_buffer_overflow_heap();
 return;
}


// Function: param_buffer_overflow_heap at 0x4017e0
unsigned long long param_buffer_overflow_heap(unsigned int a0)
{
 void* ptr; // rax

 ptr = malloc(16);
 if (!ptr)
 return 4294967294;
 free(ptr);
 return a0;
}


// Function: sub_401809 at 0x401809
void sub_401809()
{
 call_buffer_overflow();
 return;
}


// Function: call_buffer_overflow at 0x401810
unsigned long long call_buffer_overflow()
{
 void* ptr; // rax

 ptr = malloc(16);
 if (!ptr)
 return 8;
 free(ptr);
 return 30;
}


// Function: param_integer_overflow at 0x401840
unsigned long long param_integer_overflow(unsigned long a0, unsigned long a1)
{
 unsigned long long v1; // rax

 v1 = a0 + a1;
 if ((unsigned int)a0 > 0 && (unsigned int)a1 > 0)
 {
 if ((unsigned int)v1 < 0)
 return 4294967295;
 return v1 & 4294967295;
 }
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


// Function: sub_40185a at 0x40185a
void sub_40185a()
{
}


// Function: sub_40186f at 0x40186f
void sub_40186f()
{
 call_integer_overflow();
 return;
}


// Function: call_integer_overflow at 0x401870
unsigned long long call_integer_overflow()
{
 return 0x77359400;
}


// Function: sub_40187a at 0x40187a
void sub_40187a(unsigned long a0)
{
 param_undefined_behavior();
 return;
}


// Function: param_undefined_behavior at 0x401880
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401888 at 0x401888
void sub_401888()
{
 call_undefined_behavior();
 return;
}


// Function: call_undefined_behavior at 0x401890
unsigned long long call_undefined_behavior()
{
 return 10;
}


// Function: sub_40189a at 0x40189a
void sub_40189a()
{
 param_implementation_defined();
 return;
}


// Function: param_implementation_defined at 0x4018a0
unsigned long long param_implementation_defined()
{
 return 47;
}


// Function: sub_4018aa at 0x4018aa
void sub_4018aa()
{
 call_implementation_defined();
 return;
}


// Function: call_implementation_defined at 0x4018b0
unsigned long long call_implementation_defined()
{
 return 47;
}


// Function: sub_4018ba at 0x4018ba
void sub_4018ba()
{
 test_obf_opt_edge();
 return;
}


// Function: test_obf_opt_edge at 0x4018c0
extern char g_402008;
extern char g_402038;
extern char g_402068;
extern char g_402090;
extern char g_4020b8;
extern char g_4020d8;
extern char g_402110;
extern char g_402137;
extern char g_402153;
extern char g_40216f;
extern char g_40218c;
extern char g_4021a8;
extern char g_4021c4;
extern char g_4021e1;
extern char g_4021fe;

long long test_obf_opt_edge()
{
 unsigned int result; // edx
 unsigned int v3; // eax
 unsigned long long v12; // rdx
 unsigned long v4; // rcx
 unsigned long long v7; // rax
 unsigned long long v8; // rax
 unsigned long long v9; // rax
 unsigned long long v10; // rax
 void* ptr; // rax
 unsigned int v0; // [bp-0x24]

 puts(&g_402008);
 __printf_chk(1, &g_402137, 10);
 result = 6;
 v3 = 5;
 do
 {
 v4 = result;
 result = (unsigned int)(((unsigned long long)(v3 >> 31) * 2 + v3) / (v4 & 4294967295u) >> 32);
 v3 = v4;
 } while (result);
 __printf_chk(1, &g_402153, ((unsigned int)v4 != 1 ? 35 : 20));
 __printf_chk(1, &g_40216f, 225);
 __printf_chk(1, &g_40218c, param_string_encryption() & 4294967295);
 __printf_chk(1, &g_402038, 500500);
 __printf_chk(1, &g_402068, 5050);
 __printf_chk(1, &g_402090, call_vectorized_loop() & 4294967295);
 __printf_chk(1, &g_4020b8, 20);
 v7 = param_division_by_zero(5);
 v8 = param_division_by_zero(0);
 signal(8, NULL);
 __printf_chk(1, &g_4021a8, (v7 & 4294967295) + (v8 & 4294967295));
 v0 = 42;
 v9 = param_null_pointer_deref(&v0);
 v10 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 __printf_chk(1, &g_4021c4, (v9 & 4294967295) + (v10 & 4294967295));
 ptr = malloc(16);
 if (ptr)
 {
 free(ptr);
 v12 = 30;
 }
 else
 {
 v12 = 8;
 }
 __printf_chk(1, &g_4021e1, v12);
 __printf_chk(1, &g_4020d8, 0x77359400);
 __printf_chk(1, &g_4021fe, 10);
 return __printf_chk(1, &g_402110, 47);
}



/* CRT stub function _fini removed by preprocessor */


