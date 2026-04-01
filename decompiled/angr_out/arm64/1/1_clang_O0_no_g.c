// Angr Decompilation of 1_clang_O0_no_g
// Platform: AARCH64

// Function: _init at 0x400860
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x400880
extern unsigned long long g_413ff8;

long long $x()
{
    unsigned long long v2;  // x16
    unsigned long long v3;  // x30
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = v2;
    v1 = v3;
    goto g_413ff8;
}


// Function: sub_400894 at 0x400894
long long sub_400894()
{
    void* v0;  // x0
    void* v1;  // x1
    unsigned long v2;  // x2
    unsigned long long dst;  // x0

    dst = memcpy(v0, v1, v2);
    return memcpy(v0, v1, v2);
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
extern unsigned long long g_413fd0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_413fd0)
        return 0;
    v0 = __gmon_start__(g_413fd0);
    return __gmon_start__(g_413fd0);
}


// Function: sub_400988 at 0x400988
void sub_400988()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x400990
extern char __TMC_END__;

long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: register_tm_clones at 0x4009c0
extern char __TMC_END__;
extern unsigned long long g_413fe0;

long long register_tm_clones()
{
    if (!(((__ROL__(0, 1) & 1) >> 63 & 0x8000000000000000) || (((__ROL__(0, 1) & 1) * 0x8000000000000000 | (__ROL__(0, 1) & 1) >> 1) & 9223372036854775807)))
    {
        return &__TMC_END__;
    }
    else if (g_413fe0)
    {
        goto g_413fe0;
    }
    else
    {
        return &__TMC_END__;
    }
}


// Function: sub_4009fc at 0x4009fc
void sub_4009fc()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x400a00
extern char __TMC_END__;
extern unsigned long long __dso_handle;
extern unsigned long long g_413fc8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v2;  // x0
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    v2 = __TMC_END__;
    if ((unsigned int)v2)
        return v2;
    if (g_413fc8)
        __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    __TMC_END__ = 1;
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


// Function: sequential_ops at 0x400a54
unsigned int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]

    v2 = a0 + a1;
    v1 = (v2 * 2 | v2 >> 31) & 4294967294;
    v0 = v1 - a2;
    return v0;
}


// Function: single_if at 0x400a9c
unsigned int single_if(unsigned int a0)
{
    unsigned int v0;  // [bp-0x4]

    v0 = a0;
    if (v0 > 0)
        v0 = (v0 * 2 | v0 >> 31) & 4294967294;
    return v0;
}


// Function: if_else at 0x400ad0
unsigned int if_else(unsigned int a0)
{
    unsigned int v0;  // [bp-0x4]

    if (a0 <= 0)
    {
        v0 = 0;
        return v0;
    }
    v0 = 1;
    return v0;
}


// Function: nested_if_2 at 0x400b08
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x4]

    if (a0 <= 0)
    {
        v0 = 0;
        return v0;
    }
    else if (a1 > 0)
    {
        v0 = a0 + a1;
        return v0;
    }
    else
    {
        v0 = a0;
        return v0;
    }
}


// Function: nested_if_deep at 0x400b68
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    unsigned int v0;  // [bp-0x4]

    if (a0 <= 0)
    {
        v0 = 0;
        return v0;
    }
    else if (a1 <= 0)
    {
        v0 = 1;
        return v0;
    }
    else if (a2 <= 0)
    {
        v0 = 2;
        return v0;
    }
    else if (a3 <= 0)
    {
        v0 = 3;
        return v0;
    }
    else if (a4 > 0)
    {
        v0 = 5;
        return v0;
    }
    else
    {
        v0 = 4;
        return v0;
    }
}


// Function: if_elseif_chain at 0x400c20
unsigned int if_elseif_chain(unsigned int a0)
{
    unsigned int v0;  // [bp-0x4]

    if (!a0)
    {
        v0 = 10;
        return v0;
    }
    else if (a0 == 1)
    {
        v0 = 20;
        return v0;
    }
    else if (a0 == 2)
    {
        v0 = 30;
        return v0;
    }
    else
    {
        v0 = 4294967295;
        return v0;
    }
}


