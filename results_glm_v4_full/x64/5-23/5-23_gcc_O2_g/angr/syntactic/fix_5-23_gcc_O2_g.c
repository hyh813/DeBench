
#include <stddef.h>
#include <string.h>

typedef void (*init_func_t)(void);
typedef void *(*init_func_ret_t)(void);
extern init_func_t g_403fe8;

/* Define missing global variable */
unsigned int global_var = 0;

/* Define AddV function */
__int128 AddV(__int128 a, __int128 b)
{
 return a + b;
}

static unsigned long long * _init()
{
 unsigned long long *v1; // rax

 v1 = (unsigned long long *)g_403fe8;
 if (g_403fe8)
 v1 = (unsigned long long *)((init_func_ret_t)g_403fe8)();
 return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_403f98;

void g_403fa0(void)
{
}

/* Forward declarations to prevent type conflicts */
unsigned long long call_macro_constants(void);
unsigned long long param_macro_functions(unsigned long a0, unsigned int a1);
unsigned long long call_macro_functions(void);
unsigned long long call_conditional_compile(void);
unsigned long long param_multi_branch_compile(unsigned int a0);
unsigned long long call_multi_branch_compile(void);
unsigned long long call_macro_recursion(void);
unsigned long long param_stringize(void);
unsigned long long call_stringize(void);
unsigned int my_func(unsigned int a0);
unsigned long long call_token_paste(void);
unsigned long long call_variadic_macro(void);
unsigned long long call_macro_override(void);
unsigned long long param_include_guard(void);
unsigned long long call_include_guard(void);
unsigned long long call_builtin_macros(void);
unsigned int param_asm_clobber(unsigned long ptr, unsigned int a1);
long long call_asm_clobber(void);
char param_asm_multi_insn(char *iter, char *cur, unsigned long long i);
unsigned long long call_asm_multi_insn(void);
double param_asm_simd(long long ptr, long long p, long long addr);
double param_simd_intrinsics(long long p, long long ptr, long long addr);
unsigned long long call_asm_simd(void);
int param_asm_atomic(unsigned int *a0, unsigned int a1);
int param_atomic_c11(unsigned int *a0, unsigned int a1);
long long call_asm_atomic(void);
unsigned long long param_dynamic_code(unsigned int a0);
unsigned int param_memory_protection(void);
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1);
unsigned int call_asm_privileged(void);
int param_memory_clobber_demo(void);
long long test_asm_features(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5);
void atomic_exchange_add(unsigned int *a0, unsigned int a1)
{
 *a0 += a1;
}

__int128 AddV(__int128 a, __int128 b);

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_403f98;
 g_403fa0();
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


// Function: main at 0x401100
unsigned int main()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi
 unsigned long long v3; // rdx
 unsigned long long v4; // rcx
 unsigned long long v5; // r8
 unsigned long long v6; // r9

 test_preprocessing_features();
 test_asm_features(v1, v2, v3, v4, v5, v6);
 return 0;
}


// Function: sub_40111d at 0x40111d
void sub_40111d(unsigned long a0, unsigned long a1, unsigned long a2)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401145 at 0x401145
void sub_401145()
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4198725 */
}










// Function: sub_401209 at 0x401209
unsigned long long param_macro_constants(unsigned int a0);

void sub_401209(unsigned long a0)
{
 param_macro_constants(0);
 return;
}


// Function: param_macro_constants at 0x401210
unsigned long long param_macro_constants(unsigned int a0)
{
 if (0x400 >= a0)
 return 0x200;
 return 64;
}


// Function: sub_401228 at 0x401228
void sub_401228()
{
 call_macro_constants();
 return;
}


// Function: call_macro_constants at 0x401230
unsigned long long call_macro_constants()
{
 return 64;
}


// Function: sub_40123a at 0x40123a
void sub_40123a(unsigned long a0, unsigned long a1)
{
 param_macro_functions(0, 0);
 return;
}


// Function: param_macro_functions at 0x401240
unsigned long long param_macro_functions(unsigned long a0, unsigned int a1)
{
 return a0 * (a0 & 4294967295) + ((unsigned int)a0 < a1 ? a1 : a0 & 4294967295);
}


// Function: sub_401251 at 0x401251
void sub_401251()
{
 call_macro_functions();
 return;
}


// Function: call_macro_functions at 0x401260
unsigned long long call_macro_functions()
{
 return 30;
}


// Function: sub_40126a at 0x40126a
void sub_40126a(unsigned long a0)
{
 param_conditional_compile();
 return;
}


// Function: param_conditional_compile at 0x401270
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: sub_401279 at 0x401279
void sub_401279()
{
 call_conditional_compile();
 return;
}


// Function: call_conditional_compile at 0x401280
unsigned long long call_conditional_compile()
{
 return 32;
}


