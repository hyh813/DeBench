// Angr Decompilation of 5-23_clang_Os_g
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
extern unsigned long long g_404008;
extern unsigned long long g_404010;

void sub_401020()
{
    unsigned long v0;  // [bp-0x8]

    v0 = g_404008;
    goto g_404010;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
    char *v1;  // rdi

    return puts(v1);
}


// Function: _start at 0x4010a0
void _start(unsigned long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long v3;  // rax
    unsigned long long v1;  // [bp+0x0]
    unsigned long v2;  // [bp+0x8]

    v1 = v3;
    __libc_start_main(main, v1, &v2, 0, 0, a2, &v1, v1); /* do not return */
}


// Function: sub_4010c5 at 0x4010c5
void sub_4010c5()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198597()
}


// Function: sub_4010c6 at 0x4010c6
void sub_4010c6()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x4010d0

unsigned long long deregister_tm_clones()
{
    return 4210784;
}


// Function: sub_4010f9 at 0x4010f9
void sub_4010f9()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x401100

unsigned long long register_tm_clones()
{
    return 0;
}


// Function: sub_401139 at 0x401139
void sub_401139()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401140
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


// Function: sub_401175 at 0x401175
void sub_401175()
{
}


// Function: sub_401179 at 0x401179
void sub_401179()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x401180
unsigned long long frame_dummy()
{
    return register_tm_clones();
}


// Function: sub_401189 at 0x401189
void sub_401189(unsigned long a0)
{
    param_macro_constants();
    return;
}


// Function: param_macro_constants at 0x40118c
unsigned long long param_macro_constants(unsigned int a0)
{
    if (1025 > a0)
        return 0x200;
    return 64;
}


// Function: call_macro_constants at 0x4011a0
unsigned long long call_macro_constants()
{
    return 64;
}


// Function: param_macro_functions at 0x4011a6
long long param_macro_functions(unsigned long a0, unsigned int a1)
{
    return a0 * (a0 & 4294967295) + (a1 < (unsigned int)a0 ? a0 & 4294967295 : a1);
}


// Function: call_macro_functions at 0x4011b3
unsigned long long call_macro_functions()
{
    return 30;
}


// Function: param_conditional_compile at 0x4011b9
int param_conditional_compile(unsigned int a0)
{
    return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x4011c0
unsigned long long call_conditional_compile()
{
    return 32;
}


// Function: param_multi_branch_compile at 0x4011c6
int param_multi_branch_compile(unsigned int a0)
{
    return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x4011cf
unsigned long long call_multi_branch_compile()
{
    return 57122;
}


// Function: param_macro_recursion at 0x4011d5
int param_macro_recursion(unsigned int a0)
{
    return a0 + 16;
}


// Function: call_macro_recursion at 0x4011d9
unsigned long long call_macro_recursion()
{
    return 116;
}


// Function: param_stringize at 0x4011df
unsigned long long param_stringize()
{
    return 19;
}


// Function: call_stringize at 0x4011e5
unsigned long long call_stringize()
{
    return 19;
}


// Function: my_func at 0x4011eb
unsigned int my_func(unsigned int a0)
{
    return a0 * 10;
}


// Function: param_token_paste at 0x4011f1
int param_token_paste(unsigned int a0)
{
    return a0 * 11 + 5;
}


// Function: call_token_paste at 0x4011fb
unsigned long long call_token_paste()
{
    return 60;
}


// Function: param_variadic_macro at 0x401201
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
    printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
    return a0 + 50;
}


// Function: call_variadic_macro at 0x40121f
unsigned long long call_variadic_macro()
{
    unsigned long long v2;  // rax
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
    return 60;
}


// Function: param_macro_override at 0x401244
int param_macro_override(unsigned int a0)
{
    return a0 * 3 + 1;
}


// Function: call_macro_override at 0x40124a
unsigned long long call_macro_override()
{
    return 16;
}


// Function: param_include_guard at 0x401250
unsigned long long param_include_guard()
{
    return 500;
}


// Function: call_include_guard at 0x401256
unsigned long long call_include_guard()
{
    return 500;
}


// Function: param_builtin_macros at 0x40125c
int param_builtin_macros(unsigned int a0)
{
    printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:58");
    return a0 + 282;
}


// Function: call_builtin_macros at 0x401298
unsigned long long call_builtin_macros()
{
    unsigned long long v2;  // rax
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:58");
    return 382;
}


// Function: test_preprocessing_features at 0x4012cf
extern char g_40207f;
extern char g_40209a;
extern char g_4020b5;
extern char g_4020d0;
extern char g_4020ef;
extern char g_40210b;
extern char g_402135;
extern char g_402150;
extern char g_40216b;
extern char g_402186;
extern char g_4021a2;
extern char g_40227d;

int test_preprocessing_features()
{
    unsigned long long v2;  // rax
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    puts(&g_40227d);
    printf(&g_40207f, 64);
    printf(&g_40209a, 30);
    printf(&g_4020b5, 32);
    printf(&g_4020d0, 57122);
    printf(&g_4020ef, 116);
    printf(&g_40210b, 19);
    printf(&g_402135, 60);
    printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
    printf(&g_402150, 60);
    printf(&g_40216b, 16);
    printf(&g_402186, 500);
    printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:58");
    return printf(&g_4021a2, 382);
}


// Function: param_asm_basic at 0x4013fa
int param_asm_basic(unsigned int a0)
{
    return a0 + 10;
}


// Function: call_asm_basic at 0x401404
unsigned long long call_asm_basic()
{
    return 15;
}


// Function: param_asm_clobber at 0x401413
unsigned int param_asm_clobber(unsigned long ptr, unsigned int a1)
{
    unsigned int v1;  // eax
    unsigned long long idx;  // rcx

    v1 = 0;
    for (idx = 0; (unsigned int)idx < a1; idx = (unsigned int)idx + 1)
    {
        v1 += *((int *)(ptr + idx * 4));
    }
    return v1;
}


// Function: call_asm_clobber at 0x401427
unsigned int call_asm_clobber()
{
    unsigned int v3;  // eax
    unsigned long long idx;  // rcx
    int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x8]

    v1 = 5;
    v0 = 316912650112397582603894390785;
    v3 = 0;
    for (idx = 0; (unsigned int)idx < 5; idx = (unsigned int)idx + 1)
    {
        v3 += *((int *)((char *)&v0 + 4 * idx));
    }
    return v3;
}


