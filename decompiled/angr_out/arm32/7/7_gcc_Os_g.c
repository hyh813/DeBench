// Angr Decompilation of 7_gcc_Os_g
// Platform: ARMEL

// Function: _init at 0x10508
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_10514 at 0x10514
extern unsigned int g_22008;

int sub_10514()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_22008;
}


// Function: main at 0x105dc
unsigned int main()
{
    test_obf_opt_edge();
    return 0;
}


// Function: _start at 0x105ec
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_10624 at 0x10624
void sub_10624()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x10630
extern unsigned int g_22048;

int call_weak_fn()
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    if (g_22048)
        goto LABEL_10648;
    return v0;
LABEL_10648:
    v1 = __gmon_start__();
    return __gmon_start__();
}


// Function: deregister_tm_clones at 0x10654
extern char __TMC_END__;

int deregister_tm_clones()
{
    if (!(1))
        goto LABEL_10664;
    return 139360;
LABEL_10664:
    if (!(1))
        goto LABEL_10670;
    return 139360;
LABEL_10670:
}


// Function: register_tm_clones at 0x10680
extern char __TMC_END__;

int register_tm_clones()
{
    if (0)
        goto LABEL_1069c;
    return 139360;
LABEL_1069c:
    if (!(1))
        goto LABEL_106a8;
    return 139360;
LABEL_106a8:
}


// Function: __do_global_dtors_aux at 0x106b8
extern char __TMC_END__;

unsigned int __do_global_dtors_aux(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int v0;  // r0

    if (!__TMC_END__)
        goto LABEL_106cc;
    return a0;
LABEL_106cc:
    v0 = deregister_tm_clones();
    __TMC_END__ = 1;
    return v0;
}


// Function: frame_dummy at 0x106e0
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: div_zero_handler at 0x106e4
extern unsigned int div_zero_caught;
extern unsigned int jmp_buffer;

int div_zero_handler()
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    div_zero_caught = 1;
    __longjmp_chk(0x22070, 1); /* do not return */
}


// Function: segv_handler at 0x106fc
extern unsigned int segv_buffer;
extern unsigned int segv_caught;

int segv_handler()
{
    unsigned int v2;  // lr
    unsigned int v3;  // r4
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = v3;
    segv_caught = 1;
    __longjmp_chk(0x22200, 1); /* do not return */
}


// Function: param_fake_branch at 0x10718
int param_fake_branch()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: call_fake_branch at 0x1071c
unsigned int call_fake_branch()
{
    return 10;
}


// Function: param_opaque_predicate at 0x10724
unsigned int param_opaque_predicate(unsigned int a0)
{
    unsigned int v6;  // lr
    unsigned int v7;  // r8
    unsigned int flag2;  // r0
    unsigned int v17;  // r1
    unsigned int result;  // r5
    unsigned int v19;  // r6
    unsigned int v8;  // r7
    unsigned int v9;  // r6
    unsigned int v10;  // r5
    unsigned int v11;  // r4
    unsigned int v12;  // r7
    unsigned int v13;  // r5
    unsigned int v14;  // r6
    unsigned int flag1;  // r7
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0xc]
    unsigned int v4;  // [bp-0x8]
    unsigned int v5;  // [bp-0x4]

    v5 = v6;
    v4 = v7;
    v3 = v8;
    v2 = v9;
    v1 = v10;
    v0 = v11;
    v12 = a0 + 1;
    v13 = a0 * a0 + a0 * 2 + 1 - v12 * v12;
    v14 = a0 * 2;
    flag1 = v12;
    flag1 = a0;
    while (true)
    {
        flag2 = flag1;
        if (!flag1)
            break;
        __aeabi_idivmod();
        flag1 = v17;
    }
    if (flag2 != 1)
    {
        result = 0;
        if (!armg_calculate_condition(2, flag2, 1, 0))
            goto LABEL_10762;
LABEL_10761:
        result &= 1;
    }
    else
    {
        result = (!v13 ? 32 : Clz(v13)) >> 5;
        if (armg_calculate_condition(2, flag2, 1, 0))
            goto LABEL_10761;
LABEL_10762:
    }
    if (!result)
    {
        v19 = v14 + a0;
        if (!armg_calculate_condition(18, result, 0, 0))
            goto LABEL_1076e;
LABEL_1076d:
        if (!armg_calculate_condition(2, result, 0, 0))
            return v19 + 10;
    }
    else
    {
        v19 = v14;
        if (armg_calculate_condition(18, result, 0, 0))
            goto LABEL_1076d;
LABEL_1076e:
        if (!armg_calculate_condition(2, result, 0, 0))
            return flag2;
    }
    return v19 + 20;
}


