// Angr Decompilation of 2_gcc_O1_g
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
int sub_40107e()
{
    sub_401080();
    return;
}


// Function: sub_401080 at 0x401080
typedef struct struct_0 {
    char padding_0[32];
    unsigned int field_20;
} struct_0;

int sub_401080()
{
    struct_0 *v1;  // ebx

    goto v1->field_20;
}


// Function: sub_40108a at 0x40108a
int sub_40108a()
{
    sub_401090();
    return;
}


// Function: sub_401090 at 0x401090
typedef struct struct_0 {
    char padding_0[12];
    unsigned int field_c;
} struct_0;

int sub_401090()
{
    struct_0 *v1;  // ebx

    goto v1->field_c;
}


// Function: sub_40109a at 0x40109a
int sub_40109a()
{
    sub_4010a0();
    return;
}


// Function: sub_4010a0 at 0x4010a0
typedef struct struct_0 {
    char padding_0[16];
    unsigned int field_10;
} struct_0;

int sub_4010a0()
{
    struct_0 *v1;  // ebx

    goto v1->field_10;
}


// Function: sub_4010aa at 0x4010aa
int sub_4010aa()
{
    sub_4010b0();
    return;
}


// Function: sub_4010b0 at 0x4010b0
typedef struct struct_0 {
    char padding_0[20];
    unsigned int field_14;
} struct_0;

int sub_4010b0()
{
    struct_0 *v1;  // ebx

    goto v1->field_14;
}


// Function: sub_4010ba at 0x4010ba
int sub_4010ba()
{
    sub_4010c0();
    return;
}


// Function: sub_4010c0 at 0x4010c0
typedef struct struct_0 {
    char padding_0[24];
    unsigned int field_18;
} struct_0;

int sub_4010c0()
{
    struct_0 *v1;  // ebx

    goto v1->field_18;
}


// Function: sub_4010ca at 0x4010ca
void sub_4010ca()
{
    _start(); /* do not return */
}


// Function: _start at 0x4010d0
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
    sub_401090(main, v2, &v3, 0, 0);
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198651()
}


// Function: sub_4010fc at 0x4010fc
void sub_4010fc()
{
    return;
}


// Function: __x86.get_pc_thunk.bx at 0x401100
void __x86.get_pc_thunk.bx()
{
    return;
}


