// Angr Decompilation of 5-23_clang_Os_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */



// Function: sub_4004ec at 0x4004ec
extern unsigned int g_412008;

/* String constants */
char g_401062[] = "param_include_guard: %d\n";
char g_4010df[] = "param_asm_multi_insn: %d\n";
char g_401133[] = "call_asm_privileged: %d\n";
char g_401176[] = "Testing assembly features:";
char g_400fac[] = "call_multi_branch_compile: %d\n";
char g_400fe7[] = "call_stringize: %d\n";
char g_40102c[] = "call_variadic_macro: %d\n";
char g_40107e[] = "call_builtin_macros: %d\n";
char g_4010c3[] = "call_asm_clobber: %d\n";
char g_400f5b[] = "call_macro_constants: %d\n";
char g_4010a7[] = "call_asm_basic: %d\n";
char g_401011[] = "call_token_paste: %d\n";
char g_4010fb[] = "call_asm_simd: %d\n";
char g_400f76[] = "call_macro_functions: %d\n";
char g_400f91[] = "call_conditional_compile: %d\n";
char g_400fcb[] = "call_macro_recursion: %d\n";
char g_401047[] = "call_macro_override: %d\n";
char g_401117[] = "call_asm_atomic: %d\n";
char g_40114f[] = "Testing preprocessing features:";

/* Global variables */
unsigned int global_var = 0;

/* Decompiler helper function for ARM condition code evaluation */
int armg_calculate_condition(int cond, int result, int unused1, int unused2)
{
 return result;
}

int sub_4004ec()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4005c8 at 0x4005c8
void sub_4005c8()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_macro_constants at 0x4006f8
unsigned int param_macro_constants(unsigned int a0)
{
 return (0x400 < a0 ? 64 : 0x200);
}


// Function: call_macro_constants at 0x40070c
unsigned int call_macro_constants()
{
 return 64;
}


// Function: param_macro_functions at 0x400714
int param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r1

 if (a1 < a0)
 v0 = a0;
 else
 v0 = a1;
 return v0 + a0 * a0;
}


// Function: call_macro_functions at 0x400728
unsigned int call_macro_functions()
{
 return 30;
}


// Function: param_conditional_compile at 0x400730
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x40073c
unsigned int call_conditional_compile()
{
 return 32;
}


// Function: param_multi_branch_compile at 0x400744
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x400754
unsigned int call_multi_branch_compile()
{
 return 57122;
}


// Function: param_macro_recursion at 0x400760
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x400768
unsigned int call_macro_recursion()
{
 return 116;
}


// Function: param_stringize at 0x400770
unsigned int param_stringize()
{
 return 19;
}


// Function: call_stringize at 0x400778
unsigned int call_stringize()
{
 return 19;
}


// Function: my_func at 0x400780
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: param_token_paste at 0x40078c
int param_token_paste(unsigned int a0)
{
 return a0 * 11 + 5;
}


// Function: call_token_paste at 0x40079c
unsigned int call_token_paste()
{
 return 60;
}


// Function: param_variadic_macro at 0x4007a4
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: call_variadic_macro at 0x4007d4
unsigned int call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


// Function: param_macro_override at 0x400800
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: call_macro_override at 0x40080c
unsigned int call_macro_override()
{
 return 16;
}


// Function: param_include_guard at 0x400814
unsigned int param_include_guard()
{
 return 500;
}


// Function: call_include_guard at 0x40081c
unsigned int call_include_guard()
{
 return 500;
}


// Function: param_builtin_macros at 0x400824
int param_builtin_macros(unsigned int a0)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:23");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x400894
unsigned int call_builtin_macros()
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:23");
 return 382;
}


// Function: test_preprocessing_features at 0x400900

int test_preprocessing_features()
{
 unsigned int v0; // r0

 puts(&g_40114f);
 printf(&g_400f5b, 64);
 printf(&g_400f76, 30);
 printf(&g_400f91, 32);
 printf(&g_400fac, 57122);
 printf(&g_400fcb, 116);
 printf(&g_400fe7, 19);
 printf(&g_401011, 60);
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 printf(&g_40102c, 60);
 printf(&g_401047, 16);
 printf(&g_401062, 500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:23");
 v0 = printf(&g_40107e, 382);
 return printf(&g_40107e, 382);
}


// Function: param_asm_basic at 0x400a70
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x400a78
unsigned int call_asm_basic()
{
 return 15;
}


// Function: param_asm_clobber at 0x400a80
unsigned int param_asm_clobber(unsigned int *a0, unsigned int i)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int *ptr; // r2
 unsigned int *v3; // r2
 unsigned int v4; // r1
 unsigned int v5; // r0

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v1 = v0;
 v3 = a0 + 1;
 v4 = i - 1;
 v5 = *(a0) + v1;
 a0 = v3;
 v0 = v5;
 i = v4;
 } while (i != 1);
 return *(ptr) + v1;
}


// Function: call_asm_clobber at 0x400aac
unsigned int call_asm_clobber()
{
 return 15;
}


// Function: param_asm_multi_insn at 0x400ab4
int param_asm_multi_insn()
{
 void* v0; // r0
 void* v1; // r1
 unsigned int v2; // r2
 unsigned int dst; // r0

 dst = memcpy(v0, v1, v2);
 return memcpy(v0, v1, v2);
}


