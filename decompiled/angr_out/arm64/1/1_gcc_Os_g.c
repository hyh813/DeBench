// Angr Decompilation of 1_gcc_Os_g
// Platform: AARCH64

// Function: _init at 0x400928
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x400940
extern unsigned long long g_412f78;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_412f78;
}


// Function: sub_400954 at 0x400954
long long sub_400954()
{
    unsigned long long v0;  // x0

    v0 = _setjmp();
    return _setjmp();
}


// Function: main at 0x400a00
unsigned int main()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_control_flow_l3(test_control_flow_l2(test_control_flow_l1()));
    return 0;
}


// Function: sub_400a20 at 0x400a20
void sub_400a20(unsigned long a0)
{
    _start(); /* do not return */
}


// Function: _start at 0x400a40
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_400a70 at 0x400a70
void sub_400a70()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x400a74
extern unsigned long long g_412fe0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_412fe0)
        return 0;
    v0 = __gmon_start__(g_412fe0);
    return __gmon_start__(g_412fe0);
}


// Function: sub_400a88 at 0x400a88
void sub_400a88()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x400a90
extern char __TMC_END__;

long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: register_tm_clones at 0x400ac0
extern char __TMC_END__;
extern unsigned long long g_412ff8;

long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return &__TMC_END__;
    }
    else if (g_412ff8)
    {
        goto g_412ff8;
    }
    else
    {
        return &__TMC_END__;
    }
}


// Function: sub_400afc at 0x400afc
void sub_400afc()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x400b00
extern char __TMC_END__;
extern unsigned long long __dso_handle;
extern unsigned long long g_412fd8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __TMC_END__;
    if ((unsigned int)v2)
        return v2;
    if (g_412fd8)
        __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    __TMC_END__ = 1;
    return 1;
}


// Function: sub_400b48 at 0x400b48
long long sub_400b48()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x400b50
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: recursion_factorial at 0x400b54
unsigned long long recursion_factorial(unsigned int a0)
{
    unsigned long i;  // x1
    unsigned long long v1;  // x0

    i = a0;
    for (v1 = 1; (unsigned int)i > 1; i = (unsigned int)i - 1)
    {
        v1 *= i;
    }
    return v1;
}


// Function: double_value at 0x400b74
unsigned int double_value(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: triple_value at 0x400b7c
unsigned int triple_value(unsigned int a0)
{
    return a0 * 3;
}


// Function: op_add at 0x400b84
int op_add(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: op_sub at 0x400b8c
int op_sub(unsigned int a0, unsigned int a1)
{
    return a0 - a1;
}


// Function: op_mul at 0x400b94
int op_mul(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: op_div at 0x400b9c
unsigned int op_div(unsigned long a0, unsigned int a1)
{
    if (a1)
        a1 = (a0 & 4294967295) / a1;
    return a1;
}


// Function: op_mod at 0x400bb0
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // w0

    v0 = a1;
    if (a1)
        v0 = a0 - v0 * a0 / a1;
    return v0;
}


// Function: op_and at 0x400bc8
unsigned int op_and(unsigned int a0, unsigned int a1)
{
    return a0 & a1;
}


// Function: op_or at 0x400bd0
unsigned int op_or(unsigned int a0, unsigned int a1)
{
    return a0 | a1;
}


// Function: op_xor at 0x400bd8
int op_xor(unsigned int a0, unsigned int a1)
{
    return a0 ^ a1;
}


// Function: op_shl at 0x400be0
int op_shl(unsigned int a0, char a1)
{
    return a0 << (a1 & 31);
}


// Function: op_shr at 0x400be8
int op_shr(unsigned int a0, char a1)
{
    return a0 >> (a1 & 31);
}


// Function: state_idle at 0x400bf0
unsigned long long state_idle(unsigned int a0)
{
    if (a0 == 1)
        return 1;
    return 0;
}


// Function: state_processing at 0x400bfc
unsigned long long state_processing(unsigned long long a0)
{
    if ((unsigned int)a0 == 2)
    {
        return a0;
    }
    else if ((unsigned int)a0 == 99)
    {
        return 3;
    }
    else
    {
        return 1;
    }
}


// Function: state_done at 0x400c14
unsigned long long state_done()
{
    return 2;
}


// Function: state_error at 0x400c1c
unsigned long long state_error(unsigned int a0)
{
    if (a0)
        return 3;
    return a0;
}


// Function: sequential_ops at 0x400c2c
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return (((a0 + a1) * 2 | a0 + a1 >> 31) & 4294967294) - a2;
}


// Function: single_if at 0x400c3c
unsigned int single_if(unsigned int a0)
{
    if (a0 > 0)
        a0 = (a0 * 2 | a0 >> 31) & 4294967294;
    return a0;
}


// Function: if_else at 0x400c4c
unsigned long long if_else(unsigned int a0)
{
    if (a0 > 0)
        return 1;
    return 0;
}


// Function: nested_if_2 at 0x400c58
unsigned long long nested_if_2(unsigned long a0, unsigned long a1)
{
    if ((unsigned int)a0 <= 0)
        return 0;
    return a0 + a1;
}


// Function: nested_if_deep at 0x400c78
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    unsigned int v0;  // w0

    if (a0 <= 0)
    {
        return 0;
    }
    else if (a1 <= 0)
    {
        return 1;
    }
    else if (a2 <= 0)
    {
        return 2;
    }
    else if (a3 > 0)
    {
        if (a4 <= 0)
            v0 = 0;
        else
            v0 = 1;
        return v0 + 4;
    }
    else
    {
        return 3;
    }
}


