// Angr Decompilation of 7_clang_O0_no_g
// Platform: ARMEL

// Function: _init at 0x4004ac
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_4004b8 at 0x4004b8
extern unsigned int g_412008;

int sub_4004b8()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_412008;
}


// Function: _start at 0x400568
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_4005a0 at 0x4005a0
void sub_4005a0()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x4005ac
extern unsigned int g_412048;

int call_weak_fn()
{
    unsigned int v0;  // r0

    if (g_412048)
        goto LABEL_4005c4;
    return v0;
LABEL_4005c4:
    __gmon_start__(); /* do not return */
}


// Function: deregister_tm_clones at 0x4005d0
extern char __TMC_END__;
extern unsigned int g_412044;

int deregister_tm_clones()
{
    if (0)
        goto LABEL_4005f0;
    return &__TMC_END__;
LABEL_4005f0:
    if (g_412044)
        goto LABEL_400600;
    return &__TMC_END__;
LABEL_400600:
    goto g_412044;
}


// Function: register_tm_clones at 0x400614
extern char __TMC_END__;
extern unsigned int g_412050;

int register_tm_clones()
{
    if (0)
        goto LABEL_400640;
    return &__TMC_END__;
LABEL_400640:
    if (g_412050)
        goto LABEL_400650;
    return &__TMC_END__;
LABEL_400650:
    goto g_412050;
}


// Function: __do_global_dtors_aux at 0x400664
extern unsigned int __dso_handle;
extern char completed.0;
extern unsigned int g_412040;

unsigned int __do_global_dtors_aux()
{
    unsigned int v2;  // r0
    unsigned int v3;  // lr
    unsigned int v4;  // r4
    unsigned int v5;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (!completed.0)
        goto LABEL_400680;
    return v2;
LABEL_400680:
    v1 = v3;
    v0 = v4;
    if (!g_412040)
    {
        v5 = deregister_tm_clones();
        completed.0 = 1;
        return v5;
    }
    __cxa_finalize(__dso_handle); /* do not return */
}


// Function: frame_dummy at 0x4006cc
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: param_fake_branch at 0x4006d0
unsigned int param_fake_branch(unsigned int a0)
{
    char *v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]

    v1 = a0;
    if (!((char)armg_calculate_condition(193, a0 * a0, 1, 0)))
        v1 = 3735928559 + v1 * 2;
    v0 = "test";
    if (0 <= strlen(v0))
        return v1;
    v1 += 1000;
    return v1;
}


// Function: call_fake_branch at 0x400758
unsigned int call_fake_branch()
{
    unsigned int v0;  // r0

    v0 = param_fake_branch(10);
    return param_fake_branch(10);
}


// Function: param_opaque_predicate at 0x400770
unsigned int param_opaque_predicate(unsigned int a0)
{
    unsigned int v7;  // r0
    unsigned int v8;  // r1
    unsigned int result;  // [bp-0x28]
    unsigned int flag1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    unsigned int flag2;  // [bp-0x1c]
    unsigned int i;  // [bp-0x18]
    unsigned int flag3;  // [bp-0x14]
    unsigned int v6;  // [bp-0xc]

    v7 = a0 * a0 + a0 * 2 - (a0 + 1) * (a0 + 1) + 1;
    flag3 = v7 + -(v7) + (v7 <= 0);
    i = a0;
    for (flag2 = a0 + 1; flag2; i = v2)
    {
        v2 = flag2;
        __aeabi_idivmod(i, flag2);
        flag2 = v8;
    }
    flag1 = i - 1 + -(i - 1) + (i - 1 <= 0);
    result = 1;
    if (flag3 && flag1 && result)
    {
        v6 = 10 + a0 * 2;
        return v6;
    }
    v6 = a0 * 3 + 20;
    return v6;
}


// Function: call_opaque_predicate at 0x400878
unsigned int call_opaque_predicate()
{
    unsigned int v0;  // r0

    v0 = param_opaque_predicate(5);
    return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x400890
int param_instruction_substitution(unsigned int a0)
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0x8]

    v3 = a0 * 6;
    v2 = a0 >> 1;
    v1 = a0 & 15;
    v0 = a0 * 15;
    return v3 + v2 + v1 + v0;
}


// Function: call_instruction_substitution at 0x400900
unsigned int call_instruction_substitution()
{
    unsigned int v0;  // r0

    v0 = param_instruction_substitution(10);
    return param_instruction_substitution(10);
}


// Function: decrypt_string at 0x400918
char * decrypt_string(char *a0, char *a1, unsigned int n, char a3)
{
    char *cur;  // [bp-0x1c]

    strncpy(a1, a0, n);
    a1[1 + n] = 0;
    for (cur = a1; *(cur); cur += 1)
    {
        *(cur) = *(cur) ^ a3;
    }
    return a1;
}


