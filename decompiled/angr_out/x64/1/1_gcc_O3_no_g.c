// Angr Decompilation of 1_gcc_O3_no_g
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

    test_control_flow_l1();
    test_control_flow_l2(v1, v2, v3, v4, v5, v6);
    test_control_flow_l3(v1, v2, v3, v4, v5, v6);
    return 0;
}


// Function: sub_401104 at 0x401104
void sub_401104(unsigned long a0, unsigned long a1, unsigned long a2)
{
    _start(); /* do not return */
}


// Function: _start at 0x401110
void _start(unsigned long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long v3;  // rax
    unsigned long long v1;  // [bp+0x0]
    unsigned long v2;  // [bp+0x8]

    v1 = v3;
    __libc_start_main(main, v1, &v2, 0, 0, a2, &v1, v1); /* do not return */
}


// Function: sub_401135 at 0x401135
void sub_401135()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198709()
}


// Function: sub_401136 at 0x401136
void sub_401136()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401140
extern unsigned long long __TMC_END__;

unsigned long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: sub_401169 at 0x401169
void sub_401169()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x401170

unsigned long long register_tm_clones()
{
    return 0;
}


// Function: sub_4011a9 at 0x4011a9
void sub_4011a9()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x4011b0
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


// Function: sub_4011e5 at 0x4011e5
void sub_4011e5()
{
}


// Function: sub_4011e9 at 0x4011e9
void sub_4011e9()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x4011f0
unsigned long long frame_dummy()
{
    return register_tm_clones();
}


// Function: sub_4011f9 at 0x4011f9
void sub_4011f9(unsigned long a0)
{
    recursion_factorial();
    return;
}


// Function: recursion_factorial at 0x401200
unsigned long long recursion_factorial(unsigned int i)
{
    unsigned long long v1;  // rax

    v1 = 1;
    if (i > 1)
    {
        do
        {
            v1 *= i;
            i -= 1;
        } while (i != 1);
    }
    return v1;
}


// Function: sub_40121e at 0x40121e
void sub_40121e(unsigned long a0)
{
    double_value();
    return;
}