// Function: if_elseif_chain at 0x400cc8
unsigned long long if_elseif_chain(unsigned int a0)
{
    if (!a0)
    {
        return 10;
    }
    else if (a0 == 1)
    {
        return 20;
    }
    else if (a0 == 2)
    {
        return 30;
    }
    else
    {
        return 4294967295;
    }
}


// Function: if_elseif_long at 0x400cf4
unsigned long long if_elseif_long(unsigned int a0)
{
    if (a0 >= 5)
        return 4294967295;
    return 100 + 100 * a0;
}


// Function: switch_small at 0x400d08
extern char CSWTCH.55;

unsigned long long switch_small(unsigned long a0)
{
    if (3 < (unsigned int)a0)
        return 4294967295;
    return (&CSWTCH.55)[a0 & 4294967295];
}


// Function: switch_large at 0x400d28
unsigned long long switch_large(unsigned int a0)
{
    if (a0 >= 10)
        return 4294967295;
    return 10 * a0;
}


// Function: switch_default at 0x400d3c
unsigned long long switch_default(unsigned int a0)
{
    if (a0 - 1 >= 3)
        return 0;
    return 100 * a0;
}


// Function: switch_fallthrough at 0x400d54
unsigned long long switch_fallthrough(unsigned long a0)
{
    unsigned long long v0;  // x1
    unsigned int v1;  // w1

    if ((unsigned int)a0 != 2)
    {
        if ((unsigned int)a0 != 3)
        {
            if ((unsigned int)a0 != 1)
                return 4294967295;
            v0 = 0;
        }
        else
        {
            v1 = 12;
LABEL_400d78:
            v0 = v1 + (unsigned int)a0 * 2;
        }
        return v0 + a0;
    }
    v1 = 0;
    goto LABEL_400d78;
}


// Function: loop_for_fixed at 0x400d94
unsigned long long loop_for_fixed(unsigned int a0)
{
    unsigned long long i;  // x1
    unsigned long long v1;  // x0

    i = 0;
    for (v1 = 0; (unsigned int)i < a0; i = (unsigned int)i + 1)
    {
        v1 += i;
    }
    return v1;
}


// Function: loop_while at 0x400db8
unsigned long long loop_while(unsigned long long a0)
{
    unsigned int i;  // w1

    for (i = 0; (unsigned int)a0; i += 1)
    {
        a0 /= 10;
    }
    if (0 >= i)
        return 1;
    return i;
}


