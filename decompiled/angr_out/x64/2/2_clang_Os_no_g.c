// Angr Decompilation of 2_clang_Os_no_g
// Platform: AMD64

// Function: _init at 0x401000
typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_404fe0;

unsigned long long * _init()
{
    unsigned long long *v1;  // rax

    v1 = g_404fe0;
    if (g_404fe0)
        v1 = g_404fe0();
    return v1;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_405008;
extern unsigned long long g_405010;

void sub_401020()
{
    unsigned long v0;  // [bp-0x8]

    v0 = g_405008;
    goto g_405010;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
    char *v1;  // rdi

    return puts(v1);
}


// Function: _start at 0x401060
void _start(unsigned long a0, unsigned long a1, unsigned long long a2)
{
    unsigned long v3;  // rax
    unsigned long long v1;  // [bp+0x0]
    unsigned long v2;  // [bp+0x8]

    v1 = v3;
    __libc_start_main(main, v1, &v2, 0, 0, a2, &v1, v1); /* do not return */
}


// Function: sub_401085 at 0x401085
void sub_401085()
{
    [D] Unsupported jumpkind Ijk_SigTRAP at address 4198533()
}


// Function: sub_401086 at 0x401086
void sub_401086()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x401090
extern unsigned long long __TMC_END__;

unsigned long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: sub_4010b9 at 0x4010b9
void sub_4010b9()
{
    register_tm_clones();
    return;
}


// Function: register_tm_clones at 0x4010c0

unsigned long long register_tm_clones()
{
    return 0;
}


// Function: sub_4010f9 at 0x4010f9
void sub_4010f9()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x401100
extern char __TMC_END__;
extern unsigned long long __dso_handle;
extern unsigned long long g_404ff0;

unsigned long long __do_global_dtors_aux()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    if (__TMC_END__)
        return v2;
    if (g_404ff0)
        __cxa_finalize(__dso_handle);
    v1 = deregister_tm_clones();
    __TMC_END__ = 1;
    return v1;
}


// Function: sub_401135 at 0x401135
void sub_401135()
{
}


// Function: sub_401139 at 0x401139
void sub_401139()
{
    frame_dummy();
    return;
}


// Function: frame_dummy at 0x401140
unsigned long long frame_dummy()
{
    return register_tm_clones();
}


// Function: sub_401149 at 0x401149
void sub_401149(unsigned long a0)
{
    process_char();
    return;
}


// Function: process_char at 0x40114c
long long process_char(unsigned int a0)
{
    return (26 <= (a0 - 65 & 255) ? a0 : a0 + 32);
}


// Function: process_short at 0x40115b
int process_short(unsigned int a0, unsigned int a1)
{
    return a0 + a1;
}


// Function: process_int at 0x40115f
int process_int(unsigned int a0)
{
    return a0 * 2 + 1;
}


// Function: process_long at 0x401165
unsigned long long process_long(unsigned long a0)
{
    return a0 * 2;
}


// Function: process_ll at 0x40116a
long long process_ll(unsigned long a0)
{
    return a0 * a0;
}


// Function: process_float at 0x401172
double process_float()
{
    int v1;  // xmm0

    return (unsigned long long)(AddV(MulV(v1, 0x3fc00000), 0x3f000000));
}


// Function: process_double at 0x401183
double process_double()
{
    int v1;  // xmm0

    return (unsigned long long)(AddV(MulV(v1, 0x3fe0000000000000), 4591870180066957722));
}


// Function: process_ld at 0x401194
void process_ld()
{
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(904:F64x8)[t4,0] = t7()
        [D] PutI(968:I8x8)[t4,0] = 0x01()
    }
    else
    {
        [D] PutI(904:F64x8)[t4,0] = t7()
        [D] PutI(968:I8x8)[t4,0] = 0x01()
    }
    [D] PutI(904:F64x8)[t3,0] = t4()
    [D] PutI(968:I8x8)[t3,0] = 0x01()
    [D] PutI(904:F64x8)[t20,0] = t23()
    [D] PutI(968:I8x8)[t20,0] = 0x01()
    [D] PutI(904:F64x8)[t30,1] = t31()
    [D] PutI(968:I8x8)[t30,1] = 0x01()
    [D] PutI(968:I8x8)[t30,0] = 0x00()
    return;
}


