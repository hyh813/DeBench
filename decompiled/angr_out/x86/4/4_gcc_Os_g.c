// Angr Decompilation of 4_gcc_Os_g
// Platform: X86

// Function: _init at 0x401000
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 *g_403ff4;

int _init()
{
    if (g_403ff4)
        g_403ff4();
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


// Function: sub_40103c at 0x40103c
void sub_40103c()
{
    sub_401040();
    return;
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
int sub_40108e()
{
    sub_401090();
    return;
}


// Function: sub_401090 at 0x401090
typedef struct struct_0 {
    char padding_0[36];
    unsigned int field_24;
} struct_0;

int sub_401090()
{
    struct_0 *v1;  // ebx

    goto v1->field_24;
}


// Function: sub_40109a at 0x40109a
int sub_40109a()
{
    sub_4010a0();
    return;
}


// Function: sub_4010a0 at 0x4010a0
typedef struct struct_0 {
    char padding_0[12];
    unsigned int field_c;
} struct_0;

int sub_4010a0()
{
    struct_0 *v1;  // ebx

    goto v1->field_c;
}


// Function: sub_4010aa at 0x4010aa
int sub_4010aa()
{
    sub_4010b0();
    return;
}


// Function: sub_4010b0 at 0x4010b0
typedef struct struct_0 {
    char padding_0[16];
    unsigned int field_10;
} struct_0;

int sub_4010b0()
{
    struct_0 *v1;  // ebx

    goto v1->field_10;
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
    sub_4010c0();
    return;
}


// Function: sub_4010c0 at 0x4010c0
typedef struct struct_0 {
    char padding_0[20];
    unsigned int field_14;
} struct_0;

int sub_4010c0()
{
    struct_0 *v1;  // ebx

    goto v1->field_14;
}


// Function: sub_4010ca at 0x4010ca
int sub_4010ca()
{
    sub_4010d0();
    return;
}


// Function: sub_4010d0 at 0x4010d0
typedef struct struct_0 {
    char padding_0[24];
    unsigned int field_18;
} struct_0;

int sub_4010d0()
{
    struct_0 *v1;  // ebx

    goto v1->field_18;
}


// Function: sub_4010da at 0x4010da
int sub_4010da()
{
    sub_4010e0();
    return;
}


// Function: sub_4010e0 at 0x4010e0
typedef struct struct_0 {
    char padding_0[28];
    unsigned int field_1c;
} struct_0;

int sub_4010e0()
{
    struct_0 *v1;  // ebx

    goto v1->field_1c;
}


// Function: sub_4010ea at 0x4010ea
void sub_4010ea()
{
    main();
    return;
}


// Function: main at 0x4010f0
unsigned int main()
{
    char v0;  // [bp+0x0]

    test_calling_conventions(&v0);
    test_parameter_passing(&v0);
    test_return_values();
    return 0;
}


// Function: sub_40110d at 0x40110d
void sub_40110d()
{
    _start(); /* do not return */
}


// Function: _start at 0x401110
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
    sub_4010a0(main, v2, &v3, 0, 0);
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198715()
}


// Function: sub_40113c at 0x40113c
void sub_40113c()
{
    return;
}


// Function: __x86.get_pc_thunk.bx at 0x401140
void __x86.get_pc_thunk.bx()
{
    return;
}


// Function: sub_401144 at 0x401144
void sub_401144()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401150
typedef struct struct_0 {
    char padding_0[11927];
    struct struct_1 *field_2e97;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

unsigned int * deregister_tm_clones()
{
    unsigned int *ptr;  // edx

    __x86.get_pc_thunk.dx();
    return (char *)&ptr[2995] + 3;
}


// Function: sub_401183 at 0x401183
void sub_401183()
{
}


// Function: sub_401189 at 0x401189
void sub_401189()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x401190
typedef struct struct_0 {
    char padding_0[11879];
    struct struct_1 *field_2e67;
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
    v3 = &v2->padding_0[11831];
    v0 = v4;
    if (!(&v3->padding_0[88] - &v3->padding_0[88] >> 31) + (&v3->padding_0[88] - &v3->padding_0[88] >> 2) >> 1)
    {
        return (&v3->padding_0[88] - &v3->padding_0[88] >> 31) + (&v3->padding_0[88] - &v3->padding_0[88] >> 2) >> 1;
    }
    else if (*((int *)&v3->padding_0[48]))
    {
        return (*((int *)&v3->padding_0[48]))(&v3->padding_0[88], (&v3->padding_0[88] - &v3->padding_0[88] >> 31) + (&v3->padding_0[88] - &v3->padding_0[88] >> 2) >> 1);
    }
    else
    {
        return (&v3->padding_0[88] - &v3->padding_0[88] >> 31) + (&v3->padding_0[88] - &v3->padding_0[88] >> 2) >> 1;
    }
}


// Function: sub_4011d7 at 0x4011d7
void sub_4011d7()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x4011e0
typedef struct struct_0 {
    char padding_0[11779];
    unsigned int field_2e03;
    char padding_2e07[16];
    unsigned int field_2e17;
    char padding_2e1b[28];
    char field_2e37;
    char padding_2e38[3];
    unsigned int field_2e3b;
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
    ptr = &v6->padding_0[11743];
    v1 = v8;
    v0 = v9;
    if (ptr->padding_0[88])
        return v5;
    if (*((int *)&ptr->padding_0[36]))
        sub_401090(*((int *)&ptr->padding_0[56]));
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


// Function: sub_40126a at 0x40126a
void sub_40126a()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x401270
unsigned int frame_dummy()
{
    return register_tm_clones();
}


// Function: __x86.get_pc_thunk.dx at 0x401279
void __x86.get_pc_thunk.dx()
{
    return;
}


// Function: __x86.get_pc_thunk.di at 0x40127d
int __x86.get_pc_thunk.di(int a0)
{
    unsigned int v0;  // eax

    return v0;
}


// Function: func_a at 0x401281
int func_a(unsigned int a0)
{
    return a0 + 10;
}


// Function: func_b at 0x401290
unsigned int func_b(unsigned int a0)
{
    return a0 * 2;
}


// Function: callback_func at 0x40129e
unsigned int callback_func(unsigned int a0)
{
    return a0 * 2;
}


// Function: cdecl_func at 0x4012ac
int cdecl_func(unsigned int a0, unsigned int a1)
{
    return a1 + a0;
}


// Function: call_cdecl at 0x4012bb
unsigned int call_cdecl()
{
    return 15;
}


// Function: stdcall_func at 0x4012c5
int stdcall_func(unsigned int a0, unsigned int a1)
{
    return a0 * a1;
}


// Function: call_stdcall at 0x4012d7
unsigned int call_stdcall()
{
    return 50;
}


// Function: fastcall_func at 0x4012e1
int fastcall_func(unsigned int a0)
{
    unsigned int v0;  // ecx
    unsigned int v1;  // edx

    return v0 + v1 + a0;
}


// Function: call_fastcall at 0x4012f2
unsigned int call_fastcall()
{
    return 6;
}


// Function: call_thiscall at 0x4012fc
unsigned int call_thiscall()
{
    return 15;
}


// Function: arm_aapcs_func at 0x401306
int arm_aapcs_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a1 + a0 + a2 + a3 + a4;
}


// Function: call_arm_aapcs at 0x40131e
unsigned int call_arm_aapcs()
{
    return 15;
}


// Function: mips_func at 0x401328
int mips_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a1 + a0 + a2 + a3;
}


// Function: call_mips at 0x40133d
unsigned int call_mips()
{
    return 100;
}


// Function: amd64_sysv_func at 0x401347
int amd64_sysv_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    return a1 + a0 + a2 + a3 + a4 + a5;
}