// Function: double_value at 0x401220
unsigned int double_value(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_401228 at 0x401228
void sub_401228(unsigned long a0)
{
    triple_value();
    return;
}


// Function: triple_value at 0x401230
unsigned int triple_value(unsigned int a0)
{
    return a0 * 3;
}


// Function: sub_401238 at 0x401238
void sub_401238(unsigned long a0, unsigned long a1)
{
    op_add();
    return;
}


// Function: op_add at 0x401240
int op_add(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: sub_401248 at 0x401248
void sub_401248(unsigned long a0, unsigned long a1)
{
    op_sub();
    return;
}


// Function: op_sub at 0x401250
int op_sub(unsigned long a0, unsigned int a1)
{
    return (a0 & 4294967295) - a1;
}


// Function: sub_401259 at 0x401259
void sub_401259(unsigned long a0, unsigned long a1)
{
    op_mul();
    return;
}


// Function: op_mul at 0x401260
int op_mul(unsigned int a0, unsigned int a1)
{
    return a1 * a0;
}


// Function: sub_40126a at 0x40126a
void sub_40126a(unsigned long a0, unsigned long a1)
{
    op_div();
    return;
}


// Function: op_div at 0x401270
int op_div(unsigned int a0, unsigned long a1)
{
    unsigned int v1;  // r8d

    v1 = a1;
    if ((unsigned int)a1)
        v1 = (int)((a0 >> 31 CONCAT a0) % (a1 & 4294967295)) CONCAT (int)((a0 >> 31 CONCAT a0) / (a1 & 4294967295));
    return v1;
}


// Function: sub_401287 at 0x401287
void sub_401287(unsigned long a0, unsigned long a1)
{
    op_mod();
    return;
}


// Function: op_mod at 0x401290
int op_mod(unsigned int a0, unsigned long a1)
{
    unsigned int v1;  // r8d

    v1 = a1;
    if ((unsigned int)a1)
        v1 = ((int)((a0 >> 31 CONCAT a0) % (a1 & 4294967295)) CONCAT (int)((a0 >> 31 CONCAT a0) / (a1 & 4294967295))) >> 32;
    return v1;
}


// Function: sub_4012a7 at 0x4012a7
void sub_4012a7(unsigned long a0, unsigned long a1)
{
    op_and();
    return;
}


// Function: op_and at 0x4012b0
unsigned int op_and(unsigned int a0, unsigned int a1)
{
    return a0 & a1;
}


// Function: sub_4012b9 at 0x4012b9
void sub_4012b9(unsigned long a0, unsigned long a1)
{
    op_or();
    return;
}


// Function: op_or at 0x4012c0
unsigned int op_or(unsigned int a0, unsigned int a1)
{
    return a0 | a1;
}


// Function: sub_4012c9 at 0x4012c9
void sub_4012c9(unsigned long a0, unsigned long a1)
{
    op_xor();
    return;
}


// Function: op_xor at 0x4012d0
int op_xor(unsigned int a0, unsigned int a1)
{
    return a0 ^ a1;
}


// Function: sub_4012d9 at 0x4012d9
void sub_4012d9(unsigned long a0, unsigned long a1)
{
    op_shl();
    return;
}


// Function: op_shl at 0x4012e0
int op_shl(unsigned long a0, char a1)
{
    return (a0 & 4294967295) << (a1 & 31);
}


// Function: sub_4012eb at 0x4012eb
void sub_4012eb(unsigned long a0, unsigned long a1)
{
    op_shr();
    return;
}


// Function: op_shr at 0x4012f0
int op_shr(unsigned long a0, char a1)
{
    return (a0 & 4294967295) >> (a1 & 31);
}


// Function: sub_4012fb at 0x4012fb
void sub_4012fb(unsigned long a0)
{
    state_idle();
    return;
}


// Function: state_idle at 0x401300
long long state_idle(unsigned int a0)
{
    return a0 == 1;
}


// Function: sub_40130d at 0x40130d
void sub_40130d(unsigned long a0)
{
    state_processing();
    return;
}


// Function: state_processing at 0x401310
unsigned long long state_processing(unsigned int a0)
{
    if (a0 == 2)
        return 2;
    return (a0 == 99) * 2 + 1;
}


// Function: sub_401326 at 0x401326
void sub_401326()
{
}


// Function: sub_401336 at 0x401336
void sub_401336()
{
    state_done();
    return;
}


// Function: state_done at 0x401340
unsigned long long state_done()
{
    return 2;
}


// Function: sub_40134a at 0x40134a
void sub_40134a(unsigned long a0)
{
    state_error();
    return;
}


// Function: state_error at 0x401350
unsigned long long state_error(unsigned int a0)
{
    if (!a0)
        return a0;
    return 3;
}


// Function: sub_401361 at 0x401361
void sub_401361()
{
    computed_goto.constprop.0();
    return;
}


// Function: computed_goto.constprop.0 at 0x401370
unsigned long long computed_goto.constprop.0()
{
    return 20;
}


// Function: sub_401376 at 0x401376
void sub_401376()
{
    non_local_jump.constprop.0();
    return;
}


// Function: non_local_jump.constprop.0 at 0x401380
extern unsigned long long jump_buffer;

long long non_local_jump.constprop.0()
{
    return (-(_setjmp(&jump_buffer) < 1) & 11) - 1;
}


// Function: sub_4013a4 at 0x4013a4
void sub_4013a4(unsigned long a0, unsigned long a1, unsigned long a2)
{
    sequential_ops();
    return;
}


// Function: sequential_ops at 0x4013b0
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return (a0 + a1) * 2 - a2;
}


// Function: sub_4013bc at 0x4013bc
void sub_4013bc(unsigned long a0)
{
    single_if();
    return;
}


// Function: single_if at 0x4013c0
long long single_if(unsigned int a0)
{
    return (a0 <= 0 ? a0 : a0 * 2);
}


// Function: sub_4013cd at 0x4013cd
void sub_4013cd(unsigned long a0)
{
    if_else();
    return;
}


// Function: if_else at 0x4013d0
long long if_else(unsigned int a0)
{
    return a0 > 0;
}


// Function: sub_4013dc at 0x4013dc
void sub_4013dc(unsigned long a0)
{
    nested_if_2();
    return;
}


// Function: nested_if_2 at 0x4013e0
unsigned long long nested_if_2(unsigned int a0, unsigned int a1)
{
    unsigned long long v1;  // rax

    v1 = 0;
    if (a0 > 0)
        v1 = (a1 <= 0 ? a0 : a0 + a1 & 4294967295);
    return v1;
}


// Function: sub_4013f3 at 0x4013f3
void sub_4013f3(unsigned long a0)
{
    nested_if_deep();
    return;
}


// Function: nested_if_deep at 0x401400
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
        return (unsigned long long)((a4 > 0) + 4);
    }
    else
    {
        return 3;
    }
}


// Function: sub_401427 at 0x401427
void sub_401427()
{
}


// Function: sub_401436 at 0x401436
void sub_401436()
{
}


// Function: sub_401446 at 0x401446
void sub_401446(unsigned long a0)
{
    if_elseif_chain();
    return;
}


// Function: if_elseif_chain at 0x401450
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


// Function: sub_401473 at 0x401473
void sub_401473()
{
}


// Function: sub_40147e at 0x40147e
void sub_40147e(unsigned long a0)
{
    if_elseif_long();
    return;
}


// Function: if_elseif_long at 0x401480
unsigned long long if_elseif_long(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = 4294967295;
    if (a0 <= 4)
        v1 = (a0 + 1) * 100;
    return v1;
}


// Function: sub_401495 at 0x401495
void sub_401495(unsigned long a0)
{
    switch_small();
    return;
}


// Function: switch_small at 0x4014a0
extern unsigned int CSWTCH.55[4];

unsigned long long switch_small(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = 4294967295;
    if (a0 <= 3)
        v1 = CSWTCH.55[a0];
    return v1;
}


// Function: sub_4014bb at 0x4014bb
void sub_4014bb(unsigned long a0)
{
    switch_large();
    return;
}


// Function: switch_large at 0x4014c0
unsigned long long switch_large(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = 4294967295;
    if (a0 <= 9)
        v1 = a0 * 10;
    return v1;
}


// Function: sub_4014d4 at 0x4014d4
void sub_4014d4(unsigned long a0)
{
    switch_default();
    return;
}


// Function: switch_default at 0x4014e0
unsigned long long switch_default(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = 0;
    if (a0 - 1 <= 2)
        v1 = a0 * 100;
    return v1;
}


// Function: sub_4014f2 at 0x4014f2
void sub_4014f2(unsigned long a0)
{
    switch_fallthrough();
    return;
}


