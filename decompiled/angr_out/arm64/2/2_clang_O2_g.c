// Angr Decompilation of 2_clang_O2_g
// Platform: AARCH64

// Function: _init at 0x400608
void _init()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    call_weak_fn();
    return;
}


// Function: $x at 0x400620
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


// Function: sub_400634 at 0x400634
long long sub_400634()
{
    __libc_start_main(); /* do not return */
}


// Function: _start at 0x4006c0
long long _start(unsigned long long a0)
{
    unsigned long v0;  // [bp+0x0]
    char v1;  // [bp+0x8]

    __libc_start_main(main, v0, &v1, 0, 0, a0, &v0); /* do not return */
}


// Function: sub_4006f0 at 0x4006f0
void sub_4006f0()
{
    abort(); /* do not return */
}


// Function: call_weak_fn at 0x4006f4
extern unsigned long long g_413fd0;

unsigned long long call_weak_fn()
{
    unsigned long long v0;  // x0

    if (!g_413fd0)
        return 0;
    v0 = __gmon_start__(g_413fd0);
    return __gmon_start__(g_413fd0);
}


// Function: sub_400708 at 0x400708
void sub_400708()
{
    deregister_tm_clones();
    return;
}


// Function: deregister_tm_clones at 0x400710
extern char __TMC_END__;

long long deregister_tm_clones()
{
    return &__TMC_END__;
}


// Function: register_tm_clones at 0x400740
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


// Function: sub_40077c at 0x40077c
void sub_40077c()
{
    __do_global_dtors_aux();
    return;
}


// Function: __do_global_dtors_aux at 0x400780
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


// Function: sub_4007c8 at 0x4007c8
long long sub_4007c8()
{
    unsigned long long v0;  // x0

    v0 = frame_dummy();
    return frame_dummy();
}


// Function: frame_dummy at 0x4007d0
unsigned long long frame_dummy()
{
    unsigned long long v0;  // x0

    v0 = register_tm_clones();
    return register_tm_clones();
}


// Function: process_char at 0x4007d4
long long process_char(unsigned int a0)
{
    if ((a0 - 65 & 255) >= 26)
        return a0;
    return a0 + 32;
}


// Function: process_short at 0x4007ec
int process_short(unsigned int a0, unsigned int a1)
{
    return a1 + a0;
}


// Function: process_int at 0x4007f4
unsigned int process_int(unsigned int a0)
{
    return 1 | __ROL__(a0, 1) & 4294967294;
}


// Function: process_long at 0x400804
unsigned long long process_long(unsigned long a0)
{
    return __ROL__(a0, 1) & 18446744073709551614;
}


// Function: process_ll at 0x40080c
long long process_ll(unsigned long a0)
{
    return a0 * a0;
}


// Function: process_float at 0x400814
long long process_float()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: process_double at 0x400824
long long process_double()
{
    unsigned long v0;  // x0

    return v0;
}


// Function: process_ld at 0x40083c
void process_ld()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    __addtf3(__multf3());
    return;
}


// Function: process_bool at 0x40085c
long long process_bool(unsigned int a0)
{
    unsigned int v0;  // w8
    unsigned int v1;  // w9

    if (a0 <= 0)
        v0 = 0;
    else
        v0 = 1;
    if ((char)arm64g_calculate_condition(25, (unsigned long long)(a0 & 1), 0, 0))
        v1 = 0;
    else
        v1 = 1;
    return v0 & v1;
}


// Function: const_param at 0x400874
int const_param(unsigned int *a0)
{
    return *(a0) + 10;
}


// Function: volatile_access at 0x400880
unsigned int volatile_access(unsigned int *a0)
{
    return *(a0) * 2;
}


// Function: test_data_types_l1 at 0x400890
extern char g_4031ef;

int test_data_types_l1()
{
    char *v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x4]
    char v2;  // [bp+0x0]

    v0 = &v2;
    puts(&g_4031ef);
    printf("DT-L1-01 (process_char): %c\n", 97);
    printf("DT-L1-01 (process_char): %c\n", 98);
    printf("DT-L1-02 (process_short): %d\n", 300);
    printf("DT-L1-03 (process_int): %d\n", 11);
    printf("DT-L1-04 (process_long): %ld\n", 200);
    printf("DT-L1-05 (process_ll): %lld\n", 10000);
    printf("DT-L1-06 (process_float): %.2f\n", 10000);
    printf("DT-L1-07 (process_double): %.2f\n", 10000);
    printf("DT-L1-08 (process_ld): %.2Lf\n");
    printf("DT-L1-09 (process_bool): %d\n", 1);
    printf("DT-L1-09 (process_bool): %d\n", 0);
    printf("DT-L1-09 (process_bool): %d\n", 0);
    printf("DT-L1-10 (const_param): %d\n", 15);
    v1 = 10;
    return printf("DT-L1-11 (volatile_access): %d\n", v1 * 2);
}


// Function: array_1d_stack at 0x4009a4
unsigned long long array_1d_stack(unsigned long a0, unsigned int a1)
{
    unsigned long v0;  // x9
    unsigned long long v1;  // x10
    unsigned long long v2;  // x8
    unsigned long long i;  // x11
    unsigned long long v5;  // d0
    unsigned int *ptr;  // x11
    unsigned long long j;  // x9

    if (a1 < 1)
        return 0;
    v0 = a1;
    if (8 > a1)
    {
        v1 = 0;
        v2 = 0;
    }
    else
    {
        v1 = v0 & 0xfffffff8;
        i = v1;
        do
        {
            i -= 8;
        } while (i != 8);
        v5 = [D] unsupported_Iop_ZeroHI96ofV128();
        if (v1 == v0)
            return v5 & 4294967295;
    }
    ptr = a0 + v1 * 4;
    j = v0 - v1;
    do
    {
        v2 += *(ptr);
        j -= 1;
        ptr += 1;
    } while (j != 1);
    return v2 & 4294967295;
}


// Function: array_string at 0x400a2c
unsigned int array_string(char *a0)
{
    unsigned int v0;  // w0
    unsigned int v1;  // w0
    unsigned int v3;  // w0

    v0 = 4294967295;
    do
    {
        v3 = v0 + 1;
        a0 += 1;
        v0 = v3;
    } while (*(a0));
    return v1 + 1;
}


// Function: array_2d_stack at 0x400a44
int array_2d_stack(unsigned int *a0)
{
    return a0[99] + a0[88] + a0[77] + a0[66] + a0[55] + a0[44] + a0[33] + a0[22] + a0[11] + *(a0);
}


// Function: array_3d at 0x400a94
int array_3d(unsigned int *a0)
{
    unsigned int v0;  // s0
    unsigned int v1;  // s4
    unsigned int v2;  // s2
    unsigned int v3;  // s1
    unsigned int v4;  // s0

    v0 = [D] unsupported_Iop_ZeroHI96ofV128();
    v1 = [D] unsupported_Iop_ZeroHI96ofV128();
    v2 = [D] unsupported_Iop_ZeroHI96ofV128();
    v3 = [D] unsupported_Iop_ZeroHI96ofV128();
    v4 = [D] unsupported_Iop_ZeroHI96ofV128();
    return v4 + a0[100] + v3 + a0[75] + v2 + a0[50] + v1 + a0[25] + v0 + *(a0);
}


// Function: array_vla at 0x400bcc
unsigned long long array_vla(unsigned int a0, unsigned long a1)
{
    unsigned long v0;  // x8
    unsigned long long v1;  // x9
    unsigned long long v2;  // x0
    unsigned long long i;  // x11
    unsigned int *ptr;  // x10
    unsigned long long j;  // x8
    unsigned int *v7;  // x10
    unsigned long long v8;  // x8

    if (a0 < 1)
        return 0;
    v0 = a0;
    if (8 > a0)
    {
        v1 = 0;
        v2 = 0;
    }
    else
    {
        v1 = v0 & 0xfffffff8;
        i = v1;
        do
        {
            i -= 8;
        } while (i != 8);
        v2 = [D] unsupported_Iop_ZeroHI96ofV128();
        if (v1 == v0)
            return v2;
    }
    ptr = a1 + v1 * 4;
    j = v0 - v1;
    do
    {
        v7 = ptr + 1;
        v8 = j - 1;
        v2 += *(ptr);
        j = v8;
        ptr = v7;
    } while (j != 1);
    return v2;
}


