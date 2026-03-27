// Angr Decompilation of 5-23_clang_O2_no_g
// Platform: ARMEL

// Function: _init at 0x4004e0
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_4004ec at 0x4004ec
extern unsigned int g_412008;

int sub_4004ec()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_412008;
}


// Function: _start at 0x400590
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_4005c8 at 0x4005c8
void sub_4005c8()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x4005d4
extern unsigned int g_412044;

int call_weak_fn()
{
    unsigned int v0;  // r0

    if (g_412044)
        goto LABEL_4005ec;
    return v0;
LABEL_4005ec:
    __gmon_start__(); /* do not return */
}


// Function: deregister_tm_clones at 0x4005f8
extern char __TMC_END__;
extern unsigned int g_412040;

int deregister_tm_clones()
{
    if (0)
        goto LABEL_400618;
    return &__TMC_END__;
LABEL_400618:
    if (g_412040)
        goto LABEL_400628;
    return &__TMC_END__;
LABEL_400628:
    goto g_412040;
}


// Function: register_tm_clones at 0x40063c
extern char __TMC_END__;
extern unsigned int g_41204c;

int register_tm_clones()
{
    if (0)
        goto LABEL_400668;
    return &__TMC_END__;
LABEL_400668:
    if (g_41204c)
        goto LABEL_400678;
    return &__TMC_END__;
LABEL_400678:
    goto g_41204c;
}


// Function: __do_global_dtors_aux at 0x40068c
extern char __TMC_END__;
extern unsigned int __dso_handle;
extern unsigned int g_41203c;

unsigned int __do_global_dtors_aux()
{
    unsigned int v2;  // r0
    unsigned int v3;  // lr
    unsigned int v4;  // r4
    unsigned int v5;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (!__TMC_END__)
        goto LABEL_4006a8;
    return v2;
LABEL_4006a8:
    v1 = v3;
    v0 = v4;
    if (!g_41203c)
    {
        v5 = deregister_tm_clones();
        __TMC_END__ = 1;
        return v5;
    }
    __cxa_finalize(__dso_handle); /* do not return */
}


// Function: frame_dummy at 0x4006f4
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


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
    unsigned int v0;  // r1

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
    printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:19");
    return a0 + 282;
}


// Function: call_builtin_macros at 0x400894
unsigned int call_builtin_macros()
{
    printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:19");
    return 382;
}


// Function: test_preprocessing_features at 0x400900
extern char g_400fb7;
extern char g_400fd2;
extern char g_400fed;
extern char g_401008;
extern char g_401027;
extern char g_401043;
extern char g_40106d;
extern char g_401088;
extern char g_4010a3;
extern char g_4010be;
extern char g_4010da;
extern char g_4011ab;

int test_preprocessing_features()
{
    unsigned int v0;  // r0

    puts(&g_4011ab);
    printf(&g_400fb7, 64);
    printf(&g_400fd2, 30);
    printf(&g_400fed, 32);
    printf(&g_401008, 57122);
    printf(&g_401027, 116);
    printf(&g_401043, 19);
    printf(&g_40106d, 60);
    printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
    printf(&g_401088, 60);
    printf(&g_4010a3, 16);
    printf(&g_4010be, 500);
    printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:19");
    v0 = printf(&g_4010da, 382);
    return printf(&g_4010da, 382);
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
    unsigned int v0;  // r0
    unsigned int v1;  // r0
    unsigned int *ptr;  // r2
    unsigned int *v3;  // r2
    unsigned int v4;  // r1
    unsigned int v5;  // r0

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
    void* v0;  // r0
    void* v1;  // r1
    unsigned int v2;  // r2
    unsigned int dst;  // r0

    dst = memcpy(v0, v1, v2);
    return memcpy(v0, v1, v2);
}


// Function: call_asm_multi_insn at 0x400ab8
unsigned int call_asm_multi_insn()
{
    return 42;
}


// Function: param_asm_simd at 0x400ac0
unsigned int param_asm_simd(unsigned int *pos, unsigned int *index, unsigned int *ptr)
{
    *(ptr) = *(index) + *(pos);
    ptr[1] = index[1] + pos[1];
    ptr[2] = index[2] + pos[2];
    ptr[3] = index[3] + pos[3];
    return 0;
}


// Function: param_simd_intrinsics at 0x400b08
unsigned int param_simd_intrinsics(unsigned int *pos, unsigned int *index, unsigned int *ptr)
{
    *(ptr) = *(index) + *(pos);
    ptr[1] = index[1] + pos[1];
    ptr[2] = index[2] + pos[2];
    ptr[3] = index[3] + pos[3];
    return 0;
}


// Function: call_asm_simd at 0x400b50
unsigned int call_asm_simd()
{
    return 36;
}


// Function: param_asm_atomic at 0x400b58
int param_asm_atomic(unsigned int a0, unsigned int a1)
{
    return __atomic_fetch_add_4() + a1;
}


