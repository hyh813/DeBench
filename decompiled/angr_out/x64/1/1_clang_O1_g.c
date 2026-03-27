// Angr Decompilation of 1_clang_O1_g
// Platform: AMD64

// Function: _init at 0x401000
typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_405fe0;

unsigned long long * _init()
{
    unsigned long long *v1;  // rax

    v1 = g_405fe0;
    if (g_405fe0)
        v1 = g_405fe0();
    return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_406008;
extern unsigned long long g_406010;

void sub_401020()
{
    unsigned long v0;  // [bp-0x8]

    v0 = g_406008;
    goto g_406010;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
    char *v1;  // rdi

    return puts(v1);
}


// Function: _start at 0x401080
void _start(unsigned long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long v3;  // rax
    unsigned long long v1;  // [bp+0x0]
    unsigned long v2;  // [bp+0x8]

    v1 = v3;
    __libc_start_main(main, v1, &v2, 0, 0, a2, &v1, v1); /* do not return */
}


// Function: sub_4010a5 at 0x4010a5
void sub_4010a5()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198565()
}


// Function: sub_4010a6 at 0x4010a6
void sub_4010a6()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x4010b0
extern unsigned long long __TMC_END__;

unsigned long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: sub_4010d9 at 0x4010d9
void sub_4010d9()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x4010e0

unsigned long long register_tm_clones()
{
    return 0;
}


// Function: sub_401119 at 0x401119
void sub_401119()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401120
extern unsigned long long __dso_handle;
extern char completed.0;
extern unsigned long long g_405ff0;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    if (completed.0)
        return v2;
    if (g_405ff0)
        __cxa_finalize(__dso_handle);
    v1 = deregister_tm_clones();
    completed.0 = 1;
    return v1;
}


// Function: sub_401155 at 0x401155
void sub_401155()
{
}


// Function: sub_401159 at 0x401159
void sub_401159()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x401160
unsigned long long frame_dummy()
{
    return register_tm_clones();
}


// Function: sub_401169 at 0x401169
void sub_401169(unsigned long a0, unsigned long a1, unsigned long a2)
{
    sequential_ops();
    return;
}


// Function: sequential_ops at 0x401170
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return (a0 + a1) * 2 - a2;
}


// Function: sub_401178 at 0x401178
void sub_401178(unsigned long a0)
{
    single_if();
    return;
}


// Function: single_if at 0x401180
int single_if(unsigned long a0)
{
    return (a0 & 4294967295) << ((unsigned int)a0 > 0);
}


// Function: sub_40118a at 0x40118a
void sub_40118a(unsigned long a0)
{
    if_else();
    return;
}


// Function: if_else at 0x401190
long long if_else(unsigned int a0)
{
    return a0 > 0;
}


// Function: sub_401198 at 0x401198
void sub_401198(unsigned long a0, unsigned long a1)
{
    nested_if_2();
    return;
}


// Function: nested_if_2 at 0x4011a0
unsigned long long nested_if_2(unsigned int a0, unsigned int a1)
{
    if (a0 > 0)
        return (a1 < 0 ? 0 : a1) + a0 & 4294967295;
    return 0;
}


// Function: nested_if_deep at 0x4011b0
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
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
        return a4 > 0 | 4;
    }
    else
    {
        return 3;
    }
}


// Function: sub_4011e1 at 0x4011e1
void sub_4011e1(unsigned long a0)
{
    if_elseif_chain();
    return;
}


// Function: if_elseif_chain at 0x4011f0
unsigned long long if_elseif_chain(unsigned int a0)
{
    return (a0 < 3 ? a0 * 10 + 10 : 4294967295);
}


// Function: sub_401203 at 0x401203
void sub_401203(unsigned long a0)
{
    if_elseif_long();
    return;
}


// Function: if_elseif_long at 0x401210
unsigned long long if_elseif_long(unsigned int a0)
{
    return (a0 < 5 ? a0 * 100 + 100 : 4294967295);
}


// Function: sub_401222 at 0x401222
void sub_401222(unsigned long a0)
{
    switch_small();
    return;
}


// Function: switch_small at 0x401230
extern unsigned int g_403654[4];

