// Angr Decompilation of 1_gcc_Os_no_g
// Platform: AMD64

// Function: _init at 0x401000
typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_405fe8;

unsigned long long * _init()
{
    unsigned long long *v1;  // rax

    v1 = g_405fe8;
    if (g_405fe8)
        v1 = g_405fe8();
    return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_405fa0;
extern unsigned long long g_405fa8;

void sub_401020()
{
    unsigned long v0;  // [bp-0x8]

    v0 = g_405fa0;
    goto g_405fa8;
}


// Function: sub_40102d at 0x40102d
void sub_40102d()
{
    sub_401030();
    return;
}


// Function: sub_401030 at 0x401030
void sub_401030()
{
    unsigned long long result;  // [bp-0x8]

    result = 0;
    sub_401020();
    return;
}


// Function: sub_40103f at 0x40103f
void sub_40103f()
{
    sub_401040();
    return;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
    unsigned long long result;  // [bp-0x8]

    result = 1;
    sub_401020();
    return;
}


// Function: sub_40104f at 0x40104f
void sub_40104f()
{
    sub_401050();
    return;
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
    unsigned long long v0;  // [bp-0x8]

    v0 = 2;
    sub_401020();
    return;
}


// Function: sub_40105f at 0x40105f
void sub_40105f()
{
    sub_401060();
    return;
}


// Function: sub_401060 at 0x401060
void sub_401060()
{
    unsigned long long v0;  // [bp-0x8]

    v0 = 3;
    sub_401020();
    return;
}


// Function: sub_40106f at 0x40106f
void sub_40106f()
{
    sub_401070();
    return;
}


// Function: sub_401070 at 0x401070
void sub_401070()
{
    unsigned long long v0;  // [bp-0x8]

    v0 = 4;
    sub_401020();
    return;
}


// Function: sub_40107f at 0x40107f
void sub_40107f()
{
    __cxa_finalize();
    return;
}


// Function: main at 0x4010e0
unsigned int main()
{
    unsigned long long v1;  // rdi
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rcx
    unsigned long long v5;  // r8
    unsigned long long v6;  // r9
    unsigned long long v7;  // rax

    test_control_flow_l1();
    test_control_flow_l2(v1, v2, v3, v4, v5, v6, v7);
    test_control_flow_l3(v1, v2, v3, v4, v5, v6);
    return 0;
}


// Function: sub_4010fe at 0x4010fe
void sub_4010fe(unsigned long a0, unsigned long a1, unsigned long a2)
{
    _start(); /* do not return */
}


// Function: _start at 0x401100
void _start(unsigned long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long v3;  // rax
    unsigned long long v1;  // [bp+0x0]
    unsigned long v2;  // [bp+0x8]

    v1 = v3;
    __libc_start_main(main, v1, &v2, 0, 0, a2, &v1, v1); /* do not return */
}


// Function: sub_401125 at 0x401125
void sub_401125()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198693()
}


// Function: sub_401126 at 0x401126
void sub_401126()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401130
extern unsigned long long __TMC_END__;

unsigned long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: sub_401159 at 0x401159
void sub_401159()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x401160

unsigned long long register_tm_clones()
{
    return 0;
}


// Function: sub_401199 at 0x401199
void sub_401199()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x4011a0
extern unsigned long long __dso_handle;
extern char completed.0;
extern unsigned long long g_405ff8;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    if (completed.0)
        return v2;
    if (g_405ff8)
        __cxa_finalize(__dso_handle);
    v1 = deregister_tm_clones();
    completed.0 = 1;
    return v1;
}


// Function: sub_4011d5 at 0x4011d5
void sub_4011d5()
{
}


// Function: sub_4011d9 at 0x4011d9
void sub_4011d9()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x4011e0
unsigned long long frame_dummy()
{
    return register_tm_clones();
}


// Function: recursion_factorial at 0x4011e9
unsigned long long recursion_factorial(unsigned long long i)
{
    unsigned long long v1;  // rax

    for (v1 = 1; (unsigned int)i > 1; i = (unsigned int)i - 1)
    {
        v1 *= i;
    }
    return v1;
}


// Function: double_value at 0x4011ff
unsigned int double_value(unsigned int a0)
{
    return a0 * 2;
}


