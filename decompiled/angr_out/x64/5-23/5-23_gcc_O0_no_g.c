// Angr Decompilation of 5-23_gcc_O0_no_g
// Platform: AMD64

// Function: _init at 0x401000
typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_403fe8;

unsigned long long * _init()
{
    unsigned long long *v1;  // rax

    v1 = g_403fe8;
    if (g_403fe8)
        v1 = g_403fe8();
    return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_403f88;
extern unsigned long long g_403f90;

void sub_401020()
{
    unsigned long v0;  // [bp-0x8]

    v0 = g_403f88;
    goto g_403f90;
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
    unsigned long long result;  // [bp-0x8]

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
    unsigned long long result;  // [bp-0x8]

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
    unsigned long long v0;  // [bp-0x8]

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
    unsigned long long v0;  // [bp-0x8]

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
    unsigned long long v0;  // [bp-0x8]

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
    unsigned long long v0;  // [bp-0x8]

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
    unsigned long long v0;  // [bp-0x8]

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
    unsigned long long v0;  // [bp-0x8]

    v0 = 7;
    sub_401020();
    return;
}


// Function: sub_4010af at 0x4010af
void sub_4010af()
{
    __cxa_finalize();
    return;
}


// Function: _start at 0x401140
void _start(unsigned long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long v3;  // rax
    unsigned long long v1;  // [bp+0x0]
    unsigned long v2;  // [bp+0x8]

    v1 = v3;
    __libc_start_main(main, v1, &v2, 0, 0, a2, &v1, v1); /* do not return */
}


// Function: sub_401165 at 0x401165
void sub_401165()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198757()
}


// Function: sub_401166 at 0x401166
void sub_401166()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401170

unsigned long long deregister_tm_clones()
{
    return 4210712;
}


// Function: sub_401199 at 0x401199
void sub_401199()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x4011a0

unsigned long long register_tm_clones()
{
    return 0;
}


// Function: sub_4011d9 at 0x4011d9
void sub_4011d9()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x4011e0
extern char __bss_start;
extern unsigned long long __dso_handle;
extern unsigned long long g_403ff8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    if (__bss_start)
        return v2;
    if (g_403ff8)
        __cxa_finalize(__dso_handle);
    v1 = deregister_tm_clones();
    __bss_start = 1;
    return v1;
}


// Function: sub_401215 at 0x401215
void sub_401215()
{
}


// Function: sub_401219 at 0x401219
void sub_401219()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x401220
unsigned long long frame_dummy()
{
    return register_tm_clones();
}


// Function: param_macro_constants at 0x401229
unsigned long long param_macro_constants(unsigned int a0)
{
    return (a0 <= 0x400 ? 0x200 : 64);
}


// Function: call_macro_constants at 0x40124b
unsigned long long call_macro_constants()
{
    return param_macro_constants(0x800);
}


// Function: param_macro_functions at 0x40125f
long long param_macro_functions(unsigned int a0, unsigned int a1)
{
    return (a0 <= a1 ? a1 : a0) + (a0 * a0 & 4294967295);
}


// Function: call_macro_functions at 0x401284
unsigned long long call_macro_functions()
{
    return param_macro_functions(5, 3);
}


// Function: param_conditional_compile at 0x40129d
int param_conditional_compile(unsigned int a0)
{
    unsigned int v0;  // [bp-0xc]

    v0 = a0;
    v0 = v0 * 3 + 2;
    return v0;
}


// Function: call_conditional_compile at 0x4012c2
int call_conditional_compile()
{
    return param_conditional_compile(10);
}


