// Angr Decompilation of 5-23_gcc_O3_no_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */
#define NULL ((void *)0)

extern unsigned long long *(*g_403fe8)(void);

/* Global string constants */
char g_4020c5[] = "%d\n";
char g_4020e0[] = "%d\n";
char g_402187[] = "%d\n";
char g_402218[] = "%d\n";
char g_402058[] = "%d\n";
char g_4020fb[] = "%d\n";
char g_4020aa[] = "%d\n";
char g_402117[] = "%d\n";
char g_40216b[] = "%d\n";
char g_40214f[] = "%d\n";
char g_402268[] = "%d\n";
char g_402298[] = "ASM Test Results:\n";
char g_40203d[] = "%d\n";
char g_4021f0[] = "Preprocessing Test Results:\n";
char g_402133[] = "%d\n";
char g_4021a3[] = "%d\n";
char g_402073[] = "%d\n";
char g_40208e[] = "%d\n";
char g_402238[] = "%d\n";
unsigned int global_var = 0;

/* Forward declarations */
int AddV(int a, int b);
unsigned int atomic_exchange_add(unsigned int *a0, unsigned int a1);

/* Function definitions */
int AddV(int a, int b)
{
 return a + b;
}

unsigned int atomic_exchange_add(unsigned int *a0, unsigned int a1)
{
 return __sync_fetch_and_add(a0, a1);
}

unsigned long long param_macro_constants(unsigned int a0);
unsigned long long call_macro_constants(void);
unsigned long long param_macro_functions(unsigned int a0, unsigned int a1);
unsigned long long call_macro_functions(void);
unsigned long long call_conditional_compile(void);
int param_multi_branch_compile(unsigned int a0);
unsigned long long call_multi_branch_compile(void);
int param_macro_recursion(unsigned int a0);
unsigned long long call_macro_recursion(void);
unsigned long long param_stringize(void);
unsigned long long call_stringize(void);
unsigned int my_func(unsigned int a0);
unsigned long long call_token_paste(void);
unsigned long long call_variadic_macro(void);
int param_conditional_compile(unsigned int a0);
int param_macro_override(unsigned int a0);
unsigned long long call_macro_override(void);
unsigned long long param_include_guard(void);
unsigned long long call_include_guard(void);
int param_builtin_macros(unsigned int a0);
unsigned long long call_builtin_macros(void);
int param_token_paste(unsigned int a0);
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2);
int param_asm_basic(unsigned int a0);
unsigned long long call_asm_basic(void);
unsigned int param_asm_clobber(unsigned long ptr, unsigned int a1);
long long call_asm_clobber(void);
char param_asm_multi_insn(char *iter, char *cur, unsigned long long i);
unsigned long long call_asm_multi_insn(void);
double param_asm_simd(long long ptr, long long p, long long addr);
double param_simd_intrinsics(long long p, long long ptr, long long addr);
long long call_asm_simd(void);
int param_asm_atomic(unsigned int *a0, unsigned int a1);
int param_atomic_c11(unsigned int *a0, unsigned int a1);
long long call_asm_atomic(void);
unsigned long long param_dynamic_code(unsigned int a0);
unsigned int param_memory_protection(void);
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1);
long long call_asm_privileged(void);
int param_memory_clobber_demo(void);
long long test_asm_features(void);




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
 test_asm_features();
 return 0;
}


// Function: sub_401209 at 0x401209
void sub_401209(unsigned long a0)
{
 param_macro_constants(a0);
 return;
}


// Function: param_macro_constants at 0x401210
unsigned long long param_macro_constants(unsigned int a0)
{
 if (0x400 >= a0)
 return 0x200;
 return 64;
}





// Function: call_macro_constants at 0x401230
unsigned long long call_macro_constants()
{
 return 64;
}





// Function: param_macro_functions at 0x401240
unsigned long long param_macro_functions(unsigned int a0, unsigned int a1)
{
 return a0 * (a0 & 4294967295) + ((unsigned int)a0 < a1 ? a1 : a0 & 4294967295);
}