// Function: sub_401104 at 0x401104
void sub_401104()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401110
typedef struct struct_0 {
    char padding_0[20183];
    struct struct_1 *field_4ed7;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

unsigned int * deregister_tm_clones()
{
    unsigned int *ptr;  // edx

    __x86.get_pc_thunk.dx();
    return (char *)&ptr[5052] + 3;
}


// Function: sub_401143 at 0x401143
void sub_401143()
{
}


// Function: sub_401149 at 0x401149
void sub_401149()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x401150
typedef struct struct_0 {
    char padding_0[20135];
    struct struct_1 *field_4ea7;
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
    v3 = &v2->padding_0[20091];
    v0 = v4;
    if (!(&v3->padding_0[56] - &v3->padding_0[56] >> 31) + (&v3->padding_0[56] - &v3->padding_0[56] >> 2) >> 1)
    {
        return (&v3->padding_0[56] - &v3->padding_0[56] >> 31) + (&v3->padding_0[56] - &v3->padding_0[56] >> 2) >> 1;
    }
    else if (*((int *)&v3->padding_0[44]))
    {
        return (*((int *)&v3->padding_0[44]))(&v3->padding_0[56], (&v3->padding_0[56] - &v3->padding_0[56] >> 31) + (&v3->padding_0[56] - &v3->padding_0[56] >> 2) >> 1);
    }
    else
    {
        return (&v3->padding_0[56] - &v3->padding_0[56] >> 31) + (&v3->padding_0[56] - &v3->padding_0[56] >> 2) >> 1;
    }
}


// Function: sub_401197 at 0x401197
void sub_401197()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x4011a0
typedef struct struct_0 {
    char padding_0[20035];
    unsigned int field_4e43;
    char padding_4e47[16];
    unsigned int field_4e57;
    char field_4e5b;
    char padding_4e5c[3];
    unsigned int field_4e5f;
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
    ptr = &v6->padding_0[20003];
    v1 = v8;
    v0 = v9;
    if (ptr->padding_0[56])
        return v5;
    if (*((int *)&ptr->padding_0[32]))
        sub_401080(*((int *)&ptr->padding_0[52]));
    v10 = &ptr->padding_0[224];
    v11 = *((int *)&ptr->padding_0[60]);
    i = (&ptr->padding_0[220] - v10 >> 2) - 1;
    if (*((int *)&ptr->padding_0[60]) < i)
    {
        do
        {
            v13 = v11 + 1;
            *((unsigned int *)&ptr->padding_0[60]) = v13;
            (*((int *)&v10->padding_0[4 * v13]))();
            v11 = *((int *)&ptr->padding_0[60]);
        } while (*((int *)&ptr->padding_0[60]) < i);
    }
    v14 = deregister_tm_clones();
    ptr->padding_0[56] = 1;
    return v14;
}


// Function: sub_40122a at 0x40122a
void sub_40122a()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x401230
unsigned int frame_dummy()
{
    return register_tm_clones();
}


// Function: __x86.get_pc_thunk.dx at 0x401239
void __x86.get_pc_thunk.dx()
{
    return;
}


// Function: __x86.get_pc_thunk.di at 0x40123d
int __x86.get_pc_thunk.di(int a0)
{
    unsigned int v0;  // eax

    return v0;
}


// Function: double_value at 0x401241
unsigned int double_value(unsigned int a0)
{
    return a0 * 2;
}


// Function: process_int at 0x40124c
int process_int(unsigned int a0)
{
    return a0 * 2 + 1;
}


// Function: complex_callback at 0x401259
char complex_callback(unsigned int *ptr, unsigned int *a1)
{
    *(ptr) = *(ptr) + 10;
    return *(a1);
}


// Function: process_char at 0x401272
int process_char(unsigned int a0)
{
    if (!((a0 - 65 & 255) < 26))
        return a0;
    return a0 + 32;
}


// Function: process_short at 0x401287
unsigned int process_short(unsigned short a0, unsigned short a1)
{
    return a1 & 0xffff0000 | a1 + a0;
}


// Function: process_long at 0x401295
unsigned int process_long(unsigned int a0)
{
    return a0 * 2;
}


// Function: process_ll at 0x4012a0
int process_ll(unsigned int a0, unsigned int a1)
{
    return a0 * a0;
}


// Function: process_float at 0x4012b6
unsigned int process_float(unsigned int a0)
{
    unsigned int v1;  // eax
    unsigned int v0;  // [bp-0x4]

    v1 = __x86.get_pc_thunk.ax();
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
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
        v0 = [D] unsupported_<class 'pyvex.expr.GetI'>();
    else
        v0 = nan;
    [D] PutI(72:F64x8)[t5,1] = t6()
    [D] PutI(136:I8x8)[t5,1] = 0x01()
    [D] PutI(136:I8x8)[t5,0] = 0x00()
    return v1 + 19726;
}


// Function: process_double at 0x4012e0
unsigned int process_double()
{
    unsigned int v2;  // eax
    double v0;  // [bp-0xc], Other Possible Types: unsigned long

    v2 = __x86.get_pc_thunk.ax();
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
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
        v0 = [D] unsupported_<class 'pyvex.expr.GetI'>();
    else
        *((unsigned long long *)&v0) = nan;
    [D] PutI(72:F64x8)[t5,1] = t6()
    [D] PutI(136:I8x8)[t5,1] = 0x01()
    [D] PutI(136:I8x8)[t5,0] = 0x00()
    return v2 + 19684;
}


// Function: process_ld at 0x40130a
void process_ld()
{
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(72:F64x8)[t4,0] = t7()
        [D] PutI(136:I8x8)[t4,0] = 0x01()
    }
    else
    {
        [D] PutI(72:F64x8)[t4,0] = t7()
        [D] PutI(136:I8x8)[t4,0] = 0x01()
    }
    [D] PutI(72:F64x8)[t2,0] = t3()
    [D] PutI(136:I8x8)[t2,0] = 0x01()
    [D] PutI(72:F64x8)[t19,0] = t22()
    [D] PutI(136:I8x8)[t19,0] = 0x01()
    [D] PutI(72:F64x8)[t29,1] = t30()
    [D] PutI(136:I8x8)[t29,1] = 0x01()
    [D] PutI(136:I8x8)[t29,0] = 0x00()
    return;
}


// Function: process_bool at 0x401319
unsigned int process_bool(unsigned int a0)
{
    unsigned int v0;  // eax

    v0 = ~(a0) & 1;
    if (a0 <= 0)
        v0 = 0;
    return v0 & 1;
}


// Function: const_param at 0x401336
int const_param(unsigned int *a0)
{
    return *(a0) + 10;
}