// Function: param_multi_branch_compile at 0x4012d6
int param_multi_branch_compile(unsigned int a0)
{
    return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x4012f2
int call_multi_branch_compile()
{
    return param_multi_branch_compile(10);
}


// Function: param_macro_recursion at 0x401306
int param_macro_recursion(unsigned int a0)
{
    return a0 + 16;
}


// Function: call_macro_recursion at 0x401319
int call_macro_recursion()
{
    return param_macro_recursion(100);
}


// Function: param_stringize at 0x40132d
int param_stringize(unsigned int a0)
{
    unsigned int v5;  // eax
    unsigned int v6;  // eax
    unsigned int v0;  // [bp-0x3c]
    char *v1;  // [bp-0x30]
    char *v2;  // [bp-0x28]
    char *v3;  // [bp-0x20]

    v0 = a0;
    v1 = "Hello World";
    v2 = "1.2.3";
    v3 = "155";
    v5 = strlen(v1);
    v6 = strlen(v2);
    return (unsigned int)strlen(v3) + v5 + v6;
}


// Function: call_stringize at 0x40138e
int call_stringize()
{
    return param_stringize(0);
}


// Function: my_func at 0x4013a2
unsigned int my_func(unsigned int a0)
{
    return a0 * 10;
}


// Function: param_token_paste at 0x4013bb
unsigned int param_token_paste(unsigned int a0)
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v0 = my_func(a0);
    v1 = a0 + 5;
    v0 += v1;
    return v0;
}


// Function: call_token_paste at 0x4013eb
int call_token_paste()
{
    return param_token_paste(5);
}


// Function: param_variadic_macro at 0x4013ff
long long param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x2c]

    printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
    v0 = 5;
    return a0 + v0 * 10;
}


// Function: call_variadic_macro at 0x401472
unsigned long long call_variadic_macro()
{
    return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x401490
int param_macro_override(unsigned int a0)
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v0 = a0 + 1;
    v1 = a0 * 2;
    return v1 + v0;
}


// Function: call_macro_override at 0x4014b6
int call_macro_override()
{
    return param_macro_override(5);
}


// Function: header_func at 0x4014ca
unsigned int header_func(unsigned int a0)
{
    return a0 * 100;
}


// Function: param_include_guard at 0x4014dd
int param_include_guard()
{
    return header_func(5);
}


// Function: call_include_guard at 0x4014f1
int call_include_guard()
{
    return param_include_guard();
}


// Function: param_builtin_macros at 0x401505
int param_builtin_macros(unsigned int a0)
{
    unsigned int v0;  // [bp-0x38]
    unsigned int result;  // [bp-0x34]
    unsigned int flag1;  // [bp-0x30]
    unsigned int v3;  // [bp-0x2c]
    unsigned long long v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x10]

    v4 = "src/5-23.c";
    v0 = 279;
    v5 = "param_builtin_macros";
    v6 = "Jan 15 2026";
    v7 = "03:00:25";
    printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v4, v5, v0, v6, v7);
    result = 0;
    flag1 = 1;
    v3 = 2;
    return v3 + a0 + v0 + result + flag1;
}


// Function: call_builtin_macros at 0x4015a5
int call_builtin_macros()
{
    return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x4015b9
extern char g_402090;
extern char g_4020b7;
extern char g_4020d2;
extern char g_4020ed;
extern char g_402108;
extern char g_402127;
extern char g_402148;
extern char g_402172;
extern char g_40218d;
extern char g_4021a8;
extern char g_4021c3;
extern char g_4021e0;

int test_preprocessing_features()
{
    puts(&g_402090);
    printf(&g_4020b7, call_macro_constants() & 4294967295);
    printf(&g_4020d2, call_macro_functions() & 4294967295);
    printf(&g_4020ed, call_conditional_compile() & 4294967295);
    printf(&g_402108, call_multi_branch_compile() & 4294967295);
    printf(&g_402127, call_macro_recursion() & 4294967295);
    printf(&g_402148, call_stringize() & 4294967295);
    printf(&g_402172, call_token_paste() & 4294967295);
    printf(&g_40218d, call_variadic_macro() & 4294967295);
    printf(&g_4021a8, call_macro_override() & 4294967295);
    printf(&g_4021c3, call_include_guard() & 4294967295);
    return printf(&g_4021e0, call_builtin_macros() & 4294967295);
}


// Function: param_asm_basic at 0x401733
int param_asm_basic(unsigned int a0)
{
    unsigned int v0;  // [bp-0xc]

    v0 = a0 + 10;
    return v0;
}


// Function: call_asm_basic at 0x401750
int call_asm_basic()
{
    return param_asm_basic(5);
}


// Function: param_asm_clobber at 0x401764
unsigned int param_asm_clobber(unsigned long ptr, unsigned int a1)
{
    unsigned int v2;  // eax
    unsigned long long idx;  // rcx
    unsigned int v0;  // [bp-0xc]

    v0 = 0;
    v2 = 0;
    for (idx = 0; (unsigned int)idx < a1; idx = (unsigned int)idx + 1)
    {
        v2 += *((int *)(ptr + idx * 4));
    }
    v0 = v2;
    return v0;
}


// Function: call_asm_clobber at 0x40179a
int call_asm_clobber()
{
    unsigned int result;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]
    unsigned int v4;  // [bp-0x18]

    result = 1;
    v1 = 2;
    v2 = 3;
    v3 = 4;
    v4 = 5;
    return param_asm_clobber(&result, 5);
}


