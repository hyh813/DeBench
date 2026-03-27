// Angr Decompilation of 5-23_clang_O2_no_g
// Platform: AARCH64

// Function: _init at 0x400780
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x4007a0
extern unsigned long long g_411ff8;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_411ff8;
}


// Function: sub_4007b4 at 0x4007b4
long long sub_4007b4()
{
    void* v0;  // x0
    void* v1;  // x1
    unsigned long v2;  // x2
    unsigned long long dst;  // x0

    dst = memcpy(v0, v1, v2);
    return memcpy(v0, v1, v2);
}


// Function: init_have_lse_atomics at 0x400880
extern char __aarch64_have_lse_atomics;

unsigned int init_have_lse_atomics()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)__getauxval(16), 24)) & 1;
    return __ROL__((unsigned int)__getauxval(16), 24) & 4278190081 & 1;
}


// Function: sub_4008a4 at 0x4008a4
void sub_4008a4(unsigned long a0)
{
    _start(); /* do not return */
}


// Function: _start at 0x4008c0
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_4008f0 at 0x4008f0
void sub_4008f0()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x4008f4
extern unsigned long long g_411fd0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_411fd0)
        return 0;
    v0 = __gmon_start__(g_411fd0);
    return __gmon_start__(g_411fd0);
}


// Function: sub_400908 at 0x400908
void sub_400908()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x400910

unsigned long long deregister_tm_clones()
{
    return 4268152;
}


// Function: register_tm_clones at 0x400940
extern unsigned long long g_411fe0;

unsigned long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return 4268152;
    }
    else if (g_411fe0)
    {
        goto g_411fe0;
    }
    else
    {
        return 4268152;
    }
}


// Function: sub_40097c at 0x40097c
void sub_40097c()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x400980
extern char __bss_start;
extern unsigned long long __dso_handle;
extern unsigned long long g_411fc8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __bss_start;
    if ((unsigned int)v2)
        return v2;
    if (g_411fc8)
        __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    __bss_start = 1;
    return 1;
}


// Function: sub_4009c8 at 0x4009c8
long long sub_4009c8()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x4009d0
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: param_macro_constants at 0x4009d4
unsigned long long param_macro_constants(unsigned int a0)
{
    if (0x400 >= a0)
        return 0x200;
    return 64;
}


// Function: call_macro_constants at 0x4009e8
unsigned long long call_macro_constants()
{
    return 64;
}


// Function: param_macro_functions at 0x4009f0
long long param_macro_functions(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // w8

    if (a1 < a0)
        v0 = a0;
    else
        v0 = a1;
    return v0 + a0 * a0;
}


// Function: call_macro_functions at 0x400a00
unsigned long long call_macro_functions()
{
    return 30;
}


// Function: param_conditional_compile at 0x400a08
int param_conditional_compile(unsigned int a0)
{
    return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x400a14
unsigned long long call_conditional_compile()
{
    return 32;
}


// Function: param_multi_branch_compile at 0x400a1c
int param_multi_branch_compile(unsigned int a0)
{
    return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x400a2c
unsigned long long call_multi_branch_compile()
{
    return 57122;
}


// Function: param_macro_recursion at 0x400a34
int param_macro_recursion(unsigned int a0)
{
    return a0 + 16;
}


// Function: call_macro_recursion at 0x400a3c
unsigned long long call_macro_recursion()
{
    return 116;
}


// Function: param_stringize at 0x400a44
unsigned long long param_stringize()
{
    return 19;
}


// Function: call_stringize at 0x400a4c
unsigned long long call_stringize()
{
    return 19;
}


// Function: my_func at 0x400a54
unsigned int my_func(unsigned int a0)
{
    return (a0 * 10 | a0 * 5 >> 31) & 4294967294;
}


// Function: param_token_paste at 0x400a60
int param_token_paste(unsigned int a0)
{
    return a0 * 11 + 5;
}


// Function: call_token_paste at 0x400a70
unsigned long long call_token_paste()
{
    return 60;
}


// Function: param_variadic_macro at 0x400a78
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
    return a0 + 50;
}


// Function: call_variadic_macro at 0x400ab0
unsigned long long call_variadic_macro()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
    return 60;
}


// Function: param_macro_override at 0x400adc
int param_macro_override(unsigned int a0)
{
    return a0 * 3 + 1;
}


// Function: call_macro_override at 0x400ae8
unsigned long long call_macro_override()
{
    return 16;
}


// Function: param_include_guard at 0x400af0
unsigned long long param_include_guard()
{
    return 500;
}


// Function: call_include_guard at 0x400af8
unsigned long long call_include_guard()
{
    return 500;
}


// Function: param_builtin_macros at 0x400b00
int param_builtin_macros(unsigned int a0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:43");
    return a0 + 282;
}


// Function: call_builtin_macros at 0x400b50
unsigned long long call_builtin_macros()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:43");
    return 382;
}