// Function: sub_40128a at 0x40128a
void sub_40128a(unsigned long a0)
{
 param_multi_branch_compile(0);
 return;
}


// Function: param_multi_branch_compile at 0x401290
unsigned long long param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: sub_40129c at 0x40129c
void sub_40129c()
{
 call_multi_branch_compile();
 return;
}


// Function: call_multi_branch_compile at 0x4012a0
unsigned long long call_multi_branch_compile()
{
 return 57122;
}


// Function: sub_4012aa at 0x4012aa
void sub_4012aa(unsigned long a0)
{
 param_macro_recursion();
 return;
}


// Function: param_macro_recursion at 0x4012b0
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: sub_4012b8 at 0x4012b8
void sub_4012b8()
{
 call_macro_recursion();
 return;
}


// Function: call_macro_recursion at 0x4012c0
unsigned long long call_macro_recursion()
{
 return 116;
}


// Function: sub_4012ca at 0x4012ca
void sub_4012ca()
{
 param_stringize();
 return;
}


// Function: param_stringize at 0x4012d0
unsigned long long param_stringize()
{
 return 19;
}


// Function: sub_4012da at 0x4012da
void sub_4012da()
{
 call_stringize();
 return;
}


// Function: call_stringize at 0x4012e0
unsigned long long call_stringize()
{
 return 19;
}


// Function: sub_4012ea at 0x4012ea
void sub_4012ea(unsigned long a0)
{
 my_func(0);
 return;
}


// Function: my_func at 0x4012f0
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_4012fa at 0x4012fa
void sub_4012fa(unsigned long a0)
{
 param_token_paste();
 return;
}


// Function: param_token_paste at 0x401300
int param_token_paste(unsigned int a0)
{
 return a0 * 11 + 5;
}


// Function: sub_40130c at 0x40130c
void sub_40130c()
{
 call_token_paste();
 return;
}


// Function: call_token_paste at 0x401310
unsigned long long call_token_paste()
{
 return 60;
}


// Function: sub_40131a at 0x40131a
void sub_40131a(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_variadic_macro();
 return;
}


// Function: param_variadic_macro at 0x401320
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: sub_401346 at 0x401346
void sub_401346()
{
 call_variadic_macro();
 return;
}


// Function: call_variadic_macro at 0x401350
unsigned long long call_variadic_macro()
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


// Function: sub_401385 at 0x401385
void sub_401385(unsigned long a0)
{
 param_macro_override();
 return;
}


// Function: param_macro_override at 0x401390
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: sub_401399 at 0x401399
void sub_401399()
{
 call_macro_override();
 return;
}


// Function: call_macro_override at 0x4013a0
unsigned long long call_macro_override()
{
 return 16;
}


// Function: sub_4013aa at 0x4013aa
void sub_4013aa()
{
 param_include_guard();
 return;
}


// Function: param_include_guard at 0x4013b0
unsigned long long param_include_guard()
{
 return 500;
}


// Function: sub_4013ba at 0x4013ba
void sub_4013ba()
{
 call_include_guard();
 return;
}


// Function: call_include_guard at 0x4013c0
unsigned long long call_include_guard()
{
 return 500;
}


// Function: sub_4013ca at 0x4013ca
void sub_4013ca(unsigned long a0)
{
 param_builtin_macros();
 return;
}


// Function: param_builtin_macros at 0x4013d0
int param_builtin_macros(unsigned int a0)
{
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:30");
 return a0 + 282;
}


// Function: sub_40141b at 0x40141b
void sub_40141b()
{
 call_builtin_macros();
 return;
}


// Function: call_builtin_macros at 0x401420
unsigned long long call_builtin_macros()
{
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:30");
 return 382;
}


// Function: sub_401468 at 0x401468
void sub_401468()
{
 test_preprocessing_features();
 return;
}


// Function: test_preprocessing_features at 0x401470

/* Define string constants */
char g_40203d[] = "call_macro_constants: %lld\n";
char g_402058[] = "call_macro_functions: %lld\n";
char g_402073[] = "call_conditional_compile: %lld\n";
char g_40208e[] = "call_macro_recursion: %lld\n";
char g_4020aa[] = "call_token_paste: %lld\n";
char g_4020c5[] = "call_variadic_macro: %lld\n";
char g_4020e0[] = "call_macro_override: %lld\n";
char g_4020fb[] = "call_include_guard: %lld\n";
char g_4021f0[] = "Testing preprocessing features:\n";
char g_402218[] = "call_multi_branch_compile: %lld\n";
char g_402238[] = "call_stringize: %lld\n";
char g_402268[] = "call_builtin_macros: %lld\n";

