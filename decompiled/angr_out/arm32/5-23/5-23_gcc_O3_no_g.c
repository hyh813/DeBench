// Angr Decompilation of 5-23_gcc_O3_no_g
// Platform: ARMEL

// Function: _init at 0x1042c
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_10438 at 0x10438
extern unsigned int g_23008;

int sub_10438()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_23008;
}


// Function: main at 0x104c4
unsigned int main()
{
    unsigned int v2;  // r0
    unsigned int v3;  // r1
    unsigned int v4;  // r2
    unsigned int v5;  // r3
    char v0;  // [bp-0x8]
    char v1;  // [bp-0x4]

    v2 = test_preprocessing_features();
    test_asm_features(v2, v3, v4, v5, *((int *)&v0), *((int *)&v1));
    return 0;
}


// Function: _start at 0x104d8
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_10510 at 0x10510
void sub_10510()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x1051c
extern unsigned int g_23034;

int call_weak_fn()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    if (g_23034)
        goto LABEL_10534;
    return v0;
LABEL_10534:
    v1 = __gmon_start__();
    return __gmon_start__();
}


// Function: deregister_tm_clones at 0x10540
extern char __TMC_END__;

int deregister_tm_clones()
{
    if (!(1))
        goto LABEL_10550;
    return 143432;
LABEL_10550:
    if (!(1))
        goto LABEL_1055c;
    return 143432;
LABEL_1055c:
}


// Function: register_tm_clones at 0x1056c
extern char __TMC_END__;

int register_tm_clones()
{
    if (0)
        goto LABEL_10588;
    return 143432;
LABEL_10588:
    if (!(1))
        goto LABEL_10594;
    return 143432;
LABEL_10594:
}


// Function: __do_global_dtors_aux at 0x105a4
extern char __TMC_END__;

unsigned int __do_global_dtors_aux(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // r0

    if (!__TMC_END__)
        goto LABEL_105b8;
    return a0;
LABEL_105b8:
    v0 = deregister_tm_clones();
    __TMC_END__ = 1;
    return v0;
}


// Function: frame_dummy at 0x105cc
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: param_macro_constants at 0x105d0
unsigned int param_macro_constants(unsigned int a0)
{
    unsigned int v1;  // r0

    if (a0 <= 0x400)
    {
        v1 = 0x200;
        if (!armg_calculate_condition(194, a0, 0x400, 0))
            return v1;
    }
    else if (!armg_calculate_condition(194, v1, 0x400, 0))
    {
        return a0;
    }
    return 64;
}


// Function: call_macro_constants at 0x105e0
unsigned int call_macro_constants()
{
    return 64;
}


// Function: param_macro_functions at 0x105e8
int param_macro_functions(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r1

    if (a1 <= a0)
        v0 = a0;
    else
        v0 = a1;
    return v0 + a0 * a0;
}


// Function: call_macro_functions at 0x10600
unsigned int call_macro_functions()
{
    return 30;
}


// Function: param_conditional_compile at 0x10608
int param_conditional_compile(unsigned int a0)
{
    return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x10614
unsigned int call_conditional_compile()
{
    return 32;
}


// Function: param_multi_branch_compile at 0x1061c
int param_multi_branch_compile(unsigned int a0)
{
    return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x1062c
unsigned int call_multi_branch_compile()
{
    return 57122;
}


// Function: param_macro_recursion at 0x10638
int param_macro_recursion(unsigned int a0)
{
    return a0 + 16;
}


// Function: call_macro_recursion at 0x10640
unsigned int call_macro_recursion()
{
    return 116;
}


// Function: param_stringize at 0x10648
unsigned int param_stringize()
{
    return 19;
}


// Function: call_stringize at 0x10650
unsigned int call_stringize()
{
    return 19;
}


// Function: my_func at 0x10658
unsigned int my_func(unsigned int a0)
{
    return a0 * 10;
}


// Function: param_token_paste at 0x10664
int param_token_paste(unsigned int a0)
{
    return a0 + 5 + a0 * 10;
}


// Function: call_token_paste at 0x10674
unsigned int call_token_paste()
{
    return 60;
}


// Function: param_variadic_macro at 0x1067c
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
    __printf_chk(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
    return a0 + 50;
}


// Function: call_variadic_macro at 0x106b0
unsigned int call_variadic_macro()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
    return 60;
}


// Function: param_macro_override at 0x106e4
int param_macro_override(unsigned int a0)
{
    return a0 * 3 + 1;
}


// Function: call_macro_override at 0x106f0
unsigned int call_macro_override()
{
    return 16;
}


// Function: param_include_guard at 0x106f8
unsigned int param_include_guard()
{
    return 500;
}


// Function: call_include_guard at 0x10700
unsigned int call_include_guard()
{
    return 500;
}


// Function: param_builtin_macros at 0x10708
int param_builtin_macros(unsigned int a0)
{
    __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:08");
    return a0 + 282;
}


// Function: call_builtin_macros at 0x10768
unsigned int call_builtin_macros()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:08");
    return 382;
}