// Function: if_elseif_long at 0x400c90
unsigned int if_elseif_long(unsigned int a0)
{
    unsigned int v0;  // [bp-0x4]

    if (!a0)
    {
        v0 = 100;
        return v0;
    }
    else if (a0 == 1)
    {
        v0 = 200;
        return v0;
    }
    else if (a0 == 2)
    {
        v0 = 300;
        return v0;
    }
    else if (a0 == 3)
    {
        v0 = 400;
        return v0;
    }
    else if (a0 == 4)
    {
        v0 = 500;
        return v0;
    }
    else
    {
        v0 = 4294967295;
        return v0;
    }
}


// Function: switch_small at 0x400d38
extern unsigned int $d.1[4];
extern char g_400d70;

unsigned int switch_small(unsigned int a0)
{
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x4]

    v1 = 10;
    v0 = 5;
    if (3 < a0)
    {
        v2 = 4294967295;
        return v2;
    }
    goto &(&g_400d70)[$d.1[a0]];
}


// Function: switch_large at 0x400de8
extern char g_400e10;
extern unsigned int g_402aac[4];

unsigned int switch_large(unsigned int a0)
{
    unsigned int v0;  // [bp-0x4]

    if (9 < a0)
    {
        v0 = 4294967295;
        return v0;
    }
    goto &(&g_400e10)[g_402aac[a0]];
}


// Function: switch_default at 0x400eac
unsigned int switch_default(unsigned int a0)
{
    unsigned int v0;  // [bp-0x4]

    if (a0 == 1)
    {
        v0 = 100;
        return v0;
    }
    else if (a0 == 2)
    {
        v0 = 200;
        return v0;
    }
    else if (a0 == 3)
    {
        v0 = 300;
        return v0;
    }
    else
    {
        v0 = 0;
        return v0;
    }
}


// Function: switch_fallthrough at 0x400f20
unsigned int switch_fallthrough(unsigned int a0)
{
    unsigned int cur;  // [bp-0x8]

    cur = 0;
    if (a0 != 1)
    {
        if (a0 != 2)
        {
            if (a0 == 3)
            {
                cur += a0 * 4;
            }
            else
            {
                cur = 4294967295;
                return cur;
            }
        }
        cur += a0 * 2;
    }
    cur += a0;
    return cur;
}


// Function: loop_for_fixed at 0x400fb4
unsigned int loop_for_fixed(unsigned int a0)
{
    unsigned int i;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v1 = 0;
    for (i = 0; a0 > i; i += 1)
    {
        v1 += i;
    }
    return v1;
}


// Function: loop_while at 0x40100c
unsigned int loop_while(unsigned int a0)
{
    unsigned int v0;  // [bp-0xc]
    unsigned int i;  // [bp-0x8]
    unsigned int result;  // [bp-0x4]

    result = a0;
    for (i = 0; result; i += 1)
    {
        result /= 10;
    }
    if (i <= 0)
    {
        v0 = 1;
        return v0;
    }
    v0 = i;
    return v0;
}


// Function: loop_dowhile at 0x40107c
unsigned int loop_dowhile(unsigned int a0)
{
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = a0;
    v0 = 0;
    do
    {
        v1 /= 10;
        v0 += 1;
    } while (v1);
    return v0;
}


// Function: loop_nested at 0x4010c4
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
    unsigned int j;  // [bp-0x14]
    unsigned int i;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]

    v2 = 0;
    for (i = 0; a0 > i; i += 1)
    {
        for (j = 0; a1 > j; j += 1)
        {
            v2 += 1;
        }
    }
    return v2;
}


// Function: loop_break at 0x40114c
unsigned int loop_break(unsigned int a0)
{
    unsigned int i;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x10]
    unsigned int v4;  // [bp-0x4]

    v2 = 3169126501123975826038943907850;
    v3 = 50;
    v1 = 5;
    for (i = 0; v1 > i; i += 1)
    {
        if (*((int *)((char *)&v2 + 4 * i)) == a0)
        {
            v4 = i;
            return v4;
        }
    }
    v4 = 4294967295;
    return v4;
}


