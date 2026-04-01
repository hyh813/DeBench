// Angr Decompilation of 5-23_gcc_O1_g
// Platform: AMD64

#include <stddef.h>
#include <stdio.h>

/* Define missing functions/macros */
#define AddV(a, b) ((a) + (b))
#define atomic_exchange_add(ptr, val) (*(ptr) += (val))

/* CRT stub function _init removed by preprocessor */
typedef struct { unsigned long long dummy; } struct_0;

/* Define missing global variables */
struct_0 *g_403fe8 = NULL;
char g_40203d[] = "MACRO_CONSTANTS: %d\n";
char g_402058[] = "MACRO_FUNCTIONS: %d\n";
char g_402073[] = "CONDITIONAL_COMPILE: %d\n";
char g_40208e[] = "MACRO_RECURSION: %d\n";
char g_4020aa[] = "TOKEN_PASTE: %d\n";
char g_4020c5[] = "VARIADIC_MACRO: %d\n";
char g_4020e0[] = "MACRO_OVERRIDE: %d\n";
char g_4020fb[] = "INCLUDE_GUARD: %d\n";
char g_4021f0[] = "=== Preprocessing Features Test ===\n";
char g_402218[] = "MULTI_BRANCH_COMPILE: %d\n";
char g_402238[] = "STRINGIZE: %d\n";
char g_402268[] = "BUILTIN_MACROS: %d\n";
char g_402117[] = "ASM_BASIC: %d\n";
char g_402133[] = "ASM_CLOBBER: %d\n";
char g_40214f[] = "ASM_MULTI_INSN: %d\n";
char g_40216b[] = "ASM_SIMD: %d\n";
char g_402187[] = "ASM_ATOMIC: %d\n";
char g_4021a3[] = "ASM_PRIVILEGED: %d\n";
char g_402298[] = "=== ASM Features Test ===\n";
unsigned int global_var = 0;




// Function: sub_401020 at 0x401020
extern unsigned long long g_403f98;
extern unsigned long long g_403fa0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_403f98;
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
 __cxa_finalize();
 return;
}



/* CRT stub function _start removed by preprocessor */






















// Function: param_macro_constants at 0x4011e9
unsigned long long param_macro_constants(unsigned int a0)
{
 if (0x400 >= a0)
 return 0x200;
 return 64;
}


// Function: call_macro_constants at 0x401201
unsigned long long call_macro_constants()
{
 return 64;
}


// Function: param_macro_functions at 0x40120b
long long param_macro_functions(unsigned long a0, unsigned int a1)
{
 return a0 * (a0 & 4294967295) + ((unsigned int)a0 < a1 ? a1 : a0 & 4294967295);
}


// Function: call_macro_functions at 0x40121c
unsigned long long call_macro_functions()
{
 return 30;
}


// Function: param_conditional_compile at 0x401226
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x40122f
unsigned long long call_conditional_compile()
{
 return 32;
}


// Function: param_multi_branch_compile at 0x401239
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x401245
unsigned long long call_multi_branch_compile()
{
 return 57122;
}


// Function: param_macro_recursion at 0x40124f
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x401257
unsigned long long call_macro_recursion()
{
 return 116;
}


// Function: param_stringize at 0x401261
unsigned long long param_stringize()
{
 return 19;
}


// Function: call_stringize at 0x40126b
unsigned long long call_stringize()
{
 return 19;
}


// Function: my_func at 0x401275
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: param_token_paste at 0x40127f
int param_token_paste(unsigned int a0)
{
 return a0 * 11 + 5;
}


// Function: call_token_paste at 0x40128b
unsigned long long call_token_paste()
{
 return 60;
}


// Function: param_variadic_macro at 0x401295
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: call_variadic_macro at 0x4012be
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x4012df
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: call_macro_override at 0x4012e8
unsigned long long call_macro_override()
{
 return 16;
}


// Function: param_include_guard at 0x4012f2
unsigned long long param_include_guard()
{
 return 500;
}