// Function: test_preprocessing_features at 0x107c4
extern char g_11dbc;
extern char g_11de4;
extern char g_11e00;
extern char g_11e1c;
extern char g_11e38;
extern char g_11e58;
extern char g_11e74;
extern char g_11ea0;
extern char g_11ebc;
extern char g_11ed8;
extern char g_11ef4;
extern char g_11f10;

int test_preprocessing_features()
{
    unsigned int v0;  // r0

    __printf_chk(1, 0x11dbc);
    __printf_chk(1, 0x11de4, 64);
    __printf_chk(1, 0x11e00, 30);
    __printf_chk(1, 0x11e1c, 32);
    __printf_chk(1, 0x11e38, 57122);
    __printf_chk(1, 0x11e58, 116);
    __printf_chk(1, 0x11e74, 19);
    __printf_chk(1, 0x11ea0, 60);
    __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
    __printf_chk(1, 0x11ebc, 60);
    __printf_chk(1, 0x11ed8, 16);
    __printf_chk(1, 0x11ef4, 500);
    __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:08");
    v0 = __printf_chk(1, 0x11f10, 382);
    return __printf_chk(1, 0x11f10, 382);
}


// Function: param_asm_basic at 0x10928
int param_asm_basic(unsigned int a0)
{
    return a0 + 10;
}


// Function: call_asm_basic at 0x10930
unsigned int call_asm_basic()
{
    return 15;
}


// Function: param_asm_clobber at 0x10938
unsigned int param_asm_clobber(unsigned int *a0, unsigned int a1)
{
    unsigned int v0;  // r0
    unsigned int *v1;  // r3
    unsigned int *i;  // r3
    unsigned int v3;  // r0
    unsigned int *ptr;  // r3
    unsigned int *v5;  // r3
    unsigned int v6;  // r0

    v0 = 0;
    if (a1 > 0)
        goto LABEL_10948;
    return 0;
LABEL_10948:
    v1 = a0 + 1;
    i = v1;
    do
    {
        v3 = v0;
        v5 = i + 1;
        v6 = v3 + i[1];
        i = v5;
        v0 = v6;
    } while (&v1[a1] != i);
    return v3 + ptr[1];
}


// Function: call_asm_clobber at 0x10964
unsigned int call_asm_clobber()
{
    return 15;
}


// Function: param_asm_multi_insn at 0x1096c
int param_asm_multi_insn()
{
    void* v0;  // r0
    void* v1;  // r1
    unsigned int v2;  // r2
    unsigned int dst;  // r0

    dst = memcpy(v0, v1, v2);
    return memcpy(v0, v1, v2);
}


// Function: call_asm_multi_insn at 0x10970
unsigned int call_asm_multi_insn()
{
    return 42;
}


// Function: param_asm_simd at 0x10978
unsigned int param_asm_simd(unsigned int *index, unsigned int *pos, unsigned int *ptr)
{
    *(ptr) = *(pos) + *(index);
    ptr[1] = index[1] + pos[1];
    ptr[2] = index[2] + pos[2];
    ptr[3] = index[3] + pos[3];
    return 0;
}


// Function: param_simd_intrinsics at 0x109c8
unsigned int param_simd_intrinsics(unsigned int *index, unsigned int *pos, unsigned int *ptr)
{
    *(ptr) = *(pos) + *(index);
    ptr[1] = index[1] + pos[1];
    ptr[2] = index[2] + pos[2];
    ptr[3] = index[3] + pos[3];
    return 0;
}


// Function: call_asm_simd at 0x10a18
unsigned int call_asm_simd()
{
    return 36;
}


// Function: param_asm_atomic at 0x10a20
int param_asm_atomic(unsigned int a0, unsigned int a1)
{
    return __sync_fetch_and_add_4() + a1;
}


// Function: param_atomic_c11 at 0x10a34
int param_atomic_c11(unsigned int a0, unsigned int a1)
{
    return __sync_fetch_and_add_4() + a1;
}


