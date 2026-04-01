// Angr Decompilation of 1_clang_O1_g
// Platform: ARMEL

// Function: _init at 0x4004d0
void _init()
{
    call_weak_fn();
    return;
}


// Function: sub_4004dc at 0x4004dc
extern unsigned int g_413008;

int sub_4004dc()
{
    unsigned int v1;  // lr
    unsigned int v0;  // [bp-0x4]

    v0 = v1;
    goto g_413008;
}


// Function: _start at 0x40055c
int _start(unsigned int a0)
{
    unsigned int v0;  // [bp+0x0]
    char v1;  // [bp+0x4]

    __libc_start_main(main, v0, &v1, 0, 0, a0, v0); /* do not return */
}


// Function: sub_400594 at 0x400594
void sub_400594()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x4005a0
extern unsigned int g_413038;

int call_weak_fn()
{
    unsigned int v0;  // r0

    if (g_413038)
        goto LABEL_4005b8;
    return v0;
LABEL_4005b8:
    __gmon_start__(); /* do not return */
}


// Function: deregister_tm_clones at 0x4005c4
extern char __TMC_END__;
extern unsigned int g_413034;

int deregister_tm_clones()
{
    if (0)
        goto LABEL_4005e4;
    return &__TMC_END__;
LABEL_4005e4:
    if (g_413034)
        goto LABEL_4005f4;
    return &__TMC_END__;
LABEL_4005f4:
    goto g_413034;
}


// Function: register_tm_clones at 0x400608
extern char __TMC_END__;
extern unsigned int g_413040;

int register_tm_clones()
{
    if (0)
        goto LABEL_400634;
    return &__TMC_END__;
LABEL_400634:
    if (g_413040)
        goto LABEL_400644;
    return &__TMC_END__;
LABEL_400644:
    goto g_413040;
}


// Function: __do_global_dtors_aux at 0x400658
extern unsigned int __dso_handle;
extern char completed.0;
extern unsigned int g_413030;

unsigned int __do_global_dtors_aux()
{
    unsigned int v2;  // r0
    unsigned int v3;  // lr
    unsigned int v4;  // r4
    unsigned int v5;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    if (!completed.0)
        goto LABEL_400674;
    return v2;
LABEL_400674:
    v1 = v3;
    v0 = v4;
    if (!g_413030)
    {
        v5 = deregister_tm_clones();
        completed.0 = 1;
        return v5;
    }
    __cxa_finalize(__dso_handle); /* do not return */
}


// Function: frame_dummy at 0x4006c0
unsigned int frame_dummy()
{
    unsigned int v0;  // r0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: sequential_ops at 0x4006c4
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return (a1 + a0) * 2 - a2;
}


// Function: single_if at 0x4006d0
unsigned int single_if(unsigned int a0)
{
    return a0 << ((char)(0 < a0 ? 1 : 0) & 31) & (0 < a0 ? 1 : 0) - 32 >> 31;
}


// Function: if_else at 0x4006e4
unsigned int if_else(unsigned int a0)
{
    return (0 < a0 ? 1 : 0);
}


// Function: nested_if_2 at 0x4006f8
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // r2

    v0 = a0;
    if (0 < a1)
        v0 += a1;
    if (a0 > 0)
        return v0;
    return 0;
}


// Function: nested_if_deep at 0x400714
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int result;  // r0
    unsigned int v2;  // r0
    char v0;  // [bp+0x0]

    if (a0 < 1)
    {
        result = 0;
        if (!((char)armg_calculate_condition(178, a0, 1, 0)))
            goto LABEL_400720;
        return 0;
        v2 = result;
    }
    else
    {
        if (!((char)armg_calculate_condition(178, a0, 1, 0)))
            goto LABEL_400720;
        return a0;
        v2 = a0;
    }
LABEL_400720:
    if (a1 < 1)
    {
        v2 = 1;
        if (!((char)armg_calculate_condition(178, a1, 1, 0)))
            goto LABEL_40072c;
        return 1;
    }
    else
    {
        if (!((char)armg_calculate_condition(178, a1, 1, 0)))
            goto LABEL_40072c;
        return v2;
    }
LABEL_40072c:
    if (a2 < 1)
    {
        v2 = 2;
        if (!((char)armg_calculate_condition(178, a2, 1, 0)))
            goto LABEL_400738;
        return 2;
    }
    else
    {
        if (!((char)armg_calculate_condition(178, a2, 1, 0)))
            goto LABEL_400738;
        return v2;
    }