// Function: switch_fallthrough at 0x401500
unsigned long long switch_fallthrough(unsigned long a0)
{
    if ((unsigned int)a0 == 2)
    {
        return 0 + a0 * 2 + a0;
    }
    else if ((unsigned int)a0 != 3)
    {
        return ((unsigned int)a0 == 1) * 2 - 1 & 4294967295;
    }
    else
    {
        return 12 + a0 * 2 + a0;
    }
}


// Function: sub_40151b at 0x40151b
void sub_40151b()
{
}


// Function: sub_40152b at 0x40152b
void sub_40152b()
{
}


// Function: sub_401538 at 0x401538
void sub_401538(unsigned long a0)
{
    loop_for_fixed();
    return;
}


// Function: loop_for_fixed at 0x401540
unsigned long long loop_for_fixed(unsigned int a0)
{
    uint128_t v1;  // xmm1
    unsigned int i;  // eax
    unsigned long v11;  // rsi
    unsigned long v12;  // rsi
    unsigned long v13;  // rsi
    unsigned long v14;  // rsi
    unsigned int v15;  // esi
    unsigned int v16;  // eax
    unsigned int v17;  // ecx
    uint128_t v3;  // xmm0
    unsigned long long v5;  // rcx
    int v6;  // xmm0
    unsigned long long v7;  // rax
    unsigned long v8;  // rsi
    unsigned long v9;  // rsi
    unsigned long v10;  // rsi

    if (a0 <= 0)
        return 0;
    if (a0 - 1 > 9)
    {
        v1 = 0x3000000020000000100000000;
        i = 0;
        v3 = 0;
        do
        {
            i += 1;
            v3 = AddV(v3, v1);
            v1 = AddV(v1, 316912650130844326686193876996);
        } while (a0 >> 2 != i);
        v5 = a0 & 0xfffffffc;
        v6 = AddV(v3, 0 CONCAT (unsigned long long)(v3 >> 64));
        v7 = (unsigned long long)(AddV(v6, (unsigned long long)(v6 >> 96) CONCAT (unsigned long long)v6 >> 32 | (unsigned long long)(v6 >> 64) * 0x100000000));
        if (!((char)a0 & 3))
            return (unsigned long long)(AddV(v6, (unsigned long long)(v6 >> 96) CONCAT (unsigned long long)v6 >> 32 | (unsigned long long)(v6 >> 64) * 0x100000000));
    }
    else
    {
        v5 = 0;
        v7 = 0;
    }
    v8 = (unsigned int)v5 + 1;
    if (a0 <= (unsigned int)v8)
        return v7 + v5;
    v9 = (unsigned int)v5 + 2;
    if (a0 <= (unsigned int)v9)
        return v7 + v5 + v8;
    v10 = (unsigned int)v5 + 3;
    if (a0 <= (unsigned int)v10)
        return v7 + v5 + v8 + v9;
    v11 = (unsigned int)v5 + 4;
    if (a0 <= (unsigned int)v11)
        return v7 + v5 + v8 + v9 + v10;
    v12 = (unsigned int)v5 + 5;
    if (a0 <= (unsigned int)v12)
        return v7 + v5 + v8 + v9 + v10 + v11;
    v13 = (unsigned int)v5 + 6;
    if (a0 <= (unsigned int)v13)
        return v7 + v5 + v8 + v9 + v10 + v11 + v12;
    v14 = (unsigned int)v5 + 7;
    if (a0 <= (unsigned int)v14)
        return v7 + v5 + v8 + v9 + v10 + v11 + v12 + v13;
    v15 = (unsigned int)v5 + 8;
    if (a0 <= v15)
        return v7 + v5 + v8 + v9 + v10 + v11 + v12 + v13 + v14;
    v16 = (unsigned int)v7 + (unsigned int)v5 + (unsigned int)v8 + (unsigned int)v9 + (unsigned int)v10 + (unsigned int)v11 + (unsigned int)v12 + (unsigned int)v13 + (unsigned int)v14 + v15;
    v17 = (unsigned int)v5 + 9;
    return (v17 < a0 ? v16 + v17 & 4294967295 : v16);
}


// Function: sub_401609 at 0x401609
void sub_401609()
{
}


// Function: sub_401613 at 0x401613
void sub_401613()
{
}


// Function: sub_40161f at 0x40161f
void sub_40161f(unsigned long a0)
{
    loop_while();
    return;
}


// Function: loop_while at 0x401620
unsigned long long loop_while(unsigned int a0)
{
    unsigned int v1;  // r8d
    unsigned int v2;  // r8d
    unsigned int v3;  // r8d
    unsigned int v4;  // edx
    unsigned int i;  // eax

    if (!a0)
        return 1;
    v1 = 0;
    do
    {
        v3 = v1 + 1;
        a0 = (unsigned int)(a0 * 1717986919 >> 34) - (a0 >> 31);
        v1 = v3;
    } while (i != v4);
    return v2 + 1;
}


// Function: sub_401651 at 0x401651
void sub_401651()
{
}


// Function: sub_401662 at 0x401662
void sub_401662()
{
    loop_dowhile();
    return;
}