// Function: param_asm_multi_insn at 0x401458
char param_asm_multi_insn(char *iter, char *cur, unsigned long long i)
{
    char v1;  // al

    for (; i; i -= 1)
    {
        v1 = *(cur);
        *(iter) = *(cur);
        iter += 1;
        cur += 1;
    }
    return v1;
}


// Function: call_asm_multi_insn at 0x40146f
char call_asm_multi_insn()
{
    char *v6;  // rcx
    unsigned long long i;  // rsi
    char *cur;  // rdi
    char v0[8];  // [bp-0x38]
    unsigned short v1;  // [bp-0x30]
    int flag1;  // [bp-0x28]
    char v3;  // [bp-0x24]
    uint128_t result;  // [bp-0x18]

    v6 = &v0;
    strncpy(v0, "Hello AS", 8);
    v1 = 77;
    *((void*)&result) = 0;
    flag1 = 0;
    i = 9;
    for (cur = &flag1; i; i -= 1)
    {
        *(cur) = *(v6);
        cur += 1;
        v6 += 1;
    }
    if ((v3 ^ 111) || ((char)flag1 ^ 72))
        return 255;
    return 42;
}


// Function: param_asm_simd at 0x4014ce
double param_asm_simd(long long ptr, long long p, long long addr)
{
    int v1;  // xmm0

    v1 = AddV(*(ptr), *(p));
    *((void*)addr) = v1;
    return (unsigned long long)v1;
}


// Function: param_simd_intrinsics at 0x4014de
double param_simd_intrinsics(long long p, long long ptr, long long addr)
{
    int v1;  // xmm0

    v1 = AddV(*(ptr), *(p));
    *((void*)addr) = v1;
    return (unsigned long long)v1;
}


// Function: call_asm_simd at 0x4014ed
long long call_asm_simd()
{
    unsigned long v4;  // xmm1lq
    int v0;  // [bp-0x38]
    uint128_t v1;  // [bp-0x28]
    uint128_t v2;  // [bp-0x18]

    v2 = 316912650112397582603894390785;
    v1 = 633825300243241909290088267781;
    *((uint128_t *)&v0) = AddV(v2, v1);
    v4 = (unsigned long long)(AddV((unsigned int)(v0 >> 96) CONCAT (unsigned int)(v0 >> 64) CONCAT (unsigned int)(v0 >> 96) CONCAT (unsigned int)(v0 >> 64), v0));
    return AddV((unsigned int)(v4 >> 32) CONCAT (unsigned int)(v4 >> 32) CONCAT (unsigned int)(v4 >> 32) CONCAT (unsigned int)(v4 >> 32), v4);
}


// Function: param_asm_atomic at 0x401538
int param_asm_atomic(unsigned int *a0, unsigned int a1)
{
    atomic_exchange_add(a0, a1);
    return *(a0) + a1;
}


// Function: param_atomic_c11 at 0x401541
int param_atomic_c11(unsigned int *a0, unsigned int a1)
{
    atomic_exchange_add(a0, a1);
    return *(a0) + a1;
}


// Function: call_asm_atomic at 0x40154a
long long call_asm_atomic()
{
    unsigned int v0;  // [bp-0x4]

    v0 = 10;
    atomic_exchange_add(&v0, 5);
    return v0 * 2 + 5;
}