// Function: call_include_guard at 0x4012fc
unsigned long long call_include_guard()
{
 return 500;
}


// Function: param_builtin_macros at 0x401306
int param_builtin_macros(unsigned int a0)
{
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:26");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x401356
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x40136d
extern char g_40203d[];
extern char g_402058[];
extern char g_402073[];
extern char g_40208e[];
extern char g_4020aa[];
extern char g_4020c5[];
extern char g_4020e0[];
extern char g_4020fb[];
extern char g_4021f0[];
extern char g_402218[];
extern char g_402238[];
extern char g_402268[];

int test_preprocessing_features()
{
 __printf_chk(1, &g_4021f0);
 __printf_chk(1, &g_40203d, 64);
 __printf_chk(1, &g_402058, 30);
 __printf_chk(1, &g_402073, 32);
 __printf_chk(1, &g_402218, 57122);
 __printf_chk(1, &g_40208e, 116);
 __printf_chk(1, &g_402238, 19);
 __printf_chk(1, &g_4020aa, 60);
 __printf_chk(1, &g_4020c5, call_variadic_macro() & 4294967295);
 __printf_chk(1, &g_4020e0, 16);
 __printf_chk(1, &g_4020fb, 500);
 return __printf_chk(1, &g_402268, call_builtin_macros() & 4294967295);
}


// Function: param_asm_basic at 0x4014c7
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x4014d5
int call_asm_basic()
{
 return param_asm_basic(5);
}


// Function: param_asm_clobber at 0x4014e4
unsigned int param_asm_clobber(unsigned long ptr, unsigned int a1)
{
 unsigned int v1; // eax
 unsigned long long idx; // rcx

 v1 = 0;
 for (idx = 0; (unsigned int)idx < a1; idx = (unsigned int)idx + 1)
 {
 v1 += *((int *)(ptr + idx * 4));
 }
 return v1;
}


// Function: call_asm_clobber at 0x4014fc
int call_asm_clobber()
{
 char v0; // [bp-0x28]

 return param_asm_clobber(&v0, 5);
}


// Function: param_asm_multi_insn at 0x40153b
char param_asm_multi_insn(char *iter, char *cur, unsigned long long i)
{
 char v1; // al

 for (; i; i -= 1)
 {
 v1 = *(cur);
 *(iter) = *(cur);
 iter += 1;
 cur += 1;
 }
 return v1;
}


// Function: call_asm_multi_insn at 0x401556
unsigned long long call_asm_multi_insn()
{
 char v0[10]; // [bp-0x42]
 char v1; // [bp-0x38]
 char v2; // [bp-0x34]

 strncpy(v0, "Hello ASM", 9);
 memset(&v1, 0, 32);
 param_asm_multi_insn(&v1, &v0, 9);
 return (v1 == 72 ? (v2 == 111 ? 42 : 4294967295) : 4294967295);
}


// Function: param_asm_simd at 0x4015f6
double param_asm_simd(long long ptr, long long p, long long addr)
{
 int v1; // xmm0

 v1 = AddV(*((int*)ptr), *((int*)p));
 *((int*)addr) = v1;
 return (unsigned long long)v1;
}


// Function: param_simd_intrinsics at 0x40160d
double param_simd_intrinsics(long long p, long long ptr, long long addr)
{
 int v1; // xmm0

 v1 = AddV(*((int*)ptr), *((int*)p));
 *((int*)addr) = v1;
 return (unsigned long long)v1;
}


// Function: call_asm_simd at 0x401622
long long call_asm_simd()
{
 unsigned int result; // [bp-0x48]
 unsigned int v1; // [bp-0x44]
 unsigned int v2; // [bp-0x40]
 unsigned int v3; // [bp-0x3c]
 unsigned int v4; // [bp-0x38]
 unsigned int v5; // [bp-0x34]
 unsigned int v6; // [bp-0x30]
 unsigned int v7; // [bp-0x2c]
 char v8; // [bp-0x28], Other Possible Types: unsigned int
 unsigned int v9; // [bp-0x24]
 unsigned int v10; // [bp-0x20]
 char v11; // [bp-0x1c]

 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = 6;
 v6 = 7;
 v7 = 8;
 param_asm_simd(&result, &v4, &v8);
 return v9 + v8 + v10 + *((int *)&v11);
}


// Function: param_asm_atomic at 0x4016b5
int param_asm_atomic(unsigned int *a0, unsigned int a1)
{
 atomic_exchange_add(a0, a1);
 return *(a0) + a1;
}


// Function: param_atomic_c11 at 0x4016c2
int param_atomic_c11(unsigned int *a0, unsigned int a1)
{
 atomic_exchange_add(a0, a1);
 return *(a0) + a1;
}


// Function: call_asm_atomic at 0x4016cf
long long call_asm_atomic()
{
 unsigned long ptr; // fs
 unsigned int v0; // [bp-0x14]
 unsigned long v1; // [bp-0x10]

 v1 = *((long long *)(40 + ptr));
 v0 = 10;
 atomic_exchange_add(&v0, 5);
 return v0 * 2 + 5;
}


// Function: param_dynamic_code at 0x40171f
unsigned long long param_dynamic_code(unsigned int a0)
{
 unsigned long v1; // rax
 void* ptr; // rax
 unsigned int v3; // r12d

 v1 = sysconf(30);
 ptr = mmap(NULL, v1, 7, 34, -1, NULL);
 if (ptr == 0xffffffffffffffff)
 return 4294967295;
 *((unsigned int *)ptr) = 3229874313;
 *((unsigned short *)&ptr[4]) = 49925;
 v3 = ((unsigned int (*)(unsigned int))ptr)(a0);
 munmap(ptr, v1);
 return v3;
}


// Function: param_memory_protection at 0x4017bf
unsigned int param_memory_protection()
{
 unsigned long v1; // rbp
 unsigned int *p; // rax
 unsigned int *ptr; // rbx
 unsigned int v4; // r12d

 v1 = sysconf(30);
 p = mmap(NULL, v1, 3, 34, -1, NULL);
 if (p == 0xffffffffffffffff)
 return 4294967295;
 ptr = p;
 *(p) = 42;
 if (mprotect(p, v1, 1))
 {
 munmap(ptr, v1);
 return 4294967294;
 }
 v4 = *(ptr);
 if (mprotect(ptr, v1, 3))
 {
 munmap(ptr, v1);
 return 4294967293;
 }
 *(ptr) = 100;
 munmap(ptr, v1);
 return v4;
}


// Function: param_clobber_importance at 0x401878
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}