// Function: param_asm_multi_insn at 0x4017ff
unsigned long long param_asm_multi_insn(char *a0, char *a1, unsigned long long a2)
{
    unsigned long long v1;  // rax
    char *iter;  // rsi
    char *cur;  // rcx
    unsigned long long i;  // rdx

    iter = a0;
    cur = a1;
    for (i = a2; i; i -= 1)
    {
        v1 = v1 & 0xffffffffffffff00 | *(cur);
        *(iter) = *(cur);
        iter += 1;
        cur += 1;
    }
    return v1;
}


// Function: call_asm_multi_insn at 0x40184d
unsigned long long call_asm_multi_insn()
{
    char v0[10];  // [bp-0x42]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x34]

    strncpy(v0, "Hello ASM", 9);
    memset(&v1, 0, 32);
    param_asm_multi_insn(&v1, &v0, 9);
    if (v1 == 72 && v2 == 111)
        return 42;
    return 4294967295;
}


// Function: param_asm_simd at 0x4018e6
unsigned long long param_asm_simd(uint128_t *a0, uint128_t *a1, uint128_t *ptr)
{
    *(ptr) = AddV(*(a0), *(a1));
    return 0;
}


// Function: param_simd_intrinsics at 0x40191a
unsigned long long param_simd_intrinsics(void* ptr, void* p, uint128_t *addr)
{
    int v0;  // [bp-0x68]
    int v1;  // [bp-0x58]
    int v2;  // [bp-0x48]
    char v3;  // [bp-0x38]
    char v4;  // [bp-0x28]
    char v5;  // [bp-0x18]

    *((int128_t *)&v0) = *((int128_t *)ptr);
    *((int128_t *)&v1) = *((int128_t *)p);
    memcpy(&v4, &v0, 16);
    memcpy(&v5, &v1, 16);
    *((int128_t *)&v2) = AddV(*((int128_t *)&v5), *((int128_t *)&v4));
    memcpy(&v3, &v2, 16);
    *(addr) = *((int128_t *)&v3);
    return 0;
}


// Function: call_asm_simd at 0x4019b5
long long call_asm_simd()
{
    unsigned int result;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned int v2;  // [bp-0x40]
    unsigned int v3;  // [bp-0x3c]
    unsigned int v4;  // [bp-0x38]
    unsigned int v5;  // [bp-0x34]
    unsigned int v6;  // [bp-0x30]
    unsigned int v7;  // [bp-0x2c]
    char v8;  // [bp-0x28], Other Possible Types: unsigned int
    unsigned int v9;  // [bp-0x24]
    unsigned int v10;  // [bp-0x20]
    char v11;  // [bp-0x1c]

    result = 1;
    v1 = 2;
    v2 = 3;
    v3 = 4;
    v4 = 5;
    v5 = 6;
    v6 = 7;
    v7 = 8;
    param_asm_simd(&result, &v4, &v8);
    return *((int *)&v11) + v8 + v9 + v10;
}