// Function: param_dynamic_code at 0x401566
unsigned long long param_dynamic_code(unsigned int a0)
{
    unsigned long v1;  // rax
    void* ptr;  // rax
    unsigned int v3;  // eax

    v1 = sysconf(30);
    ptr = mmap(NULL, v1, 7, 34, -1, NULL);
    if (ptr == 0xffffffffffffffff)
        return 4294967295;
    *((unsigned short *)&ptr[4]) = 49925;
    *((unsigned int *)ptr) = 3229874313;
    v3 = ptr(a0);
    munmap(ptr, v1);
    return v3;
}


// Function: param_memory_protection at 0x4015ce
unsigned int param_memory_protection()
{
    unsigned long long v2;  // rax
    unsigned long v3;  // r14
    unsigned int *p;  // rax
    unsigned int *ptr;  // rbx
    unsigned int v6;  // ebp
    unsigned int v7;  // r15d
    unsigned long long v0;  // [bp-0x28]

    v0 = v2;
    v3 = sysconf(30);
    p = mmap(NULL, v3, 3, 34, -1, NULL);
    if (p == 0xffffffffffffffff)
        return 4294967295;
    ptr = p;
    *(p) = 42;
    v6 = 4294967294;
    if (!mprotect(p, v3, 1))
    {
        v7 = *(ptr);
        v6 = 4294967293;
        if (!mprotect(ptr, v3, 3))
        {
            *(ptr) = 100;
            v6 = v7;
        }
    }
    munmap(ptr, v3);
    return v6;
}


// Function: param_clobber_importance at 0x401669
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
    return (a0 + a1) * 2;
}


// Function: call_asm_privileged at 0x401678
unsigned long long call_asm_privileged()
{
    unsigned long long v2;  // rbx
    unsigned int v3;  // ebx
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    v3 = param_dynamic_code(10);
    if (!(param_memory_protection() ^ 42) && !(v3 ^ 15))
        return 77;
    return v3;
}


// Function: param_memory_clobber_demo at 0x4016c0
extern unsigned int global_var;

int param_memory_clobber_demo()
{
    return 50 + global_var;
}


// Function: test_asm_features at 0x4016d2
extern char g_4021d5;
extern char g_4021f1;
extern char g_40220d;
extern char g_402229;
extern char g_402245;
extern char g_402261;
extern char g_4022a4;

int test_asm_features()
{
    unsigned int v11;  // eax
    unsigned long long idx;  // rcx
    unsigned long long j;  // rcx
    char *v14;  // rdx
    char *cur;  // rsi
    unsigned long v16;  // xmm1lq
    int v0;  // [bp-0x58]
    char v1[8];  // [bp-0x48]
    unsigned short v2;  // [bp-0x40]
    unsigned int v3;  // [bp-0x38]
    uint128_t v4;  // [bp-0x38]
    uint128_t result;  // [bp-0x38]
    char v6;  // [bp-0x38]
    uint128_t v7;  // [bp-0x38]
    char v8;  // [bp-0x34]
    uint128_t v9;  // [bp-0x28], Other Possible Types: unsigned int

    puts(&g_4022a4);
    printf(&g_4021d5, 15);
    v9 = 5;
    v4 = 316912650112397582603894390785;
    v11 = 0;
    for (idx = 0; (unsigned int)idx < 5; idx = (unsigned int)idx + 1)
    {
        v11 += *((int *)&(&v6)[4 * idx]);
    }
    printf(&g_4021f1, v11);
    strncpy(v1, "Hello AS", 8);
    v2 = 77;
    v9 = 0;
    result = 0;
    j = 9;
    v14 = &v1;
    for (cur = &v6; j; j -= 1)
    {
        *(cur) = *(v14);
        cur += 1;
        v14 += 1;
    }
    printf(&g_40220d, (!(v8 ^ 111) && !(v6 ^ 72) ? 42 : 4294967295));
    v7 = 316912650112397582603894390785;
    *((uint128_t *)&v1) = 633825300243241909290088267781;
    *((uint128_t *)&v0) = AddV(v7, *((int128_t *)&v1));
    v16 = (unsigned long long)(AddV((unsigned int)(v0 >> 96) CONCAT (unsigned int)(v0 >> 64) CONCAT (unsigned int)(v0 >> 96) CONCAT (unsigned int)(v0 >> 64), v0));
    printf(&g_402229, (unsigned long long)(AddV((unsigned int)(v16 >> 32) CONCAT (unsigned int)(v16 >> 32) CONCAT (unsigned int)(v16 >> 32) CONCAT (unsigned int)(v16 >> 32), v16)));
    v3 = 10;
    atomic_exchange_add(&v6, 5);
    printf(&g_402245, v3 * 2 + 5);
    return printf(&g_402261, call_asm_privileged() & 4294967295);
}


// Function: main at 0x401835
unsigned int main()
{
    unsigned long long v2;  // rax
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    test_preprocessing_features();
    test_asm_features();
    return 0;
}


// Function: _fini at 0x401844
void _fini()
{
    return;
}