// Function: param_atomic_c11 at 0x400b74
int param_atomic_c11(unsigned int a0, unsigned int a1)
{
    return __atomic_fetch_add_4() + a1;
}


// Function: call_asm_atomic at 0x400b90
int call_asm_atomic()
{
    unsigned int v0;  // [bp-0xc]

    v0 = 10;
    return __atomic_fetch_add_4(&v0, 5, 5) + v0 + 5;
}


// Function: param_dynamic_code at 0x400bc8
unsigned int param_dynamic_code(unsigned int a0)
{
    unsigned int v0;  // r5
    void* ptr;  // r0

    v0 = sysconf(30);
    ptr = mmap(NULL, v0, 7, 34, -1, NULL);
    if (ptr == 0xffffffff)
        return 4294967295;
    munmap(ptr, v0);
    return a0 + 5;
}


// Function: param_memory_protection at 0x400c28
unsigned int param_memory_protection()
{
    unsigned int v0;  // r4
    unsigned int *ptr;  // r0
    unsigned int *ptr;  // r5
    unsigned int v3;  // r6
    unsigned int result;  // r0
    unsigned int v5;  // r0

    v0 = sysconf(30);
    ptr = mmap(NULL, v0, 3, 34, -1, NULL);
    if (ptr == 0xffffffff)
        return 4294967295;
    ptr = ptr;
    *(ptr) = 42;
    v3 = 4294967294;
    if (!mprotect(ptr, v0, 1))
    {
        result = mprotect(ptr, v0, 3);
        if (!result)
        {
            v5 = 100;
            if (!armg_calculate_condition(2, result, 0, 0))
                goto LABEL_400cb2;
LABEL_400cb1:
            v3 = *(ptr);
            *(ptr) = v5;
        }
        else
        {
            v5 = result;
            if (armg_calculate_condition(2, result, 0, 0))
                goto LABEL_400cb1;
LABEL_400cb2:
            v3 = 4294967293;
            *(ptr) = v5;
        }
    }
    munmap(ptr, v0);
    return v3;
}


// Function: param_clobber_importance at 0x400cd4
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
    return (a1 + a0) * 2;
}


// Function: call_asm_privileged at 0x400ce0
unsigned int call_asm_privileged()
{
    unsigned int v4;  // lr
    unsigned int v5;  // r6
    unsigned int v6;  // r5
    unsigned int v7;  // r4
    unsigned int v8;  // r4
    unsigned int v9;  // r6
    void* ptr;  // r5
    unsigned int v12;  // r0
    unsigned int v13;  // r0
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = v5;
    v1 = v6;
    v0 = v7;
    v8 = sysconf(30);
    v9 = 4294967295;
    ptr = mmap(NULL, v8, 7, 34, -1, NULL);
    if (ptr != 0xffffffff)
    {
        munmap(ptr, v8);
        v9 = 15;
    }
    if (param_memory_protection() == 42)
        v12 = 77;
    else
        v12 = v9;
    v13 = v12;
    if (ptr != 0xffffffff)
        return v13;
    return v9;
}


// Function: param_memory_clobber_demo at 0x400d58
extern unsigned int global_var;

int param_memory_clobber_demo()
{
    return global_var + 50;
}


// Function: test_asm_features at 0x400d6c
extern char g_401103;
extern char g_40111f;
extern char g_40113b;
extern char g_401157;
extern char g_40118f;
extern char g_4011d2;

int test_asm_features()
{
    unsigned int v2;  // r4
    unsigned int v3;  // r6
    void* ptr;  // r5
    unsigned int v6;  // r1
    unsigned int v7;  // r1
    unsigned int v8;  // r1
    unsigned int v9;  // r0
    unsigned int v0;  // [bp-0x14]

    puts(&g_4011d2);
    printf(&g_401103, 15);
    printf(&g_40111f, 15);
    printf(&g_40113b, 42);
    printf(&g_401157, 36);
    v0 = 10;
    printf("ASM-L4-05: %", __atomic_fetch_add_4(&v0, 5, 5) + v0 + 5);
    v2 = sysconf(30);
    v3 = 4294967295;
    ptr = mmap(NULL, v2, 7, 34, -1, NULL);
    if (ptr != 0xffffffff)
    {
        munmap(ptr, v2);
        v3 = 15;
    }
    if (param_memory_protection() == 42)
        v6 = 77;
    else
        v6 = v3;
    v7 = v6;
    if (ptr == 0xffffffff)
        v8 = v3;
    else
        v8 = v7;
    v9 = printf(&g_40118f, v8);
    return printf(&g_40118f, v8);
}


// Function: main at 0x400e88
unsigned int main()
{
    test_preprocessing_features();
    test_asm_features();
    return 0;
}


// Function: _fini at 0x400ea0
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