// Function: process_bool at 0x40119f
char process_bool(unsigned int a0)
{
    return !((char)a0 & 1) & a0 > 0;
}


// Function: const_param at 0x4011ae
int const_param(unsigned int *a0)
{
    return *(a0) + 10;
}


// Function: volatile_access at 0x4011b4
unsigned int volatile_access(unsigned int *a0)
{
    return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x4011b9
extern char g_40266f;

int test_data_types_l1()
{
    unsigned long v2;  // rsi
    unsigned int v0;  // [bp-0xc]

    puts(&g_40266f);
    printf("DT-L1-01 (process_char): %c\n", 97);
    printf("DT-L1-01 (process_char): %c\n", 98);
    printf("DT-L1-02 (process_short): %d\n", 300);
    printf("DT-L1-03 (process_int): %d\n", 11);
    printf("DT-L1-04 (process_long): %ld\n", 200);
    printf("DT-L1-05 (process_ll): %lld\n", 10000);
    printf("DT-L1-06 (process_float): %.2f\n", v2);
    printf("DT-L1-07 (process_double): %.2f\n", v2);
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(904:F64x8)[t1,0] = t4()
        [D] PutI(968:I8x8)[t1,0] = 0x01()
    }
    else
    {
        [D] PutI(904:F64x8)[t1,0] = t4()
        [D] PutI(968:I8x8)[t1,0] = 0x01()
    }
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] amd64g_dirtyhelper_storeF80le((Reference vvar_152{s-40|1b}), Reinterpret(F64->I64, [D] unsupported_<class 'pyvex.expr.GetI'>()))
        [D] PutI(968:I8x8)[t5,0] = 0x00()
    }
    else
    {
        [D] amd64g_dirtyhelper_storeF80le((Reference vvar_153{s-40|1b}), Reinterpret(F64->I64, nan<64>))
        [D] PutI(968:I8x8)[t5,0] = 0x00()
    }
    printf("DT-L1-08 (process_ld): %.2Lf\n");
    printf("DT-L1-09 (process_bool): %d\n", 1);
    printf("DT-L1-09 (process_bool): %d\n", 0);
    printf("DT-L1-09 (process_bool): %d\n", 0);
    printf("DT-L1-10 (const_param): %d\n", 15);
    v0 = 10;
    return printf("DT-L1-11 (volatile_access): %d\n", v0 * 2);
}


// Function: array_1d_stack at 0x4012e2
unsigned long long array_1d_stack(unsigned long ptr, unsigned long a1)
{
    unsigned long long i;  // rdx
    unsigned long long v2;  // rax

    if ((unsigned int)a1 <= 0)
        return 0;
    i = 0;
    v2 = 0;
    do
    {
        v2 = (unsigned int)v2 + *((int *)(ptr + i * 4));
        i += 1;
    } while ((a1 & 4294967295) != i);
    return v2;
}


// Function: array_string at 0x4012fb
long long array_string(char *a0)
{
    unsigned int v1;  // eax
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    v1 = 4294967295;
    do
    {
        v3 = v1 + 1;
        v1 = v3;
        a0 += 1;
    } while (*(a0));
    return v2 + 1;
}


// Function: array_2d_stack at 0x40130c
unsigned long long array_2d_stack(unsigned long a0)
{
    unsigned long long i;  // rcx
    unsigned long long v2;  // rax

    i = 0;
    v2 = 0;
    do
    {
        v2 = (unsigned int)v2 + *((int *)(a0 + i));
        i += 44;
    } while (i != 440);
    return v2;
}


// Function: array_3d at 0x401321
unsigned long long array_3d(unsigned long long a0)
{
    unsigned long long i;  // r8
    unsigned long long v2;  // rax
    unsigned long long j;  // rsi
    unsigned long long v4;  // rdx
    unsigned long long ptr;  // rdx
    unsigned long long k;  // rcx

    i = 0;
    v2 = 0;
    do
    {
        j = 0;
        v4 = a0;
        do
        {
            ptr = v4;
            k = 0;
            do
            {
                v2 = (unsigned int)v2 + *((int *)(ptr + k * 4));
                k += 1;
            } while (k != 5);
            j += 1;
            v4 = ptr + 20;
        } while (j != 5);
        i += 1;
        a0 += 100;
    } while (i != 5);
    return v2;
}


