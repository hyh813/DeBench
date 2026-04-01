// Angr Decompilation of 7_gcc_O3_g
// Platform: AMD64
#include <stddef.h>


/* CRT stub function _init removed by preprocessor */
struct struct_0 { int dummy; };

extern unsigned long long * (*g_403fe8)();
extern unsigned long long g_403f78;
void (*g_403f80)() = NULL;
char g_402008[] = "Testing obfuscation optimizations\n";
extern char g_402038[];
extern char g_402068[];
char g_4020b8[] = "%d\n";
extern char g_4020d8[];
char g_402038[] = "%llu\n";
char g_402068[] = "%llu\n";
char g_402110[] = "%d\n";
char g_402137[] = "%d\n";
char g_402153[] = "%d\n";
extern char g_40216f[];
extern char g_40218c[];
extern char g_4021a8[];
char g_4021c4[] = "%d\n";
extern char g_4021e1[];
char g_4021fe[] = "%d\n";
char g_40218c[] = "%d\n";
char g_4021a8[] = "%d\n";
char g_4021e1[] = "%d\n";
unsigned long long jmp_buffer;
char encrypted_0[31];
unsigned int div_zero_caught = 0;
unsigned int segv_caught = 0;
unsigned long long segv_buffer;
char g_4020d8[] = "%d\n";
char g_40216f[] = "%d\n";

unsigned long long param_division_by_zero_constprop_0(void);
long long param_division_by_zero_constprop_1(void);
unsigned long long call_fake_branch(void);
unsigned long long call_opaque_predicate(void);
unsigned long long call_instruction_substitution(void);
char* decrypt_string(char *a0, char *a1, unsigned long a2, char a3);
long long param_string_encryption(void);
long long call_string_encryption(void);
unsigned long long param_tail_call_optimized(unsigned int a0, unsigned long a1);
unsigned long long call_tail_call_optimized(void);
unsigned long long param_non_tail_call(unsigned long long a0);
unsigned long long call_non_tail_call(void);
unsigned long long param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned long long *ptr, unsigned int a3);
unsigned long long call_vectorized_loop(void);
int param_link_time_optimization(unsigned int a0);
unsigned long long call_link_time_optimization(void);
unsigned long long param_division_by_zero(unsigned int a0);
unsigned long long param_null_pointer_deref(unsigned int *a0);
long long call_null_pointer_deref(void);
unsigned long long param_buffer_overflow_heap(unsigned int a0);
unsigned long long param_integer_overflow(unsigned long a0, unsigned long a1);
unsigned long long call_integer_overflow(void);
unsigned int param_undefined_behavior(unsigned int a0);
unsigned long long call_undefined_behavior(void);
unsigned long long param_implementation_defined(void);
unsigned long long call_implementation_defined(void);
unsigned long long call_buffer_overflow(void);
long long test_obf_opt_edge(void);

inline unsigned long long AddV(unsigned long long a, unsigned long long b)
{
 return a + b;
}




// Function: sub_401020 at 0x401020

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_403f78;
 g_403f80();
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






/* CRT stub function _start removed by preprocessor */



// Function: sub_4011c5 at 0x4011c5
void sub_4011c5()
{
 /* [D] Unsupported jumpkind Ijk_SigTRAP at address 4198853 */
}














// Function: sub_401275 at 0x401275
void sub_401275()
{
}






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
void sub_4012e5()
{
 param_division_by_zero_constprop_0();
 return;
}


// Function: param_division_by_zero_constprop_0 at 0x4012f0
extern unsigned long long jmp_buffer;

unsigned long long param_division_by_zero_constprop_0()
{
 signal(8, div_zero_handler);
 if (_setjmp(&jmp_buffer))
 return 4294967295;
 /* [D] Unsupported jumpkind Ijk_NoDecode at address 4199193 */
}


// Function: sub_40131b at 0x40131b
void sub_40131b()
{
}


// Function: sub_40132a at 0x40132a
void sub_40132a()
{
 param_division_by_zero_constprop_1();
 return;
}


// Function: param_division_by_zero_constprop_1 at 0x401330
extern unsigned long long jmp_buffer;

long long param_division_by_zero_constprop_1()
{
 signal(8, div_zero_handler);
 return (-(_setjmp(&jmp_buffer) < 1) & 3) - 1;
}


// Function: sub_401365 at 0x401365
void sub_401365(unsigned long a0)
{
 param_fake_branch();
 return;
}