// Function: call_opaque_predicate at 0x1078c
unsigned int call_opaque_predicate()
{
    unsigned int v0;  // r0

    v0 = param_opaque_predicate(5);
    return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x10794
int param_instruction_substitution(unsigned int a0)
{
    return a0 * 6 + (a0 >> 1) + (a0 & 15) + a0 * 15;
}


// Function: call_instruction_substitution at 0x107b4
unsigned int call_instruction_substitution()
{
    return 225;
}


// Function: decrypt_string at 0x107bc
void* decrypt_string(char *a0, void* a1, unsigned int n, char a3)
{
    void* cur;  // r1
    unsigned int result;  // r2

    strncpy(a1, a0, n);
    *(-1 + (char *)a1 + n) = 0;
    cur = a1 - 1;
    while (true)
    {
        result = (char)cur[1];
        cur += 1;
        if (!result)
            break;
        *((char *)cur) = (char)result ^ a3;
    }
    return a1;
}


// Function: param_string_encryption at 0x10808
extern unsigned int GLIBC_2.4::__stack_chk_guard;
extern char encrypted.0;

int param_string_encryption()
{
    unsigned int v3;  // lr
    unsigned int len;  // r0
    char v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x4]

    v2 = v3;
    v1 = GLIBC_2.4::__stack_chk_guard;
    decrypt_string(0x22058, &v0, 32, 90);
    len = strlen(&v0);
    if (!(v1 ^ GLIBC_2.4::__stack_chk_guard))
        return v0 + len;
    __stack_chk_fail(); /* do not return */
}


// Function: call_string_encryption at 0x10870
unsigned int call_string_encryption()
{
    unsigned int v0;  // r0

    v0 = param_string_encryption();
    return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x10874
unsigned int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
    while (true)
    {
        if (a0 > 0)
            goto LABEL_10884;
        return a1;
LABEL_10884:
        a1 += a0;
        a0 -= 1;
    }
}


// Function: call_tail_call_optimized at 0x10890
unsigned int call_tail_call_optimized()
{
    return 500500;
}


// Function: param_non_tail_call at 0x1089c
unsigned int param_non_tail_call(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = 0;
    while (true)
    {
        if (a0 > 0)
            goto LABEL_108ac;
        return v0;
LABEL_108ac:
        v0 += a0;
        a0 -= 1;
    }
}