/* Define asm test string constants */
char g_402117[] = "call_asm_basic: %lld\n";
char g_402133[] = "call_asm_clobber: %lld\n";
char g_40214f[] = "call_asm_multi_insn: %lld\n";
char g_40216b[] = "call_asm_simd: %lld\n";
char g_402187[] = "call_asm_atomic: %lld\n";
char g_4021a3[] = "call_asm_privileged: %lld\n";
char g_402298[] = "Testing asm features:\n";

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
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 __printf_chk(1, &g_4020c5, 60);
 __printf_chk(1, &g_4020e0, 16);
 __printf_chk(1, &g_4020fb, 500);
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:30");
 return __printf_chk(1, &g_402268, 382);
}


// Function: sub_4015f4 at 0x4015f4
void sub_4015f4(unsigned long a0)
{
 param_asm_basic();
 return;
}


// Function: param_asm_basic at 0x401600
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x401610
unsigned long long call_asm_basic()
{
 return 15;
}


// Function: sub_401627 at 0x401627
void sub_401627()
{
 unsigned int arr[5] = {1, 2, 3, 4, 5};
 param_asm_clobber((unsigned long)arr, 5);
 return;
}


// Function: param_asm_clobber at 0x401630
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


// Function: sub_40164a at 0x40164a
void sub_40164a()
{
 call_asm_clobber();
 return;
}


// Function: call_asm_clobber at 0x401650
long long call_asm_clobber()
{
 unsigned int v2; // eax
 unsigned long long idx; // rcx
 char v0; // [bp-0x28]

 v2 = 0;
 for (idx = 0; (unsigned int)idx < 5; idx = (unsigned int)idx + 1)
 {
 v2 += *((int *)&(&v0)[4 * idx]);
 }
 return v2;
}


// Function: sub_40169f at 0x40169f
void sub_40169f()
{
 char dest[16];
 char src[16] = "Hello World!";
 param_asm_multi_insn(dest, src, 12);
 return;
}


// Function: param_asm_multi_insn at 0x4016a0
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


// Function: sub_4016bb at 0x4016bb
void sub_4016bb()
{
 call_asm_multi_insn();
 return;
}


// Function: call_asm_multi_insn at 0x4016c0
unsigned long long call_asm_multi_insn()
{
 unsigned long long i; // rsi
 char *cur; // rdx
 char *v6; // rcx
 char v0; // [bp-0x42]
 char v1[4]; // [bp-0x38]
 char v2; // [bp-0x34]

 i = 9;
 cur = &v1;
 strncpy(v1, "Hello ASM", 9);
 for (v6 = &v0; i; i -= 1)
 {
 *(cur) = *(v6);
 cur += 1;
 v6 += 1;
 }
 return (v1 == 72 ? (v2 == 111 ? 42 : 4294967295) : 4294967295);
}


// Function: sub_40175c at 0x40175c
void sub_40175c(unsigned long a0, unsigned long a1, unsigned long a2)
{
 __int128 data1 = 1;
 __int128 data2 = 2;
 __int128 result;
 param_asm_simd((long long)&data1, (long long)&data2, (long long)&result);
 return;
}


extern __int128 AddV(__int128 a, __int128 b);

// Function: param_asm_simd at 0x401760
double param_asm_simd(long long ptr, long long p, long long addr)
{
 __int128 v1; // xmm0

 v1 = AddV(*(__int128 *)ptr, *(__int128 *)p);
 *(__int128 *)addr = v1;
 return (unsigned long long)v1;
}


// Function: sub_401774 at 0x401774
void sub_401774(unsigned long a0, unsigned long a1, unsigned long a2)
{
 __int128 data1 = 1;
 __int128 data2 = 2;
 __int128 result;
 param_simd_intrinsics((long long)&data1, (long long)&data2, (long long)&result);
 return;
}


// Function: param_simd_intrinsics at 0x401780
double param_simd_intrinsics(long long p, long long ptr, long long addr)
{
 __int128 v1; // xmm0

 v1 = AddV(*(__int128 *)ptr, *(__int128 *)p);
 *(__int128 *)addr = v1;
 return (unsigned long long)v1;
}


// Function: sub_401792 at 0x401792
void sub_401792()
{
 call_asm_simd();
 return;
}


// Function: call_asm_simd at 0x4017a0
unsigned long long call_asm_simd()
{
 unsigned long ptr; // fs
 unsigned long v0; // [bp-0x48]
 unsigned long long v1; // [bp-0x40]
 unsigned long long v2; // [bp-0x38]
 unsigned long long v3; // [bp-0x30]
 int v4; // [bp-0x28]
 unsigned long v5; // [bp-0x10]

 v5 = *((long long *)(40 + ptr));
 v0 = 8589934593;
 v1 = 17179869187;
 v2 = 25769803781;
 v3 = 34359738375;
 *((__int128 *)&v4) = AddV(*((__int128 *)&v0), *((__int128 *)&v2));
 return (int)(&v4)[4] + (int)v4 + (int)(&v4)[8] + (int)(&v4)[12];
}