// Function: call_asm_privileged at 0x40188c
unsigned int call_asm_privileged()
{
 unsigned int v1; // ebx
 unsigned int v2; // eax
 unsigned int v3; // eax

 v1 = param_dynamic_code(10);
 v2 = param_memory_protection();
 v3 = param_clobber_importance(3, 7);
 if (!(v2 == 42 & v1 == 15))
 return v1;
 return (v3 == 20 ? 77 : v1);
}


// Function: param_memory_clobber_demo at 0x4018e1
extern unsigned int global_var;

int param_memory_clobber_demo()
{
 return 50 + global_var;
}


// Function: test_asm_features at 0x4018f7
extern char g_402117[];
extern char g_402133[];
extern char g_40214f[];
extern char g_40216b[];
extern char g_402187[];
extern char g_4021a3[];
extern char g_402298[];

int test_asm_features()
{
 __printf_chk(1, &g_402298);
 __printf_chk(1, &g_402117, call_asm_basic() & 4294967295);
 __printf_chk(1, &g_402133, call_asm_clobber() & 4294967295);
 __printf_chk(1, &g_40214f, call_asm_multi_insn() & 4294967295);
 __printf_chk(1, &g_40216b, call_asm_simd() & 4294967295);
 __printf_chk(1, &g_402187, call_asm_atomic() & 4294967295);
 return __printf_chk(1, &g_4021a3, call_asm_privileged() & 4294967295);
}


// Function: main at 0x4019e6
unsigned int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