// Function: loop_continue at 0x4011e4
unsigned int loop_continue(unsigned int a0)
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v1 = 0;
    for (v0 = 1; a0 >= v0; v0 += 1)
    {
        if ((unsigned int)(v0 - 2 * v0 / 2))
            v1 += v0;
    }
    return v1;
}


// Function: goto_forward at 0x401260
unsigned int goto_forward(unsigned int a0)
{
    unsigned int v0;  // [bp-0x8]

    if (a0 > 0)
        v0 = a0 * a0;
    else
        v0 = a0;
    v0 = (v0 * 2 | v0 >> 31) & 4294967294;
    return v0;
}


// Function: goto_backward at 0x4012b4
unsigned int goto_backward(unsigned int a0)
{
    unsigned int i;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x4]

    if (0 >= a0)
    {
        v2 = 1;
        return v2;
    }
    v1 = 1;
    for (i = 1; i <= a0; i += 1)
    {
        v1 *= i;
    }
    v2 = v1;
    return v2;
}


// Function: ternary_op at 0x401338
unsigned int ternary_op(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0xc]

    if (a0 <= a1)
    {
        v0 = a1;
        return v0;
    }
    v0 = a0;
    return v0;
}


// Function: test_control_flow_l1 at 0x40137c
extern char $d.2;

int test_control_flow_l1()
{
    char *v0;  // [bp-0x68]
    char *v1;  // [bp-0x60]
    unsigned int v2;  // [bp-0x54]
    char *v3;  // [bp-0x50]
    unsigned int result;  // [bp-0x48]
    unsigned int v5;  // [bp-0x44]
    char *v6;  // [bp-0x40]
    unsigned int v7;  // [bp-0x34]
    char *v8;  // [bp-0x30]
    unsigned int v9;  // [bp-0x24]
    unsigned int v10;  // [bp-0x20]
    unsigned int v11;  // [bp-0x1c]
    char *v12;  // [bp-0x18]
    char *v13;  // [bp-0x10]
    char v14;  // [bp+0x0]

    v13 = &v14;
    printf(&$d.2);
    v9 = 5;
    v5 = 7;
    v11 = 3;
    printf("CF-L1-01 (sequential_ops): %d\n", sequential_ops(5, 7, 3) & 4294967295);
    v10 = 10;
    v0 = "CF-L1-02 (single_if): %d\n";
    printf("CF-L1-02 (single_if): %d\n", single_if(10) & 4294967295);
    v2 = 4294967291;
    single_if(4294967291);
    printf(v0);
    v1 = "CF-L1-03 (if_else): %d\n";
    printf("CF-L1-03 (if_else): %d\n", if_else(v9) & 4294967295);
    v7 = 4294967293;
    if_else(4294967293);
    printf(v1);
    v3 = "CF-L1-04 (nested_if_2): %d\n";
    printf("CF-L1-04 (nested_if_2): %d\n", nested_if_2(v10, v9) & 4294967295);
    nested_if_2(v10, v2);
    printf(v3);
    nested_if_2(4294967286, v9);
    printf(v3);
    result = 1;
    printf("CF-L1-05 (nested_if_deep): %d\n", nested_if_deep(1, 1, 1, 1, 1) & 4294967295);
    printf("CF-L1-06 (if_elseif_chain): %d\n", if_elseif_chain(result) & 4294967295);
    printf("CF-L1-07 (if_elseif_long): %d\n", if_elseif_long(v11) & 4294967295);
    printf("CF-L1-08 (switch_small): %d\n", switch_small(2) & 4294967295);
    printf("CF-L1-09 (switch_large): %d\n", switch_large(v5) & 4294967295);
    printf("CF-L1-10 (switch_default): %d\n", switch_default(v9) & 4294967295);
    printf("CF-L1-11 (switch_fallthrough): %d\n", switch_fallthrough(v11) & 4294967295);
    printf("CF-L1-12 (loop_for_fixed): %d\n", loop_for_fixed(v10) & 4294967295);
    printf("CF-L1-13 (loop_while): %d\n", loop_while(12345) & 4294967295);
    printf("CF-L1-14 (loop_dowhile): %d\n", loop_dowhile(9876) & 4294967295);
    printf("CF-L1-15 (loop_nested): %d\n", loop_nested(v11, 4) & 4294967295);
    v6 = "CF-L1-16 (loop_break): %d\n";
    printf("CF-L1-16 (loop_break): %d\n", loop_break(30) & 4294967295);
    loop_break(99);
    printf(v6);
    printf("CF-L1-17 (loop_continue): %d\n", loop_continue(v10) & 4294967295);
    v8 = "CF-L1-18 (goto_forward): %d\n";
    printf("CF-L1-18 (goto_forward): %d\n", goto_forward(v9) & 4294967295);
    goto_forward(v7);
    printf(v8);
    printf("CF-L1-19 (goto_backward): %d\n", goto_backward(v9) & 4294967295);
    v12 = "CF-L1-20 (ternary_op): %d\n";
    printf("CF-L1-20 (ternary_op): %d\n", ternary_op(v10, v9) & 4294967295);
    ternary_op(v11, 8);
    return printf(v12);
}