// Function: call_asm_atomic at 0x10a48
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int call_asm_atomic()
{
    unsigned int v3;  // lr
    unsigned int v4;  // r0
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x4]

    v2 = v3;
    v1 = GLIBC_2.4::__stack_chk_guard;
    v0 = 10;
    v4 = __sync_fetch_and_add_4(&v0, 5, 0, 10, 10, GLIBC_2.4::__stack_chk_guard);
    if ((v1 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    return v4 + 5 + v0;
}


// Function: param_dynamic_code at 0x10aa8
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


// Function: param_memory_protection at 0x10b08
unsigned int param_memory_protection()
{
    unsigned int v0;  // r5
    unsigned int *ptr;  // r4
    unsigned int v2;  // r6

    v0 = sysconf(30);
    ptr = mmap(NULL, v0, 3, 34, -1, NULL);
    if (ptr == 0xffffffff)
        return 4294967295;
    *(ptr) = 42;
    if (mprotect())
    {
        munmap(ptr, v0);
        return 4294967294;
    }
    v2 = *(ptr);
    if (mprotect(ptr, v0, 3))
    {
        munmap(ptr, v0);
        return 4294967293;
    }
    *(ptr) = 100;
    munmap(ptr, v0);
    return v2;
}


// Function: param_clobber_importance at 0x10bd4
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
    return (a0 + a1) * 2;
}


// Function: call_asm_privileged at 0x10be0
unsigned int call_asm_privileged()
{
    unsigned int v0;  // r5
    void* ptr;  // r0
    unsigned int v2;  // r0

    v0 = sysconf(30);
    ptr = mmap(NULL, v0, 7, 34, -1, NULL);
    if (ptr == 0xffffffff)
    {
        param_memory_protection();
        return 4294967295;
    }
    munmap(ptr, v0);
    v2 = param_memory_protection();
    if (v2 != 42)
    {
        if (!armg_calculate_condition(2, v2, 42, 0))
            return 15;
    }
    else
    {
        if (!armg_calculate_condition(2, v2, 42, 0))
            return 42;
    }
    return 77;
}


// Function: param_memory_clobber_demo at 0x10c4c
extern unsigned int global_var;

int param_memory_clobber_demo()
{
    return global_var + 50;
}


// Function: test_asm_features at 0x10c60
extern unsigned int GLIBC_2.4::__stack_chk_guard;
extern char g_11f3c;
extern char g_11f68;
extern char g_11f84;
extern char g_11fa0;
extern char g_11fbc;
extern char g_11fd8;

int test_asm_features()
{
    unsigned int v4;  // r5
    void* ptr;  // r0
    unsigned int v6;  // r0
    unsigned int v7;  // r2
    unsigned int v8;  // r0
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]

    v1 = GLIBC_2.4::__stack_chk_guard;
    __printf_chk(1, 0x11f3c);
    __printf_chk(1, 0x11f68, 15);
    __printf_chk(1, 0x11f84, 15);
    __printf_chk(1, 0x11fa0, 42);
    __printf_chk(1, 0x11fbc, call_asm_simd());
    v0 = 10;
    __printf_chk(1, 0x11fd8, __sync_fetch_and_add_4(&v0, 5) + 5 + v0);
    v4 = sysconf(30);
    ptr = mmap(NULL, v4, 7, 34, -1, NULL);
    if (ptr != 0xffffffff)
    {
        munmap(ptr, v4);
        v6 = param_memory_protection();
        if (v6 != 42)
        {
            v7 = 15;
            if (!armg_calculate_condition(2, v6, 42, 0))
                goto LABEL_10d42;
LABEL_10d41:
            v7 = 77;
        }
        else
        {
            if (armg_calculate_condition(2, v6, 42, 0))
                goto LABEL_10d41;
LABEL_10d42:
        }
    }
    else
    {
        param_memory_protection();
        v7 = 4294967295;
    }
    if ((v1 ^ GLIBC_2.4::__stack_chk_guard))
        __stack_chk_fail(); /* do not return */
    v8 = __printf_chk(1, "ASM-L4-06: %", v7);
    return __printf_chk(1, "ASM-L4-06: %", v7);
}


// Function: __sync_fetch_and_add_4 at 0x10da4
int __sync_fetch_and_add_4()
{
    unsigned int *v0;  // r0

    do
    { } while (4294905792());
    return *(v0);
}


// Function: __sync_fetch_and_sub_4 at 0x10ddc
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_or_4 at 0x10e14
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_and_4 at 0x10e4c
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_xor_4 at 0x10e84
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_nand_4 at 0x10ebc
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_fetch_and_add_2 at 0x10ef8
int __sync_fetch_and_add_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_2 at 0x10f58
int __sync_fetch_and_sub_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_2 at 0x10fb8
int __sync_fetch_and_or_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_2 at 0x11018
int __sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_2 at 0x11078
int __sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_2 at 0x110d8
int __sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_add_1 at 0x1113c
int __sync_fetch_and_add_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_1 at 0x11198
int __sync_fetch_and_sub_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_1 at 0x111f4
int __sync_fetch_and_or_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_1 at 0x11250
int __sync_fetch_and_and_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_1 at 0x112ac
int __sync_fetch_and_xor_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_1 at 0x11308
int __sync_fetch_and_nand_1(unsigned int a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_add_and_fetch_4 at 0x11368
int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) + a1;
}


