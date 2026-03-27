// Angr Decompilation of 1_gcc_O2_no_g
// Platform: X86

// Function: _init at 0x401000
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 *g_405ff4;

int _init()
{
    if (g_405ff4)
        g_405ff4();
    frame_dummy();
    return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
    unsigned int ptr[3];  // ebx
    unsigned int v0;  // [bp-0x4]

    v0 = ptr[1];
    goto ptr[2];
}


// Function: sub_401040 at 0x401040
int sub_401040()
{
    sub_401030(0);
    return;
}


// Function: sub_40104e at 0x40104e
void sub_40104e()
{
    sub_401050();
    return;
}


// Function: sub_401050 at 0x401050
int sub_401050()
{
    sub_401030(8);
    return;
}


// Function: sub_40105e at 0x40105e
void sub_40105e()
{
    sub_401060();
    return;
}


// Function: sub_401060 at 0x401060
int sub_401060()
{
    sub_401030(16);
    return;
}


// Function: sub_40106e at 0x40106e
void sub_40106e()
{
    sub_401070();
    return;
}


// Function: sub_401070 at 0x401070
int sub_401070()
{
    sub_401030(24);
    return;
}


// Function: sub_40107e at 0x40107e
void sub_40107e()
{
    sub_401080();
    return;
}


// Function: sub_401080 at 0x401080
int sub_401080()
{
    sub_401030(32);
    return;
}


// Function: sub_40108e at 0x40108e
void sub_40108e()
{
    sub_401090();
    return;
}


// Function: sub_401090 at 0x401090
int sub_401090()
{
    sub_401030(40);
    return;
}


// Function: sub_40109e at 0x40109e
int sub_40109e()
{
    sub_4010a0();
    return;
}


// Function: sub_4010a0 at 0x4010a0
typedef struct struct_0 {
    char padding_0[40];
    unsigned int field_28;
} struct_0;

int sub_4010a0()
{
    struct_0 *v1;  // ebx

    goto v1->field_28;
}


// Function: sub_4010aa at 0x4010aa
int sub_4010aa()
{
    sub_4010b0();
    return;
}


// Function: sub_4010b0 at 0x4010b0
typedef struct struct_0 {
    char padding_0[12];
    unsigned int field_c;
} struct_0;

int sub_4010b0()
{
    struct_0 *v1;  // ebx

    goto v1->field_c;
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
    sub_4010c0();
    return;
}


// Function: sub_4010c0 at 0x4010c0
typedef struct struct_0 {
    char padding_0[16];
    unsigned int field_10;
} struct_0;

int sub_4010c0()
{
    struct_0 *v1;  // ebx

    goto v1->field_10;
}


// Function: sub_4010ca at 0x4010ca
int sub_4010ca()
{
    sub_4010d0();
    return;
}


// Function: sub_4010d0 at 0x4010d0
typedef struct struct_0 {
    char padding_0[20];
    unsigned int field_14;
} struct_0;

int sub_4010d0()
{
    struct_0 *v1;  // ebx

    goto v1->field_14;
}


// Function: sub_4010da at 0x4010da
int sub_4010da()
{
    sub_4010e0();
    return;
}


// Function: sub_4010e0 at 0x4010e0
typedef struct struct_0 {
    char padding_0[24];
    unsigned int field_18;
} struct_0;

int sub_4010e0()
{
    struct_0 *v1;  // ebx

    goto v1->field_18;
}


// Function: sub_4010ea at 0x4010ea
int sub_4010ea()
{
    sub_4010f0();
    return;
}


// Function: sub_4010f0 at 0x4010f0
typedef struct struct_0 {
    char padding_0[28];
    unsigned int field_1c;
} struct_0;

int sub_4010f0()
{
    struct_0 *v1;  // ebx

    goto v1->field_1c;
}


// Function: sub_4010fa at 0x4010fa
int sub_4010fa()
{
    sub_401100();
    return;
}


// Function: sub_401100 at 0x401100
typedef struct struct_0 {
    char padding_0[32];
    unsigned int field_20;
} struct_0;

int sub_401100()
{
    struct_0 *v1;  // ebx

    goto v1->field_20;
}


// Function: sub_40110a at 0x40110a
void sub_40110a()
{
    main();
    return;
}


// Function: main at 0x401110
unsigned int main()
{
    char v0;  // [bp+0x0]

    test_control_flow_l1(&v0);
    test_control_flow_l2(&v0);
    test_control_flow_l3();
    return 0;
}


// Function: sub_40112d at 0x40112d
void sub_40112d()
{
    _start(); /* do not return */
}


// Function: _start at 0x401130
int _start()
{
    unsigned int v4;  // eax
    unsigned int v5;  // edx
    unsigned int v0;  // [bp-0x8]
    unsigned int v1;  // [bp+0x0]
    unsigned int v2;  // [bp+0x0]
    unsigned int v3;  // [bp+0x4]

    v1 = v4;
    v0 = v5;
    sub_4010b0(main, v2, &v3, 0, 0);
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198747()
}


// Function: sub_40115c at 0x40115c
void sub_40115c()
{
    return;
}


// Function: __x86.get_pc_thunk.bx at 0x401160
void __x86.get_pc_thunk.bx()
{
    return;
}