// Function: call_non_tail_call at 0x108b8
unsigned int call_non_tail_call()
{
    unsigned int v0;  // r0

    v0 = param_non_tail_call(100);
    return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x108c0
unsigned int param_vectorized_loop(unsigned int a0, unsigned int a1, unsigned int ptr, unsigned int a3)
{
    unsigned int idx;  // r12
    unsigned int v3;  // r1
    unsigned int v12;  // r1
    unsigned int v4;  // r0
    unsigned int v5;  // lr
    unsigned int v6;  // r4
    unsigned int v7;  // r1
    unsigned int v8;  // r0
    unsigned int pos;  // r1
    unsigned int v10;  // r1
    unsigned int index;  // r1
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    idx = 0;
    if (a3 <= 0)
    {
        v3 = 0;
        if (!armg_calculate_condition(162, 0, a3, 0))
            goto LABEL_108ce;
LABEL_108cd:
        v4 = v3;
        if ((char)armg_calculate_condition(162, 0, a3, 0))
            goto LABEL_10920;
    }
    else
    {
        v3 = a1;
        if (armg_calculate_condition(162, 0, a3, 0))
            goto LABEL_108cd;
LABEL_108ce:
        v4 = a0;
        if ((char)armg_calculate_condition(162, 0, a3, 0))
        {
            while (true)
            {
LABEL_10920:
                index = v3;
                if (index >= a3)
                    break;
                v12 = index + 1;
                v4 += *((int *)(ptr + index * 4));
                v3 = v12;
            }
            return v4;
        }
    }
    v1 = v5;
    v0 = v6;
    do
    {
        *((int *)(ptr + idx * 4)) = *((int *)(v4 + idx * 4)) + *((int *)(v3 + idx * 4));
        idx += 1;
    } while (idx < a3);
    v7 = 0;
    v8 = 0;
    while (true)
    {
        pos = v7;
        if (a3 > pos)
            goto LABEL_10904;
        return v8;
LABEL_10904:
        v10 = pos + 1;
        v8 += *((int *)(ptr + pos * 4));
        v7 = v10;
    }
}


// Function: call_vectorized_loop at 0x1092c
extern unsigned int GLIBC_2.4::__stack_chk_guard;

unsigned int call_vectorized_loop()
{
    unsigned int v19;  // lr
    unsigned int v20;  // r0
    unsigned int result;  // [bp-0x6c]
    unsigned int v1;  // [bp-0x68]
    unsigned int v2;  // [bp-0x64]
    unsigned int v3;  // [bp-0x60]
    unsigned int v4;  // [bp-0x5c]
    unsigned int v5;  // [bp-0x58]
    unsigned int v6;  // [bp-0x54]
    unsigned int v7;  // [bp-0x50]
    unsigned int v8;  // [bp-0x4c]
    unsigned int v9;  // [bp-0x48]
    unsigned int v10;  // [bp-0x44]
    unsigned int v11;  // [bp-0x40]
    unsigned int v12;  // [bp-0x3c]
    unsigned int v13;  // [bp-0x38]
    unsigned int v14;  // [bp-0x34]
    unsigned int flag1;  // [bp-0x30]
    char v16;  // [bp-0x2c]
    unsigned int v17;  // [bp-0xc]
    unsigned int v18;  // [bp-0x4]

    v18 = v19;
    v17 = GLIBC_2.4::__stack_chk_guard;
    result = 1;
    v1 = 2;
    v2 = 3;
    v3 = 4;
    v4 = 5;
    v5 = 6;
    v6 = 7;
    v7 = 8;
    v8 = 8;
    v9 = 7;
    v10 = 6;
    v11 = 5;
    v12 = 4;
    v13 = 3;
    v14 = 2;
    flag1 = 1;
    memset(&v16, 0, 32);
    v20 = param_vectorized_loop(&result, &v8, &v16, 8);
    if (!(v17 ^ GLIBC_2.4::__stack_chk_guard))
        return v20;
    __stack_chk_fail(); /* do not return */
}


// Function: param_link_time_optimization at 0x109c4
unsigned int param_link_time_optimization(unsigned int a0)
{
    return (a0 + 5) * 2;
}


// Function: call_link_time_optimization at 0x109d0
unsigned int call_link_time_optimization()
{
    return 20;
}


// Function: param_division_by_zero at 0x109d8
extern unsigned int jmp_buffer;

unsigned int param_division_by_zero(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v4;  // lr
    unsigned int result;  // r0
    unsigned int v6;  // r0
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = a2;
    v1 = a1;
    v0 = a0;
    v1 = a0;
    signal(8, div_zero_handler);
    result = _setjmp(0x22070);
    if (result)
    {
        if ((char)armg_calculate_condition(18, result, 0, 0))
            return 4294967295;
    }
    else
    {
        if ((char)armg_calculate_condition(18, result, 0, 0))
            return 0;
    }
    v6 = __aeabi_idiv(10, v1);
    return __aeabi_idiv(10, v1);
}


// Function: call_division_by_zero at 0x10a1c
int call_division_by_zero(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0

    v0 = param_division_by_zero(5, a1, a2);
    v1 = param_division_by_zero(0, a1, a2);
    signal(8, NULL);
    return v0 + v1;
}


// Function: param_null_pointer_deref at 0x10a4c

int param_null_pointer_deref(unsigned int *a0, unsigned int a1, unsigned int a2)
{
    unsigned int v4;  // lr
    unsigned int *v0;  // [bp-0x10]
    unsigned int *v1;  // [bp-0xc], Other Possible Types: unsigned int
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = a2;
    v1 = a1;
    v0 = a0;
    v1 = a0;
    signal(11, segv_handler);
    return *(v1);
}


// Function: call_null_pointer_deref at 0x10a88
extern unsigned int GLIBC_2.4::__stack_chk_guard;

int call_null_pointer_deref(unsigned int a0[1], unsigned int a1, unsigned int a2)
{
    unsigned int v4;  // r0
    unsigned int v5;  // r0
    unsigned int v0[1];  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]
    unsigned int v3;  // [bp-0x10]

    v3 = a2;
    v2 = a1;
    *((unsigned int [1])v0) = a0;
    v2 = GLIBC_2.4::__stack_chk_guard;
    *(v0) = 42;
    v4 = param_null_pointer_deref(&v0, a1, a2);
    v5 = param_null_pointer_deref(NULL, a1, a2);
    signal(11, NULL);
    if (!(v2 ^ GLIBC_2.4::__stack_chk_guard))
        return v4 + v5;
    __stack_chk_fail(); /* do not return */
}