// Function: triple_value at 0x401207
unsigned int triple_value(unsigned int a0)
{
    return a0 * 3;
}


// Function: op_add at 0x40120f
int op_add(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: op_sub at 0x401217
int op_sub(unsigned long a0, unsigned int a1)
{
    return (a0 & 4294967295) - a1;
}


// Function: op_mul at 0x401220
int op_mul(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: op_div at 0x40122a
int op_div(unsigned int a0, unsigned long a1)
{
    unsigned int v1;  // r8d

    v1 = a1;
    if ((unsigned int)a1)
        v1 = (int)((a0 >> 31 CONCAT a0) % (a1 & 4294967295)) CONCAT (int)((a0 >> 31 CONCAT a0) / (a1 & 4294967295));
    return v1;
}


// Function: op_mod at 0x401241
int op_mod(unsigned int a0, unsigned long a1)
{
    unsigned int v1;  // edx

    v1 = a1;
    if ((unsigned int)a1)
        v1 = ((int)((a0 >> 31 CONCAT a0) % (a1 & 4294967295)) CONCAT (int)((a0 >> 31 CONCAT a0) / (a1 & 4294967295))) >> 32;
    return v1;
}


// Function: op_and at 0x401253
unsigned int op_and(unsigned int a0, unsigned int a1)
{
    return a0 & a1;
}


// Function: op_or at 0x40125c
unsigned int op_or(unsigned int a0, unsigned int a1)
{
    return a0 | a1;
}


// Function: op_xor at 0x401265
int op_xor(unsigned int a0, unsigned int a1)
{
    return a0 ^ a1;
}


// Function: op_shl at 0x40126e
int op_shl(unsigned long a0, char a1)
{
    return (a0 & 4294967295) << (a1 & 31);
}


// Function: op_shr at 0x401279
int op_shr(unsigned long a0, char a1)
{
    return (a0 & 4294967295) >> (a1 & 31);
}


// Function: state_idle at 0x401284
long long state_idle(unsigned int a0)
{
    return !a0 - 1;
}


// Function: state_processing at 0x401290
unsigned long long state_processing(unsigned int a0)
{
    switch (a0)
    {
    case 2:
        return a0;
    case 99:
        return 3;
    default:
        return 1;
    }
}


// Function: state_done at 0x4012ac
unsigned long long state_done()
{
    return 2;
}


// Function: state_error at 0x4012b6
long long state_error(unsigned int a0)
{
    unsigned long v1;  // rax

    v1 = a0;
    if (a0)
        v1 = 3;
    return v1;
}


// Function: sequential_ops at 0x4012c6
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return (a0 + a1) * 2 - a2;
}


// Function: single_if at 0x4012d2
long long single_if(unsigned int a0)
{
    unsigned long v1;  // rax

    v1 = a0;
    if (a0 > 0)
        v1 = (unsigned int)v1 * 2;
    return v1;
}


// Function: if_else at 0x4012df
long long if_else(unsigned int a0)
{
    return a0 > 0;
}


// Function: nested_if_2 at 0x4012eb
unsigned long long nested_if_2(unsigned long a0, unsigned long a1)
{
    if ((unsigned int)a0 <= 0)
    {
        return 0;
    }
    else if ((unsigned int)a1 > 0)
    {
        return (a0 & 4294967295) + a1;
    }
    else
    {
        return a0 & 4294967295;
    }
}


// Function: nested_if_deep at 0x4012ff
unsigned long long nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    unsigned long long v1;  // rax

    v1 = 0;
    if (a0 > 0)
    {
        v1 = 1;
        if (a1 > 0)
        {
            v1 = 2;
            if (a2 > 0)
            {
                v1 = 3;
                if (a3 > 0)
                    v1 = (unsigned long long)((a4 > 0) + 4);
            }
        }
    }
    return v1;
}


// Function: if_elseif_chain at 0x401330
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
    else if (a0 != 2)
    {
        return 4294967295;
    }
    else
    {
        return 30;
    }
}


// Function: if_elseif_long at 0x401358
unsigned long long if_elseif_long(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = 4294967295;
    if (a0 <= 4)
        v1 = (a0 + 1) * 100;
    return v1;
}


// Function: switch_small at 0x40136a
extern char CSWTCH.55;