unsigned long long switch_small(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = 4294967295;
    if (a0 <= 3)
        v1 = g_403654[a0];
    return v1;
}


// Function: sub_401248 at 0x401248
void sub_401248(unsigned long a0)
{
    switch_large();
    return;
}


// Function: switch_large at 0x401250
unsigned long long switch_large(unsigned int a0)
{
    return (a0 < 10 ? a0 * 10 : 4294967295);
}


// Function: sub_401262 at 0x401262
void sub_401262(unsigned long a0)
{
    switch_default();
    return;
}


// Function: switch_default at 0x401270
unsigned long long switch_default(unsigned int a0)
{
    unsigned int v1;  // edi

    v1 = a0 - 1;
    return (v1 < 3 ? v1 * 100 + 100 : 0);
}


// Function: sub_401282 at 0x401282
void sub_401282(unsigned long a0)
{
    switch_fallthrough();
    return;
}


// Function: switch_fallthrough at 0x401290
unsigned long long switch_fallthrough(unsigned long a0)
{
    unsigned long long v1;  // rax

    v1 = 0;
    if ((unsigned int)a0 != 1)
    {
        if ((unsigned int)a0 != 2)
        {
            if ((unsigned int)a0 == 3)
                v1 = 12;
            else
                return 4294967295;
        }
        v1 += a0 * 2;
    }
    return v1 + a0;
}


// Function: sub_4012b1 at 0x4012b1
void sub_4012b1(unsigned long a0)
{
    loop_for_fixed();
    return;
}


// Function: loop_for_fixed at 0x4012c0
unsigned long long loop_for_fixed(unsigned long a0)
{
    if ((unsigned int)a0 <= 0)
        return 0;
    return (unsigned int)((a0 - 1 & 4294967295) * (a0 - 2 & 4294967295) >> 1) + (unsigned int)a0 - 1;
}


// Function: sub_4012db at 0x4012db
void sub_4012db(unsigned long a0)
{
    loop_while();
    return;
}


// Function: loop_while at 0x4012e0
unsigned long long loop_while(unsigned int a0)
{
    unsigned int v1;  // ecx
    unsigned long v2;  // rax

    v1 = 0;
    if (a0)
    {
        do
        {
            a0 = (unsigned int)(a0 * 1717986919 >> 34) + (unsigned int)(a0 * 1717986919 >> 63);
            v1 += 1;
        } while ((unsigned int)v2 + 9 > 18);
    }
    return (v1 ? 1 : v1);
}


// Function: sub_40131d at 0x40131d
void sub_40131d()
{
    loop_dowhile();
    return;
}


// Function: loop_dowhile at 0x401320
long long loop_dowhile(unsigned int a0)
{
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    unsigned long v3;  // rcx
    unsigned int v4;  // eax

    v1 = 0;
    do
    {
        a0 = (unsigned int)(a0 * 1717986919 >> 34) + (unsigned int)(a0 * 1717986919 >> 63);
        v4 = v1 + 1;
        v1 = v4;
    } while ((unsigned int)v3 + 9 > 18);
    return v2 + 1;
}


// Function: sub_401353 at 0x401353
void sub_401353(unsigned long a0, unsigned long a1)
{
    loop_nested();
    return;
}


// Function: loop_nested at 0x401360
unsigned long long loop_nested(unsigned long a0, unsigned int a1)
{
    if ((unsigned int)a0 <= 0)
        return 0;
    return a0 * (a1 <= 0 ? 0 : a1) & 4294967295;
}


// Function: loop_break at 0x401370
unsigned long long loop_break(unsigned int i)
{
    unsigned int *v1;  // rcx
    unsigned long long v2;  // rax

    v1 = "\n";
    v2 = 0;
    while (*(v1) != i)
    {
        v2 += 1;
        v1 += 1;
        if (v2 == 5)
            return 4294967295;
    }
    return v2;
}


// Function: sub_401398 at 0x401398
void sub_401398(unsigned long a0)
{
    loop_continue();
    return;
}