// Function: loop_multi_exit at 0x401670
extern void g_402b18;

unsigned int loop_multi_exit(unsigned int a0)
{
    unsigned int j;  // [bp-0x50]
    unsigned int i;  // [bp-0x4c]
    char v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x14]
    char *v4;  // [bp-0x10]
    char v5;  // [bp+0x0]

    v4 = &v5;
    memcpy(&v2, &g_402b18, 48);
    for (i = 0; 3 > i; i += 1)
    {
        for (j = 0; 4 > j; j += 1)
        {
            if (*((int *)&(&v2)[16 * i + 4 * j]) == a0)
            {
                v3 = 10 * i + j;
                return v3;
            }
        }
    }
    v3 = 4294967295;
    return v3;
}


// Function: infinite_loop at 0x401748
unsigned int infinite_loop(unsigned int *ptr)
{
    unsigned int v0;  // [bp-0xc]

    v0 = 0;
    while (*(ptr) != 1)
    {
        v0 += 1;
        if (v0 > 1000)
        {
            *(ptr) = 1;
            return v0;
        }
    }
    return v0;
}


// Function: multi_return at 0x4017ac
unsigned int multi_return(unsigned int a0)
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x4]

    if (0 > a0)
    {
        v1 = 4294967295;
        return v1;
    }
    v0 = __ROL__(a0, 1) & 4294967294;
    if (v0 > 100)
    {
        v1 = 4294967294;
        return v1;
    }
    else if (!a0 - 2 * (unsigned int)(a0 / 2))
    {
        v1 = v0;
        return v1;
    }
    else
    {
        v1 = a0 + 1;
        return v1;
    }
}


// Function: conditional_return at 0x40183c
unsigned int conditional_return(unsigned int a0)
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    if (a0 > 0)
    {
        v1 = (a0 * 2 | a0 >> 31) & 4294967294;
        return v1;
    }
    if (0 > a0)
        v0 = -(a0);
    else
        v0 = 0;
    v1 = v0;
    return v1;
}


// Function: duffs_device at 0x4018ac
extern char g_401918;
extern unsigned int g_402ad4;

unsigned int duffs_device(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned int v3;  // [bp-0x4]

    v2 = a0;
    v1 = a1;
    if (0 >= a2)
    {
        v3 = 4294967295;
        return v3;
    }
    v0 = (a2 + 7) / 8;
    if (7 < (a2 - 8 * a2 / 8 & 4294967295))
    {
        v3 = a2;
        return v3;
    }
    goto &(&g_401918)[(&g_402ad4)[a2 - 8 * a2 / 8 & 4294967295]];
}


// Function: loop_complex_cond at 0x401a80
int loop_complex_cond(unsigned int a0)
{
    unsigned int v4;  // w8
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x8]

    v3 = 0;
    v2 = a0;
    v1 = 0;
    while (true)
    {
        v0 = 0;
        if (v2 > v3)
        {
            v0 = 0;
            if (10 > v1)
            {
                if (v2 <= 0)
                    v4 = 0;
                else
                    v4 = 1;
                v0 = v4;
            }
        }
        if (!((char)v0 & 1))
            break;
        v3 += 2;
        v2 -= 1;
        v1 += 1;
    }
    return v3 + v2 + v1;
}