unsigned long long switch_small(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = 4294967295;
    if (a0 <= 3)
        v1 = (&CSWTCH.55)[a0];
    return v1;
}


// Function: switch_large at 0x401384
unsigned long long switch_large(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = 4294967295;
    if (a0 <= 9)
        v1 = a0 * 10;
    return v1;
}


// Function: switch_default at 0x401394
unsigned long long switch_default(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = 0;
    if (a0 - 1 <= 2)
        v1 = a0 * 100;
    return v1;
}


// Function: switch_fallthrough at 0x4013a6
unsigned long long switch_fallthrough(unsigned long a0)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    if ((unsigned int)a0 != 2)
    {
        if ((unsigned int)a0 != 3)
        {
            if ((unsigned int)a0 != 1)
                return 4294967295;
            v1 = 0;
        }
        else
        {
            v2 = 12;
LABEL_4013c6:
            v1 = v2 + a0 * 2;
        }
        return v1 + a0;
    }
    v2 = 0;
    goto LABEL_4013c6;
}


// Function: loop_for_fixed at 0x4013d0
int loop_for_fixed(unsigned int a0)
{
    unsigned long long i;  // rax
    unsigned long long v2;  // r8

    i = 0;
    for (v2 = 0; (unsigned int)i < a0; i = (unsigned int)i + 1)
    {
        v2 += i;
    }
    return v2;
}


// Function: loop_while at 0x4013e8
unsigned int loop_while(unsigned int i)
{
    unsigned int v1;  // ecx

    for (v1 = 0; i; i = (int)((i >> 31 CONCAT i) % 10) CONCAT (int)((i >> 31 CONCAT i) / 10))
    {
        v1 += 1;
    }
    if (v1 <= 0)
        return 1;
    return v1;
}


// Function: loop_dowhile at 0x40140b
unsigned int loop_dowhile(unsigned int i)
{
    unsigned int v1;  // r8d
    unsigned int v2;  // r8d
    unsigned int v3;  // r8d

    v1 = 0;
    do
    {
        v3 = v1 + 1;
        i = (int)((i >> 31 CONCAT i) % 10) CONCAT (int)((i >> 31 CONCAT i) / 10);
        v1 = v3;
    } while (i);
    return v2 + 1;
}


// Function: loop_nested at 0x401427
unsigned long long loop_nested(unsigned int a0, unsigned int a1)
{
    unsigned int i;  // edx
    unsigned long long v2;  // rax
    unsigned long long v3;  // rsi

    i = 0;
    v2 = 0;
    for (v3 = (a1 < 0 ? 0 : a1); i < a0; i += 1)
    {
        v2 += v3;
    }
    return v2;
}


// Function: loop_break at 0x401441
unsigned long long loop_break(unsigned int i)
{
    unsigned long long v4;  // rax
    unsigned long long v0;  // [bp-0x24]
    unsigned long long v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x14]

    v2 = 50;
    v0 = 85899345930;
    v1 = 171798691870;
    v4 = 0;
    while (*((int *)((char *)&v0 + 4 * v4)) != i)
    {
        v4 += 1;
        if (v4 == 5)
            return 4294967295;
    }
    return v4 & 4294967295;
}


// Function: loop_continue at 0x4014b6
int loop_continue(unsigned int a0)
{
    unsigned long long i;  // rax
    unsigned long long v2;  // r8

    i = 1;
    for (v2 = 0; (unsigned int)i <= a0; i = (unsigned int)i + 1)
    {
        if (((char)i & 1))
            v2 += i;
    }
    return v2;
}


// Function: goto_forward at 0x4014d5
unsigned int goto_forward(unsigned long long a0)
{
    if ((unsigned int)a0 > 0)
        a0 *= a0;
    return (unsigned int)a0 * 2;
}


// Function: goto_backward at 0x4014e4
unsigned int goto_backward(unsigned int i)
{
    unsigned long long v1;  // r8
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // r8
    unsigned long long v5;  // r8

    v1 = 1;
    if (i <= 0)
        return 1;
    v2 = 1;
    do
    {
        v3 = v2;
        v5 = v3 * v1;
        v1 = v5;
        v2 = (unsigned int)v3 + 1;
    } while (i >= (unsigned int)v2);
    return (unsigned int)v3 * (unsigned int)v4;
}