// Function: call_asm_multi_insn at 0x400ab8
unsigned int call_asm_multi_insn()
{
 return 42;
}


// Function: param_asm_simd at 0x400ac0
unsigned int param_asm_simd(unsigned int a0, unsigned int a1, unsigned int ptr)
{
 unsigned int vvar_4;
 unsigned int vvar_15;
 unsigned int vvar_19;
 
 vvar_15 = 0;
 vvar_4 = 0;
 do
 {
 *((int *)(ptr + vvar_4 * 4)) = *((int *)(a1 + vvar_4 * 4)) + *((int *)(a0 + vvar_4 * 4));
 vvar_19 = vvar_4 + 1;
 vvar_4 = vvar_19;
 } while (vvar_4 != 4);
 return 0;
}


// Function: param_simd_intrinsics at 0x400af0
unsigned int param_simd_intrinsics(unsigned int a0, unsigned int a1, unsigned int ptr)
{
 unsigned int vvar_4;
 unsigned int vvar_15;
 unsigned int vvar_19;
 
 vvar_15 = 0;
 vvar_4 = 0;
 do
 {
 *((int *)(ptr + vvar_4 * 4)) = *((int *)(a1 + vvar_4 * 4)) + *((int *)(a0 + vvar_4 * 4));
 vvar_19 = vvar_4 + 1;
 vvar_4 = vvar_19;
 } while (vvar_4 != 4);
 return 0;
}


// Function: call_asm_simd at 0x400b20
extern unsigned int g_4011a0[4];
extern unsigned int g_4011b0[4];

int call_asm_simd()
{
 unsigned int idx; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 idx = 0;
 do
 {
 (&v0)[idx] = g_4011b0[idx] + g_4011a0[idx];
 idx += 1;
 } while (idx != 4);
 return v1 + v0 + v2 + v3;
}


// Function: param_asm_atomic at 0x400b80
int param_asm_atomic(unsigned int a0, unsigned int a1)
{
 return __atomic_fetch_add_4() + a1;
}


// Function: param_atomic_c11 at 0x400b9c
int param_atomic_c11(unsigned int a0, unsigned int a1)
{
 return __atomic_fetch_add_4() + a1;
}


// Function: call_asm_atomic at 0x400bb8
int call_asm_atomic()
{
 unsigned int v0; // [bp-0xc]

 v0 = 10;
 return __atomic_fetch_add_4(&v0, 5, 5) + v0 + 5;
}


// Function: param_dynamic_code at 0x400bf0
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // r5
 void* ptr; // r0

 v0 = sysconf(30);
 ptr = mmap((void*)0, v0, 7, 34, -1, 0);
 if (ptr == (void*)0xffffffff)
 return 4294967295;
 munmap(ptr, v0);
 return a0 + 5;
}


// Function: param_memory_protection at 0x400c50
unsigned int param_memory_protection()
{
 unsigned int v0; // r4
 unsigned int *ptr; // r0
 unsigned int *ptr2; // r5
 unsigned int v3; // r6
 unsigned int result; // r0
 unsigned int v5; // r0

 v0 = sysconf(30);
 ptr = (unsigned int *)mmap((void*)0, v0, 3, 34, -1, 0);
 if (ptr == (unsigned int *)0xffffffff)
 return 4294967295;
 ptr2 = ptr;
 *(ptr) = 42;
 v3 = 4294967294;
 if (!mprotect(ptr, v0, 1))
 {
 result = mprotect(ptr, v0, 3);
 if (!result)
 {
 v5 = 100;
 if (!armg_calculate_condition(2, result, 0, 0))
 goto LABEL_400cda;
LABEL_400cd9:
 v3 = *(ptr);
 *(ptr) = v5;
 }
 else
 {
 v5 = result;
 if (armg_calculate_condition(2, result, 0, 0))
 goto LABEL_400cd9;
LABEL_400cda:
 v3 = 4294967293;
 *(ptr) = v5;
 }
 }
 munmap(ptr, v0);
 return v3;
}


// Function: param_clobber_importance at 0x400cfc
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a1 + a0) * 2;
}


// Function: call_asm_privileged at 0x400d08
unsigned int call_asm_privileged()
{
 unsigned int v3; // lr
 unsigned int v4; // r5
 unsigned int v5; // r4
 unsigned int v6; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = v4;
 v0 = v5;
 v6 = param_dynamic_code(10);
 if ((v6 ^ 15) || (param_memory_protection() ^ 42))
 return v6;
 return 77;
}


// Function: param_memory_clobber_demo at 0x400d38
extern unsigned int global_var;

int param_memory_clobber_demo()
{
 return global_var + 50;
}


// Function: test_asm_features at 0x400d4c
extern char g_4010a7[];
extern char g_4010fb[];
extern char g_401117[];

int test_asm_features()
{
 unsigned int v3; // r0
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x14]

 puts(&g_401176);
 printf(&g_4010a7, 15);
 printf(&g_4010c3, 15);
 printf(&g_4010df, 42);
 printf(&g_4010fb, call_asm_simd());
 v0 = 10;
 printf(&g_401117, __atomic_fetch_add_4(&v0, 5, 5) + v0 + 5);
 v3 = param_dynamic_code(10);
 if (!(v3 ^ 15) && !(param_memory_protection() ^ 42))
 v3 = 77;
 v4 = printf(&g_401133, v3);
 return printf(&g_401133, v3);
}


// Function: main at 0x400e2c
int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