LABEL_400738:
    if (a3 < 1)
    {
        if (!((char)armg_calculate_condition(178, a3, 1, 0)))
            goto LABEL_400744;
        return 3;
    }
    else
    {
        if (!((char)armg_calculate_condition(178, a3, 1, 0)))
            goto LABEL_400744;
        return v2;
    }
LABEL_400744:
    return (0 < *((int *)&v0) ? 5 : 4);
}


// Function: if_elseif_chain at 0x400758
unsigned int if_elseif_chain(unsigned int a0)
{
    return (a0 < 3 ? 10 + a0 * 10 : 4294967295);
}


// Function: if_elseif_long at 0x400774
unsigned int if_elseif_long(unsigned int a0)
{
    return (a0 < 5 ? a0 * 100 + 100 : 4294967295);
}


// Function: switch_small at 0x400790
extern unsigned int g_401f7c;

int switch_small(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = 6100;
    if (a0 <= 3)
        v0 = &g_401f7c;
    return *((int *)(v0 + a0 * 4));
}


// Function: switch_large at 0x4007b0
unsigned int switch_large(unsigned int a0)
{
    return (a0 < 10 ? a0 * 10 : 4294967295);
}


// Function: switch_default at 0x4007c8
unsigned int switch_default(unsigned int a0)
{
    unsigned int v0;  // r1

    v0 = a0 - 1;
    return (v0 < 3 ? v0 * 100 + 100 : 0);
}


// Function: switch_fallthrough at 0x4007e4
unsigned int switch_fallthrough(unsigned int a0)
{
    unsigned int v0;  // r1

    v0 = 0;
    if (a0 != 1)
    {
        if (a0 != 2)
        {
            if (a0 == 3)
                v0 = 12;
            else
                return 4294967295;
        }
        v0 += a0 * 2;
    }
    return v0 + a0;
}


// Function: loop_for_fixed at 0x400818
unsigned int loop_for_fixed(unsigned int a0)
{
    unsigned int result;  // r0
    unsigned int v1;  // r0

    if (a0 < 1)
    {
        result = 0;
        if (!((char)armg_calculate_condition(178, a0, 1, 0)))
            goto LABEL_400824;
        return 0;
        v1 = result;
    }
    else
    {
        if (!((char)armg_calculate_condition(178, a0, 1, 0)))
            goto LABEL_400824;
        return a0;
        v1 = a0;
    }
LABEL_400824:
    return (((v1 - 1) * (v1 - 2) >> 32 & 1) * 0x80000000 | (v1 - 1) * (v1 - 2) >> 1) + v1 - 1;
}


// Function: loop_while at 0x400848
unsigned int loop_while(unsigned int a0)
{
    unsigned int result;  // r0

    if (a0)
    {
        result = 0;
        do
        {
            result += 1;
            a0 = (a0 * 1717986919 >> 34) + (a0 * 1717986919 >> 63);
        } while (18 < a0 + 9);
    }
    else
    {
        result = 0;
    }
    if (result)
        return result;
    return 1;
}


// Function: loop_dowhile at 0x400894
unsigned int loop_dowhile(unsigned int a0)
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0
    unsigned int v3;  // r0

    v0 = 0;
    do
    {
        v3 = v0 + 1;
        a0 = (a0 * 1717986919 >> 34) + (a0 * 1717986919 >> 63);
        v0 = v3;
    } while (18 < a0 + 9);
    return v1 + 1;
}


// Function: loop_nested at 0x4008c8
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
    return (0 < a0 ? (a1 & ~(a1 >> 31)) * a0 : 0);
}


// Function: loop_break at 0x4008e0
unsigned int loop_break(unsigned int a0)
{
    unsigned int v0;  // r0

    v0 = 0;
    do
    {
        if (*((int *)(4200820 + 4 * v0)) != a0)
            goto LABEL_0x4008fc;
        return v0;
    } while ((v0 += 1, v0 != 5));
    return 4294967295;
}


// Function: loop_continue at 0x400914
unsigned int loop_continue(unsigned int i)
{
    unsigned int v0;  // r2
    unsigned int v1;  // r1

    if (i < 1)
        return 0;
    v0 = 0;
    v1 = 0;
    do
    {
        v0 += 1;
        if (((char)v0 & 1))
            v1 += v0;
    } while (i != v0);
    return v1;
}


// Function: goto_forward at 0x40094c
unsigned int goto_forward(unsigned int a0)
{
    unsigned int v1;  // r1

    if (a0 <= 1)
        v1 = 1;
    else
        v1 = a0;
    return a0 * v1 * 2;
}