// Function: param_fake_branch at 0x401370
int param_fake_branch(unsigned int a0)
{
 return a0;
}


// Function: sub_401377 at 0x401377
void sub_401377()
{
 call_fake_branch();
 return;
}


// Function: call_fake_branch at 0x401380
unsigned long long call_fake_branch()
{
 return 10;
}


// Function: sub_40138a at 0x40138a
void sub_40138a(unsigned long a0)
{
 param_opaque_predicate();
 return;
}


// Function: param_opaque_predicate at 0x401390
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
 flag1 = ((int)(((unsigned long long)v2 >> 31) | ((unsigned long long)v2 << 33)) % (v4 & 4294967295));
 v2 = ((int)(((unsigned long long)v2 >> 31) | ((unsigned long long)v2 << 33)) / (v4 & 4294967295));
 } while (flag1);
 if ((unsigned int)v4 == 1 && a0 * 2 + a0 * a0 + 1 == result * result)
 return a0 * 2 + 10;
 }
 return a0 * 3 + 20;
}


// Function: sub_4013d1 at 0x4013d1
void sub_4013d1()
{
}


// Function: sub_4013dd at 0x4013dd
void sub_4013dd()
{
 call_opaque_predicate();
 return;
}


// Function: call_opaque_predicate at 0x4013e0
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
 result = ((int)(((unsigned long long)v2 >> 31) | ((unsigned long long)v2 << 33)) % (v3 & 4294967295));
 v2 = ((int)(((unsigned long long)v2 >> 31) | ((unsigned long long)v2 << 33)) / (v3 & 4294967295));
 } while (result);
 if ((unsigned int)v3 == 1)
 return 20;
 return 35;
}


// Function: sub_40140c at 0x40140c
void sub_40140c(unsigned long a0)
{
 param_instruction_substitution();
 return;
}


// Function: param_instruction_substitution at 0x401410
int param_instruction_substitution(unsigned int a0)
{
 return a0 * 6 + (a0 >> 1) + (a0 & 15) + a0 * 15;
}


// Function: sub_40142e at 0x40142e
void sub_40142e()
{
 call_instruction_substitution();
 return;
}


// Function: call_instruction_substitution at 0x401430
unsigned long long call_instruction_substitution()
{
 return 225;
}


// Function: sub_40143a at 0x40143a
void sub_40143a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 decrypt_string((char*)a0, (char*)a1, a2, (char)a3);
 return;
}


// Function: decrypt_string at 0x401440
char* decrypt_string(char *a0, char *a1, unsigned long a2, char a3)
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


// Function: sub_40148a at 0x40148a
void sub_40148a()
{
 param_string_encryption();
 return;
}


// Function: param_string_encryption at 0x401490
long long param_string_encryption()
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


// Function: sub_401507 at 0x401507
void sub_401507()
{
 call_string_encryption();
 return;
}


// Function: call_string_encryption at 0x401510
long long call_string_encryption()
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


// Function: sub_401587 at 0x401587
void sub_401587(unsigned long a0)
{
 param_tail_call_optimized((unsigned int)a0, 0);
 return;
}