// Function: volatile_access at 0x401344
unsigned int volatile_access(unsigned int *a0)
{
    return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x401353
extern unsigned int g_403008;

int test_data_types_l1()
{
    unsigned int v0;  // [bp-0x10]

    sub_4010b0(&g_403008);
    sub_4010c0(1, "DT-L1-01 (process_char): %c\n", 97);
    sub_4010c0(1, "DT-L1-01 (process_char): %c\n", 98);
    sub_4010c0(1, "DT-L1-02 (process_short): %d\n", 300);
    sub_4010c0(1, "DT-L1-03 (process_int): %d\n", 11);
    sub_4010c0(1, "DT-L1-04 (process_long): %ld\n", 200);
    sub_4010c0(1, "DT-L1-05 (process_ll): %lld\n", 10000, 0);
    sub_4010c0(1, "DT-L1-06 (process_float): %.2f\n", 0, 0x400c0000);
    sub_4010c0(1, "DT-L1-07 (process_double): %.2f\n", 3435973837, 1073794252);
    sub_4010c0(1, "DT-L1-08 (process_ld): %.2Lf\n", 0, 0xa0000000, 16386);
    sub_4010c0(1, "DT-L1-09 (process_bool): %d\n", 1);
    sub_4010c0(1, "DT-L1-09 (process_bool): %d\n", 0);
    sub_4010c0(1, "DT-L1-09 (process_bool): %d\n", 0);
    sub_4010c0(1, "DT-L1-10 (const_param): %d\n", 15);
    v0 = 10;
    return sub_4010c0(1, "DT-L1-11 (volatile_access): %d\n", v0 * 2);
}


// Function: array_1d_stack at 0x40149e
unsigned int array_1d_stack(unsigned int *a0, unsigned int a1)
{
    unsigned int v0;  // edx
    unsigned int *ptr;  // eax

    if (a1 <= 0)
        return 0;
    v0 = 0;
    ptr = a0;
    do
    {
        v0 += *(ptr);
        ptr += 1;
    } while (ptr != &a0[a1]);
    return v0;
}


// Function: array_string at 0x4014cb
unsigned int array_string(char *a0)
{
    unsigned int v0;  // eax

    if (!*(a0))
        return 0;
    v0 = 0;
    do
    {
        v0 += 1;
    } while (a0[v0]);
    return v0;
}


// Function: array_2d_stack at 0x4014ed
unsigned int array_2d_stack(unsigned int *a0)
{
    unsigned int v0;  // edx
    unsigned int *ptr;  // eax

    v0 = 0;
    ptr = a0;
    do
    {
        v0 += *(ptr);
        ptr += 11;
    } while (ptr != a0 + 110);
    return v0;
}


// Function: array_3d at 0x40150e
unsigned int array_3d(unsigned int *a0)
{
    unsigned int i[5];  // ecx
    unsigned int v1;  // eax
    unsigned int cur[5];  // edx

    i = a0 + 25;
    v1 = 0;
    do
    {
        cur = i + 5;
        do
        {
            v1 = v1 + cur[0] + cur[1] + cur[2] + cur[3] + cur[4];
            cur += 1;
        } while (cur != i);
        i += 5;
    } while (i != a0 + 150);
    return v1;
}


// Function: array_vla at 0x401546
unsigned int array_vla(unsigned int a0, unsigned int *a1)
{
    unsigned int v0;  // edx
    unsigned int *ptr;  // eax

    if (a0 <= 0)
        return 0;
    v0 = 0;
    ptr = a1;
    do
    {
        v0 += *(ptr);
        ptr += 1;
    } while (ptr != &a1[a0]);
    return v0;
}


// Function: array_pointer at 0x401573
unsigned int array_pointer(unsigned int *a0, unsigned int a1)
{
    unsigned int v0;  // edx
    unsigned int *ptr;  // eax

    if (a1 <= 0)
        return 0;
    v0 = 0;
    ptr = a0;
    do
    {
        v0 += *(ptr);
        ptr += 10;
    } while (ptr != &a0[10 * a1]);
    return v0;
}


// Function: pointer_array at 0x4015a3
unsigned int pointer_array(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // eax
    unsigned int v1;  // ebx
    unsigned int v3;  // ebx
    unsigned int idx;  // eax
    unsigned int v5;  // ecx

    v0 = a1;
    if (v0 <= 10)
        v1 = v0;
    else
        v1 = 10;
    v3 = v1;
    if (v0 <= 0)
        return 0;
    idx = 0;
    v5 = 0;
    do
    {
        if (*((int *)(a0 + idx * 4)))
            v5 += *((int *)*((int *)(a0 + idx * 4)));
    } while ((idx += 1, v3 > idx));
    return v5;
}


// Function: array_complex_index at 0x4015e7
unsigned int array_complex_index(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    if ((a3 | a4) >= 0 && a3 < a1)
        return (a4 < a2 ? *((int *)(a0 + (a4 * a1 + a3) * 4)) : 4294967295);
    return 4294967295;
}


// Function: array_oob at 0x401624
unsigned int array_oob(unsigned int *a0, unsigned int a1)
{
    unsigned int v0;  // edx
    unsigned int *ptr;  // eax

    if (a1 < 0)
        return 0;
    v0 = 0;
    ptr = a0;
    do
    {
        v0 += *(ptr);
        ptr += 1;
    } while (ptr != &a0[a1 + 1]);
    return v0;
}


// Function: test_array_types at 0x401652
extern unsigned int g_4033bd;

int test_array_types()
{
    unsigned long v27;  // ldt
    unsigned long v28;  // gdt
    void* j;  // edx
    void* cur;  // eax
    unsigned int k;  // eax
    unsigned int index;  // eax
    unsigned short v29;  // gs
    char *iter;  // esi
    unsigned int i;  // ecx
    unsigned int pos;  // eax
    unsigned int result;  // edx
    unsigned int v36;  // edx
    unsigned int v0;  // [bp-0x518]
    unsigned int v1;  // [bp-0x514]
    unsigned int v2;  // [bp-0x510]
    unsigned int v3[1];  // [bp-0x50c]
    unsigned int v4;  // [bp-0x508]
    unsigned int v5;  // [bp-0x504]
    unsigned int flag1[1];  // [bp-0x500]
    unsigned int v7;  // [bp-0x4fc]
    unsigned int v8;  // [bp-0x4f8]
    unsigned int v9;  // [bp-0x4f4]
    unsigned int v10;  // [bp-0x4f0]
    char *v11;  // [bp-0x4ec]
    char *v12;  // [bp-0x4e8]
    char *v13;  // [bp-0x4e4]
    unsigned long v46;  // [bp-0x4e0]
    unsigned long v47;  // [bp-0x4c4]
    char v14;  // [bp-0x480]
    unsigned int flag2[10];  // [bp-0x474]
    unsigned int v16;  // [bp-0x44c]
    unsigned int v17;  // [bp-0x424]
    unsigned int v18;  // [bp-0x3fc]
    unsigned int v19;  // [bp-0x3d4]
    unsigned int v20[100];  // [bp-0x3ac]
    unsigned int v21[25];  // [bp-0x21c]
    char v22;  // [bp-0x1b8]
    char v23[6];  // [bp-0x26]
    unsigned int v24;  // [bp-0x20]
    char v26;  // [bp+0x3c]

    v24 = *((int *)_ccall(v27, v28, (unsigned int)v29, 20));
    sub_4010b0(&g_4033bd);
    *((unsigned int [1])flag1) = 1;
    v7 = 2;
    v8 = 3;
    v9 = 4;
    v10 = 5;
    sub_4010c0(1, "ARR-L1-01 (array_1d_stack): %d\n", array_1d_stack(&flag1, 5));
    strncpy(v23, "hello", 5);
    sub_4010c0(1, "ARR-L1-02 (array_string): %d\n", array_string(&v23));
    iter = &v20;
    i = 0;
    do
    {
        pos = 0;
        do
        {
            result = 0;
            if (i == pos)
                v36 = pos;
            else
                v36 = result;
        } while ((*((unsigned int *)&iter[4 * pos]) = v36, pos += 1, pos != 10));
        i += 1;
        iter += 40;
    } while (i != 10);
    sub_4010c0(1, "ARR-L1-03 (array_2d_stack): %d\n", array_2d_stack(&v20));
    j = &v22;
    do
    {
        cur = j - 100;
        do
        {
            *((unsigned int *)cur) = 1;
            *((unsigned int *)&cur[4]) = 1;
            *((unsigned int *)&cur[8]) = 1;
            *((unsigned int *)&cur[12]) = 1;
            *((unsigned int *)&cur[16]) = 1;
            cur += 20;
        } while (j != cur);
        j += 100;
    } while (j != &v26);
    sub_4010c0(1, "ARR-L1-04 (array_3d): %d\n", array_3d(&v21));
    *((unsigned int [1])v3) = 10;
    v4 = 20;
    v5 = 30;
    sub_4010c0(1, "ARR-L2-01 (array_vla): %d\n", array_vla(3, &v3));
    *(&flag2) = 0;
    v16 = 10;
    v17 = 20;
    v18 = 30;
    v19 = 40;
    sub_4010c0(1, "ARR-L2-02 (array_pointer): %d\n", array_pointer(&flag2, 5));
    v0 = 10;
    v1 = 20;
    v2 = 30;
    k = 0;
    do
    {
        *((unsigned int *)((char *)&v46 + k)) = 0;
        k += 4;
    } while (k < 28);
    v11 = &v0;
    v12 = &v1;
    v13 = &v2;
    sub_4010c0(1, "ARR-L2-03 (pointer_array): %d\n", pointer_array(&v11, 3));
    index = 0;
    do
    {
        (&v47)[index] = index;
        index += 1;
    } while (index != 20);
    sub_4010c0(1, "ARR-L2-04 (array_complex_index): %d\n", *((int *)&v14));
    if (v24 == *((int *)_ccall(v27, v28, (unsigned int)v29, 20)))
        return v24 - *((int *)_ccall(v27, v28, (unsigned int)v29, 20));
    __stack_chk_fail_local();
}


// Function: ptr_single at 0x40191f
int ptr_single(unsigned int *a0)
{
    return *(a0) + 10;
}


// Function: ptr_double at 0x40192d
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int ptr_double(struct_0 **a0)
{
    return *(a0)->field_0 + 5;
}


// Function: ptr_triple at 0x40193d
typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int ptr_triple(struct_1 **a0)
{
    return *(a0)->field_0->field_0 + 1;
}


// Function: ptr_increment at 0x40194f
unsigned int ptr_increment(unsigned int ptr, unsigned int i)
{
    unsigned int idx;  // eax
    unsigned int v1;  // edx

    if (i <= 0)
        return 0;
    idx = 0;
    v1 = 0;
    do
    {
        v1 += *((int *)(ptr + idx * 4));
        idx += 1;
    } while (i != idx);
    return v1;
}


// Function: ptr_offset at 0x40197f
int ptr_offset(unsigned int a0, unsigned int a1)
{
    return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x40198f
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
    return a0 - a1 >> 2;
}


// Function: ptr_void at 0x40199f
unsigned int ptr_void(void* a0, unsigned int a1)
{
    if (!a1)
    {
        return *((int *)a0);
    }
    else if (a1 == 1)
    {
        return *((char *)a0);
    }
    else
    {
        return 4294967295;
    }
}


// Function: ptr_const at 0x4019c5
unsigned int ptr_const(unsigned int *a0)
{
    return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x4019d2
int ptr_const_ptr(unsigned int *ptr)
{
    *(ptr) = *(ptr) + 5;
    return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x4019e2
void ptr_func_simple(unsigned int *a0, unsigned int a1)
{
    a0(a1);
    return;
}


// Function: ptr_func_complex at 0x4019f5
unsigned int ptr_func_complex(unsigned int *a0, unsigned int a1)
{
    unsigned int v3;  // eax
    unsigned long v4;  // ldt
    unsigned long v5;  // gdt
    unsigned short v6;  // gs
    unsigned int v7;  // eax
    unsigned int v0;  // [bp-0x18]
    unsigned int result;  // [bp-0x14]
    unsigned int v2;  // [bp-0x10]

    v3 = __x86.get_pc_thunk.ax();
    v2 = *((int *)_ccall(v4, v5, (unsigned int)v6, 20));
    v0 = v3 - -6698;
    result = 0;
    v7 = a0(a1, &v0);
    if (v2 == *((int *)_ccall(v4, v5, (unsigned int)v6, 20)))
        return v7;
    __stack_chk_fail_local();
}


// Function: ptr_cast at 0x401a4b
int ptr_cast(unsigned int *a0)
{
    return *(a0);
}


// Function: opaque_handle_create at 0x401a56
int opaque_handle_create(unsigned int a0)
{
    return a0;
}


// Function: opaque_handle_op at 0x401a5f
unsigned int opaque_handle_op(unsigned int a0)
{
    return a0 * 2;
}


// Function: test_pointer_types at 0x401a6a
typedef struct struct_0 {
    char field_0;
} struct_0;

extern unsigned int g_403430;

int test_pointer_types()
{
    unsigned long v11;  // ldt
    unsigned long v12;  // gdt
    unsigned short v13;  // gs
    unsigned int v0;  // [bp-0x34]
    char *v1;  // [bp-0x30]
    struct_0 **v2;  // [bp-0x2c]
    unsigned int v3;  // [bp-0x28]
    unsigned int result;  // [bp-0x24]
    unsigned int v5;  // [bp-0x20]
    unsigned int v6;  // [bp-0x1c]
    unsigned int v7;  // [bp-0x18]
    unsigned int v8;  // [bp-0x14]
    unsigned int v9;  // [bp-0x10]

    v9 = *((int *)_ccall(v11, v12, (unsigned int)v13, 20));
    sub_4010b0(&g_403430);
    sub_4010c0(1, "PTR-L2-01 (ptr_single): %d\n", 15);
    sub_4010c0(1, "PTR-L2-02 (ptr_double): %d\n", 15);
    v0 = 5;
    v1 = &v0;
    v2 = &v1;
    sub_4010c0(1, "PTR-L2-03 (ptr_triple): %d\n", ptr_triple(&v2));
    result = 1;
    v5 = 2;
    v6 = 3;
    v7 = 4;
    v8 = 5;
    sub_4010c0(1, "PTR-L2-04 (ptr_increment): %d\n", ptr_increment(&result, 5));
    sub_4010c0(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
    sub_4010c0(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
    sub_4010c0(1, "PTR-L2-07 (ptr_void): %d\n", 42);
    sub_4010c0(1, "PTR-L2-07 (ptr_void): %d\n", 65);
    sub_4010c0(1, "PTR-L2-08 (ptr_const): %d\n", 20);
    sub_4010c0(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
    sub_4010c0(1, "PTR-L2-10 (ptr_func_simple): %d\n", (unsigned int)ptr_func_simple(double_value, 5));
    v3 = 5;
    sub_4010c0(1, "PTR-L2-11 (ptr_func_complex): %d\n", ptr_func_complex(complex_callback, &v3));
    sub_4010c0(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
    sub_4010c0(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
    if (v9 == *((int *)_ccall(v11, v12, (unsigned int)v13, 20)))
        return v9 - *((int *)_ccall(v11, v12, (unsigned int)v13, 20));
    __stack_chk_fail_local();
}


// Function: struct_simple at 0x401c3d
int struct_simple(unsigned int *a0)
{
    return a0[1] + *(a0) + a0[2];
}


// Function: struct_array at 0x401c4e
unsigned int struct_array(unsigned int *a0, unsigned int a1)
{
    unsigned int v0;  // ecx
    unsigned int ptr[3];  // eax

    if (a1 <= 0)
        return 0;
    v0 = 0;
    ptr = a0;
    do
    {
        v0 += ptr[1] + ptr[0] + ptr[2];
        ptr += 1;
    } while (ptr != &a0[3 * a1]);
    return v0;
}


// Function: struct_nested at 0x401c88
int struct_nested(unsigned int *a0)
{
    return a0[3] + *(a0);
}


// Function: struct_deep at 0x401c96
int struct_deep(unsigned int *a0)
{
    return a0[5] + a0[2];
}


// Function: struct_with_ptr at 0x401ca5
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int struct_with_ptr(struct_0 *idx)
{
    unsigned int v0;  // edx

    v0 = 0;
    if (idx->field_4)
        v0 = idx->field_4->field_0;
    return idx->field_0 + v0;
}


// Function: struct_bitfields at 0x401cc0
int struct_bitfields(void* a0)
{
    return (*((char *)a0) & 1) + (*((char *)a0) >> 1 & 3) + (*((char *)a0) >> 3 & 7) + (*((short *)a0) >> 6);
}


// Function: union_type at 0x401cf0
int union_type(void* a0, unsigned int a1)
{
    unsigned int v3;  // fpround
    unsigned int v0;  // [bp-0x8]
    unsigned short v1;  // [bp-0x4]
    unsigned short v2;  // [bp-0x2]

    if (!a1)
    {
        return *((int *)a0);
    }
    else if (a1 != 1)
    {
        return *((char *)a0);
    }
    else
    {
        [D] PutI(72:F64x8)[t19,0] = t22()
        [D] PutI(136:I8x8)[t19,0] = 0x01()
        v2 = _ccall(v3);
        v1 = v2 & 255 | ((char)(v2 >> 8) | 12) * 0x100;
        v0 = ([D] unsupported_<class 'pyvex.expr.GetI'>() ? [D] unsupported_<class 'pyvex.expr.GetI'>() : nan);
        [D] PutI(136:I8x8)[t57,0] = 0x00()
        return v0;
    }
}


// Function: union_array at 0x401d3e
unsigned int union_array(unsigned int *a0, unsigned int a1)
{
    unsigned int v0;  // edx
    unsigned int *ptr;  // eax

    if (a1 <= 0)
        return 0;
    v0 = 0;
    ptr = a0;
    do
    {
        v0 += *(ptr);
        ptr += 1;
    } while (ptr != &a0[a1]);
    return v0;
}


// Function: enum_type at 0x401d6b
unsigned int enum_type(unsigned int a0)
{
    return a0 * 10;
}


// Function: enum_switch at 0x401d79
unsigned int enum_switch(unsigned int a0)
{
    if (a0 == 2)
    {
        return 50;
    }
    else if (a0 <= 2)
    {
        return -(0 < a0) & 100;
    }
    else if (a0 == 3)
    {
        return 4294967295;
    }
    else
    {
        return 4294967197;
    }
}


// Function: struct_func_ptr at 0x401daa
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int struct_func_ptr(struct_0 *a0)
{
    return a0->field_4(a0->field_0);
}


// Function: linked_list at 0x401dbe
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_0 *field_4;
} struct_0;

unsigned int linked_list(struct_0 *ptr)
{
    unsigned int v0;  // edx

    if (!ptr)
        return 0;
    v0 = 0;
    do
    {
        v0 += ptr->field_0;
        ptr = ptr->field_4;
    } while (ptr->field_4);
    return v0;
}


// Function: doubly_linked_list at 0x401de2
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_0 *field_4;
} struct_0;

unsigned int doubly_linked_list(struct_0 *ptr)
{
    unsigned int v0;  // edx

    if (!ptr)
        return 0;
    v0 = 0;
    do
    {
        v0 += ptr->field_0;
        ptr = ptr->field_4;
    } while (ptr->field_4);
    return v0;
}


// Function: binary_tree_sum at 0x401e06
unsigned int binary_tree_sum(unsigned int *a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax

    if (!a0)
        return 0;
    v0 = binary_tree_sum(a0[1]);
    v1 = binary_tree_sum(a0[2]);
    return v1 + v0 + *(a0);
}


// Function: binary_tree at 0x401e41
unsigned int binary_tree(unsigned int *a0)
{
    return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x401e55
typedef struct struct_1 {
    struct struct_0 *field_0;
    char padding_4[36];
    unsigned int field_28;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
    struct struct_2 *field_4;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
    struct struct_0 *field_4;
} struct_0;

unsigned int graph_traverse(struct_1 *a0)
{
    struct_1 *v0;  // eax
    unsigned int v1;  // edx
    struct_1 *v2;  // ecx
    struct_1 *p;  // ecx
    struct_2 *ptr;  // eax
    struct_1 *v6;  // ecx

    v0 = a0;
    if (v0->field_28 <= 0)
        return 0;
    v1 = 0;
    v2 = v0;
    do
    {
        p = v2;
        ptr = p->field_0;
        if (p->field_0)
        {
            do
            {
                v1 += ptr->field_0;
                ptr = ptr->field_4;
            } while (ptr->field_4);
        }
    } while ((v6 = p + 4, v2 = p + 4, v2 != v0 + v0->field_28 * 4));
    return v1;
}


// Function: test_composite_types at 0x401e90
extern unsigned int g_403526;

int test_composite_types()
{
    unsigned long v41;  // ldt
    unsigned long v42;  // gdt
    unsigned int *cur;  // edi
    unsigned int flag11;  // ecx
    unsigned short v43;  // gs
    unsigned int v0;  // [bp-0xc4]
    unsigned int flag5;  // [bp-0xc0]
    unsigned int v2;  // [bp-0xbc]
    char *v3;  // [bp-0xb8]
    char v4;  // [bp-0xb4]
    unsigned short v5;  // [bp-0xb4]
    unsigned short v6;  // [bp-0xb4]
    unsigned int v7;  // [bp-0xb0]
    unsigned int v8;  // [bp-0xac]
    unsigned int v9;  // [bp-0xa8]
    unsigned int result;  // [bp-0xa4]
    unsigned int flag1;  // [bp-0xa0]
    unsigned int v12[1];  // [bp-0x9c]
    unsigned int flag9;  // [bp-0x98]
    unsigned int flag10;  // [bp-0x94]
    unsigned int v15[1];  // [bp-0x90]
    unsigned int v16;  // [bp-0x8c]
    unsigned int v17;  // [bp-0x88]
    unsigned int flag2[1];  // [bp-0x84]
    unsigned int flag3;  // [bp-0x80]
    unsigned int flag4;  // [bp-0x7c]
    unsigned int v21;  // [bp-0x78]
    unsigned int v22;  // [bp-0x74]
    unsigned int v23;  // [bp-0x70]
    unsigned int v24;  // [bp-0x6c]
    char *v25;  // [bp-0x68]
    char v26;  // [bp-0x64], Other Possible Types: unsigned int
    char *v27;  // [bp-0x60]
    char v28;  // [bp-0x5c], Other Possible Types: unsigned int
    unsigned int flag6;  // [bp-0x58]
    unsigned int v30;  // [bp-0x54]
    char *v31;  // [bp-0x50]
    unsigned int flag7;  // [bp-0x4c]
    char v33;  // [bp-0x48], Other Possible Types: unsigned int
    unsigned int flag8;  // [bp-0x44]
    char *v35;  // [bp-0x40]
    char *v36;  // [bp-0x3c]
    unsigned int v37;  // [bp-0x38]
    unsigned int v38;  // [bp-0x14]
    unsigned int v39;  // [bp-0x10]

    v39 = *((int *)_ccall(v41, v42, (unsigned int)v43, 20));
    sub_4010b0(&g_403526);
    sub_4010c0(1, "CMP-L2-01 (struct_simple): %d\n", 6);
    *((unsigned int [1])flag2) = 1;
    flag3 = 1;
    flag4 = 1;
    v21 = 2;
    v22 = 2;
    v23 = 2;
    sub_4010c0(1, "CMP-L2-02 (struct_array): %d\n", struct_array(&flag2, 2));
    sub_4010c0(1, "CMP-L2-03 (struct_nested): %d\n", 105);
    sub_4010c0(1, "CMP-L2-04 (struct_deep): %d\n", 258);
    v0 = 20;
    flag5 = 0;
    v2 = 10;
    v3 = &v0;
    sub_4010c0(1, "CMP-L2-05 (struct_with_ptr): %d\n", struct_with_ptr(&v2));
    *((char *)&v6) = v4 & 4294967233 | 29;
    v6 = v5 & 63 & 255 | ((char)((v5 & 63) >> 8) | 25) * 0x100;
    v7 &= 0xfff00000;
    sub_4010c0(1, "CMP-L2-06 (struct_bitfields): %d\n", struct_bitfields(&v6));
    sub_4010c0(1, "CMP-L2-07 (union_type): %d\n", 305419896);
    *((unsigned int [1])v15) = 10;
    v16 = 20;
    v17 = 30;
    sub_4010c0(1, "CMP-L2-08 (union_array): %d\n", union_array(&v15, 3));
    sub_4010c0(1, "CMP-L2-09 (enum_type): %d\n", 10);
    sub_4010c0(1, "CMP-L2-10 (enum_switch): %d\n", 50);
    v8 = 10;
    v9 = process_int;
    sub_4010c0(1, "CMP-L2-11 (struct_func_ptr): %d\n", struct_func_ptr(&v8));
    v24 = 10;
    v25 = &v26;
    v26 = 20;
    v27 = &v28;
    v28 = 30;
    flag6 = 0;
    sub_4010c0(1, "CMP-L2-12 (linked_list): %d\n", linked_list(&v24));
    v30 = 10;
    v31 = &v33;
    flag7 = 0;
    v33 = 20;
    flag8 = 0;
    v35 = &v30;
    sub_4010c0(1, "CMP-L2-13 (doubly_linked_list): %d\n", doubly_linked_list(&v30));
    *((unsigned int [1])v12) = 100;
    flag9 = 0;
    flag10 = 0;
    sub_4010c0(1, "CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(&v12));
    result = 1;
    flag1 = 0;
    cur = &v37;
    for (flag11 = 9; flag11; cur += 1)
    {
        flag11 -= 1;
        *(cur) = 0;
    }
    v36 = &result;
    v38 = 2;
    sub_4010c0(1, "CMP-L2-15 (graph_traverse): %d\n", graph_traverse(&v36));
    if (v39 == *((int *)_ccall(v41, v42, (unsigned int)v43, 20)))
        return v39 - *((int *)_ccall(v41, v42, (unsigned int)v43, 20));
    __stack_chk_fail_local();
}


// Function: main at 0x4021e6
unsigned int main()
{
    test_data_types_l1();
    test_array_types();
    test_pointer_types();
    test_composite_types();
    return 0;
}


// Function: __x86.get_pc_thunk.ax at 0x40220b
unsigned int __x86.get_pc_thunk.ax()
{
    char v0;  // [bp+0x0]

    return *((int *)&v0);
}


// Function: sub_40220f at 0x40220f
int sub_40220f()
{
    __stack_chk_fail_local();
    return;
}


// Function: __stack_chk_fail_local at 0x402210
int __stack_chk_fail_local()
{
    unsigned int v2;  // ebx
    unsigned int v0;  // [bp-0x4]

    v0 = v2;
    sub_4010a0();
    __do_global_ctors_aux();
    return;
}


// Function: __do_global_ctors_aux at 0x402230
typedef struct struct_0 {
    char padding_0[15531];
    struct struct_1 *field_3cab;
    struct struct_1 *field_3caf;
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


// Function: sub_402272 at 0x402272
void sub_402272()
{
}


// Function: _fini at 0x40227c
unsigned int * _fini()
{
    return __do_global_dtors_aux();
}