// Function: ternary_op at 0x401505
long long ternary_op(unsigned int a0, unsigned int a1)
{
    return (a0 <= a1 ? a1 : a0);
}


// Function: test_control_flow_l1 at 0x401511
extern char g_403004;

int test_control_flow_l1()
{
    char *v1;  // rsi

    puts(&g_403004);
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
    loop_for_fixed(10);
    __printf_chk(1, v1);
    __printf_chk(1, "CF-L1-13 (loop_while): %d\n", loop_while(12345) & 4294967295);
    loop_dowhile(9876);
    __printf_chk(1, v1);
    __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", loop_nested(3, 4) & 4294967295);
    __printf_chk(1, "CF-L1-16 (loop_break): %d\n", loop_break(30) & 4294967295);
    __printf_chk(1, "CF-L1-16 (loop_break): %d\n", loop_break(99) & 4294967295);
    loop_continue(10);
    __printf_chk(1, v1);
    __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
    __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
    __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
    __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
    return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: loop_multi_exit at 0x4017ce
extern unsigned int g_4035e0;

unsigned long long loop_multi_exit(unsigned int a0)
{
    unsigned long long v2;  // rcx
    unsigned int j;  // eax
    char cur[4];  // rdi
    unsigned int *i;  // rsi
    char *v6;  // rcx
    unsigned long long v7;  // rdx
    char v0;  // [bp-0x48]

    v2 = 12;
    j = 0;
    cur = &v0;
    for (i = &g_4035e0; v2; i += 1)
    {
        v2 -= 1;
        *((unsigned int *)&cur[0]) = *(i);
        cur += 1;
    }
    v6 = &v0;
    do
    {
        v7 = 0;
        do
        {
            if (*((int *)&v6[4 * v7]) == a0)
                return j * 10 + v7;
        } while ((v7 += 1, v7 != 4));
        j += 1;
        v6 += 16;
    } while (j != 3);
    return 4294967295;
}


// Function: infinite_loop at 0x40183d
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
            return v1;
        }
    }
    return v1;
}


// Function: multi_return at 0x401859
unsigned long long multi_return(unsigned int a0)
{
    if (a0 < 0)
    {
        return 4294967295;
    }
    else if (a0 > 50)
    {
        return 4294967294;
    }
    else if (((char)a0 & 1))
    {
        return a0 + 1;
    }
    else
    {
        return a0 * 2;
    }
}


// Function: conditional_return at 0x40187c
long long conditional_return(unsigned int a0)
{
    unsigned long v1;  // rax

    v1 = a0;
    if (a0 > 0)
        return (unsigned int)v1 * 2;
    if (a0)
        v1 = -((unsigned int)v1);
    return v1;
}


// Function: duffs_device at 0x40188e

unsigned int duffs_device(void* a0, unsigned int *a1, unsigned int a2)
{
    void* cur;  // rax
    unsigned int *iter;  // rcx
    unsigned int v3;  // esi

    cur = a0;
    iter = a1;
    if (a2 <= 0)
        return 4294967295;
    v3 = a2 + 7 >> 3;
}


// Function: loop_complex_cond at 0x401939
int loop_complex_cond(unsigned long a0)
{
    unsigned int i;  // edx

    for (i = 0; i * 2 < (unsigned int)((a0 & 4294967295) - i) && i <= 9; i += 1);
    return i * 2 + (unsigned int)((a0 & 4294967295) - i) + i;
}


// Function: loop_modify_var at 0x401958
int loop_modify_var(unsigned int a0)
{
    unsigned long long i;  // rax
    unsigned long long v2;  // r8

    i = 0;
    for (v2 = 0; (unsigned int)i < a0; i = (unsigned int)i + 1)
    {
        v2 += i;
        if ((unsigned int)i > 5)
            i = (unsigned int)i + 2;
    }
    return v2;
}


// Function: loop_external_state at 0x401978
unsigned long long loop_external_state(unsigned int *a0)
{
    unsigned long long v1;  // rax

    v1 = 0;
    do
    {
    } while (!*(a0) && (v1 = (unsigned long long)((unsigned int)v1 + 1), (unsigned int)v1 != 101));
    return v1;
}