// Function: param_string_encryption at 0x4009ac
extern char param_string_encryption.encrypted;

int param_string_encryption()
{
    char *v0;  // [bp-0x2c]
    char v1[32];  // [bp-0x28]

    v0 = &v1[0];
    decrypt_string(&param_string_encryption.encrypted, &v1, 32, 90);
    return strlen(v0) + (unsigned int)v1;
}


// Function: call_string_encryption at 0x4009f4
unsigned int call_string_encryption()
{
    unsigned int v0;  // r0

    v0 = param_string_encryption();
    return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x400a08
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0xc]

    v0 = (0 < a0 ? param_tail_call_optimized(a0 - 1, a1 + a0) : a1);
    return v0;
}


// Function: call_tail_call_optimized at 0x400a64
unsigned int call_tail_call_optimized()
{
    unsigned int v0;  // r0

    v0 = param_tail_call_optimized(1000, 0);
    return param_tail_call_optimized(1000, 0);
}


// Function: param_non_tail_call at 0x400a80
unsigned int param_non_tail_call(unsigned int a0)
{
    unsigned int v0;  // [bp-0xc]

    v0 = (0 < a0 ? a0 + param_non_tail_call(a0 - 1) : 0);
    return v0;
}


// Function: call_non_tail_call at 0x400ae0
unsigned int call_non_tail_call()
{
    unsigned int v0;  // r0

    v0 = param_non_tail_call(100);
    return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x400af8
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int ptr, unsigned int a3)
{
    unsigned int index;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int idx;  // [bp-0x14]

    for (idx = 0; a3 > idx; idx += 1)
    {
        *((int *)(ptr + idx * 4)) = *((int *)(a0 + idx * 4)) + *((int *)(a1 + idx * 4));
    }
    v1 = 0;
    for (index = 0; a3 > index; index += 1)
    {
        v1 += *((int *)(ptr + index * 4));
    }
    return v1;
}


// Function: call_vectorized_loop at 0x400bbc
unsigned int call_vectorized_loop()
{
    unsigned int v18;  // r0
    unsigned int flag2;  // [bp-0x70]
    char v1;  // [bp-0x6c]
    unsigned int v2;  // [bp-0x50]
    unsigned int v3;  // [bp-0x4c]
    unsigned int v4;  // [bp-0x48]
    unsigned int v5;  // [bp-0x44]
    unsigned int v6;  // [bp-0x40]
    unsigned int v7;  // [bp-0x3c]
    unsigned int v8;  // [bp-0x38]
    unsigned int flag1;  // [bp-0x34]
    unsigned int result;  // [bp-0x30]
    unsigned int v11;  // [bp-0x2c]
    unsigned int v12;  // [bp-0x28]
    unsigned int v13;  // [bp-0x24]
    unsigned int v14;  // [bp-0x20]
    unsigned int v15;  // [bp-0x1c]
    unsigned int v16;  // [bp-0x18]
    unsigned int v17;  // [bp-0x14]

    result = 1;
    v11 = 2;
    v12 = 3;
    v13 = 4;
    v14 = 5;
    v15 = 6;
    v16 = 7;
    v17 = 8;
    v2 = 8;
    v3 = 7;
    v4 = 6;
    v5 = 5;
    v6 = 4;
    v7 = 3;
    v8 = 2;
    flag1 = 1;
    memset(&v1, 0, 28);
    flag2 = 0;
    v18 = param_vectorized_loop(&result, &v2, &flag2, 8);
    return param_vectorized_loop(&result, &v2, &flag2, 8);
}


// Function: param_link_time_optimization at 0x400c4c
int param_link_time_optimization(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = lto_target_func(a0);
    return lto_target_func(a0);
}


// Function: lto_target_func at 0x400c70
int lto_target_func(unsigned int a0)
{
    return 10 + a0 * 2;
}


// Function: call_link_time_optimization at 0x400c8c
unsigned int call_link_time_optimization()
{
    unsigned int t;  // r0

    t = param_link_time_optimization(5);
    return param_link_time_optimization(5);
}


// Function: div_zero_handler at 0x400ca4
extern unsigned int div_zero_caught;
extern unsigned int jmp_buffer;

int div_zero_handler(unsigned int a0)
{
    unsigned int v2;  // lr
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = a0;
    div_zero_caught = 1;
    longjmp(&jmp_buffer, 1); /* do not return */
}