// Function: param_tail_call_optimized at 0x401590
unsigned long long param_tail_call_optimized(unsigned int a0, unsigned long a1)
{
 unsigned long v1; // rdx
 unsigned int i; // ecx
 unsigned int v11; // ecx
 unsigned int v12; // ecx
 unsigned int v13; // ecx
 unsigned int v14; // ecx
 unsigned int v15; // ecx
 unsigned int v16; // ecx
 unsigned int v17; // ecx
 unsigned long long v3; // xmm1
 unsigned long long v4; // xmm0
 int v6; // xmm0
 unsigned long long v7; // rax
 unsigned long v8; // rcx
 unsigned int result; // ecx
 unsigned long long cur; // rax

 v1 = a0;
 if (a0 <= 0)
 return a1 & 4294967295;
 if (a0 > 10)
 {
 i = 0;
 v3 = AddV(((unsigned long long)a0 << 192) | ((unsigned long long)a0 << 128) | ((unsigned long long)a0 << 64) | a0, 0xfffffffdfffffffeffffffff00000000ULL);
 v4 = 0;
 do
 {
 i += 1;
 v4 = AddV(v4, v3);
 v3 = AddV(v3, 340282366683253975865241362417122803708);
 } while (a0 >> 2 != i);
 v6 = AddV(v4, (unsigned long long)(v4 >> 64));
 v7 = (unsigned long long)(AddV(v6, ((unsigned long long)(v6 >> 96) << 32) | ((unsigned long long)v6 >> 32) | (unsigned long long)(v6 >> 64) * 0x100000000)) + a1;
 v8 = (unsigned int)v1 & 0xfffffffc;
 v1 -= v8;
 if (a0 == (unsigned int)v8)
 return (unsigned long long)(AddV(v6, (unsigned long long)(v6 >> 96) | (unsigned long long)v6 >> 32 | (unsigned long long)(v6 >> 64) * 0x100000000)) + a1;
 }
 else
 {
 v7 = a1 & 4294967295;
 }
 result = v1;
 cur = v7 + v1;
 if (result != 1)
 {
 cur += result - 1;
 v11 = v1;
 if (v11 != 2)
 {
 cur += v11 - 2;
 v12 = v1;
 if (v12 != 3)
 {
 cur += v12 - 3;
 v13 = v1;
 if (v13 != 4)
 {
 cur += v13 - 4;
 v14 = v1;
 if (v14 != 5)
 {
 cur += v14 - 5;
 v15 = v1;
 if (v15 != 6)
 {
 cur += v15 - 6;
 v16 = v1;
 if (v16 != 7)
 {
 cur += v16 - 7;
 v17 = v1;
 if (v17 != 8)
 cur = v1 + cur + v17 - 8 - 9 & 4294967295;
 }
 }
 }
 }
 }
 }
 }
 return cur;
}


// Function: sub_40165e at 0x40165e
void sub_40165e()
{
}


// Function: sub_401661 at 0x401661
void sub_401661()
{
}


// Function: sub_40166f at 0x40166f
void sub_40166f()
{
 call_tail_call_optimized();
 return;
}


// Function: call_tail_call_optimized at 0x401670
unsigned long long call_tail_call_optimized()
{
 return 500500;
}


// Function: sub_40167a at 0x40167a
void sub_40167a(unsigned long a0)
{
 param_non_tail_call(a0);
 return;
}


// Function: param_non_tail_call at 0x401680
unsigned long long param_non_tail_call(unsigned long long a0)
{
 unsigned int i; // eax
 unsigned long long v2; // xmm1
 unsigned long long cur; // rax
 unsigned int v12; // edx
 unsigned int v13; // edx
 unsigned int v14; // edx
 unsigned int v15; // edx
 unsigned int v16; // edx
 unsigned int v17; // edx
 unsigned int v18; // edx
 unsigned long long v3; // xmm0
 unsigned long v5; // rdx
 int v6; // xmm0
 unsigned long long v8; // rax
 unsigned long long v9; // rdi
 unsigned int result; // edx

 if ((unsigned int)a0 <= 0)
 return 0;
 if ((unsigned int)a0 > 10)
 {
 i = 0;
 v2 = AddV(((unsigned long long)a0 << 192) | ((unsigned long long)a0 << 128) | ((unsigned long long)a0 << 64) | a0, 0xfffffffdfffffffeffffffff00000000ULL);
 v3 = 0;
 do
 {
 i += 1;
 v3 = AddV(v3, v2);
 v2 = AddV(v2, 340282366683253975865241362417122803708);
 } while ((unsigned int)((a0 & 4294967295) >> 2) != i);
 v5 = (unsigned int)a0 & 0xfffffffc;
 v6 = AddV(v3, (unsigned long long)(v3 >> 64));
 v8 = (unsigned long long)(AddV(v6, ((unsigned long long)(v6 >> 96) << 32) | ((unsigned long long)v6 >> 32) | (unsigned long long)(v6 >> 64) * 0x100000000));
 v9 = a0 - v5;
 if ((unsigned int)a0 == (unsigned int)v5)
 return (unsigned long long)(AddV(v6, (unsigned long long)(v6 >> 96) | (unsigned long long)v6 >> 32 | (unsigned long long)(v6 >> 64) * 0x100000000));
 }
 else
 {
 v8 = 0;
 v9 = a0;
 }
 result = v9;
 cur = v8 + v9;
 if (result != 1)
 {
 cur += result - 1;
 v12 = v9;
 if (v12 != 2)
 {
 cur += v12 - 2;
 v13 = v9;
 if (v13 != 3)
 {
 cur += v13 - 3;
 v14 = v9;
 if (v14 != 4)
 {
 cur += v14 - 4;
 v15 = v9;
 if (v15 != 5)
 {
 cur += v15 - 5;
 v16 = v9;
 if (v16 != 6)
 {
 cur += v16 - 6;
 v17 = v9;
 if (v17 != 7)
 {
 cur += v17 - 7;
 v18 = v9;
 if (v18 != 8)
 cur = v9 + v18 - 8 + cur - 9 & 4294967295;
 }
 }
 }
 }
 }
 }
 }
 return cur;
}