// Function: loop_continue at 0x4013a0
unsigned long long loop_continue(unsigned int a0)
{
    unsigned long long v1;  // rax
    unsigned int v2;  // ecx
    unsigned int v3;  // ecx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    if (a0 <= 0)
        return 0;
    v1 = 0;
    v2 = 1;
    do
    {
        v3 = v2;
        v5 = v1 + (-(v3 & 1) & v3);
        v1 = v5;
        v2 = v3 + 1;
    } while (!(a0) + v3 + 1 != 1);
    return v4 + (-(v3 & 1) & v3);
}


// Function: sub_4013cd at 0x4013cd
void sub_4013cd(unsigned long a0)
{
    goto_forward();
    return;
}


// Function: goto_forward at 0x4013d0
unsigned int goto_forward(unsigned int a0)
{
    return a0 * (a0 > 0 ? a0 : 1) * 2;
}


// Function: goto_backward at 0x4013e0
unsigned long long goto_backward(unsigned int a0)
{
    unsigned long long v1;  // rcx
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rax

    if (a0 <= 0)
        return 1;
    v1 = 1;
    v2 = 1;
    do
    {
        v4 = v1;
        v5 = v4 * v2;
        v1 = (unsigned int)v4 + 1;
        v2 = v5;
    } while (!(a0) + (unsigned int)v4 + 1 != 1);
    return v4 * v3;
}


// Function: sub_401408 at 0x401408
void sub_401408(unsigned long a0, unsigned long a1)
{
    ternary_op();
    return;
}


// Function: ternary_op at 0x401410
long long ternary_op(unsigned int a0, unsigned int a1)
{
    return (a1 < a0 ? a0 : a1);
}


// Function: sub_401418 at 0x401418
void sub_401418()
{
    test_control_flow_l1();
    return;
}


// Function: test_control_flow_l1 at 0x401420
extern char g_4035e5;