// Function: goto_backward at 0x400964
unsigned int goto_backward(unsigned int a0)
{
    unsigned int result;  // r0
    unsigned int i;  // r0
    unsigned int v2;  // r3
    unsigned int v3;  // r2
    unsigned int v4;  // r3
    unsigned int v5;  // r1

    if (a0 < 1)
    {
        result = 1;
        if (!((char)armg_calculate_condition(178, a0, 1, 0)))
            goto LABEL_400970;
        return 1;
        i = result;
    }
    else
    {
        if (!((char)armg_calculate_condition(178, a0, 1, 0)))
            goto LABEL_400970;
        return a0;
        i = a0;
    }
LABEL_400970:
    v2 = 1;
    v3 = 0;
    do
    {
        v3 += 1;
        v5 = v3 * v2;
        v2 = v5;
    } while (i != v3);
    return v3 * v4;
}


// Function: ternary_op at 0x400994
int ternary_op(unsigned int a0, unsigned int a1)
{
    if (a0 > a1)
        return a0;
    return a1;
}


// Function: test_control_flow_l1 at 0x4009a0
extern char g_401f0d;

int test_control_flow_l1()
{
    unsigned int v0;  // r0

    puts(&g_401f0d);
    printf("CF-L1-01 (sequential_ops): %d\n", 21);
    printf("CF-L1-02 (single_if): %d\n", 20);
    printf("CF-L1-02 (single_if): %d\n", 4294967291);
    printf("CF-L1-03 (if_else): %d\n", 1);
    printf("CF-L1-03 (if_else): %d\n", 0);
    printf("CF-L1-04 (nested_if_2): %d\n", 15);
    printf("CF-L1-04 (nested_if_2): %d\n", 10);
    printf("CF-L1-04 (nested_if_2): %d\n", 0);
    printf("CF-L1-05 (nested_if_deep): %d\n", 5);
    printf("CF-L1-06 (if_elseif_chain): %d\n", 20);
    printf("CF-L1-07 (if_elseif_long): %d\n", 400);
    printf("CF-L1-08 (switch_small): %d\n", 50);
    printf("CF-L1-09 (switch_large): %d\n", 70);
    printf("CF-L1-10 (switch_default): %d\n", 0);
    printf("CF-L1-11 (switch_fallthrough): %d\n", 21);
    printf("CF-L1-12 (loop_for_fixed): %d\n", 45);
    printf("CF-L1-13 (loop_while): %d\n", 5);
    printf("CF-L1-14 (loop_dowhile): %d\n", 4);
    printf("CF-L1-15 (loop_nested): %d\n", 12);
    printf("CF-L1-16 (loop_break): %d\n", 2);
    printf("CF-L1-16 (loop_break): %d\n", 4294967295);
    printf("CF-L1-17 (loop_continue): %d\n", 25);
    printf("CF-L1-18 (goto_forward): %d\n", 50);
    printf("CF-L1-18 (goto_forward): %d\n", 4294967290);
    printf("CF-L1-19 (goto_backward): %d\n", 120);
    printf("CF-L1-20 (ternary_op): %d\n", 10);
    v0 = printf("CF-L1-20 (ternary_op): %d\n", 8);
    return printf("CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x400bb8
extern unsigned int g_401988[4];

unsigned int loop_multi_exit(unsigned int a0)
{
    unsigned int v4;  // lr
    unsigned int v5;  // r6
    unsigned int v14;  // r5
    unsigned int v15;  // r5
    unsigned int v6;  // r5
    unsigned int v7;  // r4
    unsigned int v8;  // r2
    unsigned int v9[4];  // r3
    unsigned int v10;  // r6
    unsigned int result;  // r4
    unsigned int v12;  // r5
    unsigned int v13;  // r5
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    unsigned int v2;  // [bp-0x8]
    unsigned int v3;  // [bp-0x4]

    v3 = v4;
    v2 = v5;
    v1 = v6;
    v0 = v7;
    v8 = 0;
    v9 = &g_401988[0];
    do
    {
        v10 = 1;
        result = 1;
        v12 = 0;
        if (g_401988[4 * v8] != a0)
        {
            v13 = 1;
            do
            {
                if (v13 == 4)
                {
                    v10 = 5;
                    if (0)
                        goto LABEL_400c58;
                }
            } while ((v15 = v14 + 1, v13 = v15, v9[v14] != a0));
            result = (v15 - 2 < 3 ? 1 : 0);
            v12 = v15 - 1;
        }
        vvar_112{r64|4b} = v12 + v8 * 10;
        if (result)
            goto LABEL_400c58;
    } while ((v9 += 16, v8 += 1, v8 != 3));
    v10 = 2;
LABEL_400c58:
    if (v10 != 2)
        return vvar_2{r64|4b};
    return 4294967295;
}


// Function: infinite_loop at 0x400c70
unsigned int infinite_loop(unsigned int *ptr)
{
    unsigned int v0;  // r2
    unsigned int v1;  // r0
    unsigned int v2;  // r0

    v0 = 0;
    v1 = 1001;
    do
    {
        if (*(ptr) == 1)
        {
            if (!((char)armg_calculate_condition(2, *(ptr), 1, 0)))
                goto LABEL_0x400c90;
            return v0;
            v2 = v0;
        }
        else
        {
            if (!((char)armg_calculate_condition(2, *(ptr), 1, 0)))
                goto LABEL_0x400c90;
            return v1;
            v2 = v1;
        }
    } while ((v1 = v2, v0 += 1, v0 != v1));
    *(ptr) = 1;
    return v1;
}


// Function: multi_return at 0x400ca8
unsigned int multi_return(unsigned int a0)
{
    unsigned int v0;  // r0
    unsigned int v1;  // r0
    unsigned int v2;  // r1

    if (armg_calculate_condition(66, a0, 0, 0))
    {
        v0 = 4294967295;
        if (!((char)armg_calculate_condition(66, a0, 0, 0)))
            goto LABEL_400cb4;
        return 4294967295;
        v1 = v0;
    }
    else
    {
        if (!((char)armg_calculate_condition(66, a0, 0, 0)))
            goto LABEL_400cb4;
        return a0;
        v1 = a0;
    }
LABEL_400cb4:
    v2 = v1;
    if (50 >= v2)
        goto LABEL_400cc4;
    return 4294967294;
LABEL_400cc4:
    if (((char)v2 & 1))
        return v2 + 1;
    return v2 * 2;
}


// Function: conditional_return at 0x400cd4
unsigned int conditional_return(unsigned int a0)
{
    if (0 >= a0)
        return -(a0);
    return a0 * 2;
}


// Function: duffs_device at 0x400ce8
unsigned int duffs_device(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v0;  // r12
    unsigned int v1;  // r4
    unsigned int addr[8];  // r0
    unsigned int v10[8];  // r1
    unsigned int ptr3[8];  // r0
    unsigned int v12[8];  // r1
    unsigned int ptr4[8];  // r0
    unsigned int v14[8];  // r1
    unsigned int ptr5[8];  // r0
    unsigned int v16[8];  // r1
    unsigned int ptr6[8];  // r0
    unsigned int v18[8];  // r1
    unsigned int ptr7[8];  // r0
    unsigned int v3;  // r8
    unsigned int ptr[8];  // r0
    unsigned int v5[8];  // r1
    unsigned int v6[8];  // r1
    unsigned int p[8];  // r0
    unsigned int v8[8];  // r1

    if (a2 < 1)
        return 4294967295;
    v0 = a2 - (a2 + (a2 >> 31 >> 29) & 0xfffffff8);
    v1 = a2 + 7 + (a2 + 7 >> 31 >> 29) >> 3;
    if (7 < v0)
        return a2;
    ptr = (armg_calculate_condition(2, v0, 7, 0) ? 0 : (armg_calculate_condition(2, v0, 7, 0) ? ... : (armg_calculate_condition(2, v0, 7, 0) ? ... : (armg_calculate_condition(2, v0, 7, 0) ? ... : (armg_calculate_condition(2, v0, 7, 0) ? ... : (armg_calculate_condition(2, v0, 7, 0) ? (armg_calculate_condition(2, v0, 7, 0) ? (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & v3 >> (char)(((armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & 255) < 32 ? (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & 255 : 31) : (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))())) & (armg_calculate_condition(2, v0, 7, 0) ? (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & v3 >> (char)(((armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & 255) < 32 ? (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & 255 : 31) : (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))())) >> (char)(((armg_calculate_condition(2, v0, 7, 0) ? (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & v3 >> (char)(((armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & 255) < 32 ? (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & 255 : 31) : (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))())) & 255) < 32 ? (armg_calculate_condition(2, v0, 7, 0) ? (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & v3 >> (char)(((armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & 255) < 32 ? (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & 255 : 31) : (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))())) & 255 : 31) : (armg_calculate_condition(2, v0, 7, 0) ? (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & v3 >> (char)(((armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & 255) < 32 ? (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()) & 255 : 31) : (armg_calculate_condition(2, v0, 7, 0) ? 0 : (char *)(4197676 + *((int *)(4197676 + 4 * v0)))()))))))));
    do
    {
        v6 = &v5[1];
        p = &ptr[1];
        ptr[0] = v5[0];
        v8 = &v6[1];
        addr = &p[1];
        p[0] = v6[0];
        v10 = &v8[1];
        ptr3 = &addr[1];
        addr[0] = v8[0];
        v12 = &v10[1];
        ptr4 = &ptr3[1];
        ptr3[0] = v10[0];
        v14 = &v12[1];
        ptr5 = &ptr4[1];
        ptr4[0] = v12[0];
        v16 = &v14[1];
        ptr6 = &ptr5[1];
        ptr5[0] = v14[0];
        v18 = &v16[1];
        ptr7 = &ptr6[1];
        ptr6[0] = v16[0];
        v5 = &v18[1];
        ptr = &ptr7[1];
        ptr7[0] = v18[0];
        v1 -= 1;
    } while (1 < v1);
    return a2;
}


// Function: loop_complex_cond at 0x400da4
int loop_complex_cond(unsigned int a0)
{
    unsigned int v0;  // r3
    unsigned int v1;  // r1
    unsigned int v2;  // r3
    unsigned int v3;  // r12

    if (a0 >= 1)
    {
        v0 = 0;
        v1 = 0;
        do
        {
            v1 += 2;
            v3 = v0 + 1;
            a0 -= 1;
        } while (a0 >= 2 && a0 > v1 && (v0 = v3, a0 = a0, v2 < 9));
    }
    else
    {
        v1 = 0;
        v3 = 0;
    }
    return a0 + v1 + v3;
}


// Function: loop_modify_var at 0x400dfc
unsigned int loop_modify_var(unsigned int a0)
{
    unsigned int v0;  // r2
    unsigned int v1;  // r1
    unsigned int v2;  // r1
    unsigned int v3;  // r2
    unsigned int v4;  // r1
    unsigned int v6;  // r2
    unsigned int v7;  // r2

    if (a0 < 1)
        return 0;
    v0 = 0;
    v1 = 0;
    do
    {
        v3 = v0;
        v4 = v3 + v1;
        if (5 < v3)
            v6 = v3 + 2;
        else
            v6 = v3;
    } while ((v7 = v6 + 1, v0 = v6 + 1, v1 = v4, v0 < a0));
    return v3 + v2;
}


// Function: loop_external_state at 0x400e38
unsigned int loop_external_state(unsigned int *a0)
{
    unsigned int v0;  // r0

    v0 = 0;
    do
    {
        if (!*(a0))
            goto LABEL_0x400e4c;
        return v0;
    } while ((v0 += 1, v0 != 101));
    return 101;
}


// Function: recursion_factorial at 0x400e60
unsigned int recursion_factorial(unsigned int a0)
{
    if (a0 < 2)
        return 1;
    return recursion_factorial(a0 - 1) * a0;
}


// Function: tail_recursion at 0x400e8c
unsigned int tail_recursion(unsigned int a0, unsigned int a1)
{
    unsigned int v1;  // lr
    unsigned int v2;  // r0
    unsigned int v0;  // [bp-0x4]

    if (a0 < 2)
        return a1;
    v0 = v1;
    v2 = tail_recursion(a0 - 1, a1 * a0);
    return tail_recursion(a0 - 1, a1 * a0);
}


// Function: indirect_recursion_a at 0x400eb8
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
    unsigned int v1;  // r0
    unsigned int v2;  // r0
    unsigned int v3;  // r0
    unsigned int v0;  // [bp-0x4]

    if (a1 < 1)
        return a0;
    if (!((char)a0 & 1))
    {
        if (a1 >= 2)
            goto LABEL_400ed8;
        return a0 + (a0 >> 31) >> 1;
LABEL_400ed8:
        v1 = (a0 + (a0 >> 31) >> 1) + 1;
    }
    else
    {
        v2 = a0 * 3;
        if (a1 < 2)
        {
            v2 += 1;
            if (!((char)armg_calculate_condition(178, a1, 2, 0)))
                goto LABEL_400ef0;
            return v2 + 1;
        }
        else
        {
            if (!((char)armg_calculate_condition(178, a1, 2, 0)))
                goto LABEL_400ef0;
            return v2;
        }
LABEL_400ef0:
        v1 = v2 + 2;
    }
    v0 = vvar_4{r64|4b};
    v3 = indirect_recursion_a(v1, a1 - 2);
    return indirect_recursion_a(v1, a1 - 2);
}


// Function: call_func_ptr at 0x400f08
int call_func_ptr(unsigned int *a0, unsigned int a1)
{
    unsigned int v0;  // r0

    v0 = a0(a1);
    return a0(a1);
}


// Function: call_func_ptr_array at 0x400f24
typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} struct_0;

extern struct_0 g_412ebc;

unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
    unsigned int v1;  // r2
    unsigned int v2;  // lr
    unsigned int v3;  // r0
    unsigned int v0;  // [bp-0x4]

    v1 = a0;
    if (2 >= a0)
        goto LABEL_400f34;
    return 4294967295;
LABEL_400f34:
    v0 = v2;
    v3 = (&g_412ebc.field_0)[a0](a1);
    return (&g_412ebc.field_0)[a0](a1);
}


// Function: $a.16 at 0x400f5c
unsigned int $a.16(unsigned int a0)
{
    return a0 * 2;
}


// Function: triple_value at 0x400f64
unsigned int triple_value(unsigned int a0)
{
    return a0 * 3;
}


// Function: call_virtual_func at 0x400f6c
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
    return a1 * 2;
}


// Function: process_with_callback at 0x400f74
unsigned int process_with_callback(unsigned int *a0, unsigned int a1, unsigned int *a2)
{
    unsigned int v0;  // r6
    unsigned int result;  // r5
    unsigned int *v2;  // r7
    unsigned int *v3;  // r7
    unsigned int v4;  // r5

    if (a1 < 1)
        return 0;
    v0 = 0;
    do
    {
        result = a1;
        v2 = a0;
        v3 = v2 + 1;
        v0 += a2(*(v2));
        v4 = result - 1;
        a0 = v3;
        a1 = v4;
    } while (result != 1);
    return v0;
}


// Function: test_control_flow_l2 at 0x400fbc
extern unsigned int g_401988;
extern char g_401f31;

int test_control_flow_l2()
{
    unsigned int v2;  // r0
    unsigned int v3;  // r2
    unsigned int v11;  // r1
    unsigned int v12;  // r1
    unsigned int v13;  // r5
    unsigned int v14;  // r6
    unsigned int v15;  // r0
    unsigned int v16;  // r6
    unsigned int v17;  // r6
    unsigned int v18;  // r1
    unsigned int v4;  // r3
    unsigned int v23;  // r0
    unsigned int v5;  // r1
    unsigned int v6;  // r6
    unsigned int v7;  // r6
    unsigned int v8;  // r6
    unsigned int v9;  // r6
    unsigned int v10;  // r0
    unsigned int result;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]

    puts(&g_401f31);
    v2 = 0;
    v3 = &g_401988;
    v4 = 0;
    while (true)
    {
        v6 = 1;
        do
        {
            if (v6 == 4)
            {
                v9 = 5;
                if (0)
                    goto LABEL_401058;
                goto LABEL_401040;
            }
        } while ((v8 = v7 + 1, v6 = v8, *((int *)(v3 + v7 * 4)) != 7));
        v5 = ~(v2) + v8;
        v9 = 1;
        if (v8 - 2 < 3)
            goto LABEL_401058;
LABEL_401040:
        v3 += 16;
        v2 -= 10;
        v4 += 1;
        if (v4 == 3)
        {
            v9 = 2;
LABEL_401058:
            if (v9 == 2)
                v5 = 4294967295;
            printf("CF-L2-01 (loop_multi_exit): %d\n", v5);
            v10 = 0;
            v1 = 0;
            v11 = 1001;
            do
            {
                if (v1 == 1)
                {
                    v12 = v10;
                    goto LABEL_4010a4;
                }
            } while ((v10 += 1, v10 != 1001));
            v1 = 1;
            v12 = v11;
LABEL_4010a4:
            printf("CF-L2-02 (infinite_loop): %d\n", v12);
            v13 = 4294967295;
            printf("CF-L2-03 (multi_return): %d\n", 4294967295);
            printf("CF-L2-03 (multi_return): %d\n", 4294967294);
            printf("CF-L2-03 (multi_return): %d\n", 4);
            v14 = 10;
            printf("CF-L2-04 (conditional_return): %d\n", 10);
            printf("CF-L2-04 (conditional_return): %d\n", 5);
            printf("CF-L2-05 (duffs_device): %d\n", 8);
            v15 = 11;
            do
            {
                v16 = v14;
            } while (v15 - 2 > v16 - 8 && (v13 += 1, v15 -= 1, v17 = v16 + 2, v14 = v16 + 2, v13 < 9));
            printf("CF-L2-06 (loop_complex_cond): %d\n", v16 + 2);
            printf("CF-L2-07 (loop_modify_var): %d\n", 30);
            v18 = 0;
            result = 0;
            do
            {
                if (result)
                    goto LABEL_401180;
            } while ((v18 += 1, v18 != 101));
            v18 = 101;
LABEL_401180:
            printf("CF-L2-08 (loop_external_state): %d\n", v18);
            printf("CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5));
            printf("CF-L2-10 (tail_recursion): %d\n", tail_recursion(5, 1));
            printf("CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(10, 3));
            printf("CF-L2-12 (call_func_ptr): %d\n", 10);
            printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
            printf("CF-L2-13 (call_func_ptr_array): %d\n", recursion_factorial(5));
            v23 = printf("CF-L2-15 (process_with_callback): %d\n", 30);
            return printf("CF-L2-15 (process_with_callback): %d\n", 30);
        }
    }
}


// Function: non_local_jump at 0x401270
extern unsigned int jump_buffer;

unsigned int non_local_jump(unsigned int a0)
{
    if (_setjmp(&jump_buffer))
    {
        return 4294967295;
    }
    else if ((char)armg_calculate_condition(209, a0, 1, 0))
    {
        longjmp(&jump_buffer, 1); /* do not return */
    }
    else if (101 > a0)
    {
        return a0 * 2;
    }
    else
    {
        longjmp(&jump_buffer, 2); /* do not return */
    }
}


// Function: cpp_exception at 0x4012e4
unsigned int cpp_exception(unsigned int a0)
{
    unsigned int v0;  // r1

    v0 = a0 * 2;
    if (100 < a0)
        v0 = 4294967294;
    if (!armg_calculate_condition(209, a0, 1, 0))
        return v0;
    return 4294967295;
}


// Function: large_jump_table at 0x401300
typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} struct_0;

extern struct_0 g_412ec8;

unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v1;  // r3
    unsigned int v2;  // lr
    unsigned int v3;  // r0
    unsigned int v0;  // [bp-0x4]

    v1 = a0;
    if (9 >= a0)
        goto LABEL_401310;
    return 4294967295;
LABEL_401310:
    v0 = v2;
    v3 = (&g_412ec8.field_0)[a0](a1, a2);
    return (&g_412ec8.field_0)[a0](a1, a2);
}


// Function: $a.22 at 0x40133c
int $a.22(unsigned int a0, unsigned int a1)
{
    return a1 + a0;
}


// Function: op_sub at 0x401344
int op_sub(unsigned int a0, unsigned int a1)
{
    return a0 - a1;
}


// Function: op_mul at 0x40134c
int op_mul(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: op_div at 0x401358
unsigned int op_div(unsigned int a0, unsigned int a1)
{
    unsigned int v1;  // r0
    unsigned int v0;  // [bp-0x4]

    if (!a1)
    {
        a0 = 0;
        if (!((char)armg_calculate_condition(2, a1, 0, 0)))
            goto LABEL_401364;
        return 0;
    }
    else
    {
        if (!((char)armg_calculate_condition(2, a1, 0, 0)))
            goto LABEL_401364;
        return a0;
    }
LABEL_401364:
    v0 = vvar_4{r64|4b};
    v1 = __divsi3(a0);
    return __divsi3(a0);
}


// Function: op_mod at 0x401374
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
    unsigned int v1;  // r1
    unsigned int v0;  // [bp-0x4]

    if (!a1)
    {
        a0 = 0;
        if (!((char)armg_calculate_condition(2, a1, 0, 0)))
            goto LABEL_401380;
        return 0;
    }
    else
    {
        if (!((char)armg_calculate_condition(2, a1, 0, 0)))
            goto LABEL_401380;
        return a0;
    }
LABEL_401380:
    v0 = vvar_4{r64|4b};
    __aeabi_idivmod(a0);
    return v1;
}


// Function: op_and at 0x401394
unsigned int op_and(unsigned int a0, unsigned int a1)
{
    return a1 & a0;
}


// Function: op_or at 0x40139c
unsigned int op_or(unsigned int a0, unsigned int a1)
{
    return a1 | a0;
}


// Function: op_xor at 0x4013a4
int op_xor(unsigned int a0, unsigned int a1)
{
    return a1 ^ a0;
}


// Function: op_shl at 0x4013ac
unsigned int op_shl(unsigned int a0, char a1)
{
    return a0 << (a1 & 31) & a1 - 32 >> 31;
}


// Function: op_shr at 0x4013b4
unsigned int op_shr(unsigned int a0, char a1)
{
    return (a1 < 32 ? a0 >> a1 : a0 >> 31);
}


// Function: conditional_func_ptr at 0x4013bc
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
    unsigned int *v0;  // r3
    unsigned int *v1;  // r2
    unsigned int *v2;  // r2
    unsigned int v3;  // r0

    v0 = recursion_factorial;
    if (a0 == 1)
        v0 = triple_value;
    v1 = $a.16;
    if (a0)
        v2 = v0;
    else
        v2 = v1;
    v3 = v2();
    return v2();
}


// Function: state_machine at 0x401408

unsigned int state_machine(unsigned int a0, unsigned int a1)
{
    switch (a1)
    {
    case 0:
        return a0 - 1 + -(a0 - 1) + (a0 - 1 <= 0);
    case 1:
        if (a0 == 2)
            return 2;
        return (a0 == 99 ? 3 : 1);
    case 2:
        return a1;
    case 3:
        return (a0 ? 3 : 0);
    default:
        a1 = 3;
        break;
    }
}


// Function: fsm_func_table at 0x401470

unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
    switch (a1)
    {
    case 0:
        break;
    default:
        return 3;
    }
}


// Function: $a.28 at 0x4014a8
int $a.28(unsigned int a0)
{
    return a0 - 1 + -(a0 - 1) + (a0 - 1 <= 0);
}


// Function: state_processing at 0x4014b8
unsigned int state_processing(unsigned int a0)
{
    if (a0 == 2)
        return 2;
    return (a0 == 99 ? 3 : 1);
}


// Function: state_done at 0x4014d0
unsigned int state_done()
{
    return 2;
}


// Function: state_error at 0x4014d8
unsigned int state_error(unsigned int a0)
{
    return (a0 ? 3 : 0);
}


// Function: computed_goto at 0x4014e4

unsigned int computed_goto(unsigned int a0, unsigned int a1)
{
}


// Function: sub_401500 at 0x401500
unsigned int sub_401500()
{
    return 0;
}


// Function: sub_401508 at 0x401508
unsigned int sub_401508()
{
    return 20;
}


// Function: sub_401510 at 0x401510
unsigned int sub_401510()
{
    return 30;
}


// Function: sub_401518 at 0x401518
unsigned int sub_401518()
{
    return 10;
}


// Function: obfuscated_cf at 0x401524
unsigned int obfuscated_cf(unsigned int a0)
{
    return a0 * 2;
}


// Function: opaque_predicate at 0x40152c
unsigned int opaque_predicate(unsigned int a0)
{
    return a0 * 2;
}


// Function: overlapped_code at 0x401534
unsigned int overlapped_code(unsigned int a0)
{
    if (((char)a0 & 1))
        return a0 * 3 + 1;
    return a0 + (a0 >> 31) >> 1;
}


// Function: test_control_flow_l3 at 0x401550
extern char g_401f55;

int test_control_flow_l3()
{
    unsigned int v3;  // r0

    puts(&g_401f55);
    printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5));
    printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291));
    printf("CF-L3-02 (cpp_exception): %d\n", 10);
    printf("CF-L3-02 (cpp_exception): %d\n", 4294967295);
    printf("CF-L3-03 (large_jump_table): %d\n", 15);
    printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
    printf("CF-L3-05 (state_machine): %d\n", 1);
    printf("CF-L3-07 (computed_goto): %d\n", computed_goto(printf("CF-L3-06 (fsm_func_table): %d\n", 2), 2));
    printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
    printf("CF-L3-09 (opaque_predicate): %d\n", 10);
    v3 = printf("CF-L3-10 (overlapped_code): %d\n", 16);
    return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