// Function: sub_40174b at 0x40174b
void sub_40174b()
{
}


// Function: sub_401751 at 0x401751
void sub_401751()
{
}


// Function: sub_40175f at 0x40175f
void sub_40175f()
{
 call_non_tail_call();
 return;
}


// Function: call_non_tail_call at 0x401760
unsigned long long call_non_tail_call()
{
 return 5050;
}


// Function: sub_40176a at 0x40176a
void sub_40176a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3)
{
 param_vectorized_loop(a0, a1, (unsigned long long *)a2, (unsigned int)a3);
 return;
}


// Function: param_vectorized_loop at 0x401770
unsigned long long param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned long long *ptr, unsigned int a3)
{
 unsigned long v1; // r8
 unsigned int v2; // r9d
 unsigned long long *v11; // rax
 unsigned int v12; // ecx
 int v13; // xmm0
 unsigned int v14; // eax
 unsigned long v15; // rsi
 unsigned long long v16; // rax
 unsigned long long v17; // rax
 unsigned int result; // r10d
 unsigned long long i; // rax
 unsigned long long index; // rcx
 unsigned long long v6; // rax
 unsigned long v7; // rcx
 unsigned long long idx; // rax
 unsigned long long v9; // xmm0
 unsigned long long *p; // rax

 v1 = a3;
 if (a3 <= 0)
 return 0;
 if ((-4 + (char *)ptr - a1 > 8 & -4 + (char *)ptr - a0 > 8) && (unsigned int)v1 != 1)
 {
 v2 = v1 - 1;
 result = v1;
 if (v2 > 2)
 {
 i = 0;
 do
 {
 *((__int128 *)((char *)ptr + i)) = AddV(*((__int128 *)(a0 + i)), *((__int128 *)(a1 + i)));
 i += 16;
 } while (((v1 & 4294967295) >> 2 & 4294967295) * 16 != i);
 index = (unsigned int)v1 & 0xfffffffc;
 v6 = index & 4294967295;
 if ((unsigned int)v1 == (unsigned int)index)
 goto LABEL_401839;
 result = (v1 & 4294967295) - index;
 if (result == 1)
 goto LABEL_401824;
 }
 else
 {
 index = 0;
 v6 = 0;
 }
 *((unsigned long long *)((char *)ptr + 4 * index)) = AddV(*((long long *)(a0 + index * 4)), *((long long *)(a1 + index * 4)));
 v7 = result & 4294967294;
 v6 += v7;
 if (result != (unsigned int)v7)
 {
LABEL_401824:
 *((int *)((char *)ptr + 4 * (v6 & 4294967295))) = *((int *)(a1 + (v6 & 4294967295) * 4)) + *((int *)(a0 + (v6 & 4294967295) * 4));
 }
 }
 else
 {
 idx = 0;
 do
 {
 *((int *)((char *)ptr + 4 * idx)) = *((int *)(a1 + idx * 4)) + *((int *)(a0 + idx * 4));
 idx += 1;
 } while (idx != (v1 & 4294967295));
 v2 = v1 - 1;
 }
 if (v2 <= 2)
 {
 v12 = 0;
 v14 = 0;
LABEL_401893:
 v15 = v12;
 v16 = v14 + *((int *)((char *)ptr + 4 * v15));
 if (v12 + 1 >= (unsigned int)v1)
 return v16;
 v17 = (unsigned int)v16 + *((int *)(4 + (char *)ptr + 4 * v15));
 if (v12 + 2 >= (unsigned int)v1)
 return v17;
 return (unsigned int)v17 + *((int *)(8 + (char *)ptr + 4 * v15));
 }
LABEL_401839:
 v9 = 0;
 p = ptr;
 do
 {
 v11 = p + 1;
 v9 = AddV(v9, *p);
 p = v11;
 } while (p != &ptr[1 + ((v1 & 4294967295) >> 2) + 1]);
 v12 = (unsigned int)v1 & 0xfffffffc;
 v13 = AddV(v9, (unsigned long long)(v9 >> 64));
 v14 = (unsigned int)(AddV(v13, ((unsigned long long)(v13 >> 96) << 32) | ((unsigned long long)v13 >> 32) | (unsigned long long)(v13 >> 64) * 0x100000000));
 if (!((char)v1 & 3))
 return (unsigned long long)(AddV(v13, ((unsigned long long)(v13 >> 96) << 32) | ((unsigned long long)v13 >> 32) | (unsigned long long)(v13 >> 64) * 0x100000000));
 goto LABEL_401893;
}