// Function: loop_dowhile at 0x401670
unsigned int loop_dowhile(unsigned int a0)
{
    unsigned int v1;  // r8d
    unsigned int v2;  // r8d
    unsigned int v3;  // r8d
    unsigned int v4;  // edx
    unsigned int i;  // eax

    v1 = 0;
    do
    {
        v3 = v1 + 1;
        a0 = (unsigned int)(a0 * 1717986919 >> 34) - (a0 >> 31);
        v1 = v3;
    } while (i != v4);
    return v2 + 1;
}


// Function: sub_4016a1 at 0x4016a1
void sub_4016a1(unsigned long a0)
{
    loop_nested();
    return;
}


// Function: loop_nested at 0x4016b0
unsigned long long loop_nested(unsigned int a0, unsigned int a1)
{
    unsigned int v1;  // edx
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    if (a0 <= 0)
        return 0;
    v1 = 0;
    v2 = 0;
    do
    {
        v3 = v2;
        v4 = (a1 > 0 ? a1 + v3 & 4294967295 : v3 & 4294967295);
    } while ((v1 += 1, v2 = v4, a0 != v1));
    return (a1 > 0 ? a1 + v3 & 4294967295 : v3 & 4294967295);
}


// Function: sub_4016d3 at 0x4016d3
void sub_4016d3(unsigned long a0)
{
    loop_break();
    return;
}


// Function: loop_break at 0x4016e0
unsigned long long loop_break(unsigned int a0)
{
    switch (a0)
    {
    case 10:
        return 0;
    case 20:
        return 1;
    case 30:
        return 2;
    case 40:
        return 3;
    default:
        return (a0 == 50) * 5 - 1 & 4294967295;
    }
}


// Function: sub_401705 at 0x401705
void sub_401705()
{
}


// Function: sub_40170b at 0x40170b
void sub_40170b()
{
}


// Function: sub_401716 at 0x401716
void sub_401716()
{
}


// Function: sub_40172c at 0x40172c
void sub_40172c(unsigned long a0)
{
    loop_continue();
    return;
}


// Function: loop_continue at 0x401730
unsigned long long loop_continue(unsigned int a0)
{
    uint128_t v1;  // xmm1
    uint128_t v2;  // xmm2
    unsigned long long v11;  // rax
    unsigned int v12;  // ecx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned int i;  // eax
    unsigned int v5;  // ecx
    int v6;  // xmm1
    unsigned long v7;  // rdx
    unsigned long long v8;  // rax
    unsigned int v9;  // ecx
    unsigned int v10;  // ecx

    if (a0 <= 0)
        return 0;
    if (a0 - 1 > 4)
    {
        v1 = 0;
        v2 = 316912650112397582603894390785;
        i = 0;
        do
        {
            i += 1;
            v1 = AddV(v1, ~(CmpEQV(v2 & 79228162532711081671548469249, 0)) & v2);
            v2 = AddV(v2, 316912650130844326686193876996);
        } while (a0 >> 2 != i);
        v5 = a0 & 0xfffffffc;
        v6 = AddV(v1, 0 CONCAT (unsigned long long)(v1 >> 64));
        v7 = v5 + 1;
        v8 = (unsigned long long)(AddV(v6, (unsigned long long)(v6 >> 96) CONCAT (unsigned long long)v6 >> 32 | (unsigned long long)(v6 >> 64) * 0x100000000));
        if (a0 == v5)
        {
            return v8;
        }
        else if (((char)v7 & 1))
        {
            v8 += v7;
        }
    }
    else
    {
        v7 = 1;
        v8 = 1;
    }
    v9 = (unsigned int)v7 + 1;
    if (v9 > a0)
        return v8;
    v10 = (unsigned int)v7 + 2;
    v11 = ((v9 & 1) ? v8 + v9 & 4294967295 : v8 & 4294967295);
    if (a0 < v10)
        return v11;
    v12 = (unsigned int)v7 + 3;
    v13 = ((v10 & 1) ? v11 + v10 & 4294967295 : v11 & 4294967295);
    if (a0 < v12)
        return v13;
    v14 = ((v12 & 1) ? v13 + v12 & 4294967295 : v13 & 4294967295);
    if (a0 < (unsigned int)v7 + 4)
        return v14;
    return (((unsigned int)v7 + 4 & 1) ? v14 + (unsigned int)v7 + 4 & 4294967295 : v14 & 4294967295);
}


// Function: sub_401805 at 0x401805
void sub_401805()
{
}


// Function: sub_401816 at 0x401816
void sub_401816(unsigned long a0)
{
    goto_forward();
    return;
}


// Function: goto_forward at 0x401820
unsigned int goto_forward(unsigned long long a0)
{
    if ((unsigned int)a0 > 0)
        a0 *= a0;
    return (unsigned int)a0 * 2;
}


// Function: sub_40182f at 0x40182f
void sub_40182f(unsigned long a0)
{
    goto_backward();
    return;
}


// Function: goto_backward at 0x401830
unsigned int goto_backward(unsigned int a0)
{
    unsigned long long v1;  // r8
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // r8
    unsigned long long v5;  // r8

    v1 = 1;
    if (a0 <= 0)
        return 1;
    v2 = 1;
    do
    {
        v3 = v2;
        v5 = v3 * v1;
        v1 = v5;
        v2 = (unsigned int)v3 + 1;
    } while (a0 + 1 != (unsigned int)v2);
    return (unsigned int)v3 * (unsigned int)v4;
}


// Function: sub_40185f at 0x40185f
void sub_40185f(unsigned long a0, unsigned long a1)
{
    ternary_op();
    return;
}