// Function: test_preprocessing_features at 0x400b94
extern char g_401213;
extern char g_40122e;
extern char g_401249;
extern char g_401264;
extern char g_401283;
extern char g_40129f;
extern char g_4012c9;
extern char g_4012e4;
extern char g_4012ff;
extern char g_40131a;
extern char g_401336;
extern char g_401407;

int test_preprocessing_features()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_401407);
    printf(&g_401213, 64);
    printf(&g_40122e, 30);
    printf(&g_401249, 32);
    printf(&g_401264, 57122);
    printf(&g_401283, 116);
    printf(&g_40129f, 19);
    printf(&g_4012c9, 60);
    printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
    printf(&g_4012e4, 60);
    printf(&g_4012ff, 16);
    printf(&g_40131a, 500);
    printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:43");
    return printf(&g_401336, 382);
}


// Function: param_asm_basic at 0x400ca4
int param_asm_basic(unsigned int a0)
{
    return a0 + 10;
}


// Function: call_asm_basic at 0x400cac
unsigned long long call_asm_basic()
{
    return 15;
}


// Function: param_asm_clobber at 0x400cb4
unsigned long long param_asm_clobber(unsigned long a0, unsigned int a1)
{
    unsigned long v0;  // x9
    unsigned long long v1;  // x10
    unsigned long long v2;  // x8
    unsigned long long i;  // x11
    unsigned long long v5;  // d0
    unsigned int *ptr;  // x11
    unsigned long long j;  // x9

    if (a1 < 1)
        return 0;
    v0 = a1;
    if (8 > a1)
    {
        v1 = 0;
        v2 = 0;
    }
    else
    {
        v1 = v0 & 0xfffffff8;
        i = v1;
        do
        {
            i -= 8;
        } while (i != 8);
        v5 = [D] unsupported_Iop_ZeroHI96ofV128();
        if (v1 == v0)
            return v5 & 4294967295;
    }
    ptr = a0 + v1 * 4;
    j = v0 - v1;
    do
    {
        v2 += *(ptr);
        j -= 1;
        ptr += 1;
    } while (j != 1);
    return v2 & 4294967295;
}


// Function: call_asm_clobber at 0x400d3c
unsigned long long call_asm_clobber()
{
    return 15;
}


// Function: param_asm_multi_insn at 0x400d44
long long param_asm_multi_insn()
{
    void* v0;  // x0
    void* v1;  // x1
    unsigned long v2;  // x2
    unsigned long long dst;  // x0

    dst = memcpy(v0, v1, v2);
    return memcpy(v0, v1, v2);
}


// Function: call_asm_multi_insn at 0x400d48
unsigned long long call_asm_multi_insn()
{
    return 42;
}


// Function: param_asm_simd at 0x400d50
unsigned long long param_asm_simd(unsigned int *pos, unsigned int *index, unsigned int *ptr)
{
    *(ptr) = *(index) + *(pos);
    ptr[1] = index[1] + pos[1];
    ptr[2] = index[2] + pos[2];
    ptr[3] = index[3] + pos[3];
    return 0;
}


// Function: param_simd_intrinsics at 0x400d98
unsigned long long param_simd_intrinsics(unsigned int *pos, unsigned int *index, unsigned int *ptr)
{
    *(ptr) = *(index) + *(pos);
    ptr[1] = index[1] + pos[1];
    ptr[2] = index[2] + pos[2];
    ptr[3] = index[3] + pos[3];
    return 0;
}


// Function: call_asm_simd at 0x400de0
unsigned long long call_asm_simd()
{
    return 36;
}


// Function: param_asm_atomic at 0x400de8
int param_asm_atomic(unsigned long long a0, unsigned int a1)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return __aarch64_ldadd4_acq_rel(a1, a0) + a1;
}


// Function: param_atomic_c11 at 0x400e14
int param_atomic_c11(unsigned long long a0, unsigned int a1)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return __aarch64_ldadd4_acq_rel(a1, a0) + a1;
}


// Function: call_asm_atomic at 0x400e40
int call_asm_atomic()
{
    unsigned int v0;  // [bp-0x14]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    v0 = 10;
    return (int)__aarch64_ldadd4_acq_rel(5, &v0) + v0 + 5;
}


// Function: param_dynamic_code at 0x400e78
unsigned int param_dynamic_code(unsigned int a0)
{
    unsigned long v2;  // x20
    void* ptr;  // x0
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = sysconf(30);
    ptr = mmap(NULL, v2, 7, 34, -1, NULL);
    if ((char)arm64g_calculate_condition(2, ptr, 1, 0))
        return 4294967295;
    munmap(ptr, v2);
    return a0 + 5;
}