// Function: param_division_by_zero at 0x400cd8
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero(unsigned int a0)
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0xc]

    signal(8, div_zero_handler);
    if (_setjmp(&jmp_buffer))
    {
        v1 = 4294967295;
        return v1;
    }
    v0 = __divsi3(10, a0);
    v1 = v0;
    return v1;
}


// Function: call_division_by_zero at 0x400d50
int call_division_by_zero()
{
    sighandler_t result;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    v2 = param_division_by_zero(5);
    result = NULL;
    v1 = param_division_by_zero(0);
    signal(8, result);
    return v2 + v1;
}


// Function: segv_handler at 0x400d9c
extern unsigned int segv_buffer;
extern unsigned int segv_caught;

int segv_handler(unsigned int a0)
{
    unsigned int v2;  // lr
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = a0;
    segv_caught = 1;
    longjmp(&segv_buffer, 1); /* do not return */
}


// Function: param_null_pointer_deref at 0x400dd0
extern unsigned int segv_buffer;

unsigned int param_null_pointer_deref(unsigned int *ptr)
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0xc]

    signal(11, segv_handler);
    if (_setjmp(&segv_buffer))
    {
        v1 = 4294967295;
        return v1;
    }
    v0 = *(ptr);
    v1 = v0;
    return v1;
}


// Function: call_null_pointer_deref at 0x400e44
int call_null_pointer_deref()
{
    sighandler_t result;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3[1];  // [bp-0xc]

    *((unsigned int [1])v3) = 42;
    v2 = param_null_pointer_deref(&v3);
    result = NULL;
    v1 = param_null_pointer_deref(NULL);
    signal(11, result);
    return v2 + v1;
}


// Function: param_buffer_overflow_stack at 0x400e98
unsigned int param_buffer_overflow_stack(unsigned int a0)
{
    unsigned int v0;  // [bp-0x18]
    unsigned int i;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0xc]

    v2 = 305419896;
    for (i = 0; 16 >= i; i += 1)
    {
        *((char *)&v3 + i) = 65;
    }
    v0 = (v2 != 305419896 ? 4294967295 : a0);
    return v0;
}


// Function: param_buffer_overflow_heap at 0x400f24
unsigned int param_buffer_overflow_heap(unsigned int a0)
{
    unsigned int v0;  // [bp-0x18]
    void* ptr;  // [bp-0x14]
    unsigned int v2;  // [bp-0xc]

    ptr = malloc(16);
    if (!ptr)
    {
        v2 = 4294967294;
        return v2;
    }
    for (v0 = 0; 32 >= v0; v0 += 1)
    {
        *((char *)ptr + v0) = 66;
    }
    free(ptr);
    v2 = a0;
    return v2;
}


// Function: call_buffer_overflow at 0x400fc0
int call_buffer_overflow()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v1 = param_buffer_overflow_stack(10);
    v0 = param_buffer_overflow_heap(20);
    return v1 + v0;
}


// Function: param_integer_overflow at 0x400ffc
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0x4]

    v1 = a0 + a1;
    v0 = a0 + a1;
    if (a0 >= 1 && a1 >= 1 && !((char)armg_calculate_condition(193, v1, 1, 0)))
    {
        v2 = 4294967295;
        return v2;
    }
    if (!((char)armg_calculate_condition(193, a0, 1, 0)) && !((char)armg_calculate_condition(193, a1, 1, 0)) && v1 >= 1)
    {
        v2 = 4294967294;
        return v2;
    }
    v2 = v0;
    return v2;
}


// Function: call_integer_overflow at 0x4010c8
int call_integer_overflow()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]

    v1 = param_integer_overflow(0x3b9aca00, 0x3b9aca00);
    v0 = param_integer_overflow(4294967295, 1);
    return v1 + v0;
}


// Function: param_undefined_behavior at 0x401110
unsigned int param_undefined_behavior(unsigned int a0)
{
    return a0 * 2;
}


// Function: call_undefined_behavior at 0x401130
unsigned int call_undefined_behavior()
{
    unsigned int v0;  // [bp-0xc]

    v0 = param_undefined_behavior(5);
    return v0;
}


// Function: param_implementation_defined at 0x401158
unsigned int param_implementation_defined()
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    char v2;  // [bp-0x5]
    unsigned int v3;  // [bp-0x4]

    v3 = 0;
    v2 = 255;
    v3 += (armg_calculate_condition(66, (unsigned int)v2, 0, 0) ? 1 : 2);
    v1 = 0xfffffff8;
    v3 += v1 >> 1;
    v0 |= 7;
    v0 |= 248;
    v0 = (char)v0 | 0x12345600;
    v3 += (v0 & 7) + (31 & v0 >> 3);
    v3 += 8;
    return v3;
}