// Function: call_amd64_sysv at 0x401362
unsigned int call_amd64_sysv()
{
    return 21;
}


// Function: ms_x64_func at 0x40136c
int ms_x64_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    return a1 + a0 + a2 + a3 + a4;
}


// Function: call_ms_x64 at 0x401384
unsigned int call_ms_x64()
{
    return 15;
}


// Function: vectorcall_func at 0x40138e
int vectorcall_func(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    return a1 + a0 + a2 + a3;
}


// Function: call_vectorcall at 0x4013a3
unsigned int call_vectorcall()
{
    return 10;
}


// Function: mixed_conventions_test at 0x4013ad
unsigned int mixed_conventions_test()
{
    return 33;
}


// Function: varargs_func at 0x4013b7
unsigned int varargs_func(unsigned int a0)
{
    unsigned int idx;  // eax
    unsigned int v2;  // edx
    char v0;  // [bp+0x8]

    idx = 0;
    for (v2 = 0; idx < a0; idx += 1)
    {
        v2 += *((int *)&(&v0)[4 * idx]);
    }
    return v2;
}


// Function: func_no_args at 0x4013d4
unsigned int func_no_args()
{
    return 42;
}


// Function: func_many_args at 0x4013de
int func_many_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    return a1 + a0 + a2 + a3 + a4 + a5 + a6 + a7;
}