// Function: param_buffer_overflow_stack at 0x10af4
int param_buffer_overflow_stack()
{
    unsigned int v0;  // r0

    return v0;
}


// Function: param_buffer_overflow_heap at 0x10af8
unsigned int param_buffer_overflow_heap(unsigned int a0)
{
    void* ptr;  // r0

    ptr = malloc(16);
    if (!ptr)
        return 4294967294;
    free(ptr);
    return a0;
}


// Function: call_buffer_overflow at 0x10b24
unsigned int call_buffer_overflow()
{
    return param_buffer_overflow_heap(20) + 10;
}


// Function: param_integer_overflow at 0x10b38
unsigned int param_integer_overflow(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // cc_dep1
    unsigned int v1;  // cc_dep2
    unsigned int v12;  // r0
    unsigned int v2;  // cc_ndep
    unsigned int v3;  // cc_dep1
    unsigned int v4;  // cc_dep2
    unsigned int v5;  // cc_ndep
    unsigned int v6;  // cc_dep1
    unsigned int v7;  // cc_dep2
    unsigned int v8;  // cc_ndep

    if (0 < a0)
    {
        v3 = (armg_calculate_condition(194, v0, v1, v2) ? a1 : v0);
        v4 = (armg_calculate_condition(194, v0, v1, v2) ? 0 : v1);
        v5 = (armg_calculate_condition(194, v0, v1, v2) ? 0 : v2);
    }
    else
    {
        v3 = (armg_calculate_condition(194, v6, v7, v8) ? a1 : v6);
        v4 = (armg_calculate_condition(194, v6, v7, v8) ? 0 : v7);
        v5 = (armg_calculate_condition(194, v6, v7, v8) ? 0 : v8);
    }
    v12 = a0 + a1;
    if (!((char)armg_calculate_condition(210, v3, v4, v5)))
        return v12 | v12 >> 31;
    if (v12 <= 0)
    {
        a2 = 0;
        if (!armg_calculate_condition(194, v12, 0, 0))
            goto LABEL_10b5e;
LABEL_10b5d:
        a2 = 1;
    }
    else
    {
        if (armg_calculate_condition(194, v12, 0, 0))
            goto LABEL_10b5d;
LABEL_10b5e:
    }
    if (!(a2 & (a0 & a1) >> 31))
        return v12;
    return 4294967294;
}