// Function: ternary_op at 0x401860
long long ternary_op(unsigned int a0, unsigned int a1)
{
    return (a0 <= a1 ? a1 : a0);
}


// Function: sub_40186c at 0x40186c
void sub_40186c()
{
    test_control_flow_l1();
    return;
}


// Function: test_control_flow_l1 at 0x401870
extern char g_403008;

int test_control_flow_l1()
{
    puts(&g_403008);
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
    __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", 45);
    __printf_chk(1, "CF-L1-13 (loop_while): %d\n", 5);
    __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", 4);
    __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", 12);
    __printf_chk(1, "CF-L1-16 (loop_break): %d\n", 2);
    __printf_chk(1, "CF-L1-16 (loop_break): %d\n", 4294967295);
    __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", 25);
    __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
    __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
    __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
    __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
    return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


// Function: sub_401af7 at 0x401af7
void sub_401af7(unsigned long a0)
{
    loop_multi_exit();
    return;
}


// Function: loop_multi_exit at 0x401b00
unsigned long long loop_multi_exit(unsigned int a0)
{
    unsigned long long v1;  // rax

    if (a0 == 1)
    {
        return 0;
    }
    else if (a0 == 2)
    {
        return 1;
    }
    else if (a0 != 3)
    {
        if (a0 == 4)
        {
            v1 = 0;
        }
        else if (a0 == 5)
        {
            return 10;
        }
        else if (a0 == 6)
        {
            return 11;
        }
        else if (a0 == 7)
        {
            return 12;
        }
        else if (a0 == 8)
        {
            v1 = 1;
        }
        else if (a0 == 9)
        {
            return 20;
        }
        else if (a0 == 10)
        {
            return 21;
        }
        else if (a0 != 11)
        {
            if (a0 != 12)
                return 4294967295;
            v1 = 2;
        }
        else
        {
            return 22;
        }
        return 3 + v1 * 10;
    }
    else
    {
        return 2;
    }
}


// Function: sub_401ba3 at 0x401ba3
void sub_401ba3()
{
    infinite_loop();
    return;
}


// Function: infinite_loop at 0x401bb0
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


// Function: sub_401bb8 at 0x401bb8
void sub_401bb8()
{
}


// Function: sub_401bd9 at 0x401bd9
void sub_401bd9(unsigned long a0)
{
    multi_return();
    return;
}


// Function: multi_return at 0x401be0
unsigned long long multi_return(unsigned int a0)
{
    if (a0 < 0)
    {
        return 4294967295;
    }
    else if (a0 <= 50)
    {
        return ((a0 & 1) ? a0 + 1 : a0 * 2);
    }
    else
    {
        return 4294967294;
    }
}


// Function: sub_401bfa at 0x401bfa
void sub_401bfa()
{
}


// Function: sub_401c0c at 0x401c0c
void sub_401c0c(unsigned long a0)
{
    conditional_return();
    return;
}


// Function: conditional_return at 0x401c10
unsigned long long conditional_return(unsigned int a0)
{
    if (a0 > 0)
    {
        return a0 * 2;
    }
    else if (!a0)
    {
        return 0;
    }
    else
    {
        return -(a0);
    }
}


// Function: sub_401c1c at 0x401c1c
void sub_401c1c()
{
}


// Function: sub_401c2f at 0x401c2f
void sub_401c2f(unsigned long a0, unsigned long a1, unsigned long a2)
{
    duffs_device();
    return;
}


// Function: duffs_device at 0x401c30

unsigned int duffs_device(void* a0, unsigned int *a1, unsigned int a2)
{
    void* cur;  // rax
    unsigned int *iter;  // rcx

    cur = a0;
    iter = a1;
    switch (a2)
    {
    case 0:
        break;
    default:
        return 4294967295;
    }
}


// Function: sub_401c62 at 0x401c62
void sub_401c62()
{
}


// Function: sub_401cd3 at 0x401cd3
void sub_401cd3()
{
}


// Function: sub_401cfb at 0x401cfb
void sub_401cfb(unsigned long a0)
{
    loop_complex_cond();
    return;
}


// Function: loop_complex_cond at 0x401d00
unsigned int loop_complex_cond(unsigned int a0)
{
    unsigned int v1;  // edx
    unsigned int v2;  // eax
    unsigned int v3;  // ecx

    if (a0 <= 0)
        return a0;
    v1 = a0 - 1;
    if (v1 > 2)
    {
        v1 = a0 - 2;
        if (v1 > 4)
        {
            v1 = a0 - 3;
            if (v1 > 6)
            {
                v1 = a0 - 4;
                if (v1 > 8)
                {
                    v1 = a0 - 5;
                    if (v1 > 10)
                    {
                        v1 = a0 - 6;
                        if (v1 > 12)
                        {
                            v1 = a0 - 7;
                            if (v1 > 14)
                            {
                                v1 = a0 - 8;
                                if (v1 > 16)
                                {
                                    v1 = a0 - 9;
                                    if (v1 > 18)
                                    {
                                        v1 = a0 - 10;
                                        v2 = 10;
                                        v3 = 20;
                                    }
                                    else
                                    {
                                        v2 = 9;
                                        v3 = 18;
                                    }
                                }
                                else
                                {
                                    v2 = 8;
                                    v3 = 16;
                                }
                            }
                            else
                            {
                                v2 = 7;
                                v3 = 14;
                            }
                        }
                        else
                        {
                            v2 = 6;
                            v3 = 12;
                        }
                    }
                    else
                    {
                        v2 = 5;
                        v3 = 10;
                    }
                }
                else
                {
                    v2 = 4;
                    v3 = 8;
                }
            }
            else
            {
                v2 = 3;
                v3 = 6;
            }
        }
        else
        {
            v2 = 2;
            v3 = 4;
        }
    }
    else
    {
        v2 = 1;
        v3 = 2;
    }
    return v2 + v1 + v3;
}


// Function: sub_401d6e at 0x401d6e
void sub_401d6e()
{
}


// Function: sub_401d73 at 0x401d73
void sub_401d73()
{
}


// Function: sub_401dd8 at 0x401dd8
void sub_401dd8(unsigned long a0)
{
    loop_modify_var();
    return;
}


// Function: loop_modify_var at 0x401de0
unsigned int loop_modify_var(unsigned int a0)
{
    unsigned long long v1;  // rax
    unsigned int v2;  // edx
    unsigned long long v3;  // r8
    unsigned int v4;  // edx

    if (a0 <= 0)
        return 0;
    v1 = 1;
    v2 = 0;
    if (a0 == 1)
        return 0;
    v3 = 1;
    if (1)
        goto LABEL_401e14;
    while (true)
    {
        v1 = v2 + 4;
        if (a0 <= (unsigned int)v1)
            break;
        v2 += 3;
        while (true)
        {
            v3 += v1;
            if ((unsigned int)v1 > 5)
                break;
LABEL_401e14:
            v4 = (unsigned int)v1 + 1;
            if (a0 <= v4)
                return v3;
            v1 = v4;
            v2 = v1;
        }
    }
    return v3;
}


// Function: sub_401e23 at 0x401e23
void sub_401e23()
{
}


// Function: sub_401e2c at 0x401e2c
void sub_401e2c()
{
    loop_external_state();
    return;
}


// Function: loop_external_state at 0x401e30
unsigned long long loop_external_state(unsigned int *a0)
{
    unsigned long long v1;  // rax

    v1 = 0;
    do
    {
    } while (!*(a0) && (v1 = (unsigned long long)((unsigned int)v1 + 1), (unsigned int)v1 != 101));
    return v1;
}


// Function: sub_401e38 at 0x401e38
void sub_401e38()
{
}


// Function: sub_401e4f at 0x401e4f
void sub_401e4f(unsigned long a0, unsigned long a1)
{
    tail_recursion();
    return;
}


// Function: tail_recursion at 0x401e50
long long tail_recursion(unsigned long a0, unsigned int a1)
{
    unsigned long v1;  // rax

    v1 = a1;
    if ((unsigned int)a0 > 1)
    {
        do
        {
            v1 *= a0;
            a0 = (unsigned int)a0 - 1;
        } while ((unsigned int)a0 != 1);
    }
    return v1;
}


// Function: sub_401e6c at 0x401e6c
void sub_401e6c(unsigned long a0, unsigned long a1)
{
    indirect_recursion_a();
    return;
}


// Function: indirect_recursion_a at 0x401e70
unsigned long long indirect_recursion_a(unsigned int a0, unsigned int a1)
{
    unsigned int v1;  // ecx
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned int ptr;  // eax
    unsigned long long v8;  // rax

    v1 = a1 - 4;
    if (a1 <= 0)
        return a0;
    while (true)
    {
        if (((char)a0 & 1))
        {
            if (a1 == 1)
                return a0 * 3 + 1;
            v2 = a0 * 3 + 2;
            if (a1 <= 2)
                return v2;
            v3 = v2;
            v4 = v2;
            if (!((char)v3 & 1))
                goto LABEL_401edc;
            goto LABEL_401e97;
        }
        else
        {
            if (a1 == 1 || !((v5 = (unsigned long long)(((a0 >> 31) + a0 >> 1) + 1), a1 > 2)))
                break;
            v3 = v5;
            v4 = v5;
            if (((char)v3 & 1))
            {
LABEL_401e97:
                v6 = v3;
                if (a1 == 3)
                    return (unsigned int)v6 * 3 + 1;
                a0 = (unsigned int)v6 * 3 + 2;
                ptr = v1;
                goto LABEL_401ea4;
            }
            else
            {
LABEL_401edc:
                v8 = v4;
                if (a1 == 3)
                    return ((unsigned int)v8 >> 31) + (unsigned int)v8 >> 1;
                a0 = (((unsigned int)v8 >> 31) + (unsigned int)v8 >> 1) + 1;
                ptr = v1;
LABEL_401ea4:
                v1 -= 4;
                a1 -= 4;
                if (!ptr)
                    return a0;
            }
        }
    }
    return v5;
}


// Function: sub_401eb1 at 0x401eb1
void sub_401eb1()
{
}


// Function: sub_401ebc at 0x401ebc
void sub_401ebc()
{
}


// Function: sub_401ef3 at 0x401ef3
void sub_401ef3()
{
}


// Function: sub_401efc at 0x401efc
void sub_401efc(unsigned long a0, unsigned long a1)
{
    call_func_ptr();
    return;
}


// Function: call_func_ptr at 0x401f00
long long call_func_ptr(unsigned long a0, unsigned long a1)
{
    goto a0;
}


// Function: sub_401f0b at 0x401f0b
void sub_401f0b(unsigned long a0)
{
    call_func_ptr_array();
    return;
}


// Function: call_func_ptr_array at 0x401f10
unsigned long long call_func_ptr_array(unsigned int a0, unsigned long a1)
{
    int v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x18]

    v1 = recursion_factorial;
    *((unsigned long *)&v0) = InterleaveLOV(triple_value, double_value);
    if (a0 > 2)
        return 4294967295;
    goto *((long long *)((char *)&v0 + 8 * a0));
}