// Function: func_mixed_args at 0x4013ff
int func_mixed_args(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    unsigned int v7;  // eax
    unsigned int v8;  // edi
    unsigned int v9;  // esi
    unsigned int v10;  // ebx
    unsigned int v11;  // fpround
    unsigned int v0;  // [bp-0x3c]
    double v1;  // [bp-0x2c], Other Possible Types: unsigned long, unsigned int
    unsigned int v2;  // [bp-0x28]
    unsigned short v3;  // [bp-0x1e]
    unsigned int v4;  // [bp-0x10]
    unsigned int v5;  // [bp-0xc]
    unsigned int v6;  // [bp-0x8]

    v7 = 0;
    v6 = v8;
    v5 = v9;
    v4 = v10;
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(72:F64x8)[t3,0] = t6()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
    }
    else
    {
        [D] PutI(72:F64x8)[t3,0] = t6()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
    }
    if (a1)
    {
        if ([D] unsupported_<class 'pyvex.expr.GetI'>())
        {
            v1 = [D] unsupported_<class 'pyvex.expr.GetI'>();
            [D] PutI(136:I8x8)[t6,0] = 0x00()
        }
        else
        {
            *((unsigned long long *)&v1) = nan;
            [D] PutI(136:I8x8)[t6,0] = 0x00()
        }
        v0 = a1;
        v7 = sub_4010d0();
        if ([D] unsupported_<class 'pyvex.expr.GetI'>())
        {
            [D] PutI(72:F64x8)[t3,0] = t6()
            [D] PutI(136:I8x8)[t3,0] = 0x01()
        }
        else
        {
            [D] PutI(72:F64x8)[t3,0] = t6()
            [D] PutI(136:I8x8)[t3,0] = 0x01()
        }
    }
    v3 = _ccall(v11);
    v2 = a3;
    v1 = v7 + a0;
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(72:F64x8)[t3,0] = t4()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
    }
    else
    {
        [D] PutI(72:F64x8)[t3,0] = t4()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
    }
    v1 = a2;
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(72:F64x8)[t3,0] = t6()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
    }
    else
    {
        [D] PutI(72:F64x8)[t3,0] = t6()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
    }
    [D] PutI(72:F64x8)[t27,1] = t28()
    [D] PutI(136:I8x8)[t27,1] = 0x01()
    [D] PutI(136:I8x8)[t27,0] = 0x00()
    v1 = ([D] unsupported_<class 'pyvex.expr.GetI'>() ? [D] unsupported_<class 'pyvex.expr.GetI'>() : nan);
    [D] PutI(136:I8x8)[t63,0] = 0x00()
    return v1;
}


// Function: func_struct_byval at 0x401471
unsigned int func_struct_byval()
{
    unsigned int idx;  // ecx
    unsigned int v2;  // eax
    unsigned int v0;  // [bp+0x4]

    idx = 0;
    v2 = 0;
    do
    {
        v2 += (&v0)[2 * idx];
        idx += 1;
    } while (idx != 16);
    return v2;
}