// Function: sub_401835 at 0x401835
void sub_401835(unsigned long a0, unsigned long a1)
{
 unsigned int v = 0;
 param_asm_atomic(&v, 0);
 return;
}


// Function: param_asm_atomic at 0x401840
int param_asm_atomic(unsigned int *a0, unsigned int a1)
{
 atomic_exchange_add(a0, a1);
 return *(a0) + a1;
}


// Function: sub_40184d at 0x40184d
void sub_40184d(unsigned long a0, unsigned long a1)
{
 unsigned int v = 0;
 param_atomic_c11(&v, 0);
 return;
}


// Function: param_atomic_c11 at 0x401850
int param_atomic_c11(unsigned int *a0, unsigned int a1)
{
 atomic_exchange_add(a0, a1);
 return *(a0) + a1;
}


// Function: sub_40185d at 0x40185d
void sub_40185d()
{
 call_asm_atomic();
 return;
}


// Function: call_asm_atomic at 0x401860
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


// Function: param_dynamic_code at 0x4018b0
unsigned long long param_dynamic_code(unsigned int a0)
{
 unsigned long v1; // rax
 void* p; // rax
 void* ptr; // rbp
 unsigned int v4; // r13d

 v1 = sysconf(30);
 p = mmap(NULL, v1, 7, 34, -1, NULL);
 if (p == 0xffffffffffffffff)
 return 4294967295;
 ptr = p;
 *((unsigned int *)p) = 3229874313;
 *((unsigned short *)&ptr[4]) = 49925;
 v4 = ((unsigned int (*)(unsigned int))ptr)(a0);
 munmap(ptr, v1);
 return v4;
}


// Function: sub_40194f at 0x40194f
void sub_40194f()
{
 param_memory_protection();
 return;
}


// Function: param_memory_protection at 0x401950
unsigned int param_memory_protection()
{
 unsigned long v1; // r12
 unsigned int *p; // rax
 unsigned int *ptr; // rbp
 unsigned int v4; // r13d

 v1 = sysconf(30);
 p = mmap(NULL, v1, 3, 34, -1, NULL);
 if (p == 0xffffffffffffffff)
 return 4294967295;
 *(p) = 42;
 ptr = p;
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


// Function: sub_4019dd at 0x4019dd
void sub_4019dd()
{
}


// Function: sub_4019f3 at 0x4019f3
void sub_4019f3()
{
}


// Function: sub_401a13 at 0x401a13
void sub_401a13(unsigned long a0, unsigned long a1)
{
 param_clobber_importance(0, 0);
 return;
}


// Function: param_clobber_importance at 0x401a20
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}


// Function: sub_401a34 at 0x401a34
void sub_401a34()
{
 call_asm_privileged();
 return;
}


// Function: call_asm_privileged at 0x401a40
unsigned int call_asm_privileged()
{
 unsigned int v1; // r12d
 unsigned int v2; // eax

 v1 = param_dynamic_code(10);
 v2 = param_memory_protection();
 if (v1 != 15)
 {
 return v1;
 }
 else if (v2 == 42)
 {
 return (1 ? 77 : v1);
 }
 else
 {
 return v1;
 }
}


// Function: sub_401a94 at 0x401a94
void sub_401a94()
{
 param_memory_clobber_demo();
 return;
}


// Function: param_memory_clobber_demo at 0x401aa0
extern unsigned int global_var;

int param_memory_clobber_demo()
{
 return 50 + global_var;
}


// Function: sub_401aba at 0x401aba
void sub_401aba()
{
 test_asm_features(0, 0, 0, 0, 0, 0);
 return;
}


// Function: test_asm_features at 0x401ac0
extern char g_402117[];
extern char g_402133[];
extern char g_40214f[];
extern char g_40216b[];
extern char g_402187[];
extern char g_4021a3[];
extern char g_402298[];

long long test_asm_features(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
 unsigned int v2; // eax
 unsigned long long idx; // rcx
 unsigned int v0; // [bp-0x2c]
 unsigned long v6; // [bp-0x28]

 __printf_chk(1, &g_402298);
 __printf_chk(1, &g_402117, 15);
 v2 = 0;
 for (idx = 0; (unsigned int)idx < 5; idx = (unsigned int)idx + 1)
 {
 v2 += *((int *)((char *)&v6 + 4 * idx));
 }
 __printf_chk(1, &g_402133, v2);
 __printf_chk(1, &g_40214f, call_asm_multi_insn() & 4294967295);
 __printf_chk(1, &g_40216b, call_asm_simd() & 4294967295);
 v0 = 10;
 atomic_exchange_add(&v0, 5);
 __printf_chk(1, &g_402187, v0 * 2 + 5);
 return __printf_chk(1, &g_4021a3, call_asm_privileged() & 4294967295);
}



/* CRT stub function _fini removed by preprocessor */