// Function: call_implementation_defined at 0x401204
unsigned int call_implementation_defined()
{
    unsigned int v0;  // r0

    v0 = param_implementation_defined();
    return param_implementation_defined();
}


// Function: test_obf_opt_edge at 0x401218
extern char g_4016a5;
extern char g_4016d3;
extern char g_4016ef;
extern char g_40170b;
extern char g_401728;
extern char g_401744;
extern char g_40176e;
extern char g_401793;
extern char g_4017b9;
extern char g_4017d9;
extern char g_4017f5;
extern char g_401812;
extern char g_40182f;
extern char g_401860;
extern char g_40187d;

int test_obf_opt_edge()
{
    unsigned int v13;  // r0
    unsigned int v14;  // r0

    printf(&g_4016a5);
    printf(&g_4016d3, call_fake_branch());
    printf(&g_4016ef, call_opaque_predicate());
    printf(&g_40170b, call_instruction_substitution());
    printf(&g_401728, call_string_encryption());
    printf(&g_401744, call_tail_call_optimized());
    printf(&g_40176e, call_non_tail_call());
    printf(&g_401793, call_vectorized_loop());
    printf(&g_4017b9, call_link_time_optimization());
    printf(&g_4017d9, call_division_by_zero());
    printf(&g_4017f5, call_null_pointer_deref());
    printf(&g_401812, call_buffer_overflow());
    printf(&g_40182f, call_integer_overflow());
    printf(&g_401860, call_undefined_behavior());
    v13 = call_implementation_defined();
    v14 = printf(&g_40187d, v13);
    return printf(&g_40187d, v13);
}


// Function: main at 0x401388
unsigned int main()
{
    unsigned int result;  // [bp-0x10]
    unsigned int flag1;  // [bp-0xc]

    result = 0;
    flag1 = 0;
    test_obf_opt_edge();
    return result;
}


// Function: __divsi3 at 0x4013b4
int __divsi3(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r0

    if (a1)
    {
        v0 = .divsi3_skip_div0_test();
        return .divsi3_skip_div0_test();
    }
    if (armg_calculate_condition(194, a0, 0, 0))
    {
        if (!armg_calculate_condition(178, a0, 0, 0))
            goto LABEL_4015ce;
LABEL_4015cd:
    }
    else
    {
LABEL_4015ca:
        if (armg_calculate_condition(178, a0, 0, 0))
            goto LABEL_4015cd;
LABEL_4015ce:
    }
    goto LABEL_4015ca;
}


// Function: .divsi3_skip_div0_test at 0x4013bc
extern char g_4013f4;

unsigned int .divsi3_skip_div0_test(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
    unsigned int v3;  // r12
    unsigned int v4;  // cc_op
    unsigned int v13;  // r2
    unsigned int v14;  // r2
    unsigned int v15;  // cc_dep1
    unsigned int v5;  // cc_dep1
    unsigned int v6;  // cc_dep2
    unsigned int v7;  // cc_ndep
    unsigned int v9;  // r3
    unsigned int cur;  // r3
    unsigned int v11;  // cc_dep1
    unsigned int v12;  // cc_dep2

    v3 = a0 ^ a1;
    if (armg_calculate_condition(v4 | 64, v5, v6, v7))
        a1 = -(a1);
    if (a0 >> 31 == 1)
        v9 = -(a0);
    else
        v9 = a0;
    cur = v9;
    v11 = cur;
    v12 = a1;
    if (cur <= a1)
        a0 = (armg_calculate_condition(50, v11, v12, 0) ? 0 : a0);
    if ((a1 & a1 - 1))
    {
        v13 = (!a1 ? 32 : Clz(a1)) - (!cur ? 32 : Clz(cur));
        v14 = 31 - v13;
        v11 = 31;
        v12 = v13;
        vvar_783{r68|4b} = &g_4013f4;
        if (v13 != 31)
            v14 *= 3;
    }
    else
    {
        v14 = (!a1 ? 32 : Clz(a1));
        v14 = 31 - v14;
        v12 = 0;
        v15 = v3;
        a0 = cur >> ((char)v14 & 31) & (v14 & 255) - 32 >> 31;
    }
}


// Function: __aeabi_idivmod at 0x4015d4
int __aeabi_idivmod(unsigned int a0, unsigned int a1)
{
}


// Function: __aeabi_ldiv0 at 0x4015f4
int __aeabi_ldiv0(unsigned int a0, unsigned int a1)
{
    unsigned int v2;  // lr
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = a1;
}


// Function: _fini at 0x401604
int _fini(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v2;  // lr
    unsigned int v3;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = a3;
    v3 = sub_401608();
    return sub_401608();
}


// Function: sub_401608 at 0x401608
int sub_401608(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0;
}