// Function: func_struct_byptr at 0x40148e
unsigned int func_struct_byptr(unsigned int *ptr)
{
    unsigned int v0;  // eax

    v0 = 4294967295;
    if (ptr)
        v0 = ptr[1] * *(ptr);
    return v0;
}


// Function: test_calling_conventions at 0x4014a7
extern unsigned int g_402008;
extern unsigned int g_4020c9;
extern unsigned int g_4020f1;
extern unsigned int g_402113;
extern unsigned int g_40213a;
extern unsigned int g_402162;
extern unsigned int g_40218e;

int test_calling_conventions()
{
    char i[4];  // esi
    unsigned long v8;  // ldt
    unsigned int flag1;  // ecx
    unsigned int idx;  // eax
    unsigned int v19;  // esi
    unsigned long v9;  // gdt
    unsigned short v10;  // gs
    unsigned int v12;  // eax
    unsigned int v13;  // edx
    unsigned int v14;  // ecx
    unsigned int v15;  // eax
    char cur[4];  // edi
    unsigned int result;  // [bp-0x148]
    unsigned int v1;  // [bp-0x144]
    unsigned int v2;  // [bp-0x140]
    unsigned int v20;  // [bp-0x128]
    unsigned int v21;  // [bp-0x124]
    char v3;  // [bp-0x120]
    char v4;  // [bp-0xa0]
    unsigned int v5;  // [bp-0x20]

    i = &v3;
    v5 = *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
    sub_4010c0(&g_402008);
    sub_4010e0(1, "CALL-L1-01: %d\n", 15);
    sub_4010e0(1, "CALL-L1-02: %d\n", 50);
    sub_4010e0(1, "CALL-L1-03: %d\n", 6);
    sub_4010e0(1, "CALL-L1-04: %d\n", 15);
    sub_4010e0(1, "CALL-L1-05: %d\n", 15);
    sub_4010e0(1, "CALL-L1-06: %d\n", 100);
    sub_4010e0(1, "CALL-L1-07: %d\n", 21);
    sub_4010e0(1, "CALL-L1-08: %d\n", 15);
    sub_4010e0(1, "CALL-L1-09: %d\n", 10);
    sub_4010e0(1, "CALL-L1-10: %d\n", 33);
    v2 = 3;
    v1 = 2;
    result = 1;
    sub_4010e0(1, &g_4020c9, varargs_func(5));
    sub_4010e0(1, &g_4020f1, 42);
    sub_4010e0(1, &g_402113, 36);
    sub_4010e0(1, &g_40213a, 117);
    v12 = 1;
    v13 = 0;
    do
    {
        v14 = v12 * 8;
        *((unsigned int *)((char *)&v20 + v14)) = v12;
        v15 = v12 + 1;
        *((unsigned int *)((char *)&v21 + v14)) = v13;
        v13 += v12 + 1 < v12;
        v12 = v15;
    } while ((v12 ^ 17) || v13);
    cur = &v4;
    flag1 = 32;
    for (idx = 0; flag1; i += 1)
    {
        flag1 -= 1;
        *(cur) = *(i);
        cur += 1;
    }
    v19 = 0;
    do
    {
        v19 += *((int *)&(&v4)[8 * idx]);
        idx += 1;
    } while (idx != 16);
    sub_4010e0(1, &g_402162, v19, 16);
    sub_4010e0(1, &g_40218e, 50);
    if (v5 == *((int *)_ccall(v8, v9, (unsigned int)v10, 20)))
        return v5 - *((int *)_ccall(v8, v9, (unsigned int)v10, 20));
    return __stack_chk_fail_local();
}


// Function: param_by_value_int at 0x401688
unsigned int param_by_value_int(unsigned int a0)
{
    return a0 * 2;
}


// Function: call_by_value_int at 0x401696
unsigned int call_by_value_int()
{
    return 15;
}


// Function: param_by_value_ptr at 0x4016a0
unsigned int param_by_value_ptr(unsigned int *ptr)
{
    *(ptr) = *(ptr) * 2;
    return 1;
}


// Function: call_by_value_ptr at 0x4016b3
unsigned int call_by_value_ptr()
{
    return 11;
}