// Function: param_memory_protection at 0x400ee0
unsigned int param_memory_protection()
{
    unsigned long v2;  // x19
    unsigned int *p;  // x0
    unsigned int *ptr;  // x20
    unsigned int v5;  // w21
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = sysconf(30);
    p = mmap(NULL, v2, 3, 34, -1, NULL);
    if ((char)arm64g_calculate_condition(2, p, 1, 0))
        return 4294967295;
    ptr = p;
    *(p) = 42;
    if (mprotect())
    {
        v5 = 4294967294;
    }
    else
    {
        v5 = *(ptr);
        if (mprotect(ptr, v2, 3))
            v5 = 4294967293;
        else
            *(ptr) = 100;
    }
    munmap(ptr, v2);
    return v5;
}


// Function: param_clobber_importance at 0x400f90
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
    return ((a1 + a0) * 2 | a1 + a0 >> 31) & 4294967294;
}


// Function: call_asm_privileged at 0x400f9c
unsigned long long call_asm_privileged()
{
    unsigned long long v6;  // x30
    unsigned long long v7;  // x21
    unsigned long long v16;  // cc_dep2
    unsigned long long v8;  // x20
    unsigned long long v9;  // x19
    unsigned long v10;  // x20
    unsigned int v11;  // w21
    void* ptr;  // x19
    void* v13;  // cc_dep1
    unsigned long long v14;  // cc_op
    void* v15;  // cc_dep1
    char *v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v1 = v6;
    v2 = v7;
    v3 = v8;
    v4 = v9;
    v10 = sysconf(30);
    v11 = 4294967295;
    ptr = mmap(NULL, v10, 7, 34, -1, NULL);
    v13 = ptr;
    if (!((char)arm64g_calculate_condition(2, ptr, 1, 0)))
    {
        munmap(ptr, v10);
        v11 = 15;
    }
    if (param_memory_protection() == 42)
    {
        v14 = 4;
        v15 = ((char)arm64g_calculate_condition(2, v13, 1, 0) ? ptr : 0x40000000);
        v16 = ((char)arm64g_calculate_condition(2, v13, 1, 0) ? 18446744073709551615 : 0);
    }
    else
    {
        v14 = 0;
        v15 = ((char)arm64g_calculate_condition(2, v13, 1, 0) ? ptr : 0x40000000);
        v16 = ((char)arm64g_calculate_condition(2, v13, 1, 0) ? 18446744073709551615 : 0);
    }
    if (!((char)arm64g_calculate_condition(v14 | 16, v15, v16, 0)))
        return v11;
    return 77;
}


// Function: param_memory_clobber_demo at 0x40101c
extern unsigned int global_var;

int param_memory_clobber_demo()
{
    return global_var + 50;
}


// Function: test_asm_features at 0x40102c
extern char g_40135f;
extern char g_40137b;
extern char g_401397;
extern char g_4013b3;
extern char g_4013cf;
extern char g_4013eb;
extern char g_40142e;

int test_asm_features()
{
    unsigned long v4;  // x20
    unsigned int v5;  // w21
    void* ptr;  // x19
    void* v7;  // cc_dep1
    unsigned long long v8;  // cc_op
    void* v9;  // cc_dep1
    unsigned long long v10;  // cc_dep2
    unsigned long long v11;  // x1
    char *v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x14]
    char v2;  // [bp+0x0]

    v0 = &v2;
    puts(&g_40142e);
    printf(&g_40135f, 15);
    printf(&g_40137b, 15);
    printf(&g_401397, 42);
    printf(&g_4013b3, 36);
    v1 = 10;
    printf(&g_4013cf, (int)__aarch64_ldadd4_acq_rel(5, &v1) + v1 + 5);
    v4 = sysconf(30);
    v5 = 4294967295;
    ptr = mmap(NULL, v4, 7, 34, -1, NULL);
    v7 = ptr;
    if (!((char)arm64g_calculate_condition(2, ptr, 1, 0)))
    {
        munmap(ptr, v4);
        v5 = 15;
    }
    if (param_memory_protection() == 42)
    {
        v8 = 4;
        v9 = ((char)arm64g_calculate_condition(2, v7, 1, 0) ? ptr : 0x40000000);
        v10 = ((char)arm64g_calculate_condition(2, v7, 1, 0) ? 18446744073709551615 : 0);
    }
    else
    {
        v8 = 0;
        v9 = ((char)arm64g_calculate_condition(2, v7, 1, 0) ? ptr : 0x40000000);
        v10 = ((char)arm64g_calculate_condition(2, v7, 1, 0) ? 18446744073709551615 : 0);
    }
    if ((char)arm64g_calculate_condition(v8 | 16, v9, v10, 0))
        v11 = 77;
    else
        v11 = v5;
    return printf(&g_4013eb, v11);
}


// Function: main at 0x401130
unsigned int main()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_preprocessing_features();
    test_asm_features();
    return 0;
}


// Function: sub_40114c at 0x40114c
long long sub_40114c()
{
    unsigned long v0;  // x0

    v0 = __aarch64_ldadd4_acq_rel();
    return __aarch64_ldadd4_acq_rel();
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x401150
// Function: sub_401164 at 0x401164
long long sub_401164()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: _fini at 0x401180
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