// Function: tail_recursion at 0x40198c
int tail_recursion(unsigned long i, unsigned int a1)
{
    unsigned long v1;  // rax

    for (v1 = a1; (unsigned int)i > 1; i = (unsigned int)i - 1)
    {
        v1 *= i;
    }
    return v1;
}


// Function: indirect_recursion_a at 0x40199f
long long indirect_recursion_a(unsigned int a0, unsigned int i)
{
    unsigned long v1;  // rax

    for (v1 = a0; i > 0; i -= 2)
    {
        if (((char)v1 & 1))
        {
            if (i == 1)
                return (unsigned int)v1 * 3 + 1;
            v1 = (unsigned int)v1 * 3 + 2;
        }
        else if (i != 1)
        {
            v1 = ((int)(((unsigned int)v1 >> 31 CONCAT (unsigned int)v1) % 2) CONCAT (int)(((unsigned int)v1 >> 31 CONCAT (unsigned int)v1) / 2)) + 1;
        }
        else
        {
            return ((int)(((unsigned int)v1 >> 31 CONCAT (unsigned int)v1) % 2) CONCAT (int)(((unsigned int)v1 >> 31 CONCAT (unsigned int)v1) / 2)) & 4294967295;
        }
    }
    return v1;
}


// Function: call_func_ptr at 0x4019d2
long long call_func_ptr(unsigned long a0, unsigned long a1)
{
    goto a0;
}


// Function: call_func_ptr_array at 0x4019dd
unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]

    v0 = double_value;
    v1 = triple_value;
    v2 = recursion_factorial;
    if (a0 > 2)
        return 4294967295;
    goto (&v0)[a0];
}


// Function: call_virtual_func at 0x401a59
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
    return a1 * 2;
}


// Function: process_with_callback at 0x401a61
int process_with_callback(unsigned long a0, unsigned int a1, unsigned long long *a2)
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rbx

    v1 = 0;
    v2 = 0;
    while (true)
    {
        v3 = v2;
        if (a1 <= (unsigned int)v3)
            break;
        v4 = v3 + 1;
        v1 += a2(*((int *)(a0 + v3 * 4)));
        v2 = v4;
    }
    return v1;
}


// Function: test_control_flow_l2 at 0x401a9a
extern char g_403271;

long long test_control_flow_l2()
{
    char *v13;  // rsi
    unsigned long v22;  // fs
    unsigned int *cur;  // rdi
    unsigned long long v15;  // rcx
    unsigned int result;  // [bp-0x8c]
    unsigned int flag1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x84]
    unsigned long long v3;  // [bp-0x7c]
    unsigned int v4;  // [bp-0x74]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char v9;  // [bp-0x50]
    unsigned long v10;  // [bp-0x30]

    puts(&g_403271);
    __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7) & 4294967295);
    result = 0;
    infinite_loop(&result);
    __printf_chk(1, v13);
    __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
    __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
    __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
    __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
    __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
    cur = &v9;
    v15 = 8;
    v7 = 25769803781;
    for (v8 = 34359738375; v15; cur += 1)
    {
        v15 -= 1;
        *(cur) = 0;
    }
    v5 = 8589934593;
    v6 = 17179869187;
    __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", duffs_device(&v9, &v5, 8) & 4294967295);
    loop_complex_cond(10);
    __printf_chk(1, v13);
    loop_modify_var(10);
    __printf_chk(1, v13);
    flag1 = 0;
    loop_external_state(&flag1);
    __printf_chk(1, v13);
    recursion_factorial(5);
    __printf_chk(1, v13);
    __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
    __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", indirect_recursion_a(6, 1) & 4294967295);
    __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", call_func_ptr(double_value, 5) & 4294967295);
    __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(0, 5) & 4294967295);
    __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", call_func_ptr_array(2, 5) & 4294967295);
    v2 = 8589934593;
    v3 = 17179869187;
    v4 = 5;
    __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", process_with_callback(&v2, 5, double_value) & 4294967295);
    return v10 - *((long long *)(40 + v22));
}


// Function: non_local_jump at 0x401d73
extern unsigned long long jump_buffer;