// Function: main at 0x40166c
unsigned int main()
{
    test_control_flow_l1();
    test_control_flow_l2();
    test_control_flow_l3();
    return 0;
}


// Function: __divsi3 at 0x401688
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
            goto LABEL_4018a2;
LABEL_4018a1:
    }
    else
    {
LABEL_40189e:
        if (armg_calculate_condition(178, a0, 0, 0))
            goto LABEL_4018a1;
LABEL_4018a2:
    }
    goto LABEL_40189e;
}


// Function: .divsi3_skip_div0_test at 0x401690
extern char g_4016c8;

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
        vvar_783{r68|4b} = &g_4016c8;
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


// Function: __aeabi_idivmod at 0x4018a8
int __aeabi_idivmod(unsigned int a0, unsigned int a1)
{
}


// Function: __aeabi_ldiv0 at 0x4018c8
int __aeabi_ldiv0(unsigned int a0, unsigned int a1)
{
    unsigned int v2;  // lr
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = a1;
}


// Function: _fini at 0x4018d8
int _fini(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned int v2;  // lr
    unsigned int v3;  // r0
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp-0x4]

    v1 = v2;
    v0 = a3;
    v3 = sub_4018dc();
    return sub_4018dc();
}


// Function: sub_4018dc at 0x4018dc
int sub_4018dc(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a0;
}

