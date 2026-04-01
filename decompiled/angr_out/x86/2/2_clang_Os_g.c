// Angr Decompilation of 2_clang_Os_g
// Platform: X86

// Function: _init at 0x401000
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 *g_404ff0;

int _init()
{
    if (g_404ff0)
        g_404ff0();
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


// Function: sub_401070 at 0x401070
int sub_401070()
{
    void* v1;  // ebx

    goto (int)v1[20];
}


// Function: sub_401076 at 0x401076
void sub_401076()
{
}


// Function: _start at 0x401080
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
    __libc_start_main(main, v2, &v3, 0, 0); /* do not return */
}


// Function: sub_4010ab at 0x4010ab
void sub_4010ab()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198571()
}


// Function: sub_4010ac at 0x4010ac
void sub_4010ac()
{
    return;
}


// Function: __x86.get_pc_thunk.bx at 0x4010b0
void __x86.get_pc_thunk.bx()
{
    return;
}


// Function: sub_4010b4 at 0x4010b4
void sub_4010b4()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x4010c0
unsigned int * deregister_tm_clones()
{
    unsigned int *ptr;  // edx

    __x86.get_pc_thunk.dx();
    return (char *)&ptr[4054] + 3;
}


// Function: sub_4010f3 at 0x4010f3
void sub_4010f3()
{
}


// Function: sub_4010f9 at 0x4010f9
void sub_4010f9()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x401100
typedef struct struct_0 {
    char padding_0[16115];
    struct struct_1 *field_3ef3;
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
    v3 = &v2[1].padding_0[3];
    v0 = v4;
    if (!(&v3->padding_0[32] - &v3->padding_0[32] >> 31) + (&v3->padding_0[32] - &v3->padding_0[32] >> 2) >> 1)
    {
        return (&v3->padding_0[32] - &v3->padding_0[32] >> 31) + (&v3->padding_0[32] - &v3->padding_0[32] >> 2) >> 1;
    }
    else if (*((int *)&v3->padding_0[8]))
    {
        return (*((int *)&v3->padding_0[8]))(&v3->padding_0[32], (&v3->padding_0[32] - &v3->padding_0[32] >> 31) + (&v3->padding_0[32] - &v3->padding_0[32] >> 2) >> 1);
    }
    else
    {
        return (&v3->padding_0[32] - &v3->padding_0[32] >> 31) + (&v3->padding_0[32] - &v3->padding_0[32] >> 2) >> 1;
    }
}


// Function: sub_401147 at 0x401147
void sub_401147()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401150
typedef struct struct_0 {
    char padding_0[16015];
    unsigned int field_3e8f;
    char padding_3e93[44];
    unsigned int field_3ebf;
    char field_3ec3;
    char padding_3ec4[3];
    unsigned int field_3ec7;
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
    ptr = &v6->padding_3e93[15];
    v1 = v8;
    v0 = v9;
    if (ptr->padding_0[32])
        return v5;
    if (*((int *)&ptr->padding_0[20]))
        sub_401070(*((int *)&ptr->padding_0[28]));
    v10 = &ptr->padding_0[248];
    v11 = *((int *)&ptr->padding_0[36]);
    i = (&ptr->padding_0[244] - v10 >> 2) - 1;
    if (*((int *)&ptr->padding_0[36]) < i)
    {
        do
        {
            v13 = v11 + 1;
            *((unsigned int *)&ptr->padding_0[36]) = v13;
            (*((int *)&v10->padding_0[4 * v13]))();
            v11 = *((int *)&ptr->padding_0[36]);
        } while (*((int *)&ptr->padding_0[36]) < i);
    }
    v14 = deregister_tm_clones();
    ptr->padding_0[32] = 1;
    return v14;
}


// Function: sub_4011da at 0x4011da
void sub_4011da()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x4011e0
unsigned int frame_dummy()
{
    return register_tm_clones();
}


// Function: __x86.get_pc_thunk.dx at 0x4011e9
void __x86.get_pc_thunk.dx()
{
    return;
}