// Function: loop_modify_var at 0x401b34
unsigned int loop_modify_var(unsigned int a0)
{
    unsigned int cur;  // [bp-0xc]
    unsigned int v1;  // [bp-0x8]

    v1 = 0;
    for (cur = 0; a0 > cur; cur += 1)
    {
        v1 += cur;
        if (cur > 5)
            cur += 2;
    }
    return v1;
}


// Function: loop_external_state at 0x401bac
unsigned int loop_external_state(unsigned int *a0)
{
    unsigned int v0;  // [bp-0xc]

    v0 = 0;
    do
    {
    } while (!*(a0) && (v0 += 1, v0 <= 100));
    return v0;
}


// Function: recursion_factorial at 0x401bfc
unsigned int recursion_factorial(unsigned int a0)
{
    unsigned int v0;  // [bp-0x14]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    if (1 < a0)
    {
        v0 = recursion_factorial(a0 - 1) * a0;
        return v0;
    }
    v0 = 1;
    return v0;
}


// Function: tail_recursion at 0x401c5c
unsigned int tail_recursion(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    if (1 < a0)
    {
        v0 = tail_recursion(a0 - 1, a1 * a0);
        return v0;
    }
    v0 = a1;
    return v0;
}


// Function: indirect_recursion_a at 0x401cbc
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    if (0 >= a1)
    {
        v0 = a0;
        return v0;
    }
    else if (!(unsigned int)(a0 - 2 * a0 / 2))
    {
        v0 = indirect_recursion_b(a0 / 2, a1 - 1);
        return v0;
    }
    else
    {
        v0 = indirect_recursion_b(3 * a0 + 1, a1 - 1);
        return v0;
    }
}


// Function: indirect_recursion_b at 0x401d5c
unsigned int indirect_recursion_b(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    if (0 < a1)
    {
        v0 = indirect_recursion_a(a0 + 1, a1 - 1);
        return v0;
    }
    v0 = a0;
    return v0;
}


// Function: call_func_ptr at 0x401db8
int call_func_ptr(unsigned long long *a0, unsigned int a1)
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    return a0(a1);
}


// Function: call_func_ptr_array at 0x401de4
extern uint128_t $d.3;
extern unsigned long long g_413d40;

unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
    int v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x14]
    char *v3;  // [bp-0x10]
    char v4;  // [bp+0x0]

    v3 = &v4;
    *((uint128_t *)&v0) = $d.3;
    v1 = g_413d40;
    if (!((char)(a0 >> 31) & 1) && a0 < 3)
    {
        v2 = (*((long long *)((char *)&v0 + 8 * a0)))(a1);
        return v2;
    }
    v2 = 4294967295;
    return v2;
}


// Function: double_value at 0x401e64
unsigned int double_value(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: triple_value at 0x401e7c
unsigned int triple_value(unsigned int a0)
{
    return 3 * a0;
}


// Function: call_virtual_func at 0x401e98
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
    return (a1 * 2 | a1 >> 31) & 4294967294;
}


// Function: process_with_callback at 0x401eb4
unsigned int process_with_callback(unsigned long a0, unsigned int a1, unsigned long long *a2)
{
    unsigned int i;  // [bp-0x30]
    unsigned int v1;  // [bp-0x2c]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    v1 = 0;
    for (i = 0; a1 > i; i += 1)
    {
        v1 += a2(*((int *)(a0 + i * 4)));
    }
    return v1;
}


// Function: test_control_flow_l2 at 0x401f30
extern char g_402dca;