// Function: __sync_sub_and_fetch_4 at 0x113a0
int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) - a1;
}


// Function: __sync_or_and_fetch_4 at 0x113d8
unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) | a1;
}


// Function: __sync_and_and_fetch_4 at 0x11410
unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) & a1;
}


// Function: __sync_xor_and_fetch_4 at 0x11448
int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0) ^ a1;
}


// Function: __sync_nand_and_fetch_4 at 0x11480
unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return ~(*(a0) & a1);
}


// Function: __sync_add_and_fetch_2 at 0x114bc
unsigned int __sync_add_and_fetch_2(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_sub_and_fetch_2 at 0x11524
unsigned int __sync_sub_and_fetch_2(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_or_and_fetch_2 at 0x1158c
unsigned int __sync_or_and_fetch_2(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_and_and_fetch_2 at 0x115f4
unsigned int __sync_and_and_fetch_2(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_xor_and_fetch_2 at 0x1165c
unsigned int __sync_xor_and_fetch_2(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_nand_and_fetch_2 at 0x116c4
unsigned int __sync_nand_and_fetch_2(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_add_and_fetch_1 at 0x11730
unsigned int __sync_add_and_fetch_1(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_sub_and_fetch_1 at 0x11794
unsigned int __sync_sub_and_fetch_1(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_or_and_fetch_1 at 0x117f8
unsigned int __sync_or_and_fetch_1(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_and_and_fetch_1 at 0x1185c
unsigned int __sync_and_and_fetch_1(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_xor_and_fetch_1 at 0x118c0
unsigned int __sync_xor_and_fetch_1(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_nand_and_fetch_1 at 0x11924
unsigned int __sync_nand_and_fetch_1(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r5
    unsigned int v1;  // r0

    v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
    do
    {
        v1 = *((int *)(a0 & 0xfffffffc));
    } while (4294905792());
    return ...;
}


// Function: __sync_val_compare_and_swap_4 at 0x1198c
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
    while (*(a0) == i)
    {
        if (!4294905792())
            return i;
    }
    return *(a0);
}


// Function: __sync_val_compare_and_swap_2 at 0x119dc
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
    while (((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (65535 & a1))
    {
        if (!4294905792())
            return a1;
    }
    return (65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 65535;
}


// Function: __sync_val_compare_and_swap_1 at 0x11a54
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
    while (((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31) == (a1 & 255))
    {
        if (!4294905792())
            return a1;
    }
    return (255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 255;
}


// Function: __sync_bool_compare_and_swap_4 at 0x11ac8
unsigned int __sync_bool_compare_and_swap_4(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int v4;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    v4 = 4294905792();
    return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_bool_compare_and_swap_2 at 0x11af4
unsigned int __sync_bool_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int v4;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    v4 = a1 - __sync_val_compare_and_swap_2(a0, a1, a2);
    return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_bool_compare_and_swap_1 at 0x11b10
unsigned int __sync_bool_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int v4;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    v4 = a1 - __sync_val_compare_and_swap_1(a0, a1, a2);
    return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_synchronize at 0x11b2c
int __sync_synchronize()
{
}


// Function: __sync_lock_test_and_set_4 at 0x11b38
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
    do
    { } while (4294905792());
    return *(a0);
}


// Function: __sync_lock_test_and_set_2 at 0x11b70
unsigned int __sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
    char v0;  // r9

    v0 = (char)a0 * 8 & 24;
    do
    { } while (4294905792());
    return (65535 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 65535;
}


// Function: __sync_lock_test_and_set_1 at 0x11bd0
unsigned int __sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
    char v0;  // r9

    v0 = (char)a0 * 8 & 24;
    do
    { } while (4294905792());
    return (255 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 255;
}


// Function: __sync_lock_release_8 at 0x11c2c
void __sync_lock_release_8(unsigned int *ptr)
{
    4294905760();
    *(ptr) = 0;
    ptr[1] = 0;
    return;
}


// Function: __sync_lock_release_4 at 0x11c50
void __sync_lock_release_4(unsigned int *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: __sync_lock_release_2 at 0x11c70
void __sync_lock_release_2(unsigned short *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: __sync_lock_release_1 at 0x11c90
void __sync_lock_release_1(char *ptr)
{
    4294905760();
    *(ptr) = 0;
    return;
}


// Function: _fini at 0x11cb0
int _fini()
{
    unsigned int v0;  // r0

    return v0;
}