// Function: param_asm_atomic at 0x401a47
int param_asm_atomic(unsigned int *ptr, unsigned int a1)
{
    unsigned int v0;  // [bp-0xc]

    atomic_exchange_add(ptr, a1);
    v0 = *(ptr);
    return a1 + v0;
}


// Function: param_atomic_c11 at 0x401a6e
long long param_atomic_c11(unsigned int *a0, unsigned int a1)
{
    atomic_exchange_add(a0, a1);
    return a1 + *(a0);
}


// Function: call_asm_atomic at 0x401a8f
long long call_asm_atomic()
{
    unsigned int v0[1];  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]

    *((unsigned int [1])v0) = 10;
    v1 = param_asm_atomic(&v0, 5);
    return v1 + *(v0);
}


// Function: param_dynamic_code at 0x401ae3
unsigned long long param_dynamic_code(unsigned int a0)
{
    unsigned int v0;  // [bp-0x34]
    unsigned long v1;  // [bp-0x30]
    void* ptr;  // [bp-0x28]
    void* v3;  // [bp-0x20]
    unsigned int v4;  // [bp-0x16]
    unsigned short v5;  // [bp-0x12]

    v1 = sysconf(30);
    ptr = mmap(NULL, v1, 7, 34, -1, NULL);
    if (ptr != 0xffffffffffffffff)
    {
        v4 = 3229874313;
        v5 = 49925;
        *((unsigned int *)ptr) = v4;
        *((unsigned short *)&ptr[4]) = v5;
        v3 = ptr;
        v0 = v3(a0);
        munmap(ptr, v1);
        return v0;
    }
    return 4294967295;
}


// Function: param_memory_protection at 0x401ba8
unsigned long long param_memory_protection()
{
    unsigned int v0;  // [bp-0x24]
    unsigned long v1;  // [bp-0x20]
    unsigned int *ptr;  // [bp-0x18]
    unsigned int *ptr;  // [bp-0x10]

    v1 = sysconf(30);
    ptr = mmap(NULL, v1, 3, 34, -1, NULL);
    if (ptr == 0xffffffffffffffff)
        return 4294967295;
    ptr = ptr;
    *(ptr) = 42;
    if (mprotect(ptr, v1, 1, v1))
    {
        munmap(ptr, v1);
        return 4294967294;
    }
    v0 = *(ptr);
    if (!mprotect(ptr, v1, 3, v1))
    {
        *(ptr) = 100;
        munmap(ptr, v1);
        return v0;
    }
    munmap(ptr, v1);
    return 4294967293;
}


// Function: param_clobber_importance at 0x401ca7
int param_clobber_importance(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v0 = a0 + a1;
    v1 = a0 + a1;
    return v1 + v0;
}


// Function: call_asm_privileged at 0x401cdd
unsigned long long call_asm_privileged()
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    v0 = param_dynamic_code(10);
    v1 = param_memory_protection();
    v2 = param_clobber_importance(3, 7);
    if (v0 == 15 && v1 == 42 && v2 == 20)
        return 77;
    return v0;
}


// Function: param_memory_clobber_demo at 0x401d33
extern unsigned int global_var;

unsigned int param_memory_clobber_demo()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v0 = 50;
    v1 = v0 + global_var;
    return v1;
}


// Function: test_asm_features at 0x401d57
extern char g_402210;
extern char g_40223a;
extern char g_402256;
extern char g_402272;
extern char g_40228e;
extern char g_4022aa;
extern char g_4022c6;

int test_asm_features()
{
    puts(&g_402210);
    printf(&g_40223a, call_asm_basic() & 4294967295);
    printf(&g_402256, call_asm_clobber() & 4294967295);
    printf(&g_402272, call_asm_multi_insn() & 4294967295);
    printf(&g_40228e, call_asm_simd() & 4294967295);
    printf(&g_4022aa, call_asm_atomic() & 4294967295);
    return printf(&g_4022c6, call_asm_privileged() & 4294967295);
}


// Function: main at 0x401e31
unsigned int main()
{
    test_preprocessing_features();
    test_asm_features();
    return 0;
}


// Function: _fini at 0x401e54
void _fini()
{
    return;
}