// Function: sub_401f9f at 0x401f9f
void sub_401f9f(unsigned long a0, unsigned long a1)
{
    call_virtual_func();
    return;
}


// Function: call_virtual_func at 0x401fa0
unsigned int call_virtual_func(unsigned long a0, unsigned int a1)
{
    return a1 * 2;
}


// Function: sub_401fa8 at 0x401fa8
void sub_401fa8(unsigned long a0, unsigned long a1)
{
    process_with_callback();
    return;
}


// Function: process_with_callback at 0x401fb0
unsigned long long process_with_callback(unsigned int *a0, unsigned int a1, unsigned long long *a2)
{
    unsigned long long v1;  // r12
    unsigned int *i;  // rbx
    unsigned long long v3;  // r12
    unsigned int *v4;  // rbx
    unsigned long long v5;  // rax
    unsigned long long v6;  // r12

    if (a1 <= 0)
        return 0;
    v1 = 0;
    i = a0;
    do
    {
        v3 = v1;
        v4 = i + 1;
        v6 = v3 + a2(*(i));
        v1 = v6;
        i = v4;
    } while (i != &a0[1 + a1 + 1]);
    return v3 + v5 & 4294967295;
}


// Function: sub_401ff6 at 0x401ff6
void sub_401ff6()
{
}