// Function: sub_401164 at 0x401164
void sub_401164()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401170
typedef struct struct_0 {
    char padding_0[20087];
    struct struct_1 *field_4e77;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

unsigned int * deregister_tm_clones()
{
    unsigned int *ptr;  // edx

    __x86.get_pc_thunk.dx();
    return (char *)&ptr[5028] + 3;
}


// Function: sub_4011a3 at 0x4011a3
void sub_4011a3()
{
}


// Function: sub_4011a9 at 0x4011a9
void sub_4011a9()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x4011b0
typedef struct struct_0 {
    char padding_0[20039];
    struct struct_1 *field_4e47;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

unsigned int register_tm_clones()
{
    struct_0 *v2;  // edx
    struct_0 *v3;  // edx
    unsigned int v4;  // ebx
    unsigned int v0;  // [bp-0x8]

    __x86.get_pc_thunk.dx();
    v3 = &v2->padding_0[19987];
    v0 = v4;
    if (!(&v3->padding_0[64] - &v3->padding_0[64] >> 31) + (&v3->padding_0[64] - &v3->padding_0[64] >> 2) >> 1)
    {
        return (&v3->padding_0[64] - &v3->padding_0[64] >> 31) + (&v3->padding_0[64] - &v3->padding_0[64] >> 2) >> 1;
    }
    else if (*((int *)&v3->padding_0[52]))
    {
        return (*((int *)&v3->padding_0[52]))(&v3->padding_0[64], (&v3->padding_0[64] - &v3->padding_0[64] >> 31) + (&v3->padding_0[64] - &v3->padding_0[64] >> 2) >> 1);
    }
    else
    {
        return (&v3->padding_0[64] - &v3->padding_0[64] >> 31) + (&v3->padding_0[64] - &v3->padding_0[64] >> 2) >> 1;
    }
}


// Function: sub_4011f7 at 0x4011f7
void sub_4011f7()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401200
typedef struct struct_0 {
    char padding_0[19939];
    unsigned int field_4de3;
    char padding_4de7[16];
    unsigned int field_4df7;
    char padding_4dfb[24];
    char field_4e13;
    char padding_4e14[3];
    unsigned int field_4e17;
} struct_0;

unsigned int * __do_global_dtors_aux()
{
    unsigned int *v5;  // eax
    struct_0 *v6;  // edi
    struct_0 *ptr;  // edi
    unsigned int v8;  // esi
    unsigned int v9;  // ebx
    struct_0 *v10;  // esi
    unsigned int v11;  // eax
    unsigned int i;  // ebx
    unsigned int v13;  // eax
    unsigned int *v14;  // eax
    unsigned int v0;  // [bp-0x10]
    unsigned int v1;  // [bp-0xc]
    char v2;  // [bp-0x8]
    char v3;  // [bp+0x0]

    v5 = __x86.get_pc_thunk.di(*((int *)&v2), &v3);
    ptr = &v6->padding_0[19899];
    v1 = v8;
    v0 = v9;
    if (ptr->padding_0[88])
        return v5;
    if (*((int *)&ptr->padding_0[40]))
        sub_4010a0(*((int *)&ptr->padding_0[60]));
    v10 = &ptr->padding_0[224];
    v11 = *((int *)&ptr->padding_0[92]);
    i = (&ptr->padding_0[220] - v10 >> 2) - 1;
    if (*((int *)&ptr->padding_0[92]) < i)
    {
        do
        {
            v13 = v11 + 1;
            *((unsigned int *)&ptr->padding_0[92]) = v13;
            (*((int *)&v10->padding_0[4 * v13]))();
            v11 = *((int *)&ptr->padding_0[92]);
        } while (*((int *)&ptr->padding_0[92]) < i);
    }
    v14 = deregister_tm_clones();
    ptr->padding_0[88] = 1;
    return v14;
}


// Function: sub_40128a at 0x40128a
void sub_40128a()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x401290
unsigned int frame_dummy()
{
    return register_tm_clones();
}


// Function: __x86.get_pc_thunk.dx at 0x401299
void __x86.get_pc_thunk.dx()
{
    return;
}


// Function: __x86.get_pc_thunk.di at 0x40129d
int __x86.get_pc_thunk.di(int a0)
{
    unsigned int v0;  // eax

    return v0;
}


// Function: sub_4012a1 at 0x4012a1
void sub_4012a1(unsigned int a0)
{
    recursion_factorial();
    return;
}


// Function: recursion_factorial at 0x4012b0
unsigned int recursion_factorial(unsigned int i)
{
    unsigned int v0;  // edx
    unsigned int v1;  // edx
    unsigned int v2;  // eax
    unsigned int v4;  // edx

    v0 = 1;
    if (i <= 1)
        return 1;
    do
    {
        v2 = i;
        v4 = v2 * v0;
        i = v2 - 1;
        v0 = v4;
    } while (i != 1);
    return v2 * v1;
}


// Function: sub_4012d8 at 0x4012d8
void sub_4012d8(unsigned int a0)
{
    double_value();
    return;
}


// Function: double_value at 0x4012e0
unsigned int double_value(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_4012eb at 0x4012eb
void sub_4012eb(unsigned int a0)
{
    triple_value();
    return;
}


// Function: triple_value at 0x4012f0
unsigned int triple_value(unsigned int a0)
{
    return a0 * 3;
}


// Function: sub_4012fc at 0x4012fc
void sub_4012fc(unsigned int a0, unsigned int a1)
{
    op_add();
    return;
}


// Function: op_add at 0x401300
int op_add(unsigned int a0, unsigned int a1)
{
    return a1 + a0;
}


// Function: sub_40130d at 0x40130d
void sub_40130d(unsigned int a0, unsigned int a1)
{
    op_sub();
    return;
}


// Function: op_sub at 0x401310
int op_sub(unsigned int a0, unsigned int a1)
{
    return a0 - a1;
}


// Function: sub_40131d at 0x40131d
void sub_40131d(unsigned int a0, unsigned int a1)
{
    op_mul();
    return;
}


// Function: op_mul at 0x401320
int op_mul(unsigned int a0, unsigned int a1)
{
    return a0 * a1;
}


// Function: sub_40132e at 0x40132e
void sub_40132e(unsigned int a0, unsigned int a1)
{
    op_div();
    return;
}


// Function: op_div at 0x401330
unsigned int op_div(unsigned int a0, unsigned int a1)
{
    unsigned int result;  // ecx

    result = a1;
    if (result)
        result = (int)((a0 >> 31 CONCAT a0) % result) CONCAT (int)((a0 >> 31 CONCAT a0) / result);
    return result;
}


// Function: sub_401348 at 0x401348
void sub_401348(unsigned int a0, unsigned int a1)
{
    op_mod();
    return;
}


// Function: op_mod at 0x401350
unsigned int op_mod(unsigned int a0, unsigned int a1)
{
    unsigned int result;  // edx

    result = a1;
    if (result)
        result = ((int)((a0 >> 31 CONCAT a0) % result) CONCAT (int)((a0 >> 31 CONCAT a0) / result)) >> 32;
    return result;
}


// Function: sub_401368 at 0x401368
void sub_401368(unsigned int a0, unsigned int a1)
{
    op_and();
    return;
}


// Function: op_and at 0x401370
unsigned int op_and(unsigned int a0, unsigned int a1)
{
    return a1 & a0;
}


// Function: sub_40137d at 0x40137d
void sub_40137d(unsigned int a0, unsigned int a1)
{
    op_or();
    return;
}


// Function: op_or at 0x401380
unsigned int op_or(unsigned int a0, unsigned int a1)
{
    return a1 | a0;
}


// Function: sub_40138d at 0x40138d
void sub_40138d(unsigned int a0, unsigned int a1)
{
    op_xor();
    return;
}


// Function: op_xor at 0x401390
int op_xor(unsigned int a0, unsigned int a1)
{
    return a1 ^ a0;
}


// Function: sub_40139d at 0x40139d
void sub_40139d(unsigned int a0, unsigned int a1)
{
    op_shl();
    return;
}


// Function: op_shl at 0x4013a0
int op_shl(unsigned int a0, char a1)
{
    return a0 << (a1 & 31);
}


// Function: sub_4013af at 0x4013af
void sub_4013af(unsigned int a0, unsigned int a1)
{
    op_shr();
    return;
}


// Function: op_shr at 0x4013b0
int op_shr(unsigned int a0, char a1)
{
    return a0 >> (a1 & 31);
}


// Function: sub_4013bf at 0x4013bf
void sub_4013bf(unsigned int a0)
{
    state_idle();
    return;
}


// Function: state_idle at 0x4013c0
int state_idle(unsigned int a0)
{
    return a0 == 1;
}


// Function: sub_4013cf at 0x4013cf
void sub_4013cf(unsigned int a0)
{
    state_processing();
    return;
}


// Function: state_processing at 0x4013d0
unsigned int state_processing(unsigned int a0)
{
    if (a0 == 2)
        return 2;
    return (a0 == 99) * 2 + 1;
}


// Function: sub_4013eb at 0x4013eb
void sub_4013eb()
{
}


// Function: sub_4013f6 at 0x4013f6
void sub_4013f6()
{
    state_done();
    return;
}


// Function: state_done at 0x401400
unsigned int state_done()
{
    return 2;
}


// Function: sub_40140a at 0x40140a
void sub_40140a(unsigned int a0)
{
    state_error();
    return;
}


// Function: state_error at 0x401410
unsigned int state_error(unsigned int a0)
{
    if (!a0)
        return 0;
    return 3;
}


// Function: sub_401423 at 0x401423
void sub_401423(unsigned int a0, unsigned int a1, unsigned int a2)
{
    sequential_ops();
    return;
}


// Function: sequential_ops at 0x401430
int sequential_ops(unsigned int a0, unsigned int a1, unsigned int a2)
{
    return (a1 + a0) * 2 - a2;
}


// Function: sub_401443 at 0x401443
void sub_401443(unsigned int a0)
{
    single_if();
    return;
}


// Function: single_if at 0x401450
unsigned int single_if(unsigned int a0)
{
    if (a0 > 0)
        return a0 * 2;
    return a0;
}


// Function: sub_401461 at 0x401461
void sub_401461(unsigned int a0)
{
    if_else();
    return;
}


// Function: if_else at 0x401470
unsigned int if_else(unsigned int a0)
{
    return _ccall(15, 15, a0, 0, 0) & 255;
}


// Function: nested_if_2 at 0x401480
unsigned int nested_if_2(unsigned int a0, unsigned int a1)
{
    if (a0 <= 0)
    {
        return 0;
    }
    else if (a1 <= 0)
    {
        return a0;
    }
    else
    {
        return a0 + a1;
    }
}


// Function: sub_40149b at 0x40149b
void sub_40149b(unsigned int a0)
{
    nested_if_deep();
    return;
}


// Function: nested_if_deep at 0x4014a0
unsigned int nested_if_deep(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
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
        return (char)_ccall(15, 15, a4, 0, 0) + 4;
    }
    else
    {
        return 3;
    }
}


// Function: sub_4014da at 0x4014da
void sub_4014da()
{
}


// Function: sub_4014e6 at 0x4014e6
void sub_4014e6()
{
}


// Function: sub_4014f6 at 0x4014f6
void sub_4014f6(unsigned int a0)
{
    if_elseif_chain();
    return;
}


// Function: if_elseif_chain at 0x401500
unsigned int if_elseif_chain(unsigned int a0)
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


// Function: sub_401527 at 0x401527
void sub_401527()
{
}


// Function: sub_401536 at 0x401536
void sub_401536(unsigned int a0)
{
    if_elseif_long();
    return;
}


// Function: if_elseif_long at 0x401540
unsigned int if_elseif_long(unsigned int a0)
{
    unsigned int v0;  // eax

    v0 = 4294967295;
    if (a0 <= 4)
        v0 = (a0 + 1) * 100;
    return v0;
}


// Function: sub_401559 at 0x401559
void sub_401559()
{
    switch_small();
    return;
}


// Function: switch_small at 0x401560
unsigned int switch_small(unsigned int a0)
{
    unsigned int v0;  // ecx

    __x86.get_pc_thunk.cx();
    if (a0 > 3)
        return 4294967295;
    return *((int *)(v0 + 19039 + a0 * 4 - 10692));
}


// Function: sub_401585 at 0x401585
void sub_401585(unsigned int a0)
{
    switch_large();
    return;
}


// Function: switch_large at 0x401590
unsigned int switch_large(unsigned int a0)
{
    unsigned int v0;  // eax

    v0 = 4294967295;
    if (a0 <= 9)
        v0 = a0 * 10;
    return v0;
}


// Function: sub_4015a8 at 0x4015a8
void sub_4015a8(unsigned int a0)
{
    switch_default();
    return;
}


// Function: switch_default at 0x4015b0
unsigned int switch_default(unsigned int a0)
{
    unsigned int v0;  // eax

    v0 = 0;
    if (a0 - 1 <= 2)
        v0 = a0 * 100;
    return v0;
}


// Function: sub_4015c6 at 0x4015c6
void sub_4015c6(unsigned int a0)
{
    switch_fallthrough();
    return;
}


// Function: switch_fallthrough at 0x4015d0
unsigned int switch_fallthrough(unsigned int a0)
{
    if (a0 == 2)
    {
        return 6;
    }
    else if (a0 != 3)
    {
        return (a0 == 1) * 2 - 1;
    }
    else
    {
        return 21;
    }
}


// Function: sub_4015ef at 0x4015ef
void sub_4015ef()
{
}


// Function: sub_4015fb at 0x4015fb
void sub_4015fb()
{
}


// Function: sub_401608 at 0x401608
void sub_401608(unsigned int a0)
{
    loop_for_fixed();
    return;
}


// Function: loop_for_fixed at 0x401610
unsigned int loop_for_fixed(unsigned int i)
{
    unsigned int v0;  // eax
    unsigned int v1;  // edx
    unsigned int v2;  // edx
    unsigned int v3;  // eax
    unsigned int v4;  // edx

    if (i <= 0)
        return 0;
    v0 = 0;
    v1 = 0;
    do
    {
        v3 = v0;
        v4 = v1 + v3;
        v0 = v3 + 1;
        v1 = v4;
    } while (i != v0);
    return v2 + v3;
}


// Function: sub_40162c at 0x40162c
void sub_40162c()
{
}


// Function: sub_401635 at 0x401635
int sub_401635()
{
    loop_while();
    return;
}


// Function: loop_while at 0x401640
unsigned int loop_while(unsigned int a0)
{
    unsigned int v0;  // ebx
    unsigned int v1;  // ebx
    unsigned int v2;  // ebx
    unsigned int v3;  // eax
    unsigned int i;  // ecx

    if (!a0)
        return 1;
    v0 = 0;
    do
    {
        v2 = v0 + 1;
        a0 = (a0 * 1717986919 >> 34) - (a0 >> 31);
        v0 = v2;
    } while (i != v3);
    return v1 + 1;
}


// Function: sub_401672 at 0x401672
void sub_401672()
{
}


// Function: sub_401682 at 0x401682
int sub_401682()
{
    loop_dowhile();
    return;
}


// Function: loop_dowhile at 0x401690
unsigned int loop_dowhile(unsigned int a0)
{
    unsigned int v0;  // ebx
    unsigned int v1;  // ebx
    unsigned int v2;  // ebx
    unsigned int v3;  // eax
    unsigned int i;  // ecx

    v0 = 0;
    do
    {
        v2 = v0 + 1;
        a0 = (a0 * 1717986919 >> 34) - (a0 >> 31);
        v0 = v2;
    } while (i != v3);
    return v1 + 1;
}


// Function: sub_4016c2 at 0x4016c2
int sub_4016c2()
{
    loop_nested();
    return;
}


// Function: loop_nested at 0x4016d0
unsigned int loop_nested(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // edx
    unsigned int v2;  // ebx

    v0 = 0;
    if (a0 <= 0)
        return 0;
    v1 = 0;
    do
    {
        v2 = a1 + v0;
        if ((char)_ccall(15, 15, a1, 0, 0))
            v0 = v2;
        else
            v0 = v0;
    } while ((v1 += 1, a0 != v1));
    return v0;
}


// Function: sub_401702 at 0x401702
void sub_401702(unsigned int a0)
{
    loop_break();
    return;
}


// Function: loop_break at 0x401710
int loop_break()
{
    unsigned long v6;  // ldt
    unsigned long v7;  // gdt
    unsigned short v8;  // gs
    unsigned int v9;  // eax
    unsigned int v10;  // [bp-0x24]
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]
    unsigned int v4;  // [bp-0x10]
    unsigned int i;  // [bp+0x4]

    v4 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
    v9 = 0;
    v0 = 20;
    v1 = 30;
    v2 = 40;
    v3 = 50;
    if (i != 10)
    {
        do
        {
            v9 += 1;
            if (v9 == 5)
                break;
        } while (i != (&v10)[v9]);
    }
    if (v4 != *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
    {
        __stack_chk_fail_local();
        loop_continue();
    }
    return;
}


// Function: sub_401771 at 0x401771
void sub_401771()
{
}


// Function: loop_continue at 0x401790
unsigned int loop_continue(unsigned int a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // edx
    unsigned int v2;  // ecx

    if (a0 <= 0)
        return 0;
    v0 = 1;
    v1 = 0;
    do
    {
        v2 = v1 + v0;
        if (((char)v0 & 1))
            v1 = v2;
        else
            v1 = v1;
    } while ((v0 += 1, v0 != a0 + 1));
    return v1;
}


// Function: sub_4017c3 at 0x4017c3
void sub_4017c3()
{
}


// Function: sub_4017ce at 0x4017ce
void sub_4017ce(unsigned int a0)
{
    goto_forward();
    return;
}


// Function: goto_forward at 0x4017d0
unsigned int goto_forward(unsigned int a0)
{
    unsigned int v0;  // eax

    v0 = a0;
    if (v0 > 0)
        v0 *= v0;
    return v0 * 2;
}


// Function: sub_4017e2 at 0x4017e2
void sub_4017e2(unsigned int a0)
{
    goto_backward();
    return;
}


// Function: goto_backward at 0x4017f0
unsigned int goto_backward(unsigned int a0)
{
    unsigned int v0;  // edx
    unsigned int i;  // eax
    unsigned int v2;  // eax
    unsigned int v3;  // edx
    unsigned int v4;  // edx

    v0 = 1;
    if (a0 <= 0)
        return 1;
    i = 1;
    do
    {
        v2 = i;
        v4 = v2 * v0;
        v0 = v4;
        i = v2 + 1;
    } while (a0 + 1 != i);
    return v2 * v3;
}


// Function: sub_40181d at 0x40181d
void sub_40181d(unsigned int a0, unsigned int a1)
{
    ternary_op();
    return;
}


// Function: ternary_op at 0x401820
int ternary_op(unsigned int a0, unsigned int a1)
{
    if (a1 >= a0)
        return a1;
    return a0;
}


// Function: sub_401832 at 0x401832
int sub_401832()
{
    test_control_flow_l1();
    return;
}


// Function: test_control_flow_l1 at 0x401840
extern unsigned int g_403008;

int test_control_flow_l1()
{
    unsigned long v6;  // ldt
    unsigned long v7;  // gdt
    unsigned short v8;  // gs
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    unsigned int v11;  // [bp-0x24]
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]
    unsigned int v4;  // [bp-0x10]

    v4 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
    sub_4010e0(&g_403008);
    sub_4010f0(1, "CF-L1-01 (sequential_ops): %d\n", 21);
    sub_4010f0(1, "CF-L1-02 (single_if): %d\n", 20);
    sub_4010f0(1, "CF-L1-02 (single_if): %d\n", 4294967291);
    sub_4010f0(1, "CF-L1-03 (if_else): %d\n", 1);
    sub_4010f0(1, "CF-L1-03 (if_else): %d\n", 0);
    sub_4010f0(1, "CF-L1-04 (nested_if_2): %d\n", 15);
    sub_4010f0(1, "CF-L1-04 (nested_if_2): %d\n", 10);
    sub_4010f0(1, "CF-L1-04 (nested_if_2): %d\n", 0);
    sub_4010f0(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
    sub_4010f0(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
    sub_4010f0(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
    sub_4010f0(1, "CF-L1-08 (switch_small): %d\n", 50);
    sub_4010f0(1, "CF-L1-09 (switch_large): %d\n", 70);
    sub_4010f0(1, "CF-L1-10 (switch_default): %d\n", 0);
    sub_4010f0(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
    sub_4010f0(1, "CF-L1-12 (loop_for_fixed): %d\n", 45);
    sub_4010f0(1, "CF-L1-13 (loop_while): %d\n", 5);
    sub_4010f0(1, "CF-L1-14 (loop_dowhile): %d\n", 4);
    sub_4010f0(1, "CF-L1-15 (loop_nested): %d\n", 12);
    v0 = 20;
    v9 = 0;
    v1 = 30;
    v2 = 40;
    v3 = 50;
    do
    {
        v9 += 1;
        if (v9 == 5)
        {
            v9 = 4294967295;
            break;
        }
    } while ((&v11)[v9] != 30);
    sub_4010f0(1, "CF-L1-16 (loop_break): %d\n", v9);
    v0 = 20;
    v10 = 0;
    v1 = 30;
    v2 = 40;
    v3 = 50;
    do
    {
        v10 += 1;
        if (v10 == 5)
        {
            v10 = 4294967295;
            break;
        }
    } while ((&v11)[v10] != 99);
    sub_4010f0(1, "CF-L1-16 (loop_break): %d\n", v10);
    sub_4010f0(1, "CF-L1-17 (loop_continue): %d\n", 25);
    sub_4010f0(1, "CF-L1-18 (goto_forward): %d\n", 50);
    sub_4010f0(1, "CF-L1-18 (goto_forward): %d\n", 4294967290);
    sub_4010f0(1, "CF-L1-19 (goto_backward): %d\n", 120);
    sub_4010f0(1, "CF-L1-20 (ternary_op): %d\n", 10);
    sub_4010f0(1, "CF-L1-20 (ternary_op): %d\n", 8);
    if (v4 != *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
    {
        __stack_chk_fail_local();
        return loop_multi_exit();
    }
    return v4 - *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
}


// Function: sub_401ada at 0x401ada
void sub_401ada()
{
}


// Function: loop_multi_exit at 0x401af0
unsigned int loop_multi_exit(unsigned int i)
{
    unsigned int v13;  // ecx
    unsigned long v14;  // ldt
    unsigned long v15;  // gdt
    unsigned short v16;  // gs
    unsigned int *v17;  // eax
    unsigned int v18;  // eax
    unsigned int v19;  // eax
    unsigned int v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x3c]
    unsigned int v2;  // [bp-0x38]
    unsigned int v3;  // [bp-0x34]
    unsigned int v4;  // [bp-0x30]
    unsigned int v5;  // [bp-0x2c]
    unsigned int v6;  // [bp-0x28]
    unsigned int v7;  // [bp-0x24]
    unsigned int v8;  // [bp-0x20]
    unsigned int v9;  // [bp-0x1c]
    unsigned int v10;  // [bp-0x18]
    unsigned int v11;  // [bp-0x14]
    unsigned int v12;  // [bp-0x10]

    v13 = 0;
    v12 = *((int *)_ccall(v14, v15, (unsigned int)v16, 20));
    v17 = &v0;
    v1 = 2;
    v2 = 3;
    v3 = 4;
    v4 = 5;
    v5 = 6;
    v6 = 7;
    v7 = 8;
    v8 = 9;
    v9 = 10;
    v10 = 11;
    v11 = 12;
    if (i != 1)
    {
        do
        {
            if (i == v17[1])
            {
                v19 = 1;
                goto LABEL_401b91;
            }
            else if (i == v17[2])
            {
                v19 = 2;
                goto LABEL_401b91;
            }
            else if (i == v17[3])
            {
                v19 = 3;
                goto LABEL_401b91;
            }
            v13 += 1;
            v17 += 4;
            if (v13 == 3)
            {
                v18 = 4294967295;
                goto LABEL_401ba5;
            }
        } while (*(v17) != i);
        goto LABEL_401ba5;
    }
    v19 = 0;
LABEL_401b91:
    v18 = v19 + v13 * 10;
LABEL_401ba5:
    if (v12 != *((int *)_ccall(v14, v15, (unsigned int)v16, 20)))
    {
        __stack_chk_fail_local();
        return infinite_loop();
    }
    return v18;
}


// Function: sub_401b99 at 0x401b99
void sub_401b99()
{
}


// Function: sub_401bb7 at 0x401bb7
void sub_401bb7()
{
}


// Function: sub_401bc7 at 0x401bc7
void sub_401bc7()
{
}


// Function: sub_401bd7 at 0x401bd7
void sub_401bd7()
{
}


// Function: infinite_loop at 0x401bf0
unsigned int infinite_loop(unsigned int *ptr)
{
    unsigned int v0;  // eax

    v0 = 0;
    while (*(ptr) != 1)
    {
        v0 += 1;
        if (v0 == 1001)
        {
            *(ptr) = 1;
            return 1001;
        }
    }
    return v0;
}


// Function: sub_401bfc at 0x401bfc
void sub_401bfc()
{
}


// Function: sub_401c19 at 0x401c19
void sub_401c19(unsigned int a0)
{
    multi_return();
    return;
}


// Function: multi_return at 0x401c20
unsigned int multi_return(unsigned int a0)
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


// Function: sub_401c3e at 0x401c3e
void sub_401c3e()
{
}


// Function: sub_401c4c at 0x401c4c
void sub_401c4c(unsigned int a0)
{
    conditional_return();
    return;
}


// Function: conditional_return at 0x401c50
unsigned int conditional_return(unsigned int a0)
{
    if (a0 > 0)
    {
        return a0 * 2;
    }
    else if (a0)
    {
        return -(a0);
    }
    else
    {
        return 0;
    }
}


// Function: sub_401c5f at 0x401c5f
void sub_401c5f()
{
}


// Function: sub_401c6f at 0x401c6f
int sub_401c6f()
{
    duffs_device();
    return;
}


// Function: duffs_device at 0x401c70
extern char _GLOBAL_OFFSET_TABLE_;

unsigned int duffs_device(unsigned int a0, unsigned int a1, unsigned int a2)
{
    if (a2 <= 0)
        return 4294967295;
    goto &(&_GLOBAL_OFFSET_TABLE_)[*((int *)&(&_GLOBAL_OFFSET_TABLE_)[10724 + 4 * (a2 & 7)])];
}


// Function: .L188 at 0x401d2d
void .L188()
{
}


// Function: sub_401d33 at 0x401d33
int sub_401d33()
{
    loop_complex_cond();
    return;
}


// Function: loop_complex_cond at 0x401d40
unsigned int loop_complex_cond(unsigned int a0)
{
    unsigned int v0;  // ebx
    unsigned int v1;  // ecx
    unsigned int v2;  // edx
    unsigned int v3;  // edx

    v0 = a0;
    if (v0 <= 0)
        return v0;
    v1 = 0;
    v2 = v0;
    do
    {
        v3 = v2 - 1;
        v1 += 2;
    } while (v1 < v3 && (v2 = v3, v0 - v2 <= 9));
    return v0 - v3 + v1 + v3;
}


// Function: sub_401d71 at 0x401d71
void sub_401d71()
{
}


// Function: sub_401d7c at 0x401d7c
int sub_401d7c()
{
    loop_modify_var();
    return;
}


// Function: loop_modify_var at 0x401d80
unsigned int loop_modify_var(unsigned int a0)
{
    unsigned int v0;  // ecx
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    unsigned int v3;  // edx
    unsigned int v4;  // eax

    v0 = 0;
    v1 = 0;
    if (a0 <= 0)
        return 0;
    while (true)
    {
        v2 = v1;
        v3 = v2 + 1;
        if (a0 <= v3)
            break;
        v4 = v2 + 3;
        v0 += v3;
        if (v3 <= 5)
            v1 = v3;
        else
            v1 = v4;
    }
    return v0;
}


// Function: sub_401d93 at 0x401d93
void sub_401d93()
{
}


// Function: sub_401dae at 0x401dae
void sub_401dae(unsigned int a0)
{
    loop_external_state();
    return;
}


// Function: loop_external_state at 0x401db0
unsigned int loop_external_state(unsigned int *a0)
{
    unsigned int v0;  // eax

    v0 = 0;
    do
    {
    } while (!*(a0) && (v0 += 1, v0 != 101));
    return v0;
}


// Function: sub_401dbc at 0x401dbc
void sub_401dbc()
{
}


// Function: sub_401dcf at 0x401dcf
void sub_401dcf(unsigned int a0, unsigned int a1)
{
    tail_recursion();
    return;
}


// Function: tail_recursion at 0x401dd0
unsigned int tail_recursion(unsigned int i, unsigned int a1)
{
    unsigned int v0;  // edx
    unsigned int v1;  // eax
    unsigned int v2;  // edx

    if (i <= 1)
        return a1;
    do
    {
        v1 = i;
        v2 = v1 * a1;
        i = v1 - 1;
        a1 = v2;
    } while (i != 1);
    return v1 * v0;
}


// Function: sub_401df6 at 0x401df6
void sub_401df6(unsigned int a0, unsigned int a1)
{
    indirect_recursion_a();
    return;
}


// Function: indirect_recursion_a at 0x401e00
unsigned int indirect_recursion_a(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // edx
    unsigned int ptr;  // ecx

    if (a1 <= 0)
        return a0;
    v0 = a1 - 2;
    while (true)
    {
        if (!((char)a0 & 1))
        {
            if (v0 == 4294967295)
                return a0 + (a0 >> 31) >> 1;
            a0 = (a0 + (a0 >> 31) >> 1) + 1;
            ptr = v0;
        }
        else if (v0 != 4294967295)
        {
            a0 = a0 * 3 + 2;
            ptr = v0;
        }
        else
        {
            return a0 * 3 + 1;
        }
        v0 -= 2;
        if (!ptr)
            return a0;
    }
}


// Function: sub_401e32 at 0x401e32
void sub_401e32()
{
}


// Function: sub_401e3e at 0x401e3e
void sub_401e3e()
{
}


// Function: sub_401e57 at 0x401e57
void sub_401e57(unsigned int a0, unsigned int a1)
{
    call_func_ptr();
    return;
}


// Function: call_func_ptr at 0x401e60
int call_func_ptr(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // [bp+0x4]

    v0 = a1;
    goto a0;
}


// Function: sub_401e72 at 0x401e72
void sub_401e72()
{
    call_func_ptr_array();
    return;
}


// Function: call_func_ptr_array at 0x401e80
unsigned int call_func_ptr_array(unsigned int a0, unsigned int a1)
{
    unsigned int v6;  // eax
    unsigned int v7;  // ebx
    unsigned long v8;  // ldt
    unsigned long v9;  // gdt
    unsigned short v10;  // gs
    unsigned int v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x18]
    unsigned int v2;  // [bp-0x14]
    unsigned int v3;  // [bp-0x10]
    unsigned int v4;  // [bp-0x4]
    unsigned int v5;  // [bp+0x4]

    v6 = __x86.get_pc_thunk.ax() + 16703;
    v4 = v7;
    v3 = *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
    v0 = v6 - 19688;
    v1 = v6 - 19672;
    v2 = v6 - 19736;
    if (a0 <= 2)
    {
        if (v3 == *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
        {
            v5 = a1;
            goto (&v0)[a0];
        }
    }
    else
    {
        if (v3 == *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
            return 4294967295;
    }
    __stack_chk_fail_local();
    return call_virtual_func();
}


// Function: call_virtual_func at 0x401f10
unsigned int call_virtual_func(unsigned int a0, unsigned int a1)
{
    return a1 * 2;
}


// Function: sub_401f1b at 0x401f1b
int sub_401f1b()
{
    process_with_callback();
    return;
}


// Function: process_with_callback at 0x401f20
unsigned int process_with_callback(unsigned int a0, unsigned int i, unsigned int *a2)
{
    unsigned int v0;  // esi
    unsigned int v1;  // ebx
    unsigned int v2;  // ebx
    unsigned int v3;  // esi
    unsigned int v4;  // eax
    unsigned int v5;  // ebx

    if (i <= 0)
        return 0;
    v0 = 0;
    v1 = 0;
    do
    {
        v2 = v1;
        v3 = v0 + 1;
        v5 = v2 + a2(*((int *)(a0 + v0 * 4)));
        v0 = v3;
        v1 = v5;
    } while (i != v0);
    return v2 + v4;
}


// Function: sub_401f6c at 0x401f6c
int sub_401f6c()
{
    test_control_flow_l2();
    return;
}


// Function: test_control_flow_l2 at 0x401f70
extern unsigned int g_403110;

int test_control_flow_l2()
{
    unsigned long v18;  // ldt
    unsigned long v19;  // gdt
    unsigned int v27;  // eax
    unsigned int v28;  // eax
    unsigned int *cur;  // eax
    unsigned int v30;  // edx
    unsigned int v31;  // ecx
    unsigned short v20;  // gs
    unsigned int v22;  // eax
    unsigned int i;  // eax
    unsigned int v25;  // ecx
    unsigned int v26;  // edx
    unsigned int v0;  // [bp-0x7c]
    unsigned int result;  // [bp-0x78]
    unsigned int flag2;  // [bp-0x74]
    unsigned int v3;  // [bp-0x70]
    unsigned int v4;  // [bp-0x6c]
    unsigned int v5;  // [bp-0x68]
    unsigned int v6;  // [bp-0x64]
    unsigned int flag1;  // [bp-0x60]
    unsigned int v8;  // [bp-0x5c]
    unsigned int v9;  // [bp-0x58]
    unsigned int v10;  // [bp-0x54]
    unsigned int v11;  // [bp-0x50]
    unsigned int v12;  // [bp-0x4c]
    unsigned int v13;  // [bp-0x48]
    unsigned int v14;  // [bp-0x44]
    unsigned long v15;  // [bp-0x40]
    unsigned int v16;  // [bp-0x20]

    v16 = *((int *)_ccall(v18, v19, (unsigned int)v20, 20));
    sub_4010e0(&g_403110);
    sub_4010f0(1, "CF-L2-01 (loop_multi_exit): %d\n", loop_multi_exit(7));
    v0 = 0;
    v22 = 0;
    do
    {
        if (v0 == 1)
            goto LABEL_401fe6;
    } while ((v22 += 1, v22 != 1001));
    v0 = 1;
LABEL_401fe6:
    sub_4010f0(1, "CF-L2-02 (infinite_loop): %d\n", v22);
    sub_4010f0(1, "CF-L2-03 (multi_return): %d\n", 4294967295);
    sub_4010f0(1, "CF-L2-03 (multi_return): %d\n", 4294967294);
    sub_4010f0(1, "CF-L2-03 (multi_return): %d\n", 4);
    sub_4010f0(1, "CF-L2-04 (conditional_return): %d\n", 10);
    sub_4010f0(1, "CF-L2-04 (conditional_return): %d\n", 5);
    flag1 = 1;
    i = 0;
    v8 = 2;
    v9 = 3;
    v10 = 4;
    v11 = 5;
    v12 = 6;
    v13 = 7;
    v14 = 8;
    do
    {
        *((unsigned int *)((char *)&v15 + i)) = 0;
        i += 4;
    } while (i < 32);
    sub_4010f0(1, "CF-L2-05 (duffs_device): %d\n", duffs_device(&v15, &flag1, 8));
    sub_4010f0(1, "CF-L2-06 (loop_complex_cond): %d\n", 18);
    v25 = 0;
    v26 = 0;
    while (true)
    {
        v27 = v26 + 1;
        if (v27 > 9)
            break;
        v26 += 3;
        v25 += v27;
        if (v27 <= 5)
            v26 = v27;
    }
    sub_4010f0(1, "CF-L2-07 (loop_modify_var): %d\n", v25);
    result = 0;
    v28 = 0;
    do
    {
    } while (!result && (v28 += 1, v28 != 101));
    sub_4010f0(1, "CF-L2-08 (loop_external_state): %d\n", v28);
    sub_4010f0(1, "CF-L2-09 (recursion_factorial): %d\n", 120);
    sub_4010f0(1, "CF-L2-10 (tail_recursion): %d\n", 120);
    sub_4010f0(1, "CF-L2-11 (indirect_recursion): %d\n", 3);
    sub_4010f0(1, "CF-L2-12 (call_func_ptr): %d\n", 10);
    sub_4010f0(1, "CF-L2-13 (call_func_ptr_array): %d\n", 10);
    sub_4010f0(1, "CF-L2-13 (call_func_ptr_array): %d\n", 120);
    flag2 = 1;
    cur = &flag2;
    v30 = 0;
    v3 = 2;
    v31 = 1;
    v4 = 3;
    v5 = 4;
    v6 = 5;
    while (true)
    {
        cur += 1;
        v30 += v31 * 2;
        if (cur == &flag1)
            break;
        v31 = *(cur);
    }
    sub_4010f0(1, "CF-L2-15 (process_with_callback): %d\n", v30);
    if (v16 != *((int *)_ccall(v18, v19, (unsigned int)v20, 20)))
    {
        __stack_chk_fail_local();
        return non_local_jump();
    }
    return v16 - *((int *)_ccall(v18, v19, (unsigned int)v20, 20));
}


// Function: sub_401fcb at 0x401fcb
void sub_401fcb()
{
}


// Function: sub_4020cd at 0x4020cd
void sub_4020cd()
{
}


// Function: sub_402103 at 0x402103
void sub_402103()
{
}


// Function: sub_4021c7 at 0x4021c7
void sub_4021c7()
{
}


// Function: non_local_jump at 0x402220
extern unsigned int _GLOBAL_OFFSET_TABLE_;
extern unsigned int jump_buffer;

unsigned int non_local_jump(unsigned int a0)
{
    unsigned int v2;  // edx
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x10]

    v1 = &_GLOBAL_OFFSET_TABLE_;
    if (sub_4010c0(&jump_buffer))
        return 4294967295;
    if (a0 >= 0)
    {
        if (a0 <= 100)
            return a0 * 2;
        v0 = 0;
        sub_401100(v1 + 120, 2, 0, 0);
    }
    sub_401100(v0 + 120, 1, v2, v2);
    return cpp_exception(v0 + 120, 1, v2, v2);
}


// Function: sub_402268 at 0x402268
void sub_402268()
{
}


// Function: cpp_exception at 0x4022a0
unsigned int cpp_exception(unsigned int a0)
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


// Function: sub_4022b4 at 0x4022b4
void sub_4022b4()
{
}


// Function: sub_4022c4 at 0x4022c4
void sub_4022c4()
{
    large_jump_table();
    return;
}


// Function: large_jump_table at 0x4022d0
unsigned int large_jump_table(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned int v15;  // eax
    unsigned int v16;  // esi
    unsigned int v17;  // ebx
    unsigned long v18;  // ldt
    unsigned long v19;  // gdt
    unsigned short v20;  // gs
    unsigned int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    unsigned int v3;  // [bp-0x2c]
    unsigned int v4;  // [bp-0x28]
    unsigned int v5;  // [bp-0x24]
    unsigned int v6;  // [bp-0x20]
    unsigned int v7;  // [bp-0x1c]
    unsigned int v8;  // [bp-0x18]
    unsigned int v9;  // [bp-0x14]
    unsigned int v10;  // [bp-0x10]
    unsigned int v11;  // [bp-0x8]
    unsigned int v12;  // [bp-0x4]
    unsigned int v13;  // [bp+0x4]
    unsigned int v14;  // [bp+0x8]

    v15 = __x86.get_pc_thunk.ax() + 15599;
    v12 = v16;
    v11 = v17;
    v10 = *((int *)_ccall(v18, v19, (unsigned int)v20, 20));
    v0 = v15 - 19656;
    v1 = v15 - 19640;
    v2 = v15 - 19624;
    v3 = v15 - 19608;
    v4 = v15 - 19576;
    v5 = v15 - 19544;
    v6 = v15 - 19528;
    v7 = v15 - 19512;
    v8 = v15 - 19496;
    v9 = v15 - 19480;
    if (a0 <= 9)
    {
        if (v10 == *((int *)_ccall(v18, v19, (unsigned int)v20, 20)))
        {
            v14 = a2;
            v13 = a1;
            goto (&v0)[a0];
        }
    }
    else
    {
        if (v10 == *((int *)_ccall(v18, v19, (unsigned int)v20, 20)))
            return 4294967295;
    }
    __stack_chk_fail_local();
    return conditional_func_ptr();
}


// Function: conditional_func_ptr at 0x4023b0
int conditional_func_ptr(unsigned int a0, unsigned int a1)
{
    unsigned int v1;  // edx
    unsigned int v2;  // edx
    unsigned int v3;  // ebx
    unsigned int v4;  // eax
    unsigned int v0;  // [bp-0x4]

    __x86.get_pc_thunk.dx();
    v2 = v1 + 15375;
    v0 = v3;
    v4 = v2 - 19688;
    if (a0)
    {
        v4 = v2 - 19672;
        if (a0 != 1)
            v4 = v2 - 19736;
    }
    a0 = a1;
    goto v4;
}


// Function: sub_4023eb at 0x4023eb
void sub_4023eb(unsigned int a0, unsigned int a1)
{
    state_machine();
    return;
}


// Function: state_machine at 0x4023f0
unsigned int state_machine(unsigned int a0, unsigned int a1)
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


// Function: sub_40241e at 0x40241e
void sub_40241e()
{
}


// Function: sub_402431 at 0x402431
void sub_402431()
{
}


// Function: sub_40243e at 0x40243e
void sub_40243e()
{
}


// Function: sub_402446 at 0x402446
void sub_402446()
{
}


// Function: sub_40245b at 0x40245b
void sub_40245b()
{
    fsm_func_table();
    return;
}


// Function: fsm_func_table at 0x402460
unsigned int fsm_func_table(unsigned int a0, unsigned int a1)
{
    unsigned int v6;  // eax
    unsigned int v7;  // ebx
    unsigned long v8;  // ldt
    unsigned long v9;  // gdt
    unsigned short v10;  // gs
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]
    unsigned int v4;  // [bp-0x10]
    unsigned int v5;  // [bp-0x4]

    v6 = __x86.get_pc_thunk.ax() + 15199;
    v5 = v7;
    v4 = *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
    v0 = v6 - 19464;
    v1 = v6 - 19448;
    v2 = v6 - 19400;
    v3 = v6 - 19384;
    if (a1 <= 3)
    {
        if (v4 == *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
            goto (&v0)[a1];
    }
    else
    {
        if (v4 == *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
            return 3;
    }
    __stack_chk_fail_local();
    return computed_goto();
}


// Function: computed_goto at 0x4024f0
unsigned int computed_goto(unsigned int a0, unsigned int a1)
{
    unsigned int v5;  // eax
    unsigned long v6;  // ldt
    unsigned long v7;  // gdt
    unsigned short v8;  // gs
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]
    unsigned int v4;  // [bp-0x10]

    v5 = __x86.get_pc_thunk.ax() + 15055;
    v4 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
    v0 = v5 - 14912;
    v1 = v5 - 14928;
    v2 = v5 - 14944;
    v3 = v5 - 14976;
    if (a1 <= 3)
    {
        goto (&v0)[a1];
    }
    else if (v4 == *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
    {
        return 4294967295;
    }
    else
    {
        __stack_chk_fail_local();
        return obfuscated_cf();
    }
}


// Function: obfuscated_cf at 0x4025a0
unsigned int obfuscated_cf(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_4025ab at 0x4025ab
void sub_4025ab(unsigned int a0)
{
    opaque_predicate();
    return;
}


// Function: opaque_predicate at 0x4025b0
unsigned int opaque_predicate(unsigned int a0)
{
    return a0 * 2;
}


// Function: sub_4025bb at 0x4025bb
void sub_4025bb(unsigned int a0)
{
    overlapped_code();
    return;
}


// Function: overlapped_code at 0x4025c0
unsigned int overlapped_code(unsigned int a0)
{
    if (!((char)a0 & 1))
        return (a0 >> 31) + a0 >> 1;
    return a0 * 3 + 1;
}


// Function: sub_4025d2 at 0x4025d2
void sub_4025d2()
{
}


// Function: sub_4025e2 at 0x4025e2
int sub_4025e2()
{
    test_control_flow_l3();
    return;
}


// Function: test_control_flow_l3 at 0x4025f0
extern unsigned int g_403294;

int test_control_flow_l3()
{
    unsigned long v6;  // ldt
    unsigned long v7;  // gdt
    unsigned short v8;  // gs
    unsigned int result;  // [bp-0x20]
    unsigned int flag1;  // [bp-0x1c]
    unsigned int v2;  // [bp-0x18]
    unsigned int v3;  // [bp-0x14]
    unsigned int v4;  // [bp-0x10]

    v4 = *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
    sub_4010e0(&g_403294);
    sub_4010f0(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(5));
    sub_4010f0(1, "CF-L3-01 (non_local_jump): %d\n", non_local_jump(4294967291));
    sub_4010f0(1, "CF-L3-02 (cpp_exception): %d\n", 10);
    sub_4010f0(1, "CF-L3-02 (cpp_exception): %d\n", 4294967295);
    sub_4010f0(1, "CF-L3-03 (large_jump_table): %d\n", op_add(10, 5));
    sub_4010f0(1, "CF-L3-04 (conditional_func_ptr): %d\n", 10);
    sub_4010f0(1, "CF-L3-05 (state_machine): %d\n", 1);
    sub_4010f0(1, "CF-L3-06 (fsm_func_table): %d\n", 2);
    result = 0;
    flag1 = 1;
    v2 = 2;
    v3 = 3;
    sub_4010f0(1, "CF-L3-07 (computed_goto): %d\n", computed_goto(&result, 2));
    sub_4010f0(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
    sub_4010f0(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
    sub_4010f0(1, "CF-L3-10 (overlapped_code): %d\n", 16);
    if (v4 == *((int *)_ccall(v6, v7, (unsigned int)v8, 20)))
        return v4 - *((int *)_ccall(v6, v7, (unsigned int)v8, 20));
    __stack_chk_fail_local();
}


// Function: __x86.get_pc_thunk.ax at 0x40275c
unsigned int __x86.get_pc_thunk.ax()
{
    char v0;  // [bp+0x0]

    return *((int *)&v0);
}


// Function: __x86.get_pc_thunk.cx at 0x402760
void __x86.get_pc_thunk.cx()
{
    return;
}


// Function: sub_402764 at 0x402764
int sub_402764()
{
    __stack_chk_fail_local();
    return;
}


// Function: __stack_chk_fail_local at 0x402770
int __stack_chk_fail_local()
{
    unsigned int v2;  // ebx
    unsigned int v0;  // [bp-0x4]

    v0 = v2;
    sub_4010d0();
    __do_global_ctors_aux();
    return;
}


// Function: __do_global_ctors_aux at 0x402790
typedef struct struct_0 {
    char padding_0[14147];
    struct struct_1 *field_3743;
    struct struct_1 *field_3747;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

unsigned int __do_global_ctors_aux()
{
    struct_0 *v2;  // edx
    struct_0 *ptr;  // edx
    unsigned int *v4;  // eax
    unsigned int v5;  // ebx
    struct_0 *v6;  // ebx
    struct_0 *p;  // ebx
    unsigned int v0;  // [bp-0x8]

    __x86.get_pc_thunk.dx();
    ptr = &v2[1].padding_0[227];
    v4 = *((int *)&ptr->padding_0[232]);
    if (*((int *)&ptr->padding_0[232]) == 0xffffffff)
        return 4294967295;
    v0 = v5;
    v6 = &ptr->padding_0[232];
    do
    {
        p = v6;
        v4();
        v4 = *((int *)&p->padding_0[4]);
        v6 = &p->padding_0[4];
    } while (*((int *)&p->padding_0[4]) != 0xffffffff);
    return 4294967295;
}


// Function: sub_4027d2 at 0x4027d2
void sub_4027d2()
{
}


// Function: _fini at 0x4027dc
unsigned int * _fini()
{
    return __do_global_dtors_aux();
}