// Function: array_vla at 0x401354
unsigned long long array_vla(unsigned long a0, unsigned long ptr)
{
    unsigned long long i;  // rdx
    unsigned long long v2;  // rax

    if ((unsigned int)a0 <= 0)
        return 0;
    i = 0;
    v2 = 0;
    do
    {
        v2 = (unsigned int)v2 + *((int *)(ptr + i * 4));
        i += 1;
    } while ((a0 & 4294967295) != i);
    return v2;
}


// Function: array_pointer at 0x40136d
unsigned long long array_pointer(unsigned long a0, unsigned int a1)
{
    unsigned long long i;  // rdx
    unsigned long long v2;  // rax

    if (a1 <= 0)
        return 0;
    i = 0;
    v2 = 0;
    do
    {
        v2 = (unsigned int)v2 + *((int *)(a0 + i));
        i += 40;
    } while (a1 * 40 != i);
    return v2;
}


// Function: pointer_array at 0x40138f
unsigned long long pointer_array(unsigned long a0, unsigned int a1)
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // rax

    if (a1 <= 0)
        return 0;
    v1 = 0;
    v2 = 0;
    do
    {
        if (*((long long *)(a0 + v1 * 8)))
            v2 = (unsigned int)v2 + *((int *)*((long long *)(a0 + v1 * 8)));
    } while ((v1 += 1, (a1 < 10 ? (unsigned long long)a1 : 10) != v1));
    return v2;
}


// Function: array_complex_index at 0x4013b9
unsigned long long array_complex_index(unsigned long ptr, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long a4)
{
    unsigned long long v1;  // rax

    v1 = 4294967295;
    if (a3 >= 0 && (unsigned int)a4 < a2 && a3 < (unsigned int)a1 && (unsigned int)a4 >= 0)
        v1 = *((int *)(ptr + (a1 * a4 + a3 & 4294967295) * 4));
    return v1;
}


// Function: array_oob at 0x4013de
unsigned long long array_oob(unsigned long ptr, unsigned int a1)
{
    unsigned long i;  // rcx
    unsigned long long v2;  // rax

    if (a1 < 0)
        return 0;
    i = 0;
    v2 = 0;
    do
    {
        v2 = (unsigned int)v2 + *((int *)(ptr + i * 4));
        i += 1;
    } while (a1 + 1 != i);
    return v2;
}


// Function: test_array_types at 0x4013f7
extern char g_402690;