// Function: sub_402011 at 0x402011
void sub_402011()
{
    test_control_flow_l2();
    return;
}


// Function: test_control_flow_l2 at 0x402020
extern char g_403118;

long long test_control_flow_l2()
{
    unsigned long long v8;  // rdx
    unsigned long long v10;  // rax
    unsigned int i;  // ecx
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rdx
    unsigned long v14;  // fs
    unsigned int v0;  // [bp-0x60]
    unsigned int result;  // [bp-0x5c]
    uint128_t v2;  // [bp-0x58]
    uint128_t v3;  // [bp-0x48]
    uint128_t flag1;  // [bp-0x38]
    uint128_t flag2;  // [bp-0x28]
    unsigned long v6;  // [bp-0x10]

    puts(&g_403118);
    __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", 12);
    v0 = 0;
    v8 = 0;
    do
    {
        if (v0 == 1)
            goto LABEL_402088;
    } while ((v8 = (unsigned long long)((unsigned int)v8 + 1), (unsigned int)v8 != 1001));
    v0 = 1;
LABEL_402088:
    __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v8);
    __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
    __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
    __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
    __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
    __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
    v2 = 316912650112397582603894390785;
    v3 = 633825300243241909290088267781;
    flag1 = 0;
    flag2 = 0;
    __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", duffs_device(&flag1, &v2, 8) & 4294967295);
    __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
    v10 = 1;
    i = 0;
    v12 = 1;
    if (1)
        goto LABEL_4021a6;
    while (i == 5)
    {
        v10 = 9;
        i += 3;
        while (true)
        {
            v12 += v10;
            if ((unsigned int)v10 > 5)
                break;
LABEL_4021a6:
            v10 = (unsigned int)v10 + 1;
            i = v10;
        }
    }
    __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v12);
    result = 0;
    v13 = 0;
    do
    {
    } while (!result && (v13 = (unsigned long long)((unsigned int)v13 + 1), (unsigned int)v13 != 101));
    __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v13);
    __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
    __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
    __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
    __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
    __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 10);
    __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", 120);
    __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", 30);
    return v6 - *((long long *)(40 + v14));
}


// Function: sub_402069 at 0x402069
void sub_402069()
{
}


// Function: sub_4021af at 0x4021af
void sub_4021af()
{
}


// Function: sub_4021cf at 0x4021cf
void sub_4021cf()
{
}


// Function: sub_4022c2 at 0x4022c2
void sub_4022c2(unsigned long a0)
{
    non_local_jump();
    return;
}


// Function: non_local_jump at 0x4022d0
extern unsigned long long jump_buffer;

unsigned long long non_local_jump(unsigned int a0)
{
    if (_setjmp(&jump_buffer))
    {
        return 4294967295;
    }
    else if (a0 < 0)
    {
        __longjmp_chk(&jump_buffer, 1); /* do not return */
    }
    else if (a0 <= 100)
    {
        return a0 * 2;
    }
    else
    {
        __longjmp_chk(&jump_buffer, 2); /* do not return */
    }
}


// Function: sub_40230a at 0x40230a
void sub_40230a()
{
}


// Function: sub_402339 at 0x402339
void sub_402339(unsigned long a0)
{
    cpp_exception();
    return;
}


// Function: cpp_exception at 0x402340
unsigned long long cpp_exception(unsigned int a0)
{
    if (a0 < 0)
    {
        return 4294967295;
    }
    else if (a0 <= 100)
    {
        return a0 * 2;
    }
    else
    {
        return 4294967294;
    }
}


// Function: sub_402351 at 0x402351
void sub_402351()
{
}


// Function: sub_402364 at 0x402364
void sub_402364(unsigned long a0, unsigned long a1, unsigned long a2)
{
    large_jump_table();
    return;
}