// Function: param_array_decay at 0x4016bd
unsigned int param_array_decay()
{
    return 4;
}


// Function: call_array_decay at 0x4016c7
unsigned int call_array_decay()
{
    return 4;
}


// Function: param_string at 0x4016d1
int param_string(char *a0)
{
    return *(a0) + a0[1];
}


// Function: call_string_param at 0x4016e6
unsigned int call_string_param()
{
    return 173;
}


// Function: param_ptr_array at 0x4016f0
unsigned int param_ptr_array(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // edx
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    v0 = 0;
    v1 = 0;
    while (true)
    {
        v2 = v0;
        if (v2 >= a1)
            break;
        v3 = v2 + 1;
        v1 += *((char *)*((int *)(a0 + v2 * 4)));
        v0 = v3;
    }
    return v1;
}


// Function: call_ptr_array at 0x401714
typedef struct struct_0 {
    char padding_0[10475];
    unsigned int field_28eb;
} struct_0;

unsigned int call_ptr_array()
{
    unsigned int result;  // ecx
    unsigned int v6;  // edi
    unsigned int v7;  // esi
    char cur[4];  // edi
    struct_0 *i;  // esi
    unsigned long v10;  // ldt
    unsigned long v11;  // gdt
    unsigned short v12;  // gs
    unsigned int v13;  // eax
    char v0;  // [bp-0x1c]
    unsigned int v1;  // [bp-0x10]
    unsigned int v2;  // [bp-0xc]
    unsigned int v3;  // [bp-0x8]

    result = 3;
    v3 = v6;
    v2 = v7;
    cur = &v0;
    i = __x86.get_pc_thunk.ax() + 10475;
    for (v1 = *((int *)_ccall(v10, v11, (unsigned int)v12, 20)); result; i = &i->padding_0[4])
    {
        result -= 1;
        *((int *)&cur[0]) = *((int *)&i->padding_0[0]);
        cur += 1;
    }
    v13 = param_ptr_array(&v0, 3);
    if (v1 == *((int *)_ccall(v10, v11, (unsigned int)v12, 20)))
        return v13;
    return __stack_chk_fail_local();
}


// Function: param_varargs at 0x40176c
unsigned int param_varargs(unsigned int a0)
{
    unsigned int idx;  // eax
    unsigned int v2;  // edx
    char v0;  // [bp+0x8]

    idx = 0;
    for (v2 = 0; idx < a0; idx += 1)
    {
        v2 += *((int *)&(&v0)[4 * idx]);
    }
    return v2;
}


// Function: call_varargs_param at 0x401789
unsigned int call_varargs_param()
{
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x20]
    unsigned int v3;  // [bp-0x1c]

    v3 = 40;
    v2 = 30;
    v1 = 20;
    v0 = 10;
    return param_varargs(4);
}


// Function: param_func_ptr at 0x4017a4
int param_func_ptr(unsigned int *a0, unsigned int a1)
{
    return a0(a1) + 10;
}


// Function: call_func_ptr_param at 0x4017b9
unsigned int call_func_ptr_param()
{
    return param_func_ptr(__x86.get_pc_thunk.ax() - 1316, 5);
}


// Function: param_double_ptr at 0x4017dd
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

unsigned int param_double_ptr(struct_0 **ptr, unsigned int a1)
{
    unsigned int v0;  // eax

    v0 = 4294967295;
    if (ptr && *(ptr))
    {
        *(ptr)->field_0 = a1;
        v0 = 1;
        *(ptr) = NULL;
    }
    return v0;
}


// Function: call_double_ptr at 0x401806
unsigned int call_double_ptr()
{
    return 21;
}


// Function: param_complex_cast at 0x401810
unsigned int param_complex_cast(unsigned int *a0, unsigned int a1)
{
    if (a1)
        return 4294967295;
    return *(a0);
}


// Function: call_complex_cast at 0x401832
unsigned int call_complex_cast()
{
    return 305419896;
}


// Function: param_struct_byval at 0x40183c
int param_struct_byval(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9, unsigned int a10, unsigned int a11, unsigned int a12, unsigned int a13, unsigned int a14, unsigned int a15)
{
    return a15 + a0;
}