unsigned long long non_local_jump(unsigned int a0)
{
    if (_setjmp(&jump_buffer))
        return 4294967295;
    if (a0 >= 0 && a0 <= 100)
        return a0 * 2;
    __longjmp_chk(&jump_buffer); /* do not return */
}


// Function: cpp_exception at 0x401dc5
unsigned long long cpp_exception(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = 4294967295;
    if (a0 >= 0)
    {
        v1 = 4294967294;
        if (a0 <= 100)
            v1 = a0 * 2;
    }
    return v1;
}


// Function: large_jump_table at 0x401dde
extern unsigned int g_406020;

unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2)
{
    char cur[4];  // rdi
    unsigned int *i;  // rsi
    unsigned long long v4;  // rcx
    char v0;  // [bp-0x60]

    cur = &v0;
    i = &g_406020;
    for (v4 = 20; v4; i += 1)
    {
        v4 -= 1;
        *((unsigned int *)&cur[0]) = *(i);
        cur += 1;
    }
    if (a0 > 9)
        return 4294967295;
    goto *((long long *)&(&v0)[8 * a0]);
}


// Function: conditional_func_ptr at 0x401e55
long long conditional_func_ptr(unsigned int a0, unsigned long a1)
{
    unsigned long long v1;  // rax

    v1 = double_value;
    if (a0)
    {
        if (a0 - 1)
            v1 = recursion_factorial;
        else
            v1 = triple_value;
    }
    goto v1;
}


// Function: state_machine at 0x401e7e
unsigned long long state_machine(unsigned int a0, unsigned int a1)
{
    unsigned int v1;  // edx

    if (a1 == 2)
        return a1;
    if (a1 <= 2)
    {
        if (!a1)
        {
            return !a0 - 1;
        }
        else if (a1 != 1)
        {
            return 3;
        }
        else if (a0 != 2)
        {
            v1 = 3;
            if (a0 != 99)
                return a1;
        }
        else
        {
            return 2;
        }
    }
    else
    {
        if (a1 != 3)
            return 3;
        v1 = 0;
        if (a0)
            return a1;
    }
    return v1;
}


// Function: fsm_func_table at 0x401ec6
unsigned long long fsm_func_table(unsigned long a0, unsigned int a1)
{
    unsigned long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]

    v0 = state_idle;
    v1 = state_processing;
    v2 = state_done;
    v3 = state_error;
    if (a1 > 3)
        return 3;
    goto (&v0)[a1];
}


// Function: computed_goto at 0x401f4e
extern char g_401fa3;
extern unsigned long long g_401fab;
extern unsigned long long g_401fb6;
extern unsigned long long g_401fc1;

unsigned long long computed_goto(unsigned long a0, unsigned int a1)
{
    unsigned long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]

    v0 = &g_401fa3;
    v1 = &g_401fab;
    v2 = &g_401fb6;
    v3 = &g_401fc1;
    if (a1 > 3)
        return 4294967295;
    goto (&v0)[a1];
}


// Function: obfuscated_cf at 0x401fe4
unsigned int obfuscated_cf(unsigned int a0)
{
    return a0 * 2;
}


// Function: opaque_predicate at 0x401fec
unsigned int opaque_predicate(unsigned int a0)
{
    return a0 * 2;
}


// Function: overlapped_code at 0x401ff4
int overlapped_code(unsigned int a0)
{
    if (!((char)a0 & 1))
        return (int)((a0 >> 31 CONCAT a0) % 2) CONCAT (int)((a0 >> 31 CONCAT a0) / 2);
    return a0 * 3 + 1;
}


// Function: test_control_flow_l3 at 0x40200d
extern char g_403464;

long long test_control_flow_l3()
{
    unsigned long v10;  // fs
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long v2;  // [bp-0x10]

    puts(&g_403464);
    __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(5) & 4294967295);
    __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
    __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
    __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
    __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", large_jump_table(0, 10, 5) & 4294967295);
    __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", conditional_func_ptr(0, 5) & 4294967295);
    __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
    __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", fsm_func_table(2, 1) & 4294967295);
    v0 = 0x100000000;
    v1 = 12884901890;
    __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", computed_goto(&v0, 2) & 4294967295);
    __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
    __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
    __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
    return v2 - *((long long *)(40 + v10));
}


// Function: _fini at 0x4021c4
void _fini()
{
    return;
}