int test_control_flow_l2()
{
    char *v0;  // [bp-0xc0]
    unsigned int v1;  // [bp-0xb4]
    char *v2;  // [bp-0xb0]
    unsigned int v3;  // [bp-0xa4]
    unsigned int v4;  // [bp-0xa0]
    unsigned int result;  // [bp-0x9c]
    char *v6;  // [bp-0x98]
    unsigned int v7;  // [bp-0x8c]
    unsigned long long *v8;  // [bp-0x88]
    uint128_t v9;  // [bp-0x80]
    unsigned int v10;  // [bp-0x70]
    unsigned int flag2;  // [bp-0x64]
    uint128_t flag3;  // [bp-0x60]
    uint128_t flag4;  // [bp-0x50]
    uint128_t v14;  // [bp-0x40]
    uint128_t v15;  // [bp-0x30]
    unsigned int flag1;  // [bp-0x14]
    char *v17;  // [bp-0x10]
    char v18;  // [bp+0x0]

    v17 = &v18;
    printf(&g_402dca);
    printf("CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7) & 4294967295);
    result = 0;
    flag1 = 0;
    printf("CF-L2-02 (infinite_loop): %d\n", infinite_loop(&flag1) & 4294967295);
    v1 = 4294967291;
    v0 = "CF-L2-03 (multi_return): %d\n";
    printf("CF-L2-03 (multi_return): %d\n", multi_return(4294967291) & 4294967295);
    multi_return(100);
    printf(v0);
    v3 = 3;
    multi_return(3);
    printf(v0);
    v7 = 5;
    v2 = "CF-L2-04 (conditional_return): %d\n";
    printf("CF-L2-04 (conditional_return): %d\n", conditional_return(5) & 4294967295);
    conditional_return(v1);
    printf(v2);
    v14 = 316912650112397582603894390785;
    v15 = 633825300243241909290088267781;
    flag3 = 0;
    flag4 = 0;
    printf("CF-L2-05 (duffs_device): %d\n", duffs_device(&flag3, &v14, 8) & 4294967295);
    v4 = 10;
    printf("CF-L2-06 (loop_complex_cond): %d\n", loop_complex_cond(10) & 4294967295);
    printf("CF-L2-07 (loop_modify_var): %d\n", loop_modify_var(v4) & 4294967295);
    flag2 = 0;
    printf("CF-L2-08 (loop_external_state): %d\n", loop_external_state(&flag2) & 4294967295);
    printf("CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(v7) & 4294967295);
    printf("CF-L2-10 (tail_recursion): %d\n", tail_recursion(v7, 1) & 4294967295);
    printf("CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(v4, v3) & 4294967295);
    v8 = double_value;
    printf("CF-L2-12 (call_func_ptr): %d\n", call_func_ptr(double_value, v7) & 4294967295);
    v6 = "CF-L2-13 (call_func_ptr_array): %d\n";
    printf("CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(result, v7) & 4294967295);
    call_func_ptr_array(2, v7);
    printf(v6);
    v9 = 316912650112397582603894390785;
    v10 = 5;
    return printf("CF-L2-15 (process_with_callback): %d\n", process_with_callback(&v9, v7, v8) & 4294967295);
}


// Function: non_local_jump at 0x402188
extern unsigned long long $d.5;

long long non_local_jump(unsigned int a0)
{
    unsigned int v0;  // [bp-0x14]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    if (_setjmp(&$d.5))
    {
        v0 = 4294967295;
        return v0;
    }
    else if (0 > a0)
    {
        longjmp(&$d.5, 1); /* do not return */
    }
    else if (a0 > 100)
    {
        longjmp(&$d.5, 2); /* do not return */
    }
    else
    {
        v0 = (a0 * 2 | a0 >> 31) & 4294967294;
        return v0;
    }
}


// Function: cpp_exception at 0x402218
unsigned int cpp_exception(unsigned int a0)
{
    unsigned int v0;  // [bp-0x4]

    if (0 > a0)
    {
        v0 = 4294967295;
        return v0;
    }
    else if (a0 > 100)
    {
        v0 = 4294967294;
        return v0;
    }
    else
    {
        v0 = (a0 * 2 | a0 >> 31) & 4294967294;
        return v0;
    }
}


// Function: large_jump_table at 0x402274
extern void g_413d48;

unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
    char v0[92];  // [bp-0x70]
    unsigned int v1;  // [bp-0x14]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    memcpy(&v0, &g_413d48, 80);
    if (!((char)(a0 >> 31) & 1) && a0 < 10)
    {
        v1 = (*((long long *)&v0[8 * a0]))(a1, a2);
        return v1;
    }
    v1 = 4294967295;
    return v1;
}


// Function: op_add at 0x4022f8
int op_add(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: op_sub at 0x402318
int op_sub(unsigned int a0, unsigned int a1)
{
    return a0 - a1;
}


// Function: op_mul at 0x402338
int op_mul(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: op_div at 0x402358
unsigned int op_div(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0xc]

    if (!a1)
    {
        v0 = 0;
        return v0;
    }
    v0 = a0 / a1;
    return v0;
}


// Function: op_mod at 0x40239c
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0xc]

    if (!a1)
    {
        v0 = 0;
        return v0;
    }
    v0 = a0 - a1 * a0 / a1;
    return v0;
}


// Function: op_and at 0x4023e8
unsigned int op_and(unsigned int a0, unsigned int a1)
{
    return a0 & a1;
}


// Function: op_or at 0x402408
unsigned int op_or(unsigned int a0, unsigned int a1)
{
    return a0 | a1;
}


// Function: op_xor at 0x402428
int op_xor(unsigned int a0, unsigned int a1)
{
    return a0 ^ a1;
}


// Function: op_shl at 0x402448
int op_shl(unsigned int a0, char a1)
{
    return a0 << (a1 & 31);
}


// Function: op_shr at 0x402468
int op_shr(unsigned int a0, char a1)
{
    return a0 >> (a1 & 31);
}


// Function: conditional_func_ptr at 0x402488
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
    unsigned long long *v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    if (!a0)
    {
        v0 = double_value;
    }
    else
    {
        if (a0 == 1)
            v0 = triple_value;
        else
            v0 = recursion_factorial;
    }
    return v0(a1);
}


// Function: state_machine at 0x402504
extern char g_402530;
extern unsigned int g_402af4[4];

unsigned int state_machine(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v0 = a0;
    if (3 < a1)
    {
        v1 = 3;
        return v1;
    }
    goto &(&g_402530)[g_402af4[a1]];
}


// Function: fsm_func_table at 0x4025ec
extern uint128_t g_413d98;
extern uint128_t g_413da8;

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
    int v0;  // [bp-0x40]
    int v1;  // [bp-0x30]
    unsigned int v2;  // [bp-0x14]
    char *v3;  // [bp-0x10]
    char v4;  // [bp+0x0]

    v3 = &v4;
    *((uint128_t *)&v0) = g_413d98;
    *((uint128_t *)&v1) = g_413da8;
    if (!((char)(a1 >> 31) & 1) && a1 < 4)
    {
        v2 = (*((long long *)((char *)&v0 + 8 * a1)))(a0);
        return v2;
    }
    v2 = 3;
    return v2;
}


