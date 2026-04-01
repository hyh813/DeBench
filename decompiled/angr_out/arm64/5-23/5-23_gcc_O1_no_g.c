// Angr Decompilation of 5-23_gcc_O1_no_g
// Platform: AARCH64

// Function: _init at 0x4007f0
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x400810
extern unsigned long long g_411f60;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_411f60;
}


// Function: sub_400824 at 0x400824
long long sub_400824()
{
    void* v0;  // x0
    void* v1;  // x1
    unsigned long v2;  // x2
    unsigned long long dst;  // x0

    dst = memcpy(v0, v1, v2);
    return memcpy(v0, v1, v2);
}


// Function: init_have_lse_atomics at 0x400900
extern char __aarch64_have_lse_atomics;

unsigned int init_have_lse_atomics()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)__getauxval(16), 24)) & 1;
    return __ROL__((unsigned int)__getauxval(16), 24) & 4278190081 & 1;
}


// Function: sub_400924 at 0x400924
void sub_400924(unsigned long a0)
{
    _start(); /* do not return */
}


// Function: _start at 0x400940
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_400970 at 0x400970
void sub_400970()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x400974
extern unsigned long long g_411fe0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_411fe0)
        return 0;
    v0 = __gmon_start__(g_411fe0);
    return __gmon_start__(g_411fe0);
}


// Function: sub_400988 at 0x400988
void sub_400988()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x400990

unsigned long long deregister_tm_clones()
{
    return 4268056;
}


// Function: register_tm_clones at 0x4009c0
extern unsigned long long g_411ff8;

unsigned long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return 4268056;
    }
    else if (g_411ff8)
    {
        goto g_411ff8;
    }
    else
    {
        return 4268056;
    }
}


// Function: sub_4009fc at 0x4009fc
void sub_4009fc()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x400a00
extern char __bss_start;
extern unsigned long long __dso_handle;
extern unsigned long long g_411fd8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __bss_start;
    if ((unsigned int)v2)
        return v2;
    if (g_411fd8)
        __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    __bss_start = 1;
    return 1;
}


// Function: sub_400a48 at 0x400a48
long long sub_400a48()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x400a50
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: param_macro_constants at 0x400a54
unsigned long long param_macro_constants(unsigned int a0)
{
    if (a0 > 0x400)
        return 64;
    return 0x200;
}


// Function: call_macro_constants at 0x400a68
unsigned long long call_macro_constants()
{
    return 64;
}


// Function: param_macro_functions at 0x400a70
long long param_macro_functions(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // w1

    if (a1 <= a0)
        v0 = a0;
    else
        v0 = a1;
    return v0 + a0 * a0;
}


// Function: call_macro_functions at 0x400a80
unsigned long long call_macro_functions()
{
    return 30;
}