// Function: loop_dowhile at 0x400ddc
unsigned int loop_dowhile(unsigned int a0)
{
    unsigned long v0;  // x1
    unsigned int v1;  // w0
    unsigned int v2;  // w0
    unsigned int v3;  // w0

    v0 = a0;
    v1 = 0;
    do
    {
        v0 /= 10;
        v3 = v1 + 1;
        v1 = v3;
    } while ((unsigned int)v0);
    return v2 + 1;
}


// Function: loop_nested at 0x400df8
unsigned long long loop_nested(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // w3
    unsigned long long i;  // x0
    unsigned long v2;  // x4

    v0 = 0;
    for (i = 0; v0 < a0; i += v2)
    {
        v0 += 1;
        if (0 <= a1)
            v2 = a1;
        else
            v2 = 0;
    }
    return i;
}


// Function: loop_break at 0x400e24
extern char __stack_chk_guard;

unsigned long long loop_break(unsigned int i)
{
    unsigned long long v6;  // x1
    char *v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    v6 = 0;
    v1 = 85899345930;
    v2 = 171798691870;
    v3 = 50;
    while (*((int *)((char *)&v1 + 4 * v6)) != i)
    {
        if (v6 + 1 == 5)
        {
            if (v4 != *((long long *)&__stack_chk_guard))
                __stack_chk_fail(); /* do not return */
            return 4294967295;
        }
    }
    if (v4 == *((long long *)&__stack_chk_guard))
        return v6 & 4294967295;
    __stack_chk_fail(); /* do not return */
}


// Function: loop_continue at 0x400eb0
unsigned long long loop_continue(unsigned int a0)
{
    unsigned long long i;  // x1
    unsigned long long v1;  // x0

    i = 1;
    for (v1 = 0; (unsigned int)i <= a0; i = (unsigned int)i + 1)
    {
        if (((char)i & 1))
            v1 += i;
    }
    return v1;
}


// Function: goto_forward at 0x400ed8
unsigned int goto_forward(unsigned long long a0)
{
    if ((unsigned int)a0 > 0)
        a0 *= a0;
    return ((unsigned int)a0 * 2 | (unsigned int)a0 >> 31) & 4294967294;
}


// Function: goto_backward at 0x400eec
unsigned long long goto_backward(unsigned int i)
{
    unsigned long long v0;  // x0
    unsigned long long v1;  // x1
    unsigned long long v2;  // x1
    unsigned long long v3;  // x0
    unsigned long long v4;  // x0

    v0 = 1;
    if (i <= 0)
        return 1;
    v1 = 1;
    do
    {
        v2 = v1;
        v4 = v2 * v0;
        v0 = v4;
        v1 = (unsigned int)v2 + 1;
    } while ((unsigned int)v1 <= i);
    return v2 * v3;
}


// Function: ternary_op at 0x400f14
long long ternary_op(unsigned int a0, unsigned int a1)
{
    if (a0 > a1)
        return a0;
    return a1;
}


// Function: test_control_flow_l1 at 0x400f20
extern char g_401c70;

int test_control_flow_l1()
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_401c70);
    __printf_chk(1, "CF-L1-01 (sequential_ops): %d\n", 21);
    __printf_chk(1, "CF-L1-02 (single_if): %d\n", 20);
    __printf_chk(1, "CF-L1-02 (single_if): %d\n", 4294967291);
    __printf_chk(1, "CF-L1-03 (if_else): %d\n", 1);
    __printf_chk(1, "CF-L1-03 (if_else): %d\n", 0);
    __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 15);
    __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 10);
    __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 0);
    __printf_chk(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
    __printf_chk(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
    __printf_chk(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
    __printf_chk(1, "CF-L1-08 (switch_small): %d\n", 50);
    __printf_chk(1, "CF-L1-09 (switch_large): %d\n", 70);
    __printf_chk(1, "CF-L1-10 (switch_default): %d\n", 0);
    __printf_chk(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
    __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(10) & 4294967295);
    __printf_chk(1, "CF-L1-13 (loop_while): %d\n", loop_while(12345) & 4294967295);
    __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(9876) & 4294967295);
    __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4) & 4294967295);
    __printf_chk(1, "CF-L1-16 (loop_break): %d\n", loop_break(30) & 4294967295);
    __printf_chk(1, "CF-L1-16 (loop_break): %d\n", loop_break(99) & 4294967295);
    __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", loop_continue(10) & 4294967295);
    __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
    __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
    __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
    __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
    return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x401194