// Function: state_idle at 0x40266c
unsigned long long state_idle(unsigned int a0)
{
    if (a0 == 1)
        return 1;
    return 0;
}


// Function: state_processing at 0x40268c
unsigned int state_processing(unsigned int a0)
{
    unsigned int v0;  // [bp-0x4]

    switch (a0)
    {
    case 2:
        v0 = 2;
        return v0;
    case 99:
        v0 = 3;
        return v0;
    default:
        v0 = 1;
        return v0;
    }
}


// Function: state_done at 0x4026e4
unsigned long long state_done(unsigned long a0)
{
    return 2;
}


// Function: state_error at 0x4026f8
unsigned long long state_error(unsigned int a0)
{
    if (a0)
        return 3;
    return 0;
}


// Function: computed_goto at 0x40271c
extern uint128_t g_413db8;
extern uint128_t g_413dc8;

unsigned int computed_goto(unsigned long long a0, unsigned int a1)
{
    unsigned long v0;  // [bp-0x48]
    int v1;  // [bp-0x40]
    int v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x10]
    unsigned int v4;  // [bp-0x4]
    unsigned int v5;  // [bp-0x4]

    v3 = a0;
    *((uint128_t *)&v1) = g_413db8;
    *((uint128_t *)&v2) = g_413dc8;
    if (((char)(a1 >> 31) & 1))
    {
        v4 = 4294967295;
        return v4;
    }
    if (a1 > 3)
    {
        v5 = 4294967295;
        return v4;
    }
    v0 = *((long long *)((char *)&v1 + 8 * a1));
    goto v0;
}