// Function: param_conditional_compile at 0x400a88
int param_conditional_compile(unsigned int a0)
{
    return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x400a94
unsigned long long call_conditional_compile()
{
    return 32;
}


// Function: param_multi_branch_compile at 0x400a9c
int param_multi_branch_compile(unsigned int a0)
{
    return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x400aac
unsigned long long call_multi_branch_compile()
{
    return 57122;
}


// Function: param_macro_recursion at 0x400ab4
int param_macro_recursion(unsigned int a0)
{
    return a0 + 16;
}


// Function: call_macro_recursion at 0x400abc
unsigned long long call_macro_recursion()
{
    return 116;
}


// Function: param_stringize at 0x400ac4
unsigned long long param_stringize()
{
    return 19;
}


// Function: call_stringize at 0x400acc
unsigned long long call_stringize()
{
    return 19;
}


// Function: my_func at 0x400ad4
unsigned int my_func(unsigned int a0)
{
    return (a0 * 10 | a0 * 5 >> 31) & 4294967294;
}


// Function: param_token_paste at 0x400ae0
int param_token_paste(unsigned int a0)
{
    return a0 + 5 + a0 * 10;
}


// Function: call_token_paste at 0x400af0
unsigned long long call_token_paste()
{
    return 60;
}


// Function: param_variadic_macro at 0x400af8
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    __printf_chk(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
    return a0 + 50;
}


// Function: call_variadic_macro at 0x400b34
int call_variadic_macro()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x400b54
int param_macro_override(unsigned int a0)
{
    return a0 * 3 + 1;
}


// Function: call_macro_override at 0x400b60
unsigned long long call_macro_override()
{
    return 16;
}


// Function: param_include_guard at 0x400b68
unsigned long long param_include_guard()
{
    return 500;
}


// Function: call_include_guard at 0x400b70
unsigned long long call_include_guard()
{
    return 500;
}


// Function: param_builtin_macros at 0x400b78
int param_builtin_macros(unsigned int a0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:28");
    return a0 + 282;
}


// Function: call_builtin_macros at 0x400bcc
int call_builtin_macros()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x400be4
extern char g_401320;
extern char g_401348;
extern char g_401368;
extern char g_401388;
extern char g_4013a8;
extern char g_4013c8;
extern char g_4013e8;
extern char g_401418;
extern char g_401438;
extern char g_401458;
extern char g_401478;
extern char g_401498;

int test_preprocessing_features()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    __printf_chk(1, &g_401320);
    __printf_chk(1, &g_401348, 64);
    __printf_chk(1, &g_401368, 30);
    __printf_chk(1, &g_401388, 32);
    __printf_chk(1, &g_4013a8, 57122);
    __printf_chk(1, &g_4013c8, 116);
    __printf_chk(1, &g_4013e8, 19);
    __printf_chk(1, &g_401418, 60);
    __printf_chk(1, &g_401438, call_variadic_macro() & 4294967295);
    __printf_chk(1, &g_401458, 16);
    __printf_chk(1, &g_401478, 500);
    return __printf_chk(1, &g_401498, call_builtin_macros() & 4294967295);
}


// Function: param_asm_basic at 0x400ce8
int param_asm_basic(unsigned int a0)
{
    return a0 + 10;
}


// Function: call_asm_basic at 0x400cf0
unsigned long long call_asm_basic()
{
    return 15;
}


// Function: param_asm_clobber at 0x400cf8
unsigned long long param_asm_clobber(unsigned long ptr, unsigned int i)
{
    unsigned long long v0;  // x2
    unsigned long long v1;  // x0

    if (i <= 0)
        return 0;
    v0 = 0;
    v1 = 0;
    do
    {
        v1 += *((int *)(ptr + v0 * 4));
        v0 += 1;
    } while ((unsigned int)v0 < i);
    return v1;
}


// Function: call_asm_clobber at 0x400d2c
extern char __stack_chk_guard;

unsigned long long call_asm_clobber()
{
    unsigned long long v6;  // x0
    char *v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    v1 = 8589934593;
    v2 = 17179869187;
    v3 = 5;
    v6 = param_asm_clobber(&v1, 5);
    if (v4 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v6;
}


// Function: param_asm_multi_insn at 0x400d94
long long param_asm_multi_insn(void* a0, void* a1, unsigned long a2)
{
    unsigned long long dst;  // x0
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    dst = memcpy(a0, a1, a2);
    return memcpy(a0, a1, a2);
}


// Function: call_asm_multi_insn at 0x400da8
extern char __stack_chk_guard;

unsigned long long call_asm_multi_insn()
{
    unsigned long long v6;  // x0
    char *v0;  // [bp-0x50]
    char v1;  // [bp-0x38]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x24]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    strncpy(&v1, "Hello ASM", 9);
    memset(&v2, 0, 32);
    param_asm_multi_insn(&v2, &v1, 9);
    if (v2 != 72)
    {
        v6 = 4294967295;
    }
    else if (v3 == 111)
    {
        v6 = 42;
    }
    else
    {
        v6 = 4294967295;
    }
    if (v4 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v6;
}


// Function: param_asm_simd at 0x400e40
unsigned long long param_asm_simd(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long long i;  // x3

    i = 0;
    do
    {
        *((int *)(a2 + i)) = *((int *)(a0 + i)) + *((int *)(a1 + i));
        i += 4;
    } while (i != 16);
    return 0;
}


// Function: param_simd_intrinsics at 0x400e68
unsigned long long param_simd_intrinsics(unsigned long a0, unsigned long a1, unsigned long a2)
{
    unsigned long long i;  // x3

    i = 0;
    do
    {
        *((int *)(a2 + i)) = *((int *)(a0 + i)) + *((int *)(a1 + i));
        i += 4;
    } while (i != 16);
    return 0;
}


// Function: call_asm_simd at 0x400e90
extern char __stack_chk_guard;

long long call_asm_simd()
{
    char *v0;  // [bp-0x50]
    unsigned int result;  // [bp-0x38]
    unsigned int v2;  // [bp-0x34]
    unsigned int v3;  // [bp-0x30]
    unsigned int v4;  // [bp-0x2c]
    unsigned int v5;  // [bp-0x28]
    unsigned int v6;  // [bp-0x24]
    unsigned int v7;  // [bp-0x20]
    unsigned int v8;  // [bp-0x1c]
    char v9;  // [bp-0x18], Other Possible Types: unsigned int
    unsigned int v10;  // [bp-0x14]
    unsigned int v11;  // [bp-0x10]
    unsigned int v12;  // [bp-0xc]
    unsigned long v13;  // [bp-0x8]
    char v14;  // [bp+0x0]

    v0 = &v14;
    v13 = *((long long *)&__stack_chk_guard);
    result = 1;
    v2 = 2;
    v3 = 3;
    v4 = 4;
    v5 = 5;
    v6 = 6;
    v7 = 7;
    v8 = 8;
    param_asm_simd(&result, &v5, &v9);
    if (v13 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v9 + v10 + v11 + v12;
}


// Function: param_asm_atomic at 0x400f40
int param_asm_atomic(unsigned long long a0, unsigned int a1)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return __aarch64_ldadd4_acq_rel(a1, a0) + a1;
}


// Function: param_atomic_c11 at 0x400f6c
int param_atomic_c11(unsigned long long a0, unsigned int a1)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return __aarch64_ldadd4_acq_rel(a1, a0) + a1;
}


// Function: call_asm_atomic at 0x400f98
extern char __stack_chk_guard;

long long call_asm_atomic()
{
    unsigned long long v4;  // x0
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0xc]
    unsigned long v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v2 = *((long long *)&__stack_chk_guard);
    v1 = 10;
    v4 = param_asm_atomic(&v1, 5);
    if (v2 != *((long long *)&__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v4 + v1;
}


// Function: param_dynamic_code at 0x400ff8
unsigned int param_dynamic_code(unsigned int a0)
{
    unsigned long v2;  // x0
    void* ptr;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = sysconf(30);
    ptr = mmap(NULL, v2, 7, 34, -1, NULL);
    if ((char)arm64g_calculate_condition(2, ptr, 1, 0))
        return 4294967295;
    munmap(ptr, v2);
    return a0 + 5;
}


// Function: param_memory_protection at 0x40105c
unsigned int param_memory_protection()
{
    unsigned long v2;  // x20
    unsigned int *ptr;  // x0
    unsigned int *ptr;  // x19
    unsigned int v5;  // w21
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = sysconf(30);
    ptr = mmap(NULL, v2, 3, 34, -1, NULL);
    if ((char)arm64g_calculate_condition(2, ptr, 1, 0))
        return 4294967295;
    ptr = ptr;
    *(ptr) = 42;
    if (mprotect(ptr, v2, 1))
    {
        munmap(ptr, v2);
        return 4294967294;
    }
    v5 = *(ptr);
    if (mprotect(ptr, v2, 3))
    {
        munmap(ptr, v2);
        return 4294967293;
    }
    *(ptr) = 100;
    munmap(ptr, v2);
    return v5;
}


// Function: param_clobber_importance at 0x40112c
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
    return ((a0 + a1) * 2 | a0 + a1 >> 31) & 4294967294;
}


// Function: call_asm_privileged at 0x401138
unsigned long long call_asm_privileged()
{
    unsigned long long v4;  // x30
    unsigned long long v5;  // x19
    unsigned long v14;  // cc_op
    unsigned long v15;  // cc_dep1
    unsigned long v16;  // cc_dep2
    unsigned long v17;  // cc_ndep
    unsigned long long v6;  // x19
    unsigned long long v7;  // cc_op
    unsigned long v8;  // cc_op
    unsigned long v9;  // cc_dep1
    unsigned long v10;  // cc_dep2
    unsigned long v11;  // cc_ndep
    unsigned long long v12;  // cc_dep1
    unsigned long long v13;  // cc_dep2
    char *v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v0 = &v3;
    v1 = v4;
    v2 = v5;
    v6 = param_dynamic_code(10) & 4294967295;
    if (param_memory_protection() == 42)
    {
        v7 = 3;
        v12 = ((char)arm64g_calculate_condition(v8, v9, v10, v11) ? v6 & 4294967295 : 0);
        v13 = ((char)arm64g_calculate_condition(v8, v9, v10, v11) ? 15 : 0);
    }
    else
    {
        v7 = 0;
        v12 = ((char)arm64g_calculate_condition(v14, v15, v16, v17) ? v6 & 4294967295 : 0);
        v13 = ((char)arm64g_calculate_condition(v14, v15, v16, v17) ? 15 : 0);
    }
    if (!((char)arm64g_calculate_condition(v7 | 16, v12, v13, 0)))
        return 77;
    return v6 & 4294967295;
}


// Function: param_memory_clobber_demo at 0x401170
extern unsigned int global_var;

int param_memory_clobber_demo()
{
    return global_var + 50;
}


// Function: test_asm_features at 0x401180
extern char g_4014d8;
extern char g_401508;
extern char g_401528;
extern char g_401548;
extern char g_401568;
extern char g_401588;
extern char g_4015a8;

int test_asm_features()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    __printf_chk(1, &g_4014d8);
    __printf_chk(1, &g_401508, 15);
    __printf_chk(1, &g_401528, call_asm_clobber() & 4294967295);
    __printf_chk(1, &g_401548, call_asm_multi_insn() & 4294967295);
    __printf_chk(1, &g_401568, call_asm_simd() & 4294967295);
    __printf_chk(1, &g_401588, call_asm_atomic() & 4294967295);
    return __printf_chk(1, &g_4015a8, call_asm_privileged() & 4294967295);
}


// Function: main at 0x40122c
unsigned int main()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_preprocessing_features();
    test_asm_features();
    return 0;
}


// Function: sub_401248 at 0x401248
long long sub_401248()
{
    unsigned long long v0;  // x0

    v0 = __aarch64_ldadd4_acq_rel();
    return __aarch64_ldadd4_acq_rel();
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x401250
// Function: sub_401264 at 0x401264
long long sub_401264()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _fini at 0x401280
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