// Function: call_struct_byval at 0x40184b
unsigned int call_struct_byval()
{
    unsigned long v4;  // ldt
    unsigned long v5;  // gdt
    unsigned short v6;  // gs
    unsigned int idx;  // eax
    unsigned int v8;  // eax
    unsigned long v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]

    v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
    idx = 0;
    do
    {
        (&v0)[idx] = idx;
        idx += 1;
    } while (idx != 16);
    v8 = v1 + v0;
    if (v2 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
        v8 = __stack_chk_fail_local();
    return v8;
}


// Function: param_order_dep at 0x401883
int param_order_dep(unsigned int a0, unsigned int a1)
{
    return a1 + a0;
}


// Function: call_order_dep at 0x401892
unsigned int call_order_dep()
{
    return 4;
}


// Function: test_parameter_passing at 0x40189c
extern unsigned int g_4021c7;

int test_parameter_passing()
{
    sub_4010c0(&g_4021c7);
    sub_4010e0(1, "PARAM-L1-01: %d\n", 15);
    sub_4010e0(1, "PARAM-L1-02: %d\n", 11);
    sub_4010e0(1, "PARAM-L2-01: %d\n", 4);
    sub_4010e0(1, "PARAM-L2-02: %d\n", 173);
    sub_4010e0(1, "PARAM-L2-03: %d\n", call_ptr_array());
    sub_4010e0(1, "PARAM-L2-04: %d\n", call_varargs_param());
    sub_4010e0(1, "PARAM-L3-01: %d\n", call_func_ptr_param());
    sub_4010e0(1, "PARAM-L3-02: %d\n", 21);
    sub_4010e0(1, "PARAM-L3-03: %d\n", 305419896);
    sub_4010e0(1, "PARAM-L3-04: %d\n", call_struct_byval());
    return sub_4010e0(1, "PARAM-L3-05: %d\n", 4);
}


// Function: ret_basic_type at 0x4019ad
unsigned int ret_basic_type(unsigned int a0)
{
    return a0 * 2;
}


// Function: call_ret_basic at 0x4019bb
unsigned int call_ret_basic()
{
    return 42;
}


// Function: ret_pointer at 0x4019c5
int ret_pointer(unsigned int a0)
{
    return a0 + 4;
}


// Function: call_ret_pointer at 0x4019d4
unsigned int call_ret_pointer()
{
    return 20;
}


// Function: ret_small_struct at 0x4019de
unsigned int [2] ret_small_struct(unsigned int *ptr, unsigned int a1, unsigned int a2)
{
    *(ptr) = a1;
    ptr[1] = a2;
    return ptr;
}


// Function: call_ret_small_struct at 0x4019f7
unsigned int call_ret_small_struct()
{
    return 7;
}