int test_array_types()
{
    unsigned long long i;  // rbx
    char *iter;  // rax
    int v25;  // xmm5
    uint128_t v26;  // xmm5
    unsigned long long j;  // rax
    unsigned int v28;  // esi
    unsigned long long k;  // rbx
    char *v30;  // rax
    char *cur;  // rcx
    unsigned long long i1;  // rdx
    unsigned long long pos;  // rsi
    unsigned long long l;  // rax
    char *v35;  // rcx
    unsigned int v36;  // esi
    unsigned long long i2;  // rdi
    char *v38;  // rdx
    char *ptr;  // rdx
    unsigned long long off;  // rbx
    unsigned long long idx;  // rbx
    unsigned long long n;  // rax
    uint256_t v18;  // ymm5
    unsigned int v44;  // esi
    unsigned long long index;  // rbx
    char p[4];  // rax
    unsigned long long v47;  // rsi
    unsigned long long idx4;  // rdx
    uint128_t v20;  // xmm4
    uint128_t v21;  // xmm5
    int v22;  // xmm5
    int v23;  // xmm6
    int v24;  // xmm5
    unsigned int v0;  // [bp-0x514]
    unsigned int v1;  // [bp-0x510]
    unsigned int v3;  // [bp-0x50c]
    char *v4;  // [bp-0x508]
    char *v5;  // [bp-0x500]
    char *v6;  // [bp-0x4f8]
    char v7;  // [bp-0x4f0]
    uint128_t v8;  // [bp-0x4b8]
    uint128_t v9;  // [bp-0x4a8]
    uint128_t v10;  // [bp-0x498]
    uint128_t v11;  // [bp-0x488]
    uint128_t v12;  // [bp-0x478]
    unsigned long v48;  // [bp-0x468]
    unsigned int v49;  // [bp-0x398]
    char v13;  // [bp-0x394]
    char v14;  // [bp-0x208]

    puts(&g_402690);
    i = 0;
    printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
    printf("ARR-L1-02 (array_string): %d\n", 5);
    iter = &v13;
    do
    {
        idx4 = 0;
        v20 = 0x10000000000000000;
        do
        {
            v21 = v20;
            v22 = v21 ^ 0x80000000800000008000000080000000;
            v23 = CmpGTV(170141183500083313182510285288753856522, v22);
            v24 = CmpEQV(v22, 170141183500083313182510285288753856522);
            v25 = (unsigned int)(v23 >> 96) CONCAT (unsigned int)(v23 >> 96) CONCAT (unsigned int)((unsigned long long)v23 >> 32) CONCAT (unsigned int)((unsigned long long)v23 >> 32);
            v26 = v25 | ((unsigned int)(v24 >> 96) CONCAT (unsigned int)(v24 >> 96) CONCAT (unsigned int)((unsigned long long)v24 >> 32) CONCAT (unsigned int)((unsigned long long)v24 >> 32)) & v23;
            v18 = ((((v18 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v21) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v22) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v24) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v25) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26;
            if (((char)v18 & 1))
                *((unsigned int *)&iter[4 + 4 * idx4]) = (i == idx4 ? (unsigned int)i : 0);
            if (((char)(v26 >> 64) & 1))
                *((unsigned int *)&iter[4 * idx4]) = (i - 1 == idx4 ? (unsigned int)i : 0);
            idx4 += 2;
            v20 = AddV(v20, 36893488147419103234);
        } while (idx4 != 10);
        i += 1;
        iter += 40;
    } while (i != 10);
    j = 0;
    v28 = 0;
    do
    {
        v28 += *((int *)((char *)&v49 + j));
        j += 44;
    } while (j != 440);
    k = 0;
    printf("ARR-L1-03 (array_2d_stack): %d\n", v28);
    v30 = &v14;
    do
    {
        cur = v30;
        i1 = 0;
        do
        {
            pos = 0;
            do
            {
                *((unsigned int *)&cur[4 * pos]) = 1;
                pos += 1;
            } while (pos != 5);
            i1 += 1;
            cur += 20;
        } while (i1 != 5);
        k += 1;
        v30 += 100;
    } while (k != 5);
    l = 0;
    v35 = &v14;
    v36 = 0;
    do
    {
        i2 = 0;
        v38 = v35;
        do
        {
            ptr = v38;
            off = 0;
            do
            {
                v36 += *((int *)&ptr[4 * off]);
                off += 1;
            } while (off != 5);
            i2 += 1;
            v38 = ptr + 20;
        } while (i2 != 5);
        l += 1;
        v35 += 100;
    } while (l != 5);
    idx = 0;
    printf("ARR-L1-04 (array_3d): %d\n", v36);
    printf("ARR-L2-01 (array_vla): %d\n", 60);
    do
    {
        *((unsigned int *)((char *)&v48 + 4 * idx)) = idx;
        idx += 10;
    } while (idx != 50);
    n = 0;
    v44 = 0;
    do
    {
        v44 += *((int *)((char *)&v48 + n));
        n += 40;
    } while (n != 200);
    index = 0;
    printf("ARR-L2-02 (array_pointer): %d\n", v44);
    p = &v3;
    v3 = 10;
    v1 = 20;
    v0 = 30;
    v4 = &v3;
    v5 = &v1;
    v6 = &v0;
    memset(&v7, 0, 56);
    v47 = 0;
    while (true)
    {
        if (p)
            v47 = (unsigned long long)((unsigned int)v47 + *(p));
        if (index == 2)
            break;
        p = (&v5)[index];
        index += 1;
    }
    printf("ARR-L2-03 (pointer_array): %d\n", v47);
    v8 = 0x3000000020000000100000000;
    v9 = 554597137710530827618539798532;
    v10 = 871509787841375154304733675528;
    v11 = 1188422437972219480990927552524;
    v12 = 1505335088103063807677121429520;
    return printf("ARR-L2-04 (array_complex_index): %d\n", *((int *)((char *)&v12 + 4)));
}