// Function: array_pointer at 0x400c50
unsigned long long array_pointer(unsigned int *a0, unsigned int a1)
{
    unsigned long v0;  // x9
    unsigned long long v1;  // x10
    unsigned int *p;  // x11
    unsigned long long v2;  // x8
    unsigned long long v3;  // x8
    unsigned long long v4;  // x11
    unsigned long long i;  // x12
    unsigned int ptr[11];  // x13
    unsigned long long j;  // x9

    if (a1 < 1)
        return 0;
    v0 = a1;
    if (a1 == 1)
    {
        v1 = 0;
        v2 = 0;
    }
    else
    {
        v1 = v0 & 4294967294;
        v3 = 0;
        v4 = 0;
        i = v1;
        ptr = a0;
        do
        {
            v3 += ptr[0];
            v4 += ptr[10];
            i -= 2;
            ptr = &ptr[1 + 9];
        } while (i != 2);
        v2 = v4 + v3;
        if (v1 == v0)
            return v4 + v3 & 4294967295;
    }
    j = v0 - v1;
    p = &a0[10 * v1];
    do
    {
        v2 += *(p);
        j -= 1;
        p += 10;
    } while (j != 1);
    return v2 & 4294967295;
}


// Function: pointer_array at 0x400cd8
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

unsigned long long pointer_array(struct_0 **a0, unsigned int a1)
{
    unsigned long long v0;  // x0
    unsigned long v1;  // x9
    unsigned long v2;  // x9
    unsigned long v3;  // x9

    if (a1 < 1)
        return 0;
    v0 = 0;
    if (a1 < 10)
        v1 = a1;
    else
        v1 = 10;
    do
    {
        v2 = v1;
        if (*(a0))
            v0 += *(a0)->field_0;
    } while ((a0 += 8, v3 = v2 - 1, v1 = v2 - 1, v2 != 1));
    return v0;
}


// Function: array_complex_index at 0x400d20
unsigned long long array_complex_index(unsigned long ptr, unsigned int a1, unsigned int a2, unsigned long a3, unsigned long a4)
{
    unsigned long long v0;  // x0

    if (((char)(a3 >> 31) & 1))
        return 4294967295;
    v0 = 4294967295;
    if (a2 > (unsigned int)a4 && a1 > (unsigned int)a3 && !((char)(a4 >> 31) & 1))
        v0 = *((int *)(ptr + ((unsigned int)a3 + a1 * (unsigned int)a4) * 4));
    return v0;
}


// Function: array_oob at 0x400d54
unsigned long long array_oob(unsigned long a0, unsigned long a1)
{
    unsigned long v0;  // x9
    unsigned long long v1;  // x10
    unsigned long long v2;  // x8
    unsigned long long i;  // x11
    unsigned long long v5;  // d0
    unsigned int *ptr;  // x11
    unsigned long long j;  // x9

    if (((char)(a1 >> 31) & 1))
        return 0;
    v0 = (unsigned int)a1 + 1;
    if (7 > (unsigned int)a1)
    {
        v1 = 0;
        v2 = 0;
    }
    else
    {
        v1 = v0 & 0xfffffff8;
        i = v1;
        do
        {
            i -= 8;
        } while (i != 8);
        v5 = [D] unsupported_Iop_ZeroHI96ofV128();
        if (v1 == v0)
            return v5 & 4294967295;
    }
    ptr = a0 + v1 * 4;
    j = v0 - v1;
    do
    {
        v2 += *(ptr);
        j -= 1;
        ptr += 1;
    } while (j != 1);
    return v2 & 4294967295;
}


// Function: test_array_types at 0x400dd8
extern char g_403210;