// Function: call_macro_functions at 0x401260
unsigned long long call_macro_functions()
{
 return 30;
}





// Function: param_conditional_compile at 0x401270
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}





// Function: call_conditional_compile at 0x401280
unsigned long long call_conditional_compile()
{
 return 32;
}





// Function: param_multi_branch_compile at 0x401290
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}





// Function: call_multi_branch_compile at 0x4012a0
unsigned long long call_multi_branch_compile()
{
 return 57122;
}





// Function: param_macro_recursion at 0x4012b0
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}





// Function: call_macro_recursion at 0x4012c0
unsigned long long call_macro_recursion()
{
 return 116;
}





// Function: param_stringize at 0x4012d0
unsigned long long param_stringize()
{
 return 19;
}





// Function: call_stringize at 0x4012e0
unsigned long long call_stringize()
{
 return 19;
}





// Function: my_func at 0x4012f0
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}





// Function: param_token_paste at 0x401300
int param_token_paste(unsigned int a0)
{
 return a0 * 11 + 5;
}





// Function: call_token_paste at 0x401310
unsigned long long call_token_paste()
{
 return 60;
}





// Function: param_variadic_macro at 0x401320
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}





// Function: call_variadic_macro at 0x401350
unsigned long long call_variadic_macro()
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}





// Function: param_macro_override at 0x401390
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}





// Function: call_macro_override at 0x4013a0
unsigned long long call_macro_override()
{
 return 16;
}





// Function: param_include_guard at 0x4013b0
unsigned long long param_include_guard()
{
 return 500;
}





// Function: call_include_guard at 0x4013c0
unsigned long long call_include_guard()
{
 return 500;
}





// Function: param_builtin_macros at 0x4013d0
int param_builtin_macros(unsigned int a0)
{
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:37");
 return a0 + 282;
}





// Function: call_builtin_macros at 0x401420
unsigned long long call_builtin_macros()
{
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:37");
 return 382;
}





// Function: test_preprocessing_features at 0x401470
extern char g_40203d[];
extern char g_402073[];
extern char g_40208e[];
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
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 __printf_chk(1, &g_4020c5, 60);
 __printf_chk(1, &g_4020e0, 16);
 __printf_chk(1, g_4020fb, 500);
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:37");
 return __printf_chk(1, &g_402268, 382);
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





// Function: param_asm_simd at 0x401760
double param_asm_simd(long long ptr, long long p, long long addr)
{
 int v1; // xmm0

 v1 = AddV(*(int*)ptr, *(int*)p);
 *((int*)addr) = v1;
 return (unsigned long long)v1;
}





// Function: param_simd_intrinsics at 0x401780
double param_simd_intrinsics(long long p, long long ptr, long long addr)
{
 int v1; // xmm0

 v1 = AddV(*(int*)ptr, *(int*)p);
 *((int*)addr) = v1;
 return (unsigned long long)v1;
}





// Function: call_asm_simd at 0x4017a0
long long call_asm_simd()
{
 unsigned long ptr; // fs
 unsigned long long v0; // [bp-0x48]
 unsigned long long v1; // [bp-0x38]
 int v2; // [bp-0x28]
 unsigned long v3; // [bp-0x10]

 v3 = *((long long *)(40 + ptr));
 v0 = 316912650112397582603894390785;
 v1 = 633825300243241909290088267781;
 *((unsigned long long *)&v2) = AddV(v0, v1);
 return (int)(&v2)[4] + (int)v2 + (int)(&v2)[8] + (int)(&v2)[12];
}





// Function: param_asm_atomic at 0x401820
int param_asm_atomic(unsigned int *a0, unsigned int a1)
{
 atomic_exchange_add(a0, a1);
 return *(a0) + a1;
}