// Function: ptr_single at 0x4016a5
int ptr_single(unsigned int *a0)
{
    return *(a0) + 10;
}


// Function: ptr_double at 0x4016ab
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int ptr_double(struct_0 **a0)
{
    return *(a0)->field_0 + 5;
}


// Function: ptr_triple at 0x4016b4
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


// Function: ptr_increment at 0x4016bf
unsigned long long ptr_increment(unsigned long ptr, unsigned int i)
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // rax

    if (i <= 0)
        return 0;
    v1 = 0;
    v2 = 0;
    do
    {
        v2 = (unsigned int)v2 + *((int *)(ptr + v1 * 4));
        v1 += 1;
    } while (i != (unsigned int)v1);
    return v2;
}


// Function: ptr_offset at 0x4016d7
int ptr_offset(unsigned long a0, unsigned int a1)
{
    return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x4016de
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
    return a0 - a1 >> 2;
}


// Function: ptr_void at 0x4016e9
unsigned long long ptr_void(void* a0, unsigned int a1)
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


// Function: ptr_const at 0x4016fe
unsigned int ptr_const(unsigned int *a0)
{
    return *(a0) * 2;
}


// Function: ptr_const_ptr at 0x401703
int ptr_const_ptr(unsigned int *ptr)
{
    *(ptr) = *(ptr) + 5;
    return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x40170b
long long ptr_func_simple(unsigned long a0, unsigned long a1)
{
    goto a0;
}


// Function: ptr_func_complex at 0x401712
extern uint128_t g_404de0;

long long ptr_func_complex(unsigned long long *a0, unsigned long a1)
{
    int v0;  // [bp-0x18]

    *((uint128_t *)&v0) = g_404de0;
    return a0(a1, &v0);
}


// Function: ptr_cast at 0x401733
int ptr_cast(unsigned int *a0)
{
    return *(a0);
}


// Function: opaque_handle_create at 0x401736
int opaque_handle_create(unsigned int a0)
{
    return a0;
}


// Function: opaque_handle_op at 0x40173a
unsigned int opaque_handle_op(unsigned int a0)
{
    return a0 * 2;
}


// Function: test_pointer_types at 0x40173e
extern char g_4026ab;

int test_pointer_types()
{
    puts(&g_4026ab);
    printf("PTR-L2-01 (ptr_single): %d\n", 15);
    printf("PTR-L2-02 (ptr_double): %d\n", 15);
    printf("PTR-L2-03 (ptr_triple): %d\n", 6);
    printf("PTR-L2-04 (ptr_increment): %d\n", 15);
    printf("PTR-L2-05 (ptr_offset): %d\n", 30);
    printf("PTR-L2-06 (ptr_diff): %d\n", 4);
    printf("PTR-L2-07 (ptr_void): %d\n", 42);
    printf("PTR-L2-07 (ptr_void): %d\n", 65);
    printf("PTR-L2-08 (ptr_const): %d\n", 20);
    printf("PTR-L2-09 (ptr_const_ptr): %d\n", 15);
    printf("PTR-L2-10 (ptr_func_simple): %d\n", 10);
    printf("PTR-L2-11 (ptr_func_complex): %d\n", 1);
    printf("PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
    return printf("PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


// Function: struct_simple at 0x401855
int struct_simple(unsigned int *a0)
{
    return a0[1] + *(a0) + a0[2];
}


// Function: struct_array at 0x40185e
unsigned long long struct_array(unsigned long a0, unsigned int a1)
{
    unsigned long long i;  // rdx
    unsigned long long v2;  // rax

    if (a1 <= 0)
        return 0;
    i = 0;
    v2 = 0;
    do
    {
        v2 = (unsigned int)v2 + *((int *)(a0 + i)) + *((int *)(a0 + i + 4)) + *((int *)(a0 + i + 8));
        i += 12;
    } while (a1 * 12 != i);
    return v2;
}


// Function: struct_nested at 0x401888
int struct_nested(unsigned int *a0)
{
    return a0[3] + *(a0);
}


// Function: struct_deep at 0x40188e
int struct_deep(unsigned int *a0)
{
    return a0[5] + a0[2];
}


// Function: struct_with_ptr at 0x401895
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int struct_with_ptr(struct_0 *a0)
{
    return (!a0->field_8 ? 0 : a0->field_8->field_0) + a0->field_0;
}


// Function: struct_bitfields at 0x4018a9
int struct_bitfields(unsigned short *ptr)
{
    unsigned short v1;  // ax

    v1 = *(ptr);
    return (v1 >> 6) + (v1 & 1) + (v1 >> 1 & 3) + (v1 >> 3 & 7);
}


// Function: union_type at 0x4018ca
int union_type(void* a0, unsigned int a1)
{
    if (a1 == 1)
    {
        return *((int *)a0);
    }
    else if (!a1)
    {
        return *((int *)a0);
    }
    else
    {
        return *((char *)a0);
    }
}


// Function: union_array at 0x4018df
unsigned long long union_array(unsigned long ptr, unsigned long a1)
{
    unsigned long long i;  // rdx
    unsigned long long v2;  // rax

    if ((unsigned int)a1 <= 0)
        return 0;
    i = 0;
    v2 = 0;
    do
    {
        v2 = (unsigned int)v2 + *((int *)(ptr + i * 4));
        i += 1;
    } while ((a1 & 4294967295) != i);
    return v2;
}


// Function: enum_type at 0x4018f8
unsigned int enum_type(unsigned int a0)
{
    return a0 * 10;
}


// Function: enum_switch at 0x4018fe
extern unsigned int g_4020d0[4];

unsigned long long enum_switch(unsigned int a0)
{
    unsigned long long v1;  // rax

    v1 = 4294967197;
    if (a0 <= 3)
        v1 = g_4020d0[a0];
    return v1;
}


// Function: struct_func_ptr at 0x401916
typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

long long struct_func_ptr(struct_0 *a0)
{
    goto a0->field_8;
}


// Function: linked_list at 0x40191e
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
} struct_0;

unsigned long long linked_list(struct_0 *cur)
{
    unsigned long long v1;  // rax

    for (v1 = 0; cur; cur = cur->field_8)
    {
        v1 = (unsigned int)v1 + cur->field_0;
    }
    return v1;
}


// Function: doubly_linked_list at 0x40192e
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
} struct_0;

unsigned long long doubly_linked_list(struct_0 *cur)
{
    unsigned long long v1;  // rax

    for (v1 = 0; cur; cur = cur->field_8)
    {
        v1 = (unsigned int)v1 + cur->field_0;
    }
    return v1;
}


// Function: binary_tree_sum at 0x40193e
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    struct struct_0 *field_10;
} struct_0;

unsigned int binary_tree_sum(struct_0 *a0)
{
    unsigned long long v2;  // rax
    unsigned int v3;  // ebx
    struct_0 *ptr;  // r14
    unsigned int v5;  // eax
    struct_0 *v6;  // r14
    unsigned long long v0;  // [bp-0x18]

    v0 = v2;
    if (!a0)
        return 0;
    v3 = 0;
    do
    {
        ptr = a0;
        v5 = binary_tree_sum(ptr->field_8);
        v6 = ptr->field_10;
        v3 = v3 + ptr->field_0 + v5;
        a0 = v6;
    } while (ptr->field_10);
    return v3;
}


// Function: binary_tree at 0x401971
int binary_tree(void* a0)
{
    return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x401976
typedef struct struct_1 {
    struct struct_0 *field_0;
    char padding_8[72];
    unsigned int field_50;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
} struct_0;

unsigned long long graph_traverse(struct_1 *ptr)
{
    unsigned long v1;  // rcx
    unsigned long index;  // rdx
    unsigned long long v3;  // rax
    unsigned long cur;  // rsi

    v1 = ptr->field_50;
    if ((unsigned int)v1 <= 0)
        return 0;
    index = 0;
    v3 = 0;
    do
    {
        for (cur = (&ptr->field_0)[index]; cur; cur = *((long long *)(cur + 8)))
        {
            v3 = (unsigned int)v3 + *((int *)cur);
        }
        index += 1;
    } while (index != v1);
    return v3;
}


// Function: test_composite_types at 0x40199e
typedef struct struct_0 {
    char field_0[4];
    char padding_4[4];
    struct struct_0 *field_8;
} struct_0;

typedef struct struct_1 {
    char field_0[4];
    char padding_4[4];
    struct struct_1 *field_8;
} struct_1;

typedef struct struct_2 {
    char field_0[4];
    char padding_4[4];
    struct struct_2 *field_8;
} struct_2;

extern char g_4026c6;

int test_composite_types()
{
    unsigned int v20;  // ebp
    struct_0 *ptr;  // rax
    unsigned int v23;  // ebx
    struct_1 *p;  // rax
    unsigned long long idx;  // rbp
    struct_2 *cur;  // rax
    unsigned long long v29;  // rsi
    char *v0;  // [bp-0x100]
    char v1;  // [bp-0xf8]
    uint128_t flag3;  // [bp-0xa8]
    char v4;  // [bp-0x98], Other Possible Types: unsigned int
    char *v5;  // [bp-0x90]
    char v6;  // [bp-0x88], Other Possible Types: unsigned int
    char *v7;  // [bp-0x80]
    char v8;  // [bp-0x78], Other Possible Types: unsigned int
    unsigned long long flag2;  // [bp-0x70]
    uint128_t v10;  // [bp-0x68]
    unsigned long long flag4;  // [bp-0x58]
    unsigned int v13;  // [bp-0x48]
    char *v14;  // [bp-0x40]
    unsigned long long result;  // [bp-0x38]
    unsigned int v16;  // [bp-0x30]
    unsigned long long flag1;  // [bp-0x28]
    char *v18;  // [bp-0x20]

    puts(&g_4026c6);
    v20 = 0;
    printf("CMP-L2-01 (struct_simple): %d\n", 6);
    printf("CMP-L2-02 (struct_array): %d\n", 9);
    printf("CMP-L2-03 (struct_nested): %d\n", 105);
    printf("CMP-L2-04 (struct_deep): %d\n", 258);
    printf("CMP-L2-05 (struct_with_ptr): %d\n", 30);
    printf("CMP-L2-06 (struct_bitfields): %d\n", 106);
    printf("CMP-L2-07 (union_type): %d\n", 305419896);
    printf("CMP-L2-08 (union_array): %d\n", 60);
    printf("CMP-L2-09 (enum_type): %d\n", 10);
    printf("CMP-L2-10 (enum_switch): %d\n", 50);
    printf("CMP-L2-11 (struct_func_ptr): %d\n", 21);
    ptr = &v4;
    v4 = 10;
    v5 = &v6;
    v6 = 20;
    v7 = &v8;
    v8 = 30;
    flag2 = 0;
    do
    {
        v20 += ptr->field_0;
        ptr = ptr->field_8;
    } while (ptr->field_8);
    v23 = 0;
    printf("CMP-L2-12 (linked_list): %d\n", v20);
    p = &v13;
    v13 = 10;
    result = 0;
    v16 = 20;
    flag1 = 0;
    v18 = &v13;
    v14 = &v16;
    do
    {
        v23 += p->field_0;
        p = p->field_8;
    } while (p->field_8);
    idx = 0;
    printf("CMP-L2-13 (doubly_linked_list): %d\n", v23);
    flag4 = 0;
    v10 = 100;
    printf("CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(&v10) & 4294967295);
    cur = &flag3;
    flag3 = 1;
    memset(&v1, 0, 80);
    v0 = &flag3;
    while (true)
    {
        for (v29 = 0; cur; cur = cur->field_8)
        {
            v29 = (unsigned long long)((unsigned int)v29 + cur->field_0);
        }
        idx += 1;
        if (idx == 2)
            break;
        cur = (&v0)[idx];
    }
    return printf("CMP-L2-15 (graph_traverse): %d\n", v29);
}


// Function: main at 0x401bbc
unsigned int main()
{
    unsigned long long v2;  // rax
    unsigned long long v0;  // [bp-0x8]

    v0 = v2;
    test_data_types_l1();
    test_array_types();
    test_pointer_types();
    test_composite_types();
    return 0;
}


// Function: _fini at 0x401bd8
void _fini()
{
    return;
}