// Function: ret_large_struct at 0x401a01
void ret_large_struct(unsigned int *a0, unsigned int a1)
{
    unsigned int iter;  // ecx
    unsigned int *cur;  // eax
    unsigned long v4;  // ldt
    unsigned long v5;  // gdt
    unsigned short v6;  // gs
    char j[4];  // esi
    unsigned long v0;  // [bp-0x50]
    unsigned int v1;  // [bp-0x10]

    iter = 0;
    cur = a0;
    v1 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
    do
    {
        j = &v0;
        (&v0)[iter] = a1 + iter;
        iter += 1;
    } while (iter != 16);
    for (; iter; j += 1)
    {
        iter -= 1;
        *((char [4])cur) = *(j);
        cur += 1;
    }
    if (v1 != *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
        __stack_chk_fail_local();
    return;
}


// Function: call_ret_large_struct at 0x401a4d
int call_ret_large_struct()
{
    unsigned long v4;  // ldt
    unsigned long v5;  // gdt
    unsigned short v6;  // gs
    unsigned int v0[15];  // [bp-0x50]
    unsigned int v1;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]

    v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
    ret_large_struct(&v0, 100);
    if (v2 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
        return v1 + v0[0];
    return __stack_chk_fail_local();
}


// Function: ret_func_ptr at 0x401a86
unsigned int ret_func_ptr(unsigned int a0)
{
    unsigned int v0;  // edx
    unsigned int v1;  // edx

    __x86.get_pc_thunk.dx();
    v1 = v0 + 9533;
    if (!a0)
        return v1 - 11595;
    return v1 - 11580;
}


// Function: call_ret_func_ptr at 0x401aac
unsigned int call_ret_func_ptr()
{
    return 10;
}


// Function: ret_opaque_handle at 0x401ab6
unsigned int ret_opaque_handle(unsigned int a0)
{
    unsigned int v0;  // edx
    unsigned int v1;  // edx

    __x86.get_pc_thunk.dx();
    v1 = v0 + 9485;
    if (a0)
        return v1 + 76;
    return v1 + 84;
}


// Function: call_ret_opaque at 0x401adc
int call_ret_opaque()
{
    return *((int *)(__x86.get_pc_thunk.ax() + 9531));
}


// Function: ret_complex_expr at 0x401af1
int ret_complex_expr(unsigned int a0, unsigned int a1, unsigned int a2)
{
    if (a0 <= a1)
        return a2 + 10;
    return a2 * 2;
}


// Function: call_ret_complex_expr at 0x401b0c
unsigned int call_ret_complex_expr()
{
    return 40;
}


// Function: ret_multi_branch at 0x401b16
unsigned int ret_multi_branch(unsigned int a0)
{
    unsigned int v0;  // eax

    v0 = 4294967295;
    if (a0 <= 2)
        v0 = (a0 + 1) * 10;
    return v0;
}


// Function: call_ret_multi_branch at 0x401b30
unsigned int call_ret_multi_branch()
{
    return 60;
}


// Function: ret_void at 0x401b3a
unsigned int * ret_void(unsigned int a0, unsigned int *ptr)
{
    *(ptr) = a0 * 3;
    return ptr;
}


// Function: call_ret_void at 0x401b4c
unsigned int call_ret_void()
{
    return 21;
}


// Function: test_return_values at 0x401b56
extern unsigned int g_4022a3;
extern unsigned int g_4022c1;
extern unsigned int g_4022dd;
extern unsigned int g_4022f9;
extern unsigned int g_402314;
extern unsigned int g_402331;
extern unsigned int g_40234d;
extern unsigned int g_40236a;
extern unsigned int g_402386;
extern unsigned int g_4023a2;
extern unsigned int handle1.1;

int test_return_values()
{
    sub_4010c0(&g_4022a3);
    sub_4010e0(1, &g_4022c1, 42);
    sub_4010e0(1, &g_4022dd, 20);
    sub_4010e0(1, &g_4022f9, 7);
    sub_4010e0(1, &g_402314, call_ret_large_struct());
    sub_4010e0(1, &g_402331, 10);
    sub_4010e0(1, &g_40234d, handle1.1);
    sub_4010e0(1, &g_40236a, 40);
    sub_4010e0(1, &g_402386, 60);
    return sub_4010e0(1, &g_4023a2, 21);
}


// Function: __x86.get_pc_thunk.ax at 0x401c33
unsigned int __x86.get_pc_thunk.ax()
{
    char v0;  // [bp+0x0]

    return *((int *)&v0);
}


// Function: sub_401c37 at 0x401c37
int sub_401c37()
{
    __stack_chk_fail_local();
    return;
}


// Function: __stack_chk_fail_local at 0x401c40
int __stack_chk_fail_local()
{
    unsigned int v2;  // ebx
    unsigned int v0;  // [bp-0x4]

    v0 = v2;
    sub_4010b0();
    __do_global_ctors_aux();
    return;
}


// Function: __do_global_ctors_aux at 0x401c60
typedef struct struct_0 {
    char padding_0[8823];
    struct struct_1 *field_2277;
    struct struct_1 *field_227b;
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


// Function: sub_401ca2 at 0x401ca2
void sub_401ca2()
{
}


// Function: _fini at 0x401cac
unsigned int * _fini()
{
    return __do_global_dtors_aux();
}