int test_array_types()
{
    uint128_t v67;  // q0
    uint128_t v0;  // [bp-0x3d0]
    uint128_t v1;  // [bp-0x3c0]
    uint128_t v2;  // [bp-0x3b0]
    uint128_t v3;  // [bp-0x3a0]
    uint128_t v4;  // [bp-0x390]
    uint128_t v5;  // [bp-0x380]
    unsigned int result;  // [bp-0x370]
    uint128_t v7;  // [bp-0x36c]
    uint128_t v8;  // [bp-0x35c]
    uint128_t v9;  // [bp-0x34c]
    uint128_t v10;  // [bp-0x33c]
    uint128_t v11;  // [bp-0x32c]
    uint128_t v12;  // [bp-0x31c]
    unsigned int flag2;  // [bp-0x30c]
    uint128_t v14;  // [bp-0x308]
    uint128_t v15;  // [bp-0x2f8]
    uint128_t v16;  // [bp-0x2e8]
    uint128_t v17;  // [bp-0x2d8]
    uint128_t v18;  // [bp-0x2c8]
    uint128_t v19;  // [bp-0x2b8]
    unsigned int flag1;  // [bp-0x2a8]
    uint128_t v21;  // [bp-0x2a4]
    uint128_t v22;  // [bp-0x294]
    uint128_t v23;  // [bp-0x284]
    uint128_t v24;  // [bp-0x274]
    uint128_t v25;  // [bp-0x264]
    uint128_t v26;  // [bp-0x254]
    unsigned int flag3;  // [bp-0x244]
    uint128_t v28;  // [bp-0x240]
    uint128_t v29;  // [bp-0x230]
    uint128_t v30;  // [bp-0x220]
    uint128_t v31;  // [bp-0x210]
    uint128_t v32;  // [bp-0x200]
    uint128_t v33;  // [bp-0x1f0]
    unsigned int flag4;  // [bp-0x1e0]
    unsigned long long flag5;  // [bp-0x1d0]
    uint128_t flag7;  // [bp-0x1c8]
    uint128_t flag8;  // [bp-0x1b8]
    unsigned long long v38;  // [bp-0x1a8]
    uint128_t flag9;  // [bp-0x1a0]
    uint128_t flag10;  // [bp-0x190]
    unsigned long long flag6;  // [bp-0x180]
    int v42;  // [bp-0x178]
    uint128_t flag13;  // [bp-0x168]
    unsigned long long flag14;  // [bp-0x158]
    uint128_t v45;  // [bp-0x150]
    uint128_t flag11;  // [bp-0x140]
    unsigned long long flag17;  // [bp-0x130]
    uint128_t v48;  // [bp-0x128]
    uint128_t flag16;  // [bp-0x118]
    unsigned long long flag19;  // [bp-0x108]
    uint128_t v51;  // [bp-0x100]
    uint128_t flag21;  // [bp-0xf0]
    unsigned long long flag22;  // [bp-0xe0]
    uint128_t flag20;  // [bp-0xd8]
    uint128_t v55;  // [bp-0xc8]
    unsigned long long flag23;  // [bp-0xb8]
    uint128_t flag15;  // [bp-0xb0]
    uint128_t v58;  // [bp-0xa0]
    unsigned long long flag24;  // [bp-0x90]
    uint128_t flag12;  // [bp-0x88]
    uint128_t v61;  // [bp-0x78]
    unsigned long long flag25;  // [bp-0x68]
    uint128_t flag18;  // [bp-0x60]
    uint128_t v64;  // [bp-0x50]
    char *v65;  // [bp-0x40]
    char v66;  // [bp+0x0]

    v65 = &v66;
    puts(&g_403210);
    printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
    printf("ARR-L1-02 (array_string): %d\n", 5);
    flag5 = 0;
    flag6 = 0;
    v38 = 0x100000000;
    v42 = 2;
    flag7 = 0;
    v48 = 0x40000000000000000;
    v51 = 0x5000000000000000000000000;
    flag8 = 0;
    v55 = 6;
    flag9 = 0;
    flag10 = 0;
    v45 = 0x300000000;
    flag11 = 0;
    flag12 = 0;
    v61 = 0x80000000000000000;
    flag13 = 0;
    flag14 = 0;
    flag15 = 0;
    v58 = 0x700000000;
    flag16 = 0;
    flag17 = 0;
    flag18 = 0;
    v64 = 0x9000000000000000000000000;
    flag19 = 0;
    flag20 = 0;
    flag21 = 0;
    flag22 = 0;
    flag23 = 0;
    flag24 = 0;
    flag25 = 0;
    printf("ARR-L1-03 (array_2d_stack): %d\n", *((int *)((char *)&v38 + 4)) + (unsigned int)flag5 + (int)v42 + *((int *)((char *)&v45 + 4)) + *((int *)((char *)&v48 + 8)) + *((int *)((char *)&v51 + 12)) + (unsigned int)v55 + *((int *)((char *)&v58 + 4)) + *((int *)((char *)&v61 + 8)) + *((int *)((char *)&v64 + 12)));
    v67 = 4294967297 CONCAT 4294967297;
    result = 1;
    v0 = v67;
    v1 = v67;
    v2 = v67;
    v3 = v67;
    v4 = v67;
    v5 = v67;
    v7 = v67;
    v8 = v67;
    v9 = v67;
    v10 = v67;
    v11 = v67;
    v12 = v67;
    v14 = v67;
    v15 = v67;
    v16 = v67;
    v17 = v67;
    v18 = v67;
    v19 = v67;
    flag1 = 1;
    v21 = v67;
    v22 = v67;
    v23 = v67;
    v24 = v67;
    v25 = v67;
    v26 = v67;
    flag2 = 1;
    flag3 = 1;
    v28 = v67;
    v29 = v67;
    v30 = v67;
    v31 = v67;
    v32 = v67;
    v33 = v67;
    flag4 = 1;
    printf("ARR-L1-04 (array_3d): %d\n", array_3d(&v0) & 4294967295);
    printf("ARR-L2-01 (array_vla): %d\n", 60);
    printf("ARR-L2-02 (array_pointer): %d\n", 100);
    printf("ARR-L2-03 (pointer_array): %d\n", 60);
    return printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


// Function: ptr_single at 0x40101c
int ptr_single(unsigned int *a0)
{
    return *(a0) + 10;
}


// Function: ptr_double at 0x401028
typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int ptr_double(struct_0 **a0)
{
    return *(a0)->field_0 + 5;
}


// Function: ptr_triple at 0x401038
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


// Function: ptr_increment at 0x40104c
unsigned long long ptr_increment(unsigned int *a0, unsigned int a1)
{
    unsigned long v0;  // x9
    unsigned int *cur;  // x8
    unsigned long long v2;  // x10
    unsigned long long v3;  // x0
    unsigned long v4;  // x11
    unsigned long long i;  // x12
    unsigned int result;  // w8
    unsigned int *v8;  // x9
    unsigned int v9;  // w8

    v0 = a1 - 1;
    if (a1 < 1)
        return 0;
    cur = a0;
    if (7 > (unsigned int)v0)
    {
        v2 = 0;
        v3 = 0;
    }
    else
    {
        v4 = v0 + 1;
        v2 = v4 & 8589934584;
        cur = &cur[v2];
        i = v2;
        do
        {
            i -= 8;
        } while (i != 8);
        v3 = [D] unsupported_Iop_ZeroHI96ofV128();
        if (v4 == v2)
            return v3;
    }
    result = a1 - v2;
    do
    {
        v8 = cur + 1;
        v9 = result - 1;
        v3 += *(cur);
        cur = v8;
        result = v9;
    } while (result != 1);
    return v3;
}


// Function: ptr_offset at 0x4010d8
int ptr_offset(unsigned long a0, unsigned int a1)
{
    return *((int *)(a0 + a1 * 4));
}


// Function: ptr_diff at 0x4010e0
unsigned long long ptr_diff(unsigned long a0, unsigned long a1)
{
    return __ROL__(a0 - a1, 62) & 4611686018427387903;
}


// Function: ptr_void at 0x4010ec
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


// Function: ptr_const at 0x401110
unsigned int ptr_const(unsigned int *a0)
{
    return (*(a0) * 2 | *(a0) >> 31) & 4294967294;
}


// Function: ptr_const_ptr at 0x40111c
int ptr_const_ptr(unsigned int *ptr)
{
    *(ptr) = *(ptr) + 5;
    return *(ptr) + 5;
}


// Function: ptr_func_simple at 0x401130
int ptr_func_simple(unsigned long a0, unsigned long a1)
{
    goto a0;
}


// Function: ptr_func_complex at 0x40113c
extern uint128_t $d.4;

long long ptr_func_complex(unsigned long long *a0, unsigned long a1)
{
    unsigned long long v3;  // x0
    int v0;  // [bp-0x20]
    char *v1;  // [bp-0x10]
    char v2;  // [bp+0x0]

    v1 = &v2;
    *((uint128_t *)&v0) = $d.4;
    v3 = a0(a1, &v0);
    return a0(a1, &v0);
}


// Function: ptr_cast at 0x401178
int ptr_cast(unsigned int *a0)
{
    return *(a0);
}


// Function: opaque_handle_create at 0x401180
unsigned long long opaque_handle_create(unsigned long a0)
{
    return a0 * 0x100000000 >> 63 & 0xffffffff00000000 | a0 & 4294967295;
}


// Function: opaque_handle_op at 0x401188
unsigned int opaque_handle_op(unsigned int a0)
{
    return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: test_pointer_types at 0x401190
extern char g_40322b;

int test_pointer_types()
{
    char *v0;  // [bp-0x20]
    char v1;  // [bp+0x0]

    v0 = &v1;
    puts(&g_40322b);
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


// Function: struct_simple at 0x401294
int struct_simple(unsigned int *a0)
{
    return a0[1] + *(a0) + a0[2];
}


// Function: struct_array at 0x4012a8
unsigned long long struct_array(unsigned long a0, unsigned int a1)
{
    unsigned long v0;  // x9
    unsigned long long v1;  // x10
    unsigned long long v2;  // x8
    unsigned long long i;  // x8
    unsigned long long v5;  // d0
    unsigned long long j;  // x9
    unsigned int ptr[3];  // x11

    if (a1 < 1)
        return 0;
    v0 = a1;
    if (8 > a1)
    {
        v1 = 0;
        v2 = 0;
    }
    else
    {
        v1 = v0 & 0xfffffff8;
        i = v1;
        do
        {
            i -= 8;
        } while (i != 8);
        v5 = [D] unsupported_Iop_ZeroHI96ofV128();
        if (v1 == v0)
            return v5 & 4294967295;
    }
    j = v0 - v1;
    ptr = a0 + 12 * v1 + 4;
    do
    {
        v2 = ptr[1] + v2 + ptr[0] + ptr[1];
        j -= 1;
        ptr += 1;
    } while (j != 1);
    return v2 & 4294967295;
}


// Function: struct_nested at 0x401360
int struct_nested(unsigned int *a0)
{
    return a0[3] + *(a0);
}


// Function: struct_deep at 0x401370
int struct_deep(unsigned int *a0)
{
    return a0[5] + a0[2];
}


// Function: struct_with_ptr at 0x401380
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

int struct_with_ptr(struct_0 *p)
{
    unsigned int *ptr;  // x9

    ptr = p->field_8;
    if (ptr)
        ptr = *(ptr);
    return (unsigned int)ptr + p->field_0;
}


// Function: struct_bitfields at 0x401398
int struct_bitfields(unsigned short *ptr)
{
    unsigned int v0;  // w8

    v0 = *(ptr);
    return (v0 & 1) + (v0 >> 6) + (__ROL__(v0, 31) & 2147483651 & 3) + (__ROL__(v0, 29) & 3758096391 & 7);
}


// Function: union_type at 0x4013b8
long long union_type(void* a0, unsigned int a1)
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


// Function: union_array at 0x4013e0
unsigned long long union_array(unsigned long a0, unsigned int a1)
{
    unsigned long v0;  // x9
    unsigned long long v1;  // x10
    unsigned long long v2;  // x8
    unsigned long long i;  // x11
    unsigned long long v5;  // d0
    unsigned int *ptr;  // x11
    unsigned long long j;  // x9

    if (a1 < 1)
        return 0;
    v0 = a1;
    if (8 > a1)
    {
        v1 = 0;
        v2 = 0;
    }
    else
    {
        v1 = v0 & 0xfffffff8;
        i = v1;
        do
        {
            i -= 8;
        } while (i != 8);
        v5 = [D] unsupported_Iop_ZeroHI96ofV128();
        if (v1 == v0)
            return v5 & 4294967295;
    }
    ptr = a0 + v1 * 4;
    j = v0 - v1;
    do
    {
        v2 += *(ptr);
        j -= 1;
        ptr += 1;
    } while (j != 1);
    return v2 & 4294967295;
}


// Function: enum_type at 0x401468
unsigned int enum_type(unsigned int a0)
{
    return (a0 * 10 | a0 * 5 >> 31) & 4294967294;
}


// Function: enum_switch at 0x401474
extern unsigned int g_402c50[4];

unsigned long long enum_switch(unsigned int a0)
{
    if (3 < a0)
        return 4294967197;
    return g_402c50[a0];
}


// Function: struct_func_ptr at 0x401494
typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int struct_func_ptr(struct_0 *a0)
{
    goto a0->field_8;
}


// Function: linked_list at 0x4014a4
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
} struct_0;

int linked_list(struct_0 *ptr)
{
    unsigned long long v0;  // x8
    struct_0 *v1;  // x0

    v0 = 0;
    if (ptr)
    {
        do
        {
            v1 = ptr->field_8;
            v0 += ptr->field_0;
            ptr = v1;
        } while (ptr->field_8);
    }
    return v0;
}


// Function: doubly_linked_list at 0x4014c4
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
} struct_0;

int doubly_linked_list(struct_0 *ptr)
{
    unsigned long long v0;  // x8
    struct_0 *v1;  // x0

    v0 = 0;
    if (ptr)
    {
        do
        {
            v1 = ptr->field_8;
            v0 += ptr->field_0;
            ptr = v1;
        } while (ptr->field_8);
    }
    return v0;
}


// Function: binary_tree_sum at 0x4014e4
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    struct struct_0 *field_10;
} struct_0;