extern char __stack_chk_guard;

long long loop_multi_exit(unsigned int a0)
{
    char *v6;  // x1
    unsigned int v7;  // w2
    unsigned long long v8;  // x3
    char *v0;  // [bp-0x50]
    char v1;  // [bp-0x38], Other Possible Types: uint128_t
    uint128_t v2;  // [bp-0x28]
    uint128_t v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    v6 = &v1;
    v1 = 316912650112397582603894390785;
    v2 = 633825300243241909290088267781;
    v7 = 0;
    v3 = 950737950374086235976282144777;
    while (true)
    {
        v8 = 0;
        do
        {
            if (*((int *)&v6[4 * v8]) == a0)
            {
                if (v4 != *((long long *)&__stack_chk_guard))
                    __stack_chk_fail(); /* do not return */
                return (unsigned int)v8 + 10 * v7;
            }
        } while ((v8 += 1, v8 != 4));
        v7 += 1;
        v6 += 16;
        if (v7 == 3)
        {
            if (v4 != *((long long *)&__stack_chk_guard))
                __stack_chk_fail(); /* do not return */
            return 4294967295;
        }
    }
}


// Function: infinite_loop at 0x401238
unsigned long long infinite_loop(unsigned int *ptr)
{
    unsigned long long v0;  // x0

    v0 = 0;
    while (*(ptr) != 1)
    {
        v0 = (unsigned int)v0 + 1;
        if ((unsigned int)v0 == 1001)
        {
            *(ptr) = 1;
            return v0;
        }
    }
    return v0;
}


// Function: multi_return at 0x401264
unsigned long long multi_return(unsigned long a0)
{
    if (((char)(a0 >> 31) & 1))
    {
        return 4294967295;
    }
    else if (100 >= (__ROL__((unsigned int)a0, 1) & 4294967294))
    {
        return (unsigned int)a0 + 1;
    }
    else
    {
        return 4294967294;
    }
}


// Function: conditional_return at 0x401294
long long conditional_return(unsigned int a0)
{
    unsigned long v0;  // cc_dep1
    unsigned int v1;  // w0

    v0 = a0;
    if (!a0)
    {
        v1 = a0;
        if (!((char)arm64g_calculate_condition(211, v0, 0, 0)))
            return __ROL__(a0, 1) & 4294967294;
    }
    else
    {
        v1 = -(a0);
        if (!((char)arm64g_calculate_condition(211, v0, 0, 0)))
            return __ROL__(a0, 1) & 4294967294;
    }
    return v1;
}


// Function: duffs_device at 0x4012a8

unsigned long long duffs_device(unsigned int *a0, unsigned int *iter, unsigned int a2)
{
    unsigned int *cur;  // x3
    unsigned int result;  // w2

    cur = a0;
    if (a2 <= 0)
        return 4294967295;
    result = a2 + 7 >> 31 & 0xe0000000 | ((a2 + 7) * 0x20000000 | a2 + 7 >> 3) & 536870911;
}