// Function: sub_4018ba at 0x4018ba
void sub_4018ba()
{
}


// Function: sub_4018c3 at 0x4018c3
void sub_4018c3()
{
}


// Function: sub_4018cf at 0x4018cf
void sub_4018cf()
{
}


// Function: sub_4018fc at 0x4018fc
void sub_4018fc()
{
 call_vectorized_loop();
 return;
}


// Function: call_vectorized_loop at 0x401900
unsigned long long call_vectorized_loop()
{
 return 72;
}


// Function: sub_40190a at 0x40190a
void sub_40190a(unsigned long a0)
{
 param_link_time_optimization((unsigned int)a0);
 return;
}


// Function: param_link_time_optimization at 0x401910
int param_link_time_optimization(unsigned int a0)
{
 return a0 * 2 + 10;
}


// Function: sub_401919 at 0x401919
void sub_401919()
{
 call_link_time_optimization();
 return;
}


// Function: call_link_time_optimization at 0x401920
unsigned long long call_link_time_optimization()
{
 return 20;
}


// Function: sub_40192a at 0x40192a
void sub_40192a(unsigned long a0)
{
 param_division_by_zero((unsigned int)a0);
 return;
}


// Function: param_division_by_zero at 0x401930
extern unsigned long long jmp_buffer;

unsigned long long param_division_by_zero(unsigned int a0)
{
 signal(8, div_zero_handler);
 return (!_setjmp(&jmp_buffer) ? ((int)((0ULL << 32 | 10) % a0) | ((int)((0ULL << 32 | 10) / a0))) & 4294967295 : 4294967295);
}


// Function: sub_401977 at 0x401977
void sub_401977()
{
 call_division_by_zero();
 return;
}


// Function: call_division_by_zero at 0x401980
int call_division_by_zero()
{
 unsigned int v1; // eax
 unsigned int v2; // eax

 v1 = param_division_by_zero_constprop_1();
 v2 = param_division_by_zero_constprop_0();
 signal(8, NULL);
 return v1 + v2;
}


// Function: sub_4019ae at 0x4019ae
void sub_4019ae(unsigned long a0)
{
 param_null_pointer_deref((unsigned int *)a0);
 return;
}


// Function: param_null_pointer_deref at 0x4019b0
extern unsigned long long segv_buffer;

unsigned long long param_null_pointer_deref(unsigned int *a0)
{
 signal(11, segv_handler);
 return (!_setjmp(&segv_buffer) ? *(a0) : 4294967295);
}


// Function: sub_4019ee at 0x4019ee
void sub_4019ee()
{
}


// Function: sub_4019f7 at 0x4019f7
void sub_4019f7()
{
 call_null_pointer_deref();
 return;
}


// Function: call_null_pointer_deref at 0x401a00
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


// Function: sub_401a62 at 0x401a62
void sub_401a62(unsigned long a0)
{
 param_buffer_overflow_stack();
 return;
}


// Function: param_buffer_overflow_stack at 0x401a70
int param_buffer_overflow_stack(unsigned int a0)
{
 return a0;
}


// Function: sub_401a77 at 0x401a77
void sub_401a77(unsigned long a0)
{
 param_buffer_overflow_heap((unsigned int)a0);
 return;
}


// Function: param_buffer_overflow_heap at 0x401a80
unsigned long long param_buffer_overflow_heap(unsigned int a0)
{
 void* ptr; // rax

 ptr = malloc(16);
 if (!ptr)
 return 4294967294;
 free(ptr);
 return a0;
}


// Function: sub_401aa9 at 0x401aa9
void sub_401aa9()
{
 call_buffer_overflow();
 return;
}


// Function: call_buffer_overflow at 0x401ab0
unsigned long long call_buffer_overflow()
{
 void* ptr; // rax

 ptr = malloc(16);
 if (!ptr)
 return 8;
 free(ptr);
 return 30;
}