// Function: __x86.get_pc_thunk.di at 0x4011ed
int __x86.get_pc_thunk.di(int a0)
{
    unsigned int v0;  // eax

    return v0;
}


// Function: sub_4011f1 at 0x4011f1
void sub_4011f1(unsigned int a0)
{
    process_char();
    return;
}


// Function: process_char at 0x4011f4
int process_char(unsigned int a0)
{
    if (!((char)_ccall(3, 4, (unsigned int)((char)a0 - 65), 26, 0)))
        return (char)a0 + 32;
    return a0;
}


// Function: process_short at 0x40120a
int process_short(unsigned short a0, unsigned short a1)
{
    return a1 + a0;
}


// Function: process_int at 0x401215
int process_int(unsigned int a0)
{
    return a0 * 2 + 1;
}


// Function: process_long at 0x40121d
unsigned int process_long(unsigned int a0)
{
    return a0 * 2;
}


// Function: process_ll at 0x401224
int process_ll(unsigned int a0, unsigned int a1)
{
    return a0 * a0;
}


// Function: process_float at 0x40123a
extern char _GLOBAL_OFFSET_TABLE_;

int process_float(unsigned int a0)
{
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
    if (![D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(72:F64x8)[t3,0] = t4()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
        return &_GLOBAL_OFFSET_TABLE_;
    }
    [D] PutI(72:F64x8)[t3,0] = t4()
    [D] PutI(136:I8x8)[t3,0] = 0x01()
    return &_GLOBAL_OFFSET_TABLE_;
}


// Function: process_double at 0x401257
extern char _GLOBAL_OFFSET_TABLE_;

int process_double()
{
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
    if (![D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(72:F64x8)[t3,0] = t4()
        [D] PutI(136:I8x8)[t3,0] = 0x01()
        return &_GLOBAL_OFFSET_TABLE_;
    }
    [D] PutI(72:F64x8)[t3,0] = t4()
    [D] PutI(136:I8x8)[t3,0] = 0x01()
    return &_GLOBAL_OFFSET_TABLE_;
}


// Function: process_ld at 0x401274
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


// Function: process_bool at 0x40127f
unsigned int process_bool(char a0)
{
    return a0 & 0xffffff00 | !(a0 & 1) & (char)_ccall(15, 15, (unsigned int)a0, 0, 0);
}


// Function: const_param at 0x401290
int const_param(unsigned int *a0)
{
    return *(a0) + 10;
}


// Function: volatile_access at 0x40129a
unsigned int volatile_access(unsigned int *a0)
{
    return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x4012a3
extern char g_4025bf;

int test_data_types_l1()
{
    unsigned int v0;  // [bp-0x28]
    unsigned int v1;  // [bp-0x24]
    unsigned int v2;  // [bp-0x10]

    puts(&g_4025bf);
    v0 = 97;
    printf("DT-L1-01 (process_char): %c\n");
    v0 = 98;
    printf("DT-L1-01 (process_char): %c\n");
    v0 = 300;
    printf("DT-L1-02 (process_short): %d\n");
    v0 = 11;
    printf("DT-L1-03 (process_int): %d\n");
    v0 = 200;
    printf("DT-L1-04 (process_long): %ld\n");
    v1 = 0;
    v0 = 10000;
    printf("DT-L1-05 (process_ll): %lld\n");
    v1 = 0x400c0000;
    v0 = 0;
    printf("DT-L1-06 (process_float): %.2f\n");
    v1 = 1073794252;
    v0 = 3435973837;
    printf("DT-L1-07 (process_double): %.2f\n");
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
        [D] x86g_dirtyhelper_storeF80le((Reference vvar_207{s-40|4b}), Reinterpret(F64->I64, [D] unsupported_<class 'pyvex.expr.GetI'>()))
        [D] PutI(136:I8x8)[t7,0] = 0x00()
    }
    else
    {
        [D] x86g_dirtyhelper_storeF80le((Reference vvar_207{s-40|4b}), Reinterpret(F64->I64, nan<64>))
        [D] PutI(136:I8x8)[t7,0] = 0x00()
    }
    printf("DT-L1-08 (process_ld): %.2Lf\n");
    v0 = 1;
    printf("DT-L1-09 (process_bool): %d\n");
    v0 = 0;
    printf("DT-L1-09 (process_bool): %d\n");
    v0 = 0;
    printf("DT-L1-09 (process_bool): %d\n");
    v0 = 15;
    printf("DT-L1-10 (const_param): %d\n");
    v2 = 10;
    v0 = v2 * 2;
    return printf("DT-L1-11 (volatile_access): %d\n");
}


// Function: array_1d_stack at 0x4013d6
unsigned int array_1d_stack(unsigned int ptr, unsigned int i)
{
    unsigned int idx;  // esi
    unsigned int v1;  // eax

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


// Function: array_string at 0x4013f5
unsigned int array_string(unsigned int a0)
{
    unsigned int v0;  // eax
    unsigned int v1;  // eax
    unsigned int v2;  // eax

    v0 = 4294967295;
    do
    {
        v2 = v0 + 1;
        v0 = v2;
    } while (*((char *)(a0 + v1 + 1)));
    return v1 + 1;
}


// Function: array_2d_stack at 0x401407
unsigned int array_2d_stack(unsigned int a0)
{
    unsigned int i;  // ecx
    unsigned int v1;  // eax

    i = 0;
    v1 = 0;
    do
    {
        v1 += *((int *)(a0 + i));
        i += 44;
    } while (i != 440);
    return v1;
}


// Function: array_3d at 0x40141e
unsigned int array_3d(unsigned int a0)
{
    unsigned int i;  // ecx
    unsigned int v1;  // eax
    unsigned int j;  // edi
    unsigned int v3;  // esi
    unsigned int ptr;  // esi
    unsigned int idx;  // ebx

    i = 0;
    v1 = 0;
    do
    {
        j = 0;
        v3 = a0;
        do
        {
            ptr = v3;
            idx = 0;
            do
            {
                v1 += *((int *)(ptr + idx * 4));
                idx += 1;
            } while (idx != 5);
            j += 1;
            v3 = ptr + 20;
        } while (j != 5);
        i += 1;
        a0 += 100;
    } while (i != 5);
    return v1;
}


// Function: array_vla at 0x40144e
unsigned int array_vla(unsigned int i, unsigned int ptr)
{
    unsigned int idx;  // esi
    unsigned int v1;  // eax

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


// Function: array_pointer at 0x40146d
unsigned int array_pointer(unsigned int *cur, unsigned int a1)
{
    unsigned int i;  // ecx
    unsigned int v1;  // eax

    i = a1;
    if (i <= 0)
        return 0;
    v1 = 0;
    do
    {
        v1 += *(cur);
        cur += 10;
        i -= 1;
    } while (i != 1);
    return v1;
}


// Function: pointer_array at 0x401487
unsigned int pointer_array(unsigned int a0, unsigned int a1)
{
    unsigned int v0;  // eax
    unsigned int idx;  // esi
    unsigned int v2;  // eax

    v0 = a1;
    if (v0 <= 0)
        return 0;
    if (v0 >= 10)
        v0 = 10;
    idx = 0;
    v2 = 0;
    do
    {
        if (*((int *)(a0 + idx * 4)))
            v2 += *((int *)*((int *)(a0 + idx * 4)));
    } while ((idx += 1, v0 != idx));
    return v2;
}


// Function: array_complex_index at 0x4014b9
unsigned int array_complex_index(unsigned int ptr, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    unsigned int v0;  // eax

    v0 = 4294967295;
    if (a3 >= 0 && a4 < a2 && a3 < a1 && a4 >= 0)
        v0 = *((int *)(ptr + (a1 * a4 + a3) * 4));
    return v0;
}


// Function: array_oob at 0x4014e9
unsigned int array_oob(unsigned int ptr, unsigned int a1)
{
    unsigned int idx;  // esi
    unsigned int v1;  // eax

    if (a1 < 0)
        return 0;
    idx = 0;
    v1 = 0;
    do
    {
        v1 += *((int *)(ptr + idx * 4));
        idx += 1;
    } while (a1 + 1 != idx);
    return v1;
}


// Function: test_array_types at 0x401509
extern char g_4025e0;

int test_array_types()
{
    unsigned int i;  // eax
    char *iter;  // ecx
    unsigned int i1;  // esi
    unsigned int idx;  // edi
    unsigned int l;  // eax
    char *v26;  // edx
    unsigned int v27;  // ecx
    unsigned int i2;  // edi
    char *v29;  // esi
    char *ptr;  // esi
    unsigned int index;  // ebp
    unsigned int idx5;  // edx
    unsigned int pos;  // eax
    unsigned int n;  // ecx
    unsigned int v35;  // eax
    char p[4];  // ecx
    unsigned int off;  // eax
    unsigned int v38;  // edx
    unsigned int idx4;  // eax
    unsigned int v16;  // esi
    unsigned int j;  // ecx
    unsigned int v19;  // eax
    unsigned int k;  // eax
    char *v21;  // ecx
    char *cur;  // edx
    unsigned int v0;  // [bp-0x4e8]
    char *v1;  // [bp-0x4e0]
    char *v2;  // [bp-0x4dc]
    char *v3;  // [bp-0x4d8]
    char v4;  // [bp-0x4d4]
    unsigned int v5;  // [bp-0x4b8]
    unsigned int v6;  // [bp-0x4b4]
    unsigned int v8;  // [bp-0x4b0]
    unsigned long v40;  // [bp-0x4ac]
    char v9;  // [bp-0x468]
    unsigned long v41;  // [bp-0x45c]
    char v10;  // [bp-0x394]
    char v11;  // [bp-0x204]

    puts(&g_4025e0);
    v0 = 15;
    printf("ARR-L1-01 (array_1d_stack): %d\n");
    v0 = 5;
    printf("ARR-L1-02 (array_string): %d\n");
    i = 0;
    iter = &v10;
    do
    {
        idx5 = 0;
        do
        {
            if (i == idx5)
                v16 = i;
            else
                v16 = 0;
        } while ((*((unsigned int *)&iter[4 * idx5]) = v16, idx5 += 1, idx5 != 10));
        i += 1;
        iter += 40;
    } while (i != 10);
    j = 0;
    v19 = 0;
    do
    {
        v19 += *((int *)&(&v10)[j]);
        j += 44;
    } while (j != 440);
    v0 = v19;
    printf("ARR-L1-03 (array_2d_stack): %d\n");
    k = 0;
    v21 = &v11;
    do
    {
        cur = v21;
        i1 = 0;
        do
        {
            idx = 0;
            do
            {
                *((unsigned int *)&cur[4 * idx]) = 1;
                idx += 1;
            } while (idx != 5);
            i1 += 1;
            cur += 20;
        } while (i1 != 5);
        k += 1;
        v21 += 100;
    } while (k != 5);
    l = 0;
    v26 = &v11;
    v27 = 0;
    do
    {
        i2 = 0;
        v29 = v26;
        do
        {
            ptr = v29;
            index = 0;
            do
            {
                v27 += *((int *)&ptr[4 * index]);
                index += 1;
            } while (index != 5);
            i2 += 1;
            v29 = ptr + 20;
        } while (i2 != 5);
        l += 1;
        v26 += 100;
    } while (l != 5);
    v0 = v27;
    printf("ARR-L1-04 (array_3d): %d\n");
    v0 = 60;
    printf("ARR-L2-01 (array_vla): %d\n");
    pos = 0;
    do
    {
        (&v41)[pos] = pos;
        pos += 10;
    } while (pos != 50);
    n = 0;
    v35 = 0;
    do
    {
        v35 += *((int *)((char *)&v41 + n));
        n += 40;
    } while (n != 200);
    v0 = v35;
    printf("ARR-L2-02 (array_pointer): %d\n");
    p = &v8;
    v8 = 10;
    v6 = 20;
    v5 = 30;
    v1 = &v8;
    v2 = &v6;
    v3 = &v5;
    off = 0;
    memset(&v4, 0, 28);
    v38 = 0;
    while (true)
    {
        if (p)
            v38 += *(p);
        if (off == 2)
            break;
        p = (&v2)[off];
        off += 1;
    }
    v0 = v38;
    printf("ARR-L2-03 (pointer_array): %d\n");
    idx4 = 0;
    do
    {
        (&v40)[idx4] = idx4;
        idx4 += 1;
    } while (idx4 != 20);
    v0 = *((int *)&v9);
    return printf("ARR-L2-04 (array_complex_index): %d\n");
}


// Function: ptr_single at 0x401701
int ptr_single(unsigned int *a0)
{
    return *(a0) + 10;
}


// Function: ptr_double at 0x40170b
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int ptr_double(struct_0 **a0)
{
    return *(a0)->field_0 + 5;
}


// Function: ptr_triple at 0x401717
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


// Function: ptr_increment at 0x401723
unsigned int ptr_increment(unsigned int ptr, unsigned int i)
{
    unsigned int idx;  // esi
    unsigned int v1;  // eax

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


// Function: ptr_offset at 0x401742
int ptr_offset(unsigned int a0, unsigned int a1)
{
    return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x40174e
unsigned int ptr_diff(unsigned int a0, unsigned int a1)
{
    return a0 - a1 >> 2;
}


// Function: ptr_void at 0x40175a
unsigned int ptr_void(void* a0, unsigned int a1)
{
    if (a1 == 1)
    {
        return *((char *)a0);
    }
    else if (!a1)
    {
        return *((int *)a0);
    }
    else
    {
        return 4294967295;
    }
}


// Function: ptr_const at 0x401776
unsigned int ptr_const(unsigned int *a0)
{
    return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x40177f
int ptr_const_ptr(unsigned int *ptr)
{
    *(ptr) = *(ptr) + 5;
    return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x40178b
int ptr_func_simple(unsigned int *a0, unsigned int a1)
{
    return a0(a1);
}


// Function: ptr_func_complex at 0x4017ab
extern unsigned int g_404f10;
extern unsigned int g_404f14;

int ptr_func_complex(unsigned int *a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x14]
    unsigned int v1;  // [bp-0x10]

    v1 = g_404f14;
    v0 = g_404f10;
    return a0(a1, &v0);
}


// Function: ptr_cast at 0x4017e4
int ptr_cast(unsigned int *a0)
{
    return *(a0);
}


// Function: opaque_handle_create at 0x4017eb
int opaque_handle_create(unsigned int a0)
{
    return a0;
}


// Function: opaque_handle_op at 0x4017f0
unsigned int opaque_handle_op(unsigned int a0)
{
    return a0 * 2;
}


// Function: test_pointer_types at 0x4017f7
extern char g_4025fb;
extern unsigned int g_402634;

int test_pointer_types()
{
    unsigned int *i;  // esi
    char cur[4];  // edi
    unsigned int result;  // ecx
    unsigned int v7;  // eax
    unsigned int idx;  // ecx
    unsigned int v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    char v2;  // [bp-0x1c]

    puts(&g_4025fb);
    v0 = 15;
    printf("PTR-L2-01 (ptr_single): %d\n");
    v0 = 15;
    printf("PTR-L2-02 (ptr_double): %d\n");
    v0 = 6;
    printf("PTR-L2-03 (ptr_triple): %d\n");
    i = &g_402634;
    cur = &v1;
    for (result = 5; result; i += 1)
    {
        result -= 1;
        *((unsigned int *)&cur[0]) = *(i);
        cur += 1;
    }
    v7 = 1;
    idx = 0;
    do
    {
        v7 += *((int *)&(&v2)[4 * idx]);
        idx += 1;
    } while (idx != 4);
    v0 = v7;
    printf("PTR-L2-04 (ptr_increment): %d\n");
    v0 = 30;
    printf("PTR-L2-05 (ptr_offset): %d\n");
    v0 = 4;
    printf("PTR-L2-06 (ptr_diff): %d\n");
    v0 = 42;
    printf("PTR-L2-07 (ptr_void): %d\n");
    v0 = 65;
    printf("PTR-L2-07 (ptr_void): %d\n");
    v0 = 20;
    printf("PTR-L2-08 (ptr_const): %d\n");
    v0 = 15;
    printf("PTR-L2-09 (ptr_const_ptr): %d\n");
    v0 = 10;
    printf("PTR-L2-10 (ptr_func_simple): %d\n");
    v0 = 1;
    printf("PTR-L2-11 (ptr_func_complex): %d\n");
    v0 = 305419896;
    printf("PTR-L2-12 (ptr_cast): 0x%x\n");
    v0 = 20;
    return printf("PTR-L2-13 (opaque_handle_op): %d\n");
}


// Function: struct_simple at 0x401962
int struct_simple(unsigned int *a0)
{
    return a0[1] + *(a0) + a0[2];
}


// Function: struct_array at 0x40196f
unsigned int struct_array(unsigned int *a0, unsigned int i)
{
    unsigned int cur[3];  // edx
    unsigned int v1;  // eax

    if (i <= 0)
        return 0;
    cur = a0 + 2;
    v1 = 0;
    do
    {
        v1 = v1 + cur[2] + cur[1] + cur[0];
        cur += 1;
        i -= 1;
    } while (i != 1);
    return v1;
}


// Function: struct_nested at 0x401992
int struct_nested(unsigned int *a0)
{
    return a0[3] + *(a0);
}


// Function: struct_deep at 0x40199c
int struct_deep(unsigned int *a0)
{
    return a0[5] + a0[2];
}


// Function: struct_with_ptr at 0x4019a7
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_1 *field_4;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int struct_with_ptr(struct_0 *a0)
{
    return (char *)(!a0->field_4 ? NULL : a0->field_4->field_0) + a0->field_0;
}


// Function: struct_bitfields at 0x4019bd
int struct_bitfields(unsigned short *ptr)
{
    unsigned int v0;  // eax

    v0 = *(ptr);
    return (v0 >> 6) + (v0 & 1) + (v0 >> 1 & 3) + (v0 >> 3 & 7);
}


// Function: union_type at 0x4019e4
int union_type(void* a0, unsigned int a1)
{
    unsigned int v3;  // fpround
    unsigned short v0;  // [bp-0x8]
    unsigned short v1;  // [bp-0x6]
    unsigned int v2;  // [bp-0x4]

    if (a1 == 1)
    {
        [D] PutI(72:F64x8)[t15,0] = t18()
        [D] PutI(136:I8x8)[t15,0] = 0x01()
        v0 = _ccall(v3);
        v1 = v0 | 0xc00;
        v2 = ([D] unsupported_<class 'pyvex.expr.GetI'>() ? [D] unsupported_<class 'pyvex.expr.GetI'>() : nan);
        [D] PutI(136:I8x8)[t50,0] = 0x00()
        return v2;
    }
    return (!a1 ? *((int *)a0) : *((char *)a0));
}


// Function: union_array at 0x401a27
unsigned int union_array(unsigned int ptr, unsigned int i)
{
    unsigned int idx;  // esi
    unsigned int v1;  // eax

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


// Function: enum_type at 0x401a46
unsigned int enum_type(unsigned int a0)
{
    return a0 * 10;
}


// Function: enum_switch at 0x401a50
extern char _GLOBAL_OFFSET_TABLE_;

unsigned int enum_switch(unsigned int a0)
{
    unsigned int v0;  // eax

    v0 = 4294967197;
    if (a0 <= 3)
        v0 = *((int *)&(&_GLOBAL_OFFSET_TABLE_)[10668 + 4 * a0]);
    return v0;
}


// Function: struct_func_ptr at 0x401a72
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


// Function: linked_list at 0x401a93
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_0 *field_4;
} struct_0;

unsigned int linked_list(struct_0 *i)
{
    unsigned int v0;  // eax

    for (v0 = 0; i; i = i->field_4)
    {
        v0 += i->field_0;
    }
    return v0;
}


// Function: doubly_linked_list at 0x401aa5
typedef struct struct_0 {
    unsigned int field_0;
    struct struct_0 *field_4;
} struct_0;

unsigned int doubly_linked_list(struct_0 *i)
{
    unsigned int v0;  // eax

    for (v0 = 0; i; i = i->field_4)
    {
        v0 += i->field_0;
    }
    return v0;
}


// Function: binary_tree_sum at 0x401ab7
typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    struct struct_0 *field_8;
} struct_0;

unsigned int binary_tree_sum(struct_0 *a0)
{
    unsigned int v0;  // esi
    struct_0 *ptr;  // edi
    unsigned int v2;  // eax
    struct_0 *v3;  // edi

    v0 = 0;
    while (true)
    {
        ptr = a0;
        if (!ptr)
            break;
        v2 = binary_tree_sum(ptr->field_4);
        v3 = ptr->field_8;
        v0 = v0 + ptr->field_0 + v2;
        a0 = v3;
    }
    return v0;
}


// Function: binary_tree at 0x401af0
unsigned int binary_tree(void* a0)
{
    return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x401b11
typedef struct struct_1 {
    struct struct_0 *field_0;
    char padding_4[36];
    unsigned int field_28;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    struct struct_0 *field_4;
} struct_0;

unsigned int graph_traverse(struct_1 *ptr)
{
    unsigned int index;  // esi
    unsigned int v1;  // eax
    unsigned int cur;  // edi

    if (ptr->field_28 <= 0)
        return 0;
    index = 0;
    v1 = 0;
    do
    {
        for (cur = (&ptr->field_0)[index]; cur; cur = *((int *)(cur + 4)))
        {
            v1 += *((int *)cur);
        }
        index += 1;
    } while (index != ptr->field_28);
    return v1;
}


// Function: test_composite_types at 0x401b3c
typedef struct struct_0 {
    char field_0[4];
    struct struct_0 *field_4;
} struct_0;

typedef struct struct_1 {
    char field_0[4];
    struct struct_1 *field_4;
} struct_1;

typedef struct struct_2 {
    char field_0[4];
    struct struct_2 *field_4;
} struct_2;

extern char g_402616;

int test_composite_types()
{
    struct_0 *ptr;  // eax
    unsigned int v22;  // ecx
    unsigned int v31;  // eax
    struct_1 *p;  // ecx
    unsigned int v25;  // eax
    struct_2 *cur;  // esi
    unsigned int idx;  // edx
    unsigned int *iter;  // edi
    unsigned int flag6;  // ecx
    unsigned int v0;  // [bp-0x88]
    char v1;  // [bp-0x84], Other Possible Types: unsigned int
    unsigned int flag3;  // [bp-0x80]
    char v3;  // [bp-0x7c], Other Possible Types: unsigned int
    char *v4;  // [bp-0x78]
    char v5;  // [bp-0x74], Other Possible Types: unsigned int
    char *v6;  // [bp-0x70]
    char v7;  // [bp-0x6c], Other Possible Types: unsigned int
    unsigned int result;  // [bp-0x68]
    unsigned int v9;  // [bp-0x64]
    unsigned int flag5;  // [bp-0x60]
    unsigned int flag4;  // [bp-0x5c]
    unsigned int v13;  // [bp-0x54]
    char *v14;  // [bp-0x50]
    unsigned int flag1;  // [bp-0x4c]
    unsigned int v16;  // [bp-0x48]
    unsigned int flag2;  // [bp-0x44]
    char *v18;  // [bp-0x40]
    unsigned int v19;  // [bp-0x3c]

    puts(&g_402616);
    v0 = 6;
    printf("CMP-L2-01 (struct_simple): %d\n");
    v0 = 9;
    printf("CMP-L2-02 (struct_array): %d\n");
    v0 = 105;
    printf("CMP-L2-03 (struct_nested): %d\n");
    v0 = 258;
    printf("CMP-L2-04 (struct_deep): %d\n");
    v0 = 30;
    printf("CMP-L2-05 (struct_with_ptr): %d\n");
    v0 = 106;
    printf("CMP-L2-06 (struct_bitfields): %d\n");
    v0 = 305419896;
    printf("CMP-L2-07 (union_type): %d\n");
    v0 = 60;
    printf("CMP-L2-08 (union_array): %d\n");
    v0 = 10;
    printf("CMP-L2-09 (enum_type): %d\n");
    v0 = 50;
    printf("CMP-L2-10 (enum_switch): %d\n");
    v0 = 21;
    printf("CMP-L2-11 (struct_func_ptr): %d\n");
    ptr = &v3;
    v3 = 10;
    v4 = &v5;
    v5 = 20;
    v6 = &v7;
    v7 = 30;
    result = 0;
    v22 = 0;
    do
    {
        v22 += ptr->field_0;
        ptr = ptr->field_4;
    } while (ptr->field_4);
    v0 = v22;
    printf("CMP-L2-12 (linked_list): %d\n");
    p = &v13;
    v13 = 10;
    v25 = 0;
    flag1 = 0;
    v16 = 20;
    flag2 = 0;
    v18 = &v13;
    v14 = &v16;
    do
    {
        v25 += p->field_0;
        p = p->field_4;
    } while (p->field_4);
    v0 = v25;
    printf("CMP-L2-13 (doubly_linked_list): %d\n");
    flag4 = 0;
    flag5 = 0;
    v9 = 100;
    v0 = binary_tree_sum(&v9);
    printf("CMP-L2-14 (binary_tree): %d\n");
    cur = &v1;
    flag3 = 0;
    v1 = 1;
    idx = 0;
    iter = &v19;
    for (flag6 = 11; flag6; iter += 1)
    {
        flag6 -= 1;
        *(iter) = 0;
    }
    while (true)
    {
        for (v31 = 0; cur; cur = cur->field_4)
        {
            v31 += cur->field_0;
        }
        idx += 1;
        if (idx == 2)
            break;
        cur = (&v19)[idx];
    }
    v0 = v31;
    return printf("CMP-L2-15 (graph_traverse): %d\n");
}


// Function: main at 0x401d68
unsigned int main()
{
    test_data_types_l1();
    test_array_types();
    test_pointer_types();
    test_composite_types();
    return 0;
}


// Function: sub_401d93 at 0x401d93
void sub_401d93()
{
    __do_global_ctors_aux();
    return;
}


// Function: __do_global_ctors_aux at 0x401da0
typedef struct struct_0 {
    char padding_0[12627];
    struct struct_1 *field_3153;
    struct struct_1 *field_3157;
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
    ptr = &v2[1].padding_0[251];
    v4 = *((int *)&ptr->padding_0[0x100]);
    if (*((int *)&ptr->padding_0[0x100]) == 0xffffffff)
        return 4294967295;
    v0 = v5;
    v6 = &ptr->padding_0[0x100];
    do
    {
        p = v6;
        v4();
        v4 = *((int *)&p->padding_0[4]);
        v6 = &p->padding_0[4];
    } while (*((int *)&p->padding_0[4]) != 0xffffffff);
    return 4294967295;
}


// Function: sub_401de2 at 0x401de2
void sub_401de2()
{
}


// Function: _fini at 0x401dec
unsigned int * _fini()
{
    return __do_global_dtors_aux();
}