unsigned int binary_tree_sum(struct_0 *a0)
{
    unsigned long long v2;  // x20
    struct_0 *ptr;  // x19
    unsigned long long v4;  // x0
    struct_0 *v5;  // x19
    char *v0;  // [bp-0x30]
    char v1;  // [bp+0x0]

    v0 = &v1;
    if (!a0)
        return 0;
    v2 = 0;
    do
    {
        ptr = a0;
        v4 = binary_tree_sum(ptr->field_8);
        v5 = ptr->field_10;
        v2 = ptr->field_0 + v2 + v4;
        a0 = v5;
    } while (ptr->field_10);
    return v2;
}


// Function: binary_tree at 0x401538
int binary_tree(void* a0)
{
    return binary_tree_sum(a0);
}


// Function: graph_traverse at 0x40153c
typedef struct struct_1 {
    struct struct_0 *field_0;
    char padding_8[72];
    unsigned int field_50;
} struct_1;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_0 *field_8;
} struct_0;

unsigned int graph_traverse(struct_1 *p)
{
    unsigned long v0;  // x9
    unsigned long idx;  // x10
    unsigned long long v2;  // x8
    struct_2 *ptr;  // x11
    unsigned long v4;  // x11

    v0 = p->field_50;
    if ((unsigned int)v0 < 1)
        return 0;
    idx = 0;
    v2 = 0;
    do
    {
        ptr = (&p->field_0)[idx];
        if ((&p->field_0)[idx])
        {
            do
            {
                v4 = ptr->field_8;
                v2 += *((int *)&ptr->padding_0[0]);
                ptr = v4;
            } while (ptr->field_8);
        }
    } while ((idx += 1, idx != v0));
    return v2;
}


// Function: test_composite_types at 0x401588
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

extern char g_403246;

int test_composite_types()
{
    struct_0 *ptr;  // x8
    unsigned long long v18;  // x1
    struct_0 *v19;  // x8
    struct_1 *p;  // x8
    unsigned long long v21;  // x1
    struct_1 *v22;  // x8
    uint128_t v0;  // [bp-0xa0]
    unsigned long long flag3;  // [bp-0x90]
    unsigned int v2;  // [bp-0x80]
    char *v4;  // [bp-0x78]
    unsigned long long flag2;  // [bp-0x70]
    unsigned int v6;  // [bp-0x68]
    unsigned long long flag1;  // [bp-0x60]
    char *v8;  // [bp-0x58]
    char v9;  // [bp-0x50], Other Possible Types: unsigned int
    char *v10;  // [bp-0x48]
    unsigned int v11;  // [bp-0x40]
    char *v12;  // [bp-0x38]
    unsigned int v13;  // [bp-0x30]
    unsigned long long result;  // [bp-0x28]
    char *v15;  // [bp-0x20]
    char v16;  // [bp+0x0]

    v15 = &v16;
    puts(&g_403246);
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
    ptr = &v9;
    v18 = 0;
    v9 = 10;
    v13 = 30;
    v11 = 20;
    v10 = &v11;
    v12 = &v13;
    result = 0;
    do
    {
        v19 = ptr->field_8;
        v18 += (unsigned long long)ptr->field_0;
        ptr = v19;
    } while (ptr->field_8);
    printf("CMP-L2-12 (linked_list): %d\n", v18);
    p = &v2;
    v21 = 0;
    v2 = 10;
    v6 = 20;
    flag1 = 0;
    v8 = &v2;
    v4 = &v6;
    flag2 = 0;
    do
    {
        v22 = p->field_8;
        v21 += (unsigned long long)p->field_0;
        p = v22;
    } while (p->field_8);
    printf("CMP-L2-13 (doubly_linked_list): %d\n", v21);
    v0 = 100;
    flag3 = 0;
    printf("CMP-L2-14 (binary_tree): %d\n", binary_tree_sum(&v0) & 4294967295);
    return printf("CMP-L2-15 (graph_traverse): %d\n", 1);
}


// Function: main at 0x401738
unsigned int main()
{
    char *v0;  // [bp-0x10]
    char v1;  // [bp+0x0]

    v0 = &v1;
    test_data_types_l1();
    test_array_types();
    test_pointer_types();
    test_composite_types();
    return 0;
}


// Function: sub_40175c at 0x40175c
void sub_40175c()
{
    __addtf3();
    return;
}


// Function: __addtf3 at 0x401760
extern unsigned long long $d.16;
extern char g_800000;