// Function: param_integer_overflow at 0x401ae0
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


// Function: sub_401afa at 0x401afa
void sub_401afa()
{
}


// Function: sub_401b0f at 0x401b0f
void sub_401b0f()
{
 call_integer_overflow();
 return;
}


// Function: call_integer_overflow at 0x401b10
unsigned long long call_integer_overflow()
{
 return 0x77359400;
}


// Function: sub_401b1a at 0x401b1a
void sub_401b1a(unsigned long a0)
{
 param_undefined_behavior(a0);
 return;
}


// Function: param_undefined_behavior at 0x401b20
unsigned int param_undefined_behavior(unsigned int a0)
{
 return a0 * 2;
}


// Function: sub_401b28 at 0x401b28
void sub_401b28()
{
 call_undefined_behavior();
 return;
}


// Function: call_undefined_behavior at 0x401b30
unsigned long long call_undefined_behavior()
{
 return 10;
}


// Function: sub_401b3a at 0x401b3a
void sub_401b3a()
{
 param_implementation_defined();
 return;
}


// Function: param_implementation_defined at 0x401b40
unsigned long long param_implementation_defined()
{
 return 47;
}


// Function: sub_401b4a at 0x401b4a
void sub_401b4a()
{
 call_implementation_defined();
 return;
}


// Function: call_implementation_defined at 0x401b50
unsigned long long call_implementation_defined()
{
 return 47;
}


// Function: sub_401b5a at 0x401b5a
void sub_401b5a()
{
 test_obf_opt_edge();
 return;
}


// Function: test_obf_opt_edge at 0x401b60
long long test_obf_opt_edge()
{
 unsigned int flag1; // edx
 unsigned int v5; // eax
 unsigned long long v14; // rax
 unsigned long long v15; // rax
 unsigned long long v16; // rax
 unsigned long long v17; // rax
 void* heap_ptr; // rax
 unsigned long long v19; // rdx
 unsigned long v6; // rcx
 char *dst; // rax
 unsigned long v8; // rbx
 char *v9; // rax
 char *ptr; // rax
 unsigned int v12; // edi
 char *v13; // rsi
 unsigned int v0; // [bp-0x4c]
 char v1[31]; // [bp-0x48]
 char result; // [bp-0x29]

 puts(&g_402008);
 __printf_chk(1, &g_402137, 10);
 flag1 = 6;
 v5 = 5;
 do
 {
 v6 = flag1;
 flag1 = ((int)(((unsigned long long)v5 >> 31) | ((unsigned long long)v5 << 33)) % (v6 & 4294967295)) >> 32;
 v5 = v6;
 } while (flag1);
 __printf_chk(1, &g_402153, ((unsigned int)v6 != 1 ? 35 : 20));
 __printf_chk(1, &g_40216f, 225);
 dst = strncpy(&v1, &encrypted_0, 31);
 v8 = (unsigned long long)v1;
 result = 0;
 v9 = dst;
 if ((char)v8)
 {
 do
 {
 ptr = &v9[1];
 ptr[1] = (char)v8 ^ 90;
 v8 = ptr[0];
 v9 = ptr;
 } while ((char)v8);
 v8 = (unsigned long long)v1;
 }
 __printf_chk(1, &g_40218c, v8 + strlen(dst));
 __printf_chk(1, &g_402038, 500500);
 __printf_chk(1, &g_402068, 5050);
 call_vectorized_loop();
 __printf_chk(v12, v13);
 __printf_chk(1, &g_4020b8, 20);
 v14 = param_division_by_zero_constprop_1();
 v15 = param_division_by_zero_constprop_0();
 signal(8, NULL);
 __printf_chk(1, &g_4021a8, (v14 & 4294967295) + (v15 & 4294967295));
 v0 = 42;
 v16 = param_null_pointer_deref(&v0);
 v17 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 __printf_chk(1, &g_4021c4, (v16 & 4294967295) + (v17 & 4294967295));
 heap_ptr = malloc(16);
 if (heap_ptr)
 {
 free(heap_ptr);
 v19 = 30;
 }
 else
 {
 v19 = 8;
 }
 __printf_chk(1, &g_4021e1, v19);
 __printf_chk(1, &g_4020d8, 0x77359400);
 __printf_chk(1, &g_4021fe, 10);
 return __printf_chk(1, &g_402110, 47);
}



/* CRT stub function _fini removed by preprocessor */