// Function: sub_40277c at 0x40277c
long long sub_40277c()
{
    unsigned int result;  // [bp+0x4c]

    result = 0;
}


// Function: sub_402784 at 0x402784
long long sub_402784()
{
    unsigned int v0;  // [bp+0x4c]

    v0 = 10;
}


// Function: sub_402790 at 0x402790
long long sub_402790()
{
    unsigned int v0;  // [bp+0x4c]

    v0 = 20;
}


// Function: sub_40279c at 0x40279c
long long sub_40279c()
{
    unsigned int v0;  // [bp+0x4c]

    v0 = 30;
}


// Function: obfuscated_cf at 0x4027bc
unsigned int obfuscated_cf(unsigned int a0)
{
    unsigned int v0;  // [bp-0x8]

    v0 = a0;
    if (0 > a0 * a0 + 1)
        v0 = ((v0 * 2 | v0 >> 31) & 4294967294) + 1;
    v0 = (v0 * 2 | v0 >> 31) & 4294967294;
    return v0;
}


// Function: opaque_predicate at 0x402814
unsigned int opaque_predicate(unsigned int a0)
{
    unsigned int result;  // [bp-0xc]
    unsigned int v1;  // [bp-0x4]

    result = (305419896 * a0 & 4294967295) - 2 * (unsigned int)((305419896 * a0 & 4294967295) / 2);
    if (result)
    {
        v1 = 3 * a0;
        return v1;
    }
    v1 = (a0 * 2 | a0 >> 31) & 4294967294;
    return v1;
}


// Function: overlapped_code at 0x402884
int overlapped_code(unsigned int a0)
{
    unsigned int v0;  // [bp-0x4]

    if (!((char)a0 & 1))
    {
        v0 = a0 / 2;
        return v0;
    }
    v0 = 3 * a0 + 1;
    return v0;
}


// Function: test_control_flow_l3 at 0x4028d0
extern char g_402fbe;

int test_control_flow_l3()
{
    char *v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x3c]
    char *v2;  // [bp-0x38]
    unsigned int result;  // [bp-0x30]
    unsigned int flag1;  // [bp-0x2c]
    unsigned int v5;  // [bp-0x28]
    unsigned int v6;  // [bp-0x24]
    uint128_t v7;  // [bp-0x20]
    char *v8;  // [bp-0x10]
    char v9;  // [bp+0x0]

    v8 = &v9;
    printf(&g_402fbe);
    v6 = 5;
    v0 = "CF-L3-01 (non_local_jump): %d\n";
    printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
    v1 = 4294967291;
    non_local_jump(4294967291);
    printf(v0);
    v2 = "CF-L3-02 (cpp_exception): %d\n";
    printf("CF-L3-02 (cpp_exception): %d\n", cpp_exception(v6) & 4294967295);
    cpp_exception(v1);
    printf(v2);
    result = 0;
    printf("CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, v6) & 4294967295);
    printf("CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(result, v6) & 4294967295);
    flag1 = 1;
    printf("CF-L3-05 (state_machine): %d\n", state_machine(1, result) & 4294967295);
    v5 = 2;
    printf("CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, flag1) & 4294967295);
    v7 = 0x3000000020000000100000000;
    printf("CF-L3-07 (computed_goto): %d\n", computed_goto(&v7, v5) & 4294967295);
    printf("CF-L3-08 (obfuscated_cf): %d\n", obfuscated_cf(v6) & 4294967295);
    printf("CF-L3-09 (opaque_predicate): %d\n", opaque_predicate(v6) & 4294967295);
    return printf("CF-L3-10 (overlapped_code): %d\n", overlapped_code(v6) & 4294967295);
}


// Function: main at 0x402a50
unsigned int main()
{
    unsigned int result;  // [bp-0x18]
    unsigned int flag1;  // [bp-0x14]
    char *v2;  // [bp-0x10]
    char v3;  // [bp+0x0]

    v2 = &v3;
    result = 0;
    flag1 = 0;
    test_control_flow_l1();
    test_control_flow_l2();
    test_control_flow_l3();
    return result;
}


// Function: _fini at 0x402a84
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