unsigned long long __addtf3()
{
    unsigned long long v5;  // x4
    unsigned long long v6;  // x2
    unsigned long long flag6;  // x7
    unsigned long long result;  // x15
    unsigned int v16;  // w14
    unsigned long long iter;  // x2
    unsigned long long flag10;  // x9
    unsigned long long v19;  // x1
    unsigned long long flag9;  // x11
    unsigned long long v21;  // x0
    unsigned long v7;  // x5
    char v23;  // x4
    unsigned long long v24;  // x1
    unsigned long long v25;  // x0
    unsigned long long v26;  // x0
    unsigned long long v27;  // x9
    char v28;  // x2
    unsigned long long v29;  // x5
    unsigned long long v30;  // x0
    unsigned long long cur;  // x3
    unsigned long long v32;  // x0
    unsigned long long v8;  // x1
    unsigned long long flag8;  // x4
    unsigned long long v34;  // x9
    unsigned long long v35;  // x1
    unsigned long long flag2;  // x7
    unsigned long long flag3;  // x6
    unsigned long long v38;  // x6
    unsigned long long v39;  // x0
    unsigned int flag4;  // w4
    unsigned long long v41;  // x9
    unsigned long long v42;  // x2
    unsigned int v9;  // fpcr
    unsigned long long v43;  // x1
    unsigned long long v45;  // x1
    unsigned int v46;  // w1
    unsigned long v47;  // x1
    unsigned int v48;  // w0
    unsigned long long v50;  // x0
    unsigned long long v51;  // x3
    unsigned int v52;  // w1
    unsigned long v10;  // x16
    unsigned int v53;  // w7
    char v54;  // x1
    unsigned long long v55;  // x1
    unsigned long long v56;  // x9
    unsigned long long v57;  // x0
    char v59;  // x4
    unsigned long long v60;  // x4
    unsigned long long v61;  // x0
    unsigned long long v62;  // x0
    unsigned long long v11;  // x6
    char v63;  // x2
    unsigned long long v64;  // x5
    unsigned long long v65;  // x0
    unsigned long long v66;  // x0
    unsigned long long v67;  // x1
    unsigned int v68;  // w2
    unsigned long long v69;  // x7
    unsigned long long flag1;  // x7
    unsigned long long flag7;  // x6
    unsigned long long flag11;  // x1
    unsigned long long v12;  // x0
    unsigned long long v73;  // x4
    unsigned long long v74;  // x1
    unsigned long long v75;  // x1
    unsigned long long v76;  // x1
    unsigned long v77;  // x3
    unsigned long long v78;  // x1
    unsigned int v80;  // w2
    unsigned int v81;  // w1
    unsigned long long v83;  // x0
    unsigned long long flag5;  // x8
    char *v0;  // [bp-0x30]
    int v1;  // [bp-0x20], Other Possible Types: char
    unsigned long long v2;  // [bp-0x18]
    char v3;  // [bp-0x8]
    char v4;  // [bp+0x0]

    v0 = &v4;
    v5 = *((long long *)&v1);
    v6 = v2;
    v7 = *((long long *)&vvar_785{r336|16b});
    v8 = *((long long *)&v3);
    v10 = v9;
    v11 = __ROL__(v6, 1) & 1;
    v12 = __ROL__(v8, 1) & 1;
    cur = (v6 * 8 | v6 >> 61) & 2251799813685240 & 2251799813685247 | v5 >> 61;
    flag5 = (v6 * 0x10000 | v6 >> 48) & 18446744073709518847 & 32767;
    flag6 = (v8 * 0x10000 | v8 >> 48) & 18446744073709518847 & 32767;
    result = __ROL__(v6, 1) & 1;
    v16 = (unsigned int)result & 255;
    cur = (v8 * 8 | v8 >> 61) & 2251799813685240 & 2251799813685247 | v7 >> 61;
    iter = flag5;
    flag10 = __ROL__(v5, 3) & 18446744073709551608;
    v19 = flag6;
    flag9 = __ROL__(v7, 3) & 18446744073709551608;
    if (result != v12)
    {
        result = v12;
        v21 = flag5 - flag6;
        if ((unsigned int)v21 > 0)
        {
            if (flag6)
            {
                cur |= 0x8000000000000;
                goto LABEL_4017d8;
            }
            if (cur || flag9)
            {
                v21 = (unsigned int)v21 - 1;
                if ((unsigned int)v21 != 1)
                {
LABEL_4017d8:
                    if (iter == 32767)
                        goto LABEL_401c24;
                    if (116 >= (unsigned int)v21)
                    {
                        if (63 >= (unsigned int)v21)
                        {
                            v23 = 64 - (unsigned int)v21;
                            if (!flag9 << (v23 & 63))
                                v24 = 0;
                            else
                                v24 = 1;
                            v25 = cur << (v23 & 63) | flag9 >> ((char)v21 & 63) | v24;
                            cur -= cur >> ((char)v21 & 63);
                        }
                        else
                        {
                            if ((unsigned int)v21 != 64)
                                flag9 |= cur << ((char)(128 - (unsigned int)v21) & 63);
                            if (!flag9)
                                v26 = 0;
                            else
                                v26 = 1;
                            v25 = v26 | cur >> ((char)((unsigned int)v21 - 64) & 63);
                        }
                    }
                    else
                    {
                        if (!cur && !flag9)
                            v25 = 0;
                        else
                            v25 = 1;
                    }
                    v27 = flag10 - v25;
                    cur -= arm64g_calculate_flag_c(4, flag10, v25, 0) ^ 1;
                    goto LABEL_40182c;
                }
                else
                {
                    v27 = flag10 - flag9;
                    cur = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
                    goto LABEL_40182c;
                }
            }
            v27 = flag10;
            if (flag5 == 32767 && (cur || flag10))
            {
LABEL_401a74:
                v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                v27 = flag10;
                goto LABEL_401a80;
            }
        }
        else if (!((char)arm64g_calculate_condition(3, v21 & 4294967295, 0, 0)))
        {
            if (!flag5)
            {
                if (cur || flag10)
                {
                    v21 = ~((unsigned int)v21);
                    if ((unsigned int)v21)
                        goto LABEL_401ca8;
                    v27 = flag9 - flag10;
                    cur = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
                    iter = flag6;
                    goto LABEL_40182c;
                }
                if (flag6 != 32767)
                {
                    v27 = flag9;
                    iter = flag6;
                }
                else if (cur || flag9)
                {
                    v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                    v27 = flag9;
                    goto LABEL_401a80;
                }
                else
                {
                    goto LABEL_401d34;
                }
            }
            else
            {
                v21 = -((unsigned int)v21);
                cur |= 0x8000000000000;
LABEL_401ca8:
                if (v19 != 32767)
                {
                    if (116 >= (unsigned int)v21)
                    {
                        if (63 >= (unsigned int)v21)
                        {
                            v28 = 64 - (unsigned int)v21;
                            if (!flag10 << (v28 & 63))
                                v29 = 0;
                            else
                                v29 = 1;
                            v30 = cur << (v28 & 63) | flag10 >> ((char)v21 & 63) | v29;
                            cur -= cur >> ((char)v21 & 63);
                        }
                        else
                        {
                            if ((unsigned int)v21 != 64)
                                flag10 |= cur << ((char)(128 - (unsigned int)v21) & 63);
                            if (!flag10)
                                v32 = 0;
                            else
                                v32 = 1;
                            v30 = v32 | cur >> ((char)((unsigned int)v21 - 64) & 63);
                        }
                    }
                    else
                    {
                        if (!cur && !flag10)
                            v30 = 0;
                        else
                            v30 = 1;
                    }
                    v27 = flag9 - v30;
                    cur -= arm64g_calculate_flag_c(4, flag9, v30, 0) ^ 1;
                    iter = v19;
LABEL_40182c:
                    flag8 = cur & 2251799813685247;
                    if ((cur >> 51 & 1))
                        goto LABEL_401834;
                }
                else
                {
                    if (!cur && !flag9)
                        return v21;
                    v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                    v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                    v35 = __ROL__(cur, 61) & 2305843009213693951;
                    goto LABEL_401c44;
                    goto LABEL_401c44;
                }
            }
        }
        else
        {
            if (!((char)arm64g_calculate_condition(26, flag5 + 1 & 32766, 0, 0)))
            {
                flag2 = cur | flag10;
                flag3 = cur | flag9;
                if (!flag5)
                {
                    if (!flag2)
                    {
                        if (!flag3)
                            goto LABEL_4020a0;
                        v27 = flag9;
                        goto LABEL_401fc8;
                    }
                    v27 = flag10;
                    if (!flag3)
                        goto LABEL_401fc8;
                    v27 = flag10 - flag9;
                    cur = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
                    if (((char)(cur >> 51) & 1))
                    {
                        v27 = flag9 - flag10;
                        cur = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
                        v38 = v27 | cur;
LABEL_40189c:
                        if (!v38)
                            goto LABEL_4019f0;
                        goto LABEL_4018a0;
                    }
                    if (!v27 && !cur)
                    {
LABEL_4020a0:
                        v34 = 0;
                        goto LABEL_4019fc;
                    }
                    else
                    {
                        v39 = v27 & 7;
                        flag4 = 1;
                        goto LABEL_4018ac;
                    }
                }
                else
                {
                    if (iter != 32767)
                    {
                        if (v19 != 32767)
                        {
                            if (!flag2)
                                goto LABEL_401f08;
                            goto LABEL_401ed8;
                        }
                    }
                    else
                    {
                        if (flag2)
                        {
                            v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                            if (v19 != 32767)
                                goto LABEL_401ed8;
                        }
                        else if (v19 != 32767)
                        {
LABEL_401f08:
                            if (!flag3)
                                goto LABEL_401f0c;
                            goto LABEL_4021cc;
                        }
                    }
                    if (flag3)
                    {
                        if ((char)arm64g_calculate_condition(26, cur & 0x4000000000000, 0, 0))
                            v21 &= 4294967295;
                        else
                            v21 = 1;
                        if (flag2)
                        {
                            v41 = __ROL__(cur, 61) & 0xe000000000000000;
                            v35 = __ROL__(cur, 61) & 2305843009213693951;
LABEL_402168:
                            v42 = v5 & 2305843009213693951 | v41;
                            v43 = v35;
                            if (((char)(v43 >> 47) & 1))
                            {
                                v43 = v35;
                                if (!((char)(cur >> 50) & 1))
                                {
                                    v42 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                                    v43 = __ROL__(cur, 61) & 2305843009213693951;
                                }
                            }
                            v45 = v43 * 8 | v42 >> 61;
                            v35 = __ROL__(v45, 61) & 2305843009213693951;
                            v34 = v42 & 2305843009213693951 | (v45 * 0x2000000000000000 | v45 >> 3) & 0xe000000000000000;
                            goto LABEL_401c44;
                        }
                        else
                        {
LABEL_4021cc:
                            v35 = __ROL__(cur, 61) & 2305843009213693951;
                            v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                            goto LABEL_401c44;
                        }
                    }
                    else if (flag2)
                    {
LABEL_401ed8:
                        v41 = __ROL__(cur, 61) & 0xe000000000000000;
                        v35 = __ROL__(cur, 61) & 2305843009213693951;
                        if (flag3)
                            goto LABEL_402168;
                        v34 = v5 & 2305843009213693951 | v41;
                        goto LABEL_401c44;
                    }
                    else
                    {
LABEL_401f0c:
                        v34 = 18446744073709551615;
                        v21 = 1;
LABEL_401c4c:
                        goto LABEL_4018f8;
                    }
                }
            }
            else
            {
                v27 = flag10 - flag9;
                flag8 = cur - cur - (arm64g_calculate_flag_c(4, flag10, flag9, 0) ^ 1);
                if (((char)(flag8 >> 51) & 1))
                {
                    v27 = flag9 - flag10;
                    flag8 = cur - cur - (arm64g_calculate_flag_c(4, flag9, flag10, 0) ^ 1);
                    goto LABEL_401834;
                }
                if (!v27 && !flag8)
                {
                    v34 = 0;
                    goto LABEL_4019fc;
                }
                else
                {
                    result = result;
LABEL_401834:
                    if (flag8)
                    {
                        if (!flag8)
                            v46 = 64;
                        else
                            v46 = Clz(flag8);
                        v47 = v46 - 12;
LABEL_401840:
                        v50 = v27 >> ((char)-((unsigned int)v47) & 63) | flag8 << ((char)v47 & 63);
                        v27 <<= (char)v47 & 63;
                    }
                    else
                    {
                        if (!v27)
                            v48 = 64;
                        else
                            v48 = Clz(v27);
                        v47 = v48 + 52;
                        if ((unsigned int)v47 <= 63)
                            goto LABEL_401840;
                        v50 = v27 << ((char)(v48 - 12) & 63);
                        v27 = flag8;
                    }
                    v51 = v47 * 0x100000000 >> 63 & 0xffffffff00000000 | v47 & 4294967295;
                    if (v51 >= iter)
                    {
                        v52 = v47 - iter;
                        v53 = v52 + 1;
                        if (63 >= v53)
                        {
                            v54 = 64 - v53;
                            if (!v27 << (v54 & 63))
                                v55 = 0;
                            else
                                v55 = 1;
                            cur = v50 >> ((char)v53 & 63);
                            v27 = v50 << (v54 & 63) | v27 >> ((char)v53 & 63) | v55;
                            goto LABEL_401898;
                        }
                        else
                        {
                            if (v53 != 64)
                                v27 |= v50 << ((char)(128 - v53) & 63);
                            cur = 0;
                            if (!v27)
                                v56 = 0;
                            else
                                v56 = 1;
                            v27 = v56 | v50 >> ((char)(v52 - 63) & 63);
                            v38 = v27;
                            goto LABEL_40189c;
                        }
                    }
                    else
                    {
                        iter -= v51;
                        cur = v50 & 18444492273895866367;
                    }
                }
            }
        }
    }
    else
    {
        v21 = flag5 - flag6;
        if ((unsigned int)v21 <= 0)
        {
            if ((char)arm64g_calculate_condition(3, v21 & 4294967295, 0, 0))
            {
                v69 = flag5 + 1;
                if (!((char)arm64g_calculate_condition(26, v69 & 32766, 0, 0)))
                {
                    flag1 = cur | flag10;
                    if (!flag5)
                    {
                        flag7 = cur | flag9;
                        if (flag1)
                        {
                            v27 = flag10;
                            if (!flag7)
                                goto LABEL_401fc8;
                            v27 = flag10 + flag9;
                            cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
                            if (!((char)(cur >> 51) & 1))
                            {
LABEL_401898:
                                v38 = v27 | cur;
                                goto LABEL_40189c;
                            }
                            else
                            {
                                cur &= 18444492273895866367;
                                v39 = v27 & 7;
                                flag4 = 0;
                                iter = 1;
                                goto LABEL_4018ac;
                            }
                        }
                        else
                        {
                            if (!flag7)
                            {
                                v34 = 0;
                                goto LABEL_4019fc;
                            }
                            else
                            {
                                v27 = flag9;
LABEL_401fc8:
                                flag11 = 0;
                                iter = 0;
                                goto LABEL_401fd0;
                            }
                        }
                    }
                    else
                    {
                        if (iter != 32767)
                        {
                            if (v19 != 32767)
                            {
                                if (flag1)
                                    goto LABEL_4021f8;
                                goto LABEL_402050;
                            }
                            if (cur || flag9)
                                goto LABEL_4022bc;
                            if (!flag1)
                                return v21;
                            goto LABEL_402290;
                        }
                        else
                        {
                            if (flag1)
                            {
                                v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                                if (v19 != 32767)
                                {
LABEL_4021f8:
                                    if (cur || flag9)
                                        goto LABEL_402200;
                                }
                                else
                                {
                                    if (cur || flag9)
                                        goto LABEL_4022bc;
                                }
LABEL_402290:
                                v34 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                                v35 = __ROL__(cur, 61) & 2305843009213693951;
                                goto LABEL_401c44;
                            }
                            else
                            {
                                if (v19 != 32767)
                                    goto LABEL_402050;
                                if (!cur && !flag9)
                                    return v21;
LABEL_4022bc:
                                if ((char)arm64g_calculate_condition(26, cur & 0x4000000000000, 0, 0))
                                    v21 &= 4294967295;
                                else
                                    v21 = 1;
                                if (!flag1)
                                {
LABEL_402050:
                                    v35 = __ROL__(cur, 61) & 2305843009213693951;
                                    v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                                    goto LABEL_401c44;
                                }
                                else
                                {
LABEL_402200:
                                    v73 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                                    v74 = __ROL__(cur, 61) & 2305843009213693951;
                                    if (((char)(cur >> 50) & 1) && !((char)(cur >> 50) & 1))
                                    {
                                        v73 = v7 & 2305843009213693951 | cur * 0x2000000000000000;
                                        v74 = __ROL__(cur, 61) & 2305843009213693951;
                                    }
                                    v75 = v74 * 8 | v73 >> 61;
                                    v34 = v73 & 2305843009213693951 | (v75 * 0x2000000000000000 | v75 >> 3) & 0xe000000000000000;
                                    v35 = __ROL__(v75, 61) & 2305843009213693951;
                                    goto LABEL_401c44;
                                }
                            }
                        }
                    }
                }
                else
                {
                    if (v69 != 32767)
                    {
                        v76 = flag10 + flag9;
                        v77 = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
                        flag4 = 0;
                        v39 = (v76 * 0x8000000000000000 | v76 >> 1) & 9223372036854775815 & 7;
                        cur = __ROL__(v77, 63) & 9223372036854775807;
                        v27 = v77 * 0x8000000000000000 | v76 >> 1;
                        iter = v69;
                    }
                    else
                    {
                        v67 = v10 & 0xc00000;
                        if ((char)arm64g_calculate_condition(10, v10 & 0xc00000, 0, 0))
                        {
LABEL_401ff4:
                            goto LABEL_4022a0;
                        }
                        if (v67 != &$d.16)
                            v80 = 0;
                        else
                            v80 = 1;
                        if ((char)arm64g_calculate_condition(25, (unsigned long long)(v80 & (v16 ^ 1)), 0, 0))
                        {
LABEL_4022a0:
                            v1 = 0;
                            v83 = __sfp_handle_exceptions();
                            return __sfp_handle_exceptions();
                        }
                        if (v67 == &g_800000)
                        {
                            if (!result)
                                goto LABEL_40223c;
                            goto LABEL_402108;
                        }
LABEL_401f64:
                        v21 = 20;
                        if (v67 == &$d.16)
                        {
                            cur = 18446744073709551615;
                            iter = 32766;
                            v27 = 18446744073709551615;
                            flag4 = 0;
                            v21 = 20;
                            if (!result)
                            {
LABEL_401bd4:
                                v27 += 8;
                                if (!((char)arm64g_calculate_condition(50, v27, 8, 0)))
                                    cur += 1;
                            }
LABEL_401bdc:
                            flag11 = cur & 0x8000000000000;
                            if (flag4)
                            {
                                v21 = (unsigned int)v21 | 8;
                                goto LABEL_4018d8;
                            }
                        }
LABEL_401aa8:
                        switch (v67)
                        {
                        case 0:
LABEL_401ae0:
                            break;
                        case 4194304:
                            if (!result)
                                goto LABEL_401ae0;
LABEL_401ac4:
                            v34 = 18446744073709551615;
                            v21 = (unsigned int)v21 | 20;
                            goto LABEL_4019fc;
                        case 8388608:
                            v81 = 1;
LABEL_401abc:
                            if (!((char)arm64g_calculate_condition(25, (unsigned long long)(v81 & (unsigned int)result), 0, 0)))
                                goto LABEL_401ac4;
                            break;
                        default:
                            v81 = 0;
                            goto LABEL_401abc;
                        }
                        goto LABEL_4019fc;
                    }
LABEL_4018ac:
                    if (!v39)
                    {
                        flag11 = cur & 0x8000000000000;
                        v21 = 0;
                        if (flag4)
                        {
LABEL_401fd0:
                            v21 = 0;
                            if (((char)(v10 >> 11) & 1))
                                v21 = 8;
                        }
LABEL_4018d8:
                        if (flag11)
                            goto LABEL_4018dc;
                        goto LABEL_401a88;
                    }
                    switch (v78)
                    {
                    case 4194304:
                        v21 = 16;
                        if (!result)
                            goto LABEL_401bd4;
                        break;
                    case 8388608:
                        v21 = 16;
                        if (result)
                            goto LABEL_401bd4;
                        break;
                    case 0:
                        v21 = 16;
                        if (((char)v27 & 15) != 4)
                        {
                            if (!((char)arm64g_calculate_condition(50, v27, 4, 0)))
                                cur += 1;
                            v27 += 4;
                            break;
                        }
                        break;
                    default:
                        flag11 = cur & 0x8000000000000;
                        v21 = 16;
                        if (flag4)
                        {
                            v21 = 24;
                            goto LABEL_4018d8;
                        }
                    }
                    goto LABEL_401bdc;
                }
            }
            if (flag5)
            {
                v21 = -((unsigned int)v21);
                cur |= 0x8000000000000;
                goto LABEL_401b40;
            }
            if (cur || flag10)
            {
                v21 = ~((unsigned int)v21);
                if ((unsigned int)v21)
                {
LABEL_401b40:
                    if (v19 != 32767)
                    {
                        if (116 >= (unsigned int)v21)
                        {
                            if (63 >= (unsigned int)v21)
                            {
                                v63 = 64 - (unsigned int)v21;
                                if (!flag10 << (v63 & 63))
                                    v64 = 0;
                                else
                                    v64 = 1;
                                v65 = cur << (v63 & 63) | flag10 >> ((char)v21 & 63) | v64;
                                cur += cur >> ((char)v21 & 63);
                            }
                            else
                            {
                                if ((unsigned int)v21 != 64)
                                    flag10 |= cur << ((char)(128 - (unsigned int)v21) & 63);
                                if (!flag10)
                                    v66 = 0;
                                else
                                    v66 = 1;
                                v65 = v66 | cur >> ((char)((unsigned int)v21 - 64) & 63);
                            }
                        }
                        else
                        {
                            if (!cur && !flag10)
                                v65 = 0;
                            else
                                v65 = 1;
                        }
                        v27 = v65 + flag9;
                        if ((char)arm64g_calculate_condition(50, v65, flag9, 0))
                        {
                            iter = v19;
                            goto LABEL_401b98;
                        }
                        else
                        {
                            cur += 1;
                            iter = v19;
                            goto LABEL_401b98;
                        }
                    }
                    else
                    {
                        if (!cur && !flag9)
                            return v21;
                        v34 = v7 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
                        v35 = __ROL__(cur, 61) & 2305843009213693951;
                        v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                        goto LABEL_401c44;
                    }
                }
                else
                {
                    v27 = flag10 + flag9;
                    cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
                    iter = flag6;
LABEL_401b98:
                    if (((char)(cur >> 51) & 1))
                    {
                        iter += 1;
                        if (iter != 32767)
                        {
                            flag4 = 0;
                            v27 = v27 & 1 | v27 >> 1 | cur * 0x8000000000000000;
                            cur = __ROL__(cur & 18444492273895866367, 63) & 9223372036854775807;
                            v39 = v27 & 7;
                            goto LABEL_4018ac;
                        }
                        else
                        {
                            v67 = v10 & 0xc00000;
                            if ((char)arm64g_calculate_condition(10, v10 & 0xc00000, 0, 0))
                                goto LABEL_401ff4;
                            if (v67 != &$d.16)
                                v68 = 0;
                            else
                                v68 = 1;
                            if ((char)arm64g_calculate_condition(25, (unsigned long long)(v68 & (v16 ^ 1)), 0, 0))
                                goto LABEL_4022a0;
                            if (v67 != &g_800000)
                                goto LABEL_401f64;
                            if (result)
                            {
LABEL_402108:
                                goto LABEL_4022a0;
                            }
                            else
                            {
LABEL_40223c:
                                cur = 18446744073709551615;
                                v27 = 18446744073709551615;
                                iter = 32766;
                                v21 = 20;
LABEL_4018dc:
                                if (iter + 1 != 32767)
                                {
                                    v34 = cur * 0x2000000000000000 | v27 >> 3;
                                }
                                else
                                {
                                    v67 = v10 & 0xc00000;
                                    goto LABEL_401aa8;
                                }
                            }
LABEL_4018f8:
                            if ((unsigned int)v21)
                            {
                                *((uint128_t *)&v1) = v34;
                                v83 = __sfp_handle_exceptions();
                                return __sfp_handle_exceptions();
                            }
                            return v21;
                        }
                    }
                }
            }
            else
            {
                if (flag6 != 32767)
                {
                    v27 = flag9;
                    iter = flag6;
                }
                else
                {
                    if (!cur && !flag9)
                    {
LABEL_401d34:
                        v34 = 0;
                        v35 = 0;
                        v21 = 0;
                    }
                    else
                    {
                        v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
                        v27 = flag9;
LABEL_401a80:
                        iter = 32767;
LABEL_401a88:
                        v35 = __ROL__(cur, 61) & 2305843009213693951;
                        v34 = cur * 0x2000000000000000 | v27 >> 3;
                        if (iter != 32767)
                        {
LABEL_4019fc:
                            goto LABEL_4018f8;
                        }
                    }
LABEL_401c44:
                    if (v35 || v34)
                        goto LABEL_401c4c;
                    v34 = 0;
                    goto LABEL_4018f8;
                }
            }
        }
        else if (flag6)
        {
            cur |= 0x8000000000000;
            v57 = v21;
            if (flag5 != 32767)
                goto LABEL_401970;
LABEL_401c24:
            if (!cur && !flag10)
                return v21;
            v34 = v5 & 2305843009213693951 | (cur * 0x2000000000000000 | cur >> 3) & 0xe000000000000000;
            v35 = __ROL__(cur, 61) & 2305843009213693951;
            v21 = ((unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1) & 1;
            goto LABEL_401c44;
        }
        else
        {
            if (cur || flag9)
            {
                if ((unsigned int)v21 != 1)
                {
                    v57 = (unsigned int)v21 - 1;
                    if (flag5 == 32767)
                    {
                        if (!cur && !flag10)
                            return cur | flag10;
                        goto LABEL_401a74;
                    }
LABEL_401970:
                    if (116 >= (unsigned int)v57)
                    {
                        if (63 >= (unsigned int)v57)
                        {
                            v59 = 64 - (unsigned int)v57;
                            if (!flag9 << (v59 & 63))
                                v60 = 0;
                            else
                                v60 = 1;
                            v61 = cur << (v59 & 63) | flag9 >> ((char)v57 & 63) | v60;
                            cur += cur >> ((char)v57 & 63);
                        }
                        else
                        {
                            if ((unsigned int)v57 != 64)
                                flag9 |= cur << ((char)(128 - (unsigned int)v57) & 63);
                            if (!flag9)
                                v62 = 0;
                            else
                                v62 = 1;
                            v61 = v62 | cur >> ((char)((unsigned int)v57 - 64) & 63);
                        }
                    }
                    else
                    {
                        if (!cur && !flag9)
                            v61 = 0;
                        else
                            v61 = 1;
                    }
LABEL_401d50:
                    v27 = v61 + flag10;
                    if (!((char)arm64g_calculate_condition(50, v61, flag10, 0)))
                        cur += 1;
                    goto LABEL_401d50;
                }
                else
                {
                    v27 = flag10 + flag9;
                    cur = cur + cur + arm64g_calculate_flag_c(2, flag10, flag9, 0);
                    goto LABEL_401b98;
                }
            }
            v27 = flag10;
            if (flag5 == 32767 && (cur || flag10))
            {
                v21 = (unsigned int)(__ROL__(cur, 14)) & 16383 ^ 1;
                v27 = flag10;
                goto LABEL_401a80;
            }
        }
    }
    v39 = v27 & 7;
    flag4 = 0;
    if (!iter)
    {
        if (v27 || cur)
        {
LABEL_4018a0:
            v39 = v27 & 7;
            iter = 0;
            flag4 = 1;
            goto LABEL_4018ac;
        }
        else
        {
LABEL_4019f0:
            v34 = 0;
            v21 = 0;
            goto LABEL_4019fc;
        }
    }
}


// Function: sub_4022f4 at 0x4022f4
void sub_4022f4()
{
    __multf3();
    return;
}


// Function: __multf3 at 0x402300

unsigned int __multf3()
{
    unsigned long long v8;  // x1
    unsigned long long v9;  // x0
    unsigned long long v17;  // x3
    unsigned long long v98;  // x7
    unsigned long long iter;  // x12
    unsigned long long v18;  // x8
    unsigned long long v19;  // x17
    unsigned long long v20;  // x1
    unsigned int flag1;  // w0
    unsigned long long v22;  // x8
    unsigned long long v23;  // x8
    unsigned long long v24;  // x0
    unsigned long long v25;  // x3
    unsigned long long v26;  // x0
    char v27;  // x8
    unsigned long long v28;  // x4
    char v29;  // x16
    unsigned long long v30;  // x5
    unsigned int flag5;  // w13
    unsigned long long v10;  // x2
    unsigned int v11;  // fpcr
    unsigned long v12;  // x6
    unsigned long long result;  // x9
    char v15;  // x15
    unsigned int flag6;  // w3
    char *v0;  // [bp-0x50]
    char v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    char v6;  // [bp-0x8]
    char v7;  // [bp+0x0]

    v0 = &v7;
    v8 = *((long long *)&v4);
    v9 = v5;
    v98 = *((long long *)&vvar_458{r336|16b});
    v10 = *((long long *)&v6);
    v12 = v11;
    result = v9 & 281474976710655;
    v15 = (char)(__ROL__(v9, 1)) & 1;
    flag6 = ((unsigned int)v9 * 0x10000 | (unsigned int)(v9 >> 48)) & 4294934527 & 32767;
    switch (flag6)
    {
    case 0:
        v23 = v8 | result;
        if (v23)
        {
            if (result)
            {
                if (!result)
                    v24 = 64;
                else
                    v24 = Clz(result);
                v25 = v24 - 15;
LABEL_402758:
                v27 = (char)v25 + 3;
                result = v8 >> ((char)(61 - v25) & 63) | result << (v27 & 63);
                v18 = v8 << (v27 & 63);
            }
            else
            {
                if (!v8)
                    v26 = 64;
                else
                    v26 = Clz(v8);
                v25 = v26 + 49;
                v24 = v26 + 64;
                if (v25 <= 60)
                    goto LABEL_402758;
                v18 = 0;
                result = v8 << ((char)((unsigned int)v25 - 61) & 63);
            }
            v20 = 0;
            v17 = 18446744073709535249 - v24;
            v19 = 0;
            flag1 = 0;
            break;
        }
        else
        {
            result = 0;
            v20 = 4;
            v17 = 0;
            v19 = 1;
            flag1 = 0;
            v18 = v23;
            break;
        }
    case 32767:
        v22 = v8 | result;
        if (!v22)
        {
            result = 0;
            v20 = 8;
            v17 = 32767;
            v19 = 2;
            flag1 = 0;
            v18 = v22;
            break;
        }
        else
        {
            v20 = 12;
            flag1 = ((unsigned int)(__ROL__(result, 17)) & 131071 ^ 1) & 1;
            v17 = 32767;
            v19 = 3;
            v18 = v8;
            break;
        }
    default:
        result = result * 8 | v8 >> 61 | 0x8000000000000;
        v17 = (flag6 & 65535) + 18446744073709535233;
        v18 = __ROL__(v8, 3) & 18446744073709551608;
        v19 = 0;
        v20 = 0;
        flag1 = 0;
        break;
    }
    v28 = __ROL__(v10, 1) & 1;
    iter = v10 & 281474976710655;
    v29 = v28;
    v30 = v28;
    flag5 = ((unsigned int)v10 * 0x10000 | (unsigned int)(v10 >> 48)) & 4294934527 & 32767;
    switch (vvar_536{r120|4b}): 3 cases
}


// Function: __sfp_handle_exceptions at 0x402b00
unsigned long long __sfp_handle_exceptions(unsigned long long a0)
{
    uint128_t v0;  // qcflag

    if (((char)(a0 >> 4) & 1))
        a0 = ((unsigned long long)(v0 >> 64) || (unsigned long long)v0) * 0x8000000;
    return a0;
}


// Function: _fini at 0x402b70
long long _fini()
{
    unsigned long v0;  // x0

    return v0;
}