// Function: call_integer_overflow at 0x10b70
unsigned int call_integer_overflow()
{
    return 0x77359400;
}


// Function: param_undefined_behavior at 0x10b7c
unsigned int param_undefined_behavior(unsigned int a0)
{
    return a0 * 2;
}


// Function: call_undefined_behavior at 0x10b84
unsigned int call_undefined_behavior()
{
    return 10;
}


// Function: param_implementation_defined at 0x10b8c
unsigned int param_implementation_defined()
{
    return 44;
}


// Function: call_implementation_defined at 0x10b94
unsigned int call_implementation_defined()
{
    return 44;
}


// Function: test_obf_opt_edge at 0x10b9c
extern char g_10fd8;
extern char g_11005;
extern char g_11021;
extern char g_1103d;
extern char g_1105a;
extern char g_11076;
extern char g_110a0;
extern char g_110c5;
extern char g_110eb;
extern char g_1110b;
extern char g_11127;
extern char g_11144;
extern char g_11161;
extern char g_11192;
extern char g_111af;

int test_obf_opt_edge()
{
    unsigned int v10;  // r0
    unsigned int v5;  // r0
    unsigned int v6;  // r1
    unsigned int v7;  // r2
    unsigned int v8;  // r0

    puts(0x10fd8);
    __printf_chk(1, 0x11005, 10);
    __printf_chk(1, 0x11021, call_opaque_predicate());
    __printf_chk(1, 0x1103d, 225);
    __printf_chk(1, 0x1105a, param_string_encryption());
    __printf_chk(1, 0x11076, call_tail_call_optimized());
    __printf_chk(1, 0x110a0, call_non_tail_call());
    __printf_chk(1, 0x110c5, call_vectorized_loop());
    v5 = __printf_chk(1, 0x110eb, 20);
    v8 = call_null_pointer_deref(__printf_chk(1, 0x1110b, call_division_by_zero(v5, v6, v7)), v6, v7);
    __printf_chk(1, 0x11127, v8);
    __printf_chk(1, 0x11144, call_buffer_overflow());
    __printf_chk(1, 0x11161, 0x77359400);
    __printf_chk(1, 0x11192, 10);
    v10 = __printf_chk(1, 0x111af, 44);
    return __printf_chk(1, 0x111af, 44);
}


// Function: __aeabi_idiv at 0x10cec
int __aeabi_idiv(unsigned int a0, unsigned int a1)
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
            goto LABEL_10f06;
LABEL_10f05:
    }
    else
    {
LABEL_10f02:
        if (armg_calculate_condition(178, a0, 0, 0))
            goto LABEL_10f05;
LABEL_10f06:
    }
    goto LABEL_10f02;
}


// Function: .divsi3_skip_div0_test at 0x10cf4
extern char g_10d2c;

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
        vvar_783{r68|4b} = 68908;
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


// Function: __aeabi_idivmod at 0x10f0c
int __aeabi_idivmod(unsigned int a0, unsigned int a1)
{
}


// Function: __aeabi_idiv0 at 0x10f2c
int __aeabi_idiv0(unsigned int a0, unsigned int a1)
{
    unsigned int v2;  // lr
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = a1;
}


// Function: _fini at 0x10f3c
int _fini(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v2;  // lr
    unsigned int v3;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = a3;
    v3 = sub_10f40();
    return sub_10f40();
}


// Function: sub_10f40 at 0x10f40
int sub_10f40(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0;
}