// Function: large_jump_table at 0x402370
unsigned long long large_jump_table(unsigned int a0, unsigned long a1, unsigned long a2)
{
    int v0;  // [bp-0x68]
    int v1;  // [bp-0x58]
    int v2;  // [bp-0x48]
    int v3;  // [bp-0x38]
    int v4;  // [bp-0x28]

    *((unsigned long *)&v0) = InterleaveLOV(op_sub, op_add);
    *((unsigned long *)&v1) = InterleaveLOV(op_div, op_mul);
    *((unsigned long *)&v2) = InterleaveLOV(op_and, op_mod);
    *((unsigned long *)&v3) = InterleaveLOV(op_xor, op_or);
    *((unsigned long *)&v4) = InterleaveLOV(op_shr, op_shl);
    if (a0 > 9)
        return 4294967295;
    goto *((long long *)((char *)&v0 + 8 * a0));
}


// Function: sub_40246f at 0x40246f
void sub_40246f(unsigned long a0, unsigned long a1)
{
    conditional_func_ptr();
    return;
}


// Function: conditional_func_ptr at 0x402470
long long conditional_func_ptr(unsigned int a0, unsigned long a1)
{
    unsigned long long v1;  // rdx

    v1 = double_value;
    if (a0)
    {
        if (a0 != 1)
            v1 = recursion_factorial;
        else
            v1 = triple_value;
    }
    goto v1;
}


// Function: sub_40249a at 0x40249a
void sub_40249a(unsigned long a0, unsigned long a1)
{
    state_machine();
    return;
}


// Function: state_machine at 0x4024a0
unsigned long long state_machine(unsigned int a0, unsigned int a1)
{
    if (a1 == 2)
    {
        return 2;
    }
    else if (a1 <= 2)
    {
        if (!a1)
        {
            return a0 == 1;
        }
        else if (a1 != 1)
        {
            return 3;
        }
        else if (a0 != 2)
        {
            return (a0 == 99) * 2 + 1;
        }
        else
        {
            return 2;
        }
    }
    else
    {
        if (a1 == 3)
            return -(0 < a0) & 3;
        return 3;
    }
}


// Function: sub_4024c6 at 0x4024c6
void sub_4024c6()
{
}


// Function: sub_4024dd at 0x4024dd
void sub_4024dd()
{
}


// Function: sub_4024e6 at 0x4024e6
void sub_4024e6()
{
}


// Function: sub_4024f6 at 0x4024f6
void sub_4024f6()
{
}


// Function: sub_402509 at 0x402509
void sub_402509(unsigned long a0, unsigned long a1)
{
    fsm_func_table();
    return;
}


// Function: fsm_func_table at 0x402510
unsigned long long fsm_func_table(unsigned long a0, unsigned int a1)
{
    int v0;  // [bp-0x38]
    int v1;  // [bp-0x28]

    *((unsigned long *)&v0) = InterleaveLOV(state_processing, state_idle);
    *((unsigned long *)&v1) = InterleaveLOV(state_error, state_done);
    if (a1 > 3)
        return 3;
    goto *((long long *)((char *)&v0 + 8 * a1));
}


// Function: sub_4025af at 0x4025af
void sub_4025af(unsigned long a0, unsigned long a1)
{
    computed_goto();
    return;
}


// Function: computed_goto at 0x4025b0
extern char g_402618;
extern char g_402640;
extern char g_402650;
extern char g_402660;

unsigned long long computed_goto(unsigned long a0, unsigned int a1)
{
    int v0;  // [bp-0x38]
    int v1;  // [bp-0x28]

    *((unsigned long *)&v0) = InterleaveLOV(&g_402650, &g_402660);
    *((unsigned long *)&v1) = InterleaveLOV(&g_402618, &g_402640);
    if (a1 > 3)
        return 4294967295;
    goto *((long long *)((char *)&v0 + 8 * a1));
}


// Function: sub_40267c at 0x40267c
void sub_40267c(unsigned long a0)
{
    obfuscated_cf();
    return;
}


// Function: obfuscated_cf at 0x402680
unsigned int obfuscated_cf(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_402688 at 0x402688
void sub_402688(unsigned long a0)
{
    opaque_predicate();
    return;
}


// Function: opaque_predicate at 0x402690
unsigned int opaque_predicate(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_402698 at 0x402698
void sub_402698(char a0)
{
    overlapped_code();
    return;
}


// Function: overlapped_code at 0x4026a0
int overlapped_code(unsigned int a0)
{
    if (!((char)a0 & 1))
        return ((a0 >> 31) + a0 & 4294967295) >> 1;
    return a0 * 3 + 1;
}


// Function: sub_4026af at 0x4026af
void sub_4026af()
{
}


// Function: sub_4026ba at 0x4026ba
void sub_4026ba()
{
    test_control_flow_l3();
    return;
}


// Function: test_control_flow_l3 at 0x4026c0
extern char g_4032b8;

int test_control_flow_l3()
{
    unsigned int v3;  // edi
    char *v4;  // rsi

    puts(&g_4032b8);
    __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump.constprop.0() & 4294967295);
    __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291) & 4294967295);
    __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
    __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
    __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", 15);
    __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
    __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
    __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", 2);
    computed_goto.constprop.0();
    __printf_chk(v3, v4);
    __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
    __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
    return __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}


// Function: _fini at 0x4027fc
void _fini()
{
    return;
}