int test_control_flow_l1()
{
    puts(&g_4035e5);
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
    return printf("CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: sub_40161d at 0x40161d
void sub_40161d()
{
    loop_multi_exit();
    return;
}


// Function: loop_multi_exit at 0x401620
extern unsigned int g_403060[4];
extern unsigned long long g_403064;

unsigned long long loop_multi_exit(unsigned int *a0)
{
    unsigned long long v1;  // rcx
    unsigned long long v2;  // r10
    unsigned int v3;  // eax
    char result;  // r8b
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rsi
    unsigned int v8;  // esi

    v1 = &g_403064;
    v2 = 0;
    do
    {
        if (g_403060[4 * v2] == a0)
        {
            result = 1;
            v5 = 0;
        }
        else
        {
            v6 = 0;
            do
            {
                v7 = v6;
                if (v7 == 3)
                {
                    v8 = 5;
                    if (v7 < 3)
                        goto LABEL_4016d5;
                }
            } while ((v5 = v7 + 1, v6 = v5, *((int *)(v1 + v7 * 4)) != a0));
            result = v5 - 1 < 3;
        }
        v3 = (unsigned int)v5 + (unsigned int)v2 * 10;
        v8 = 1;
        if (result)
            goto LABEL_4016d5;
    } while ((v2 += 1, v1 += 16, v2 != 3));
    v8 = 2;
LABEL_4016d5:
    if (v8 != 2)
        return v3;
    return 4294967295;
}


// Function: sub_401654 at 0x401654
void sub_401654()
{
}


// Function: sub_4016a1 at 0x4016a1
void sub_4016a1()
{
}


// Function: sub_4016e1 at 0x4016e1
void sub_4016e1()
{
    infinite_loop();
    return;
}


// Function: infinite_loop at 0x4016f0
unsigned long long infinite_loop(unsigned int *ptr)
{
    unsigned long long v1;  // rax

    v1 = 0;
    while (*(ptr) != 1)
    {
        v1 = (unsigned int)v1 + 1;
        if ((unsigned int)v1 == 1001)
        {
            *(ptr) = 1;
            return 1001;
        }
    }
    return v1;
}


// Function: sub_40171d at 0x40171d
void sub_40171d(unsigned long a0)
{
    multi_return();
    return;
}


// Function: multi_return at 0x401720
unsigned long long multi_return(unsigned int a0)
{
    unsigned long long v1;  // rax

    if (a0 < 0)
        return 4294967295;
    v1 = 4294967294;
    if (a0 <= 50)
        v1 = (!((char)a0 & 1) ? a0 * 2 : a0 + 1);
    return v1;
}


// Function: sub_401744 at 0x401744
void sub_401744(unsigned long a0)
{
    conditional_return();
    return;
}


// Function: conditional_return at 0x401750
unsigned int conditional_return(unsigned int a0)
{
    if (a0 <= 0)
        return -(a0);
    return a0 * 2;
}


// Function: sub_40175d at 0x40175d
void sub_40175d(unsigned long a0, unsigned long a1, unsigned long a2)
{
    duffs_device();
    return;
}


// Function: duffs_device at 0x401760
extern unsigned int g_403010;

unsigned long long duffs_device(unsigned long a0, unsigned long a1, unsigned long a2)
{
    if ((unsigned int)a2 <= 0)
    {
        return 4294967295;
    }
    else if ((unsigned int)((a2 & 4294967295) - (((unsigned int)a2 >= 0 ? (unsigned int)a2 : (unsigned int)a2 + 7) & 0xfffffff8)) <= 7)
    {
        goto (long long)((&g_403010)[(a2 & 4294967295) + -1 * (((unsigned int)a2 >= 0 ? (unsigned int)a2 : (unsigned int)a2 + 7) & 0xfffffff8)] + (char *)&g_403010);
    }
    else
    {
        return a2 & 4294967295;
    }
}


// Function: sub_40180c at 0x40180c
void sub_40180c(unsigned long a0)
{
    loop_complex_cond();
    return;
}


// Function: loop_complex_cond at 0x401810
int loop_complex_cond(unsigned int a0)
{
    unsigned int v1;  // edx
    unsigned int v2;  // eax
    unsigned int v3;  // edx
    unsigned int v4;  // esi
    unsigned int v5;  // ecx

    if (a0 > 0)
    {
        v1 = 0;
        v2 = 0;
        do
        {
            v2 += 2;
            a0 -= 1;
            v5 = v1 + 1;
        } while (v4 >= 2 && v2 < a0 && (v1 = v5, v3 < 9));
    }
    else
    {
        v2 = 0;
        v5 = 0;
    }
    return v2 + a0 + v5;
}


// Function: sub_401846 at 0x401846
void sub_401846(unsigned long a0)
{
    loop_modify_var();
    return;
}


// Function: loop_modify_var at 0x401850
unsigned long long loop_modify_var(unsigned int a0)
{
    unsigned long long v1;  // rcx
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rax
    unsigned int v6;  // edx
    unsigned long v7;  // rcx

    if (a0 <= 0)
        return 0;
    v1 = 0;
    v2 = 0;
    do
    {
        v5 = v2 + v1;
    } while ((v6 = ((unsigned int)v4 < 6 ? (unsigned int)v4 : (unsigned int)v4 + 2) + 1, v7 = (unsigned long long)v6, v1 = (unsigned long long)v6, v2 = v5, v6 < a0));
    return v3 + v4;
}


// Function: sub_401878 at 0x401878
void sub_401878()
{
    loop_external_state();
    return;
}


// Function: loop_external_state at 0x401880
unsigned long long loop_external_state(unsigned int *a0)
{
    unsigned long long v1;  // rax

    v1 = 0;
    while (!*(a0))
    {
        v1 = (unsigned int)v1 + 1;
        if ((unsigned int)v1 == 101)
            return 101;
    }
    return v1;
}


// Function: sub_4018a3 at 0x4018a3
void sub_4018a3(unsigned long a0)
{
    recursion_factorial();
    return;
}


// Function: recursion_factorial at 0x4018b0
unsigned long long recursion_factorial(unsigned int a0)
{
    unsigned long long v2;  // rbx
    unsigned long long v0;  // [bp-0x8]

    if (a0 < 2)
        return 1;
    v0 = v2;
    return a0 * recursion_factorial(a0 - 1);
}


// Function: sub_4018ca at 0x4018ca
void sub_4018ca(unsigned long a0, unsigned long a1)
{
    tail_recursion();
    return;
}


// Function: tail_recursion at 0x4018d0
long long tail_recursion(unsigned long a0, unsigned int a1)
{
    unsigned long v0;  // [bp-0x8]

    if ((unsigned int)a0 < 2)
        return v0;
    v0 = a1;
    return tail_recursion((unsigned int)a0 - 1, a0 * v0 & 4294967295);
}


// Function: sub_4018ea at 0x4018ea
void sub_4018ea(unsigned long a0, unsigned long a1)
{
    indirect_recursion_a();
    return;
}


// Function: indirect_recursion_a at 0x4018f0
long long indirect_recursion_a(unsigned int a0, unsigned int a1)
{
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v0;  // [bp-0x8]

    v2 = a0;
    if (a1 <= 0)
        return v2;
    if (((char)v2 & 1))
    {
        if (a1 < 2)
            return (unsigned int)v2 * 3 + 1;
        v3 = (unsigned int)v2 * 3 + 2;
    }
    else if (a1 >= 2)
    {
        v3 = (((unsigned int)v2 >> 31) + (unsigned int)v2 >> 1) + 1;
    }
    else
    {
        return ((unsigned int)v2 >> 31) + (unsigned int)v2 >> 1;
    }
    v0 = v3;
    return indirect_recursion_a(v3 & 4294967295, a1 - 2);
}


// Function: sub_401931 at 0x401931
void sub_401931(unsigned long a0, unsigned long a1)
{
    call_func_ptr();
    return;
}


// Function: call_func_ptr at 0x401940
long long call_func_ptr(unsigned long long *a0, unsigned int a1)
{
    unsigned long long v2;  // rax
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    return a0(a1);
}


// Function: sub_40194a at 0x40194a
void sub_40194a(unsigned long a0)
{
    call_func_ptr_array();
    return;
}


// Function: call_func_ptr_array at 0x401950

unsigned long long call_func_ptr_array(unsigned long a0, unsigned int a1)
{
    switch ((unsigned int)a0)
    {
    case 0:
        break;
    default:
        return 4294967295;
    }
}


// Function: sub_40196f at 0x40196f
void sub_40196f(unsigned long a0)
{
    double_value();
    return;
}


// Function: double_value at 0x401970
unsigned int double_value(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_401974 at 0x401974
void sub_401974(unsigned long a0)
{
    triple_value();
    return;
}


// Function: triple_value at 0x401980
unsigned int triple_value(unsigned int a0)
{
    return a0 * 3;
}


// Function: sub_401984 at 0x401984
void sub_401984(unsigned long a0, unsigned long a1)
{
    call_virtual_func();
    return;
}


// Function: call_virtual_func at 0x401990
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
    return a1 * 2;
}


// Function: sub_401994 at 0x401994
void sub_401994(unsigned long a0, unsigned long a1)
{
    process_with_callback();
    return;
}


// Function: process_with_callback at 0x4019a0
unsigned int process_with_callback(unsigned long a0, unsigned int a1, unsigned long long *a2)
{
    unsigned long i;  // rbx
    unsigned long long v2;  // rbp

    if (a1 <= 0)
        return 0;
    i = 0;
    v2 = 0;
    do
    {
        v2 += a2(*((int *)(a0 + i * 4)));
        i += 1;
    } while (a1 != i);
    return v2;
}


// Function: sub_4019e1 at 0x4019e1
void sub_4019e1()
{
    test_control_flow_l2();
    return;
}


// Function: test_control_flow_l2 at 0x4019f0
extern unsigned long long g_403064;
extern char g_403609;

int test_control_flow_l2()
{
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned int v12;  // ebp
    unsigned int v13;  // ebx
    unsigned int v14;  // eax
    unsigned int v15;  // ebx
    unsigned int v16;  // ebp
    unsigned long long v5;  // rdx
    unsigned int v6;  // esi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rdi
    unsigned long long v9;  // rbp
    unsigned int v10;  // edi
    unsigned int v11;  // ebx
    unsigned int v0;  // [bp-0x20]
    unsigned int result;  // [bp-0x1c]

    puts(&g_403609);
    v3 = &g_403064;
    v4 = 0;
    v5 = 0;
    while (true)
    {
        v7 = 0;
        do
        {
            v8 = v7;
            if (v8 == 3)
            {
                v10 = 5;
                if (v8 < 3)
                    goto LABEL_401a73;
                goto LABEL_401a5c;
            }
        } while ((v9 = v8 + 1, v7 = v9, *((int *)(v3 + v8 * 4)) != 7));
        v10 = 1;
        v6 = v9 - v4;
        if (v9 - 1 < 3)
            goto LABEL_401a73;
LABEL_401a5c:
        v5 += 1;
        v4 -= 10;
        v3 += 16;
        if (v5 == 3)
        {
            v10 = 2;
LABEL_401a73:
            v11 = 0;
            printf("CF-L2-01 (loop_multi_exit): %d\n", (v10 == 2 ? 4294967295 : v6));
            v0 = 0;
            do
            {
                if (v0 == 1)
                    goto LABEL_401ac1;
            } while ((v11 += 1, v11 != 1001));
            v0 = 1;
            v11 = 1001;
LABEL_401ac1:
            printf("CF-L2-02 (infinite_loop): %d\n", v11);
            v12 = 4294967295;
            printf("CF-L2-03 (multi_return): %d\n", 4294967295);
            printf("CF-L2-03 (multi_return): %d\n", 4294967294);
            printf("CF-L2-03 (multi_return): %d\n", 4);
            v13 = 10;
            printf("CF-L2-04 (conditional_return): %d\n", 10);
            printf("CF-L2-04 (conditional_return): %d\n", 5);
            printf("CF-L2-05 (duffs_device): %d\n", 8);
            v14 = 11;
            do
            {
                v15 = v13 + 2;
            } while (v13 - 8 < v14 - 2 && (v12 += 1, v14 -= 1, v13 = v15, v12 < 9));
            v16 = 0;
            printf("CF-L2-06 (loop_complex_cond): %d\n", v15);
            printf("CF-L2-07 (loop_modify_var): %d\n", 30);
            result = 0;
            do
            {
                if (result)
                    goto LABEL_401bb4;
            } while ((v16 += 1, v16 != 101));
            v16 = 101;
LABEL_401bb4:
            printf("CF-L2-08 (loop_external_state): %d\n", v16);
            printf("CF-L2-09 (recursion_factorial): %d\n", recursion_factorial(5) & 4294967295);
            printf("CF-L2-10 (tail_recursion): %d\n", tail_recursion(5, 1) & 4294967295);
            printf("CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(10, 3) & 4294967295);
            printf("CF-L2-12 (call_func_ptr): %d\n", 10);
            printf("CF-L2-13 (call_func_ptr_array): %d\n", 10);
            printf("CF-L2-13 (call_func_ptr_array): %d\n", recursion_factorial(5) & 4294967295);
            return printf("CF-L2-15 (process_with_callback): %d\n", 30);
        }
    }
}


// Function: sub_401a4d at 0x401a4d
void sub_401a4d()
{
}


// Function: sub_401c77 at 0x401c77
void sub_401c77(unsigned long a0)
{
    non_local_jump();
    return;
}


// Function: non_local_jump at 0x401c80
extern unsigned long long jump_buffer;

unsigned int non_local_jump(unsigned int a0)
{
    if (_setjmp(&jump_buffer))
    {
        return 4294967295;
    }
    else if (a0 < 0)
    {
        longjmp(&jump_buffer, 1); /* do not return */
    }
    else if (a0 < 101)
    {
        return a0 * 2;
    }
    else
    {
        longjmp(&jump_buffer, 2); /* do not return */
    }
}


// Function: sub_401ccb at 0x401ccb
void sub_401ccb(unsigned long a0)
{
    cpp_exception();
    return;
}


// Function: cpp_exception at 0x401cd0
unsigned long long cpp_exception(unsigned int a0)
{
    return (a0 >= 0 ? (a0 < 101 ? a0 * 2 : 4294967294) : 4294967295);
}


// Function: sub_401ce9 at 0x401ce9
void sub_401ce9(unsigned long a0)
{
    large_jump_table();
    return;
}


// Function: large_jump_table at 0x401cf0

unsigned long long large_jump_table(unsigned long a0, unsigned int a1, unsigned int a2)
{
    switch ((unsigned int)a0)
    {
    case 0:
        break;
    default:
        return 4294967295;
    }
}


// Function: sub_401d11 at 0x401d11
void sub_401d11(unsigned long a0, unsigned long a1)
{
    op_add();
    return;
}


// Function: op_add at 0x401d20
int op_add(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: sub_401d24 at 0x401d24
void sub_401d24(unsigned long a0, unsigned long a1)
{
    op_sub();
    return;
}


// Function: op_sub at 0x401d30
int op_sub(unsigned long a0, unsigned int a1)
{
    return (a0 & 4294967295) - a1;
}


// Function: sub_401d35 at 0x401d35
void sub_401d35(unsigned long a0, unsigned long a1)
{
    op_mul();
    return;
}


// Function: op_mul at 0x401d40
int op_mul(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: sub_401d46 at 0x401d46
void sub_401d46(unsigned long a0, unsigned long a1)
{
    op_div();
    return;
}


// Function: op_div at 0x401d50
unsigned long long op_div(unsigned int a0, unsigned long a1)
{
    if (!(unsigned int)a1)
        return 0;
    return ((int)((a0 >> 31 CONCAT a0) % (a1 & 4294967295)) CONCAT (int)((a0 >> 31 CONCAT a0) / (a1 & 4294967295))) & 4294967295;
}


// Function: sub_401d5d at 0x401d5d
void sub_401d5d(unsigned long a0, unsigned long a1)
{
    op_mod();
    return;
}


// Function: op_mod at 0x401d60
unsigned long long op_mod(unsigned int a0, unsigned long a1)
{
    if (!(unsigned int)a1)
        return 0;
    return ((int)((a0 >> 31 CONCAT a0) % (a1 & 4294967295)) CONCAT (int)((a0 >> 31 CONCAT a0) / (a1 & 4294967295))) >> 32;
}


// Function: sub_401d6f at 0x401d6f
void sub_401d6f(unsigned long a0, unsigned long a1)
{
    op_and();
    return;
}


// Function: op_and at 0x401d70
unsigned int op_and(unsigned int a0, unsigned int a1)
{
    return a0 & a1;
}


// Function: sub_401d75 at 0x401d75
void sub_401d75(unsigned long a0, unsigned long a1)
{
    op_or();
    return;
}


// Function: op_or at 0x401d80
unsigned int op_or(unsigned int a0, unsigned int a1)
{
    return a0 | a1;
}


// Function: sub_401d85 at 0x401d85
void sub_401d85(unsigned long a0, unsigned long a1)
{
    op_xor();
    return;
}


// Function: op_xor at 0x401d90
int op_xor(unsigned int a0, unsigned int a1)
{
    return a0 ^ a1;
}


// Function: sub_401d95 at 0x401d95
void sub_401d95(unsigned long a0, unsigned long a1)
{
    op_shl();
    return;
}


// Function: op_shl at 0x401da0
int op_shl(unsigned long a0, char a1)
{
    return (a0 & 4294967295) << (a1 & 31);
}


// Function: sub_401da7 at 0x401da7
void sub_401da7(unsigned long a0, unsigned long a1)
{
    op_shr();
    return;
}


// Function: op_shr at 0x401db0
int op_shr(unsigned long a0, char a1)
{
    return (a0 & 4294967295) >> (a1 & 31);
}


// Function: sub_401db7 at 0x401db7
void sub_401db7(unsigned long a0, unsigned long a1)
{
    conditional_func_ptr();
    return;
}


// Function: conditional_func_ptr at 0x401dc0
long long conditional_func_ptr(unsigned int a0, unsigned long a1)
{
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rcx
    unsigned long long *v4;  // rcx
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    v3 = (a0 == 1 ? triple_value : recursion_factorial);
    v4 = (a0 == 1 ? triple_value : recursion_factorial);
    if (!a0)
        v3 = double_value;
    return v3();
}


// Function: sub_401de9 at 0x401de9
void sub_401de9(unsigned long a0, unsigned long a1)
{
    state_machine();
    return;
}


// Function: state_machine at 0x401df0

long long state_machine(unsigned int a0, unsigned int a1)
{
    unsigned long v1;  // rax

    switch (a1)
    {
    case 0:
        return a0 == 1;
    case 1:
        return (a0 == 2 ? a0 : (a0 == 99) * 2 + 1);
    case 2:
        return v1;
    case 3:
        return (a0) * 3;
    default:
        v1 = 3;
        break;
    }
}


// Function: sub_401e37 at 0x401e37
void sub_401e37(unsigned long a0, unsigned long a1)
{
    fsm_func_table();
    return;
}


// Function: fsm_func_table at 0x401e40

unsigned long long fsm_func_table(unsigned long a0, unsigned long a1)
{
    switch ((unsigned int)a1)
    {
    case 0:
        break;
    default:
        return 3;
    }
}


// Function: sub_401e5d at 0x401e5d
void sub_401e5d(unsigned long a0)
{
    state_idle();
    return;
}


// Function: state_idle at 0x401e60
long long state_idle(unsigned int a0)
{
    return a0 == 1;
}


// Function: sub_401e69 at 0x401e69
void sub_401e69(unsigned long a0)
{
    state_processing();
    return;
}


// Function: state_processing at 0x401e70
long long state_processing(unsigned int a0)
{
    return (a0 == 2 ? a0 : (a0 == 99) * 2 + 1);
}


// Function: sub_401e84 at 0x401e84
void sub_401e84()
{
    state_done();
    return;
}


// Function: state_done at 0x401e90
unsigned long long state_done()
{
    return 2;
}


// Function: sub_401e96 at 0x401e96
void sub_401e96(unsigned long a0)
{
    state_error();
    return;
}


// Function: state_error at 0x401ea0
long long state_error(unsigned int a0)
{
    return (a0) * 3;
}


// Function: sub_401eab at 0x401eab
void sub_401eab(unsigned long a0, unsigned long a1)
{
    computed_goto();
    return;
}


// Function: computed_goto at 0x401eb0

unsigned long long computed_goto(unsigned long a0, unsigned int a1)
{
    switch (a1)
    {
    case 0:
        return 0;
    case 1:
        return 10;
    case 2:
        return 20;
    case 3:
        return 30;
    default:
        return 4294967295;
    }
}


// Function: sub_401edd at 0x401edd
void sub_401edd(unsigned long a0)
{
    obfuscated_cf();
    return;
}


// Function: obfuscated_cf at 0x401ee0
unsigned int obfuscated_cf(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_401ee4 at 0x401ee4
void sub_401ee4(unsigned long a0)
{
    opaque_predicate();
    return;
}


// Function: opaque_predicate at 0x401ef0
unsigned int opaque_predicate(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_401ef4 at 0x401ef4
void sub_401ef4(char a0)
{
    overlapped_code();
    return;
}


// Function: overlapped_code at 0x401f00
int overlapped_code(unsigned int a0)
{
    if (((char)a0 & 1))
        return a0 * 3 + 1;
    return ((a0 >> 31) + a0 & 4294967295) >> 1;
}


// Function: sub_401f17 at 0x401f17
void sub_401f17()
{
    test_control_flow_l3();
    return;
}


// Function: test_control_flow_l3 at 0x401f20
extern char g_40362d;

int test_control_flow_l3()
{
    unsigned int v3;  // rdi

    puts(&g_40362d);
    printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
    printf("CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
    printf("CF-L3-02 (cpp_exception): %d\n", 10);
    printf("CF-L3-02 (cpp_exception): %d\n", 4294967295);
    printf("CF-L3-03 (large_jump_table): %d\n", 15);
    printf("CF-L3-04 (conditional_func_ptr): %d\n", 10);
    printf("CF-L3-05 (state_machine): %d\n", 1);
    printf("CF-L3-06 (fsm_func_table): %d\n", 2);
    printf("CF-L3-07 (computed_goto): %d\n", computed_goto(v3, 2) & 4294967295);
    printf("CF-L3-08 (obfuscated_cf): %d\n", 10);
    printf("CF-L3-09 (opaque_predicate): %d\n", 10);
    return printf("CF-L3-10 (overlapped_code): %d\n", 16);
}


// Function: sub_402026 at 0x402026
void sub_402026()
{
    main();
    return;
}


// Function: main at 0x402030
unsigned int main()
{
    unsigned long long v2;  // rax
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    test_control_flow_l1();
    test_control_flow_l2();
    test_control_flow_l3();
    return 0;
}


// Function: _fini at 0x402044
void _fini()
{
    return;
}