// Function: loop_complex_cond at 0x401344
int loop_complex_cond(unsigned int a0)
{
    unsigned long long v0;  // x1
    unsigned long long v4;  // cc_op
    unsigned long long v1;  // cc_dep1
    unsigned long long v2;  // cc_dep2
    unsigned long long v3;  // cc_ndep

    v0 = 0;
    while (true)
    {
        if ((__ROL__((unsigned int)v0, 1) & 4294967294) < (unsigned int)(a0 - v0))
        {
            v4 = 3;
            v1 = ((char)arm64g_calculate_condition(v4 | 176, v1, v2, v3) ? v0 & 4294967295 : 0);
            v2 = ((char)arm64g_calculate_condition(v4 | 176, v1, v2, v3) ? 9 : 0);
            v3 = 0;
            if (!((char)arm64g_calculate_condition(211, v1, v2, 0)))
                break;
        }
        else
        {
            v4 = 0;
            v1 = ((char)arm64g_calculate_condition(v4 | 176, v1, v2, v3) ? v0 & 4294967295 : 0);
            v2 = ((char)arm64g_calculate_condition(v4 | 176, v1, v2, v3) ? 9 : 0);
            v3 = 0;
            if (!((char)arm64g_calculate_condition(208, v1, v2, 0)))
                break;
        }
        v0 = (unsigned int)v0 + 1;
    }
    return (__ROL__((unsigned int)v0, 1) & 4294967294) + (unsigned int)(a0 - v0) + (unsigned int)v0;
}


// Function: loop_modify_var at 0x401370
unsigned long long loop_modify_var(unsigned int a0)
{
    unsigned long long i;  // x1
    unsigned long long v1;  // x0

    i = 0;
    for (v1 = 0; (unsigned int)i < a0; i = (unsigned int)i + 1)
    {
        v1 += i;
        if ((unsigned int)i > 5)
            i = (unsigned int)i + 2;
    }
    return v1;
}


// Function: loop_external_state at 0x4013a0
unsigned long long loop_external_state(unsigned int *a0)
{
    unsigned long long v0;  // x0

    v0 = 0;
    do
    {
    } while (!*(a0) && (v0 = (unsigned long long)((unsigned int)v0 + 1), (unsigned int)v0 != 101));
    return v0;
}


// Function: tail_recursion at 0x4013c0
int tail_recursion(unsigned int a0, unsigned int a1)
{
    unsigned long i;  // x2
    unsigned long v1;  // x0

    i = a0;
    for (v1 = a1; (unsigned int)i > 1; i = (unsigned int)i - 1)
    {
        v1 *= i;
    }
    return v1;
}


// Function: indirect_recursion_a at 0x4013e0
unsigned long long indirect_recursion_a(unsigned long long a0, unsigned int i)
{
    for (; i > 0; i -= 2)
    {
        if (((char)a0 & 1))
        {
            if (i == 1)
                return (unsigned int)a0 * 3 + 1;
            a0 = (unsigned int)a0 * 3 + 2;
        }
        else if (i != 1)
        {
            a0 = (unsigned int)a0 / 2 + 1;
        }
        else
        {
            return (unsigned int)a0 / 2;
        }
    }
    return a0;
}


// Function: call_func_ptr at 0x401424
int call_func_ptr(unsigned long a0, unsigned long a1)
{
    goto a0;
}


// Function: call_func_ptr_array at 0x401430
extern unsigned long long $d;
extern char __stack_chk_guard;
extern unsigned long long g_413018;
extern unsigned long long g_413020;

unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1)
{
    char *v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    char v5;  // [bp+0x0]

    v0 = &v5;
    v4 = *((long long *)&__stack_chk_guard);
    v1 = $d;
    v2 = g_413018;
    v3 = g_413020;
    if (2 >= a0)
    {
        if (v4 == *((long long *)&__stack_chk_guard))
            goto (&v1)[a0];
    }
    else
    {
        if (v4 == *((long long *)&__stack_chk_guard))
            return 4294967295;
    }
    __stack_chk_fail(); /* do not return */
}


// Function: call_virtual_func at 0x4014c8
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
    return (a1 * 2 | a1 >> 31) & 4294967294;
}


// Function: process_with_callback at 0x4014d0
int process_with_callback(unsigned long a0, unsigned int a1, unsigned long long *a2)
{
    unsigned long long v2;  // x19
    unsigned long long v3;  // x20
    unsigned long long v4;  // x19
    unsigned long long v5;  // x19
    char *v0;  // [bp-0x40]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = 0;
    v3 = 0;
    while (true)
    {
        v4 = v2;
        if ((unsigned int)v4 >= a1)
            break;
        v5 = v4 + 1;
        v3 += a2(*((int *)(a0 + v4 * 4)));
        v2 = v5;
    }
    return v3;
}