// Function: param_atomic_c11 at 0x401830
int param_atomic_c11(unsigned int *a0, unsigned int a1)
{
 atomic_exchange_add(a0, a1);
 return *(a0) + a1;
}





// Function: call_asm_atomic at 0x401840
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


// Function: param_dynamic_code at 0x401890
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





// Function: param_memory_protection at 0x401930
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


// Function: sub_4019f3 at 0x4019f3
void sub_4019f3(unsigned long a0, unsigned long a1)
{
 param_clobber_importance(a0, a1);
 return;
}


// Function: param_clobber_importance at 0x401a00
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}





// Function: call_asm_privileged at 0x401a20
long long call_asm_privileged()
{
 unsigned long v1; // rax
 void* p; // rax
 void* ptr; // rbp
 unsigned int v4; // r12d
 char result; // bpl

 v1 = sysconf(30);
 p = mmap(NULL, v1, 7, 34, -1, NULL);
 if (p != 0xffffffffffffffff)
 {
 ptr = p;
 *((unsigned int *)p) = 3229874313;
 *((unsigned short *)&ptr[4]) = 49925;
 v4 = ((unsigned int (*)(unsigned int))ptr)(10);
 munmap(ptr, v1);
 result = v4 == 15;
 }
 else
 {
 result = 0;
 v4 = 4294967295;
 }
 if (param_memory_protection() != 42)
 {
 return v4;
 }
 else if (result)
 {
 return (1 ? 77 : 15);
 }
 else
 {
 return v4;
 }
}





// Function: param_memory_clobber_demo at 0x401b10
extern unsigned int global_var;

int param_memory_clobber_demo()
{
 return 50 + global_var;
}





// Function: test_asm_features at 0x401b30
extern char g_402133[];
extern char g_40214f[];
extern char g_40216b[];
extern char g_402187[];
extern char g_4021a3[];
extern char g_402298[];

long long test_asm_features()
{
 unsigned int v11; // eax
 unsigned long long idx; // rcx
 char *cur; // rdx
 char *v14; // rcx
 unsigned long long j; // rsi
 unsigned long long v16; // rdx
 unsigned int v0; // [bp-0x8c]
 unsigned long long v1; // [bp-0x88]
 unsigned long long v2; // [bp-0x78]
 int v3[5]; // [bp-0x68]
 char v4[8]; // [bp-0x52]
 unsigned short v5; // [bp-0x4a]
 char v6; // [bp-0x48]
 unsigned long long result; // [bp-0x48]
 char v8; // [bp-0x44]
 unsigned long long flag1; // [bp-0x38]

 __printf_chk(1, &g_402298);
 __printf_chk(1, &g_402117, 15);
 v11 = 0;
 for (idx = 0; (unsigned int)idx < 5; idx = (unsigned int)idx + 1)
 {
 v11 += v3[idx];
 }
 __printf_chk(1, &g_402133, v11);
 cur = &v6;
 strncpy(v4, "Hello AS", 8);
 v14 = &v4;
 j = 9;
 v5 = 77;
 result = 0;
 for (flag1 = 0; j; j -= 1)
 {
 *(cur) = *(v14);
 cur += 1;
 v14 += 1;
 }
 v16 = (v6 == 72 ? (v8 == 111 ? 42 : 4294967295) : 4294967295);
 __printf_chk(1, &g_40214f, (v6 == 72 ? (v8 == 111 ? 42 : 4294967295) : 4294967295));
 v1 = 316912650112397582603894390785;
 v2 = 633825300243241909290088267781;
 *((unsigned long long *)&v3) = AddV(v1, v2);
 __printf_chk(1, &g_40216b, (int)(&v3)[4] + (int)v3 + (int)(&v3)[8] + (int)(&v3)[12]);
 v0 = 10;
 atomic_exchange_add(&v0, 5);
 __printf_chk(1, &g_402187, v0 * 2 + 5);
 return __printf_chk(1, &g_4021a3, call_asm_privileged() & 4294967295);
}