// Function: test_control_flow_l2 at 0x40152c
extern char __stack_chk_guard;
extern char g_401edd;

unsigned long long test_control_flow_l2()
{
    char *v0;  // [bp-0xa0]
    unsigned int result[1];  // [bp-0x68]
    unsigned int flag1;  // [bp-0x64]
    unsigned long long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    unsigned int v5;  // [bp-0x50]
    uint128_t v6;  // [bp-0x48]
    uint128_t v7;  // [bp-0x38]
    char v8;  // [bp-0x28]
    unsigned long v9;  // [bp-0x8]
    char v10;  // [bp+0x0]

    v0 = &v10;
    v9 = *((long long *)&__stack_chk_guard);
    puts(&g_401edd);
    __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7) & 4294967295);
    *((unsigned int [1])result) = 0;
    __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", infinite_loop(&result) & 4294967295);
    __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
    __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
    __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
    __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
    __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
    memset(&v8, 0, 32);
    v6 = 316912650112397582603894390785;
    v7 = 633825300243241909290088267781;
    __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", duffs_device(&v8, &v6, 8) & 4294967295);
    __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10) & 4294967295);
    __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(10) & 4294967295);
    flag1 = 0;
    __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", loop_external_state(&flag1) & 4294967295);
    __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5) & 4294967295);
    __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
    __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(6, 1) & 4294967295);
    __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", call_func_ptr(double_value, 5) & 4294967295);
    __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0, 5) & 4294967295);
    __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2, 5) & 4294967295);
    v3 = 8589934593;
    v4 = 17179869187;
    v5 = 5;
    __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", process_with_callback(&v3, 5, double_value) & 4294967295);
    if (v9 == *((long long *)&__stack_chk_guard))
        return &__stack_chk_guard;
    __stack_chk_fail(); /* do not return */
}


// Function: non_local_jump at 0x4017ac
extern unsigned long long jump_buffer;

unsigned long long non_local_jump(unsigned int a0)
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if (_setjmp(&jump_buffer))
        return 4294967295;
    if (!((char)(a0 >> 31) & 1) && a0 <= 100)
        return __ROL__(a0, 1) & 4294967294;
    __longjmp_chk(&jump_buffer); /* do not return */
}


// Function: cpp_exception at 0x401808
unsigned long long cpp_exception(unsigned long a0)
{
    if (((char)(a0 >> 31) & 1))
    {
        return 4294967295;
    }
    else if ((unsigned int)a0 < 101)
    {
        return __ROL__((unsigned int)a0, 1) & 4294967294;
    }
    else
    {
        return 4294967294;
    }
}


// Function: large_jump_table at 0x401828
extern char __stack_chk_guard;
extern uint128_t g_413028;
extern uint128_t g_413038;
extern uint128_t g_413048;
extern uint128_t g_413058;
extern uint128_t g_413068;

unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2)
{
    char *v0;  // [bp-0x70]
    int v1;  // [bp-0x58]
    int v2;  // [bp-0x48]
    int v3;  // [bp-0x38]
    int v4;  // [bp-0x28]
    int v5;  // [bp-0x18]
    unsigned long v6;  // [bp-0x8]
    char v7;  // [bp+0x0]

    v0 = &v7;
    v6 = *((long long *)&__stack_chk_guard);
    *((uint128_t *)&v1) = g_413028;
    *((uint128_t *)&v2) = g_413038;
    *((uint128_t *)&v3) = g_413048;
    *((uint128_t *)&v4) = g_413058;
    *((uint128_t *)&v5) = g_413068;
    if (9 >= a0)
    {
        if (v6 == *((long long *)&__stack_chk_guard))
            goto *((long long *)((char *)&v1 + 8 * a0));
    }
    else
    {
        if (v6 == *((long long *)&__stack_chk_guard))
            return 4294967295;
    }
    __stack_chk_fail(); /* do not return */
}


// Function: conditional_func_ptr at 0x4018d0
int conditional_func_ptr(unsigned int a0, unsigned long a1)
{
    unsigned long long v0;  // x1
    unsigned long long v1;  // x2
    unsigned long long v2;  // x2

    if (a0)
    {
        v0 = recursion_factorial;
        v1 = triple_value;
        if (a0 == 1)
            v2 = v1;
        else
            v2 = v0;
    }
    else
    {
        v2 = double_value;
    }
    goto v2;
}


// Function: state_machine at 0x401908

unsigned long long state_machine(unsigned int a0, unsigned int a1)
{
    unsigned long long v0;  // x0

    v0 = a1;
    switch (a1)
    {
    case 0:
        if (a0 != 1)
            v0 = 0;
        else
            v0 = 1;
        break;
    case 1:
        switch (a0)
        {
        case 2:
            v0 = a0;
            break;
        case 99:
            v0 = 3;
LABEL_401958:
            break;
        default:
            v0 &= 4294967295;
            goto LABEL_401958;
        }
    case 2:
        break;
    case 3:
        if (a0)
            v0 &= 4294967295;
        else
            v0 = 0;
        break;
    default:
        v0 = 3;
        break;
    }
    return v0;
}


// Function: fsm_func_table at 0x401970
extern char __stack_chk_guard;
extern uint128_t g_413078;
extern uint128_t g_413088;

unsigned long long fsm_func_table(unsigned long a0, unsigned int a1)
{
    char *v0;  // [bp-0x40]
    int v1;  // [bp-0x28]
    int v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    *((uint128_t *)&v2) = g_413088;
    *((uint128_t *)&v1) = g_413078;
    if (3 >= a1)
    {
        if (v3 == *((long long *)&__stack_chk_guard))
            goto *((long long *)((char *)&v1 + 8 * a1));
    }
    else
    {
        if (v3 == *((long long *)&__stack_chk_guard))
            return 3;
    }
    __stack_chk_fail(); /* do not return */
}


// Function: computed_goto at 0x4019fc
extern char __stack_chk_guard;
extern uint128_t g_413098;
extern uint128_t g_4130a8;

unsigned long long computed_goto(unsigned long a0, unsigned int a1)
{
    char *v0;  // [bp-0x40]
    int v1;  // [bp-0x28]
    int v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    *((uint128_t *)&v2) = g_4130a8;
    *((uint128_t *)&v1) = g_413098;
    if (3 >= a1)
    {
        goto *((long long *)((char *)&v1 + 8 * a1));
    }
    else if (v3 != *((long long *)&__stack_chk_guard))
    {
        __stack_chk_fail(); /* do not return */
    }
    else
    {
        return 4294967295;
    }
}


// Function: obfuscated_cf at 0x401a8c
unsigned int obfuscated_cf(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: opaque_predicate at 0x401a94
unsigned int opaque_predicate(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: overlapped_code at 0x401a9c
int overlapped_code(unsigned long a0)
{
    if (!((char)a0 & 1))
        return a0 / 2;
    return (unsigned int)a0 * 3 + 1;
}


// Function: test_control_flow_l3 at 0x401ab8
extern char __stack_chk_guard;
extern char g_4020d0;

unsigned long long test_control_flow_l3()
{
    char *v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v3 = *((long long *)&__stack_chk_guard);
    puts(&g_4020d0);
    __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
    __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
    __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
    __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
    __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5) & 4294967295);
    __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5) & 4294967295);
    __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
    __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1) & 4294967295);
    v1 = 0x100000000;
    v2 = 12884901890;
    __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", computed_goto(&v1, 2) & 4294967295);
    __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
    __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
    __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
    if (v3 == *((long long *)&__stack_chk_guard))
        return &__stack_chk_guard;
    __stack_chk_fail(); /* do not return */
}


// Function: _fini at 0x401c58
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

